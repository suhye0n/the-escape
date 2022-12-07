using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using System.Text;
using UnityEngine.UI;
using TMPro;


public class WeaponHandler : NetworkBehaviour
{

    [Header("Effects")]
    public ParticleSystem fireParticleSystem;
    public AudioClip audio; //오디오 클립, 총 발사 소리 넣기 위해서
    public AudioSource audioSource;

    [Header("Aim")]
    public Transform aimPoint;

    [Header("Collision")]
    public LayerMask collisionLayers;


    [Networked(OnChanged = nameof(OnFireChanged))]
    public bool isFiring { get; set; }


    float lastTimeFired = 0;


    //Other components
    HPHandler hpHandler;
    NetworkPlayer networkPlayer;
    NetworkObject networkObject;

    //refactoring 할 수도d
    private bool keyFlag = false; //가짜 진짜 열쇠 판단용 변수
    private bool hasKey = false; //열쇠 소유 확인용 변수

    //퍼즐 문제를 위한 변수들
    private StringBuilder stringBuilder = new StringBuilder();
    private string strArrayToString;
    private int puzzleCount = 0;

    public GameObject ItemGetUI; //아이템 획득 UI
    public TMP_Text tmp; //아이템 획득 UI에서의 텍스트를 변경하기 위한 변수

    private bool hasOil = false; //기름 소유 확인용 변수

    private float clickTime; //시간초
    private bool isClickBoat = false; //보트 누르는 중인지 확인용 변수

    public GameObject hintPanel; //힌트 패널 오브젝트
    public TMP_Text hintText; //힌트 텍스트 오브젝트
    private string[] arrHint = new string[] {
        "|  조작법  |\n\n\n1. W/A/S/D 또는 방향키로 캐릭터를 움직일 수 있다.2. Space바를 통해 점프를 할 수 있다.3. V를 통해 멀티 음성을 켜고 끌 수 있다.\n4. F를 통해 상호작용 할 수 있다.",
        "|  신부의 일기 1  |\n\n\n19xx 10월 12일\n\n나는 나의 성당을 지키기 위해서 성당의 문을 닫는 특별한 장치를 만들었다.\n이 장치는 나만이 아는 방식으로 설계가 되었고\n이 장치를 풀기 위해서는 내가 정한 순서대로 버튼을 눌러야 한다.\n근데 이걸 내가 어디 적어놨던거 같은데.....\n\n\n\n(성당에 단서가 있을 거 같다)",
        "|  신부의 일기 2  |\n\n\n19xx 10월 14일\n\n요즘 들리는 소문으로는 이 마을의 시장이 몰래 탈출했다던데\n방법만 알면 나도 탈출할 수 있을텐데....\n평소 마을 사람들의 고혈을 그렇게 빨아먹고 이 상황이 되어서는 도망이라니\n분명 시장 집에 탈출할 단서가 있을 거야.....\n그런데 대체 어떻게 도망간걸까...?\n\n\n\n(마을에서 가장 큰 집에 단서가 있을 거 같다)",
        "|  시장의 일기  |\n\n\n19xx 10월 8일\n\n요즘 마을 경찰들이 어수선하던데.... 좀비가 진짜 있긴 한건가?\n혹시 모르니까 집 뒤편에 강으로 도망갈 수 있도록 준비해 둬야겠어.\n여분용 기름을 미로에 숨겨둬야겠어",
        "문 작동 장치에 대한 단서\n\n1. (0, 0, 1)\n2. (1, 0, 0)\n3. (0, 1, 0)\n4. (1, 1, 1)"
    };

    private void Awake()
    {
        hpHandler = GetComponent<HPHandler>();
        networkPlayer = GetBehaviour<NetworkPlayer>();
        networkObject = GetComponent<NetworkObject>();
        audioSource = GetComponentInChildren<AudioSource>();
    }

    // Start is called before the first frame update
    void Start()
    {

    }
    private void Update()
    {
        if (isClickBoat)
        {
            clickTime += Time.deltaTime;
            Debug.Log($"Time : {clickTime}");
        }
        else
        {
            clickTime = 0;
        }
    }

    public override void FixedUpdateNetwork()
    {
        if (hpHandler.isDead)
            return;

        //Get the input from the network
        if (GetInput(out NetworkInputData networkInputData))
        {
            if (networkInputData.isFireButtonPressed)
                Fire(networkInputData.aimForwardVector);

            if (networkInputData.isInteractButtonPressed)
                Interact(networkInputData.aimForwardVector);

            if (networkInputData.isEngineButtonPressed)
            {
                Engine(networkInputData.aimForwardVector);
                isClickBoat = true;
            }
            else
            {
                isClickBoat = false;
            }
        }
    }


    void Interact(Vector3 aimForwardVector)
    {
        Runner.LagCompensation.Raycast(
            aimPoint.position,
            aimForwardVector,
            100,
            Object.InputAuthority,
            out var hitinfo,
            collisionLayers,
            HitOptions.IncludePhysX/*IgnoreInputAuthority*/);

        float buttonDistance = 4;


        if (hitinfo.Distance < buttonDistance)
        {
            if (hitinfo.Collider != null)
            {
                //tmp.text = "";
                Debug.Log($"{Time.time} {transform.name} hit collider {hitinfo.Collider}");

                //Button
                if (hitinfo.Collider.CompareTag("DoorButton"))
                    hitinfo.Collider.GetComponent<ButtonController>().isOpenAnimation = true;

                //Hint
                if (hitinfo.Collider.CompareTag("0")
                    || hitinfo.Collider.CompareTag("1")
                    || hitinfo.Collider.CompareTag("2")
                    || hitinfo.Collider.CompareTag("3")
                    || hitinfo.Collider.CompareTag("4"))
                    ShowHint(hitinfo);

                //Recovery item
                if (hitinfo.Collider.CompareTag("RecoveryItem"))
                    transform.gameObject.GetComponent<HPHandler>().GetRecoveryItem(5);

                //Oil
                if (hitinfo.Collider.CompareTag("Oil"))
                    GetOil(hitinfo);

                //Boat
                if (hitinfo.Collider.CompareTag("Boat"))
                {
                    if (!hasOil)
                    {
                        tmp.text = "작동하지 않습니다.";
                        StartCoroutine("FadeInOutUI");
                    }
                    else
                    {
                        tmp.text = "E키를 5초이상 눌러야 합니다.";
                        StartCoroutine("FadeInOutUI");
                    }
                }

                //OrderedButton
                if (hitinfo.Collider.CompareTag("O")
                    || hitinfo.Collider.CompareTag("P")
                    || hitinfo.Collider.CompareTag("E")
                    || hitinfo.Collider.CompareTag("N"))
                    CheckOrder(hitinfo.Collider.tag, hitinfo.GameObject);

                //Key
                if (!hasKey)
                {
                    if (hitinfo.Collider.CompareTag("TrueKey"))
                        GetKey(hitinfo, true);
                    if (hitinfo.Collider.CompareTag("FalseKey"))
                        GetKey(hitinfo, false);
                }
                else if (hasKey)
                {
                    UseKey(hitinfo, keyFlag);
                }
            }
        }

    }

    void ShowHint(LagCompensatedHit hitObject)
    {
        hintPanel.SetActive(true);
        int index = int.Parse(hitObject.Collider.tag);
        hintText.text = arrHint[index];
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
    }
    void CheckOrder(string tag, GameObject door)
    {
        if (stringBuilder.ToString().Contains(tag)) return;

        stringBuilder.Append(tag);
        puzzleCount++;

        strArrayToString = stringBuilder.ToString();
        print("퍼즐 상태:" + strArrayToString);
        if (strArrayToString == "OPEN")
        {
            door.GetComponent<ButtonController>().isOpenAnimation = true;
            tmp.text = "정답입니다!!";
            StartCoroutine("FadeInOutUI");
        }
        else if (puzzleCount == 4)
        {
            tmp.text = "잘못된 입력입니다. 3초 후 다시 시도할 수 있습니다.";
            StartCoroutine("FadeInOutUI");
            StartCoroutine("LockButton");
            //stringBuilder = new StringBuilder();
            puzzleCount = 0;
        }
    }

    IEnumerator LockButton()
    {

        yield return new WaitForSeconds(3.0f);
        stringBuilder = new StringBuilder();
    }
    void UseKey(LagCompensatedHit hitObject, bool isTrue)
    {
        //열쇠 소지 상태에서 열쇠 더 획득하려고 할시
        if (hitObject.Collider.CompareTag("FalseKey") || hitObject.Collider.CompareTag("TrueKey"))
        {
            tmp.text = "이미 열쇠를 소지하고 있습니다.";
            StartCoroutine("FadeInOutUI");
        }

        if (hitObject.Collider.CompareTag("Door"))
        {
            //진짜 열쇠 사용
            if (isTrue)
            {
                hitObject.GameObject.GetComponent<ButtonController>().isOpenAnimation = true;
                hasKey = false;
                tmp.text = "열쇠를 사용했습니다.";
                StartCoroutine("FadeInOutUI");
            }
            //가짜 열쇠 사용
            else
            {
                hasKey = false;
                tmp.text = "열쇠 구멍에 맞지 않습니다.";
                StartCoroutine("FadeInOutUI");
            }
        }
    }
    void GetKey(LagCompensatedHit hitObject, bool isTrue)
    {
        keyFlag = isTrue;
        hasKey = true;
        hitObject.GameObject.GetComponent<ObjectHandler>().isDestroy = true;
        tmp.text = "검은 열쇠를 획득했습니다.";
        StartCoroutine("FadeInOutUI");
    }
    void GetOil(LagCompensatedHit hitObject)
    {
        hasOil = true;
        hitObject.GameObject.GetComponent<ObjectHandler>().isDestroy = true;
        tmp.text = "보트용 기름을 획득했습니다.";
        StartCoroutine("FadeInOutUI");
    }

    void Fire(Vector3 aimForwardVector)
    {
        audioSource.clip = audio;

        //Limit fire rate
        if (Time.time - lastTimeFired < 0.15f)
            return;

        StartCoroutine(FireEffectCO());

        Runner.LagCompensation.Raycast(
            aimPoint.position,
            aimForwardVector,
            100,
            Object.InputAuthority,
            out var hitinfo,
            collisionLayers,
            HitOptions.IncludePhysX/*IgnoreInputAuthority*/);

        float hitDistance = 23;

        if (hitinfo.Distance < hitDistance)
        {
/*            if (hitinfo.Hitbox != null)
            {
                Debug.Log($"{Time.time} {transform.name} hit hitbox {hitinfo.Hitbox.transform.root.name}");

                if (Object.HasStateAuthority)
                    hitinfo.Hitbox.transform.root.GetComponent<HPHandler>().OnTakeDamage(networkPlayer.nickName.ToString(), 1);

            }*/
            if (hitinfo.Collider != null)
            {
                Debug.Log($"{Time.time} {transform.name} hit collider {hitinfo.Collider}");

                if (hitinfo.Collider.CompareTag("Enemy"))
                    hitinfo.Collider.GetComponent<EnemyFSM>().HitEnemy(5);
            }
        }
        lastTimeFired = Time.time;
    }

    void Engine(Vector3 aimForwardVector)
    {
        Runner.LagCompensation.Raycast(
            aimPoint.position,
            aimForwardVector,
            100,
            Object.InputAuthority,
            out var hitinfo,
            collisionLayers,
            HitOptions.IncludePhysX/*IgnoreInputAuthority*/);

        float buttonDistance = 10;

        if (hitinfo.Distance > 0)
            buttonDistance = hitinfo.Distance;


        if (hitinfo.Collider != null)
        {
            if (hitinfo.Collider.CompareTag("Boat"))
            {
                if (!hasOil)
                {
                    tmp.text = "작동하지 않습니다.";
                    StartCoroutine("FadeInOutUI");
                }
                else
                {
                    if (clickTime >= 5)
                    {
                        hitinfo.GameObject.GetComponent<ShowClearUI>().isShow = true;
                        //Time.timeScale = 0f;
                    }
                }
            }
        }
    }

    IEnumerator FireEffectCO()
    {
        isFiring = true;

        if (Object.HasInputAuthority)
        {
            if (!fireParticleSystem.isPlaying)
            {
                fireParticleSystem.Play();
            }
            if (!audioSource.isPlaying)
            {
                networkObject.GetComponent<NetworkInGameMessages>().PlayAudio(audio);
            }
        }

        yield return new WaitForSeconds(0.09f);

        isFiring = false;
    }

    IEnumerator FadeInOutUI()
    {
        ItemGetUI.SetActive(true);
        yield return new WaitForSeconds(4.0f);
        ItemGetUI.SetActive(false);
    }

    static void OnFireChanged(Changed<WeaponHandler> changed)
    {
        bool isFiringCurrent = changed.Behaviour.isFiring;

        //Load the old value
        changed.LoadOld();

        bool isFiringOld = changed.Behaviour.isFiring;

        if (isFiringCurrent && !isFiringOld)
            changed.Behaviour.OnFireRemote();

    }


    void OnFireRemote()
    {
        if (!Object.HasInputAuthority)
            networkObject.GetComponent<NetworkInGameMessages>().PlayAudio(audio);
    }
}
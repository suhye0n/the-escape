using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using Photon.Voice.Unity;
using TMPro;

public class CharacterMovementHandler : NetworkBehaviour
{
    bool isRespawnRequested = false;

    //Other components
    NetworkCharacterControllerPrototypeCustom networkCharacterControllerPrototypeCustom;
    HPHandler hpHandler;
    NetworkInGameMessages networkInGameMessages;
    NetworkPlayer networkPlayer;

    public TMP_Text mic_text;
    public GameObject ExitPanel;
    public int moveSpeed = 1000;
    Vector3 originPos;
    //===========================================================================
    private Animator animator;

    private bool voiceFlag = true;
    [Networked] //마우스 버튼 네트워크상 체크
    private NetworkButtons _mouseButtonsInput { get; set; }

    [Networked(OnChanged = nameof(OnRunChanged))] //run 변수 변화시 콜백함수 실행
    private int _runCount { get; set; } //run 변수 선언 (예시 따라하다보니 Count라고 그대로 적용됭ㅋㅋㅋ)

    [Networked(OnChanged = nameof(OnShootChanged))] 
    private int _shootCount { get; set; } 
    //===========================================================================
    private void Awake()
    {
        networkCharacterControllerPrototypeCustom = GetComponent<NetworkCharacterControllerPrototypeCustom>();
        hpHandler = GetComponent<HPHandler>();
        networkInGameMessages = GetComponent<NetworkInGameMessages>();
        networkPlayer = GetComponent<NetworkPlayer>();
        animator = GetComponentInChildren<Animator>();
    }

    // Start is called before the first frame update
    void Start()
    {
        originPos = transform.position;
        print(originPos);
    }


    public override void FixedUpdateNetwork()
    {
        if (Object.HasStateAuthority)
        {
            //리스폰 해야 될 때
            if (isRespawnRequested)
            {
                Respawn();
                return;
            }

            //죽었을 때
            if (hpHandler.isDead)
                return;
        }

        //Get the input from the network
        if (GetInput(out NetworkInputData networkInputData))
        {
            //aim
            transform.forward = networkInputData.aimForwardVector;

            //rotation
            Quaternion rotation = transform.rotation;
            rotation.eulerAngles = new Vector3(0, rotation.eulerAngles.y, rotation.eulerAngles.z);
            transform.rotation = rotation;

            //Move
            Vector3 moveDirection = transform.forward * networkInputData.movementInput.y + transform.right * networkInputData.movementInput.x;
            moveDirection.Normalize();

            networkCharacterControllerPrototypeCustom.Move(moveDirection * moveSpeed);

            //Jump
            if(networkInputData.isJumpPressed)
                networkCharacterControllerPrototypeCustom.Jump();

            //Voice
            if (networkInputData.isVoiceButtonPressed)
            {
                print("voice button pressed");
                Runner.transform.Find("Recorder").GetComponent<Recorder>().TransmitEnabled = voiceFlag;
                if (voiceFlag) mic_text.text = "Voice ON";
                else mic_text.text = "Voice OFF";
                voiceFlag = !voiceFlag;
            }
           
            

            //떨어졌을 때 확인
            CheckFallRespawn();
        }

        //===========================================================================
        var input = GetInput<NetworkInputData>(); //NetworkInputData의 변수 활용을 위한 input 변수
        if (input.HasValue == false) //input에 값 있는지 확인
            return;

        //movementInput 변수에 값 변화가 있으면 실행(움직였을 때)
        if (input.Value.movementInput != Vector2.zero) 
        {
            _runCount++;

        }else if(input.Value.movementInput == Vector2.zero) //멈췄을 때
        {
            _runCount = 0;

        }
 

        if (input.Value.isFireButtonPressed) //발사 버튼 눌렀을 때
        {
            _shootCount++;

        }else if (!input.Value.isFireButtonPressed) //아닐 때
        {
            _shootCount = 0;
        }
        
        //_lastButtonsInput = input.Value.movementInput; //필요없어 보임
        //===========================================================================
    }

    void CheckFallRespawn()
    {
        if (transform.position.y < -12)
        {
            if (Object.HasStateAuthority)
            {
                networkInGameMessages.SendInGameRPCMessage(networkPlayer.nickName.ToString(), $"{transform.position}fell of the world");
                Respawn();
            }
        }
    }

    public void RequestRespawn()
    {
        isRespawnRequested = true;
    }

    void Respawn()
    {
        networkCharacterControllerPrototypeCustom.TeleportToPosition(originPos);

        hpHandler.OnRespawned();

        isRespawnRequested = false;
    }



    public void SetCharacterControllerEnabled(bool isEnabled)
    {
        networkCharacterControllerPrototypeCustom.Controller.enabled = isEnabled;
    }
    public static void OnRunChanged(Changed<CharacterMovementHandler> changed) //[Networked]참조 변수의 변화가 있을 때 실행하는 콜백함수
    {
        changed.LoadOld();
        int previousRunCount = changed.Behaviour._runCount;

        changed.LoadNew();

        if (changed.Behaviour._runCount > previousRunCount)
        {
            changed.Behaviour.animator.SetFloat("Speed", 0.5f); //애니메이션 blender tree 사용
            // Play jump sound/particle effect
        }
        else
        {
            changed.Behaviour.animator.SetFloat("Speed", 0); //애니메이션 blender tree 사용
        }
    }

    public static void OnShootChanged(Changed<CharacterMovementHandler> changed) //[Networked]참조 변수의 변화가 있을 때 실행하는 콜백함수
    {
        changed.LoadOld();
        int previousShootCount = changed.Behaviour._shootCount;

        changed.LoadNew();

        

        if (changed.Behaviour._shootCount > previousShootCount)
        {
            changed.Behaviour.animator.SetLayerWeight(changed.Behaviour.animator.GetLayerIndex("Shoot Layer"), 1);
            changed.Behaviour.animator.SetTrigger("Shoot"); //애니메이션 blender tree 사용
            // Play jump sound/particle effect
            Debug.Log($"{changed.Behaviour._shootCount}, {previousShootCount}");
        }
        else
        {
            changed.Behaviour.animator.SetLayerWeight(changed.Behaviour.animator.GetLayerIndex("Shoot Layer"), 0); 
            //애니메이션 blender tree 사용
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Fusion;

public class EnemyFSM :NetworkBehaviour
{
    enum EnemyState
    {
        BeforeReady,
        Idle,
        Move,
        Attack,
        Return,
        Damaged,
        Die
    }
/*    [Networked(OnChanged = nameof(OnDieChanged))]
    public bool isDied { get; set; }*/

    GameObject[] players;
    GameObject targetPlayer;


    public AudioClip[] audClip;
    public AudioSource audioSource;

    Color defaultBodyMeshColor;
    //public MeshRenderer bodyMeshRenderer;
    EnemyState m_State;
    // 플레이어 발견 범위
    public float findDistance = 23f;
    // 플레이어 공격 범위
    public float attackDistance = 4f;
    public float moveSpeed = 4f;
    CharacterController cc;

    float currentTime = 0;
    float attackDelay = 2f;
    public int attackPower = 3;

    Vector3 originPos;

    public float gravity = 20F;

    //public float followDistance = 15f;
    //적의 체력
    public byte hp;
    public byte maxhp = 15;

    public Animator anim;
    Quaternion originRot;
    Quaternion Right = Quaternion.identity;


    // Start is called before the first frame update
    void Start()
    {
        //print($"player length: {players.Length}");
        cc = GetComponent<CharacterController>();
        audioSource = GetComponentInChildren<AudioSource>();
        //defaultBodyMeshColor = bodyMeshRenderer.material.color;
        m_State = EnemyState.BeforeReady;
        anim = GetComponent<Animator>();
        originPos = transform.position;
        originRot = transform.rotation;
        hp = maxhp;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        switch (m_State)
        {
            case EnemyState.BeforeReady:
                BeforeReady();
                break;
            case EnemyState.Idle:
                /*audioSource.clip = audClip[0];
                if (!audioSource.isPlaying)
                    audioSource.Play();*/
                Idle();
                break;
            case EnemyState.Move:
                audioSource.clip = audClip[1];
                if (!audioSource.isPlaying)
                    audioSource.Play();

                Move();
                break;
            case EnemyState.Attack:
                audioSource.clip = audClip[2];
                if (!audioSource.isPlaying)
                    audioSource.Play();
                Attack();
                break;
            case EnemyState.Return:
                Return();
                break;
            case EnemyState.Damaged:
                audioSource.clip = audClip[3];
                if (!audioSource.isPlaying)
                    audioSource.Play();

                Damaged();
                break;
            case EnemyState.Die:
                break;
        }
    }

    void BeforeReady()
    {
        
        if (players != null)
        {
            m_State = EnemyState.Idle;
            print("상태 전환: BeforeReady -> Idle");
        }

    }

    void Idle()
    {
        foreach(GameObject curPlayer in players)
        {
            if (Vector3.Distance(transform.position, curPlayer.transform.position) < findDistance)
            {
                targetPlayer = curPlayer;
                m_State = EnemyState.Move;
                anim.SetTrigger("IdleToMove");
                print($"상태 전환: Idle -> Move <target: {curPlayer.GetInstanceID()}>");
            }
        }
    }

    void Move()
    {
        //쫒아가다 발견 범위를 벗어날 때 돌아감
        if (Vector3.Distance(transform.position, targetPlayer.transform.position) > findDistance)
        {
            m_State = EnemyState.Return;
            print("상태 전환: Move -> Return");
        }

        //플레이어 향해서 이동
        else if (Vector3.Distance(transform.position, targetPlayer.transform.position) > attackDistance)
        {
            Vector3 dir = (targetPlayer.transform.position - transform.position).normalized;
            dir.y -= gravity * Runner.DeltaTime;
            cc.Move(dir * moveSpeed * Runner.DeltaTime);
            transform.forward = dir;
        }
        //공격 범위 안 공격 딜레이 실행
        else
        {
            m_State = EnemyState.Attack;
            print("상태 전환: Move -> Attack");
            currentTime = attackDelay;
            //anim.SetTrigger("MoveToAttackDelay");
        }
    }

    void Attack()
    {
        byte attackDamage = 3;
        if (Vector3.Distance(transform.position, targetPlayer.transform.position) < attackDistance)
        {
            currentTime += Runner.DeltaTime;
            if (currentTime > attackDelay)
            {
                print("맞는 놈" + targetPlayer.transform.parent.parent.gameObject);
                targetPlayer.transform.parent.parent.gameObject.GetComponent<HPHandler>().OnTakeDamage("Enemy", attackDamage);
                print("공격!");
                anim.SetTrigger("StartAttack");
                currentTime = 0;
            }
        }
        //공격 범위 벗어나서 다시 쫒아감
        else
        {
            m_State = EnemyState.Move;
            print("상태 전환: Attack -> Move");
            anim.SetTrigger("StopAttack");
            currentTime = 0;
        }
    }

    void Return()
    {
        //원래 위치로 이동
        if (Vector3.Distance(transform.position, originPos) > 0.5f)
        {
            Vector3 dir = (originPos - transform.position).normalized;
            dir.y -= gravity * Runner.DeltaTime;
            
            cc.Move(dir * moveSpeed * Runner.DeltaTime);
            transform.forward = dir;
        }
        //원래 위치 도착
        else
        {
            transform.position = originPos;
            transform.rotation = originRot;
            hp = maxhp;
            m_State = EnemyState.Idle;
            print("상태 전환 Return -> Idle");
           anim.SetTrigger("MoveToIdle");
        }
        //타겟 재설정
        foreach (GameObject curPlayer in players)
        {
            if (Vector3.Distance(transform.position, curPlayer.transform.position) < findDistance)
            {
                targetPlayer = curPlayer;
                m_State = EnemyState.Move;
                print($"상태 전환: Return -> Move <target: {curPlayer.GetInstanceID()}>");
            }
        }
        
    }

    void Damaged()
    {
        print("Damaged 실행");
        //StartCoroutine(DamagedProcess());
        m_State = EnemyState.Move;
    }

    //CoRoutine 함수
    IEnumerator DamagedProcess()
    {

        //bodyMeshRenderer.material.color = Color.red;
        print("Damaged 코루틴 실행");
        yield return new WaitForSeconds(1f);

        print("Damaged 코루틴 종료");
        //bodyMeshRenderer.material.color = defaultBodyMeshColor;

        m_State = EnemyState.Idle;
    }

    public void HitEnemy(byte hitPower)
    {
        if (m_State == EnemyState.Damaged || m_State == EnemyState.Die || m_State == EnemyState.Return)
        {
            return;
        }
        hp -= hitPower;
/*        if (hp > 0)
        {
            m_State = EnemyState.Damaged;
            //Damaged();
            print("상태 전환: Damaged");
        }*/
        if (hp <= 0)
        {
            m_State = EnemyState.Die;
            print("상태 전환: Damaged -> Die");
            Die();
        }
    }
    void Die()
    {
        StopAllCoroutines();
        audioSource.clip = audClip[4];
        if (!audioSource.isPlaying)
            audioSource.Play();
        StartCoroutine(DieProcess());
    }

    IEnumerator DieProcess()
    {
        cc.enabled = false;
        yield return new WaitForSeconds(0.1f);
        print("ㅅㅁ!");
        RPC_DestroyEnemy();
    }

    public void SetPlayer()
    {
        players = GameObject.FindGameObjectsWithTag("Player");
        print($"player length: {players.Length}");
    }

    public int GetPlayerCount()
    {
        return players.Length;
    }

/*    static void OnDieChanged(Changed<EnemyFSM> changed)
    {
        bool isDiedCurrent = changed.Behaviour.isDied;

        //Load the old value
        changed.LoadOld();

        bool isDiedOld = changed.Behaviour.isDied;

        if (isDiedCurrent && !isDiedOld)
            Destroy(changed.Behaviour.gameObject);
    }*/


   [Rpc(RpcSources.StateAuthority, RpcTargets.All)]
    void RPC_DestroyEnemy()
    {
        Destroy(gameObject);
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using TMPro;

public class NetworkPlayer : NetworkBehaviour, IPlayerLeft
{
    public TextMeshProUGUI playerNickNameTM;
    public static NetworkPlayer Local { get; set; }
    public Transform playerModel;

    [Networked(OnChanged = nameof(OnNickNameChanged))]
    public NetworkString<_16> nickName { get; set; }

    // Remote Client Token Hash
    [Networked] public int token { get; set; }

    bool isPublicJoinMessageSent = false;

    public LocalCameraHandler localCameraHandler;
    public GameObject localUI;
    public GameObject gun;
    GameObject[] enemys;
    GameObject[] players;
    
    //int playerCount = 0;

    //Other components
    NetworkInGameMessages networkInGameMessages;

    void Awake()
    {
        networkInGameMessages = GetComponent<NetworkInGameMessages>();
    }

    // Start is called before the first frame update
    void Start()
    {
    }

    public override void Spawned()
    {


        if (Object.HasInputAuthority)
        {
            Local = this;

            //레이어 세팅
            Utils.SetRenderLayerInChildren(playerModel, LayerMask.NameToLayer("LocalPlayerModel"));

            if (Camera.main != null)
                Camera.main.gameObject.SetActive(false);

            localCameraHandler.localCamera.enabled = true;

            //플레이어에서 카메라 분리
            localCameraHandler.transform.parent = null;

            localUI.SetActive(true);

            RPC_SetNickName(GameManager.instance.playerNickName);

          
            Debug.Log("Spawned local player");
        }
        else
        {
            localCameraHandler.localCamera.enabled = false;
            localUI.SetActive(false);
            gun.SetActive(false);

            Debug.Log($"{Time.time} Spawned remote player");  
        }

        Runner.SetPlayerObject(Object.InputAuthority, Object);
        transform.name = $"P_{Object.Id}";

        //set player in enemy
        enemys = GameObject.FindGameObjectsWithTag("Enemy");
        foreach (GameObject i in enemys)
            i.GetComponent<EnemyFSM>().SetPlayer();


    }

    public void PlayerLeft(PlayerRef player)
    {
        if (Object.HasStateAuthority)
        {
            if (Runner.TryGetPlayerObject(player, out NetworkObject playerLeftNetworkObject))
            {
                if (playerLeftNetworkObject == Object)
                    Local.GetComponent<NetworkInGameMessages>().SendInGameRPCMessage(playerLeftNetworkObject.GetComponent<NetworkPlayer>().nickName.ToString(), "left");
                Application.Quit();
            }

        }

        if (player == Object.InputAuthority)
            Runner.Despawn(Object);

    }
    static void OnNickNameChanged(Changed<NetworkPlayer> changed)
    {
        Debug.Log($"{Time.time} OnHPChanged value {changed.Behaviour.nickName}");

        changed.Behaviour.OnNickNameChanged();
    }

    private void OnNickNameChanged()
    {
        Debug.Log($"Nickname changed for player to {nickName} for player {gameObject.name}");

        playerNickNameTM.text = nickName.ToString();
    }

    [Rpc(RpcSources.InputAuthority, RpcTargets.StateAuthority)]
    public void RPC_SetNickName(string nickName, RpcInfo info = default)
    {
        Debug.Log($"[RPC] SetNickName {nickName}"); 
        this.nickName = nickName;
        //this.player
        if (!isPublicJoinMessageSent)
        {
            networkInGameMessages.SendInGameRPCMessage(nickName, "joined");

            isPublicJoinMessageSent = true;
        }
    }

    void OnDestroy()
    {
        if (localCameraHandler != null)
            Destroy(localCameraHandler.gameObject);
    }
}

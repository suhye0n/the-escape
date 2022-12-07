using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class NetworkInGameMessages : NetworkBehaviour
{
    InGameMessagesUIHander inGameMessagesUIHander;
    AudioSource aud_src;
    public ParticleSystem particle;
    private void Start()
    {
        aud_src = GetComponent<AudioSource>();
    }
    // Start is called before the first frame update

    public void SendInGameRPCMessage(string userNickName, string message)
    {
        RPC_InGameMessage($"<b>{userNickName}</b> {message}");
    }


    [Rpc(RpcSources.StateAuthority, RpcTargets.All)]
    void RPC_InGameMessage(string message, RpcInfo info = default)
    {
        Debug.Log($"[RPC] InGameMessage {message}");

        if (inGameMessagesUIHander == null)
            inGameMessagesUIHander = NetworkPlayer.Local.localCameraHandler.GetComponentInChildren<InGameMessagesUIHander>();
            
        if (inGameMessagesUIHander != null)
            inGameMessagesUIHander.OnGameMessageReceived(message);
    }

    public void PlayAudio(AudioClip clip)
    {
        aud_src.clip = clip;
        RPC_PlayAudio();
    }
    [Rpc(RpcSources.StateAuthority, RpcTargets.All)]
     void RPC_PlayAudio( )
    {
        aud_src.Play();
    }


    public void PlayParticle(ParticleSystem _particle)
    {
        particle = _particle;
        RPC_PlayParticle();
    }
    [Rpc(RpcSources.StateAuthority, RpcTargets.All)]
    void RPC_PlayParticle()
    {
        particle.Play();
    }
}

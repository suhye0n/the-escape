using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bolt;
using Bolt.Matchmaking;
using UnityEngine.UI;
using UdpKit;
using System.Runtime.InteropServices;
using TMPro;

public class LobbyManager : GlobalEventListener
{
    public TMP_Text LogText;
    public InputField SessionInput;
    
    public void StartServer()
    {
        BoltLaucher.StartServer();
    }

    public override void BoltStartDone()
    {
        BoltMatchmaking.CreateSession(SessionInput.text, sceneToLoad: "Game");
    }

    public overridevoid void BoltstartFailed(UdpConnectionDisconnectReason disconnectReason)
    {
        print("BoltStartFailed");
    }

    public void StartClient()
    {
        BoltMatchmaking.JoinSession(SessionInput.text);
        pinrt("JoinSession");
    }
   
    public override void SessionListUpdated(Map<System.Guid, UdpSession> sessionList)
    {
        string log = "";
        foreach (var session in sessionList)
        {
            UdpSession photonSession = session.Value as UdpSession;
            if(photonSession.Source == session.Value as UdpSession)
            {
                log += photonSession.HostName + "\n";
            }
            LogText.text = log;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

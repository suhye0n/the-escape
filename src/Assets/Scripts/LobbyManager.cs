using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Bolt;
using Photon.Bolt.Matchmaking;
using Photon.Bolt.Utils;
using UnityEngine.UI;
using UdpKit;

public class LobbyManager : Photon.Bolt.GlobalEventListener
{
    public Text LogText;
    public InputField SessionInput;
    public InputField NickInput;

    public void StartServer()
    {
        BoltLauncher.StartServer();
    }

    public virtual void BoltStartDone()
    {
        PlayerPrefs.SetString("nick", NickInput.text);
        BoltMatchmaking.CreateSession(sessionID: SessionInput.text, sceneToLoad: "FPSGame");
    }

    public void StartClient()
    {
        BoltLauncher.StartClient();
    }

    public void JoinSession()
    {
        BoltMatchmaking.JoinSession(SessionInput.text);
    }

    public virtual void SessionListUpdated(Map<System.Guid, UdpSession> sessionList)
    {
        string log = "";
        foreach (var session in sessionList)
        {
            UdpSession photonSession = session.Value;
            if (photonSession.Source == UdpSessionSource.Photon)
                log += $"{photonSession.HostName}\n";
        }
        LogText.text = log;
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Bolt;
using Photon.Bolt.Matchmaking;
using Photon.Bolt.Utils;
using UnityEngine.UI;
using UdpKit;
using TMPro;

public class LobbyManager : GlobalEventListener
{
    public TextMeshPro LogText;
    public TMP_InputField SessionInput;
    public TMP_InputField NickInput;

    public void StartServer()
    {
        BoltLauncher.StartServer();
    }

    public virtual void BoltStartDone()
    {
        PlayerPrefs.SetString("nick", NickInput.text);
        BoltMatchmaking.CreateSession(sessionID: SessionInput.text, sceneToLoad: "S_FPS_Game");
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

    void Start()
    {
        LogText = GetComponent<TextMeshPro>();
    }
}
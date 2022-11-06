using UnityEngine;
using System;
using UdpKit;
using UnityEngine.SceneManagement;
using UdpKit.Platform.Photon;
using Photon.Bolt;
using Photon.Bolt.Matchmaking;
using Photon.Bolt.Utils;
using Random = UnityEngine.Random;

public class NetworkCallbacks : Photon.Bolt.GlobalEventListener
{
    public GameObject CubePrefab;

    [System.Obsolete]
    public virtual void SceneLoadLocalDome(string scene)
    {
        var spawnPos = new Vector3(Random.Range(-5, 5), 0, 0);
        BoltNetwork.Instantiate(CubePrefab, spawnPos, Quaternion.identity);
    }
}

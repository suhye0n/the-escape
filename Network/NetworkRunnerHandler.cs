using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
using Fusion.Sockets;
using UnityEngine.SceneManagement;
using System.Threading.Tasks;
using System;
using System.Linq;


public class NetworkRunnerHandler : MonoBehaviour
{
    public NetworkRunner networkRunnerPrefab;
    NetworkRunner networkRunner;

    void Start()
    {
        networkRunner = Instantiate(networkRunnerPrefab);
        networkRunner.name = "Network runner";

        
        var clientTask = InitializeNetworkRunner(
            networkRunner, 
            GameMode.AutoHostOrClient,
            GameManager.instance.GetConnectionToken(), 
            NetAddress.Any(), 
            SceneManager.GetActiveScene().buildIndex, 
            null);
    }

   
    public void StartHostMigration(HostMigrationToken hostMigrationToken)
    {
        //Create a new Network runner, old one is being shut down
        networkRunner = Instantiate(networkRunnerPrefab);
        networkRunner.name = "Network runner - Migrated";

        var clientTask = InitializeNetworkRunnerHostMigration(networkRunner, hostMigrationToken);

        Debug.Log($"Host migration started");
    }

    INetworkSceneManager GetSceneManager(NetworkRunner runner)
    {
        var sceneManager = runner.GetComponents(typeof(MonoBehaviour)).OfType<INetworkSceneManager>().FirstOrDefault();

        if (sceneManager == null)
        {
            //Handle networked objects that already exits in the scene
            sceneManager = runner.gameObject.AddComponent<NetworkSceneManagerDefault>();
        }

        return sceneManager;
    }

    protected virtual Task InitializeNetworkRunner(NetworkRunner runner, GameMode gameMode, byte[] connectionToken, NetAddress address, SceneRef scene, Action<NetworkRunner> initialized)
    {
        var sceneManager = GetSceneManager(runner);

        runner.ProvideInput = true;

        return runner.StartGame(new StartGameArgs
        {
            GameMode = gameMode,
            Address = address,
            Scene = scene,
            SessionName = "TestRoom",
            Initialized = initialized,
            SceneManager = sceneManager,
            ConnectionToken = connectionToken
        });
    }

    protected virtual Task InitializeNetworkRunnerHostMigration(NetworkRunner runner, HostMigrationToken hostMigrationToken)
    {
        var sceneManager = GetSceneManager(runner);

        runner.ProvideInput = true;

        return runner.StartGame(new StartGameArgs
        {
            //GameMode = gameMode,  // ignored, Game Mode comes with the HostMigrationToken
            //Address = address,
            //Scene = scene,
            //SessionName = "TestRoom",
            //Initialized = initialized,
            SceneManager = sceneManager,
            HostMigrationToken = hostMigrationToken, // contains all necessary info to restart the Runner
            HostMigrationResume = HostMigrationResume, // this will be invoked to resume the simulation
            ConnectionToken = GameManager.instance.GetConnectionToken()
        });
    }

    void HostMigrationResume(NetworkRunner runner)
    {
        Debug.Log($"HostMigrationResume started");

        // Get a reference for each Network object from the old Host
        foreach (var resumeNetworkObject in runner.GetResumeSnapshotNetworkObjects())
        {
            // Grab all the player objects, they have a NetworkCharacterControllerPrototypeCustom
            if (resumeNetworkObject.TryGetBehaviour<NetworkCharacterControllerPrototypeCustom>(out var characterController))
            {
                runner.Spawn(resumeNetworkObject, position: characterController.ReadPosition(), rotation: characterController.ReadRotation(), onBeforeSpawned: (runner, newNetworkObject) =>
                {
                    newNetworkObject.CopyStateFrom(resumeNetworkObject);

                    // Copy info state from old Behaviour to new behaviour
                    if (resumeNetworkObject.TryGetBehaviour<HPHandler>(out HPHandler oldHPHandler))
                    {
                        HPHandler newHPHandler = newNetworkObject.GetComponent<HPHandler>();
                        newHPHandler.CopyStateFrom(oldHPHandler);

                        newHPHandler.skipSettingStartValues = true;
                    }

                    //Map the connection token with the new Network player
                    if (resumeNetworkObject.TryGetBehaviour<NetworkPlayer>(out var oldNetworkPlayer))
                    {
                        // Store Player token for reconnection
                        FindObjectOfType<Spawner>().SetConnectionTokenMapping(oldNetworkPlayer.token, newNetworkObject.GetComponent<NetworkPlayer>());
                    }

                });
            }
        }

        StartCoroutine(CleanUpHostMigrationCO());

        Debug.Log($"HostMigrationResume completed");
    }

    IEnumerator CleanUpHostMigrationCO()
    {
        yield return new WaitForSeconds(5.0f);

        FindObjectOfType<Spawner>().OnHostMigrationCleanUp();
    }
}

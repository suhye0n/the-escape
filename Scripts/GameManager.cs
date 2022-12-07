using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    //Static instance of GameManager so other scripts can access it
    public static GameManager instance = null;

    byte[] connectionToken;

    public Vector2 cameraViewRotation = Vector2.zero;
    public string playerNickName = "";
    public Vector3 playerSpawnPoint;

    private void Awake()
    {
        if (instance == null)
            instance = this;
        else if (instance != this)
        {
            Destroy(gameObject);
            return;
        }

        DontDestroyOnLoad(gameObject);
    }

    // Start is called before the first frame update
    void Start()
    {
        //Check if token is valid, if not get a new one
        if (connectionToken == null)
        {
            connectionToken = ConnectionTokenUtils.NewToken();
            Debug.Log($"Player connection token {ConnectionTokenUtils.HashToken(connectionToken)}");
        }
    }

    public void SetConnectionToken(byte[] connectionToken)
    {
        this.connectionToken = connectionToken;
    }
    public void SetSpawnPoint(Vector3 playerSpawnPoint)
    {
        this.playerSpawnPoint = playerSpawnPoint;
    }

    public byte[] GetConnectionToken()
    {
        return connectionToken;
    }

}

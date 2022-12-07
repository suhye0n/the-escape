using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class level_manger : MonoBehaviour
{
    public int level;
    private static level_manger instance = null;
    public GameObject level_obj;
    
    void Awake()
    {
        if (instance)
        {
            Destroy(level_obj);
            return;
        }
        instance = this;
        DontDestroyOnLoad(level_obj);
    }
    

}


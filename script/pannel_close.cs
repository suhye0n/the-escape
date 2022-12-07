using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pannel_close : MonoBehaviour
{
    public GameObject pannenl;
    public void ButtonClick()
    {
        Cursor.lockState = CursorLockMode.Locked;
        pannenl.SetActive(false);
        //Cursor.lockState = CursorLockMode.Locked;


    }
}

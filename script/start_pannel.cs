using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class start_pannel : MonoBehaviour
{
    public GameObject p1;
    public GameObject p2;
    
    public void ButtonClick()
    {
        Cursor.lockState = CursorLockMode.Locked;
        p1.SetActive(false);
        p2.SetActive(true);
        //Cursor.lockState = CursorLockMode.Locked;


    }
}

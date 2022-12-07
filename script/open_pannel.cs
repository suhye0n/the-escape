using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class open_pannel : MonoBehaviour
{
    public GameObject pannenl;
    public void ButtonClick()
    {
        Cursor.lockState = CursorLockMode.Confined;
        pannenl.SetActive(true);


    }
}

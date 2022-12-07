using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class to_option : MonoBehaviour
{
    public GameObject optionPanel;
    public void OnClick()
    {
        optionPanel.SetActive(true);
        Debug.Log("oepn option");
    }
}

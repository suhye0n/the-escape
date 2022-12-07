using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class return_key_info : MonoBehaviour
{
    public GameObject optionPanel;
    public void OnClick()
    {
        optionPanel.SetActive(false);
        Debug.Log("off key_info");
    }
}

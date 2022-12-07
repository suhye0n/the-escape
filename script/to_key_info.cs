using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class to_key_info : MonoBehaviour
{
    public GameObject optionPanel;
    public void OnClick()
    {
        optionPanel.SetActive(true);
        Debug.Log("oepn key_info");
    }
}

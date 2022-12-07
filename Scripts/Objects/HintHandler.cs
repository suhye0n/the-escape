using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HintHandler : MonoBehaviour
{
    GameObject hintPanel;
    // Start is called before the first frame update
    void Start()
    {
        hintPanel = transform.GetChild(0).gameObject;

        // Update is called once per frame
    }
    public void SetActiveHintPanel()
    {

        hintPanel.SetActive(true);
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
    }

    public void SetInactiveHintPanel()
    {
        hintPanel.SetActive(false);
        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
    }
}

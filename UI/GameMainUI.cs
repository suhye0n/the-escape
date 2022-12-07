using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class GameMainUI : MonoBehaviour
{
    public TMP_Dropdown dropdown;

    public void OnSelectGameTheme()
    {
        Debug.Log($"{dropdown.value}");
        if(dropdown.value == 0)
        {
            SceneManager.LoadScene("MainMenu");
        }
        else if (dropdown.value == 1)
        {
            SceneManager.LoadScene("game_start_secne");
        }
    }
    public void GameExit()
    {
        Application.Quit();
    }
}

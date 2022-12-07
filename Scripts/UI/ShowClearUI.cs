using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class ShowClearUI : NetworkBehaviour
{
    [Networked(OnChanged = nameof(OnShowUIChanged))]
    public bool isShow { get; set; }

    public GameObject UI; //클리어 UI 받는 변수
    public static void OnShowUIChanged(Changed<ShowClearUI> changed)
    {
        bool isShowCurrent = changed.Behaviour.isShow;

        //Load the old value
        changed.LoadOld();

        bool isShowOld = changed.Behaviour.isShow;

        if (isShowCurrent && !isShowOld)
        {
            changed.Behaviour.UI.SetActive(true);
            
            Cursor.visible = true;
            Cursor.lockState = CursorLockMode.None;
            changed.Behaviour.StartCoroutine("GameTerminate");
        }
    }

    IEnumerator GameTerminate()
    {
        print("asdasdasd");
        yield return new WaitForSeconds(5.0f);
        Application.Quit();
    }
}

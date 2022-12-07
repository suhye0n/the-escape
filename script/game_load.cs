using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class game_load : MonoBehaviour
{
    public void ButtonClick() //버튼 클릭 이벤트에 대한 함수를 만들어 준다.
    {
        SceneManager.LoadScene("Scene_02");
    }
}

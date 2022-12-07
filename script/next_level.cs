using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class next_level : MonoBehaviour
{
    public GameObject game_clear_canvas;
    public void ButtonClick() //버튼 클릭 이벤트에 대한 함수를 만들어 준다.
    {
        Cursor.lockState = CursorLockMode.Locked;
        game_clear_canvas.SetActive(false);
        Scene scene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(scene.name);
        Debug.Log("next_level");
    }
}

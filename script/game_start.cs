using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class game_start : MonoBehaviour
{
    public GameObject game_clear_canvas;
    public GameObject level_obj;

    public void ButtonClick() //버튼 클릭 이벤트에 대한 함수를 만들어 준다.
    {

        GameObject level_obj = GameObject.Find("level_count");
        level_obj.GetComponent<level_manger>().level += 1;

        Cursor.lockState = CursorLockMode.Locked;
        game_clear_canvas.SetActive(false);
        Scene scene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(scene.name);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class exit : MonoBehaviour
{
    public void ButtonClick() //버튼 클릭 이벤트에 대한 함수를 만들어 준다.
    {
        Application.Quit();
    }

}

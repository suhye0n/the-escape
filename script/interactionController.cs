using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.SceneManagement;



public class interactionController : MonoBehaviour
{
    

    private GameObject GameObjectHit;
    private RaycastHit hit;
    public  GameObject img;
    public static bool GameIsPaused = false;

    public string m_Timer = @"00:01:00.000";
    public KeyCode m_KcdPlay = KeyCode.Space;
    private bool m_IsPlaying;
    public float m_TotalSeconds = 10 * 60; // 카운트 다운 전체 초(5분 X 60초), 인스펙트 창에서 수정해야 함. 
    public Text m_Text;

    public GameObject start_p;
    public Camera play_camera;
    public GameObject player;
    public GameObject setting_p;
    public GameObject PickUpText;
    public GameObject clear_p;
    public GameObject retry_p;
    public GameObject hint;
    bool isPickUp;


    Vector3 player_start_test = new Vector3(50.0f, 2.0f, -5.0f);
    Vector3 player_start1 = new Vector3 (21.2087f , 5.08f, -10.7992f);
    Vector3 player_start2 = new Vector3 (23.002f, 13.08f, 0.487f);
    Vector3 player_start3 = new Vector3 (26.927215f, 9.078f , 19.9287f);
    
    private void Start()
    {
        setting_p.SetActive(false);
        Cursor.lockState = CursorLockMode.Confined;
        GameObject level_obj = GameObject.Find("level_count");
        int level = level_obj.GetComponent<level_manger>().level;
        Debug.Log("game level :" + level);

        
        switch (level)
        {
            case 0:
                //player.transform.localPosition = player_start_test;
                player.transform.localPosition = player_start1;
                break;
            case 1:
                player.transform.localPosition = player_start2;
                break;
            case 2:
                player.transform.localPosition = player_start3;
                break;
            case 3:
                Debug.Log("Game clear");
                break;

        }
        
    }



    void Update()
    {

        if (start_p.activeSelf == false)
        {
            m_Timer = CountdownTimer(false); // Text에 초기값을 넣어 주기 위해
            m_IsPlaying = !m_IsPlaying;

            CountdownTimer();

        }
        if (Input.GetKeyDown(KeyCode.F))
        {
            Ray ray = play_camera.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            if(Physics.Raycast(ray , out hit))
            {
                //Debug.Log(hit.transform.gameObject);
                if(hit.transform.gameObject.tag == "towel")
                {
                    Destroy(hit.transform.gameObject);

                    //img.enabled = ture;
                    hint.SetActive(false);
                    img.SetActive(true);
                    CountUpTimer();
                }
            }
        }


        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (GameIsPaused)
            {
                Resume();
            }
            else
            {
                Pause();
            }
        }


        if (Input.GetKeyDown(m_KcdPlay))
            m_IsPlaying = !m_IsPlaying;

        if (m_IsPlaying)
        {
            m_Timer = CountdownTimer();
        }

        // m_TotalSeconds이 줄어들때, 완전히 0에 맞출수 없기 때문에  
        if (m_TotalSeconds <= 0)
        {
            SetZero();
            //... 여기에 카운트 다운이 종료 될때 [이벤트]를 넣으면 됩니다. 
            Debug.Log("game_over");
        }

        if (m_Text)
            m_Text.text = m_Timer;

    }

    private string CountUpTimer(bool IsUpdate = true)
    {
        if (IsUpdate)
            m_TotalSeconds += (Time.deltaTime * 10000);

        TimeSpan timespan = TimeSpan.FromSeconds(m_TotalSeconds);
        string timer = string.Format("{0:00}:{1:00}:{2:00}.{3:000}",
            timespan.Hours, timespan.Minutes, timespan.Seconds, timespan.Milliseconds);

        return timer;
    }
    private string CountdownTimer(bool IsUpdate = true)
    {
        if (IsUpdate)
            m_TotalSeconds -= Time.deltaTime;

        TimeSpan timespan = TimeSpan.FromSeconds(m_TotalSeconds);
        string timer = string.Format("{0:00}:{1:00}:{2:00}.{3:000}",
            timespan.Hours, timespan.Minutes, timespan.Seconds, timespan.Milliseconds);

        return timer;
    }
    private void SetZero()
    {
        m_Timer = @"00:00:00.000";
        m_TotalSeconds = 0;
        m_IsPlaying = false;
    }

    void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.tag == "fire")
        {
            Cursor.lockState = CursorLockMode.Confined;
            retry_p.SetActive(true);
            Debug.Log("game over");
        }
        if (col.gameObject.tag == "exit")
        {
            Cursor.lockState = CursorLockMode.Confined;
            clear_p.SetActive(true);
        }
    }

    public void Resume()
    {
        Cursor.lockState = CursorLockMode.Locked;
        setting_p.SetActive(false);
        Time.timeScale = 1f;
        GameIsPaused = false;
    }

    public void Pause()
    {
        Cursor.lockState = CursorLockMode.Confined;
        setting_p.SetActive(true);
        Time.timeScale = 0f;
        GameIsPaused = true;
    }

}

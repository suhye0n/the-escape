using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterInputHandler : MonoBehaviour
{
    Vector2 moveInputVector = Vector2.zero;
    Vector2 viewInputVector = Vector2.zero;
    bool isJumpButtonPressed = false;
    bool isFireButtonPressed = false;
    bool isVoiceButtonPressed = false;
    bool isInteractButtonPressed = false;
    bool isEngineButtonPressed = false;

    bool escapeFlag = true;
    bool onEscapePannel = false;

    [Header("public")]
    public Color asdf;
    public GameObject exitPannel;
    public GameObject hintPanel;

    //Other components
    LocalCameraHandler localCameraHandler;
    CharacterMovementHandler characterMovementHandler;


    private void Awake()
    {
        localCameraHandler = GetComponentInChildren<LocalCameraHandler>();
        characterMovementHandler = GetComponent<CharacterMovementHandler>();
    }

    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    // Update is called once per frame
    void Update()
    {
        //LocalPlayer 아니면 return
        if (!characterMovementHandler.Object.HasInputAuthority)
            return;

        if (Input.GetKeyDown(KeyCode.Escape))
            SetActiveExitPannel();

        if (onEscapePannel)
            return;

        //마우스 움직임 값 받기
        viewInputVector.x = Input.GetAxis("Mouse X");
        viewInputVector.y = Input.GetAxis("Mouse Y") * -1;

        //이동값 받기
        moveInputVector.x = Input.GetAxis("Horizontal");
        moveInputVector.y = Input.GetAxis("Vertical");

        //Test용 가속 버튼
        if (Input.GetKeyDown(KeyCode.F1))
            transform.gameObject.GetComponent<NetworkCharacterControllerPrototypeCustom>().maxSpeed = 30;

        //감속
        if (Input.GetKeyDown(KeyCode.F2))
            gameObject.GetComponent<NetworkCharacterControllerPrototypeCustom>().maxSpeed = 6;

        //Jump
        if (Input.GetButtonDown("Jump"))
            isJumpButtonPressed = true;

        //Fire
        if (Input.GetButtonDown("Fire1"))
            isFireButtonPressed = true;

        //Voice
        if (Input.GetButtonDown("Voice"))
            isVoiceButtonPressed = true;

        //Interact
        if (Input.GetButtonDown("Interact"))
            isInteractButtonPressed = true;

        //Engine
        if (Input.GetButton("Engine"))
            isEngineButtonPressed = true;
        else
            isEngineButtonPressed = false;

        //Set view
        localCameraHandler.SetViewInputVector(viewInputVector);
    }

    public NetworkInputData GetNetworkInput()
    {
        NetworkInputData networkInputData = new NetworkInputData();

        //Aim data
        networkInputData.aimForwardVector = localCameraHandler.transform.forward;

        //Move data
        networkInputData.movementInput = moveInputVector;

        //Jump data
        networkInputData.isJumpPressed = isJumpButtonPressed;

        //Fire data
        networkInputData.isFireButtonPressed = isFireButtonPressed;

        //Voice data
        networkInputData.isVoiceButtonPressed = isVoiceButtonPressed;

        //Voice data
        networkInputData.isInteractButtonPressed = isInteractButtonPressed;

        //Boat data
        networkInputData.isEngineButtonPressed = isEngineButtonPressed;


        //Reset variables now that we have read their states
        isJumpButtonPressed = false;
        isFireButtonPressed = false;
        isVoiceButtonPressed = false;
        isInteractButtonPressed = false;
        return networkInputData;
    }

    public void GameQuit()
    {
        Application.Quit();
    }

    public void SetActiveExitPannel()
    {
        if (onEscapePannel == false)
        {
            exitPannel.SetActive(true);
            onEscapePannel = true;
            Cursor.visible = true;
            Cursor.lockState = CursorLockMode.None;

            return;
        }

        if (onEscapePannel == true)
        {
            exitPannel.SetActive(false);
            onEscapePannel = false;
            Cursor.visible = true;
            Cursor.lockState = CursorLockMode.Locked;
            return;
        }
    }

    public void SetActiveHintPannel()
    {
        hintPanel.SetActive(false);
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.Locked;

    }
}
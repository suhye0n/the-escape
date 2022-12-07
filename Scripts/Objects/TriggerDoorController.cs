using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class TriggerDoorController : NetworkBehaviour
{
    [SerializeField] private Animator myDoor1 = null;
    [SerializeField] private Animator myDoor2 = null;

    [SerializeField] private bool multiCheck = false;
    [SerializeField] private string closeAnimation1;
    [SerializeField] private string closeAnimation2;
    private int count = 0;

    //=================================================//
    [Networked(OnChanged = nameof(OnPassedChanged))]
    public bool isPass { get; set; }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if (!multiCheck)
                isPass = true;
            else if (multiCheck)
            {
                count++;
                if (count >= 2)
                    isPass = true;
            }
        }
    }

    void CloseDoor()
    {
        myDoor1.Play(closeAnimation1, 0, 0.0f);
        if(myDoor2 != null)
            myDoor2.Play(closeAnimation2, 0, 0.0f);

        gameObject.SetActive(false);
    }

    public static void OnPassedChanged(Changed<TriggerDoorController> changed)
    {
        bool isPassCurrent = changed.Behaviour.isPass;

        //Load the old value
        changed.LoadOld();

        bool isPassOld = changed.Behaviour.isPass;

        if (isPassCurrent && !isPassOld)
        {
            changed.Behaviour.myDoor1.Play(changed.Behaviour.closeAnimation1, 0, 0.0f);
            if (changed.Behaviour.myDoor2 != null)
                changed.Behaviour.myDoor2.Play(changed.Behaviour.closeAnimation2, 0, 0.0f);
            changed.Behaviour.gameObject.SetActive(false);
        }
    }
}

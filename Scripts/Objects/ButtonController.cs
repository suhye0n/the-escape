using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class ButtonController : NetworkBehaviour
{
    [SerializeField] private Animator doorAnim = null;

    private bool doorOpen = false;

    [SerializeField] private string openAnimation = "DoorOpen";
    [SerializeField] private string closeAnimation = "DoorClose";

    [SerializeField] private int waitTimer = 1;
    [SerializeField] private bool pauseInteraction = false;

    [SerializeField] private string openAnimation1;
    [SerializeField] private string openAnimation2;

    [Networked(OnChanged = nameof(OnOpenChanged))]
    public bool isOpenAnimation { get; set; }

    public Animator animatorA = null;
    public Animator animatorB = null;

    public void CloseAnimation()
    {
        doorAnim.Play(closeAnimation, 0, 0.0f);
        doorOpen = false;
    }
    public static void OnOpenChanged(Changed<ButtonController> changed)
    {
        Debug.Log("aaaaaaaa");
        bool isOpenCurrent = changed.Behaviour.isOpenAnimation;

        //Load the old value
        changed.LoadOld();

        bool isOpenOld = changed.Behaviour.isOpenAnimation;

        if (isOpenCurrent && !isOpenOld)
        {
            Debug.Log("bbbbbbbbb");
            changed.Behaviour.animatorA.Play(changed.Behaviour.openAnimation1, 0, 0.0f);
            if (changed.Behaviour.animatorB != null)
                changed.Behaviour.animatorB.Play(changed.Behaviour.openAnimation2, 0, 0.0f);
        }
    }
}

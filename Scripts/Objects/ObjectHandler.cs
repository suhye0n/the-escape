using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;
public class ObjectHandler : NetworkBehaviour
{
    [Networked(OnChanged = nameof(OnDestoryChanged))]
    public bool isDestroy { get; set; }

    [Networked(OnChanged = nameof(OnDestoryChanged))]
    public bool isEngine { get; set; }

    static public GameObject asd;
    public GameObject qqq;

    private void Start()
    {
        asd = qqq;
    }
    public static void OnDestoryChanged(Changed<ObjectHandler> changed)
    {
        bool isDestroyCurrent = changed.Behaviour.isDestroy;

        //Load the old value
        changed.LoadOld();

        bool isDestroyOld = changed.Behaviour.isDestroy;

        if (isDestroyCurrent && !isDestroyOld) {
            Destroy(changed.Behaviour.gameObject);
        }
    }

    public static void OnEngineChanged(Changed<ObjectHandler> changed)
    {
        bool isEngineCurrent = changed.Behaviour.isDestroy;

        //Load the old value
        changed.LoadOld();

        bool isEngineOld = changed.Behaviour.isDestroy;

        if (isEngineCurrent && !isEngineOld)
        {
            //changed.Behaviour.gameObject.SetActive(true);
            asd.SetActive(true);
        }

    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class item_script : MonoBehaviour
{
    public GameObject Use_object;

    void OnTriggerStay(Collider col)
    {
        if (col.gameObject.tag == "towel")
        {
            Use_object.SetActive(true);
            Debug.Log("item on");
        }
    }
    void OnTriggerExit(Collider col)
    {
        if (col.gameObject.tag == "towel")
        {
            Use_object.SetActive(false);
            Debug.Log("item off");
        }
    }
}

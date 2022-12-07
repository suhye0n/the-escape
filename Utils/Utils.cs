using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Utils
{
    public static Vector3 GetSpawnPoint(int playerCount)
    {
        if (playerCount == 0)
            return new Vector3(325, 8.55f, 249);
        else
            return new Vector3(230, 30, 76);
    }


    public static void SetRenderLayerInChildren(Transform transform, int layerNumber)
    {
        foreach (Transform trans in transform.GetComponentsInChildren<Transform>(true))
        {
            if (trans.CompareTag("IgnoreLayerChange"))
                continue;

            trans.gameObject.layer = layerNumber;
        }
    }
}

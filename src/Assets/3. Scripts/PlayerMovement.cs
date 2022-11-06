using System.Collections;
using System.Collections.Generic;
using Photon.Bolt;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

public class PlayerMovement : Photon.Bolt.EntityBehaviour<ICubeState>
{
    public virtual void Attached()
    {
        state.SetTransforms(state.CubeTransform, gameObject.transform);
    }

    public virtual void SimulateOwner()
    {
        var speed = 4f;
        var movement = Vector3.zero;

        movement = new Vector3(Input.GetAxisRaw("Horizontal"), Input.GetAxisRaw("Vertical"), 0);

        if (movement != Vector3.zero)
            transform.position = transform.position + movement.normalized * speed * BoltNetwork.FrameDeltaTime;
    }
}

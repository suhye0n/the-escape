using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyParticleEffect : MonoBehaviour
{
    public ParticleSystem keyParticleSystem;
    // Update is called once per frame
    void Update()
    {
        keyParticleSystem.Play();
    }
}

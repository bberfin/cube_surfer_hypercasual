using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelAudioController : MonoBehaviour
{
    public AudioSource audioSource;

    private void Update()
    {
        float musicVolume = PlayerPrefs.GetFloat("Volume", 1f);
        audioSource.volume = musicVolume;
    }
}


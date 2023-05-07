using UnityEngine;
using UnityEngine.UI;

public class SettingManager : MonoBehaviour
{
    public Slider volumeSlider;
 
  void Start()
{
    if (volumeSlider == null)
    {
        Debug.LogError("Volume slider or game speed slider is not assigned in the inspector!");
        return;
    }
  
    float storedVolume = PlayerPrefs.GetFloat("Volume", 1f);
    volumeSlider.value = storedVolume;

}


    public void SetMusicVolume()
    {
        PlayerPrefs.SetFloat("Volume", volumeSlider.value);
    }

  
}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelLoader : MonoBehaviour
{
    private void Start()
    {
        if (!LevelLoader.IsLevelUnlocked(1))
        {
            LevelLoader.UnlockLevel(1);
        }
    }
    // Bu metod, belirli bir levelin kilidini açar
    public static void UnlockLevel(int levelIndex)
    {

        if (PlayerPrefs.GetInt("Level" + levelIndex, 0) == 0)
        {
            PlayerPrefs.SetInt("Level" + levelIndex, 1); // Level kilidini aç
        }
    }

    // Bu metod, belirli bir levelin kilit durumunu kontrol eder
    public static bool IsLevelUnlocked(int levelIndex)
    {
        return PlayerPrefs.GetInt("Level" + levelIndex, 0) == 1; // Levelin kilidi açýksa 'true' döndür
    }

    // Bu metod, belirli bir leveli yükler
    public void LoadLevel(int levelIndex)
    {
        if (IsLevelUnlocked(levelIndex))
        {
            SceneManager.LoadScene(levelIndex);
        }
        else
        {
            Debug.Log("Level " + levelIndex + " henüz kilidi açýlmamýþ!");
        }
    }

}

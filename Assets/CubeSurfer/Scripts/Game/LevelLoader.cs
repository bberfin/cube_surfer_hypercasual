using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelLoader : MonoBehaviour
{

    public GameObject lock2;
    public GameObject lock3;
    public GameObject lock4;


    private void Start()
    {
        if (!LevelLoader.IsLevelUnlocked(1))
        {
            LevelLoader.UnlockLevel(1);
        }

    }
    public void Update()
    {
        if (PlayerPrefs.GetInt("Level" + 2, 0) == 1)
        {
            lock2.SetActive(false);

        }
        if (PlayerPrefs.GetInt("Level" + 3, 0) == 1)
        {
            lock3.SetActive(false);

        }
        if (PlayerPrefs.GetInt("Level" + 4, 0) == 1)
        {
            lock4.SetActive(false);

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
    public void UnlockLevelCoin(int levelIndex)
    {

        if (ProductManager.Coin>=100&&levelIndex==2)
        {
            ProductManager.Coin -= 100;
            PlayerPrefs.SetInt("Level" + levelIndex, 1); // Level kilidini aç
            lock2.SetActive(false);
        }

        if (ProductManager.Coin >= 200 && levelIndex == 3)
        {
            ProductManager.Coin -= 200;
            PlayerPrefs.SetInt("Level" + levelIndex, 1); // Level kilidini aç
            lock3.SetActive(false);

        }
        if (ProductManager.Coin >= 300 && levelIndex == 4)
        {
            ProductManager.Coin -= 300;
            PlayerPrefs.SetInt("Level" + levelIndex, 1); // Level kilidini aç
            lock4.SetActive(false);

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

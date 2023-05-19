using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public RectTransform WinUI;
    public RectTransform FailUI;
    public RectTransform NextUI;

    #region Singleton

    public static GameManager Instance;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
        }

        Instance = this;
    }

    #endregion

    public void ActivateWinUI()
    {
        if (WinUI != null)
        {
            WinUI.gameObject.SetActive(true);
        }
    }

    public void ActivateFailUI()
    {
        if (FailUI != null)
        {
            FailUI.gameObject.SetActive(true);
        }
    }

    public void ActivateNextUI()
    {
        if (NextUI != null)
        {
            NextUI.gameObject.SetActive(true);
        }
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(1);
    }

    public void NextLevel()
    {
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentSceneIndex + 1);
        Debug.Log(currentSceneIndex);
        LevelLoader.UnlockLevel(currentSceneIndex+1);
    }
     public void Fail()
    {
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentSceneIndex);
        
    }
}

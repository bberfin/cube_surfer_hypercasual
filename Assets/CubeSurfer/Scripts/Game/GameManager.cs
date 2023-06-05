using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using HuaweiMobileServices.Ads;
using HmsPlugin;
using TMPro;
using HuaweiMobileServices.Base;
using HuaweiMobileServices.IAP;
using HuaweiMobileServices.Utils;
//using HuaweiMobileServices.Id;


public class GameManager : MonoBehaviour
{
    public RectTransform WinUI;
    public RectTransform FailUI;
    public RectTransform NextUI;

    public RectTransform PremiumFailUI;
    //public static int RemoveAds = 0;
    public TextMeshProUGUI RemoveAdsText;

    public AdsManager adsManager;

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

    public void Start()
    {

        RemoveAdsText.text = PlayerPrefs.GetString("RemoveAdsText", "0");
        ProductManager.RemoveAds = int.Parse(RemoveAdsText.text);
        adsManager.ShowBannerAd();
        if (ProductManager.RemoveAds != 0)
        {
            adsManager.HideBannerAd();
        }
  
    }
  

    public void ActivateWinUI()
    {
        if (WinUI != null)
        {
            WinUI.gameObject.SetActive(true);
        }
    }

    public void ActivateFailUI()
    {
        RemoveAdsText.text = PlayerPrefs.GetString("RemoveAdsText", "0");
        ProductManager.RemoveAds = int.Parse(RemoveAdsText.text);
        if (ProductManager.RemoveAds != 0)
        {
            PremiumFailUI.gameObject.SetActive(true);




        }
        else
        {
            if (FailUI != null)
            {
                FailUI.gameObject.SetActive(true);
            }
        }

    }

    public void ActivateNextUI()
    {
        /*  if (NextUI != null)
          {
              adsManager.ShowInterstitial();
              NextUI.gameObject.SetActive(true);

          }*/
        if (NextUI != null)
        {
            NextUI.gameObject.SetActive(true);
            RemoveAdsText.text = PlayerPrefs.GetString("RemoveAdsText", "0");
            ProductManager.RemoveAds = int.Parse(RemoveAdsText.text);
            if (ProductManager.RemoveAds == 0)
            {
                adsManager.ShowInterstitial();
            }
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
        LevelLoader.UnlockLevel(currentSceneIndex + 1);
    }
    public void Fail()
    {
        SceneManager.LoadScene(1);

    }
    public void WatchAdAndContinue()
    {

        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentSceneIndex);

    }



}
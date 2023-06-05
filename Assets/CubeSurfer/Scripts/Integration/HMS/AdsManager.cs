using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HmsPlugin;
using HuaweiConstants;
using HuaweiMobileServices.Ads;
using System;
//using System.Collections;
using static HuaweiConstants.UnityBannerAdPositionCode;
using UnityEngine.UI;
using TMPro;



public class AdsManager : MonoBehaviour
{
    // public RectTransform WinUI;
   // public TextMeshProUGUI GlobalScoreText ;
  //  public int GlobalScore ;
	public GameManager gameManager;

    // Start is called before the first frame update
    void Start()
    {
        HMSAdsKitManager.Instance.OnRewarded=OnRewarded;
    }

    public void ShowInterstitial()
    {
        HMSAdsKitManager.Instance.ShowInterstitialAd();
    }

    public void ShowBannerAd()
    {
        HMSAdsKitManager.Instance.ShowBannerAd();
    }

    public void HideBannerAd()
    {
        HMSAdsKitManager.Instance.HideBannerAd();
    }




    public void ShowRewardedAd()
    {
        HMSAdsKitManager.Instance.ShowRewardedAd();
    }
    public void OnRewarded(Reward reward)
    {
        gameManager.WatchAdAndContinue();
    }


  
}

using HmsPlugin;
using HuaweiMobileServices.IAP;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ProductManager : MonoBehaviour
{
    
    public TextMeshProUGUI RemoveAdsText;
    public static int RemoveAds = 0;
    public static int Coin=0;
    public TextMeshProUGUI CoinText;
    public void Start()

    {
        CoinValue = Coin;
        AdsValue = RemoveAds;


        //RemoveAdsText.text = PlayerPrefs.GetString("RemoveAdsText", "0");
        //RemoveAds = int.Parse(RemoveAdsText.text);
       
     
        HMSIAPManager.Instance.InitializeIAP();
        //   HMSIAPManager.Instance.OnInitializeIAPSuccess = OnInitializeIAPSuccess;
        //  HMSIAPManager.Instance.OnInitializeIAPFailure = OnInitializeIAPFailure;
        //  HMSIAPManager.Instance.OnBuyProductFailure = OnBuyProductFailure;

    }


    public  int CoinValue
    {
        get
        {
            return PlayerPrefs.GetInt("Coin", 1);
        }
        set
        {
            PlayerPrefs.SetInt("Coin", value);
            if (CoinText != null)
            {
                CoinText.text = value.ToString();
            }
        }
    }

    public int AdsValue
    {
        get
        {
            return PlayerPrefs.GetInt("RemoveAdsText", 1);
        }
        set
        {
            PlayerPrefs.SetInt("RemoveAdsText", value);
            if (RemoveAdsText != null)
            {
                RemoveAdsText.text = value.ToString();
            }
        }
    }

    /*
    public void BuyProduct(string productID)
    {

        HMSIAPManager.Instance.OnBuyProductSuccess = OnBuyProductSuccess;
        HMSIAPManager.Instance.PurchaseProduct(productID);


    }


    void OnInitializeIAPFailure(HMSException ex)
    {
        Debug.Log("initalize fail " + ex);
    }
    void OnInitializeIAPSuccess()
    {
        Debug.Log("initalize done");
    }
    

    private void OnBuyProductSuccess(PurchaseResultInfo obj)
    {
        string myProductId = obj.InAppPurchaseData.ProductId;
        /*if (myProductId == "Gems")
         {
             GlobalScoreText.text=PlayerPrefs.GetString("GlobalScoreText","0");
             GlobalScore=int.Parse(GlobalScoreText.text);        
             GlobalScore=GlobalScore+50;
             GlobalScoreText.text = (GlobalScore.ToString());
             PlayerPrefs.SetString("GlobalScoreText", GlobalScore.ToString());
         }

        */
    /*  if (myProductId.Equals("RemoveAds"))
      {
          RemoveAdsText.text = PlayerPrefs.GetString("RemoveAdsText", "0");
          RemoveAds = int.Parse(RemoveAdsText.text);
          RemoveAds = 1;
          RemoveAdsText.text = (RemoveAds.ToString());
          PlayerPrefs.SetString("RemoveAdsText", RemoveAds.ToString());
      }




  }*/

    public void NoAdsButton()
    {
        HMSIAPManager.Instance.OnBuyProductSuccess = OnBuyProductSuccess;
        HMSIAPManager.Instance.PurchaseProduct("RemoveAds");
    }
    public void BuyCoinButton()
    {
        HMSIAPManager.Instance.OnBuyProductSuccess = OnBuyProductSuccess;
        HMSIAPManager.Instance.PurchaseProduct("Coin");
    }


    private void OnBuyProductSuccess(PurchaseResultInfo result)
    {
        if (result.InAppPurchaseData.ProductId == "RemoveAds")
        {

            //RemoveAdsText.text = PlayerPrefs.GetString("RemoveAdsText", "0");
            //RemoveAds = int.Parse(RemoveAdsText.text);
            RemoveAds = 1;
            //RemoveAdsText.text = (RemoveAds.ToString());
            //PlayerPrefs.SetString("RemoveAdsText", RemoveAds.ToString());
        }
        if (result.InAppPurchaseData.ProductId == "Coin")
        {
            CoinText.text = PlayerPrefs.GetString("CoinText", "0");
            Coin = int.Parse(CoinText.text);
            Coin = Coin + 100;
            CoinText.text = (CoinText.ToString());
            PlayerPrefs.SetString("CoinText", Coin.ToString());
        }
    }

    IEnumerator AfterBuyProductSuccess(PurchaseResultInfo obj)
    {
        yield return new WaitForSeconds(1f);
    }
    private void OnBuyProductFailure(int code)
    {
        if (code == OrderStatusCode.ORDER_PRODUCT_OWNED)
        {
            HMSIAPManager.Instance.OnObtainOwnedPurchasesSuccess = OnObtainOwnedPurchasesSuccess;
            HMSIAPManager.Instance.ObtainOwnedPurchases(PriceType.IN_APP_CONSUMABLE);
        }
    }


    private void OnObtainOwnedPurchasesSuccess(OwnedPurchasesResult result)
    {
        if (result != null)
        {
            foreach (var obj in result.InAppPurchaseDataList)
            {
                Debug.Log("[IAPManager]: OnObtainOwnedPurchasesSuccess : " + obj.ProductId);
                HMSIAPManager.Instance.ConsumePurchaseWithToken(obj.PurchaseToken);
            }
        }
    }
}

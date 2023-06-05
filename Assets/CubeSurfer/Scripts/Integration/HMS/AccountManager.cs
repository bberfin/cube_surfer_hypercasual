using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using HmsPlugin;
using HuaweiMobileServices.Id;
using HuaweiMobileServices.Utils;

public class AccountManager : MonoBehaviour
{

    //public AccountDemoManager accountDemoManager;

    /*  
      public void Start()
      {
          HMSAccountKitManager.Instance.OnSignInSuccess = SignInSuccess;        
          HMSAccountKitManager.Instance.OnSignInFailed = SignInFailed;
          HMSAccountKitManager.Instance.SignIn();
      }

      public void SignInSuccess(AuthAccount authAccount)
      {
          Debug.Log("log in SUCCESS: " + authAccount.DisplayName);
      } 

      public void SignInFailed(HMSException exception)
      {
          Debug.Log("log in FAILED: " + exception.Message);
      }*/

    public void SignIn()
    {
        Debug.Log("SignIn");
        HMSAccountKitManager.Instance.OnSignInSuccess = SignInSuccess;
        HMSAccountKitManager.Instance.OnSignInFailed = SignInFailed;
        HMSAccountKitManager.Instance.SignIn();
    }
    public void Logout()
    {
        Debug.Log("Logout");
        HMSAccountKitManager.Instance.SignOut();

    }
    private void SignInSuccess(AuthAccount authAccount)
    {
        PlayerPrefs.SetString("SignIn", "signedin");
        Debug.Log("SignInSuccess" + authAccount.DisplayName);
    }

    private void SignInFailed(HMSException exception)
    {
        PlayerPrefs.SetString("SignIn", "signedinfailed");
        Debug.Log("SignInFailed" + exception);
    }


/*
    public void login()
    {
        accountDemoManager.LogIn();
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentSceneIndex+1);
    }    
    
    public void silentSignIn()
    {
        accountDemoManager.SilentSignIn();
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentSceneIndex + 1);
    }    
    
    public void logout()
    {
        accountDemoManager.LogOut();
    }*/
    

}

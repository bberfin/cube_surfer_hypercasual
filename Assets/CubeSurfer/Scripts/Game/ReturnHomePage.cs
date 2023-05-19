using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ReturnHomePage : MonoBehaviour
{
    // Start is called before the first frame update
    public void GoHomePage()
    {
        SceneManager.LoadScene("MenuScene");
    }

}

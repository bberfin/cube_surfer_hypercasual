using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StopGame : MonoBehaviour
{
    bool game_stopped = false;

    public void Btn_stop()
    {
        game_stopped = !game_stopped;

        if (game_stopped == true)
        {
            Time.timeScale = 0.0f;
        }
        else
        {
            Time.timeScale = 1.0f;
        }
    }
}

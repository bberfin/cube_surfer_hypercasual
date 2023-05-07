using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeTransform : MonoBehaviour
{
     public float speed = 1f;
    public float amplitude = 0.05f;

    private Vector3 initialPosition;

    private void Start()
    {
        initialPosition = transform.position;
    }

    private void Update()
    {
        float newYPosition = initialPosition.y + Mathf.Sin(Time.time * speed) * amplitude;
        transform.position = new Vector3(initialPosition.x, newYPosition, initialPosition.z);
    }
}

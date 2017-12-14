using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    public float speed = 1f;
    public float maxX = 10f;
    public float maxY = 10f;
	
	void Update () 
    {
        Debug.Log(Input.GetAxis("Horizontal"));
        gameObject.transform.position = new Vector3(Mathf.Clamp(gameObject.transform.position.x + Input.GetAxis("Horizontal") * Time.deltaTime * speed, -maxX, maxX),
                                                    Mathf.Clamp(gameObject.transform.position.y + Input.GetAxis("Vertical") * Time.deltaTime * speed, -maxY, maxY),
                                                    gameObject.transform.position.z); 
	}
}

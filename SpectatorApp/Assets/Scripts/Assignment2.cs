using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class Assignment2 : MonoBehaviour
{
    [SerializeField] private GameObject raycast;
    [SerializeField] ARRaycastManager m_RaycastManager;

    void Start()
    {
        
    }

    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                Debug.Log("Touch");
                List<ARRaycastHit> hits = new List<ARRaycastHit>();
                if (m_RaycastManager.Raycast(Input.GetTouch(0).position, hits))
                {
                    Debug.Log("Hit a plane");
                    HandleRaycast(hits[0]);
                }


              /*  if (Physics.Raycast(ray, out hit))
                {
                    Instantiate(raycast, hit.point, Quaternion.identity);
                }*/
            }
        }
    }

    void HandleRaycast(ARRaycastHit hit)
    {
        if (hit.trackable is ARPlane plane)
        {
            // Do something with 'plane':
            Debug.Log($"Hit a plane with alignment {plane.alignment}");
            Debug.Log($"Hit {hit.pose.position}");
            Instantiate(raycast, hit.pose.position, Quaternion.identity);
        }
        else
        {
            // What type of thing did we hit?
            Debug.Log($"Raycast hit a {hit.hitType}");
        }
    }
}

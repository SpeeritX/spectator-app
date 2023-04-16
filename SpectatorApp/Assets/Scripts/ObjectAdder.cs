using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectAdder : MonoBehaviour
{
    [SerializeField] private GameObject cube;
    [SerializeField] private GameObject midair;
    [SerializeField] private GameObject raycast;
    [SerializeField] private Transform parentObject;


    void Start()
    {
        Debug.Log("Hello, World");
        Instantiate(cube, parentObject);
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            Instantiate(midair, new Vector3(1, 3, 1), Quaternion.identity);
        }

        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                Instantiate(raycast, hit.point, Quaternion.identity);
            }
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DistanceController : MonoBehaviour
{
    public GameObject headset;
    // Image in a canvas that will change color depending on the distance
    public Image distanceImage;
    // Text (TMP) showing the distance
    public TMPro.TextMeshProUGUI distanceText;
    private const float MAX_DISTANCE = 1.5f;
    private const float MIN_DISTANCE = 1f;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        Vector3 headsetPosition = headset.transform.position;
        Vector3 phonePosition = transform.position;
        float distance = Vector3.Distance(headsetPosition, phonePosition);
        distanceText.text = $"Distance: {distance}m";
        if (distance > MIN_DISTANCE && distance < MAX_DISTANCE)
        {
            distanceImage.color = Color.green;
        }
        else
        {
            distanceImage.color = Color.red;
        }
    }
}

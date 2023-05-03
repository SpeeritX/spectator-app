using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ConnectScreenViewer1 : MonoBehaviour
{
    // Start is called before the first frame update
    public Button secondButton;
    private bool buttonEnabled = false;
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (SyncPoseServer.isSecondPhaseDone)
        {
            this.gameObject.SetActive(false);
        }
        else if (SyncPoseServer.isFirstPhaseDone)
        {
            this.gameObject.SetActive(true);
            if (!buttonEnabled)
            {
                Debug.Log("Enabling second button");
                StartCoroutine(EnableSecondButton());
                buttonEnabled = true;
            }
        }
    }

    public void setIsSecondButtonClicked()
    {
        SyncPoseServer.isButtonClicked = true;
    }
    IEnumerator EnableSecondButton()
    {
        Debug.Log("Start EnableSecondButton");
        yield return new WaitForSeconds(2);
        Debug.Log("Enable second button");
        secondButton.interactable = true;
    }
}
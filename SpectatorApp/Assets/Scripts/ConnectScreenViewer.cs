using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectScreenViewer : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (SyncPoseServer.isButtonClicked){
            this.gameObject.SetActive(false);
        }
        else{
            this.gameObject.SetActive(true);
        }
        
    }

    public void setIsButtonClicked(){
        SyncPoseServer.isButtonClicked = true;
    }
    
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectScreenViewer1 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (SyncPoseServer.isSecondPhaseDone){
            this.gameObject.SetActive(false);
        }
        else{
            this.gameObject.SetActive(true);
        }
        
    }

    public void setIsSecondButtonClicked(){
        SyncPoseServer.isButtonClicked = true;
    }
    
}

using System.IO;
using UnityEngine;
using UnityEngine.Networking;

public class SyncPoseServer : SyncPose
{
#pragma warning disable CS0618 // Type or member is obsolete
    protected static readonly int BROADCAST_INTERVAL = 1000; // ms

    protected override void Start()
    {
        base.Start();
    }
    void Update()
    {
        if (Input.touchCount > 0)
        {
            print("Touch detected");
            if (Input.GetTouch(0).phase == TouchPhase.Ended)
            {
                print("Touch Ended - start broadcasting");
                var error = StartBroadcasting(hostID, port);
                if (error != NetworkError.Ok)
                {
                    Debug.LogError($"SyncPoseServer: Couldn't start broadcasting because of {error}. Disabling the script");
                    enabled = false;
                    return;
                }
            }
        }
    }

    protected virtual void LateUpdate()
    {
        // Checking whether something has happened with the connection since the last frame
        if (CheckConnectionChanges() == INVALID_CONNECTION) return;

        // Send postion and orientation over the network
        if (transform.hasChanged)
        {
            Debug.Log("SyncPoseServer: Transform has changed. Sending new pose");
            SendPose();
            transform.hasChanged = false;
        }
    }

    private int CheckConnectionChanges()
    {
        var eventType = NetworkTransport.Receive(out int outHostID, out int outConnectionID, out int outChannelID,
            messageBuffer, messageBuffer.Length, out int actualMessageLength, out byte error);
        switch (eventType)
        {
            case NetworkEventType.Nothing:
                // Nothing has happend. That's a good thing :-)
                break;
            case NetworkEventType.ConnectEvent:
                Debug.Log("SyncPoseServer: Client connected");
                сonnectionID = outConnectionID;
                StopBroadcasting();
                break;
            case NetworkEventType.DisconnectEvent:
                Debug.Log("SyncPoseServer: Client disconnected");
                сonnectionID = INVALID_CONNECTION;

                // Restarting broadcasting
                StartBroadcasting(hostID, port);
                Debug.Log("SyncPoseServer: Connection lost. Restarting broadcasting");
                break;
            default:
                Debug.LogError($"SyncPoseServer: Unknown network message type received, namely {eventType}");
                break;
        }

        return сonnectionID;
    }

    private bool SendPose()
    {
        Debug.Log($"Sending pose: {transform.position}, {transform.rotation}");
        int bufferSize;
        using (var stream = new MemoryStream(messageBuffer))
        {
            // Serializing current pose
            formatter.Serialize(stream, new Pose(transform.position, transform.rotation));
            bufferSize = (int)stream.Position;
        }

        NetworkTransport.Send(hostID, сonnectionID, channelID, messageBuffer, bufferSize, out byte error);
        if ((NetworkError)error != NetworkError.Ok)
        {
            Debug.LogError($"SyncPoseServer: Couldn't send data over the network because of {(NetworkError)error}");
            return false;
        }

        return true;
    }

    private static NetworkError StartBroadcasting(int hostID, int port)
    {
        Debug.Log("SyncPoseServer: Starting broadcasting");
        NetworkTransport.StartBroadcastDiscovery(hostID, port, BROADCAST_CREDENTIALS_KEY,
            BROADCAST_CREDENTIALS_VERSION, BROADCAST_CREDENTIALS_SUBVERSION, null, 0, BROADCAST_INTERVAL, out byte error);

        return (NetworkError)error;
    }

    private static bool StopBroadcasting()
    {
        Debug.Log("SyncPoseServer: Stopping broadcasting");
        if (!NetworkTransport.IsBroadcastDiscoveryRunning())
            return false;

        NetworkTransport.StopBroadcastDiscovery();
        return true;
    }
#pragma warning restore CS0618 // Type or member is obsolete
}

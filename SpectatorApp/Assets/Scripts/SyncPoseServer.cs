using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class SyncPoseServer : SyncPose
{
    [SerializeField]
    private RawImage image;

#pragma warning disable CS0618 // Type or member is obsolete
    protected static readonly int BROADCAST_INTERVAL = 1000; // ms
    private bool startedBroadcasting = false;
    private int frameCount = 0;

    public static bool isButtonClicked = false;

    protected override void Start()
    {
        base.Start();
    }
    void Update()
    {
        if (isButtonClicked)
        {
                print("Touch Ended - start broadcasting");
                Debug.Log($"SyncPoseServer: Starting broadcasting, host: {hostID}, port: {port}");
                var error = StartBroadcasting(hostID, port);
                startedBroadcasting = true;
                if (error != NetworkError.Ok)
                {
                    Debug.LogError($"SyncPoseServer: Couldn't start broadcasting because of {error}. Disabling the script");
                    enabled = false;
                    return;
                }
            
        }
    }

    protected virtual void LateUpdate()
    {
        // Checking whether something has happened with the connection since the last frame
        if (CheckConnectionChanges() == INVALID_CONNECTION) return;

        frameCount++;
        // Send position and orientation over the network
        if (transform.hasChanged && frameCount >= 3)
        {
            frameCount = 0;
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
                isButtonClicked = false;
                сonnectionID = INVALID_CONNECTION;
                // Restarting broadcasting
                StartBroadcasting(hostID, port);
                Debug.Log("SyncPoseServer: Connection lost. Restarting broadcasting");
                break;
            case NetworkEventType.DataEvent:
                Debug.Log($"SyncPoseServer: Received data");
                ShowImage(messageBuffer);
                break;
            default:
                Debug.LogError($"SyncPoseServer: Unknown network message type received, namely {eventType}");
                break;
        }

        return сonnectionID;
    }

    private void ShowImage(byte[] imageBytes)
    {
        Texture2D texture = new Texture2D(256, 256);
        texture.LoadImage(imageBytes);
        image.texture = texture;
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

using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using System.Buffers.Binary;
using System.Linq;

public class SyncPoseServer : SyncPose
{
    [SerializeField]
    private RawImage image;

#pragma warning disable CS0618 // Type or member is obsolete
    protected static readonly int BROADCAST_INTERVAL = 1000; // ms
    private bool startedBroadcasting = false;
    private int frameCount = 0;
    private int imageSize = 0;
    private int imageBytesReceived = 0;
    private byte[] imageBytes;

    protected override void Start()
    {
        base.Start();
    }
    void Update()
    {
        // Debug.Log("SyncPoseServer: Update");
        if (Input.touchCount > 0)
        {
            print("Touch detected");
            if (Input.GetTouch(0).phase == TouchPhase.Ended && !startedBroadcasting)
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
    }

    protected virtual void LateUpdate()
    {
        // Debug.Log("SyncPoseServer: LateUpdate");
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
        // Debug.Log("SyncPoseServer: Check connection changes");
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
            case NetworkEventType.DataEvent:
                ProcessMessage(messageBuffer);
                break;
            default:
                Debug.LogError($"SyncPoseServer: Unknown network message type received, namely {eventType}");
                break;
        }

        return сonnectionID;
    }

    private void ProcessMessage(byte[] bytes)
    {
        if (imageSize == 0)
        {
            imageSize = BinaryPrimitives.ReadInt32LittleEndian(bytes.Take(4).ToArray());
            imageBytes = new byte[imageSize];
            imageBytesReceived = 0;
        }
        else
        {
            int bytesToReceive = imageSize - imageBytesReceived;
            System.Buffer.BlockCopy(bytes, 0, imageBytes, imageBytesReceived, bytesToReceive > bytes.Length ? bytes.Length : bytesToReceive);
            imageBytesReceived += bytes.Length;
        }

        if (imageBytesReceived >= imageSize)
        {
            imageBytesReceived = 0;
            imageSize = 0;


            Texture2D texture = new Texture2D(512, 512);
            texture.LoadImage(imageBytes);
            image.texture = texture;
        }
    }

    private bool SendPose()
    {
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

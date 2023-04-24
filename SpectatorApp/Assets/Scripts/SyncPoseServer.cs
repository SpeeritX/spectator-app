using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using System.Buffers.Binary;
using System.Linq;
using System.Collections;

public class SyncPoseServer : SyncPose
{
    [SerializeField]
    private RawImage image;

#pragma warning disable CS0618 // Type or member is obsolete
    protected static readonly int BROADCAST_INTERVAL = 1000; // ms
    private bool startedBroadcasting = false;
    private bool ready = true;
    private int generatedImages = 0;
    private int frameCount = 0;
    private int imageSize = 0;
    private int imageBytesReceived = 0;
    private byte[] imageBytes;

    protected override void Start()
    {
        base.Start();
        StartCoroutine(NetworkEventsListener());
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
        frameCount++;
        if (frameCount >= 60)
        {
            Debug.Log($"SyncPoseServer: FPS: {generatedImages}");
            generatedImages = 0;
            frameCount = 0;
        }
    }

    IEnumerator NetworkEventsListener()
    {
        Debug.Log("SyncPoseServer: NetworkEventsListener started");
        int outHostID;
        int outConnectionID;
        int outChannelID;
        int actualMessageLength;
        byte error;
        var eventType = NetworkTransport.Receive(out outHostID, out outConnectionID, out outChannelID,
            messageBuffer, messageBuffer.Length, out actualMessageLength, out error);
        while (true)
        {
            switch (eventType)
            {
                case NetworkEventType.Nothing:
                    yield return new WaitForSeconds(0.01f);
                    break;
                case NetworkEventType.ConnectEvent:
                    Debug.Log("SyncPoseServer: Client connected");
                    сonnectionID = outConnectionID;
                    StopBroadcasting();
                    SendPose();
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

            if (transform.hasChanged && ready)
            {
                ready = false;
                // Debug.Log("SyncPoseServer: Transform has changed. Sending new pose");
                SendPose();
                transform.hasChanged = false;
            }

            eventType = NetworkTransport.Receive(out outHostID, out outConnectionID, out outChannelID,
            messageBuffer, messageBuffer.Length, out actualMessageLength, out error);
        }
    }

    private void ProcessMessage(byte[] bytes)
    {
        if (imageSize == 0)
        {
            imageSize = BinaryPrimitives.ReadInt32LittleEndian(bytes.Take(4).ToArray());
            Debug.Log($"SyncPoseServer: Image size: {imageSize}");
            imageBytes = new byte[imageSize];
            imageBytesReceived = 0;
            int bytesToCopy = imageSize > (bytes.Length - 4) ? bytes.Length - 4 : imageSize;
            System.Buffer.BlockCopy(bytes, 4, imageBytes, 0, bytesToCopy);
            imageBytesReceived += bytesToCopy;
        }
        else
        {
            int bytesToReceive = imageSize - imageBytesReceived;
            int bytesToCopy = bytesToReceive > bytes.Length ? bytes.Length : bytesToReceive;
            System.Buffer.BlockCopy(bytes, 0, imageBytes, imageBytesReceived, bytesToCopy);
            imageBytesReceived += bytesToCopy;
        }
        if (imageBytesReceived >= imageSize)
        {
            imageBytesReceived = 0;
            imageSize = 0;
            ready = true;
            generatedImages++;
            Destroy(image.texture);
            Texture2D texture = new Texture2D(720, 1280);
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

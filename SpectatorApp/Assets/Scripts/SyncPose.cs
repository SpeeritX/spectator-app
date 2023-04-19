using System;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.Networking;

public class SyncPose : MonoBehaviour
{
    [Serializable]
    protected struct Pose
    {
        public Vector3 position;
        public Quaternion rotation;

        public Pose(Vector3 v3, Quaternion q)
        {
            position = v3;
            rotation = q;
        }
    }

#pragma warning disable CS0618 // Type or member is obsolete
    [SerializeField, Tooltip("The port number has to be the same for the server and the receiver")]
    protected int port = 54300;

    protected int channelID;
    protected int hostID;
    protected int сonnectionID = INVALID_CONNECTION;

    protected HostTopology topology;

    protected readonly byte[] messageBuffer = new byte[19962];
    protected BinaryFormatter formatter = new BinaryFormatter();

    protected static readonly int MAX_NUMBER_OF_CONNECTIONS = 1;
    protected static readonly int INVALID_CONNECTION = -1;

    public static readonly int BROADCAST_CREDENTIALS_KEY = 13;
    public static readonly int BROADCAST_CREDENTIALS_VERSION = 1;
    public static readonly int BROADCAST_CREDENTIALS_SUBVERSION = 0;

    protected virtual void Awake()
    {
        GlobalConfig globalConfig = new GlobalConfig();

        // Set the maximum packet size (in bytes)
        globalConfig.MaxPacketSize = 20000;

        // Apply the new configuration
        NetworkTransport.Init(globalConfig);

        // We will need only one channel between this server and a client, so we're creating
        // one such that only the most recent message in the receive buffer will be delivered
        ConnectionConfig config = new ConnectionConfig();
        channelID = config.AddChannel(QosType.ReliableStateUpdate);
        config.PacketSize = 20000; // This value is recommended by Unity documentation: https://docs.unity3d.com/ScriptReference/Networking.ConnectionConfig.PacketSize.html

        // The thing is we don't need more than one connection
        topology = new HostTopology(config, MAX_NUMBER_OF_CONNECTIONS);
    }

    protected virtual void Start()
    {
        // Opening a socket on a specifeid port
        hostID = NetworkTransport.AddHost(topology, port);

        // Since Unity's Vector3 and Quaternion aren't serializable, we have to use surrogates
        SurrogateSelector ss = new SurrogateSelector();
        ss.AddSurrogate(typeof(Vector3),
            new StreamingContext(StreamingContextStates.All),
            new Vector3SerializationSurrogate());
        ss.AddSurrogate(typeof(Quaternion),
            new StreamingContext(StreamingContextStates.All),
            new QuaternionSerializationSurrogate());
        formatter.SurrogateSelector = ss;
    }

    protected virtual void OnDestroy()
    {
        NetworkTransport.Shutdown();
    }
#pragma warning restore CS0618 // Type or member is obsolete
}

using System.Runtime.Serialization;
using UnityEngine;

// Based on the examples from https://docs.microsoft.com/en-us/archive/msdn-magazine/2002/september/net-column-run-time-serialization-part-3
sealed public class QuaternionSerializationSurrogate : ISerializationSurrogate
{
    public void GetObjectData(System.Object obj, SerializationInfo info, StreamingContext context)
    {
        Quaternion q = (Quaternion)obj;
        info.AddValue("x", q.x);
        info.AddValue("y", q.y);
        info.AddValue("z", q.z);
        info.AddValue("w", q.w);
    }

    public System.Object SetObjectData(System.Object obj, SerializationInfo info, StreamingContext context, ISurrogateSelector selector)
    {
        Quaternion q = (Quaternion)obj;
        q.x = info.GetSingle("x");
        q.y = info.GetSingle("y");
        q.z = info.GetSingle("z");
        q.w = info.GetSingle("w");
        return q;
    }
}

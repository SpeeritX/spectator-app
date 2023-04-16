using System.Runtime.Serialization;
using UnityEngine;

// Based on the examples from https://docs.microsoft.com/en-us/archive/msdn-magazine/2002/september/net-column-run-time-serialization-part-3
sealed public class Vector3SerializationSurrogate : ISerializationSurrogate
{
    public void GetObjectData(System.Object obj, SerializationInfo info, StreamingContext context)
    {
        Vector3 v3 = (Vector3)obj;
        info.AddValue("x", v3.x);
        info.AddValue("y", v3.y);
        info.AddValue("z", v3.z);
    }

    public System.Object SetObjectData(System.Object obj, SerializationInfo info, StreamingContext context, ISurrogateSelector selector)
    {
        Vector3 v3 = (Vector3)obj;
        v3.x = info.GetSingle("x");
        v3.y = info.GetSingle("y");
        v3.z = info.GetSingle("z");
        return v3;
    }
}

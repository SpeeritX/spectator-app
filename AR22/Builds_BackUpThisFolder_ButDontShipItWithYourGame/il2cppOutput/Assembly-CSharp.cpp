#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// Assignment2
struct Assignment2_t67471E6797F994961A4E0292D59FC89CFAC9DB0E;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Networking.HostTopology
struct HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// ObjectAdder
struct ObjectAdder_t2EDF0B823D24631F53E7311032D000D590CF62B4;
// QuaternionSerializationSurrogate
struct QuaternionSerializationSurrogate_t13129E8F8F35CF00B7703AC4FADEFB79D03B9BCA;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Runtime.Serialization.SurrogateHashtable
struct SurrogateHashtable_t7984ADA2143252F74820046721C2887B104EAC87;
// System.Runtime.Serialization.SurrogateSelector
struct SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118;
// SyncPose
struct SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD;
// SyncPoseServer
struct SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Vector3SerializationSurrogate
struct Vector3SerializationSurrogate_t5333B7066664146A482852A200B7CBDE74A6C10F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkError_t4AA1C346CFDCDF472B6FFA8D4DF80C4E0D437B3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkEventType_t9F8D1313339B219FB8648231E271596C8B1B37DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneAlignment_t531EADCD75A8A621FF67C4788965BF89F076CFBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t442D434330467DA3BB4CFE29F7BA59AAB1A75AAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionSerializationSurrogate_t13129E8F8F35CF00B7703AC4FADEFB79D03B9BCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableType_t8B4D3C5D68805ECC40B1C8CA6C7174184BB2C110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3SerializationSurrogate_t5333B7066664146A482852A200B7CBDE74A6C10F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral0E41649C210E7DA5C8511F335614C75BED56098F;
IL2CPP_EXTERN_C String_t* _stringLiteral0F35D1522CF2B3605E3702B1CBF53BB703159A37;
IL2CPP_EXTERN_C String_t* _stringLiteral12DE29842D009BD93D4FA1E712E10406436CFEA2;
IL2CPP_EXTERN_C String_t* _stringLiteral193F9DE22B6E6F3DF51EE3268B59251B7B352931;
IL2CPP_EXTERN_C String_t* _stringLiteral349E3C33B0A4D98D6236029976983610E2CA6F07;
IL2CPP_EXTERN_C String_t* _stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7;
IL2CPP_EXTERN_C String_t* _stringLiteral4DBC863330205A6A4377B078566A75A90F25BD08;
IL2CPP_EXTERN_C String_t* _stringLiteral5767130D7DD3838E7DDEAF468C38245ED0C43B39;
IL2CPP_EXTERN_C String_t* _stringLiteral59B41B34F23B4FF5515097AC297939A819B5912E;
IL2CPP_EXTERN_C String_t* _stringLiteral5D735AEE9E132077B72F6040E5BE101072F5388B;
IL2CPP_EXTERN_C String_t* _stringLiteral62FD546D4E6F994D876CF2D47FF6444F6031E5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB2EA9DAB95EE32922B92D361FB2787A271F388;
IL2CPP_EXTERN_C String_t* _stringLiteral739358787ED360D33D1E315EBFFFA2DE9EBD5A64;
IL2CPP_EXTERN_C String_t* _stringLiteral808E9F716B43408E66B67EC8729FE36026D8E18D;
IL2CPP_EXTERN_C String_t* _stringLiteral8937813E5DED545C65D0E39705727088FACE4E25;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E14A1D4A5ED0FC67CD4E4BB47214847F9D1A416;
IL2CPP_EXTERN_C String_t* _stringLiteralA6D972022738F689E46AB725FDB2F1E0020EC99C;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C String_t* _stringLiteralBB11B3E39828E6FD560D6662C7A1F69424E16DD5;
IL2CPP_EXTERN_C String_t* _stringLiteralD5B8D0B990316322126BF23D7E67FC919AF60B1D;
IL2CPP_EXTERN_C String_t* _stringLiteralE234A738CE84C36444A0ECBA4177E728D8A3260A;
IL2CPP_EXTERN_C String_t* _stringLiteralF3B1AF618C1E900BF273B2BBBB493550ABEDDA97;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60  : public RuntimeObject
{
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_1;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_8;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_11;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_13;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_16;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_17;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_18;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_19;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_20;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_21;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_22;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_25;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_26;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* ___m_Channels_27;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* ___m_SharedOrderChannels_28;
};

// UnityEngine.Networking.HostTopology
struct HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F  : public RuntimeObject
{
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// QuaternionSerializationSurrogate
struct QuaternionSerializationSurrogate_t13129E8F8F35CF00B7703AC4FADEFB79D03B9BCA  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Runtime.Serialization.SurrogateSelector
struct SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118  : public RuntimeObject
{
	// System.Runtime.Serialization.SurrogateHashtable System.Runtime.Serialization.SurrogateSelector::m_surrogates
	SurrogateHashtable_t7984ADA2143252F74820046721C2887B104EAC87* ___m_surrogates_0;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.SurrogateSelector::m_nextSelector
	RuntimeObject* ___m_nextSelector_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Vector3SerializationSurrogate
struct Vector3SerializationSurrogate_t5333B7066664146A482852A200B7CBDE74A6C10F  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_crossAppDomainArray_6;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// SyncPose/Pose
struct Pose_t442D434330467DA3BB4CFE29F7BA59AAB1A75AAC 
{
	// UnityEngine.Vector3 SyncPose/Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion SyncPose/Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Assignment2
struct Assignment2_t67471E6797F994961A4E0292D59FC89CFAC9DB0E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Assignment2::raycast
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___raycast_4;
	// UnityEngine.XR.ARFoundation.ARRaycastManager Assignment2::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_5;
};

// ObjectAdder
struct ObjectAdder_t2EDF0B823D24631F53E7311032D000D590CF62B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ObjectAdder::cube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cube_4;
	// UnityEngine.GameObject ObjectAdder::midair
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___midair_5;
	// UnityEngine.GameObject ObjectAdder::raycast
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___raycast_6;
	// UnityEngine.Transform ObjectAdder::parentObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentObject_7;
};

// SyncPose
struct SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 SyncPose::port
	int32_t ___port_4;
	// System.Int32 SyncPose::channelID
	int32_t ___channelID_5;
	// System.Int32 SyncPose::hostID
	int32_t ___hostID_6;
	// System.Int32 SyncPose::?onnectionID
	int32_t ___U441onnectionID_7;
	// UnityEngine.Networking.HostTopology SyncPose::topology
	HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___topology_8;
	// System.Byte[] SyncPose::messageBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___messageBuffer_9;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter SyncPose::formatter
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* ___formatter_10;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// SyncPoseServer
struct SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A  : public SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD
{
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>

// UnityEngine.Networking.ConnectionConfig

// UnityEngine.Networking.ConnectionConfig

// UnityEngine.Networking.HostTopology

// UnityEngine.Networking.HostTopology

// QuaternionSerializationSurrogate

// QuaternionSerializationSurrogate

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Runtime.Serialization.SurrogateSelector

// System.Runtime.Serialization.SurrogateSelector

// Vector3SerializationSurrogate

// Vector3SerializationSurrogate

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.UInt16

// System.UInt16

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8* ___typeNameCache_7;
};

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter

// System.IO.MemoryStream

// System.IO.MemoryStream

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Touch

// UnityEngine.Touch

// SyncPose/Pose

// SyncPose/Pose

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.XR.ARFoundation.ARTrackable

// UnityEngine.XR.ARFoundation.ARTrackable

// Assignment2

// Assignment2

// ObjectAdder

// ObjectAdder

// SyncPose
struct SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields
{
	// System.Int32 SyncPose::MAX_NUMBER_OF_CONNECTIONS
	int32_t ___MAX_NUMBER_OF_CONNECTIONS_11;
	// System.Int32 SyncPose::INVALID_CONNECTION
	int32_t ___INVALID_CONNECTION_12;
	// System.Int32 SyncPose::BROADCAST_CREDENTIALS_KEY
	int32_t ___BROADCAST_CREDENTIALS_KEY_13;
	// System.Int32 SyncPose::BROADCAST_CREDENTIALS_VERSION
	int32_t ___BROADCAST_CREDENTIALS_VERSION_14;
	// System.Int32 SyncPose::BROADCAST_CREDENTIALS_SUBVERSION
	int32_t ___BROADCAST_CREDENTIALS_SUBVERSION_15;
};

// SyncPose

// SyncPoseServer
struct SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_StaticFields
{
	// System.Int32 SyncPoseServer::BROADCAST_INTERVAL
	int32_t ___BROADCAST_INTERVAL_16;
};

// SyncPoseServer

// UnityEngine.XR.ARFoundation.ARPlane

// UnityEngine.XR.ARFoundation.ARPlane

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;

// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___1_hitResults, int32_t ___2_trackableTypes, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___0_index, method);
}
// System.Void Assignment2::HandleRaycast(UnityEngine.XR.ARFoundation.ARRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assignment2_HandleRaycast_mCFDB631C68CD373ABFCD43205893032A9F0BD0B3 (Assignment2_t67471E6797F994961A4E0292D59FC89CFAC9DB0E* __this, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 ___0_hit, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::get_trackable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ARRaycastHit_get_trackable_mF8D64EB03AFF2E1D5FC9B88255D2A84130B43D09_inline (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARFoundation.ARPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARFoundation.ARRaycastHit::get_hitType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARRaycastHit_get_hitType_m4ACAC8C59DED2EEF01C165D15136A15EBBA996F0 (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Single System.Runtime.Serialization.SerializationInfo::GetSingle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkTransport::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Init_m0ADB18EAE22E2B2AFD8183ED3A3EE71A6020B0BE (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_mF6E6BBCAC0C41237A0A26FC3BDA8C882AC627113 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfig::set_PacketSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_PacketSize_m2877D997779DE7551B81F77B48C669C471740766 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___0_defaultConfig, int32_t ___1_maxDefaultConnections, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_mE936C6FF6FF83D6079AFBA18902D30C324FE2169 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___0_topology, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SurrogateSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateSelector__ctor_m0113B557C6BC3A854D8BEC2902F015C0D86DEA5D (SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E (StreamingContext_t56760522A751890146EE45F82F866B55B7E33677* __this, int32_t ___0_state, const RuntimeMethod* method) ;
// System.Void Vector3SerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3SerializationSurrogate__ctor_mFCDFAFAE4AAB801530F78FB5587E31609FB26681 (Vector3SerializationSurrogate_t5333B7066664146A482852A200B7CBDE74A6C10F* __this, const RuntimeMethod* method) ;
// System.Void QuaternionSerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionSerializationSurrogate__ctor_m71B44684BED4A145AA56D8029244D7DEC3270EB7 (QuaternionSerializationSurrogate_t13129E8F8F35CF00B7703AC4FADEFB79D03B9BCA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_SurrogateSelector(System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryFormatter_set_SurrogateSelector_m489336AE3997DB4E7950C5AFAE9CB465E7093358_inline (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Shutdown_mBC882DF0C55BA635D3E0281F95D9BFC2F9FE1996 (const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705 (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, const RuntimeMethod* method) ;
// System.Void SyncPose/Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m44AEA44E298A389482D6256CE25B17F80CE1A23E (Pose_t442D434330467DA3BB4CFE29F7BA59AAB1A75AAC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, const RuntimeMethod* method) ;
// System.Void SyncPose::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_Start_m2E2CA4FCF71099085B0740A3D291CBD1821B0277 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.NetworkError SyncPoseServer::StartBroadcasting(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncPoseServer_StartBroadcasting_m86069A2909C1EDD951E3E667B901D731C72D3EF2 (int32_t ___0_hostID, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Transform::get_hasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 SyncPoseServer::CheckConnectionChanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncPoseServer_CheckConnectionChanges_m1C47C5FE37E2786A6E78EC6FC3C99E8D06C23698 (SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A* __this, const RuntimeMethod* method) ;
// System.Boolean SyncPoseServer::SendPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncPoseServer_SendPose_mD128B6CB20696B12AF666526CFFE1752F376D6F1 (SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::Receive(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74 (int32_t* ___0_hostId, int32_t* ___1_connectionId, int32_t* ___2_channelId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_buffer, int32_t ___4_bufferSize, int32_t* ___5_receivedSize, uint8_t* ___6_error, const RuntimeMethod* method) ;
// System.Boolean SyncPoseServer::StopBroadcasting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncPoseServer_StopBroadcasting_m82268F44D73A2606467CFAE940A0993DECE6B26B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_serializationStream, RuntimeObject* ___1_graph, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Send_m58F29B19199882D9D8053858C265380DCF292855 (int32_t ___0_hostId, int32_t ___1_connectionId, int32_t ___2_channelId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_buffer, int32_t ___4_size, uint8_t* ___5_error, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscovery(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_StartBroadcastDiscovery_mA17BAD20CAC21FB0AF9F1863C8B93E3DAEA35F3E (int32_t ___0_hostId, int32_t ___1_broadcastPort, int32_t ___2_key, int32_t ___3_version, int32_t ___4_subversion, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_buffer, int32_t ___6_size, int32_t ___7_timeout, uint8_t* ___8_error, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::IsBroadcastDiscoveryRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_IsBroadcastDiscoveryRunning_mC1B7FD7C08878318DACC8CADCB7BF38A8D1F9D94 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkTransport::StopBroadcastDiscovery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_StopBroadcastDiscovery_m25409782C2354F5E02D65EDCAB6B1D77EAAC0119 (const RuntimeMethod* method) ;
// System.Void SyncPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose__ctor_mE6EDD5605FE87FD5A2ED26750E8E33A6557B39F7 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Assignment2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assignment2_Start_m613554BF62C49962BC651776732999E0F88A93FB (Assignment2_t67471E6797F994961A4E0292D59FC89CFAC9DB0E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Assignment2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assignment2_Update_m47920C1D1A053FDB18D68C0C53E714F461C7EBE8 (Assignment2_t67471E6797F994961A4E0292D59FC89CFAC9DB0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB11B3E39828E6FD560D6662C7A1F69424E16DD5);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_1 = NULL;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		// Debug.Log("Touch");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7, NULL);
		// List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_3 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_3, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_1 = L_3;
		// if (m_RaycastManager.Raycast(Input.GetTouch(0).position, hits))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_4 = __this->___m_RaycastManager_5;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5;
		L_5 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_2 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = V_1;
		NullCheck(L_4);
		bool L_8;
		L_8 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_4, L_6, L_7, (-1), NULL);
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// Debug.Log("Hit a plane");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBB11B3E39828E6FD560D6662C7A1F69424E16DD5, NULL);
		// HandleRaycast(hits[0]);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_9 = V_1;
		NullCheck(L_9);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_10;
		L_10 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_9, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		Assignment2_HandleRaycast_mCFDB631C68CD373ABFCD43205893032A9F0BD0B3(__this, L_10, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Assignment2::HandleRaycast(UnityEngine.XR.ARFoundation.ARRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assignment2_HandleRaycast_mCFDB631C68CD373ABFCD43205893032A9F0BD0B3 (Assignment2_t67471E6797F994961A4E0292D59FC89CFAC9DB0E* __this, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 ___0_hit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneAlignment_t531EADCD75A8A621FF67C4788965BF89F076CFBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableType_t8B4D3C5D68805ECC40B1C8CA6C7174184BB2C110_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DBC863330205A6A4377B078566A75A90F25BD08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D735AEE9E132077B72F6040E5BE101072F5388B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3B1AF618C1E900BF273B2BBBB493550ABEDDA97);
		s_Il2CppMethodInitialized = true;
	}
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_0 = NULL;
	{
		// if (hit.trackable is ARPlane plane)
		ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* L_0;
		L_0 = ARRaycastHit_get_trackable_mF8D64EB03AFF2E1D5FC9B88255D2A84130B43D09_inline((&___0_hit), NULL);
		V_0 = ((ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0*)IsInstSealed((RuntimeObject*)L_0, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_il2cpp_TypeInfo_var));
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		// Debug.Log($"Hit a plane with alignment {plane.alignment}");
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_2, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(PlaneAlignment_t531EADCD75A8A621FF67C4788965BF89F076CFBC_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5D735AEE9E132077B72F6040E5BE101072F5388B, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// Debug.Log($"Hit {hit.pose.position}");
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		L_7 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&___0_hit), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		RuntimeObject* L_10 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF3B1AF618C1E900BF273B2BBBB493550ABEDDA97, L_10, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// Instantiate(raycast, hit.pose.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___raycast_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13;
		L_13 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&___0_hit), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13.___position_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_12, L_14, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		return;
	}

IL_0068:
	{
		// Debug.Log($"Raycast hit a {hit.hitType}");
		int32_t L_17;
		L_17 = ARRaycastHit_get_hitType_m4ACAC8C59DED2EEF01C165D15136A15EBBA996F0((&___0_hit), NULL);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(TrackableType_t8B4D3C5D68805ECC40B1C8CA6C7174184BB2C110_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4DBC863330205A6A4377B078566A75A90F25BD08, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		// }
		return;
	}
}
// System.Void Assignment2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assignment2__ctor_m91F1FC7205A13A2842BE57D973D7A26833A60567 (Assignment2_t67471E6797F994961A4E0292D59FC89CFAC9DB0E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjectAdder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectAdder_Start_m0268788E446623B6E6B791FC2B17EFBFF38936A5 (ObjectAdder_t2EDF0B823D24631F53E7311032D000D590CF62B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6D972022738F689E46AB725FDB2F1E0020EC99C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Hello, World");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA6D972022738F689E46AB725FDB2F1E0020EC99C, NULL);
		// Instantiate(cube, parentObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cube_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___parentObject_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ObjectAdder::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectAdder_Update_mE6D48E958CFBD3995448328A9145CF135175093D (ObjectAdder_t2EDF0B823D24631F53E7311032D000D590CF62B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// Instantiate(midair, new Vector3(1, 3, 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___midair_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (1.0f), (3.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_1, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_002e:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_5;
		L_5 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_6);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8;
		L_8 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_6, L_7, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_9;
		L_9 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_8, (&V_0), NULL);
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		// Instantiate(raycast, hit.point, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___raycast_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_10, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void ObjectAdder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectAdder__ctor_m7E275A5F35986D33794BDCABAE71851198CA5018 (ObjectAdder_t2EDF0B823D24631F53E7311032D000D590CF62B4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuaternionSerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionSerializationSurrogate_GetObjectData_mFE4409390927A98BE1444251FBB4518DE3FC5674 (QuaternionSerializationSurrogate_t13129E8F8F35CF00B7703AC4FADEFB79D03B9BCA* __this, RuntimeObject* ___0_obj, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___2_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion q = (Quaternion)obj;
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))));
		// info.AddValue("x", q.x);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___1_info;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = V_0;
		float L_3 = L_2.___x_0;
		NullCheck(L_1);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		// info.AddValue("y", q.y);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___1_info;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		float L_6 = L_5.___y_1;
		NullCheck(L_4);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_4, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_6, NULL);
		// info.AddValue("z", q.z);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = ___1_info;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_0;
		float L_9 = L_8.___z_2;
		NullCheck(L_7);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_7, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_9, NULL);
		// info.AddValue("w", q.w);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___1_info;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		float L_12 = L_11.___w_3;
		NullCheck(L_10);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_10, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, L_12, NULL);
		// }
		return;
	}
}
// System.Object QuaternionSerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QuaternionSerializationSurrogate_SetObjectData_m7AF1FBF3A34DF003BAA696036DB1D877116B6B28 (QuaternionSerializationSurrogate_t13129E8F8F35CF00B7703AC4FADEFB79D03B9BCA* __this, RuntimeObject* ___0_obj, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___2_context, RuntimeObject* ___3_selector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion q = (Quaternion)obj;
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))));
		// q.x = info.GetSingle("x");
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___1_info;
		NullCheck(L_1);
		float L_2;
		L_2 = SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		(&V_0)->___x_0 = L_2;
		// q.y = info.GetSingle("y");
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___1_info;
		NullCheck(L_3);
		float L_4;
		L_4 = SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037(L_3, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		(&V_0)->___y_1 = L_4;
		// q.z = info.GetSingle("z");
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___1_info;
		NullCheck(L_5);
		float L_6;
		L_6 = SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037(L_5, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		(&V_0)->___z_2 = L_6;
		// q.w = info.GetSingle("w");
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = ___1_info;
		NullCheck(L_7);
		float L_8;
		L_8 = SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037(L_7, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, NULL);
		(&V_0)->___w_3 = L_8;
		// return q;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = L_9;
		RuntimeObject* L_11 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_10);
		return L_11;
	}
}
// System.Void QuaternionSerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionSerializationSurrogate__ctor_m71B44684BED4A145AA56D8029244D7DEC3270EB7 (QuaternionSerializationSurrogate_t13129E8F8F35CF00B7703AC4FADEFB79D03B9BCA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SyncPose::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_Awake_m3BCA9E1CE0DE1D4CA38DC25F54024B76B50B8BC5 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F35D1522CF2B3605E3702B1CBF53BB703159A37);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* V_0 = NULL;
	{
		// Debug.Log("SyncPose: Initializing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0F35D1522CF2B3605E3702B1CBF53BB703159A37, NULL);
		// NetworkTransport.Init();
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_Init_m0ADB18EAE22E2B2AFD8183ED3A3EE71A6020B0BE(NULL);
		// ConnectionConfig config = new ConnectionConfig();
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0 = (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)il2cpp_codegen_object_new(ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConnectionConfig__ctor_mF6E6BBCAC0C41237A0A26FC3BDA8C882AC627113(L_0, NULL);
		V_0 = L_0;
		// channelID = config.AddChannel(QosType.ReliableStateUpdate);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_1 = V_0;
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_1, 7, NULL);
		__this->___channelID_5 = L_2;
		// config.PacketSize = 1470; // This value is recommended by Unity documentation: https://docs.unity3d.com/ScriptReference/Networking.ConnectionConfig.PacketSize.html
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_3 = V_0;
		NullCheck(L_3);
		ConnectionConfig_set_PacketSize_m2877D997779DE7551B81F77B48C669C471740766(L_3, (uint16_t)((int32_t)1470), NULL);
		// topology = new HostTopology(config, MAX_NUMBER_OF_CONNECTIONS);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		int32_t L_5 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___MAX_NUMBER_OF_CONNECTIONS_11;
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_6 = (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F*)il2cpp_codegen_object_new(HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13(L_6, L_4, L_5, NULL);
		__this->___topology_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topology_8), (void*)L_6);
		// }
		return;
	}
}
// System.Void SyncPose::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_Start_m2E2CA4FCF71099085B0740A3D291CBD1821B0277 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionSerializationSurrogate_t13129E8F8F35CF00B7703AC4FADEFB79D03B9BCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3SerializationSurrogate_t5333B7066664146A482852A200B7CBDE74A6C10F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral193F9DE22B6E6F3DF51EE3268B59251B7B352931);
		s_Il2CppMethodInitialized = true;
	}
	SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* V_0 = NULL;
	{
		// Debug.Log("SyncPose: Starting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral193F9DE22B6E6F3DF51EE3268B59251B7B352931, NULL);
		// hostID = NetworkTransport.AddHost(topology, port);
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_0 = __this->___topology_8;
		int32_t L_1 = __this->___port_4;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NetworkTransport_AddHost_mE936C6FF6FF83D6079AFBA18902D30C324FE2169(L_0, L_1, NULL);
		__this->___hostID_6 = L_2;
		// SurrogateSelector ss = new SurrogateSelector();
		SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* L_3 = (SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118*)il2cpp_codegen_object_new(SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		SurrogateSelector__ctor_m0113B557C6BC3A854D8BEC2902F015C0D86DEA5D(L_3, NULL);
		V_0 = L_3;
		// ss.AddSurrogate(typeof(Vector3),
		//     new StreamingContext(StreamingContextStates.All),
		//     new Vector3SerializationSurrogate());
		SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* L_4 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_7;
		memset((&L_7), 0, sizeof(L_7));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_7), ((int32_t)255), /*hidden argument*/NULL);
		Vector3SerializationSurrogate_t5333B7066664146A482852A200B7CBDE74A6C10F* L_8 = (Vector3SerializationSurrogate_t5333B7066664146A482852A200B7CBDE74A6C10F*)il2cpp_codegen_object_new(Vector3SerializationSurrogate_t5333B7066664146A482852A200B7CBDE74A6C10F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Vector3SerializationSurrogate__ctor_mFCDFAFAE4AAB801530F78FB5587E31609FB26681(L_8, NULL);
		NullCheck(L_4);
		VirtualActionInvoker3< Type_t*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject* >::Invoke(5 /* System.Void System.Runtime.Serialization.SurrogateSelector::AddSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISerializationSurrogate) */, L_4, L_6, L_7, L_8);
		// ss.AddSurrogate(typeof(Quaternion),
		//     new StreamingContext(StreamingContextStates.All),
		//     new QuaternionSerializationSurrogate());
		SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_12;
		memset((&L_12), 0, sizeof(L_12));
		StreamingContext__ctor_m76D85BCE7F2DFF192969B8A820A0DCC1E79F647E((&L_12), ((int32_t)255), /*hidden argument*/NULL);
		QuaternionSerializationSurrogate_t13129E8F8F35CF00B7703AC4FADEFB79D03B9BCA* L_13 = (QuaternionSerializationSurrogate_t13129E8F8F35CF00B7703AC4FADEFB79D03B9BCA*)il2cpp_codegen_object_new(QuaternionSerializationSurrogate_t13129E8F8F35CF00B7703AC4FADEFB79D03B9BCA_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		QuaternionSerializationSurrogate__ctor_m71B44684BED4A145AA56D8029244D7DEC3270EB7(L_13, NULL);
		NullCheck(L_9);
		VirtualActionInvoker3< Type_t*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, RuntimeObject* >::Invoke(5 /* System.Void System.Runtime.Serialization.SurrogateSelector::AddSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISerializationSurrogate) */, L_9, L_11, L_12, L_13);
		// formatter.SurrogateSelector = ss;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_14 = __this->___formatter_10;
		SurrogateSelector_t8A877793013470A8B4FE67F6FE9D202A14754118* L_15 = V_0;
		NullCheck(L_14);
		BinaryFormatter_set_SurrogateSelector_m489336AE3997DB4E7950C5AFAE9CB465E7093358_inline(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void SyncPose::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_OnDestroy_mD28B4E9041D3F8478AE67B137A167247D3C552DC (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E14A1D4A5ED0FC67CD4E4BB47214847F9D1A416);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SyncPose: Shutting down");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9E14A1D4A5ED0FC67CD4E4BB47214847F9D1A416, NULL);
		// NetworkTransport.Shutdown();
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_Shutdown_mBC882DF0C55BA635D3E0281F95D9BFC2F9FE1996(NULL);
		// }
		return;
	}
}
// System.Void SyncPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose__ctor_mE6EDD5605FE87FD5A2ED26750E8E33A6557B39F7 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected int port = 54300;
		__this->___port_4 = ((int32_t)54300);
		// protected int ?onnectionID = INVALID_CONNECTION;
		il2cpp_codegen_runtime_class_init_inline(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___INVALID_CONNECTION_12;
		__this->___U441onnectionID_7 = L_0;
		// protected readonly byte[] messageBuffer = new byte[512];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		__this->___messageBuffer_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageBuffer_9), (void*)L_1);
		// protected BinaryFormatter formatter = new BinaryFormatter();
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_2 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_2, NULL);
		__this->___formatter_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___formatter_10), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void SyncPose::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose__cctor_mB47A010EBBF5F8EA9420B815D4A63861EF52206B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly int MAX_NUMBER_OF_CONNECTIONS = 1;
		((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___MAX_NUMBER_OF_CONNECTIONS_11 = 1;
		// protected static readonly int INVALID_CONNECTION = -1;
		((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___INVALID_CONNECTION_12 = (-1);
		// public static readonly int BROADCAST_CREDENTIALS_KEY = 13;
		((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___BROADCAST_CREDENTIALS_KEY_13 = ((int32_t)13);
		// public static readonly int BROADCAST_CREDENTIALS_VERSION = 1;
		((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___BROADCAST_CREDENTIALS_VERSION_14 = 1;
		// public static readonly int BROADCAST_CREDENTIALS_SUBVERSION = 0;
		((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___BROADCAST_CREDENTIALS_SUBVERSION_15 = 0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SyncPose/Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m44AEA44E298A389482D6256CE25B17F80CE1A23E (Pose_t442D434330467DA3BB4CFE29F7BA59AAB1A75AAC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, const RuntimeMethod* method) 
{
	{
		// position = v3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v3;
		__this->___position_0 = L_0;
		// rotation = q;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_q;
		__this->___rotation_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Pose__ctor_m44AEA44E298A389482D6256CE25B17F80CE1A23E_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, const RuntimeMethod* method)
{
	Pose_t442D434330467DA3BB4CFE29F7BA59AAB1A75AAC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Pose_t442D434330467DA3BB4CFE29F7BA59AAB1A75AAC*>(__this + _offset);
	Pose__ctor_m44AEA44E298A389482D6256CE25B17F80CE1A23E(_thisAdjusted, ___0_v3, ___1_q, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SyncPoseServer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPoseServer_Start_m33C643F0389E3208230FED57010E1594C0E9357C (SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkError_t4AA1C346CFDCDF472B6FFA8D4DF80C4E0D437B3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349E3C33B0A4D98D6236029976983610E2CA6F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62FD546D4E6F994D876CF2D47FF6444F6031E5E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5B8D0B990316322126BF23D7E67FC919AF60B1D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("SyncPoseServer: Starting server");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD5B8D0B990316322126BF23D7E67FC919AF60B1D, NULL);
		// base.Start();
		SyncPose_Start_m2E2CA4FCF71099085B0740A3D291CBD1821B0277(__this, NULL);
		// var error = StartBroadcasting(hostID, port);
		int32_t L_0 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___hostID_6;
		int32_t L_1 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___port_4;
		il2cpp_codegen_runtime_class_init_inline(SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = SyncPoseServer_StartBroadcasting_m86069A2909C1EDD951E3E667B901D731C72D3EF2(L_0, L_1, NULL);
		V_0 = L_2;
		// if (error != NetworkError.Ok)
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.LogError($"SyncPoseServer: Couldn't start broadcasting because of {error}. Disabling the script");
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(NetworkError_t4AA1C346CFDCDF472B6FFA8D4DF80C4E0D437B3D_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral349E3C33B0A4D98D6236029976983610E2CA6F07, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0042:
	{
		// Debug.Log("SyncPoseServer: Starting broadcasting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral62FD546D4E6F994D876CF2D47FF6444F6031E5E8, NULL);
		// }
		return;
	}
}
// System.Void SyncPoseServer::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPoseServer_LateUpdate_m59F7D49752BB2EA64E7C7B7ED05DAD72D4D331A9 (SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E41649C210E7DA5C8511F335614C75BED56098F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE234A738CE84C36444A0ECBA4177E728D8A3260A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.hasChanged)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.Log("SyncPoseServer: Transform has changed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE234A738CE84C36444A0ECBA4177E728D8A3260A, NULL);
	}

IL_0017:
	{
		// if (CheckConnectionChanges() == INVALID_CONNECTION) return;
		int32_t L_2;
		L_2 = SyncPoseServer_CheckConnectionChanges_m1C47C5FE37E2786A6E78EC6FC3C99E8D06C23698(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		int32_t L_3 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___INVALID_CONNECTION_12;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0025;
		}
	}
	{
		// if (CheckConnectionChanges() == INVALID_CONNECTION) return;
		return;
	}

IL_0025:
	{
		// if (transform.hasChanged)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_4, NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.Log("SyncPoseServer: Transform has changed. Sending new pose");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0E41649C210E7DA5C8511F335614C75BED56098F, NULL);
		// SendPose();
		bool L_6;
		L_6 = SyncPoseServer_SendPose_mD128B6CB20696B12AF666526CFFE1752F376D6F1(__this, NULL);
		// transform.hasChanged = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(L_7, (bool)0, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Int32 SyncPoseServer::CheckConnectionChanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncPoseServer_CheckConnectionChanges_m1C47C5FE37E2786A6E78EC6FC3C99E8D06C23698 (SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEventType_t9F8D1313339B219FB8648231E271596C8B1B37DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12DE29842D009BD93D4FA1E712E10406436CFEA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB2EA9DAB95EE32922B92D361FB2787A271F388);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral808E9F716B43408E66B67EC8729FE36026D8E18D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8937813E5DED545C65D0E39705727088FACE4E25);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	{
		// var eventType = NetworkTransport.Receive(out int outHostID, out int outConnectionID, out int outChannelID,
		//     messageBuffer, messageBuffer.Length, out int actualMessageLength, out byte error);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___messageBuffer_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___messageBuffer_9;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74((&V_1), (&V_2), (&V_3), L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), (&V_4), (&V_5), NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0095;
			}
		}
	}
	{
		goto IL_0080;
	}

IL_0034:
	{
		// Debug.Log("SyncPoseServer: Client connected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral12DE29842D009BD93D4FA1E712E10406436CFEA2, NULL);
		// ?onnectionID = outConnectionID;
		int32_t L_4 = V_2;
		((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___U441onnectionID_7 = L_4;
		// StopBroadcasting();
		il2cpp_codegen_runtime_class_init_inline(SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SyncPoseServer_StopBroadcasting_m82268F44D73A2606467CFAE940A0993DECE6B26B(NULL);
		// break;
		goto IL_0095;
	}

IL_004d:
	{
		// Debug.Log("SyncPoseServer: Client disconnected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8937813E5DED545C65D0E39705727088FACE4E25, NULL);
		// ?onnectionID = INVALID_CONNECTION;
		il2cpp_codegen_runtime_class_init_inline(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		int32_t L_6 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___INVALID_CONNECTION_12;
		((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___U441onnectionID_7 = L_6;
		// StartBroadcasting(hostID, port);
		int32_t L_7 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___hostID_6;
		int32_t L_8 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___port_4;
		il2cpp_codegen_runtime_class_init_inline(SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = SyncPoseServer_StartBroadcasting_m86069A2909C1EDD951E3E667B901D731C72D3EF2(L_7, L_8, NULL);
		// Debug.Log("SyncPoseServer: Connection lost. Restarting broadcasting");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral808E9F716B43408E66B67EC8729FE36026D8E18D, NULL);
		// break;
		goto IL_0095;
	}

IL_0080:
	{
		// Debug.LogError($"SyncPoseServer: Unknown network message type received, namely {eventType}");
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(NetworkEventType_t9F8D1313339B219FB8648231E271596C8B1B37DA_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral6CB2EA9DAB95EE32922B92D361FB2787A271F388, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_13, NULL);
	}

IL_0095:
	{
		// return ?onnectionID;
		int32_t L_14 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___U441onnectionID_7;
		return L_14;
	}
}
// System.Boolean SyncPoseServer::SendPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncPoseServer_SendPose_mD128B6CB20696B12AF666526CFFE1752F376D6F1 (SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkError_t4AA1C346CFDCDF472B6FFA8D4DF80C4E0D437B3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t442D434330467DA3BB4CFE29F7BA59AAB1A75AAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5767130D7DD3838E7DDEAF468C38245ED0C43B39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral739358787ED360D33D1E315EBFFFA2DE9EBD5A64);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_2 = NULL;
	{
		// Debug.Log($"Sending pose: {transform.position}, {transform.rotation}");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5;
		RuntimeObject* L_7 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral5767130D7DD3838E7DDEAF468C38245ED0C43B39, L_3, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// using (var stream = new MemoryStream(messageBuffer))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___messageBuffer_9;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_10, L_9, NULL);
		V_2 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0071:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_2;
					if (!L_11)
					{
						goto IL_007a;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_007a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// formatter.Serialize(stream, new Pose(transform.position, transform.rotation));
			BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_13 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___formatter_10;
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_2;
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
			L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
			NullCheck(L_15);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
			L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
			L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
			NullCheck(L_17);
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
			L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
			Pose_t442D434330467DA3BB4CFE29F7BA59AAB1A75AAC L_19;
			memset((&L_19), 0, sizeof(L_19));
			Pose__ctor_m44AEA44E298A389482D6256CE25B17F80CE1A23E((&L_19), L_16, L_18, /*hidden argument*/NULL);
			Pose_t442D434330467DA3BB4CFE29F7BA59AAB1A75AAC L_20 = L_19;
			RuntimeObject* L_21 = Box(Pose_t442D434330467DA3BB4CFE29F7BA59AAB1A75AAC_il2cpp_TypeInfo_var, &L_20);
			NullCheck(L_13);
			BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E(L_13, L_14, L_21, NULL);
			// bufferSize = (int)stream.Position;
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_22 = V_2;
			NullCheck(L_22);
			int64_t L_23;
			L_23 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_22);
			V_0 = ((int32_t)L_23);
			// }
			goto IL_007b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
		// NetworkTransport.Send(hostID, ?onnectionID, channelID, messageBuffer, bufferSize, out byte error);
		int32_t L_24 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___hostID_6;
		int32_t L_25 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___U441onnectionID_7;
		int32_t L_26 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___channelID_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD*)__this)->___messageBuffer_9;
		int32_t L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = NetworkTransport_Send_m58F29B19199882D9D8053858C265380DCF292855(L_24, L_25, L_26, L_27, L_28, (&V_1), NULL);
		// if ((NetworkError)error != NetworkError.Ok)
		uint8_t L_30 = V_1;
		if (!L_30)
		{
			goto IL_00b6;
		}
	}
	{
		// Debug.LogError($"SyncPoseServer: Couldn't send data over the network because of {(NetworkError)error}");
		uint8_t L_31 = V_1;
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(NetworkError_t4AA1C346CFDCDF472B6FFA8D4DF80C4E0D437B3D_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral739358787ED360D33D1E315EBFFFA2DE9EBD5A64, L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_34, NULL);
		// return false;
		return (bool)0;
	}

IL_00b6:
	{
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Networking.NetworkError SyncPoseServer::StartBroadcasting(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncPoseServer_StartBroadcasting_m86069A2909C1EDD951E3E667B901D731C72D3EF2 (int32_t ___0_hostID, int32_t ___1_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62FD546D4E6F994D876CF2D47FF6444F6031E5E8);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// Debug.Log("SyncPoseServer: Starting broadcasting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral62FD546D4E6F994D876CF2D47FF6444F6031E5E8, NULL);
		// NetworkTransport.StartBroadcastDiscovery(hostID, port, BROADCAST_CREDENTIALS_KEY,
		//     BROADCAST_CREDENTIALS_VERSION, BROADCAST_CREDENTIALS_SUBVERSION, null, 0, BROADCAST_INTERVAL, out byte error);
		int32_t L_0 = ___0_hostID;
		int32_t L_1 = ___1_port;
		il2cpp_codegen_runtime_class_init_inline(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		int32_t L_2 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___BROADCAST_CREDENTIALS_KEY_13;
		int32_t L_3 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___BROADCAST_CREDENTIALS_VERSION_14;
		int32_t L_4 = ((SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_StaticFields*)il2cpp_codegen_static_fields_for(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var))->___BROADCAST_CREDENTIALS_SUBVERSION_15;
		il2cpp_codegen_runtime_class_init_inline(SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_il2cpp_TypeInfo_var);
		int32_t L_5 = ((SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_StaticFields*)il2cpp_codegen_static_fields_for(SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_il2cpp_TypeInfo_var))->___BROADCAST_INTERVAL_16;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = NetworkTransport_StartBroadcastDiscovery_mA17BAD20CAC21FB0AF9F1863C8B93E3DAEA35F3E(L_0, L_1, L_2, L_3, L_4, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, L_5, (&V_0), NULL);
		// return (NetworkError)error;
		uint8_t L_7 = V_0;
		return (int32_t)(L_7);
	}
}
// System.Boolean SyncPoseServer::StopBroadcasting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncPoseServer_StopBroadcasting_m82268F44D73A2606467CFAE940A0993DECE6B26B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B41B34F23B4FF5515097AC297939A819B5912E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SyncPoseServer: Stopping broadcasting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral59B41B34F23B4FF5515097AC297939A819B5912E, NULL);
		// if (!NetworkTransport.IsBroadcastDiscoveryRunning())
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkTransport_IsBroadcastDiscoveryRunning_mC1B7FD7C08878318DACC8CADCB7BF38A8D1F9D94(NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// NetworkTransport.StopBroadcastDiscovery();
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_StopBroadcastDiscovery_m25409782C2354F5E02D65EDCAB6B1D77EAAC0119(NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void SyncPoseServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPoseServer__ctor_m3EDBF8CDACABCFE525981590D38CD87CFD32C5BA (SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD_il2cpp_TypeInfo_var);
		SyncPose__ctor_mE6EDD5605FE87FD5A2ED26750E8E33A6557B39F7(__this, NULL);
		return;
	}
}
// System.Void SyncPoseServer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPoseServer__cctor_mD8767AE0E8F742C5C89C6C7CEBC1ED5B955A5DB0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly int BROADCAST_INTERVAL = 1000; // ms
		((SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_StaticFields*)il2cpp_codegen_static_fields_for(SyncPoseServer_tDACDC469A2AA052FE3D8377072126DC1C0AB0A4A_il2cpp_TypeInfo_var))->___BROADCAST_INTERVAL_16 = ((int32_t)1000);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vector3SerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3SerializationSurrogate_GetObjectData_m2F29EFA48B2A794B35791AC63BCA0700872ED9DD (Vector3SerializationSurrogate_t5333B7066664146A482852A200B7CBDE74A6C10F* __this, RuntimeObject* ___0_obj, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___2_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v3 = (Vector3)obj;
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// info.AddValue("x", v3.x);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___1_info;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___x_2;
		NullCheck(L_1);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_3, NULL);
		// info.AddValue("y", v3.y);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___1_info;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___y_3;
		NullCheck(L_4);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_4, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_6, NULL);
		// info.AddValue("z", v3.z);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = ___1_info;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___z_4;
		NullCheck(L_7);
		SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_7, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_9, NULL);
		// }
		return;
	}
}
// System.Object Vector3SerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector3SerializationSurrogate_SetObjectData_m0FA8D8D9C9B2952A8E9512F0A57D1589467EF38C (Vector3SerializationSurrogate_t5333B7066664146A482852A200B7CBDE74A6C10F* __this, RuntimeObject* ___0_obj, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___2_context, RuntimeObject* ___3_selector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v3 = (Vector3)obj;
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// v3.x = info.GetSingle("x");
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___1_info;
		NullCheck(L_1);
		float L_2;
		L_2 = SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		(&V_0)->___x_2 = L_2;
		// v3.y = info.GetSingle("y");
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___1_info;
		NullCheck(L_3);
		float L_4;
		L_4 = SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037(L_3, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		(&V_0)->___y_3 = L_4;
		// v3.z = info.GetSingle("z");
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___1_info;
		NullCheck(L_5);
		float L_6;
		L_6 = SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037(L_5, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		(&V_0)->___z_4 = L_6;
		// return v3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7;
		RuntimeObject* L_9 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}
}
// System.Void Vector3SerializationSurrogate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3SerializationSurrogate__ctor_mFCDFAFAE4AAB801530F78FB5587E31609FB26681 (Vector3SerializationSurrogate_t5333B7066664146A482852A200B7CBDE74A6C10F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ARRaycastHit_get_trackable_mF8D64EB03AFF2E1D5FC9B88255D2A84130B43D09_inline (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) 
{
	{
		// public ARTrackable trackable { get; }
		ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* L_0 = __this->___U3CtrackableU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BinaryFormatter_set_SurrogateSelector_m489336AE3997DB4E7950C5AFAE9CB465E7093358_inline (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___m_surrogates_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_surrogates_0), (void*)L_0);
		return;
	}
}

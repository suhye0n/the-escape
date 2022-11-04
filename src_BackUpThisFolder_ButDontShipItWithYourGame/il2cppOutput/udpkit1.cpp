#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UdpKit.Protocol.Message>
struct Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UdpKit.Protocol.Query>
struct Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1;
// System.Action`2<System.Boolean,System.Int32Enum>
struct Action_2_t562F5229B3319F83414D174041EF98B798BFDB4E;
// System.Action`2<System.Boolean,UdpKit.UdpConnectionDisconnectReason>
struct Action_2_tAD65775ADAECDB7057525E2CF21F8E9FEA4C63A9;
// System.Action`2<System.Boolean,UdpKit.UdpSessionError>
struct Action_2_tA084CEBCE4FE337EFE320FBC3E3291C30BE917CD;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Object,UdpKit.Protocol.ProtocolClient/AckCallback>
struct Dictionary_2_t301678D978FDB7C8450D4913C2E33E854684429B;
// System.Collections.Generic.Dictionary`2<System.Object,UdpKit.Protocol.ProtocolClient/MsgHandler>
struct Dictionary_2_t7769013CD806C524660F4B98B5A6F4475A54C7FE;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Type,UdpKit.Protocol.ProtocolClient/AckCallback>
struct Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08;
// System.Collections.Generic.Dictionary`2<System.Type,UdpKit.Protocol.ProtocolClient/MsgHandler>
struct Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED;
// System.Collections.Generic.Dictionary`2<UdpKit.UdpChannelName,UdpKit.UdpChannelStreamer>
struct Dictionary_2_t7D1D73518BE856C77473E7FF7FD78DB05C3A6692;
// System.Collections.Generic.Dictionary`2<UdpKit.UdpChannelName,UdpKit.UdpStreamChannel>
struct Dictionary_2_t2CC3BC0C5F4EBD813F789B8337127510F4F2F0BC;
// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Byte[]>
struct Dictionary_2_tB922C8D78BE0B4A75829786F7EF77989703BC9A4;
// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>
struct Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696;
// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,UdpKit.UdpConnection>
struct Dictionary_2_t3214A21F0FE1F7D595C0D84ECEA08AD219DF6846;
// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Int32,System.Byte[]>
struct Func_2_t7AA90D23E80B90994BB827D81B647EDA15003B38;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<UdpKit.Async.Task,System.Boolean>
struct Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UdpKit.Async.Task>
struct IEnumerable_1_t1EA3CFAA0382E9D99CC8B890AE066D26BC75485A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IEqualityComparer`1<UdpKit.UdpEndPoint>
struct IEqualityComparer_1_tA1E9C40238963A1C34ACF28E9E992F881F80881C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UdpKit.Protocol.ProtocolClient/AckCallback>
struct KeyCollection_t6E0D2F6AE0D6A985091C93B5DE775AF678FB8133;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UdpKit.Protocol.ProtocolClient/MsgHandler>
struct KeyCollection_t510431C2D33A48B520809FB5C741F63B32A57F39;
// System.Collections.Generic.Dictionary`2/KeyCollection<UdpKit.UdpEndPoint,System.UInt32>
struct KeyCollection_tEB743F42619A9CE2AE1611BFE24BDB7C6C764AE4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UdpKit.Protocol.Query>
struct List_1_tE8CB8748CDE33865540F8E83BB39578F74011396;
// System.Collections.Generic.List`1<UdpKit.Async.Task>
struct List_1_t3566FD248C7472A96FF743981A36FACD9860797C;
// System.Collections.Generic.List`1<UdpKit.UdpChannelStreamer>
struct List_1_tCCC9AB249815BEE2085FC8FA234DCF8F2CF64E28;
// System.Collections.Generic.List`1<UdpKit.UdpConnection>
struct List_1_tBAA1597EF6E6D2409AAECF85E6FE7849062044C3;
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint>
struct List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456;
// System.Collections.Generic.List`1<UdpKit.UdpSession>
struct List_1_tE03320055A208D5EFE1D027481CDAEC3D2797E8B;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E;
// System.Collections.Generic.Queue`1<UdpKit.UdpEvent>
struct Queue_1_t32581780180E9393CEC84F531E7B725D759AF83B;
// System.Collections.Generic.Queue`1<UdpKit.UdpSocket/DelayedPacket>
struct Queue_1_t53907F0EC15ED39F3B5AAA8B2D1DED08395B213A;
// UdpKit.Singleton`1<UdpKit.Security.EncryptionManager>
struct Singleton_1_t06B9B5A2DC38EE9BD6BEBE6F1EEB4FEEA87767FF;
// UdpKit.Singleton`1<System.Object>
struct Singleton_1_t835DEC6CA7D75CE64FE60C553A71D7A3FDEE0314;
// UdpKit.Singleton`1<UdpKit.Security.PacketIdValidator>
struct Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750;
// UdpKit.Singleton`1<UdpKit.Async.ThreadManager>
struct Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UdpKit.Protocol.ProtocolClient/AckCallback>
struct ValueCollection_t09BC567F167A259BAACB469419BBF540AF86A4B0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UdpKit.Protocol.ProtocolClient/MsgHandler>
struct ValueCollection_tB1092C71B253FD500A168F1032A6430A3E07EDD6;
// System.Collections.Generic.Dictionary`2/ValueCollection<UdpKit.UdpEndPoint,System.UInt32>
struct ValueCollection_t05A57659EA1AB83004C8D21B3E077AF587246E3B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UdpKit.Protocol.ProtocolClient/AckCallback>[]
struct EntryU5BU5D_t579168FF27180611725A105ED3DAEE70BBCD0BFA;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UdpKit.Protocol.ProtocolClient/MsgHandler>[]
struct EntryU5BU5D_t1699D52167B9096940507166824016BF5E21711B;
// System.Collections.Generic.Dictionary`2/Entry<UdpKit.UdpEndPoint,System.UInt32>[]
struct EntryU5BU5D_t28104F45C8C78D4B7831AA4F961370BA4166E5F9;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UdpKit.Protocol.Query[]
struct QueryU5BU5D_t2F56C55474A97783EBA02BCF6D083A286B494A4D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UdpKit.Async.Task[]
struct TaskU5BU5D_tAB3AFEEBC4F45F858F47C606E570A824D9B7970E;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UdpKit.UdpEndPoint[]
struct UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947;
// UdpKit.UdpSession[]
struct UdpSessionU5BU5D_t4AAD743B813989C3861D718E59B21DC48983EA80;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UdpKit.Protocol.Context
struct Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// UdpKit.Security.DataEncryptor
struct DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UdpKit.Security.EncryptionManager
struct EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UdpKit.Security.HMACPacketValidator
struct HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D;
// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UdpKit.Security.IPacketHashValidator
struct IPacketHashValidator_t76D4B3F33706BEC473B4C6A898332969983BBCDE;
// UdpKit.Security.IPacketIdValidator
struct IPacketIdValidator_t429364E8BB5C9A3C75F648F354DF0BEDFA5E82E1;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UdpKit.Protocol.Message
struct Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UdpKit.Security.PacketIdValidator
struct PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307;
// UdpKit.Protocol.ProtocolClient
struct ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5;
// UdpKit.Protocol.ProtocolService
struct ProtocolService_t3BCBF8EA68E69B3E55EC2A0619EDF81551B442C0;
// UdpKit.Protocol.Query
struct Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3;
// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170;
// UdpKit.Protocol.Result
struct Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UdpKit.Async.Task
struct Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// UdpKit.Async.ThreadManager
struct ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// System.Type
struct Type_t;
// UdpKit.UdpConfig
struct UdpConfig_t40D9E5EC737F64EFB5C8E3E40B6DC256350DDCCA;
// UdpKit.UdpConnection
struct UdpConnection_t0BF288D2EFBDEAB3A0EDE430EE1D84949E994103;
// UdpKit.UdpEndPoint
struct UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2;
// UdpKit.Security.UdpKitAccessException
struct UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE;
// UdpKit.UdpPacketPool
struct UdpPacketPool_t66C4FF17892EA88CB820378D7D32095E552311CF;
// UdpKit.UdpPipe
struct UdpPipe_t68DCC213EEBAD83CAEACBA4EF6D38CF08BDDBA96;
// UdpKit.Platform.UdpPlatform
struct UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF;
// UdpKit.Platform.UdpPlatformInterface
struct UdpPlatformInterface_t4857820E718813541D2A62687507A3FCCD783C94;
// UdpKit.Platform.UdpPlatformSocket
struct UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8;
// UdpKit.UdpSession
struct UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4;
// UdpKit.UdpSessionFilter
struct UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63;
// UdpKit.UdpSocket
struct UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UdpKit.Async.ThreadManager/<>c
struct U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA;
// UdpKit.UdpSocket/BroadcastManager
struct BroadcastManager_tE079D26855B93214CDC88075587B887FEE8377C3;
// UdpKit.UdpSocket/Broadcaster
struct Broadcaster_t2BE6B8D3775BB2B3F12E8448B5625F72F756E40D;
// UdpKit.UdpSocket/SessionManager
struct SessionManager_t5F2323D7F67158736FC6E53B1C7A0AA8A97A43C6;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPacketHashValidator_t76D4B3F33706BEC473B4C6A898332969983BBCDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPacketIdValidator_t429364E8BB5C9A3C75F648F354DF0BEDFA5E82E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3566FD248C7472A96FF743981A36FACD9860797C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE03320055A208D5EFE1D027481CDAEC3D2797E8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8CB8748CDE33865540F8E83BB39578F74011396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t06B9B5A2DC38EE9BD6BEBE6F1EEB4FEEA87767FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadInterruptedException_t5F777BF218B009092789F6DA0013E4DC3A0987CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1575EAC6305E2A6FD42D16AB0997AA92E2C27309;
IL2CPP_EXTERN_C String_t* _stringLiteral3A3D8496ED45F8B7F733D08A45DDB67864B22281;
IL2CPP_EXTERN_C String_t* _stringLiteral41F2E2F1EE9286962C8AD606E27011FD64A21875;
IL2CPP_EXTERN_C String_t* _stringLiteral52BA85D855893B4A32221FB972E17A80D48204CA;
IL2CPP_EXTERN_C String_t* _stringLiteral5A29931955BE4B1DE5B9A0EA16BACD1D727B0FB6;
IL2CPP_EXTERN_C String_t* _stringLiteral67C2F8FA7C0876F7D1E4A8622CE0F4C17BF4F4F2;
IL2CPP_EXTERN_C String_t* _stringLiteral6B2C73F7EA10C52FDDBCA98180CA215A7C6E5BFF;
IL2CPP_EXTERN_C String_t* _stringLiteral7C9E3DD0031E9445D597FB5AE988E551EB79A220;
IL2CPP_EXTERN_C String_t* _stringLiteral8035572F3DB7FCD9213A1B4F42C721B1EF6515FC;
IL2CPP_EXTERN_C String_t* _stringLiteral89AAC66007654EE6C6CBB5EB419C7FF0A80EDECE;
IL2CPP_EXTERN_C String_t* _stringLiteral8E44393B60329F6A427962664DC8FBCD2AF8E94F;
IL2CPP_EXTERN_C String_t* _stringLiteral9E2BCEBFB909DEE624830C254D3DB8634403D7FF;
IL2CPP_EXTERN_C String_t* _stringLiteralA36A8B2EBDAF761FF76149D7EFE93C7BD857E0B0;
IL2CPP_EXTERN_C String_t* _stringLiteralA7819E3CA05603139B97C2CBBCE0807A71707733;
IL2CPP_EXTERN_C String_t* _stringLiteralB2EC16EFED1759A3EC0CCF305F9E206CAB86636C;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB98FF5281EC31422DE5A5CE157DA1E26C28024;
IL2CPP_EXTERN_C String_t* _stringLiteralC9DED19749A48661A81474DE4485C2452F386245;
IL2CPP_EXTERN_C String_t* _stringLiteralD14484D82C832BA196348AFB4A8AE48E67CD3D9E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCC4344B0995FE62CAF0D106E7776998F1327BFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE1CFF0116E1DE5648ACE0C71BF0D98682397CE44;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m954B9E240D25A0A5B142DF33BF6A756A92A8D444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9B0B29A65D105BC365BE482DF931A7C47D52A794_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m055C9530ACA3921872C3AC90EE57C61593F13B86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4E1B5DDDBEC79D0FB23387EE1749AB6C347CF018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mCF0F0FE626965D3605DEDABE1FCD556A21F63AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1BED02A8AE99408DF357364EEC5D305859723610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAA9DD8FF2B74631A640FB981681DF0D72B11FD7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD7F244B8016ECAC45A1DB936C75C66FCB6672B55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEE7B51CDC140869B02C9DC66AA438DAE0705A69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisTask_tC3595A95675D7213729DD214E8E6B7B6FD08BE96_mA3A37B62513DAEE95CAAC02BC6687F99E06557B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m457746A1F27782558C1A2214F8AE7CC18E4EF1AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4ACD2771C34ACD94C0FF8A48734E86286D89A5B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m3A6566C95AF22704BDD55674E9443DC266A548AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m8AA246717A34DB4A07A48D7C75E67CF1F9A5584E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1658CFDA197F3ED3A9B2EE1448FE6CD0EBFC3229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCB7668B11360C26134011F8753D11ECAA36637E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD64159002A52ECE1A36E0ABA1D7D0AB4C7B4DFE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m36BBBAA6F4456C820A24A87E8D9B4311206344BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE0E23C2F1B955D5F62ADEEFCCD43D741E32439FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD1F759A46C3B2D0E6F86058819D3DEED0C3525F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m2CE0E1A87632D460E4E43378587BD2A842413B5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m35B8896ABA4970B1186DD7A6998B8FAE32B47FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mB41CD456F7CBBA7EABB80D3195140944345B306D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m142D6F43166E015DE8E9C35AC33895549243949F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Runner_m1CB92345614D28226417293DF0DDB8EE2FCA38D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetInfoU3Eb__3_0_m8B1AF3E65DCA43F609D10BB11CFBA39C1BAC98C7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2;;
struct UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_com;
struct UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_com;;
struct UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_pinvoke;
struct UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,UdpKit.Protocol.ProtocolClient/AckCallback>
struct Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t579168FF27180611725A105ED3DAEE70BBCD0BFA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t6E0D2F6AE0D6A985091C93B5DE775AF678FB8133* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t09BC567F167A259BAACB469419BBF540AF86A4B0* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,UdpKit.Protocol.ProtocolClient/MsgHandler>
struct Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1699D52167B9096940507166824016BF5E21711B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t510431C2D33A48B520809FB5C741F63B32A57F39* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB1092C71B253FD500A168F1032A6430A3E07EDD6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>
struct Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t28104F45C8C78D4B7831AA4F961370BA4166E5F9* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tEB743F42619A9CE2AE1611BFE24BDB7C6C764AE4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t05A57659EA1AB83004C8D21B3E077AF587246E3B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UdpKit.Protocol.Query>
struct List_1_tE8CB8748CDE33865540F8E83BB39578F74011396  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	QueryU5BU5D_t2F56C55474A97783EBA02BCF6D083A286B494A4D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE8CB8748CDE33865540F8E83BB39578F74011396_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	QueryU5BU5D_t2F56C55474A97783EBA02BCF6D083A286B494A4D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UdpKit.Async.Task>
struct List_1_t3566FD248C7472A96FF743981A36FACD9860797C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TaskU5BU5D_tAB3AFEEBC4F45F858F47C606E570A824D9B7970E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3566FD248C7472A96FF743981A36FACD9860797C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TaskU5BU5D_tAB3AFEEBC4F45F858F47C606E570A824D9B7970E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UdpKit.UdpEndPoint>
struct List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UdpKit.UdpSession>
struct List_1_tE03320055A208D5EFE1D027481CDAEC3D2797E8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UdpSessionU5BU5D_t4AAD743B813989C3861D718E59B21DC48983EA80* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE03320055A208D5EFE1D027481CDAEC3D2797E8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UdpSessionU5BU5D_t4AAD743B813989C3861D718E59B21DC48983EA80* ___s_emptyArray_5;
};

// UdpKit.Singleton`1<UdpKit.Security.EncryptionManager>
struct Singleton_1_t06B9B5A2DC38EE9BD6BEBE6F1EEB4FEEA87767FF  : public RuntimeObject
{
};

struct Singleton_1_t06B9B5A2DC38EE9BD6BEBE6F1EEB4FEEA87767FF_StaticFields
{
	// System.Object UdpKit.Singleton`1::instanceLock
	RuntimeObject* ___instanceLock_0;
	// T UdpKit.Singleton`1::instance
	EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* ___instance_1;
};

// UdpKit.Singleton`1<UdpKit.Security.PacketIdValidator>
struct Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750  : public RuntimeObject
{
};

struct Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750_StaticFields
{
	// System.Object UdpKit.Singleton`1::instanceLock
	RuntimeObject* ___instanceLock_0;
	// T UdpKit.Singleton`1::instance
	PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* ___instance_1;
};

// UdpKit.Singleton`1<UdpKit.Async.ThreadManager>
struct Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7  : public RuntimeObject
{
};

struct Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_StaticFields
{
	// System.Object UdpKit.Singleton`1::instanceLock
	RuntimeObject* ___instanceLock_0;
	// T UdpKit.Singleton`1::instance
	ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* ___instance_1;
};
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// UdpKit.Security.DataEncryptor
struct DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2  : public RuntimeObject
{
	// System.Security.Cryptography.Aes UdpKit.Security.DataEncryptor::_cryptoProvider
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* ____cryptoProvider_0;
	// System.Security.Cryptography.ICryptoTransform UdpKit.Security.DataEncryptor::_encryptor
	RuntimeObject* ____encryptor_1;
	// System.Security.Cryptography.ICryptoTransform UdpKit.Security.DataEncryptor::_decryptor
	RuntimeObject* ____decryptor_2;
	// System.Byte[] UdpKit.Security.DataEncryptor::_aesKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____aesKey_3;
	// System.Byte[] UdpKit.Security.DataEncryptor::_aesIV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____aesIV_4;
	// System.Byte[] UdpKit.Security.DataEncryptor::encryptBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptBuffer_5;
	// System.Byte[] UdpKit.Security.DataEncryptor::decryptBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___decryptBuffer_6;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// UdpKit.Security.HMACPacketValidator
struct HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D  : public RuntimeObject
{
	// System.Int32 UdpKit.Security.HMACPacketValidator::<Sha256ByteSize>k__BackingField
	int32_t ___U3CSha256ByteSizeU3Ek__BackingField_0;
	// System.Security.Cryptography.HMACSHA256 UdpKit.Security.HMACPacketValidator::_hasher
	HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* ____hasher_1;
	// System.Byte[] UdpKit.Security.HMACPacketValidator::_tempArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____tempArray_2;
	// System.Byte[] UdpKit.Security.HMACPacketValidator::_secret
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____secret_3;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
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

// UdpKit.Utils.PrecisionTimer
struct PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961  : public RuntimeObject
{
};

struct PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_StaticFields
{
	// System.Int64 UdpKit.Utils.PrecisionTimer::start
	int64_t ___start_0;
	// System.Double UdpKit.Utils.PrecisionTimer::freq
	double ___freq_1;
};

// UdpKit.Protocol.ProtocolService
struct ProtocolService_t3BCBF8EA68E69B3E55EC2A0619EDF81551B442C0  : public RuntimeObject
{
	// UdpKit.Protocol.ProtocolClient UdpKit.Protocol.ProtocolService::client
	ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* ___client_0;
	// System.UInt32 UdpKit.Protocol.ProtocolService::<SendTime>k__BackingField
	uint32_t ___U3CSendTimeU3Ek__BackingField_1;
};

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
{
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// UdpKit.Async.Task
struct Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96  : public RuntimeObject
{
	// System.Threading.Thread UdpKit.Async.Task::_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____thread_0;
	// System.Threading.AutoResetEvent UdpKit.Async.Task::_event
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ____event_1;
	// System.Action UdpKit.Async.Task::_action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____action_2;
	// System.Object UdpKit.Async.Task::_locker
	RuntimeObject* ____locker_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UdpKit.Async.Task::_abort
	bool ____abort_4;
};

// UdpKit.UdpConfig
struct UdpConfig_t40D9E5EC737F64EFB5C8E3E40B6DC256350DDCCA  : public RuntimeObject
{
	// System.Int32 UdpKit.UdpConfig::PacketWindow
	int32_t ___PacketWindow_0;
	// System.Int32 UdpKit.UdpConfig::PacketDatagramSize
	int32_t ___PacketDatagramSize_1;
	// System.Int32 UdpKit.UdpConfig::StreamWindow
	int32_t ___StreamWindow_2;
	// System.Int32 UdpKit.UdpConfig::StreamDatagramSize
	int32_t ___StreamDatagramSize_3;
	// System.Boolean UdpKit.UdpConfig::NatPunchEnabled
	bool ___NatPunchEnabled_4;
	// System.Single UdpKit.UdpConfig::RoomCreateTimeout
	float ___RoomCreateTimeout_5;
	// System.Single UdpKit.UdpConfig::RoomJoinTimeout
	float ___RoomJoinTimeout_6;
	// System.UInt32 UdpKit.UdpConfig::BroadcastInterval
	uint32_t ___BroadcastInterval_7;
	// System.Boolean UdpKit.UdpConfig::IPv6
	bool ___IPv6_8;
	// System.Single UdpKit.UdpConfig::DefaultNetworkPing
	float ___DefaultNetworkPing_9;
	// System.Single UdpKit.UdpConfig::DefaultAliasedPing
	float ___DefaultAliasedPing_10;
	// System.Boolean UdpKit.UdpConfig::AllowPacketOverflow
	bool ___AllowPacketOverflow_11;
	// System.UInt32 UdpKit.UdpConfig::ConnectRequestTimeout
	uint32_t ___ConnectRequestTimeout_12;
	// System.UInt32 UdpKit.UdpConfig::ConnectRequestAttempts
	uint32_t ___ConnectRequestAttempts_13;
	// System.UInt32 UdpKit.UdpConfig::ConnectRequestLANAttempts
	uint32_t ___ConnectRequestLANAttempts_14;
	// System.UInt32 UdpKit.UdpConfig::ConnectionTimeout
	uint32_t ___ConnectionTimeout_15;
	// System.UInt32 UdpKit.UdpConfig::PingTimeout
	uint32_t ___PingTimeout_16;
	// System.UInt32 UdpKit.UdpConfig::RecvWithoutAckLimit
	uint32_t ___RecvWithoutAckLimit_17;
	// System.Int32 UdpKit.UdpConfig::ConnectionLimit
	int32_t ___ConnectionLimit_18;
	// System.Boolean UdpKit.UdpConfig::AllowIncommingConnections
	bool ___AllowIncommingConnections_19;
	// System.Boolean UdpKit.UdpConfig::AutoAcceptIncommingConnections
	bool ___AutoAcceptIncommingConnections_20;
	// System.Boolean UdpKit.UdpConfig::AllowImplicitAccept
	bool ___AllowImplicitAccept_21;
	// System.Single UdpKit.UdpConfig::SimulatedLoss
	float ___SimulatedLoss_22;
	// System.Int32 UdpKit.UdpConfig::SimulatedPingMin
	int32_t ___SimulatedPingMin_23;
	// System.Int32 UdpKit.UdpConfig::SimulatedPingMax
	int32_t ___SimulatedPingMax_24;
	// System.Func`1<System.Single> UdpKit.UdpConfig::NoiseFunction
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___NoiseFunction_25;
	// System.Boolean UdpKit.UdpConfig::IsBuildMono
	bool ___IsBuildMono_26;
	// System.Boolean UdpKit.UdpConfig::IsBuildDotNet
	bool ___IsBuildDotNet_27;
	// System.Boolean UdpKit.UdpConfig::IsBuildIL2CPP
	bool ___IsBuildIL2CPP_28;
	// UnityEngine.RuntimePlatform UdpKit.UdpConfig::CurrentPlatform
	int32_t ___CurrentPlatform_29;
};

// UdpKit.Platform.UdpPlatform
struct UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF  : public RuntimeObject
{
	// UdpKit.UdpSocket UdpKit.Platform.UdpPlatform::<udpSocket>k__BackingField
	UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979* ___U3CudpSocketU3Ek__BackingField_0;
	// System.Object UdpKit.Platform.UdpPlatform::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_1;
};

// UdpKit.Platform.UdpPlatformInterface
struct UdpPlatformInterface_t4857820E718813541D2A62687507A3FCCD783C94  : public RuntimeObject
{
	// System.Object UdpKit.Platform.UdpPlatformInterface::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_0;
};

// UdpKit.Platform.UdpPlatformSocket
struct UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8  : public RuntimeObject
{
	// System.Object UdpKit.Platform.UdpPlatformSocket::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_0;
};

// UdpKit.UdpSession
struct UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4  : public RuntimeObject
{
};

// UdpKit.UdpSessionFilter
struct UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63  : public RuntimeObject
{
	// UdpKit.UdpSessionFillMode UdpKit.UdpSessionFilter::<FillMode>k__BackingField
	uint8_t ___U3CFillModeU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> UdpKit.UdpSessionFilter::<FilterProperties>k__BackingField
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___U3CFilterPropertiesU3Ek__BackingField_1;
};

// UdpKit.UdpUtils
struct UdpUtils_t61820ECB8D8C23166EB9936C427DEB311C4AAEBB  : public RuntimeObject
{
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

// UdpKit.Async.ThreadManager/<>c
struct U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA  : public RuntimeObject
{
};

struct U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_StaticFields
{
	// UdpKit.Async.ThreadManager/<>c UdpKit.Async.ThreadManager/<>c::<>9
	U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA* ___U3CU3E9_0;
	// System.Func`2<UdpKit.Async.Task,System.Boolean> UdpKit.Async.ThreadManager/<>c::<>9__3_0
	Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D* ___U3CU3E9__3_0_1;
};

// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UdpKit.Security.EncryptionManager
struct EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA  : public Singleton_1_t06B9B5A2DC38EE9BD6BEBE6F1EEB4FEEA87767FF
{
	// UdpKit.Security.DataEncryptor UdpKit.Security.EncryptionManager::_encryptor
	DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* ____encryptor_2;
	// UdpKit.Security.IPacketHashValidator UdpKit.Security.EncryptionManager::_packetValidator
	RuntimeObject* ____packetValidator_3;
	// UdpKit.Security.IPacketIdValidator UdpKit.Security.EncryptionManager::_idValidator
	RuntimeObject* ____idValidator_4;
	// System.String UdpKit.Security.EncryptionManager::_aesIV
	String_t* ____aesIV_5;
	// System.String UdpKit.Security.EncryptionManager::_aesKey
	String_t* ____aesKey_6;
	// System.String UdpKit.Security.EncryptionManager::_hashSecret
	String_t* ____hashSecret_7;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_4;
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

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// UdpKit.Async.ThreadManager
struct ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF  : public Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7
{
	// System.Collections.Generic.List`1<UdpKit.Async.Task> UdpKit.Async.ThreadManager::_threads
	List_1_t3566FD248C7472A96FF743981A36FACD9860797C* ____threads_2;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UdpKit.UdpByteConverter
struct UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UdpKit.UdpByteConverter::Signed16
			int16_t ___Signed16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___Signed16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 UdpKit.UdpByteConverter::Unsigned16
			uint16_t ___Unsigned16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___Unsigned16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UdpKit.UdpByteConverter::Char
			Il2CppChar ___Char_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___Char_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UdpKit.UdpByteConverter::Signed32
			int32_t ___Signed32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Signed32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UdpKit.UdpByteConverter::Unsigned32
			uint32_t ___Unsigned32_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___Unsigned32_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UdpKit.UdpByteConverter::Signed64
			int64_t ___Signed64_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___Signed64_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UdpKit.UdpByteConverter::Unsigned64
			uint64_t ___Unsigned64_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Unsigned64_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UdpKit.UdpByteConverter::Float32
			float ___Float32_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float32_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UdpKit.UdpByteConverter::Float64
			double ___Float64_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Float64_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UdpKit.UdpByteConverter::Byte0
			uint8_t ___Byte0_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_10_OffsetPadding[1];
			// System.Byte UdpKit.UdpByteConverter::Byte1
			uint8_t ___Byte1_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_10_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_11_OffsetPadding[2];
			// System.Byte UdpKit.UdpByteConverter::Byte2
			uint8_t ___Byte2_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_11_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_12_OffsetPadding[3];
			// System.Byte UdpKit.UdpByteConverter::Byte3
			uint8_t ___Byte3_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_12_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_13_OffsetPadding[4];
			// System.Byte UdpKit.UdpByteConverter::Byte4
			uint8_t ___Byte4_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_13_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_14_OffsetPadding[5];
			// System.Byte UdpKit.UdpByteConverter::Byte5
			uint8_t ___Byte5_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_14_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_15_OffsetPadding[6];
			// System.Byte UdpKit.UdpByteConverter::Byte6
			uint8_t ___Byte6_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_15_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_16_OffsetPadding[7];
			// System.Byte UdpKit.UdpByteConverter::Byte7
			uint8_t ___Byte7_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_16_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_16_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UdpKit.UdpByteConverter
struct UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___Signed16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___Signed16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Unsigned16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___Unsigned16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Char_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Char_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___Signed32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Signed32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___Unsigned32_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___Unsigned32_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___Signed64_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___Signed64_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Unsigned64_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Unsigned64_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float32_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float32_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Float64_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Float64_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_10_OffsetPadding[1];
			uint8_t ___Byte1_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_10_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_11_OffsetPadding[2];
			uint8_t ___Byte2_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_11_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_12_OffsetPadding[3];
			uint8_t ___Byte3_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_12_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_13_OffsetPadding[4];
			uint8_t ___Byte4_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_13_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_14_OffsetPadding[5];
			uint8_t ___Byte5_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_14_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_15_OffsetPadding[6];
			uint8_t ___Byte6_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_15_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_16_OffsetPadding[7];
			uint8_t ___Byte7_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_16_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_16_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UdpKit.UdpByteConverter
struct UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___Signed16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___Signed16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Unsigned16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___Unsigned16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Char_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Char_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___Signed32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Signed32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___Unsigned32_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___Unsigned32_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___Signed64_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___Signed64_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Unsigned64_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Unsigned64_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float32_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float32_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Float64_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Float64_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_10_OffsetPadding[1];
			uint8_t ___Byte1_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_10_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_11_OffsetPadding[2];
			uint8_t ___Byte2_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_11_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_12_OffsetPadding[3];
			uint8_t ___Byte3_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_12_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_13_OffsetPadding[4];
			uint8_t ___Byte4_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_13_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_14_OffsetPadding[5];
			uint8_t ___Byte5_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_14_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_15_OffsetPadding[6];
			uint8_t ___Byte6_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_15_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_16_OffsetPadding[7];
			uint8_t ___Byte7_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_16_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_16_forAlignmentOnly;
		};
	};
};

// UdpKit.UdpEvent
struct UdpEvent_t74BA361BB0EE787DBC70AD992739A5E1BAEFB74E 
{
	// System.Int32 UdpKit.UdpEvent::Type
	int32_t ___Type_45;
	// System.Object UdpKit.UdpEvent::Object0
	RuntimeObject* ___Object0_46;
	// System.Object UdpKit.UdpEvent::Object1
	RuntimeObject* ___Object1_47;
};
// Native definition for P/Invoke marshalling of UdpKit.UdpEvent
struct UdpEvent_t74BA361BB0EE787DBC70AD992739A5E1BAEFB74E_marshaled_pinvoke
{
	int32_t ___Type_45;
	Il2CppIUnknown* ___Object0_46;
	Il2CppIUnknown* ___Object1_47;
};
// Native definition for COM marshalling of UdpKit.UdpEvent
struct UdpEvent_t74BA361BB0EE787DBC70AD992739A5E1BAEFB74E_marshaled_com
{
	int32_t ___Type_45;
	Il2CppIUnknown* ___Object0_46;
	Il2CppIUnknown* ___Object1_47;
};

// UdpKit.UdpIPv4Address
struct UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UdpKit.UdpIPv4Address::Packed
			uint32_t ___Packed_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___Packed_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UdpKit.UdpIPv4Address::Byte0
			uint8_t ___Byte0_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_5_OffsetPadding[1];
			// System.Byte UdpKit.UdpIPv4Address::Byte1
			uint8_t ___Byte1_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_5_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_6_OffsetPadding[2];
			// System.Byte UdpKit.UdpIPv4Address::Byte2
			uint8_t ___Byte2_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_6_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_7_OffsetPadding[3];
			// System.Byte UdpKit.UdpIPv4Address::Byte3
			uint8_t ___Byte3_7;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_7_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_7_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};
};

struct UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_StaticFields
{
	// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Any
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___Any_0;
	// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Localhost
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___Localhost_1;
	// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Broadcast
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___Broadcast_2;
};

// UdpKit.UdpIPv6Address
struct UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UdpKit.UdpIPv6Address::Byte0
			uint8_t ___Byte0_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_4_OffsetPadding[1];
			// System.Byte UdpKit.UdpIPv6Address::Byte1
			uint8_t ___Byte1_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_4_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_5_OffsetPadding[2];
			// System.Byte UdpKit.UdpIPv6Address::Byte2
			uint8_t ___Byte2_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_5_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_6_OffsetPadding[3];
			// System.Byte UdpKit.UdpIPv6Address::Byte3
			uint8_t ___Byte3_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_6_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_7_OffsetPadding[4];
			// System.Byte UdpKit.UdpIPv6Address::Byte4
			uint8_t ___Byte4_7;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_7_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_7_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_8_OffsetPadding[5];
			// System.Byte UdpKit.UdpIPv6Address::Byte5
			uint8_t ___Byte5_8;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_8_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_8_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_9_OffsetPadding[6];
			// System.Byte UdpKit.UdpIPv6Address::Byte6
			uint8_t ___Byte6_9;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_9_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_9_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_10_OffsetPadding[7];
			// System.Byte UdpKit.UdpIPv6Address::Byte7
			uint8_t ___Byte7_10;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_10_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_10_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_11_OffsetPadding[8];
			// System.Byte UdpKit.UdpIPv6Address::Byte8
			uint8_t ___Byte8_11;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_11_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_11_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_12_OffsetPadding[9];
			// System.Byte UdpKit.UdpIPv6Address::Byte9
			uint8_t ___Byte9_12;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_12_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_12_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_13_OffsetPadding[10];
			// System.Byte UdpKit.UdpIPv6Address::Byte10
			uint8_t ___Byte10_13;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_13_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_13_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_14_OffsetPadding[11];
			// System.Byte UdpKit.UdpIPv6Address::Byte11
			uint8_t ___Byte11_14;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_14_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_14_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_15_OffsetPadding[12];
			// System.Byte UdpKit.UdpIPv6Address::Byte12
			uint8_t ___Byte12_15;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_15_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_15_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_16_OffsetPadding[13];
			// System.Byte UdpKit.UdpIPv6Address::Byte13
			uint8_t ___Byte13_16;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_16_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_16_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_17_OffsetPadding[14];
			// System.Byte UdpKit.UdpIPv6Address::Byte14
			uint8_t ___Byte14_17;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_17_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_17_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_18_OffsetPadding[15];
			// System.Byte UdpKit.UdpIPv6Address::Byte15
			uint8_t ___Byte15_18;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_18_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_18_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UdpKit.UdpIPv6Address::Packed0
			uint64_t ___Packed0_19;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Packed0_19_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Packed1_20_OffsetPadding[8];
			// System.UInt64 UdpKit.UdpIPv6Address::Packed1
			uint64_t ___Packed1_20;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Packed1_20_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___Packed1_20_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};
};

struct UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_StaticFields
{
	// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Any
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___Any_0;
	// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Mask
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___Mask_1;
	// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Localhost
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___Localhost_2;
};

// UdpKit.UdpPipeConfig
struct UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3 
{
	// System.Byte UdpKit.UdpPipeConfig::PipeId
	uint8_t ___PipeId_2;
	// System.Boolean UdpKit.UdpPipeConfig::UpdatePing
	bool ___UpdatePing_3;
	// System.UInt32 UdpKit.UdpPipeConfig::Timeout
	uint32_t ___Timeout_4;
	// System.Int32 UdpKit.UdpPipeConfig::WindowSize
	int32_t ___WindowSize_5;
	// System.Int32 UdpKit.UdpPipeConfig::DatagramSize
	int32_t ___DatagramSize_6;
	// System.Int32 UdpKit.UdpPipeConfig::AckBytes
	int32_t ___AckBytes_7;
	// System.Int32 UdpKit.UdpPipeConfig::SequenceBytes
	int32_t ___SequenceBytes_8;
};
// Native definition for P/Invoke marshalling of UdpKit.UdpPipeConfig
struct UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshaled_pinvoke
{
	uint8_t ___PipeId_2;
	int32_t ___UpdatePing_3;
	uint32_t ___Timeout_4;
	int32_t ___WindowSize_5;
	int32_t ___DatagramSize_6;
	int32_t ___AckBytes_7;
	int32_t ___SequenceBytes_8;
};
// Native definition for COM marshalling of UdpKit.UdpPipeConfig
struct UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshaled_com
{
	uint8_t ___PipeId_2;
	int32_t ___UpdatePing_3;
	uint32_t ___Timeout_4;
	int32_t ___WindowSize_5;
	int32_t ___DatagramSize_6;
	int32_t ___AckBytes_7;
	int32_t ___SequenceBytes_8;
};

// UdpKit.UdpSteamID
struct UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF 
{
	// System.UInt64 UdpKit.UdpSteamID::Id
	uint64_t ___Id_0;
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

// UdpKit.Protocol.Context
struct Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC  : public RuntimeObject
{
	// System.Guid UdpKit.Protocol.Context::peerId
	Guid_t ___peerId_0;
	// System.Guid UdpKit.Protocol.Context::gameId
	Guid_t ___gameId_1;
};

struct Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_StaticFields
{
	// System.Type[] UdpKit.Protocol.Context::messageTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___messageTypes_2;
};

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_5;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_6;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_inputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____inputBuffer_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBufferIndex
	int32_t ____inputBufferIndex_8;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBlockSize
	int32_t ____inputBlockSize_9;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_outputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____outputBuffer_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBufferIndex
	int32_t ____outputBufferIndex_11;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBlockSize
	int32_t ____outputBlockSize_12;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_15;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream::_lazyAsyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____lazyAsyncActiveSemaphore_16;
	// System.Boolean System.Security.Cryptography.CryptoStream::_leaveOpen
	bool ____leaveOpen_17;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Security.Cryptography.HMAC
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684  : public KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263
{
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;
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

// UdpKit.Security.PacketIdValidator
struct PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307  : public Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750
{
	// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32> UdpKit.Security.PacketIdValidator::_packetIdsConnectionReceive
	Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* ____packetIdsConnectionReceive_2;
	// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32> UdpKit.Security.PacketIdValidator::_packetIdsConnectionSend
	Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* ____packetIdsConnectionSend_3;
	// UdpKit.UdpByteConverter UdpKit.Security.PacketIdValidator::_byteConverter
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F ____byteConverter_4;
};

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170  : public RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3
{
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;
};

struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_StaticFields
{
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject* ____lock_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UdpKit.UdpEndPoint
struct UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 UdpKit.UdpEndPoint::Port
			uint16_t ___Port_2;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			// UdpKit.UdpSteamID UdpKit.UdpEndPoint::SteamId
			UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF ___SteamId_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF ___SteamId_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding[8];
			// System.Boolean UdpKit.UdpEndPoint::IPv6
			bool ___IPv6_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding_forAlignmentOnly[8];
			bool ___IPv6_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding[12];
			// UdpKit.UdpIPv4Address UdpKit.UdpEndPoint::Address
			UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___Address_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding_forAlignmentOnly[12];
			UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___Address_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding[12];
			// UdpKit.UdpIPv6Address UdpKit.UdpEndPoint::AddressIPv6
			UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___AddressIPv6_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding_forAlignmentOnly[12];
			UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___AddressIPv6_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};
};

struct UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_StaticFields
{
	// UdpKit.UdpEndPoint UdpKit.UdpEndPoint::Any
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___Any_0;
	// UdpKit.UdpEndPoint UdpKit.UdpEndPoint::AnyIPv6
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___AnyIPv6_1;
};
// Native definition for P/Invoke marshalling of UdpKit.UdpEndPoint
struct UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF ___SteamId_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF ___SteamId_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding[8];
			int32_t ___IPv6_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding_forAlignmentOnly[8];
			int32_t ___IPv6_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding[12];
			UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___Address_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding_forAlignmentOnly[12];
			UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___Address_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding[12];
			UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___AddressIPv6_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding_forAlignmentOnly[12];
			UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___AddressIPv6_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};
};
// Native definition for COM marshalling of UdpKit.UdpEndPoint
struct UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF ___SteamId_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF ___SteamId_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding[8];
			int32_t ___IPv6_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding_forAlignmentOnly[8];
			int32_t ___IPv6_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding[12];
			UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___Address_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding_forAlignmentOnly[12];
			UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___Address_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding[12];
			UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___AddressIPv6_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding_forAlignmentOnly[12];
			UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___AddressIPv6_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF  : public HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684
{
};

// UdpKit.Protocol.Message
struct Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8  : public RuntimeObject
{
	// System.Int32 UdpKit.Protocol.Message::_ptr
	int32_t ____ptr_1;
	// System.Byte[] UdpKit.Protocol.Message::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Byte UdpKit.Protocol.Message::_type
	uint8_t ____type_3;
	// System.Boolean UdpKit.Protocol.Message::_pack
	bool ____pack_4;
	// System.Guid UdpKit.Protocol.Message::GameId
	Guid_t ___GameId_5;
	// System.Guid UdpKit.Protocol.Message::PeerId
	Guid_t ___PeerId_6;
	// System.Guid UdpKit.Protocol.Message::MessageId
	Guid_t ___MessageId_7;
	// UdpKit.UdpEndPoint UdpKit.Protocol.Message::Sender
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___Sender_8;
	// UdpKit.UdpEndPoint UdpKit.Protocol.Message::Target
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___Target_9;
	// System.UInt32 UdpKit.Protocol.Message::SendTime
	uint32_t ___SendTime_10;
	// System.UInt32 UdpKit.Protocol.Message::Timeout
	uint32_t ___Timeout_11;
	// System.UInt32 UdpKit.Protocol.Message::Attempts
	uint32_t ___Attempts_12;
	// UdpKit.Protocol.Context UdpKit.Protocol.Message::Context
	Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* ___Context_13;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UdpKit.Protocol.ProtocolClient
struct ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5  : public Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC
{
	// System.UInt32 UdpKit.Protocol.ProtocolClient::LastSend
	uint32_t ___LastSend_3;
	// System.Byte[] UdpKit.Protocol.ProtocolClient::Buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Buffer_4;
	// UdpKit.Platform.UdpPlatformSocket UdpKit.Protocol.ProtocolClient::Socket
	UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* ___Socket_5;
	// System.Collections.Generic.List`1<UdpKit.Protocol.Query> UdpKit.Protocol.ProtocolClient::Queries
	List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* ___Queries_6;
	// System.Collections.Generic.Dictionary`2<System.Type,UdpKit.Protocol.ProtocolClient/MsgHandler> UdpKit.Protocol.ProtocolClient::Handlers
	Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED* ___Handlers_7;
	// System.Collections.Generic.Dictionary`2<System.Type,UdpKit.Protocol.ProtocolClient/AckCallback> UdpKit.Protocol.ProtocolClient::Callbacks
	Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08* ___Callbacks_8;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// UdpKit.UdpConnection
struct UdpConnection_t0BF288D2EFBDEAB3A0EDE430EE1D84949E994103  : public RuntimeObject
{
	// System.Boolean UdpKit.UdpConnection::ignore_next_disconnect
	bool ___ignore_next_disconnect_0;
	// System.Single UdpKit.UdpConnection::NetworkRtt
	float ___NetworkRtt_7;
	// System.Single UdpKit.UdpConnection::AliasedRtt
	float ___AliasedRtt_8;
	// System.UInt32 UdpKit.UdpConnection::ConnectTimeout
	uint32_t ___ConnectTimeout_9;
	// System.UInt32 UdpKit.UdpConnection::ConnectAttempts
	uint32_t ___ConnectAttempts_10;
	// System.UInt32 UdpKit.UdpConnection::CreateTime
	uint32_t ___CreateTime_11;
	// System.UInt32 UdpKit.UdpConnection::StreamSendInterval
	uint32_t ___StreamSendInterval_12;
	// System.UInt32 UdpKit.UdpConnection::StreamLastSend
	uint32_t ___StreamLastSend_13;
	// System.Collections.Generic.Dictionary`2<UdpKit.UdpChannelName,UdpKit.UdpChannelStreamer> UdpKit.UdpConnection::StreamChannels
	Dictionary_2_t7D1D73518BE856C77473E7FF7FD78DB05C3A6692* ___StreamChannels_14;
	// UdpKit.UdpPipe UdpKit.UdpConnection::PacketPipe
	UdpPipe_t68DCC213EEBAD83CAEACBA4EF6D38CF08BDDBA96* ___PacketPipe_15;
	// UdpKit.UdpPipe UdpKit.UdpConnection::StreamPipe
	UdpPipe_t68DCC213EEBAD83CAEACBA4EF6D38CF08BDDBA96* ___StreamPipe_16;
	// UdpKit.UdpEndPoint UdpKit.UdpConnection::EndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___EndPoint_17;
	// UdpKit.UdpConnectionMode UdpKit.UdpConnection::Mode
	int32_t ___Mode_18;
	// UdpKit.UdpSocket UdpKit.UdpConnection::Socket
	UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979* ___Socket_19;
	// UdpKit.UdpConnectionState UdpKit.UdpConnection::State
	int32_t ___State_20;
	// System.UInt32 UdpKit.UdpConnection::<SendTime>k__BackingField
	uint32_t ___U3CSendTimeU3Ek__BackingField_21;
	// System.UInt32 UdpKit.UdpConnection::<RecvTime>k__BackingField
	uint32_t ___U3CRecvTimeU3Ek__BackingField_22;
	// System.UInt32 modreq(System.Runtime.CompilerServices.IsVolatile) UdpKit.UdpConnection::ConnectionId
	uint32_t ___ConnectionId_23;
	// System.Byte[] UdpKit.UdpConnection::ConnectToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ConnectToken_24;
	// System.Byte[] UdpKit.UdpConnection::DisconnectToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DisconnectToken_25;
	// System.Byte[] UdpKit.UdpConnection::AcceptToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___AcceptToken_26;
	// System.Byte[] UdpKit.UdpConnection::AcceptTokenWithPrefix
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___AcceptTokenWithPrefix_27;
	// System.Object UdpKit.UdpConnection::<UserToken>k__BackingField
	RuntimeObject* ___U3CUserTokenU3Ek__BackingField_28;
	// UdpKit.UdpConnectionDisconnectReason UdpKit.UdpConnection::<DisconnectReason>k__BackingField
	int32_t ___U3CDisconnectReasonU3Ek__BackingField_29;
	// UdpKit.UdpConnectionType UdpKit.UdpConnection::<ConnectionType>k__BackingField
	int32_t ___U3CConnectionTypeU3Ek__BackingField_30;
	// System.Collections.Generic.List`1<UdpKit.UdpChannelStreamer> UdpKit.UdpConnection::outgoingStreamChannels
	List_1_tCCC9AB249815BEE2085FC8FA234DCF8F2CF64E28* ___outgoingStreamChannels_31;
};

// UdpKit.UdpException
struct UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071  : public Exception_t
{
};

// UdpKit.Security.UdpKitAccessException
struct UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE  : public Exception_t
{
	// System.String UdpKit.Security.UdpKitAccessException::<Source>k__BackingField
	String_t* ___U3CSourceU3Ek__BackingField_18;
	// System.String UdpKit.Security.UdpKitAccessException::<HelpLink>k__BackingField
	String_t* ___U3CHelpLinkU3Ek__BackingField_19;
};

// UdpKit.UdpSocket
struct UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<System.Byte[]> UdpKit.UdpSocket::delayedBuffers
	Queue_1_t3E42C0E20A2424A3D5D25D8E7EC0B2095C9D921E* ___delayedBuffers_0;
	// System.Collections.Generic.Queue`1<UdpKit.UdpSocket/DelayedPacket> UdpKit.UdpSocket::delayedPackets
	Queue_1_t53907F0EC15ED39F3B5AAA8B2D1DED08395B213A* ___delayedPackets_1;
	// UdpKit.UdpConfig UdpKit.UdpSocket::Config
	UdpConfig_t40D9E5EC737F64EFB5C8E3E40B6DC256350DDCCA* ___Config_3;
	// UdpKit.UdpPipeConfig UdpKit.UdpSocket::PacketPipeConfig
	UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3 ___PacketPipeConfig_4;
	// UdpKit.UdpPipeConfig UdpKit.UdpSocket::StreamPipeConfig
	UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3 ___StreamPipeConfig_5;
	// UdpKit.UdpEndPoint UdpKit.UdpSocket::LANEndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___LANEndPoint_6;
	// UdpKit.UdpEndPoint UdpKit.UdpSocket::WANEndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___WANEndPoint_7;
	// System.Guid UdpKit.UdpSocket::PeerId
	Guid_t ___PeerId_8;
	// System.Guid UdpKit.UdpSocket::GameId
	Guid_t ___GameId_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) UdpKit.UdpSocket::frame
	int32_t ___frame_10;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) UdpKit.UdpSocket::channelIdCounter
	int32_t ___channelIdCounter_11;
	// System.UInt32 modreq(System.Runtime.CompilerServices.IsVolatile) UdpKit.UdpSocket::connectionIdCounter
	uint32_t ___connectionIdCounter_12;
	// UdpKit.UdpSocketMode modreq(System.Runtime.CompilerServices.IsVolatile) UdpKit.UdpSocket::mode
	int32_t ___mode_13;
	// UdpKit.UdpSocketState modreq(System.Runtime.CompilerServices.IsVolatile) UdpKit.UdpSocket::state
	int32_t ___state_14;
	// System.Byte[] UdpKit.UdpSocket::sendBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sendBuffer_15;
	// System.Byte[] UdpKit.UdpSocket::recvBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___recvBuffer_16;
	// UdpKit.Platform.UdpPlatform UdpKit.UdpSocket::platform
	UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* ___platform_17;
	// UdpKit.Platform.UdpPlatformSocket UdpKit.UdpSocket::platformSocket
	UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* ___platformSocket_18;
	// UdpKit.UdpPacketPool UdpKit.UdpSocket::packetPool
	UdpPacketPool_t66C4FF17892EA88CB820378D7D32095E552311CF* ___packetPool_19;
	// UdpKit.UdpSocket/SessionManager UdpKit.UdpSocket::sessionManager
	SessionManager_t5F2323D7F67158736FC6E53B1C7A0AA8A97A43C6* ___sessionManager_20;
	// UdpKit.UdpSocket/BroadcastManager UdpKit.UdpSocket::broadcastManager
	BroadcastManager_tE079D26855B93214CDC88075587B887FEE8377C3* ___broadcastManager_21;
	// UdpKit.UdpSocket/Broadcaster UdpKit.UdpSocket::broadcaster
	Broadcaster_t2BE6B8D3775BB2B3F12E8448B5625F72F756E40D* ___broadcaster_22;
	// System.Collections.Generic.Queue`1<UdpKit.UdpEvent> UdpKit.UdpSocket::eventQueueIn
	Queue_1_t32581780180E9393CEC84F531E7B725D759AF83B* ___eventQueueIn_23;
	// System.Collections.Generic.Queue`1<UdpKit.UdpEvent> UdpKit.UdpSocket::eventQueueOut
	Queue_1_t32581780180E9393CEC84F531E7B725D759AF83B* ___eventQueueOut_24;
	// System.Collections.Generic.List`1<UdpKit.UdpConnection> UdpKit.UdpSocket::connectionList
	List_1_tBAA1597EF6E6D2409AAECF85E6FE7849062044C3* ___connectionList_25;
	// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Byte[]> UdpKit.UdpSocket::pendingConnections
	Dictionary_2_tB922C8D78BE0B4A75829786F7EF77989703BC9A4* ___pendingConnections_26;
	// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,UdpKit.UdpConnection> UdpKit.UdpSocket::connectionLookup
	Dictionary_2_t3214A21F0FE1F7D595C0D84ECEA08AD219DF6846* ___connectionLookup_27;
	// System.Collections.Generic.Dictionary`2<UdpKit.UdpChannelName,UdpKit.UdpStreamChannel> UdpKit.UdpSocket::streamChannels
	Dictionary_2_t2CC3BC0C5F4EBD813F789B8337127510F4F2F0BC* ___streamChannels_28;
	// System.Object UdpKit.UdpSocket::<UserToken>k__BackingField
	RuntimeObject* ___U3CUserTokenU3Ek__BackingField_29;
	// System.Func`2<System.Int32,System.Byte[]> UdpKit.UdpSocket::<UnconnectedBufferProvider>k__BackingField
	Func_2_t7AA90D23E80B90994BB827D81B647EDA15003B38* ___U3CUnconnectedBufferProviderU3Ek__BackingField_30;
};

struct UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979_StaticFields
{
	// System.Boolean UdpKit.UdpSocket::AllowConnectionRecycle
	bool ___AllowConnectionRecycle_2;
};

// UdpKit.Protocol.ProtocolClient/AckCallback
struct AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894 
{
	// UdpKit.UdpEndPoint UdpKit.Protocol.ProtocolClient/AckCallback::Filter
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___Filter_0;
	// System.Action`1<UdpKit.Protocol.Query> UdpKit.Protocol.ProtocolClient/AckCallback::Action
	Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1* ___Action_1;
};
// Native definition for P/Invoke marshalling of UdpKit.Protocol.ProtocolClient/AckCallback
struct AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshaled_pinvoke
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_pinvoke ___Filter_0;
	Il2CppMethodPointer ___Action_1;
};
// Native definition for COM marshalling of UdpKit.Protocol.ProtocolClient/AckCallback
struct AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshaled_com
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_com ___Filter_0;
	Il2CppMethodPointer ___Action_1;
};

// UdpKit.Protocol.ProtocolClient/MsgHandler
struct MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67 
{
	// UdpKit.UdpEndPoint UdpKit.Protocol.ProtocolClient/MsgHandler::Filter
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___Filter_0;
	// System.Action`1<UdpKit.Protocol.Message> UdpKit.Protocol.ProtocolClient/MsgHandler::Action
	Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB* ___Action_1;
};
// Native definition for P/Invoke marshalling of UdpKit.Protocol.ProtocolClient/MsgHandler
struct MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshaled_pinvoke
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_pinvoke ___Filter_0;
	Il2CppMethodPointer ___Action_1;
};
// Native definition for COM marshalling of UdpKit.Protocol.ProtocolClient/MsgHandler
struct MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshaled_com
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_com ___Filter_0;
	Il2CppMethodPointer ___Action_1;
};

// System.Action`1<UdpKit.Protocol.Message>
struct Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<UdpKit.Protocol.Query>
struct Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1  : public MulticastDelegate_t
{
};

// System.Action`2<System.Boolean,System.Int32Enum>
struct Action_2_t562F5229B3319F83414D174041EF98B798BFDB4E  : public MulticastDelegate_t
{
};

// System.Action`2<System.Boolean,UdpKit.UdpConnectionDisconnectReason>
struct Action_2_tAD65775ADAECDB7057525E2CF21F8E9FEA4C63A9  : public MulticastDelegate_t
{
};

// System.Action`2<System.Boolean,UdpKit.UdpSessionError>
struct Action_2_tA084CEBCE4FE337EFE320FBC3E3291C30BE917CD  : public MulticastDelegate_t
{
};

// System.Func`2<UdpKit.Async.Task,System.Boolean>
struct Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// UdpKit.Protocol.Query
struct Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
	// UdpKit.Protocol.Result UdpKit.Protocol.Query::Result
	Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* ___Result_14;
};

// UdpKit.Protocol.Result
struct Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
	// System.Guid UdpKit.Protocol.Result::Query
	Guid_t ___Query_14;
};

// System.Threading.ThreadAbortException
struct ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ThreadInterruptedException
struct ThreadInterruptedException_t5F777BF218B009092789F6DA0013E4DC3A0987CC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UdpKit.UdpEndPoint[]
struct UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947  : public RuntimeArray
{
	ALIGN_FIELD (8) UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 m_Items[1];

	inline UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke(const UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2& unmarshaled, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke_back(const UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_pinvoke& marshaled, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2& unmarshaled);
IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke_cleanup(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com(const UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2& unmarshaled, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com_back(const UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_com& marshaled, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2& unmarshaled);
IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com_cleanup(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_com& marshaled);

// System.Void UdpKit.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m67068A3C8936E924480ACB4F275A4983BD80EC8F_gshared (Singleton_1_t835DEC6CA7D75CE64FE60C553A71D7A3FDEE0314* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UdpKit.Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_m38C34EF9776CB3A22E8C7B896E4C5A9B4147FFC7_gshared (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mF0A3BCDCC75BCD5F4B818C48731347D0ED0EC827_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD7F244B8016ECAC45A1DB936C75C66FCB6672B55_gshared (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m055C9530ACA3921872C3AC90EE57C61593F13B86_gshared (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, uint32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mEE7B51CDC140869B02C9DC66AA438DAE0705A69D_gshared (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, uint32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m954B9E240D25A0A5B142DF33BF6A756A92A8D444_gshared (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m9B0B29A65D105BC365BE482DF931A7C47D52A794_gshared (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UdpKit.Protocol.ProtocolClient/AckCallback>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE663C32039A47A23E494B17E101D9AA4CA23D1C2_gshared (Dictionary_2_t301678D978FDB7C8450D4913C2E33E854684429B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UdpKit.Protocol.ProtocolClient/MsgHandler>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD5655AA769BCA8CC0C06A202036ACE0A98362BBC_gshared (Dictionary_2_t7769013CD806C524660F4B98B5A6F4475A54C7FE* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UdpKit.Protocol.ProtocolClient/AckCallback>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mBAAC390577B25AE1B70A6F6BE9F094FDFC234E72_gshared (Dictionary_2_t301678D978FDB7C8450D4913C2E33E854684429B* __this, RuntimeObject* ___key0, AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UdpKit.Protocol.ProtocolClient/MsgHandler>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mCCD8DEC695DDDA3EA7B718E785167AD882DB8693_gshared (Dictionary_2_t7769013CD806C524660F4B98B5A6F4475A54C7FE* __this, RuntimeObject* ___key0, MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Boolean,System.Int32Enum>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mCC139849DDF46F634B4555996FCCD2B93DF65E97_gshared_inline (Action_2_t562F5229B3319F83414D174041EF98B798BFDB4E* __this, bool ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_gshared (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_gshared_inline (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___item0, const RuntimeMethod* method) ;

// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpPipeConfig::get_SequenceBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPipeConfig_get_SequenceBits_m2EC52AF3C46CB2CDFB1EF9833E333AB2C8AAF364 (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpPipeConfig::get_AckBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPipeConfig_get_AckBits_mC5778D3373A5874EC59639962869A15285012CE4 (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpPipeConfig::get_HeaderSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPipeConfig_get_HeaderSize_m9CD2E34BCAE9B21156831E89C7C52B9D58D4C542 (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpPipeConfig::get_HeaderSizeBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPipeConfig_get_HeaderSizeBits_m8FADD5AC99ECAEEDBF0EBF7AA80EE5B387619206 (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, const RuntimeMethod* method) ;
// System.UInt32 UdpKit.UdpPipeConfig::NextSequence(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UdpPipeConfig_NextSequence_m10B2877BFFE7DC4580CAC8D504DCD02B09395019 (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, uint32_t ___seq0, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpPipeConfig::Distance(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPipeConfig_Distance_mC5DCF3EC94991D395AE7298AD247F4BFDDDF375D (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, uint32_t ___from0, uint32_t ___to1, const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7 (const RuntimeMethod* method) ;
// System.Void UdpKit.Singleton`1<UdpKit.Async.ThreadManager>::.ctor()
inline void Singleton_1__ctor_m35B8896ABA4970B1186DD7A6998B8FAE32B47FC8 (Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7*, const RuntimeMethod*))Singleton_1__ctor_m67068A3C8936E924480ACB4F275A4983BD80EC8F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UdpKit.Async.Task>::.ctor()
inline void List_1__ctor_m1658CFDA197F3ED3A9B2EE1448FE6CD0EBFC3229 (List_1_t3566FD248C7472A96FF743981A36FACD9860797C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3566FD248C7472A96FF743981A36FACD9860797C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UdpKit.Singleton`1<UdpKit.Async.ThreadManager>::get_Instance()
inline ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D (const RuntimeMethod* method)
{
	return ((  ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m38C34EF9776CB3A22E8C7B896E4C5A9B4147FFC7_gshared)(method);
}
// T System.Collections.Generic.List`1<UdpKit.Async.Task>::get_Item(System.Int32)
inline Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* List_1_get_Item_mD1F759A46C3B2D0E6F86058819D3DEED0C3525F1 (List_1_t3566FD248C7472A96FF743981A36FACD9860797C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* (*) (List_1_t3566FD248C7472A96FF743981A36FACD9860797C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UdpKit.Async.Task::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Abort_mAB206358F091D0FF475635B6941E98A30E1CA82B (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UdpKit.Async.Task>::get_Count()
inline int32_t List_1_get_Count_mE0E23C2F1B955D5F62ADEEFCCD43D741E32439FA_inline (List_1_t3566FD248C7472A96FF743981A36FACD9860797C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3566FD248C7472A96FF743981A36FACD9860797C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UdpKit.Async.Task>::Clear()
inline void List_1_Clear_m3A6566C95AF22704BDD55674E9443DC266A548AB_inline (List_1_t3566FD248C7472A96FF743981A36FACD9860797C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3566FD248C7472A96FF743981A36FACD9860797C*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Func`2<UdpKit.Async.Task,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6F1E7B137A0ABBB32226AB085416897B2D42FCDD (Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Linq.Enumerable::Count<UdpKit.Async.Task>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline int32_t Enumerable_Count_TisTask_tC3595A95675D7213729DD214E8E6B7B6FD08BE96_mA3A37B62513DAEE95CAAC02BC6687F99E06557B5 (RuntimeObject* ___source0, Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D* ___predicate1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mF0A3BCDCC75BCD5F4B818C48731347D0ED0EC827_gshared)(___source0, ___predicate1, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// UdpKit.Async.Task UdpKit.Async.ThreadManager::FindTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* ThreadManager_FindTask_m4BA84020CED06103F6467354DFB485AFC508E087 (const RuntimeMethod* method) ;
// System.Void UdpKit.Async.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Run_m8CFC58BA2531E696AE38649F053BE11F27781A04 (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) ;
// System.Boolean UdpKit.Async.Task::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsRunning_m6A410B2908C7791223347F77392DF5E45C547BAA (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, const RuntimeMethod* method) ;
// System.String UdpKit.Async.Task::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Task_get_Name_m156554814700DB63A2275DDBC7D3F8C59097B6D3 (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpLog::Debug(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Debug_mD8C271E21EFA219C4984D5D7E6FFAE57DF6568B9 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UdpKit.Async.Task::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_m02BEEFCBB3FB06C89870CFC1A9C2DFFBFD1A4A2F (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.Async.Task>::Add(T)
inline void List_1_Add_m457746A1F27782558C1A2214F8AE7CC18E4EF1AA_inline (List_1_t3566FD248C7472A96FF743981A36FACD9860797C* __this, Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3566FD248C7472A96FF743981A36FACD9860797C*, Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UdpKit.Async.ThreadManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m394C988D402F3185034E9ECE0987B197B041E586 (U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_mB7C8CD30C5BE11A2C8DB79B27593CF0C5FE82ADE (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* __this, bool ___initialState0, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_Priority(System.Threading.ThreadPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Priority_m3B0C22105EA0A8D7E210D3F53EF9649C59B1C297 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.HMACSHA256::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5 (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// System.Security.Cryptography.HMACSHA256 UdpKit.Security.HMACPacketValidator::get_Hasher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* HMACPacketValidator_get_Hasher_mC7AB495AC61A1E05D91E588410369B5CDB45EBBB (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mFAB8CADA69B3BE03B1C974250EEC30ADF8805710 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void UdpKit.Blit::Clear(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_Clear_m400A158206F8B02C55A1E83ED369718D66C323EF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// System.Int32 UdpKit.Security.HMACPacketValidator::get_Sha256ByteSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HMACPacketValidator_get_Sha256ByteSize_mB5F0BA934D10A8384043020777A3E197D7814A84_inline (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.Security.HMACPacketValidator::TestHashes(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HMACPacketValidator_TestHashes_m8D79729B3C7AE4F0D16F1227C0D78186EC3C30C7 (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hash1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09 (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.Singleton`1<UdpKit.Security.PacketIdValidator>::.ctor()
inline void Singleton_1__ctor_mB41CD456F7CBBA7EABB80D3195140944345B306D (Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750*, const RuntimeMethod*))Singleton_1__ctor_m67068A3C8936E924480ACB4F275A4983BD80EC8F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>::.ctor()
inline void Dictionary_2__ctor_mD7F244B8016ECAC45A1DB936C75C66FCB6672B55 (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696*, const RuntimeMethod*))Dictionary_2__ctor_mD7F244B8016ECAC45A1DB936C75C66FCB6672B55_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m055C9530ACA3921872C3AC90EE57C61593F13B86 (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, uint32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696*, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, uint32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m055C9530ACA3921872C3AC90EE57C61593F13B86_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mEE7B51CDC140869B02C9DC66AA438DAE0705A69D (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, uint32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696*, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, uint32_t, const RuntimeMethod*))Dictionary_2_set_Item_mEE7B51CDC140869B02C9DC66AA438DAE0705A69D_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UdpKit.Security.PacketIdValidator::PrefixIdToBuffer(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketIdValidator_PrefixIdToBuffer_m4C7508AB1AF3EE6FB2CB2CAE178F9594E3DFDEB9 (PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* __this, uint32_t ___id0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>::Clear()
inline void Dictionary_2_Clear_m954B9E240D25A0A5B142DF33BF6A756A92A8D444 (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696*, const RuntimeMethod*))Dictionary_2_Clear_m954B9E240D25A0A5B142DF33BF6A756A92A8D444_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.UInt32>::Remove(TKey)
inline bool Dictionary_2_Remove_m9B0B29A65D105BC365BE482DF931A7C47D52A794 (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696*, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, const RuntimeMethod*))Dictionary_2_Remove_m9B0B29A65D105BC365BE482DF931A7C47D52A794_gshared)(__this, ___key0, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Security.Cryptography.Aes UdpKit.Security.DataEncryptor::BuildAesProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* DataEncryptor_BuildAesProvider_m63692AEE224F1E73664769C84AB122D9CC40D0D9 (const RuntimeMethod* method) ;
// System.Security.Cryptography.ICryptoTransform UdpKit.Security.DataEncryptor::get_Encryptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataEncryptor_get_Encryptor_m7FA656EAD53C27CD6CEA3E9518E81F9AA69EC80F (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, const RuntimeMethod* method) ;
// System.Byte[] UdpKit.Security.DataEncryptor::GetEncryptBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_GetEncryptBuffer_m577FCCEF9D077C4D5321B6823A87949607E5599B (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, const RuntimeMethod* method) ;
// System.Int32 UdpKit.Security.DataEncryptor::CypherData(System.Byte[],System.Int32,System.Security.Cryptography.ICryptoTransform,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataEncryptor_CypherData_mAB2CEE7FB633F22D90D6730B5E25391175826078 (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, RuntimeObject* ___cryptoTransform2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___memoryBuffer3, const RuntimeMethod* method) ;
// System.Byte[] UdpKit.Security.DataEncryptor::CypherDataAlloc(System.Byte[],System.Int32,System.Security.Cryptography.ICryptoTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_CypherDataAlloc_mE762871045D10E20779F57D248FF7E391C8E1A5F (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, RuntimeObject* ___cryptoTransform2, const RuntimeMethod* method) ;
// System.Security.Cryptography.ICryptoTransform UdpKit.Security.DataEncryptor::get_Decryptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataEncryptor_get_Decryptor_mA448B6D32215B4F97AFA8C85E32F833DA4D92A3B (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, const RuntimeMethod* method) ;
// System.Byte[] UdpKit.Security.DataEncryptor::GetDecryptBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_GetDecryptBuffer_m39A20D9F82BA56F98BF82DDA6A3B58F1827F3081 (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m55B1A846E0136865C4863E16D8B8002CB11296EE (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___index1, int32_t ___count2, bool ___writable3, bool ___publiclyVisible4, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___transform1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::FlushFinalBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream_FlushFinalBlock_m21F69C3EC538EB149CFBF9183650FF3A004E0D05 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.Aes System.Security.Cryptography.Aes::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* Aes_Create_m8E61A098683C7BBB8ADF0D030CA032317AE6F890 (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UdpKit.UdpLog::Warn(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Byte[] UdpKit.Security.EncryptionManager::GenerateAesIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptionManager_GenerateAesIV_m73C1411625AA651AFFE4345F2518BABA787C67BB (const RuntimeMethod* method) ;
// System.Byte[] UdpKit.Security.EncryptionManager::GenerateAesKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptionManager_GenerateAesKey_mA7457CC1FBFC83BF7CA569C315F906C5DF652F59 (const RuntimeMethod* method) ;
// System.Byte[] UdpKit.Security.EncryptionManager::GenerateHashSecret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptionManager_GenerateHashSecret_m282D92B62ADF2D1FCE6728F6F259E5058D702EBA (const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inArray0, const RuntimeMethod* method) ;
// System.Void UdpKit.Security.EncryptionManager::InitializeEncryption(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptionManager_InitializeEncryption_mFC765B1F89BFEFD082F1344683E780692F28135C (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, String_t* ___aesIV0, String_t* ___aesKey1, String_t* ___hashSecret2, const RuntimeMethod* method) ;
// System.Void UdpKit.Security.DataEncryptor::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEncryptor__ctor_m59FF1B769B3C803E874FE8C7870C97B5F3429673 (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, String_t* ___aesIV0, String_t* ___aesKey1, const RuntimeMethod* method) ;
// System.Void UdpKit.Security.HMACPacketValidator::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMACPacketValidator__ctor_mDB5E4F3E838B0A0B9147BF35961B72768432F2CA (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, String_t* ___secret0, const RuntimeMethod* method) ;
// T UdpKit.Singleton`1<UdpKit.Security.PacketIdValidator>::get_Instance()
inline PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* Singleton_1_get_Instance_m142D6F43166E015DE8E9C35AC33895549243949F (const RuntimeMethod* method)
{
	return ((  PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m38C34EF9776CB3A22E8C7B896E4C5A9B4147FFC7_gshared)(method);
}
// System.Boolean UdpKit.Security.EncryptionManager::get_Ready()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptionManager_get_Ready_m2ED08826725FFC58E3257D6684FA1FF722B1BB08 (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UdpKit.Security.PacketIdValidator::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketIdValidator_Clear_m0DAAD176BEA5AB9CE68CB78F022D2D74FE187190 (PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* __this, const RuntimeMethod* method) ;
// System.Int32 UdpKit.Security.DataEncryptor::EncryptData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataEncryptor_EncryptData_m92700F10C96031FC5D064F3E435ECCB3B3EEACCE (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 UdpKit.Security.DataEncryptor::DecryptData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataEncryptor_DecryptData_mD6ABFE69DCD86A5D9D68586066CEEF8520CB46D5 (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Byte[] UdpKit.Security.DataEncryptor::GenerateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_GenerateKey_m7A98D9654208BF63EB2573501E798C135863AA7F (const RuntimeMethod* method) ;
// System.Byte[] UdpKit.Security.DataEncryptor::GenerateIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_GenerateIV_m8BF8C3F8882F0C213BEC7B9093C99D66E7E63DAD (const RuntimeMethod* method) ;
// System.Byte[] UdpKit.Security.HMACPacketValidator::GenerateSecret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HMACPacketValidator_GenerateSecret_m65E6E5F7D86D170ED7295F0756561964F1C1D1A3 (const RuntimeMethod* method) ;
// System.Void UdpKit.Singleton`1<UdpKit.Security.EncryptionManager>::.ctor()
inline void Singleton_1__ctor_m2CE0E1A87632D460E4E43378587BD2A842413B5A (Singleton_1_t06B9B5A2DC38EE9BD6BEBE6F1EEB4FEEA87767FF* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t06B9B5A2DC38EE9BD6BEBE6F1EEB4FEEA87767FF*, const RuntimeMethod*))Singleton_1__ctor_m67068A3C8936E924480ACB4F275A4983BD80EC8F_gshared)(__this, method);
}
// System.Void UdpKit.Protocol.Context::.ctor(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__ctor_mBB26675035269A4C81CB6434C21DC68135AADCDA (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, Guid_t ___game0, Guid_t ___peer1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.Protocol.Query>::.ctor()
inline void List_1__ctor_mCB7668B11360C26134011F8753D11ECAA36637E6 (List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8CB8748CDE33865540F8E83BB39578F74011396*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UdpKit.Protocol.ProtocolClient/AckCallback>::.ctor()
inline void Dictionary_2__ctor_m1BED02A8AE99408DF357364EEC5D305859723610 (Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08*, const RuntimeMethod*))Dictionary_2__ctor_mE663C32039A47A23E494B17E101D9AA4CA23D1C2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UdpKit.Protocol.ProtocolClient/MsgHandler>::.ctor()
inline void Dictionary_2__ctor_mAA9DD8FF2B74631A640FB981681DF0D72B11FD7F (Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED*, const RuntimeMethod*))Dictionary_2__ctor_mD5655AA769BCA8CC0C06A202036ACE0A98362BBC_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UdpKit.Protocol.Query>::get_Item(System.Int32)
inline Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF (List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* (*) (List_1_tE8CB8748CDE33865540F8E83BB39578F74011396*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UdpKit.Protocol.ProtocolClient::GetValidCallback(UdpKit.Protocol.Query,UdpKit.Protocol.ProtocolClient/AckCallback&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProtocolClient_GetValidCallback_m4B71CB79C2CA063F3A1D6728EAF63A3D47883ECD (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* ___qry0, AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894* ___callback1, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.ProtocolClient::Send(UdpKit.Protocol.Message,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolClient_Send_m61220806CF2FB810DBB5554425C525B4A85FC3BA (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* ___msg0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint1, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.ProtocolClient::RemoveQueryAt(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolClient_RemoveQueryAt_mC5CDBA96CFB27502286F7920A8899A94286092EE (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, int32_t* ___i0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UdpKit.Protocol.Query>::Invoke(T)
inline void Action_1_Invoke_mB9A9302F4DF1DEE8B187A68A8540D5E97DFF1BF8_inline (Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1* __this, Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1*, Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Int32 System.Collections.Generic.List`1<UdpKit.Protocol.Query>::get_Count()
inline int32_t List_1_get_Count_m36BBBAA6F4456C820A24A87E8D9B4311206344BE_inline (List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8CB8748CDE33865540F8E83BB39578F74011396*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UdpKit.Protocol.Query>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m8AA246717A34DB4A07A48D7C75E67CF1F9A5584E (List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8CB8748CDE33865540F8E83BB39578F74011396*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UdpKit.Protocol.ProtocolClient/AckCallback>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mCF0F0FE626965D3605DEDABE1FCD556A21F63AF6 (Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08* __this, Type_t* ___key0, AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08*, Type_t*, AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894*, const RuntimeMethod*))Dictionary_2_TryGetValue_mBAAC390577B25AE1B70A6F6BE9F094FDFC234E72_gshared)(__this, ___key0, ___value1, method);
}
// UdpKit.UdpEndPoint UdpKit.UdpEndPoint::op_BitwiseAnd(UdpKit.UdpEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpEndPoint_op_BitwiseAnd_m8EB8B9BA635C7ADAB18979319D81CABE90204A62 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___a0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpEndPoint::op_Equality(UdpKit.UdpEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_op_Equality_m7ABD6588A196A62B9E94DF687A4ED7ED2A2FD591 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___x0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UdpKit.Protocol.ProtocolClient/MsgHandler>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4E1B5DDDBEC79D0FB23387EE1749AB6C347CF018 (Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED* __this, Type_t* ___key0, MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED*, Type_t*, MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67*, const RuntimeMethod*))Dictionary_2_TryGetValue_mCCD8DEC695DDDA3EA7B718E785167AD882DB8693_gshared)(__this, ___key0, ___value1, method);
}
// UdpKit.Protocol.Message UdpKit.Protocol.Context::ParseMessage(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* Context_ParseMessage_mB6571FB38411991C79E68A23D5C7D90C4CCE7C42 (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpLog::Info(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Info_m43C0EB22B6BD6E9FEB4AD3E45A0E767CE1DE2E0B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.ProtocolClient::QueryResult(UdpKit.Protocol.Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolClient_QueryResult_m186AFAE0A51A00A4FC4358DAD27969EC80F8F0FB (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* ___result0, const RuntimeMethod* method) ;
// System.Boolean UdpKit.Protocol.ProtocolClient::GetValidHandler(UdpKit.Protocol.Message,UdpKit.Protocol.ProtocolClient/MsgHandler&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProtocolClient_GetValidHandler_mBBB63895815626FBBA0C0EEB340FDCDA4348E031 (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* ___msg0, MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67* ___handler1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UdpKit.Protocol.Message>::Invoke(T)
inline void Action_1_Invoke_m79DF7B8037C09ABA6F4A3AA08A978817E84D6247_inline (Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB* __this, Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB*, Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// UdpKit.Platform.UdpPlatform UdpKit.Protocol.ProtocolClient::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* ProtocolClient_get_Platform_mDD30C179BD401D68F415A2D210E503976B5A6765 (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.ProtocolClient::QueryFilter(System.Type,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolClient_QueryFilter_mE65D3C6C34A9617B1DF667AA984D7B64D5A5003B (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, Type_t* ___t0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.Protocol.Query>::Add(T)
inline void List_1_Add_m4ACD2771C34ACD94C0FF8A48734E86286D89A5B1_inline (List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* __this, Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8CB8748CDE33865540F8E83BB39578F74011396*, Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 UdpKit.Protocol.Context::WriteMessage(UdpKit.Protocol.Message,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Context_WriteMessage_mEA5DFF8FC81B7587A4A52C3A8FA80FC71289AFB7 (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* ___msg0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, const RuntimeMethod* method) ;
// System.Boolean System.Guid::op_Inequality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Inequality_mAA2FAB73FCD2CB2D2128ECF7016AC16AFBDF6163 (Guid_t ___a0, Guid_t ___b1, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpAssert::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpAssert_Assert_mD587035F5FB461BB2E65A552CBB3247BEE518221 (bool ___condition0, const RuntimeMethod* method) ;
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240 (Guid_t ___a0, Guid_t ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.ProtocolService::set_SendTime(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProtocolService_set_SendTime_mDD3AEB2AC2E7C2765A3EF7C634CB2FACF9A2475E_inline (ProtocolService_t3BCBF8EA68E69B3E55EC2A0619EDF81551B442C0* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UdpKit.UdpSession>::.ctor()
inline void List_1__ctor_mD64159002A52ECE1A36E0ABA1D7D0AB4C7B4DFE7 (List_1_tE03320055A208D5EFE1D027481CDAEC3D2797E8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE03320055A208D5EFE1D027481CDAEC3D2797E8B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Action`2<System.Boolean,UdpKit.UdpSessionError>::Invoke(T1,T2)
inline void Action_2_Invoke_mF1ECC15E80C3209E7B80CA38041092449412F096_inline (Action_2_tA084CEBCE4FE337EFE320FBC3E3291C30BE917CD* __this, bool ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA084CEBCE4FE337EFE320FBC3E3291C30BE917CD*, bool, int32_t, const RuntimeMethod*))Action_2_Invoke_mCC139849DDF46F634B4555996FCCD2B93DF65E97_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// UdpKit.UdpSession UdpKit.UdpSessionImpl::Build(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* UdpSessionImpl_Build_m079C63985E1F0A8F2CC662B8EA7BADCF8F4F4F66 (String_t* ___hostID0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::.ctor()
inline void List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7 (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*, const RuntimeMethod*))List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_gshared)(__this, method);
}
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv4Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___address0, uint16_t ___port1, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv6Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___address0, uint16_t ___port1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::Add(T)
inline void List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_inline (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, const RuntimeMethod*))List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_gshared_inline)(__this, ___item0, method);
}
// UdpKit.Platform.UdpPlatformSocket UdpKit.Platform.UdpPlatform::CreateSocket(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* UdpPlatform_CreateSocket_m9F9ED7C8F527F3222EB9BC9B26F4F83961008515 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Boolean,UdpKit.UdpConnectionDisconnectReason>::Invoke(T1,T2)
inline void Action_2_Invoke_m8EC589E0E5BF3F2AFBCE8C8C92668D2D86ACA3BC_inline (Action_2_tAD65775ADAECDB7057525E2CF21F8E9FEA4C63A9* __this, bool ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAD65775ADAECDB7057525E2CF21F8E9FEA4C63A9*, bool, int32_t, const RuntimeMethod*))Action_2_Invoke_mCC139849DDF46F634B4555996FCCD2B93DF65E97_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.Void UdpKit.UdpConnection::set_ConnectionType(UdpKit.UdpConnectionType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UdpConnection_set_ConnectionType_mA05C51DE9C17FF683FAAE6ECEEA0E5FA72FCEDFB_inline (UdpConnection_t0BF288D2EFBDEAB3A0EDE430EE1D84949E994103* __this, int32_t ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UdpKit.UdpUtils::HasValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpUtils_HasValue_mF4C787C4BFDCD9D723CB4367396DDAECC30CC947 (String_t* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		String_t* L_0 = ___value0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_000e:
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_0020:
	{
		String_t* L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_0037:
	{
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Byte[] UdpKit.UdpUtils::ReadToken(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UdpUtils_ReadToken_m48B1A494CB2B6E67C2D3FD4EC485415471DFF057 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___size1, int32_t ___tokenStart2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		int32_t L_0 = ___size1;
		int32_t L_1 = ___tokenStart2;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___size1;
		int32_t L_4 = ___tokenStart2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)));
		V_0 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer0;
		int32_t L_7 = ___tokenStart2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = ___size1;
		int32_t L_10 = ___tokenStart2;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		V_2 = L_11;
		goto IL_0027;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		return L_12;
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
// Conversion methods for marshalling of: UdpKit.UdpByteConverter
IL2CPP_EXTERN_C void UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshal_pinvoke(const UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F& unmarshaled, UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshaled_pinvoke& marshaled)
{
	marshaled.___Signed16_0 = unmarshaled.___Signed16_0;
	marshaled.___Unsigned16_1 = unmarshaled.___Unsigned16_1;
	marshaled.___Char_2 = static_cast<uint8_t>(unmarshaled.___Char_2);
	marshaled.___Signed32_3 = unmarshaled.___Signed32_3;
	marshaled.___Unsigned32_4 = unmarshaled.___Unsigned32_4;
	marshaled.___Signed64_5 = unmarshaled.___Signed64_5;
	marshaled.___Unsigned64_6 = unmarshaled.___Unsigned64_6;
	marshaled.___Float32_7 = unmarshaled.___Float32_7;
	marshaled.___Float64_8 = unmarshaled.___Float64_8;
	marshaled.___Byte0_9 = unmarshaled.___Byte0_9;
	marshaled.___Byte1_10 = unmarshaled.___Byte1_10;
	marshaled.___Byte2_11 = unmarshaled.___Byte2_11;
	marshaled.___Byte3_12 = unmarshaled.___Byte3_12;
	marshaled.___Byte4_13 = unmarshaled.___Byte4_13;
	marshaled.___Byte5_14 = unmarshaled.___Byte5_14;
	marshaled.___Byte6_15 = unmarshaled.___Byte6_15;
	marshaled.___Byte7_16 = unmarshaled.___Byte7_16;
}
IL2CPP_EXTERN_C void UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshal_pinvoke_back(const UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshaled_pinvoke& marshaled, UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F& unmarshaled)
{
	int16_t unmarshaledSigned16_temp_0 = 0;
	unmarshaledSigned16_temp_0 = marshaled.___Signed16_0;
	unmarshaled.___Signed16_0 = unmarshaledSigned16_temp_0;
	uint16_t unmarshaledUnsigned16_temp_1 = 0;
	unmarshaledUnsigned16_temp_1 = marshaled.___Unsigned16_1;
	unmarshaled.___Unsigned16_1 = unmarshaledUnsigned16_temp_1;
	Il2CppChar unmarshaledChar_temp_2 = 0x0;
	unmarshaledChar_temp_2 = static_cast<Il2CppChar>(marshaled.___Char_2);
	unmarshaled.___Char_2 = unmarshaledChar_temp_2;
	int32_t unmarshaledSigned32_temp_3 = 0;
	unmarshaledSigned32_temp_3 = marshaled.___Signed32_3;
	unmarshaled.___Signed32_3 = unmarshaledSigned32_temp_3;
	uint32_t unmarshaledUnsigned32_temp_4 = 0;
	unmarshaledUnsigned32_temp_4 = marshaled.___Unsigned32_4;
	unmarshaled.___Unsigned32_4 = unmarshaledUnsigned32_temp_4;
	int64_t unmarshaledSigned64_temp_5 = 0;
	unmarshaledSigned64_temp_5 = marshaled.___Signed64_5;
	unmarshaled.___Signed64_5 = unmarshaledSigned64_temp_5;
	uint64_t unmarshaledUnsigned64_temp_6 = 0;
	unmarshaledUnsigned64_temp_6 = marshaled.___Unsigned64_6;
	unmarshaled.___Unsigned64_6 = unmarshaledUnsigned64_temp_6;
	float unmarshaledFloat32_temp_7 = 0.0f;
	unmarshaledFloat32_temp_7 = marshaled.___Float32_7;
	unmarshaled.___Float32_7 = unmarshaledFloat32_temp_7;
	double unmarshaledFloat64_temp_8 = 0.0;
	unmarshaledFloat64_temp_8 = marshaled.___Float64_8;
	unmarshaled.___Float64_8 = unmarshaledFloat64_temp_8;
	uint8_t unmarshaledByte0_temp_9 = 0x0;
	unmarshaledByte0_temp_9 = marshaled.___Byte0_9;
	unmarshaled.___Byte0_9 = unmarshaledByte0_temp_9;
	uint8_t unmarshaledByte1_temp_10 = 0x0;
	unmarshaledByte1_temp_10 = marshaled.___Byte1_10;
	unmarshaled.___Byte1_10 = unmarshaledByte1_temp_10;
	uint8_t unmarshaledByte2_temp_11 = 0x0;
	unmarshaledByte2_temp_11 = marshaled.___Byte2_11;
	unmarshaled.___Byte2_11 = unmarshaledByte2_temp_11;
	uint8_t unmarshaledByte3_temp_12 = 0x0;
	unmarshaledByte3_temp_12 = marshaled.___Byte3_12;
	unmarshaled.___Byte3_12 = unmarshaledByte3_temp_12;
	uint8_t unmarshaledByte4_temp_13 = 0x0;
	unmarshaledByte4_temp_13 = marshaled.___Byte4_13;
	unmarshaled.___Byte4_13 = unmarshaledByte4_temp_13;
	uint8_t unmarshaledByte5_temp_14 = 0x0;
	unmarshaledByte5_temp_14 = marshaled.___Byte5_14;
	unmarshaled.___Byte5_14 = unmarshaledByte5_temp_14;
	uint8_t unmarshaledByte6_temp_15 = 0x0;
	unmarshaledByte6_temp_15 = marshaled.___Byte6_15;
	unmarshaled.___Byte6_15 = unmarshaledByte6_temp_15;
	uint8_t unmarshaledByte7_temp_16 = 0x0;
	unmarshaledByte7_temp_16 = marshaled.___Byte7_16;
	unmarshaled.___Byte7_16 = unmarshaledByte7_temp_16;
}
// Conversion method for clean up from marshalling of: UdpKit.UdpByteConverter
IL2CPP_EXTERN_C void UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshal_pinvoke_cleanup(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UdpKit.UdpByteConverter
IL2CPP_EXTERN_C void UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshal_com(const UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F& unmarshaled, UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshaled_com& marshaled)
{
	marshaled.___Signed16_0 = unmarshaled.___Signed16_0;
	marshaled.___Unsigned16_1 = unmarshaled.___Unsigned16_1;
	marshaled.___Char_2 = static_cast<uint8_t>(unmarshaled.___Char_2);
	marshaled.___Signed32_3 = unmarshaled.___Signed32_3;
	marshaled.___Unsigned32_4 = unmarshaled.___Unsigned32_4;
	marshaled.___Signed64_5 = unmarshaled.___Signed64_5;
	marshaled.___Unsigned64_6 = unmarshaled.___Unsigned64_6;
	marshaled.___Float32_7 = unmarshaled.___Float32_7;
	marshaled.___Float64_8 = unmarshaled.___Float64_8;
	marshaled.___Byte0_9 = unmarshaled.___Byte0_9;
	marshaled.___Byte1_10 = unmarshaled.___Byte1_10;
	marshaled.___Byte2_11 = unmarshaled.___Byte2_11;
	marshaled.___Byte3_12 = unmarshaled.___Byte3_12;
	marshaled.___Byte4_13 = unmarshaled.___Byte4_13;
	marshaled.___Byte5_14 = unmarshaled.___Byte5_14;
	marshaled.___Byte6_15 = unmarshaled.___Byte6_15;
	marshaled.___Byte7_16 = unmarshaled.___Byte7_16;
}
IL2CPP_EXTERN_C void UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshal_com_back(const UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshaled_com& marshaled, UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F& unmarshaled)
{
	int16_t unmarshaledSigned16_temp_0 = 0;
	unmarshaledSigned16_temp_0 = marshaled.___Signed16_0;
	unmarshaled.___Signed16_0 = unmarshaledSigned16_temp_0;
	uint16_t unmarshaledUnsigned16_temp_1 = 0;
	unmarshaledUnsigned16_temp_1 = marshaled.___Unsigned16_1;
	unmarshaled.___Unsigned16_1 = unmarshaledUnsigned16_temp_1;
	Il2CppChar unmarshaledChar_temp_2 = 0x0;
	unmarshaledChar_temp_2 = static_cast<Il2CppChar>(marshaled.___Char_2);
	unmarshaled.___Char_2 = unmarshaledChar_temp_2;
	int32_t unmarshaledSigned32_temp_3 = 0;
	unmarshaledSigned32_temp_3 = marshaled.___Signed32_3;
	unmarshaled.___Signed32_3 = unmarshaledSigned32_temp_3;
	uint32_t unmarshaledUnsigned32_temp_4 = 0;
	unmarshaledUnsigned32_temp_4 = marshaled.___Unsigned32_4;
	unmarshaled.___Unsigned32_4 = unmarshaledUnsigned32_temp_4;
	int64_t unmarshaledSigned64_temp_5 = 0;
	unmarshaledSigned64_temp_5 = marshaled.___Signed64_5;
	unmarshaled.___Signed64_5 = unmarshaledSigned64_temp_5;
	uint64_t unmarshaledUnsigned64_temp_6 = 0;
	unmarshaledUnsigned64_temp_6 = marshaled.___Unsigned64_6;
	unmarshaled.___Unsigned64_6 = unmarshaledUnsigned64_temp_6;
	float unmarshaledFloat32_temp_7 = 0.0f;
	unmarshaledFloat32_temp_7 = marshaled.___Float32_7;
	unmarshaled.___Float32_7 = unmarshaledFloat32_temp_7;
	double unmarshaledFloat64_temp_8 = 0.0;
	unmarshaledFloat64_temp_8 = marshaled.___Float64_8;
	unmarshaled.___Float64_8 = unmarshaledFloat64_temp_8;
	uint8_t unmarshaledByte0_temp_9 = 0x0;
	unmarshaledByte0_temp_9 = marshaled.___Byte0_9;
	unmarshaled.___Byte0_9 = unmarshaledByte0_temp_9;
	uint8_t unmarshaledByte1_temp_10 = 0x0;
	unmarshaledByte1_temp_10 = marshaled.___Byte1_10;
	unmarshaled.___Byte1_10 = unmarshaledByte1_temp_10;
	uint8_t unmarshaledByte2_temp_11 = 0x0;
	unmarshaledByte2_temp_11 = marshaled.___Byte2_11;
	unmarshaled.___Byte2_11 = unmarshaledByte2_temp_11;
	uint8_t unmarshaledByte3_temp_12 = 0x0;
	unmarshaledByte3_temp_12 = marshaled.___Byte3_12;
	unmarshaled.___Byte3_12 = unmarshaledByte3_temp_12;
	uint8_t unmarshaledByte4_temp_13 = 0x0;
	unmarshaledByte4_temp_13 = marshaled.___Byte4_13;
	unmarshaled.___Byte4_13 = unmarshaledByte4_temp_13;
	uint8_t unmarshaledByte5_temp_14 = 0x0;
	unmarshaledByte5_temp_14 = marshaled.___Byte5_14;
	unmarshaled.___Byte5_14 = unmarshaledByte5_temp_14;
	uint8_t unmarshaledByte6_temp_15 = 0x0;
	unmarshaledByte6_temp_15 = marshaled.___Byte6_15;
	unmarshaled.___Byte6_15 = unmarshaledByte6_temp_15;
	uint8_t unmarshaledByte7_temp_16 = 0x0;
	unmarshaledByte7_temp_16 = marshaled.___Byte7_16;
	unmarshaled.___Byte7_16 = unmarshaledByte7_temp_16;
}
// Conversion method for clean up from marshalling of: UdpKit.UdpByteConverter
IL2CPP_EXTERN_C void UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshal_com_cleanup(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F_marshaled_com& marshaled)
{
}
// UdpKit.UdpByteConverter UdpKit.UdpByteConverter::op_Implicit(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F UdpByteConverter_op_Implicit_mB32A0118BA0ABC490467A63D59754959E9479BCD (int16_t ___val0, const RuntimeMethod* method) 
{
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F));
		int16_t L_0 = ___val0;
		(&V_0)->___Signed16_0 = L_0;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_2 = V_1;
		return L_2;
	}
}
// UdpKit.UdpByteConverter UdpKit.UdpByteConverter::op_Implicit(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F UdpByteConverter_op_Implicit_m197CEC1D96B7095A349D927E104EE616FE2FD6F4 (uint16_t ___val0, const RuntimeMethod* method) 
{
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F));
		uint16_t L_0 = ___val0;
		(&V_0)->___Unsigned16_1 = L_0;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_2 = V_1;
		return L_2;
	}
}
// UdpKit.UdpByteConverter UdpKit.UdpByteConverter::op_Implicit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F UdpByteConverter_op_Implicit_mD31A190582E74B727D85B6D463B1D5DFC79E5974 (Il2CppChar ___val0, const RuntimeMethod* method) 
{
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F));
		Il2CppChar L_0 = ___val0;
		(&V_0)->___Char_2 = L_0;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_2 = V_1;
		return L_2;
	}
}
// UdpKit.UdpByteConverter UdpKit.UdpByteConverter::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F UdpByteConverter_op_Implicit_m01712BEF4FB8FD6DCF7DE3119BF947B20B4C2CBA (uint32_t ___val0, const RuntimeMethod* method) 
{
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F));
		uint32_t L_0 = ___val0;
		(&V_0)->___Unsigned32_4 = L_0;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_2 = V_1;
		return L_2;
	}
}
// UdpKit.UdpByteConverter UdpKit.UdpByteConverter::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F UdpByteConverter_op_Implicit_m7CE4A37AB3AAE30B190DD583B7938D9A8CD2E434 (int32_t ___val0, const RuntimeMethod* method) 
{
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F));
		int32_t L_0 = ___val0;
		(&V_0)->___Signed32_3 = L_0;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_2 = V_1;
		return L_2;
	}
}
// UdpKit.UdpByteConverter UdpKit.UdpByteConverter::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F UdpByteConverter_op_Implicit_mDAF61A1C9A5E2D1D46C6167FD3F5F06C5DC956FF (uint64_t ___val0, const RuntimeMethod* method) 
{
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F));
		uint64_t L_0 = ___val0;
		(&V_0)->___Unsigned64_6 = L_0;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_2 = V_1;
		return L_2;
	}
}
// UdpKit.UdpByteConverter UdpKit.UdpByteConverter::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F UdpByteConverter_op_Implicit_m97D13D8ABF2AFEE17F6B49B72C1582309816DE92 (int64_t ___val0, const RuntimeMethod* method) 
{
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F));
		int64_t L_0 = ___val0;
		(&V_0)->___Signed64_5 = L_0;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_2 = V_1;
		return L_2;
	}
}
// UdpKit.UdpByteConverter UdpKit.UdpByteConverter::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F UdpByteConverter_op_Implicit_m55F71E26F2855FD4E50577378C6E0694F4638A20 (float ___val0, const RuntimeMethod* method) 
{
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F));
		float L_0 = ___val0;
		(&V_0)->___Float32_7 = L_0;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_2 = V_1;
		return L_2;
	}
}
// UdpKit.UdpByteConverter UdpKit.UdpByteConverter::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F UdpByteConverter_op_Implicit_mA414E949EBF0AB019D0A5F8032B9E2893877AF05 (double ___val0, const RuntimeMethod* method) 
{
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F));
		double L_0 = ___val0;
		(&V_0)->___Float64_8 = L_0;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_1 = V_0;
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F L_2 = V_1;
		return L_2;
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
// Conversion methods for marshalling of: UdpKit.UdpPipeConfig
IL2CPP_EXTERN_C void UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshal_pinvoke(const UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3& unmarshaled, UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshaled_pinvoke& marshaled)
{
	marshaled.___PipeId_2 = unmarshaled.___PipeId_2;
	marshaled.___UpdatePing_3 = static_cast<int32_t>(unmarshaled.___UpdatePing_3);
	marshaled.___Timeout_4 = unmarshaled.___Timeout_4;
	marshaled.___WindowSize_5 = unmarshaled.___WindowSize_5;
	marshaled.___DatagramSize_6 = unmarshaled.___DatagramSize_6;
	marshaled.___AckBytes_7 = unmarshaled.___AckBytes_7;
	marshaled.___SequenceBytes_8 = unmarshaled.___SequenceBytes_8;
}
IL2CPP_EXTERN_C void UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshal_pinvoke_back(const UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshaled_pinvoke& marshaled, UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3& unmarshaled)
{
	uint8_t unmarshaledPipeId_temp_0 = 0x0;
	unmarshaledPipeId_temp_0 = marshaled.___PipeId_2;
	unmarshaled.___PipeId_2 = unmarshaledPipeId_temp_0;
	bool unmarshaledUpdatePing_temp_1 = false;
	unmarshaledUpdatePing_temp_1 = static_cast<bool>(marshaled.___UpdatePing_3);
	unmarshaled.___UpdatePing_3 = unmarshaledUpdatePing_temp_1;
	uint32_t unmarshaledTimeout_temp_2 = 0;
	unmarshaledTimeout_temp_2 = marshaled.___Timeout_4;
	unmarshaled.___Timeout_4 = unmarshaledTimeout_temp_2;
	int32_t unmarshaledWindowSize_temp_3 = 0;
	unmarshaledWindowSize_temp_3 = marshaled.___WindowSize_5;
	unmarshaled.___WindowSize_5 = unmarshaledWindowSize_temp_3;
	int32_t unmarshaledDatagramSize_temp_4 = 0;
	unmarshaledDatagramSize_temp_4 = marshaled.___DatagramSize_6;
	unmarshaled.___DatagramSize_6 = unmarshaledDatagramSize_temp_4;
	int32_t unmarshaledAckBytes_temp_5 = 0;
	unmarshaledAckBytes_temp_5 = marshaled.___AckBytes_7;
	unmarshaled.___AckBytes_7 = unmarshaledAckBytes_temp_5;
	int32_t unmarshaledSequenceBytes_temp_6 = 0;
	unmarshaledSequenceBytes_temp_6 = marshaled.___SequenceBytes_8;
	unmarshaled.___SequenceBytes_8 = unmarshaledSequenceBytes_temp_6;
}
// Conversion method for clean up from marshalling of: UdpKit.UdpPipeConfig
IL2CPP_EXTERN_C void UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshal_pinvoke_cleanup(UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UdpKit.UdpPipeConfig
IL2CPP_EXTERN_C void UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshal_com(const UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3& unmarshaled, UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshaled_com& marshaled)
{
	marshaled.___PipeId_2 = unmarshaled.___PipeId_2;
	marshaled.___UpdatePing_3 = static_cast<int32_t>(unmarshaled.___UpdatePing_3);
	marshaled.___Timeout_4 = unmarshaled.___Timeout_4;
	marshaled.___WindowSize_5 = unmarshaled.___WindowSize_5;
	marshaled.___DatagramSize_6 = unmarshaled.___DatagramSize_6;
	marshaled.___AckBytes_7 = unmarshaled.___AckBytes_7;
	marshaled.___SequenceBytes_8 = unmarshaled.___SequenceBytes_8;
}
IL2CPP_EXTERN_C void UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshal_com_back(const UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshaled_com& marshaled, UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3& unmarshaled)
{
	uint8_t unmarshaledPipeId_temp_0 = 0x0;
	unmarshaledPipeId_temp_0 = marshaled.___PipeId_2;
	unmarshaled.___PipeId_2 = unmarshaledPipeId_temp_0;
	bool unmarshaledUpdatePing_temp_1 = false;
	unmarshaledUpdatePing_temp_1 = static_cast<bool>(marshaled.___UpdatePing_3);
	unmarshaled.___UpdatePing_3 = unmarshaledUpdatePing_temp_1;
	uint32_t unmarshaledTimeout_temp_2 = 0;
	unmarshaledTimeout_temp_2 = marshaled.___Timeout_4;
	unmarshaled.___Timeout_4 = unmarshaledTimeout_temp_2;
	int32_t unmarshaledWindowSize_temp_3 = 0;
	unmarshaledWindowSize_temp_3 = marshaled.___WindowSize_5;
	unmarshaled.___WindowSize_5 = unmarshaledWindowSize_temp_3;
	int32_t unmarshaledDatagramSize_temp_4 = 0;
	unmarshaledDatagramSize_temp_4 = marshaled.___DatagramSize_6;
	unmarshaled.___DatagramSize_6 = unmarshaledDatagramSize_temp_4;
	int32_t unmarshaledAckBytes_temp_5 = 0;
	unmarshaledAckBytes_temp_5 = marshaled.___AckBytes_7;
	unmarshaled.___AckBytes_7 = unmarshaledAckBytes_temp_5;
	int32_t unmarshaledSequenceBytes_temp_6 = 0;
	unmarshaledSequenceBytes_temp_6 = marshaled.___SequenceBytes_8;
	unmarshaled.___SequenceBytes_8 = unmarshaledSequenceBytes_temp_6;
}
// Conversion method for clean up from marshalling of: UdpKit.UdpPipeConfig
IL2CPP_EXTERN_C void UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshal_com_cleanup(UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3_marshaled_com& marshaled)
{
}
// System.Int32 UdpKit.UdpPipeConfig::get_SequenceBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPipeConfig_get_SequenceBits_m2EC52AF3C46CB2CDFB1EF9833E333AB2C8AAF364 (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___SequenceBytes_8;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 8));
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UdpPipeConfig_get_SequenceBits_m2EC52AF3C46CB2CDFB1EF9833E333AB2C8AAF364_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UdpPipeConfig_get_SequenceBits_m2EC52AF3C46CB2CDFB1EF9833E333AB2C8AAF364(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UdpKit.UdpPipeConfig::get_AckBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPipeConfig_get_AckBits_mC5778D3373A5874EC59639962869A15285012CE4 (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___AckBytes_7;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 8));
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UdpPipeConfig_get_AckBits_mC5778D3373A5874EC59639962869A15285012CE4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UdpPipeConfig_get_AckBits_mC5778D3373A5874EC59639962869A15285012CE4(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UdpKit.UdpPipeConfig::get_HeaderSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPipeConfig_get_HeaderSize_m9CD2E34BCAE9B21156831E89C7C52B9D58D4C542 (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___SequenceBytes_8;
		int32_t L_1 = __this->___SequenceBytes_8;
		int32_t L_2 = __this->___AckBytes_7;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(3, L_0)), L_1)), L_2));
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t UdpPipeConfig_get_HeaderSize_m9CD2E34BCAE9B21156831E89C7C52B9D58D4C542_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UdpPipeConfig_get_HeaderSize_m9CD2E34BCAE9B21156831E89C7C52B9D58D4C542(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UdpKit.UdpPipeConfig::get_HeaderSizeBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPipeConfig_get_HeaderSizeBits_m8FADD5AC99ECAEEDBF0EBF7AA80EE5B387619206 (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UdpPipeConfig_get_HeaderSize_m9CD2E34BCAE9B21156831E89C7C52B9D58D4C542(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 8));
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UdpPipeConfig_get_HeaderSizeBits_m8FADD5AC99ECAEEDBF0EBF7AA80EE5B387619206_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UdpPipeConfig_get_HeaderSizeBits_m8FADD5AC99ECAEEDBF0EBF7AA80EE5B387619206(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UdpKit.UdpPipeConfig::NextSequence(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UdpPipeConfig_NextSequence_m10B2877BFFE7DC4580CAC8D504DCD02B09395019 (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, uint32_t ___seq0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___seq0;
		___seq0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		uint32_t L_1 = ___seq0;
		int32_t L_2 = __this->___SequenceBytes_8;
		___seq0 = ((int32_t)((int32_t)L_1&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, 8))&((int32_t)31))))), 1))));
		uint32_t L_3 = ___seq0;
		V_0 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		uint32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  uint32_t UdpPipeConfig_NextSequence_m10B2877BFFE7DC4580CAC8D504DCD02B09395019_AdjustorThunk (RuntimeObject* __this, uint32_t ___seq0, const RuntimeMethod* method)
{
	UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = UdpPipeConfig_NextSequence_m10B2877BFFE7DC4580CAC8D504DCD02B09395019(_thisAdjusted, ___seq0, method);
	return _returnValue;
}
// System.Int32 UdpKit.UdpPipeConfig::Distance(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPipeConfig_Distance_mC5DCF3EC94991D395AE7298AD247F4BFDDDF375D (UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* __this, uint32_t ___from0, uint32_t ___to1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___SequenceBytes_8;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(4, L_0)), 8));
		uint32_t L_1 = ___to1;
		int32_t L_2 = V_0;
		___to1 = ((int32_t)((int32_t)L_1<<((int32_t)(L_2&((int32_t)31)))));
		uint32_t L_3 = ___from0;
		int32_t L_4 = V_0;
		___from0 = ((int32_t)((int32_t)L_3<<((int32_t)(L_4&((int32_t)31)))));
		uint32_t L_5 = ___from0;
		uint32_t L_6 = ___to1;
		int32_t L_7 = V_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6))>>((int32_t)(L_7&((int32_t)31)))));
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t UdpPipeConfig_Distance_mC5DCF3EC94991D395AE7298AD247F4BFDDDF375D_AdjustorThunk (RuntimeObject* __this, uint32_t ___from0, uint32_t ___to1, const RuntimeMethod* method)
{
	UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpPipeConfig_tF74CB19B1DACE7A113D8F583B31A0A343E1A6EF3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UdpPipeConfig_Distance_mC5DCF3EC94991D395AE7298AD247F4BFDDDF375D(_thisAdjusted, ___from0, ___to1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 UdpKit.Utils.PrecisionTimer::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PrecisionTimer_GetCurrentTime_mAAD6A79E9242D0A994B553068ED836D38B8429DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	double V_1 = 0.0;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_0;
		L_0 = Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7(NULL);
		il2cpp_codegen_runtime_class_init_inline(PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var);
		int64_t L_1 = ((PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var))->___start_0;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_0, L_1));
		int64_t L_2 = V_0;
		double L_3 = ((PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var))->___freq_1;
		V_1 = ((double)il2cpp_codegen_multiply(((double)L_2), L_3));
		double L_4 = V_1;
		V_2 = il2cpp_codegen_cast_floating_point<uint32_t, int32_t, double>(((double)il2cpp_codegen_multiply(L_4, (1000.0))));
		goto IL_0025;
	}

IL_0025:
	{
		uint32_t L_5 = V_2;
		return L_5;
	}
}
// System.Void UdpKit.Utils.PrecisionTimer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrecisionTimer__cctor_mC6556B1218F80D13B5544C1FBBDB73DC92322E20 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_0;
		L_0 = Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7(NULL);
		((PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var))->___start_0 = L_0;
		int64_t L_1 = ((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var))->___Frequency_0;
		((PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var))->___freq_1 = ((double)((float)((1.0f)/((float)L_1))));
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
// System.Void UdpKit.Async.ThreadManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager__ctor_m231D5C32040CD91DA38B7BEA1016D4769E0D280F (ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1658CFDA197F3ED3A9B2EE1448FE6CD0EBFC3229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3566FD248C7472A96FF743981A36FACD9860797C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m35B8896ABA4970B1186DD7A6998B8FAE32B47FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m35B8896ABA4970B1186DD7A6998B8FAE32B47FC8(__this, Singleton_1__ctor_m35B8896ABA4970B1186DD7A6998B8FAE32B47FC8_RuntimeMethod_var);
		List_1_t3566FD248C7472A96FF743981A36FACD9860797C* L_0 = (List_1_t3566FD248C7472A96FF743981A36FACD9860797C*)il2cpp_codegen_object_new(List_1_t3566FD248C7472A96FF743981A36FACD9860797C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1658CFDA197F3ED3A9B2EE1448FE6CD0EBFC3229(L_0, List_1__ctor_m1658CFDA197F3ED3A9B2EE1448FE6CD0EBFC3229_RuntimeMethod_var);
		__this->____threads_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____threads_2), (void*)L_0);
		return;
	}
}
// System.Void UdpKit.Async.ThreadManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_Clear_mBA0B8920147771FD36C25FD3E9096C1927AA00DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m3A6566C95AF22704BDD55674E9443DC266A548AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE0E23C2F1B955D5F62ADEEFCCD43D741E32439FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD1F759A46C3B2D0E6F86058819D3DEED0C3525F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0005:
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* L_0;
		L_0 = Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D(Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_t3566FD248C7472A96FF743981A36FACD9860797C* L_1 = L_0->____threads_2;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* L_3;
		L_3 = List_1_get_Item_mD1F759A46C3B2D0E6F86058819D3DEED0C3525F1(L_1, L_2, List_1_get_Item_mD1F759A46C3B2D0E6F86058819D3DEED0C3525F1_RuntimeMethod_var);
		NullCheck(L_3);
		Task_Abort_mAB206358F091D0FF475635B6941E98A30E1CA82B(L_3, NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* L_6;
		L_6 = Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D(Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_t3566FD248C7472A96FF743981A36FACD9860797C* L_7 = L_6->____threads_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mE0E23C2F1B955D5F62ADEEFCCD43D741E32439FA_inline(L_7, List_1_get_Count_mE0E23C2F1B955D5F62ADEEFCCD43D741E32439FA_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* L_10;
		L_10 = Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D(Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_t3566FD248C7472A96FF743981A36FACD9860797C* L_11 = L_10->____threads_2;
		NullCheck(L_11);
		List_1_Clear_m3A6566C95AF22704BDD55674E9443DC266A548AB_inline(L_11, List_1_Clear_m3A6566C95AF22704BDD55674E9443DC266A548AB_RuntimeMethod_var);
		return;
	}
}
// System.String UdpKit.Async.ThreadManager::GetInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThreadManager_GetInfo_mA4D2E4DE41219D13DFDD944313D57F00B9D7C38B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisTask_tC3595A95675D7213729DD214E8E6B7B6FD08BE96_mA3A37B62513DAEE95CAAC02BC6687F99E06557B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE0E23C2F1B955D5F62ADEEFCCD43D741E32439FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetInfoU3Eb__3_0_m8B1AF3E65DCA43F609D10BB11CFBA39C1BAC98C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67C2F8FA7C0876F7D1E4A8622CE0F4C17BF4F4F2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D* G_B2_0 = NULL;
	List_1_t3566FD248C7472A96FF743981A36FACD9860797C* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D* G_B1_0 = NULL;
	List_1_t3566FD248C7472A96FF743981A36FACD9860797C* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* L_0;
		L_0 = Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D(Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_t3566FD248C7472A96FF743981A36FACD9860797C* L_1 = L_0->____threads_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mE0E23C2F1B955D5F62ADEEFCCD43D741E32439FA_inline(L_1, List_1_get_Count_mE0E23C2F1B955D5F62ADEEFCCD43D741E32439FA_RuntimeMethod_var);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* L_5;
		L_5 = Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D(Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_t3566FD248C7472A96FF743981A36FACD9860797C* L_6 = L_5->____threads_2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var);
		Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D* L_7 = ((U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D* L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_6;
		G_B1_2 = L_4;
		G_B1_3 = _stringLiteral67C2F8FA7C0876F7D1E4A8622CE0F4C17BF4F4F2;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_6;
			G_B2_2 = L_4;
			G_B2_3 = _stringLiteral67C2F8FA7C0876F7D1E4A8622CE0F4C17BF4F4F2;
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var);
		U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA* L_9 = ((U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D* L_10 = (Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D*)il2cpp_codegen_object_new(Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m6F1E7B137A0ABBB32226AB085416897B2D42FCDD(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CGetInfoU3Eb__3_0_m8B1AF3E65DCA43F609D10BB11CFBA39C1BAC98C7_RuntimeMethod_var), NULL);
		Func_2_tCF53EC26E0D7D99CDCB9BAB7C004075E07F8D00D* L_11 = L_10;
		((U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_11);
		G_B2_0 = L_11;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0043:
	{
		int32_t L_12;
		L_12 = Enumerable_Count_TisTask_tC3595A95675D7213729DD214E8E6B7B6FD08BE96_mA3A37B62513DAEE95CAAC02BC6687F99E06557B5(G_B2_1, G_B2_0, Enumerable_Count_TisTask_tC3595A95675D7213729DD214E8E6B7B6FD08BE96_mA3A37B62513DAEE95CAAC02BC6687F99E06557B5_RuntimeMethod_var);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(G_B2_3, G_B2_2, L_14, NULL);
		V_0 = L_15;
		goto IL_0055;
	}

IL_0055:
	{
		String_t* L_16 = V_0;
		return L_16;
	}
}
// System.Void UdpKit.Async.ThreadManager::Start(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_Start_m15F5617D027AAE7ABEDFACACBB78C552F0EA3322 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___run0, const RuntimeMethod* method) 
{
	{
		Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* L_0;
		L_0 = ThreadManager_FindTask_m4BA84020CED06103F6467354DFB485AFC508E087(NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___run0;
		NullCheck(L_0);
		Task_Run_m8CFC58BA2531E696AE38649F053BE11F27781A04(L_0, L_1, NULL);
		return;
	}
}
// UdpKit.Async.Task UdpKit.Async.ThreadManager::FindTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* ThreadManager_FindTask_m4BA84020CED06103F6467354DFB485AFC508E087 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m457746A1F27782558C1A2214F8AE7CC18E4EF1AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE0E23C2F1B955D5F62ADEEFCCD43D741E32439FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD1F759A46C3B2D0E6F86058819D3DEED0C3525F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7819E3CA05603139B97C2CBBCE0807A71707733);
		s_Il2CppMethodInitialized = true;
	}
	Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* V_3 = NULL;
	bool V_4 = false;
	{
		V_1 = 0;
		goto IL_0048;
	}

IL_0005:
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* L_0;
		L_0 = Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D(Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_t3566FD248C7472A96FF743981A36FACD9860797C* L_1 = L_0->____threads_2;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* L_3;
		L_3 = List_1_get_Item_mD1F759A46C3B2D0E6F86058819D3DEED0C3525F1(L_1, L_2, List_1_get_Item_mD1F759A46C3B2D0E6F86058819D3DEED0C3525F1_RuntimeMethod_var);
		V_0 = L_3;
		Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsRunning_m6A410B2908C7791223347F77392DF5E45C547BAA(L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Task_get_Name_m156554814700DB63A2275DDBC7D3F8C59097B6D3(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Debug_mD8C271E21EFA219C4984D5D7E6FFAE57DF6568B9(_stringLiteralA7819E3CA05603139B97C2CBBCE0807A71707733, L_8, NULL);
		Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* L_11 = V_0;
		V_3 = L_11;
		goto IL_007b;
	}

IL_0043:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		int32_t L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* L_14;
		L_14 = Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D(Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_t3566FD248C7472A96FF743981A36FACD9860797C* L_15 = L_14->____threads_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mE0E23C2F1B955D5F62ADEEFCCD43D741E32439FA_inline(L_15, List_1_get_Count_mE0E23C2F1B955D5F62ADEEFCCD43D741E32439FA_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0005;
		}
	}
	{
		Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* L_18 = (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96*)il2cpp_codegen_object_new(Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Task__ctor_m02BEEFCBB3FB06C89870CFC1A9C2DFFBFD1A4A2F(L_18, NULL);
		V_0 = L_18;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t51CEBCA82107B3C9E63A9A987B17CEEF344AD8C7_il2cpp_TypeInfo_var);
		ThreadManager_t2D87377E57D59171FE7DCC7AD62CF5B42B50BDDF* L_19;
		L_19 = Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D(Singleton_1_get_Instance_mDB8614359729D28E3B75729413D8637EDA8FAD4D_RuntimeMethod_var);
		NullCheck(L_19);
		List_1_t3566FD248C7472A96FF743981A36FACD9860797C* L_20 = L_19->____threads_2;
		Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* L_21 = V_0;
		NullCheck(L_20);
		List_1_Add_m457746A1F27782558C1A2214F8AE7CC18E4EF1AA_inline(L_20, L_21, List_1_Add_m457746A1F27782558C1A2214F8AE7CC18E4EF1AA_RuntimeMethod_var);
		Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* L_22 = V_0;
		V_3 = L_22;
		goto IL_007b;
	}

IL_007b:
	{
		Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* L_23 = V_3;
		return L_23;
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
// System.Void UdpKit.Async.ThreadManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m390612CCD88172A7269A31D69B04892CD8FE388D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA* L_0 = (U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA*)il2cpp_codegen_object_new(U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m394C988D402F3185034E9ECE0987B197B041E586(L_0, NULL);
		((U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UdpKit.Async.ThreadManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m394C988D402F3185034E9ECE0987B197B041E586 (U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UdpKit.Async.ThreadManager/<>c::<GetInfo>b__3_0(UdpKit.Async.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetInfoU3Eb__3_0_m8B1AF3E65DCA43F609D10BB11CFBA39C1BAC98C7 (U3CU3Ec_t013C29A70C8F852E9107ABE1959DBF01A972D2CA* __this, Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* ___thr0, const RuntimeMethod* method) 
{
	{
		Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* L_0 = ___thr0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsRunning_m6A410B2908C7791223347F77392DF5E45C547BAA(L_0, NULL);
		return L_1;
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
// System.Boolean UdpKit.Async.Task::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsRunning_m6A410B2908C7791223347F77392DF5E45C547BAA (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->____action_2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String UdpKit.Async.Task::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Task_get_Name_m156554814700DB63A2275DDBC7D3F8C59097B6D3 (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = __this->____thread_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		return L_2;
	}
}
// System.Void UdpKit.Async.Task::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_m02BEEFCBB3FB06C89870CFC1A9C2DFFBFD1A4A2F (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Runner_m1CB92345614D28226417293DF0DDB8EE2FCA38D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B2C73F7EA10C52FDDBCA98180CA215A7C6E5BFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____locker_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____locker_3), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____abort_4 = (bool)0;
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_1 = (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0*)il2cpp_codegen_object_new(AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AutoResetEvent__ctor_mB7C8CD30C5BE11A2C8DB79B27593CF0C5FE82ADE(L_1, (bool)0, NULL);
		__this->____event_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event_1), (void*)L_1);
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_2 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_2, __this, (intptr_t)((void*)Task_Runner_m1CB92345614D28226417293DF0DDB8EE2FCA38D5_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_3 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_3, L_2, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4 = L_3;
		NullCheck(L_4);
		Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30(L_4, (bool)1, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_5 = L_4;
		NullCheck(L_5);
		Thread_set_Priority_m3B0C22105EA0A8D7E210D3F53EF9649C59B1C297(L_5, 3, NULL);
		__this->____thread_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____thread_0), (void*)L_5);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_6 = __this->____thread_0;
		NullCheck(L_6);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9 = __this->____thread_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Debug_mD8C271E21EFA219C4984D5D7E6FFAE57DF6568B9(_stringLiteral6B2C73F7EA10C52FDDBCA98180CA215A7C6E5BFF, L_8, NULL);
		return;
	}
}
// System.Void UdpKit.Async.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Run_m8CFC58BA2531E696AE38649F053BE11F27781A04 (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->____locker_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___callback0;
			__this->____action_2 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____action_2), (void*)L_4);
			AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_5 = __this->____event_1;
			NullCheck(L_5);
			bool L_6;
			L_6 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_5, NULL);
			goto IL_0035;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		return;
	}
}
// System.Void UdpKit.Async.Task::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Abort_mAB206358F091D0FF475635B6941E98A30E1CA82B (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAB98FF5281EC31422DE5A5CE157DA1E26C28024);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = __this->____thread_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_2, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Debug_mD8C271E21EFA219C4984D5D7E6FFAE57DF6568B9(_stringLiteralBAB98FF5281EC31422DE5A5CE157DA1E26C28024, L_1, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____abort_4 = (bool)1;
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_6 = __this->____event_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_6, NULL);
		return;
	}
}
// System.Void UdpKit.Async.Task::ForceAbort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_ForceAbort_mA92B3A5A7276B86D164F1D360330D9F233233A4D (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E2BCEBFB909DEE624830C254D3DB8634403D7FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = __this->____thread_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_2, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Debug_mD8C271E21EFA219C4984D5D7E6FFAE57DF6568B9(_stringLiteral9E2BCEBFB909DEE624830C254D3DB8634403D7FF, L_1, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_6 = __this->____thread_0;
		NullCheck(L_6);
		Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941(L_6, NULL);
		return;
	}
}
// System.Void UdpKit.Async.Task::Runner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Runner_m1CB92345614D28226417293DF0DDB8EE2FCA38D5 (Task_tC3595A95675D7213729DD214E8E6B7B6FD08BE96* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			goto IL_0055_1;
		}

IL_0004_1:
		{
			AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_0 = __this->____event_1;
			NullCheck(L_0);
			bool L_1;
			L_1 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_0);
			RuntimeObject* L_2 = __this->____locker_3;
			V_0 = L_2;
			V_1 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0049_1:
				{// begin finally (depth: 2)
					{
						bool L_3 = V_1;
						if (!L_3)
						{
							goto IL_0053_1;
						}
					}
					{
						RuntimeObject* L_4 = V_0;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
					}

IL_0053_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					RuntimeObject* L_5 = V_0;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
					Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = __this->____action_2;
					V_2 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_7 = V_2;
					if (!L_7)
					{
						goto IL_0046_2;
					}
				}
				{
					Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = __this->____action_2;
					NullCheck(L_8);
					Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_8, NULL);
					__this->____action_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->____action_2), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
				}

IL_0046_2:
				{
					goto IL_0054_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0054_1:
		{
		}

IL_0055_1:
		{
			bool L_9 = __this->____abort_4;
			il2cpp_codegen_memory_barrier();
			V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
			bool L_10 = V_3;
			if (L_10)
			{
				goto IL_0004_1;
			}
		}
		{
			goto IL_00b7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0067;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadInterruptedException_t5F777BF218B009092789F6DA0013E4DC3A0987CC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008f;
		}
		throw e;
	}

CATCH_0067:
	{// begin catch(System.Threading.ThreadAbortException)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_13;
		L_13 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_13, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var)));
		UdpLog_Debug_mD8C271E21EFA219C4984D5D7E6FFAE57DF6568B9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C9E3DD0031E9445D597FB5AE988E551EB79A220)), L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b7;
	}// end catch (depth: 1)

CATCH_008f:
	{// begin catch(System.Threading.ThreadInterruptedException)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_19;
		L_19 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_19, NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var)));
		UdpLog_Debug_mD8C271E21EFA219C4984D5D7E6FFAE57DF6568B9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8035572F3DB7FCD9213A1B4F42C721B1EF6515FC)), L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b7;
	}// end catch (depth: 1)

IL_00b7:
	{
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
// System.Exception UdpKit.Security.UdpKitAccessException::GetBaseException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* UdpKitAccessException_GetBaseException_m147CEB6D56927BA0E9B2BD95C2F8C10F5E1C8518 (UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE* __this, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	{
		V_0 = __this;
		goto IL_0005;
	}

IL_0005:
	{
		Exception_t* L_0 = V_0;
		return L_0;
	}
}
// System.Collections.IDictionary UdpKit.Security.UdpKitAccessException::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UdpKitAccessException_get_Data_m8149D0C9D370D5F487C26147634B38D8C7F0B3C4 (UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		return L_0;
	}
}
// System.String UdpKit.Security.UdpKitAccessException::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpKitAccessException_get_Source_m6BBF20BC7FDA583E197DECB3BA58C51E68E5B121 (UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSourceU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void UdpKit.Security.UdpKitAccessException::set_Source(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpKitAccessException_set_Source_m879385AA62C0C8F781E32CE1DBB38FED07B65B0B (UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSourceU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSourceU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.String UdpKit.Security.UdpKitAccessException::get_StackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpKitAccessException_get_StackTrace_mB2BF221253B5C8FDB721917D21EF813D38F9E418 (UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.String UdpKit.Security.UdpKitAccessException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpKitAccessException_ToString_m9E1C061892D2FCB2F9D939A7D04DEFA1E58C9E54 (UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UdpKit.Security.UdpKitAccessException::get_HelpLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpKitAccessException_get_HelpLink_mDA50CD9E32C27625FBA9DC80400BC1AF26266F52 (UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CHelpLinkU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void UdpKit.Security.UdpKitAccessException::set_HelpLink(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpKitAccessException_set_HelpLink_m31F1BE1958678202072ADE4E52FC590DB3FA9C51 (UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CHelpLinkU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHelpLinkU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.String UdpKit.Security.UdpKitAccessException::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpKitAccessException_get_Message_mAEB043DDD5CB2332384FAC76C3832457FBCA45EF (UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89AAC66007654EE6C6CBB5EB419C7FF0A80EDECE);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral89AAC66007654EE6C6CBB5EB419C7FF0A80EDECE;
	}
}
// System.Void UdpKit.Security.UdpKitAccessException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpKitAccessException__ctor_mD8C0DDA052A05DADEFBF928B0891F7BCEBDA76B4 (UdpKitAccessException_tB4A8C113BCF0C2EE45D18B12736BA86A7596B9CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
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
// System.Int32 UdpKit.Security.HMACPacketValidator::get_Sha256ByteSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HMACPacketValidator_get_Sha256ByteSize_mB5F0BA934D10A8384043020777A3E197D7814A84 (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSha256ByteSizeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Security.Cryptography.HMACSHA256 UdpKit.Security.HMACPacketValidator::get_Hasher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* HMACPacketValidator_get_Hasher_mC7AB495AC61A1E05D91E588410369B5CDB45EBBB (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_0 = __this->____hasher_1;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_1 = __this->____hasher_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Security.Cryptography.HashAlgorithm::get_CanReuseTransform() */, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____secret_3;
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_5 = (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF*)il2cpp_codegen_object_new(HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5(L_5, L_4, NULL);
		__this->____hasher_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hasher_1), (void*)L_5);
	}

IL_0031:
	{
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_6 = __this->____hasher_1;
		V_1 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_7 = V_1;
		return L_7;
	}
}
// System.Void UdpKit.Security.HMACPacketValidator::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMACPacketValidator__ctor_mDB5E4F3E838B0A0B9147BF35961B72768432F2CA (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, String_t* ___secret0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CSha256ByteSizeU3Ek__BackingField_0 = ((int32_t)32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		__this->____tempArray_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tempArray_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_1 = ___secret0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_1, NULL);
		__this->____secret_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____secret_3), (void*)L_2);
		return;
	}
}
// System.Int32 UdpKit.Security.HMACPacketValidator::AppendHashToData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HMACPacketValidator_AppendHashToData_mDDC921DB38BACE0AFC4AF7C4A3E1BBAA422B5584 (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_0;
		L_0 = HMACPacketValidator_get_Hasher_mC7AB495AC61A1E05D91E588410369B5CDB45EBBB(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___length1;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = HashAlgorithm_ComputeHash_mFAB8CADA69B3BE03B1C974250EEC30ADF8805710(L_0, L_1, 0, L_2, NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____tempArray_2;
		Blit_Clear_m400A158206F8B02C55A1E83ED369718D66C323EF(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____tempArray_2;
		int32_t L_7 = ___length1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____tempArray_2;
		int32_t L_10 = ___length1;
		int32_t L_11;
		L_11 = HMACPacketValidator_get_Sha256ByteSize_mB5F0BA934D10A8384043020777A3E197D7814A84_inline(__this, NULL);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, L_10, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___buffer0;
		Blit_Clear_m400A158206F8B02C55A1E83ED369718D66C323EF(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____tempArray_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___buffer0;
		int32_t L_15 = ___length1;
		int32_t L_16;
		L_16 = HMACPacketValidator_get_Sha256ByteSize_mB5F0BA934D10A8384043020777A3E197D7814A84_inline(__this, NULL);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_13, 0, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_add(L_15, L_16)), NULL);
		int32_t L_17 = ___length1;
		int32_t L_18;
		L_18 = HMACPacketValidator_get_Sha256ByteSize_mB5F0BA934D10A8384043020777A3E197D7814A84_inline(__this, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		goto IL_006a;
	}

IL_006a:
	{
		int32_t L_19 = V_1;
		return L_19;
	}
}
// System.Boolean UdpKit.Security.HMACPacketValidator::ValidatePacket(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HMACPacketValidator_ValidatePacket_m26044CBF3C912067FAE67221E4928F193405CBAF (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	{
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_0;
		L_0 = HMACPacketValidator_get_Hasher_mC7AB495AC61A1E05D91E588410369B5CDB45EBBB(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___length1;
		int32_t L_3;
		L_3 = HMACPacketValidator_get_Sha256ByteSize_mB5F0BA934D10A8384043020777A3E197D7814A84_inline(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HashAlgorithm_ComputeHash_mFAB8CADA69B3BE03B1C974250EEC30ADF8805710(L_0, L_1, 0, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), NULL);
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____tempArray_2;
		Blit_Clear_m400A158206F8B02C55A1E83ED369718D66C323EF(L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer0;
		int32_t L_7 = ___length1;
		int32_t L_8;
		L_8 = HMACPacketValidator_get_Sha256ByteSize_mB5F0BA934D10A8384043020777A3E197D7814A84_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____tempArray_2;
		int32_t L_10;
		L_10 = HMACPacketValidator_get_Sha256ByteSize_mB5F0BA934D10A8384043020777A3E197D7814A84_inline(__this, NULL);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_subtract(L_7, L_8)), (RuntimeArray*)L_9, 0, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____tempArray_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		bool L_13;
		L_13 = HMACPacketValidator_TestHashes_m8D79729B3C7AE4F0D16F1227C0D78186EC3C30C7(__this, L_11, L_12, NULL);
		V_1 = L_13;
		goto IL_004f;
	}

IL_004f:
	{
		bool L_14 = V_1;
		return L_14;
	}
}
// System.Int32 UdpKit.Security.HMACPacketValidator::GetLengthWithoutHash(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HMACPacketValidator_GetLengthWithoutHash_m19EFF515A544E56753BEDBCE09ACC11081DC6AB8 (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___length1;
		int32_t L_1;
		L_1 = HMACPacketValidator_get_Sha256ByteSize_mB5F0BA934D10A8384043020777A3E197D7814A84_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UdpKit.Security.HMACPacketValidator::TestHashes(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HMACPacketValidator_TestHashes_m8D79729B3C7AE4F0D16F1227C0D78186EC3C30C7 (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hash1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___hash1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_001a;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0030;
	}

IL_001a:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001f:
	{
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = HMACPacketValidator_get_Sha256ByteSize_mB5F0BA934D10A8384043020777A3E197D7814A84_inline(__this, NULL);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0030;
	}

IL_0030:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Byte[] UdpKit.Security.HMACPacketValidator::GenerateSecret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HMACPacketValidator_GenerateSecret_m65E6E5F7D86D170ED7295F0756561964F1C1D1A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_1 = (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170*)il2cpp_codegen_object_new(RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09(L_1, NULL);
		V_1 = L_1;
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_2 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_2, L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		V_2 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		return L_5;
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
// System.Void UdpKit.Security.PacketIdValidator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketIdValidator__ctor_m86511EC77BAFE43EE7F71732DE62A9E45BE44CC6 (PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD7F244B8016ECAC45A1DB936C75C66FCB6672B55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mB41CD456F7CBBA7EABB80D3195140944345B306D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750_il2cpp_TypeInfo_var);
		Singleton_1__ctor_mB41CD456F7CBBA7EABB80D3195140944345B306D(__this, Singleton_1__ctor_mB41CD456F7CBBA7EABB80D3195140944345B306D_RuntimeMethod_var);
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F* L_0 = (&__this->____byteConverter_4);
		il2cpp_codegen_initobj(L_0, sizeof(UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F));
		Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* L_1 = (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696*)il2cpp_codegen_object_new(Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mD7F244B8016ECAC45A1DB936C75C66FCB6672B55(L_1, Dictionary_2__ctor_mD7F244B8016ECAC45A1DB936C75C66FCB6672B55_RuntimeMethod_var);
		__this->____packetIdsConnectionReceive_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____packetIdsConnectionReceive_2), (void*)L_1);
		Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* L_2 = (Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696*)il2cpp_codegen_object_new(Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mD7F244B8016ECAC45A1DB936C75C66FCB6672B55(L_2, Dictionary_2__ctor_mD7F244B8016ECAC45A1DB936C75C66FCB6672B55_RuntimeMethod_var);
		__this->____packetIdsConnectionSend_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____packetIdsConnectionSend_3), (void*)L_2);
		return;
	}
}
// System.Int32 UdpKit.Security.PacketIdValidator::PrefixPacketId(UdpKit.UdpEndPoint,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PacketIdValidator_PrefixPacketId_mA7894089128129B4A78ED42AFA9A7368CAFC7643 (PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endPoint0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m055C9530ACA3921872C3AC90EE57C61593F13B86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mEE7B51CDC140869B02C9DC66AA438DAE0705A69D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* L_0 = __this->____packetIdsConnectionSend_3;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = ___endPoint0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m055C9530ACA3921872C3AC90EE57C61593F13B86(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m055C9530ACA3921872C3AC90EE57C61593F13B86_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		V_0 = 0;
	}

IL_001a:
	{
		Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* L_4 = __this->____packetIdsConnectionSend_3;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_5 = ___endPoint0;
		uint32_t L_6 = V_0;
		NullCheck(L_4);
		Dictionary_2_set_Item_mEE7B51CDC140869B02C9DC66AA438DAE0705A69D(L_4, L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)), Dictionary_2_set_Item_mEE7B51CDC140869B02C9DC66AA438DAE0705A69D_RuntimeMethod_var);
		uint32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___buffer1;
		int32_t L_9 = ___length2;
		PacketIdValidator_PrefixIdToBuffer_m4C7508AB1AF3EE6FB2CB2CAE178F9594E3DFDEB9(__this, L_7, L_8, L_9, NULL);
		int32_t L_10 = ___length2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 4));
		goto IL_003a;
	}

IL_003a:
	{
		int32_t L_11 = V_2;
		return L_11;
	}
}
// System.Int32 UdpKit.Security.PacketIdValidator::ValidatePacketId(UdpKit.UdpEndPoint,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PacketIdValidator_ValidatePacketId_mA3872A870D6A56340638E83257F54A94F1EFE8CA (PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endPoint0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m055C9530ACA3921872C3AC90EE57C61593F13B86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mEE7B51CDC140869B02C9DC66AA438DAE0705A69D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t G_B3_0 = 0;
	{
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F* L_0 = (&__this->____byteConverter_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer1;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		L_0->___Byte0_9 = L_3;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F* L_4 = (&__this->____byteConverter_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer1;
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		L_4->___Byte1_10 = L_7;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F* L_8 = (&__this->____byteConverter_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer1;
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		L_8->___Byte2_11 = L_11;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F* L_12 = (&__this->____byteConverter_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___buffer1;
		NullCheck(L_13);
		int32_t L_14 = 3;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		L_12->___Byte3_12 = L_15;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F* L_16 = (&__this->____byteConverter_4);
		uint32_t L_17 = L_16->___Unsigned32_4;
		V_0 = L_17;
		Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* L_18 = __this->____packetIdsConnectionReceive_2;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_19 = ___endPoint0;
		NullCheck(L_18);
		bool L_20;
		L_20 = Dictionary_2_TryGetValue_m055C9530ACA3921872C3AC90EE57C61593F13B86(L_18, L_19, (&V_2), Dictionary_2_TryGetValue_m055C9530ACA3921872C3AC90EE57C61593F13B86_RuntimeMethod_var);
		V_1 = L_20;
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0060;
		}
	}
	{
		uint32_t L_22 = V_0;
		uint32_t L_23 = V_2;
		G_B3_0 = ((((int32_t)((!(((uint32_t)L_22) <= ((uint32_t)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B3_0 = 0;
	}

IL_0061:
	{
		V_3 = (bool)G_B3_0;
		bool L_24 = V_3;
		if (!L_24)
		{
			goto IL_006b;
		}
	}
	{
		V_4 = (-1);
		goto IL_008d;
	}

IL_006b:
	{
		Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* L_25 = __this->____packetIdsConnectionReceive_2;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_26 = ___endPoint0;
		uint32_t L_27 = V_0;
		NullCheck(L_25);
		Dictionary_2_set_Item_mEE7B51CDC140869B02C9DC66AA438DAE0705A69D(L_25, L_26, L_27, Dictionary_2_set_Item_mEE7B51CDC140869B02C9DC66AA438DAE0705A69D_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___buffer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___buffer1;
		int32_t L_30 = ___length2;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_28, 4, (RuntimeArray*)L_29, 0, ((int32_t)il2cpp_codegen_subtract(L_30, 4)), NULL);
		int32_t L_31 = ___length2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_31, 4));
		goto IL_008d;
	}

IL_008d:
	{
		int32_t L_32 = V_4;
		return L_32;
	}
}
// System.Void UdpKit.Security.PacketIdValidator::PrefixIdToBuffer(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketIdValidator_PrefixIdToBuffer_m4C7508AB1AF3EE6FB2CB2CAE178F9594E3DFDEB9 (PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* __this, uint32_t ___id0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer1;
		int32_t L_2 = ___length2;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 4, L_2, NULL);
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F* L_3 = (&__this->____byteConverter_4);
		uint32_t L_4 = ___id0;
		L_3->___Unsigned32_4 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer1;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F* L_6 = (&__this->____byteConverter_4);
		uint8_t L_7 = L_6->___Byte0_9;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___buffer1;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F* L_9 = (&__this->____byteConverter_4);
		uint8_t L_10 = L_9->___Byte1_10;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___buffer1;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F* L_12 = (&__this->____byteConverter_4);
		uint8_t L_13 = L_12->___Byte2_11;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___buffer1;
		UdpByteConverter_t36D838E7C3C660C1E2693644CD78401657474B5F* L_15 = (&__this->____byteConverter_4);
		uint8_t L_16 = L_15->___Byte3_12;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_16);
		return;
	}
}
// System.Void UdpKit.Security.PacketIdValidator::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketIdValidator_Clear_m0DAAD176BEA5AB9CE68CB78F022D2D74FE187190 (PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m954B9E240D25A0A5B142DF33BF6A756A92A8D444_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* L_0 = __this->____packetIdsConnectionReceive_2;
		NullCheck(L_0);
		Dictionary_2_Clear_m954B9E240D25A0A5B142DF33BF6A756A92A8D444(L_0, Dictionary_2_Clear_m954B9E240D25A0A5B142DF33BF6A756A92A8D444_RuntimeMethod_var);
		Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* L_1 = __this->____packetIdsConnectionSend_3;
		NullCheck(L_1);
		Dictionary_2_Clear_m954B9E240D25A0A5B142DF33BF6A756A92A8D444(L_1, Dictionary_2_Clear_m954B9E240D25A0A5B142DF33BF6A756A92A8D444_RuntimeMethod_var);
		return;
	}
}
// System.Void UdpKit.Security.PacketIdValidator::RemoveEndPointReference(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketIdValidator_RemoveEndPointReference_m463A0974F3F7F2ACD630B84CB8E2A3BB4451ABDA (PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9B0B29A65D105BC365BE482DF931A7C47D52A794_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* L_0 = __this->____packetIdsConnectionReceive_2;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = ___endPoint0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_m9B0B29A65D105BC365BE482DF931A7C47D52A794(L_0, L_1, Dictionary_2_Remove_m9B0B29A65D105BC365BE482DF931A7C47D52A794_RuntimeMethod_var);
		Dictionary_2_t9E0A557C85F32B0D2831F5042C455149D6B60696* L_3 = __this->____packetIdsConnectionSend_3;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_4 = ___endPoint0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m9B0B29A65D105BC365BE482DF931A7C47D52A794(L_3, L_4, Dictionary_2_Remove_m9B0B29A65D105BC365BE482DF931A7C47D52A794_RuntimeMethod_var);
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
// System.Security.Cryptography.ICryptoTransform UdpKit.Security.DataEncryptor::get_Decryptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataEncryptor_get_Decryptor_mA448B6D32215B4F97AFA8C85E32F833DA4D92A3B (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->____decryptor_2;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->____decryptor_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.Security.Cryptography.ICryptoTransform::get_CanReuseTransform() */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_4 = __this->____cryptoProvider_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____aesKey_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____aesIV_4;
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(25 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_4, L_5, L_6);
		__this->____decryptor_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____decryptor_2), (void*)L_7);
	}

IL_003d:
	{
		RuntimeObject* L_8 = __this->____decryptor_2;
		V_1 = L_8;
		goto IL_0046;
	}

IL_0046:
	{
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Security.Cryptography.ICryptoTransform UdpKit.Security.DataEncryptor::get_Encryptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataEncryptor_get_Encryptor_m7FA656EAD53C27CD6CEA3E9518E81F9AA69EC80F (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->____encryptor_1;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->____encryptor_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.Security.Cryptography.ICryptoTransform::get_CanReuseTransform() */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_4 = __this->____cryptoProvider_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____aesKey_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____aesIV_4;
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(23 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[]) */, L_4, L_5, L_6);
		__this->____encryptor_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____encryptor_1), (void*)L_7);
	}

IL_003d:
	{
		RuntimeObject* L_8 = __this->____encryptor_1;
		V_1 = L_8;
		goto IL_0046;
	}

IL_0046:
	{
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Byte[] UdpKit.Security.DataEncryptor::GetEncryptBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_GetEncryptBuffer_m577FCCEF9D077C4D5321B6823A87949607E5599B (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___encryptBuffer_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___encryptBuffer_5;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___encryptBuffer_5;
		V_0 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] UdpKit.Security.DataEncryptor::GetDecryptBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_GetDecryptBuffer_m39A20D9F82BA56F98BF82DDA6A3B58F1827F3081 (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___decryptBuffer_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___decryptBuffer_6;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___decryptBuffer_6;
		V_0 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Void UdpKit.Security.DataEncryptor::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEncryptor__ctor_m59FF1B769B3C803E874FE8C7870C97B5F3429673 (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, String_t* ___aesIV0, String_t* ___aesKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___aesIV0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_0, NULL);
		__this->____aesIV_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____aesIV_4), (void*)L_1);
		String_t* L_2 = ___aesKey1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_2, NULL);
		__this->____aesKey_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____aesKey_3), (void*)L_3);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_4;
		L_4 = DataEncryptor_BuildAesProvider_m63692AEE224F1E73664769C84AB122D9CC40D0D9(NULL);
		__this->____cryptoProvider_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cryptoProvider_0), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		__this->___encryptBuffer_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encryptBuffer_5), (void*)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		__this->___decryptBuffer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___decryptBuffer_6), (void*)L_6);
		return;
	}
}
// System.Int32 UdpKit.Security.DataEncryptor::EncryptData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataEncryptor_EncryptData_m92700F10C96031FC5D064F3E435ECCB3B3EEACCE (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___length1;
		RuntimeObject* L_2;
		L_2 = DataEncryptor_get_Encryptor_m7FA656EAD53C27CD6CEA3E9518E81F9AA69EC80F(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = DataEncryptor_GetEncryptBuffer_m577FCCEF9D077C4D5321B6823A87949607E5599B(__this, NULL);
		int32_t L_4;
		L_4 = DataEncryptor_CypherData_mAB2CEE7FB633F22D90D6730B5E25391175826078(__this, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Byte[] UdpKit.Security.DataEncryptor::EncryptDataAlloc(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_EncryptDataAlloc_mA414B89CDE403D0F8DFC4FDE50865EAD59FC0730 (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___length1;
		RuntimeObject* L_2;
		L_2 = DataEncryptor_get_Encryptor_m7FA656EAD53C27CD6CEA3E9518E81F9AA69EC80F(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = DataEncryptor_CypherDataAlloc_mE762871045D10E20779F57D248FF7E391C8E1A5F(__this, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UdpKit.Security.DataEncryptor::DecryptData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataEncryptor_DecryptData_mD6ABFE69DCD86A5D9D68586066CEEF8520CB46D5 (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___length1;
		RuntimeObject* L_2;
		L_2 = DataEncryptor_get_Decryptor_mA448B6D32215B4F97AFA8C85E32F833DA4D92A3B(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = DataEncryptor_GetDecryptBuffer_m39A20D9F82BA56F98BF82DDA6A3B58F1827F3081(__this, NULL);
		int32_t L_4;
		L_4 = DataEncryptor_CypherData_mAB2CEE7FB633F22D90D6730B5E25391175826078(__this, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Byte[] UdpKit.Security.DataEncryptor::DecryptDataAlloc(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_DecryptDataAlloc_m58537A3CB5251711BAECF3F274C09C3DBFB8D102 (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		int32_t L_1 = ___length1;
		RuntimeObject* L_2;
		L_2 = DataEncryptor_get_Decryptor_mA448B6D32215B4F97AFA8C85E32F833DA4D92A3B(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = DataEncryptor_CypherDataAlloc_mE762871045D10E20779F57D248FF7E391C8E1A5F(__this, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UdpKit.Security.DataEncryptor::CypherData(System.Byte[],System.Int32,System.Security.Cryptography.ICryptoTransform,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataEncryptor_CypherData_mAB2CEE7FB633F22D90D6730B5E25391175826078 (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, RuntimeObject* ___cryptoTransform2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___memoryBuffer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___memoryBuffer3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___memoryBuffer3;
		NullCheck(L_1);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MemoryStream__ctor_m55B1A846E0136865C4863E16D8B8002CB11296EE(L_2, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), (bool)1, (bool)1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					if (!L_3)
					{
						goto IL_005e;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
				RuntimeObject* L_6 = ___cryptoTransform2;
				CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_7 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_7, L_5, L_6, 1, NULL);
				V_1 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0047_1:
					{// begin finally (depth: 2)
						{
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_8 = V_1;
							if (!L_8)
							{
								goto IL_0051_1;
							}
						}
						{
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_9 = V_1;
							NullCheck(L_9);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
						}

IL_0051_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_10 = V_1;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___buffer0;
					int32_t L_12 = ___length1;
					NullCheck(L_10);
					VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, L_12);
					CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_13 = V_1;
					NullCheck(L_13);
					CryptoStream_FlushFinalBlock_m21F69C3EC538EB149CFBF9183650FF3A004E0D05(L_13, NULL);
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_0;
					NullCheck(L_14);
					int64_t L_15;
					L_15 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_14);
					___length1 = ((int32_t)L_15);
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_16 = V_0;
					NullCheck(L_16);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
					L_17 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(40 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_16);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___buffer0;
					int32_t L_19 = ___length1;
					Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, L_19, NULL);
					goto IL_0052_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0052_1:
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		int32_t L_20 = ___length1;
		V_2 = L_20;
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_21 = V_2;
		return L_21;
	}
}
// System.Byte[] UdpKit.Security.DataEncryptor::CypherDataAlloc(System.Byte[],System.Int32,System.Security.Cryptography.ICryptoTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_CypherDataAlloc_mE762871045D10E20779F57D248FF7E391C8E1A5F (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___length1, RuntimeObject* ___cryptoTransform2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_1 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_1 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_1;
					if (!L_1)
					{
						goto IL_0043;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_1;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_1;
				RuntimeObject* L_4 = ___cryptoTransform2;
				CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_5 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_5, L_3, L_4, 1, NULL);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_002c_1:
					{// begin finally (depth: 2)
						{
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_6 = V_2;
							if (!L_6)
							{
								goto IL_0036_1;
							}
						}
						{
							CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_7 = V_2;
							NullCheck(L_7);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
						}

IL_0036_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_8 = V_2;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer0;
					int32_t L_10 = ___length1;
					NullCheck(L_8);
					VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
					CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_11 = V_2;
					NullCheck(L_11);
					CryptoStream_FlushFinalBlock_m21F69C3EC538EB149CFBF9183650FF3A004E0D05(L_11, NULL);
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = V_1;
					NullCheck(L_12);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
					L_13 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(43 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_12);
					V_0 = L_13;
					goto IL_0037_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0037_1:
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		V_3 = L_14;
		goto IL_0048;
	}

IL_0048:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_3;
		return L_15;
	}
}
// System.Security.Cryptography.Aes UdpKit.Security.DataEncryptor::BuildAesProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* DataEncryptor_BuildAesProvider_m63692AEE224F1E73664769C84AB122D9CC40D0D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* V_0 = NULL;
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_0;
		L_0 = Aes_Create_m8E61A098683C7BBB8ADF0D030CA032317AE6F890(NULL);
		V_0 = L_0;
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_1 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_1, 1);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_2 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32) */, L_2, ((int32_t)256));
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_3 = V_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_4 = V_1;
		return L_4;
	}
}
// System.Byte[] UdpKit.Security.DataEncryptor::GenerateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_GenerateKey_m7A98D9654208BF63EB2573501E798C135863AA7F (const RuntimeMethod* method) 
{
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_0;
		L_0 = DataEncryptor_BuildAesProvider_m63692AEE224F1E73664769C84AB122D9CC40D0D9(NULL);
		V_0 = L_0;
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_1 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(26 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey() */, L_1);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_2 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_2);
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		return L_4;
	}
}
// System.Byte[] UdpKit.Security.DataEncryptor::GenerateIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataEncryptor_GenerateIV_m8BF8C3F8882F0C213BEC7B9093C99D66E7E63DAD (const RuntimeMethod* method) 
{
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_0;
		L_0 = DataEncryptor_BuildAesProvider_m63692AEE224F1E73664769C84AB122D9CC40D0D9(NULL);
		V_0 = L_0;
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_1 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(27 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV() */, L_1);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_2 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_2);
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		return L_4;
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
// System.Boolean UdpKit.Security.EncryptionManager::get_Ready()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncryptionManager_get_Ready_m2ED08826725FFC58E3257D6684FA1FF722B1BB08 (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* L_0 = __this->____encryptor_2;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = __this->____packetValidator_3;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = __this->____idValidator_4;
		G_B4_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.String UdpKit.Security.EncryptionManager::get_AesIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncryptionManager_get_AesIV_m0F55CFAF73092A169B6522AD3327CA2E733E26A1 (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A3D8496ED45F8B7F733D08A45DDB67864B22281);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = __this->____aesIV_5;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(_stringLiteral3A3D8496ED45F8B7F733D08A45DDB67864B22281, L_3, NULL);
	}

IL_0022:
	{
		String_t* L_4 = __this->____aesIV_5;
		V_1 = L_4;
		goto IL_002b;
	}

IL_002b:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.String UdpKit.Security.EncryptionManager::get_AesKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncryptionManager_get_AesKey_m58974EE16230FA6AAB233AEA0B5922F22FFE7C61 (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2EC16EFED1759A3EC0CCF305F9E206CAB86636C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = __this->____aesKey_6;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(_stringLiteralB2EC16EFED1759A3EC0CCF305F9E206CAB86636C, L_3, NULL);
	}

IL_0022:
	{
		String_t* L_4 = __this->____aesKey_6;
		V_1 = L_4;
		goto IL_002b;
	}

IL_002b:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.String UdpKit.Security.EncryptionManager::get_HashSecret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncryptionManager_get_HashSecret_m5EDC5829654947EEE4D37BAA7E5C63024BBD94D5 (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCC4344B0995FE62CAF0D106E7776998F1327BFB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = __this->____hashSecret_7;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(_stringLiteralDCC4344B0995FE62CAF0D106E7776998F1327BFB, L_3, NULL);
	}

IL_0022:
	{
		String_t* L_4 = __this->____hashSecret_7;
		V_1 = L_4;
		goto IL_002b;
	}

IL_002b:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Void UdpKit.Security.EncryptionManager::InitializeEncryption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptionManager_InitializeEncryption_m716E8F9A4438890084E820BA3A41BFDC82A7E6D4 (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = EncryptionManager_GenerateAesIV_m73C1411625AA651AFFE4345F2518BABA787C67BB(NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = EncryptionManager_GenerateAesKey_mA7457CC1FBFC83BF7CA569C315F906C5DF652F59(NULL);
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = EncryptionManager_GenerateHashSecret_m282D92B62ADF2D1FCE6728F6F259E5058D702EBA(NULL);
		V_2 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_3, NULL);
		V_3 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		String_t* L_6;
		L_6 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_5, NULL);
		V_4 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		String_t* L_8;
		L_8 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_7, NULL);
		V_5 = L_8;
		String_t* L_9 = V_3;
		String_t* L_10 = V_4;
		String_t* L_11 = V_5;
		EncryptionManager_InitializeEncryption_mFC765B1F89BFEFD082F1344683E780692F28135C(__this, L_9, L_10, L_11, NULL);
		return;
	}
}
// System.Void UdpKit.Security.EncryptionManager::InitializeEncryption(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptionManager_InitializeEncryption_mFC765B1F89BFEFD082F1344683E780692F28135C (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, String_t* ___aesIV0, String_t* ___aesKey1, String_t* ___hashSecret2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m142D6F43166E015DE8E9C35AC33895549243949F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F2E2F1EE9286962C8AD606E27011FD64A21875);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A29931955BE4B1DE5B9A0EA16BACD1D727B0FB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9DED19749A48661A81474DE4485C2452F386245);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		String_t* L_0 = ___aesIV0;
		__this->____aesIV_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____aesIV_5), (void*)L_0);
		String_t* L_1 = ___aesKey1;
		__this->____aesKey_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____aesKey_6), (void*)L_1);
		String_t* L_2 = ___hashSecret2;
		__this->____hashSecret_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashSecret_7), (void*)L_2);
		String_t* L_3 = __this->____aesIV_5;
		String_t* L_4 = __this->____aesKey_6;
		DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* L_5 = (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2*)il2cpp_codegen_object_new(DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		DataEncryptor__ctor_m59FF1B769B3C803E874FE8C7870C97B5F3429673(L_5, L_3, L_4, NULL);
		__this->____encryptor_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____encryptor_2), (void*)L_5);
		String_t* L_6 = __this->____hashSecret_7;
		HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* L_7 = (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D*)il2cpp_codegen_object_new(HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		HMACPacketValidator__ctor_mDB5E4F3E838B0A0B9147BF35961B72768432F2CA(L_7, L_6, NULL);
		__this->____packetValidator_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____packetValidator_3), (void*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750_il2cpp_TypeInfo_var);
		PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* L_8;
		L_8 = Singleton_1_get_Instance_m142D6F43166E015DE8E9C35AC33895549243949F(Singleton_1_get_Instance_m142D6F43166E015DE8E9C35AC33895549243949F_RuntimeMethod_var);
		__this->____idValidator_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____idValidator_4), (void*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		bool L_11;
		L_11 = EncryptionManager_get_Ready_m2ED08826725FFC58E3257D6684FA1FF722B1BB08(__this, NULL);
		G_B1_0 = 0;
		G_B1_1 = L_10;
		G_B1_2 = L_10;
		G_B1_3 = _stringLiteral5A29931955BE4B1DE5B9A0EA16BACD1D727B0FB6;
		if (L_11)
		{
			G_B2_0 = 0;
			G_B2_1 = L_10;
			G_B2_2 = L_10;
			G_B2_3 = _stringLiteral5A29931955BE4B1DE5B9A0EA16BACD1D727B0FB6;
			goto IL_0065;
		}
	}
	{
		G_B3_0 = _stringLiteral41F2E2F1EE9286962C8AD606E27011FD64A21875;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_006a;
	}

IL_0065:
	{
		G_B3_0 = _stringLiteralC9DED19749A48661A81474DE4485C2452F386245;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_006a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(G_B3_4, G_B3_3, NULL);
		return;
	}
}
// System.Void UdpKit.Security.EncryptionManager::DeinitializeEncryption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptionManager_DeinitializeEncryption_m879843325BF61DFE4623D3A158542CABD1AB67CA (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m142D6F43166E015DE8E9C35AC33895549243949F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____encryptor_2 = (DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____encryptor_2), (void*)(DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2*)NULL);
		__this->____packetValidator_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____packetValidator_3), (void*)(RuntimeObject*)NULL);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tC6323271EE16CCD71151E1EE77B2042C13F69750_il2cpp_TypeInfo_var);
		PacketIdValidator_t662340F77D525F917057197ED1F5FA05D97D2307* L_0;
		L_0 = Singleton_1_get_Instance_m142D6F43166E015DE8E9C35AC33895549243949F(Singleton_1_get_Instance_m142D6F43166E015DE8E9C35AC33895549243949F_RuntimeMethod_var);
		NullCheck(L_0);
		PacketIdValidator_Clear_m0DAAD176BEA5AB9CE68CB78F022D2D74FE187190(L_0, NULL);
		__this->____idValidator_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____idValidator_4), (void*)(RuntimeObject*)NULL);
		return;
	}
}
// System.Int32 UdpKit.Security.EncryptionManager::Encrypt(UdpKit.UdpEndPoint,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptionManager_Encrypt_m30152E0917B958FC0C3A8B73ACC3E776ED96693D (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endPoint0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPacketHashValidator_t76D4B3F33706BEC473B4C6A898332969983BBCDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPacketIdValidator_t429364E8BB5C9A3C75F648F354DF0BEDFA5E82E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BA85D855893B4A32221FB972E17A80D48204CA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		bool L_0;
		L_0 = EncryptionManager_get_Ready_m2ED08826725FFC58E3257D6684FA1FF722B1BB08(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(_stringLiteral52BA85D855893B4A32221FB972E17A80D48204CA, L_2, NULL);
		V_1 = (-1);
		goto IL_0055;
	}

IL_0023:
	{
		RuntimeObject* L_3 = __this->____idValidator_4;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_4 = ___endPoint0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer1;
		int32_t L_6 = ___length2;
		NullCheck(L_3);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker3< int32_t, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(0 /* System.Int32 UdpKit.Security.IPacketIdValidator::PrefixPacketId(UdpKit.UdpEndPoint,System.Byte[],System.Int32) */, IPacketIdValidator_t429364E8BB5C9A3C75F648F354DF0BEDFA5E82E1_il2cpp_TypeInfo_var, L_3, L_4, L_5, L_6);
		___length2 = L_7;
		RuntimeObject* L_8 = __this->____packetValidator_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer1;
		int32_t L_10 = ___length2;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(0 /* System.Int32 UdpKit.Security.IPacketHashValidator::AppendHashToData(System.Byte[],System.Int32) */, IPacketHashValidator_t76D4B3F33706BEC473B4C6A898332969983BBCDE_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		___length2 = L_11;
		DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* L_12 = __this->____encryptor_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___buffer1;
		int32_t L_14 = ___length2;
		NullCheck(L_12);
		int32_t L_15;
		L_15 = DataEncryptor_EncryptData_m92700F10C96031FC5D064F3E435ECCB3B3EEACCE(L_12, L_13, L_14, NULL);
		___length2 = L_15;
		int32_t L_16 = ___length2;
		V_1 = L_16;
		goto IL_0055;
	}

IL_0055:
	{
		int32_t L_17 = V_1;
		return L_17;
	}
}
// System.Int32 UdpKit.Security.EncryptionManager::Decrypt(UdpKit.UdpEndPoint,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptionManager_Decrypt_m58B1C7938BA2F42F46B12E3178531ADA49CAEC8A (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endPoint0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPacketHashValidator_t76D4B3F33706BEC473B4C6A898332969983BBCDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPacketIdValidator_t429364E8BB5C9A3C75F648F354DF0BEDFA5E82E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1575EAC6305E2A6FD42D16AB0997AA92E2C27309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD14484D82C832BA196348AFB4A8AE48E67CD3D9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1CFF0116E1DE5648ACE0C71BF0D98682397CE44);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0;
		L_0 = EncryptionManager_get_Ready_m2ED08826725FFC58E3257D6684FA1FF722B1BB08(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(_stringLiteralD14484D82C832BA196348AFB4A8AE48E67CD3D9E, L_2, NULL);
		V_1 = (-1);
		goto IL_009b;
	}

IL_0023:
	{
		DataEncryptor_t4D092B4FEEB67279B1E9B230018A8A46A48B15C2* L_3 = __this->____encryptor_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___buffer1;
		int32_t L_5 = ___length2;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = DataEncryptor_DecryptData_mD6ABFE69DCD86A5D9D68586066CEEF8520CB46D5(L_3, L_4, L_5, NULL);
		___length2 = L_6;
		RuntimeObject* L_7 = __this->____packetValidator_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___buffer1;
		int32_t L_9 = ___length2;
		NullCheck(L_7);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(1 /* System.Boolean UdpKit.Security.IPacketHashValidator::ValidatePacket(System.Byte[],System.Int32) */, IPacketHashValidator_t76D4B3F33706BEC473B4C6A898332969983BBCDE_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(_stringLiteralE1CFF0116E1DE5648ACE0C71BF0D98682397CE44, L_12, NULL);
		V_1 = (-1);
		goto IL_009b;
	}

IL_005b:
	{
		RuntimeObject* L_13 = __this->____idValidator_4;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_14 = ___endPoint0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___buffer1;
		int32_t L_16 = ___length2;
		NullCheck(L_13);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker3< int32_t, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(1 /* System.Int32 UdpKit.Security.IPacketIdValidator::ValidatePacketId(UdpKit.UdpEndPoint,System.Byte[],System.Int32) */, IPacketIdValidator_t429364E8BB5C9A3C75F648F354DF0BEDFA5E82E1_il2cpp_TypeInfo_var, L_13, L_14, L_15, L_16);
		___length2 = L_17;
		int32_t L_18 = ___length2;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)(-1)))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20;
		L_20 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(_stringLiteral1575EAC6305E2A6FD42D16AB0997AA92E2C27309, L_20, NULL);
		V_1 = (-1);
		goto IL_009b;
	}

IL_0088:
	{
		RuntimeObject* L_21 = __this->____packetValidator_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___buffer1;
		int32_t L_23 = ___length2;
		NullCheck(L_21);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(2 /* System.Int32 UdpKit.Security.IPacketHashValidator::GetLengthWithoutHash(System.Byte[],System.Int32) */, IPacketHashValidator_t76D4B3F33706BEC473B4C6A898332969983BBCDE_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		___length2 = L_24;
		int32_t L_25 = ___length2;
		V_1 = L_25;
		goto IL_009b;
	}

IL_009b:
	{
		int32_t L_26 = V_1;
		return L_26;
	}
}
// System.Void UdpKit.Security.EncryptionManager::RemoveEndPointReference(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptionManager_RemoveEndPointReference_m573CFFF4B8AC44FCA60A93B1E3FCD6EC4FE2E6BE (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___udpEndPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPacketIdValidator_t429364E8BB5C9A3C75F648F354DF0BEDFA5E82E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = EncryptionManager_get_Ready_m2ED08826725FFC58E3257D6684FA1FF722B1BB08(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = __this->____idValidator_4;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_3 = ___udpEndPoint0;
		NullCheck(L_2);
		InterfaceActionInvoker1< UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 >::Invoke(2 /* System.Void UdpKit.Security.IPacketIdValidator::RemoveEndPointReference(UdpKit.UdpEndPoint) */, IPacketIdValidator_t429364E8BB5C9A3C75F648F354DF0BEDFA5E82E1_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_001a:
	{
		return;
	}
}
// System.String UdpKit.Security.EncryptionManager::Base64Encode(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncryptionManager_Base64Encode_mF7484A76C7C43276A28DE3DFE99C6C8E7D8DABF0 (String_t* ___plainText0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ___encoding1;
		String_t* L_1 = ___plainText0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(20 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_3, NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.String UdpKit.Security.EncryptionManager::Base64Decode(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncryptionManager_Base64Decode_mB68F4D819DACD69F9E9C47C9E443587A2278DA9B (String_t* ___base64EncodedData0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___base64EncodedData0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_0, NULL);
		V_0 = L_1;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2 = ___encoding1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Byte[] UdpKit.Security.EncryptionManager::GenerateAesKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptionManager_GenerateAesKey_mA7457CC1FBFC83BF7CA569C315F906C5DF652F59 (const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = DataEncryptor_GenerateKey_m7A98D9654208BF63EB2573501E798C135863AA7F(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UdpKit.Security.EncryptionManager::GenerateAesIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptionManager_GenerateAesIV_m73C1411625AA651AFFE4345F2518BABA787C67BB (const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = DataEncryptor_GenerateIV_m8BF8C3F8882F0C213BEC7B9093C99D66E7E63DAD(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UdpKit.Security.EncryptionManager::GenerateHashSecret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncryptionManager_GenerateHashSecret_m282D92B62ADF2D1FCE6728F6F259E5058D702EBA (const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = HMACPacketValidator_GenerateSecret_m65E6E5F7D86D170ED7295F0756561964F1C1D1A3(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.Security.EncryptionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptionManager__ctor_mBCD7CF945CC0E5B84D6DF304D9927F629BCC2039 (EncryptionManager_t52A9491111BBC388CC5E830B4A0E6189A5DBA4CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m2CE0E1A87632D460E4E43378587BD2A842413B5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t06B9B5A2DC38EE9BD6BEBE6F1EEB4FEEA87767FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t06B9B5A2DC38EE9BD6BEBE6F1EEB4FEEA87767FF_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m2CE0E1A87632D460E4E43378587BD2A842413B5A(__this, Singleton_1__ctor_m2CE0E1A87632D460E4E43378587BD2A842413B5A_RuntimeMethod_var);
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
// UdpKit.Platform.UdpPlatform UdpKit.Protocol.ProtocolClient::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* ProtocolClient_get_Platform_mDD30C179BD401D68F415A2D210E503976B5A6765 (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, const RuntimeMethod* method) 
{
	UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* V_0 = NULL;
	{
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_0 = __this->___Socket_5;
		NullCheck(L_0);
		UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* L_1;
		L_1 = VirtualFuncInvoker0< UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* >::Invoke(9 /* UdpKit.Platform.UdpPlatform UdpKit.Platform.UdpPlatformSocket::get_Platform() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* L_2 = V_0;
		return L_2;
	}
}
// System.Void UdpKit.Protocol.ProtocolClient::.ctor(UdpKit.Platform.UdpPlatformSocket,System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolClient__ctor_mA403600A45B197BBA2C84C9C99A443531802E992 (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* ___socket0, Guid_t ___gameId1, Guid_t ___peerId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1BED02A8AE99408DF357364EEC5D305859723610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAA9DD8FF2B74631A640FB981681DF0D72B11FD7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCB7668B11360C26134011F8753D11ECAA36637E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE8CB8748CDE33865540F8E83BB39578F74011396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___Buffer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Buffer_4), (void*)L_0);
		Guid_t L_1 = ___gameId1;
		Guid_t L_2 = ___peerId2;
		il2cpp_codegen_runtime_class_init_inline(Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var);
		Context__ctor_mBB26675035269A4C81CB6434C21DC68135AADCDA(__this, L_1, L_2, NULL);
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_3 = ___socket0;
		__this->___Socket_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Socket_5), (void*)L_3);
		List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* L_4 = (List_1_tE8CB8748CDE33865540F8E83BB39578F74011396*)il2cpp_codegen_object_new(List_1_tE8CB8748CDE33865540F8E83BB39578F74011396_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mCB7668B11360C26134011F8753D11ECAA36637E6(L_4, List_1__ctor_mCB7668B11360C26134011F8753D11ECAA36637E6_RuntimeMethod_var);
		__this->___Queries_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Queries_6), (void*)L_4);
		Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08* L_5 = (Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08*)il2cpp_codegen_object_new(Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m1BED02A8AE99408DF357364EEC5D305859723610(L_5, Dictionary_2__ctor_m1BED02A8AE99408DF357364EEC5D305859723610_RuntimeMethod_var);
		__this->___Callbacks_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Callbacks_8), (void*)L_5);
		Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED* L_6 = (Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED*)il2cpp_codegen_object_new(Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_mAA9DD8FF2B74631A640FB981681DF0D72B11FD7F(L_6, Dictionary_2__ctor_mAA9DD8FF2B74631A640FB981681DF0D72B11FD7F_RuntimeMethod_var);
		__this->___Handlers_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Handlers_7), (void*)L_6);
		return;
	}
}
// System.Void UdpKit.Protocol.ProtocolClient::Update(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolClient_Update_m17B7EC82AC034C490E8B8343BDB7D3640B7CFB25 (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, uint32_t ___now0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m36BBBAA6F4456C820A24A87E8D9B4311206344BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* V_1 = NULL;
	bool V_2 = false;
	AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		goto IL_00a5;
	}

IL_0008:
	{
		List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* L_0 = __this->___Queries_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_2;
		L_2 = List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF(L_0, L_1, List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF_RuntimeMethod_var);
		V_1 = L_2;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_3 = V_1;
		NullCheck(L_3);
		uint32_t L_4 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_3)->___Timeout_11;
		uint32_t L_5 = ___now0;
		V_2 = (bool)((!(((uint32_t)L_4) >= ((uint32_t)L_5)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00a0;
		}
	}
	{
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UdpKit.Protocol.Query::get_Resend() */, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_9 = V_1;
		NullCheck(L_9);
		uint32_t L_10 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_9)->___Attempts_12;
		G_B5_0 = ((!(((uint32_t)L_10) >= ((uint32_t)((int32_t)10))))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 0;
	}

IL_0039:
	{
		V_4 = (bool)G_B5_0;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_12 = V_1;
		bool L_13;
		L_13 = ProtocolClient_GetValidCallback_m4B71CB79C2CA063F3A1D6728EAF63A3D47883ECD(__this, L_12, (&V_3), NULL);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0061;
		}
	}
	{
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_15 = V_1;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_16 = V_1;
		NullCheck(L_16);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_17 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_16)->___Target_9;
		ProtocolClient_Send_m61220806CF2FB810DBB5554425C525B4A85FC3BA(__this, L_15, L_17, NULL);
		goto IL_006c;
	}

IL_0061:
	{
		ProtocolClient_RemoveQueryAt_mC5CDBA96CFB27502286F7920A8899A94286092EE(__this, (&V_0), NULL);
	}

IL_006c:
	{
		goto IL_009f;
	}

IL_006f:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{// begin finally (depth: 1)
				ProtocolClient_RemoveQueryAt_mC5CDBA96CFB27502286F7920A8899A94286092EE(__this, (&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_18 = V_1;
				bool L_19;
				L_19 = ProtocolClient_GetValidCallback_m4B71CB79C2CA063F3A1D6728EAF63A3D47883ECD(__this, L_18, (&V_3), NULL);
				V_6 = L_19;
				bool L_20 = V_6;
				if (!L_20)
				{
					goto IL_008f_1;
				}
			}
			{
				AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894 L_21 = V_3;
				Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1* L_22 = L_21.___Action_1;
				Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_23 = V_1;
				NullCheck(L_22);
				Action_1_Invoke_mB9A9302F4DF1DEE8B187A68A8540D5E97DFF1BF8_inline(L_22, L_23, NULL);
			}

IL_008f_1:
			{
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
	}

IL_009f:
	{
	}

IL_00a0:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00a5:
	{
		int32_t L_25 = V_0;
		List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* L_26 = __this->___Queries_6;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m36BBBAA6F4456C820A24A87E8D9B4311206344BE_inline(L_26, List_1_get_Count_m36BBBAA6F4456C820A24A87E8D9B4311206344BE_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_7;
		if (L_28)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void UdpKit.Protocol.ProtocolClient::RemoveQueryAt(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolClient_RemoveQueryAt_mC5CDBA96CFB27502286F7920A8899A94286092EE (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, int32_t* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m8AA246717A34DB4A07A48D7C75E67CF1F9A5584E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* L_0 = __this->___Queries_6;
		int32_t* L_1 = ___i0;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		List_1_RemoveAt_m8AA246717A34DB4A07A48D7C75E67CF1F9A5584E(L_0, L_2, List_1_RemoveAt_m8AA246717A34DB4A07A48D7C75E67CF1F9A5584E_RuntimeMethod_var);
		int32_t* L_3 = ___i0;
		int32_t* L_4 = ___i0;
		int32_t L_5 = *((int32_t*)L_4);
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1));
		return;
	}
}
// System.Boolean UdpKit.Protocol.ProtocolClient::GetValidCallback(UdpKit.Protocol.Query,UdpKit.Protocol.ProtocolClient/AckCallback&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProtocolClient_GetValidCallback_m4B71CB79C2CA063F3A1D6728EAF63A3D47883ECD (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* ___qry0, AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mCF0F0FE626965D3605DEDABE1FCD556A21F63AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Dictionary_2_tCF658C41E77D0171C72BD4BECE2A2F8DE64D6C08* L_0 = __this->___Callbacks_8;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_1 = ___qry0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894* L_3 = ___callback1;
		NullCheck(L_0);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mCF0F0FE626965D3605DEDABE1FCD556A21F63AF6(L_0, L_2, L_3, Dictionary_2_TryGetValue_mCF0F0FE626965D3605DEDABE1FCD556A21F63AF6_RuntimeMethod_var);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894* L_6 = ___callback1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_7 = L_6->___Filter_0;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_8 = ___qry0;
		NullCheck(L_8);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_9 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_8)->___Target_9;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_10;
		L_10 = UdpEndPoint_op_BitwiseAnd_m8EB8B9BA635C7ADAB18979319D81CABE90204A62(L_7, L_9, NULL);
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_11 = ___qry0;
		NullCheck(L_11);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_12 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_11)->___Target_9;
		bool L_13;
		L_13 = UdpEndPoint_op_Equality_m7ABD6588A196A62B9E94DF687A4ED7ED2A2FD591(L_10, L_12, NULL);
		V_1 = L_13;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_003d;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0042;
	}

IL_003d:
	{
	}

IL_003e:
	{
		V_2 = (bool)0;
		goto IL_0042;
	}

IL_0042:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Boolean UdpKit.Protocol.ProtocolClient::GetValidHandler(UdpKit.Protocol.Message,UdpKit.Protocol.ProtocolClient/MsgHandler&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProtocolClient_GetValidHandler_mBBB63895815626FBBA0C0EEB340FDCDA4348E031 (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* ___msg0, MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67* ___handler1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4E1B5DDDBEC79D0FB23387EE1749AB6C347CF018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Dictionary_2_t52ADC0A16EDEEA74679FABEBDA774A41706E7DED* L_0 = __this->___Handlers_7;
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_1 = ___msg0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67* L_3 = ___handler1;
		NullCheck(L_0);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m4E1B5DDDBEC79D0FB23387EE1749AB6C347CF018(L_0, L_2, L_3, Dictionary_2_TryGetValue_m4E1B5DDDBEC79D0FB23387EE1749AB6C347CF018_RuntimeMethod_var);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67* L_6 = ___handler1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_7 = L_6->___Filter_0;
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_8 = ___msg0;
		NullCheck(L_8);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_9 = L_8->___Sender_8;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_10;
		L_10 = UdpEndPoint_op_BitwiseAnd_m8EB8B9BA635C7ADAB18979319D81CABE90204A62(L_7, L_9, NULL);
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_11 = ___msg0;
		NullCheck(L_11);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_12 = L_11->___Sender_8;
		bool L_13;
		L_13 = UdpEndPoint_op_Equality_m7ABD6588A196A62B9E94DF687A4ED7ED2A2FD591(L_10, L_12, NULL);
		V_1 = L_13;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_003d;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0042;
	}

IL_003d:
	{
	}

IL_003e:
	{
		V_2 = (bool)0;
		goto IL_0042;
	}

IL_0042:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Void UdpKit.Protocol.ProtocolClient::Recv(UdpKit.UdpEndPoint,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolClient_Recv_m6D1D2E7592F9DD9437ECE116CE58203949C52306 (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E44393B60329F6A427962664DC8FBCD2AF8E94F);
		s_Il2CppMethodInitialized = true;
	}
	Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* V_0 = NULL;
	bool V_1 = false;
	MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer1;
			Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_1;
			L_1 = Context_ParseMessage_mB6571FB38411991C79E68A23D5C7D90C4CCE7C42(__this, L_0, (&___offset2), NULL);
			V_0 = L_1;
			Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_2 = V_0;
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_3 = ___endpoint0;
			NullCheck(L_2);
			L_2->___Sender_8 = L_3;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
			Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_6 = V_0;
			NullCheck(L_6);
			Type_t* L_7;
			L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_6, NULL);
			NullCheck(L_7);
			String_t* L_8;
			L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
			NullCheck(L_5);
			ArrayElementTypeCheck (L_5, L_8);
			(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_10 = ___endpoint0;
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_11 = L_10;
			RuntimeObject* L_12 = Box(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var, &L_11);
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, L_12);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
			il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
			UdpLog_Info_m43C0EB22B6BD6E9FEB4AD3E45A0E767CE1DE2E0B(_stringLiteral8E44393B60329F6A427962664DC8FBCD2AF8E94F, L_9, NULL);
			Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_13 = V_0;
			V_1 = (bool)((!(((RuntimeObject*)(Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F*)((Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F*)IsInstClass((RuntimeObject*)L_13, Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_14 = V_1;
			if (!L_14)
			{
				goto IL_0059_1;
			}
		}
		{
			Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_15 = V_0;
			ProtocolClient_QueryResult_m186AFAE0A51A00A4FC4358DAD27969EC80F8F0FB(__this, ((Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F*)IsInstClass((RuntimeObject*)L_15, Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F_il2cpp_TypeInfo_var)), NULL);
			goto IL_0077_1;
		}

IL_0059_1:
		{
			Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_16 = V_0;
			bool L_17;
			L_17 = ProtocolClient_GetValidHandler_mBBB63895815626FBBA0C0EEB340FDCDA4348E031(__this, L_16, (&V_2), NULL);
			V_3 = L_17;
			bool L_18 = V_3;
			if (!L_18)
			{
				goto IL_0076_1;
			}
		}
		{
			MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67 L_19 = V_2;
			Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB* L_20 = L_19.___Action_1;
			Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_21 = V_0;
			NullCheck(L_20);
			Action_1_Invoke_m79DF7B8037C09ABA6F4A3AA08A978817E84D6247_inline(L_20, L_21, NULL);
		}

IL_0076_1:
		{
		}

IL_0077_1:
		{
			goto IL_007f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007a;
		}
		throw e;
	}

CATCH_007a:
	{// begin catch(UdpKit.UdpException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007f;
	}// end catch (depth: 1)

IL_007f:
	{
		return;
	}
}
// System.Void UdpKit.Protocol.ProtocolClient::Send(UdpKit.Protocol.Message,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolClient_Send_m61220806CF2FB810DBB5554425C525B4A85FC3BA (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* ___msg0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4ACD2771C34ACD94C0FF8A48734E86286D89A5B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA36A8B2EBDAF761FF76149D7EFE93C7BD857E0B0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_0 = ___msg0;
		V_0 = (bool)((!(((RuntimeObject*)(Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3*)((Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3*)IsInstClass((RuntimeObject*)L_0, Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_2 = ___msg0;
		V_1 = ((Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3*)CastclassClass((RuntimeObject*)L_2, Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3_il2cpp_TypeInfo_var));
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_3 = V_1;
		UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* L_4;
		L_4 = ProtocolClient_get_Platform_mDD30C179BD401D68F415A2D210E503976B5A6765(__this, NULL);
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = VirtualFuncInvoker0< uint32_t >::Invoke(31 /* System.UInt32 UdpKit.Platform.UdpPlatform::GetPrecisionTime() */, L_4);
		NullCheck(L_3);
		((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_3)->___SendTime_10 = L_5;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_6 = V_1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_7 = ___endpoint1;
		NullCheck(L_6);
		((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_6)->___Target_9 = L_7;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_8 = V_1;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_9 = V_1;
		NullCheck(L_9);
		uint32_t L_10 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_9)->___Attempts_12;
		NullCheck(L_8);
		((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_8)->___Attempts_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_11 = V_1;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_12 = V_1;
		NullCheck(L_12);
		uint32_t L_13 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_12)->___SendTime_10;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_14 = V_1;
		NullCheck(L_14);
		uint32_t L_15;
		L_15 = VirtualFuncInvoker0< uint32_t >::Invoke(7 /* System.UInt32 UdpKit.Protocol.Query::get_BaseTimeout() */, L_14);
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_16 = V_1;
		NullCheck(L_16);
		uint32_t L_17 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_16)->___Attempts_12;
		NullCheck(L_11);
		((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_11)->___Timeout_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, ((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)L_17))));
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_18 = V_1;
		NullCheck(L_18);
		uint32_t L_19 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_18)->___Attempts_12;
		V_2 = (bool)((((int32_t)L_19) == ((int32_t)1))? 1 : 0);
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_008c;
		}
	}
	{
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_21 = V_1;
		NullCheck(L_21);
		bool L_22;
		L_22 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean UdpKit.Protocol.Query::get_IsUnique() */, L_21);
		V_3 = L_22;
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_007e;
		}
	}
	{
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_24 = V_1;
		NullCheck(L_24);
		Type_t* L_25;
		L_25 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_24, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_26 = ___endpoint1;
		ProtocolClient_QueryFilter_mE65D3C6C34A9617B1DF667AA984D7B64D5A5003B(__this, L_25, L_26, NULL);
	}

IL_007e:
	{
		List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* L_27 = __this->___Queries_6;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_28 = V_1;
		NullCheck(L_27);
		List_1_Add_m4ACD2771C34ACD94C0FF8A48734E86286D89A5B1_inline(L_27, L_28, List_1_Add_m4ACD2771C34ACD94C0FF8A48734E86286D89A5B1_RuntimeMethod_var);
	}

IL_008c:
	{
	}

IL_008d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_31 = ___endpoint1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_32 = L_31;
		RuntimeObject* L_33 = Box(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_33);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Info_m43C0EB22B6BD6E9FEB4AD3E45A0E767CE1DE2E0B(_stringLiteralA36A8B2EBDAF761FF76149D7EFE93C7BD857E0B0, L_30, NULL);
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_34 = __this->___Socket_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___Buffer_4;
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_36 = ___msg0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = __this->___Buffer_4;
		int32_t L_38;
		L_38 = Context_WriteMessage_mEA5DFF8FC81B7587A4A52C3A8FA80FC71289AFB7(__this, L_36, L_37, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_39 = ___endpoint1;
		NullCheck(L_34);
		int32_t L_40;
		L_40 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 >::Invoke(14 /* System.Int32 UdpKit.Platform.UdpPlatformSocket::SendTo(System.Byte[],System.Int32,UdpKit.UdpEndPoint) */, L_34, L_35, L_38, L_39);
		UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* L_41;
		L_41 = ProtocolClient_get_Platform_mDD30C179BD401D68F415A2D210E503976B5A6765(__this, NULL);
		NullCheck(L_41);
		uint32_t L_42;
		L_42 = VirtualFuncInvoker0< uint32_t >::Invoke(31 /* System.UInt32 UdpKit.Platform.UdpPlatform::GetPrecisionTime() */, L_41);
		__this->___LastSend_3 = L_42;
		return;
	}
}
// System.Void UdpKit.Protocol.ProtocolClient::QueryResult(UdpKit.Protocol.Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolClient_QueryResult_m186AFAE0A51A00A4FC4358DAD27969EC80F8F0FB (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m36BBBAA6F4456C820A24A87E8D9B4311206344BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* V_1 = NULL;
	bool V_2 = false;
	AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	{
		Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* L_0 = ___result0;
		NullCheck(L_0);
		Guid_t L_1 = L_0->___Query_14;
		Guid_t L_2 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		bool L_3;
		L_3 = Guid_op_Inequality_mAA2FAB73FCD2CB2D2128ECF7016AC16AFBDF6163(L_1, L_2, NULL);
		UdpAssert_Assert_mD587035F5FB461BB2E65A552CBB3247BEE518221(L_3, NULL);
		V_0 = 0;
		goto IL_0074;
	}

IL_001b:
	{
		List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* L_4 = __this->___Queries_6;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_6;
		L_6 = List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF(L_4, L_5, List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF_RuntimeMethod_var);
		V_1 = L_6;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_7 = V_1;
		NullCheck(L_7);
		Guid_t L_8 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_7)->___MessageId_7;
		Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* L_9 = ___result0;
		NullCheck(L_9);
		Guid_t L_10 = L_9->___Query_14;
		bool L_11;
		L_11 = Guid_op_Equality_mAD728A1A4FB970715E84B7D346E094FE5EF2A240(L_8, L_10, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		ProtocolClient_RemoveQueryAt_mC5CDBA96CFB27502286F7920A8899A94286092EE(__this, (&V_0), NULL);
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_13 = V_1;
		Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* L_14 = ___result0;
		NullCheck(L_13);
		L_13->___Result_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___Result_14), (void*)L_14);
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_15 = V_1;
		bool L_16;
		L_16 = ProtocolClient_GetValidCallback_m4B71CB79C2CA063F3A1D6728EAF63A3D47883ECD(__this, L_15, (&V_3), NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_006d;
		}
	}
	{
		AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894 L_18 = V_3;
		Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1* L_19 = L_18.___Action_1;
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_20 = V_1;
		NullCheck(L_19);
		Action_1_Invoke_mB9A9302F4DF1DEE8B187A68A8540D5E97DFF1BF8_inline(L_19, L_20, NULL);
	}

IL_006d:
	{
		goto IL_0088;
	}

IL_006f:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0074:
	{
		int32_t L_22 = V_0;
		List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* L_23 = __this->___Queries_6;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m36BBBAA6F4456C820A24A87E8D9B4311206344BE_inline(L_23, List_1_get_Count_m36BBBAA6F4456C820A24A87E8D9B4311206344BE_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (L_25)
		{
			goto IL_001b;
		}
	}

IL_0088:
	{
		return;
	}
}
// System.Void UdpKit.Protocol.ProtocolClient::QueryFilter(System.Type,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolClient_QueryFilter_mE65D3C6C34A9617B1DF667AA984D7B64D5A5003B (ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* __this, Type_t* ___t0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m36BBBAA6F4456C820A24A87E8D9B4311206344BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		V_0 = 0;
		goto IL_004d;
	}

IL_0005:
	{
		List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* L_0 = __this->___Queries_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_2;
		L_2 = List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF(L_0, L_1, List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF_RuntimeMethod_var);
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Type_t* L_4 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* L_6 = __this->___Queries_6;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* L_8;
		L_8 = List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF(L_6, L_7, List_1_get_Item_m54791B8DC54366731E4F282FE12C30FFEA7898FF_RuntimeMethod_var);
		NullCheck(L_8);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_9 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)L_8)->___Target_9;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_10 = ___endpoint1;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = UdpEndPoint_op_Equality_m7ABD6588A196A62B9E94DF687A4ED7ED2A2FD591(L_9, L_10, NULL);
		G_B4_0 = ((int32_t)(L_11));
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = 0;
	}

IL_0039:
	{
		V_1 = (bool)G_B4_0;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		ProtocolClient_RemoveQueryAt_mC5CDBA96CFB27502286F7920A8899A94286092EE(__this, (&V_0), NULL);
	}

IL_0048:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004d:
	{
		int32_t L_14 = V_0;
		List_1_tE8CB8748CDE33865540F8E83BB39578F74011396* L_15 = __this->___Queries_6;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m36BBBAA6F4456C820A24A87E8D9B4311206344BE_inline(L_15, List_1_get_Count_m36BBBAA6F4456C820A24A87E8D9B4311206344BE_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0005;
		}
	}
	{
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


// Conversion methods for marshalling of: UdpKit.Protocol.ProtocolClient/AckCallback
IL2CPP_EXTERN_C void AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshal_pinvoke(const AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894& unmarshaled, AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshaled_pinvoke& marshaled)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke(unmarshaled.___Filter_0, marshaled.___Filter_0);
	marshaled.___Action_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Action_1));
}
IL2CPP_EXTERN_C void AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshal_pinvoke_back(const AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshaled_pinvoke& marshaled, AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 unmarshaledFilter_temp_0;
	memset((&unmarshaledFilter_temp_0), 0, sizeof(unmarshaledFilter_temp_0));
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke_back(marshaled.___Filter_0, unmarshaledFilter_temp_0);
	unmarshaled.___Filter_0 = unmarshaledFilter_temp_0;
	unmarshaled.___Action_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1>(marshaled.___Action_1, Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Action_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1>(marshaled.___Action_1, Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UdpKit.Protocol.ProtocolClient/AckCallback
IL2CPP_EXTERN_C void AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshal_pinvoke_cleanup(AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshaled_pinvoke& marshaled)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke_cleanup(marshaled.___Filter_0);
}


// Conversion methods for marshalling of: UdpKit.Protocol.ProtocolClient/AckCallback
IL2CPP_EXTERN_C void AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshal_com(const AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894& unmarshaled, AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshaled_com& marshaled)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com(unmarshaled.___Filter_0, marshaled.___Filter_0);
	marshaled.___Action_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Action_1));
}
IL2CPP_EXTERN_C void AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshal_com_back(const AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshaled_com& marshaled, AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 unmarshaledFilter_temp_0;
	memset((&unmarshaledFilter_temp_0), 0, sizeof(unmarshaledFilter_temp_0));
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com_back(marshaled.___Filter_0, unmarshaledFilter_temp_0);
	unmarshaled.___Filter_0 = unmarshaledFilter_temp_0;
	unmarshaled.___Action_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1>(marshaled.___Action_1, Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Action_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1>(marshaled.___Action_1, Action_1_tEC1C4C703262D52D5D864B8D21F97CA95C3013C1_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UdpKit.Protocol.ProtocolClient/AckCallback
IL2CPP_EXTERN_C void AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshal_com_cleanup(AckCallback_t74A1571F6B800619B3569EE540259BACEE6CF894_marshaled_com& marshaled)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com_cleanup(marshaled.___Filter_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UdpKit.Protocol.ProtocolClient/MsgHandler
IL2CPP_EXTERN_C void MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshal_pinvoke(const MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67& unmarshaled, MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshaled_pinvoke& marshaled)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke(unmarshaled.___Filter_0, marshaled.___Filter_0);
	marshaled.___Action_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Action_1));
}
IL2CPP_EXTERN_C void MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshal_pinvoke_back(const MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshaled_pinvoke& marshaled, MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 unmarshaledFilter_temp_0;
	memset((&unmarshaledFilter_temp_0), 0, sizeof(unmarshaledFilter_temp_0));
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke_back(marshaled.___Filter_0, unmarshaledFilter_temp_0);
	unmarshaled.___Filter_0 = unmarshaledFilter_temp_0;
	unmarshaled.___Action_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB>(marshaled.___Action_1, Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Action_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB>(marshaled.___Action_1, Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UdpKit.Protocol.ProtocolClient/MsgHandler
IL2CPP_EXTERN_C void MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshal_pinvoke_cleanup(MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshaled_pinvoke& marshaled)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke_cleanup(marshaled.___Filter_0);
}


// Conversion methods for marshalling of: UdpKit.Protocol.ProtocolClient/MsgHandler
IL2CPP_EXTERN_C void MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshal_com(const MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67& unmarshaled, MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshaled_com& marshaled)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com(unmarshaled.___Filter_0, marshaled.___Filter_0);
	marshaled.___Action_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Action_1));
}
IL2CPP_EXTERN_C void MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshal_com_back(const MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshaled_com& marshaled, MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 unmarshaledFilter_temp_0;
	memset((&unmarshaledFilter_temp_0), 0, sizeof(unmarshaledFilter_temp_0));
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com_back(marshaled.___Filter_0, unmarshaledFilter_temp_0);
	unmarshaled.___Filter_0 = unmarshaledFilter_temp_0;
	unmarshaled.___Action_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB>(marshaled.___Action_1, Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Action_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB>(marshaled.___Action_1, Action_1_t915EC4642FB13F1F20D85AE0C390AED7EDFD21CB_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UdpKit.Protocol.ProtocolClient/MsgHandler
IL2CPP_EXTERN_C void MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshal_com_cleanup(MsgHandler_tF2A9F4BEA6222E92083575B0AE5AC7F0EE2C3A67_marshaled_com& marshaled)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com_cleanup(marshaled.___Filter_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UdpKit.Protocol.ProtocolClient UdpKit.Protocol.ProtocolService::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* ProtocolService_get_Client_mF59AAAFDBF47BFA6BBC90A998881FF3405C0A60C (ProtocolService_t3BCBF8EA68E69B3E55EC2A0619EDF81551B442C0* __this, const RuntimeMethod* method) 
{
	ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* V_0 = NULL;
	{
		ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* L_0 = __this->___client_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UdpKit.Protocol.ProtocolService::get_SendTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ProtocolService_get_SendTime_m14392DA43770D36A9AA873B025B696CDB2765489 (ProtocolService_t3BCBF8EA68E69B3E55EC2A0619EDF81551B442C0* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CSendTimeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UdpKit.Protocol.ProtocolService::set_SendTime(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolService_set_SendTime_mDD3AEB2AC2E7C2765A3EF7C634CB2FACF9A2475E (ProtocolService_t3BCBF8EA68E69B3E55EC2A0619EDF81551B442C0* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->___U3CSendTimeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void UdpKit.Protocol.ProtocolService::.ctor(UdpKit.Protocol.ProtocolClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolService__ctor_m1D1A6CC1C1078045182E7F96D4822577ED72DFAD (ProtocolService_t3BCBF8EA68E69B3E55EC2A0619EDF81551B442C0* __this, ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* ___p0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* L_0 = ___p0;
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		return;
	}
}
// System.Void UdpKit.Protocol.ProtocolService::Send(UdpKit.UdpEndPoint,UdpKit.Protocol.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtocolService_Send_m81C571E5F82210C6B5890A257E3EBE833D18C812 (ProtocolService_t3BCBF8EA68E69B3E55EC2A0619EDF81551B442C0* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint0, Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* ___msg1, const RuntimeMethod* method) 
{
	{
		ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* L_0 = __this->___client_0;
		NullCheck(L_0);
		UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* L_1;
		L_1 = ProtocolClient_get_Platform_mDD30C179BD401D68F415A2D210E503976B5A6765(L_0, NULL);
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = VirtualFuncInvoker0< uint32_t >::Invoke(31 /* System.UInt32 UdpKit.Platform.UdpPlatform::GetPrecisionTime() */, L_1);
		ProtocolService_set_SendTime_mDD3AEB2AC2E7C2765A3EF7C634CB2FACF9A2475E_inline(__this, L_2, NULL);
		ProtocolClient_t271AAD97C227020FE7184CE1805CBC8CFEA0AED5* L_3 = __this->___client_0;
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_4 = ___msg1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_5 = ___endpoint0;
		NullCheck(L_3);
		ProtocolClient_Send_m61220806CF2FB810DBB5554425C525B4A85FC3BA(L_3, L_4, L_5, NULL);
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
// System.Object UdpKit.Platform.UdpPlatformInterface::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UdpPlatformInterface_get_Token_m9ED0269344A7725F1B0D8E056F4F554C89E7B3D8 (UdpPlatformInterface_t4857820E718813541D2A62687507A3FCCD783C94* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTokenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UdpKit.Platform.UdpPlatformInterface::set_Token(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatformInterface_set_Token_mD6FA0EE2EB49526E9298E6BF99EF7DF8A2000968 (UdpPlatformInterface_t4857820E718813541D2A62687507A3FCCD783C94* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void UdpKit.Platform.UdpPlatformInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatformInterface__ctor_mEC3E8EA05F64748FA78D9442D2972DB1B9B63439 (UdpPlatformInterface_t4857820E718813541D2A62687507A3FCCD783C94* __this, const RuntimeMethod* method) 
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
// UdpKit.UdpSocket UdpKit.Platform.UdpPlatform::get_udpSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979* UdpPlatform_get_udpSocket_m12D40C6C5F76550180F4D7354C73DF24184CF791 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979* L_0 = __this->___U3CudpSocketU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UdpKit.Platform.UdpPlatform::set_udpSocket(UdpKit.UdpSocket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform_set_udpSocket_m32B1F0AB48E8FFF87FF4B9293A84CBDA71DDB056 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979* ___value0, const RuntimeMethod* method) 
{
	{
		UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979* L_0 = ___value0;
		__this->___U3CudpSocketU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CudpSocketU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Object UdpKit.Platform.UdpPlatform::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UdpPlatform_get_Token_m93AC08B6EC0636D44AF79DC8FDF014F40A673F55 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTokenU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UdpKit.Platform.UdpPlatform::set_Token(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform_set_Token_m7D38C66970ABDEB4DF7935EE6B7D4B67523E6ED2 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTokenU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean UdpKit.Platform.UdpPlatform::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpPlatform_get_IsNull_mB250DE8051A7923EAB7BB20E91577137A6EFEF36 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean UdpKit.Platform.UdpPlatform::get_SessionListProvidedExternally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpPlatform_get_SessionListProvidedExternally_mC94635702A773B83E01D73D881735E985F421A02 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean UdpKit.Platform.UdpPlatform::get_ShutdownOnConnectFailure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpPlatform_get_ShutdownOnConnectFailure_m2B15ADFC7CC007144C3F469C863E4F4E10334C62 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean UdpKit.Platform.UdpPlatform::get_SupportsBroadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpPlatform_get_SupportsBroadcast_mA9ABA4670E1076170E251E79F40E4A5632EB6EA6 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean UdpKit.Platform.UdpPlatform::get_SupportsMasterServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpPlatform_get_SupportsMasterServer_m1A4650CBCB736A4C22040D29806BB560D4478339 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Single UdpKit.Platform.UdpPlatform::get_SessionListUpdateRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UdpPlatform_get_SessionListUpdateRate_m739053516F21688EE0AF25B433AAE633614AE099 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		return (5.0f);
	}
}
// System.Boolean UdpKit.Platform.UdpPlatform::get_SkipWanCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpPlatform_get_SkipWanCheck_mF03CB2EA2BCD616AD8DBA6566B5B8B9FDEE0B627 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UdpKit.Platform.UdpPlatform::GetPlatformMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* UdpPlatform_GetPlatformMetadata_m5CDE1BD33EC9FA7E145652757E00A2BE5B5C2331 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = V_0;
		return L_1;
	}
}
// UdpKit.UdpSession UdpKit.Platform.UdpPlatform::GetCurrentSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* UdpPlatform_GetCurrentSession_m1FBB4770C5876C649AA4D90DE6F7284757258857 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		return (UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4*)NULL;
	}
}
// System.Boolean UdpKit.Platform.UdpPlatform::SessionListHasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpPlatform_SessionListHasChanged_mDB05DA1A9FD049646BACC5D1C999A10AC0BF2E8B (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<UdpKit.UdpSession> UdpKit.Platform.UdpPlatform::GetSessionList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE03320055A208D5EFE1D027481CDAEC3D2797E8B* UdpPlatform_GetSessionList_mD421B945F51885172D4FB08616DEEE2455AF14DB (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD64159002A52ECE1A36E0ABA1D7D0AB4C7B4DFE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE03320055A208D5EFE1D027481CDAEC3D2797E8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE03320055A208D5EFE1D027481CDAEC3D2797E8B* L_0 = (List_1_tE03320055A208D5EFE1D027481CDAEC3D2797E8B*)il2cpp_codegen_object_new(List_1_tE03320055A208D5EFE1D027481CDAEC3D2797E8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD64159002A52ECE1A36E0ABA1D7D0AB4C7B4DFE7(L_0, List_1__ctor_mD64159002A52ECE1A36E0ABA1D7D0AB4C7B4DFE7_RuntimeMethod_var);
		return L_0;
	}
}
// System.Boolean UdpKit.Platform.UdpPlatform::HandleSetHostInfo(UdpKit.UdpSession,System.Action`2<System.Boolean,UdpKit.UdpSessionError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpPlatform_HandleSetHostInfo_mDFAE11B6A838F8F58EB235D93D8934B4D9D756C7 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* ___session0, Action_2_tA084CEBCE4FE337EFE320FBC3E3291C30BE917CD* ___result1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UdpKit.Platform.UdpPlatform::HandleConnectToSession(UdpKit.UdpSession,System.Object,System.Action`2<System.Boolean,UdpKit.UdpSessionError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpPlatform_HandleConnectToSession_m8FE5FDB81B9D6BC065F1F8A2110AB6622EF0F2C0 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* ___session0, RuntimeObject* ___protocolToken1, Action_2_tA084CEBCE4FE337EFE320FBC3E3291C30BE917CD* ___result2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Action_2_tA084CEBCE4FE337EFE320FBC3E3291C30BE917CD* L_0 = ___result2;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		goto IL_000f;
	}

IL_0006:
	{
		Action_2_tA084CEBCE4FE337EFE320FBC3E3291C30BE917CD* L_1 = ___result2;
		NullCheck(L_1);
		Action_2_Invoke_mF1ECC15E80C3209E7B80CA38041092449412F096_inline(L_1, (bool)0, 5, NULL);
	}

IL_000f:
	{
		V_0 = (bool)0;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UdpKit.Platform.UdpPlatform::HandleConnectToRandomSession(UdpKit.UdpSessionFilter,System.Object,System.Action`2<System.Boolean,UdpKit.UdpSessionError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpPlatform_HandleConnectToRandomSession_mC851F471F10D946FB61BFA7E4B5D1BFF11CB8599 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* ___sessionFilter0, RuntimeObject* ___protocolToken1, Action_2_tA084CEBCE4FE337EFE320FBC3E3291C30BE917CD* ___result2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Action_2_tA084CEBCE4FE337EFE320FBC3E3291C30BE917CD* L_0 = ___result2;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		goto IL_000f;
	}

IL_0006:
	{
		Action_2_tA084CEBCE4FE337EFE320FBC3E3291C30BE917CD* L_1 = ___result2;
		NullCheck(L_1);
		Action_2_Invoke_mF1ECC15E80C3209E7B80CA38041092449412F096_inline(L_1, (bool)0, 5, NULL);
	}

IL_000f:
	{
		V_0 = (bool)0;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// UdpKit.UdpSession UdpKit.Platform.UdpPlatform::BuildSession(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* UdpPlatform_BuildSession_m59E6AE31C449FB14DFCF4DA19E832693C2F3CE51 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* V_0 = NULL;
	{
		String_t* L_0 = ___id0;
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* L_1;
		L_1 = UdpSessionImpl_Build_m079C63985E1F0A8F2CC662B8EA7BADCF8F4F4F66(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* L_2 = V_0;
		return L_2;
	}
}
// UdpKit.UdpIPv4Address UdpKit.Platform.UdpPlatform::GetBroadcastAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 UdpPlatform_GetBroadcastAddress_mB252CF27C2B726AE04B7FD03B3D83DE9ABF2ADB7 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = ((UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var))->___Broadcast_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.UdpPlatform::ResolveHostAddresses(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* UdpPlatform_ResolveHostAddresses_m10E3537F3072C77B3899A3528FD304EA85BA4D98 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, int32_t ___port0, bool ___ipv61, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* V_0 = NULL;
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* G_B2_0 = NULL;
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* G_B2_1 = NULL;
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* G_B1_0 = NULL;
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* G_B1_1 = NULL;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* G_B3_1 = NULL;
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* G_B3_2 = NULL;
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_0 = (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*)il2cpp_codegen_object_new(List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7(L_0, List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_RuntimeMethod_var);
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_1 = L_0;
		bool L_2 = ___ipv61;
		G_B1_0 = L_1;
		G_B1_1 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_1;
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_3 = ((UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var))->___Any_0;
		int32_t L_4 = ___port0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270((&L_5), L_3, (uint16_t)((int32_t)(uint16_t)L_4), /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0024;
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_6 = ((UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var))->___Any_0;
		int32_t L_7 = ___port0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3((&L_8), L_6, (uint16_t)((int32_t)(uint16_t)L_7), /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_inline(G_B3_1, G_B3_0, List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_RuntimeMethod_var);
		V_0 = G_B3_2;
		goto IL_002d;
	}

IL_002d:
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_9 = V_0;
		return L_9;
	}
}
// UdpKit.Platform.UdpPlatformSocket UdpKit.Platform.UdpPlatform::CreateBroadcastSocket(UdpKit.UdpEndPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* UdpPlatform_CreateBroadcastSocket_m87D3A1EF3C2BC7B39F1D966B1D8AA103ABAAC7EE (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint0, bool ___bind1, const RuntimeMethod* method) 
{
	UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* V_0 = NULL;
	UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* V_1 = NULL;
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___endpoint0;
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_1;
		L_1 = UdpPlatform_CreateSocket_m9F9ED7C8F527F3222EB9BC9B26F4F83961008515(__this, L_0, NULL);
		V_0 = L_1;
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_2 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void UdpKit.Platform.UdpPlatformSocket::set_Broadcast(System.Boolean) */, L_2, (bool)1);
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_3 = V_0;
		V_1 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_4 = V_1;
		return L_4;
	}
}
// UdpKit.Platform.UdpPlatformSocket UdpKit.Platform.UdpPlatform::CreateSocket(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* UdpPlatform_CreateSocket_m9F9ED7C8F527F3222EB9BC9B26F4F83961008515 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint0, const RuntimeMethod* method) 
{
	UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* V_0 = NULL;
	bool V_1 = false;
	UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* V_2 = NULL;
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___endpoint0;
		bool L_1 = L_0.___IPv6_4;
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_2;
		L_2 = VirtualFuncInvoker1< UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8*, bool >::Invoke(20 /* UdpKit.Platform.UdpPlatformSocket UdpKit.Platform.UdpPlatform::CreateSocket(System.Boolean) */, __this, L_1);
		V_0 = L_2;
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_3 = V_0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_4 = ___endpoint0;
		NullCheck(L_3);
		VirtualActionInvoker1< UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 >::Invoke(11 /* System.Void UdpKit.Platform.UdpPlatformSocket::Bind(UdpKit.UdpEndPoint) */, L_3, L_4);
		goto IL_001a;
	}

IL_0018:
	{
	}

IL_001a:
	{
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean UdpKit.Platform.UdpPlatformSocket::get_IsBound() */, L_5);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0018;
		}
	}
	{
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_8 = V_0;
		V_2 = L_8;
		goto IL_002b;
	}

IL_002b:
	{
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_9 = V_2;
		return L_9;
	}
}
// System.Void UdpKit.Platform.UdpPlatform::OnStartBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform_OnStartBegin_m173AD597CA4238F8E2FEFAE4A777B7ADE3C812B4 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UdpKit.Platform.UdpPlatform::OnStartDone(UdpKit.UdpEndPoint,System.Action`2<System.Boolean,UdpKit.UdpConnectionDisconnectReason>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform_OnStartDone_m638D2BD88ECA40BAFAB2DD7081AC657EFDF1CDC9 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___localEndPoint0, Action_2_tAD65775ADAECDB7057525E2CF21F8E9FEA4C63A9* ___doneCallback1, const RuntimeMethod* method) 
{
	{
		Action_2_tAD65775ADAECDB7057525E2CF21F8E9FEA4C63A9* L_0 = ___doneCallback1;
		NullCheck(L_0);
		Action_2_Invoke_m8EC589E0E5BF3F2AFBCE8C8C92668D2D86ACA3BC_inline(L_0, (bool)1, 0, NULL);
		return;
	}
}
// System.Void UdpKit.Platform.UdpPlatform::OnStartupFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform_OnStartupFailed_mF535AEF89B340AF35CED93AD381C40CF4CED3149 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Threading.Tasks.Task UdpKit.Platform.UdpPlatform::OnShutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UdpPlatform_OnShutdown_mCFC77900439155A931DA5DBECD89ECF93246FA5A (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.Platform.UdpPlatform::OnConnect(UdpKit.UdpConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform_OnConnect_m3FE055067CE3D6CF1860878F926917123D8AE4C8 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, UdpConnection_t0BF288D2EFBDEAB3A0EDE430EE1D84949E994103* ___connection0, const RuntimeMethod* method) 
{
	{
		UdpConnection_t0BF288D2EFBDEAB3A0EDE430EE1D84949E994103* L_0 = ___connection0;
		NullCheck(L_0);
		UdpConnection_set_ConnectionType_mA05C51DE9C17FF683FAAE6ECEEA0E5FA72FCEDFB_inline(L_0, 1, NULL);
		return;
	}
}
// System.Void UdpKit.Platform.UdpPlatform::OnInternalEvent(UdpKit.UdpEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform_OnInternalEvent_mCD6E497DF10B30B534FC350BC086CB7DDD91DFEF (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, UdpEvent_t74BA361BB0EE787DBC70AD992739A5E1BAEFB74E ___evt0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UdpKit.Platform.UdpPlatform::Configure(UdpKit.UdpConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform_Configure_m5F1BE8AA233B644AE7F76C1F046D11D0C37C459A (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, UdpConfig_t40D9E5EC737F64EFB5C8E3E40B6DC256350DDCCA* ___config0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.String UdpKit.Platform.UdpPlatform::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpPlatform_ToString_m620EB2A825439F99AFFD917B6B7B5E31B147ADF7 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void UdpKit.Platform.UdpPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform__ctor_m46DB9E65E17B405BAAD784DC9364057F762A259D (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) 
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
// System.Object UdpKit.Platform.UdpPlatformSocket::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UdpPlatformSocket_get_Token_mD9C8A53D091F11CDFE3989C0303E780C7CD818E5 (UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTokenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UdpKit.Platform.UdpPlatformSocket::set_Token(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatformSocket_set_Token_m782D3D7D3DEF228C4563B292237FAD5B77773679 (UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 UdpKit.Platform.UdpPlatformSocket::SendTo(System.Byte[],UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPlatformSocket_SendTo_m1E8B609DF7AA080F760A92FDB8A796AED3483384 (UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		NullCheck(L_1);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_2 = ___endpoint1;
		int32_t L_3;
		L_3 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 >::Invoke(14 /* System.Int32 UdpKit.Platform.UdpPlatformSocket::SendTo(System.Byte[],System.Int32,UdpKit.UdpEndPoint) */, __this, L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UdpKit.Platform.UdpPlatformSocket::RecvFrom(System.Byte[],UdpKit.UdpEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPlatformSocket_RecvFrom_mC88B370B7035D733425FA4FCD1FBC4DB0261ADEC (UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* ___endpoint1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		NullCheck(L_1);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_2 = ___endpoint1;
		int32_t L_3;
		L_3 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* >::Invoke(15 /* System.Int32 UdpKit.Platform.UdpPlatformSocket::RecvFrom(System.Byte[],System.Int32,UdpKit.UdpEndPoint&) */, __this, L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), L_2);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void UdpKit.Platform.UdpPlatformSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatformSocket__ctor_m9176F8F020D9F899E035D33421A6563BE4D62AF1 (UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HMACPacketValidator_get_Sha256ByteSize_mB5F0BA934D10A8384043020777A3E197D7814A84_inline (HMACPacketValidator_t8658A644CE50470593B496EC9BA09A551F37862D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSha256ByteSizeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProtocolService_set_SendTime_mDD3AEB2AC2E7C2765A3EF7C634CB2FACF9A2475E_inline (ProtocolService_t3BCBF8EA68E69B3E55EC2A0619EDF81551B442C0* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->___U3CSendTimeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UdpConnection_set_ConnectionType_mA05C51DE9C17FF683FAAE6ECEEA0E5FA72FCEDFB_inline (UdpConnection_t0BF288D2EFBDEAB3A0EDE430EE1D84949E994103* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CConnectionTypeU3Ek__BackingField_30 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mCC139849DDF46F634B4555996FCCD2B93DF65E97_gshared_inline (Action_2_t562F5229B3319F83414D174041EF98B798BFDB4E* __this, bool ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_gshared_inline (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___item0, const RuntimeMethod* method) 
{
	UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947* L_1 = (UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947* L_6 = V_0;
		int32_t L_7 = V_1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2)L_8);
		return;
	}

IL_0034:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_9 = ___item0;
		((  void (*) (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}

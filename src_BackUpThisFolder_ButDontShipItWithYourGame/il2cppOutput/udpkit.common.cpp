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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,UdpKit.UdpEndPoint>
struct Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Object,UdpKit.UdpEndPoint>
struct Dictionary_2_t50EAA3B1F04C3FFF906BD102DE16639D09C0CBBB;
// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Net.IPEndPoint>
struct Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A;
// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Object>
struct Dictionary_2_t24C46F370A775524B503796BAFADCED7F347EDD7;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IEqualityComparer`1<System.Net.IPEndPoint>
struct IEqualityComparer_1_t91850B0E7613CCA51D41CB5D5F732C7B898C7B89;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<UdpKit.UdpEndPoint>
struct IEqualityComparer_1_tA1E9C40238963A1C34ACF28E9E992F881F80881C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Net.IPEndPoint,UdpKit.UdpEndPoint>
struct KeyCollection_t57048C36FEE79F2C19A7FDEB9E840D3160D21C76;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<UdpKit.UdpEndPoint,System.Net.IPEndPoint>
struct KeyCollection_t8825B6D0328D23120FDE2C01556ABC295756190E;
// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match>
struct List_1_t425196350A2888B269895DE1C865A3E7E4E2C9B6;
// UdpKit.Protocol.Query`1<System.Object>
struct Query_1_tB95F09E46EAC1904124A43D99C27AC4EB96AEC87;
// UdpKit.Protocol.Query`1<UdpKit.Protocol.PeerConnectResult>
struct Query_1_tCA85FF417F7D4CF73ED66CA60F1ED5C469ECBEE9;
// UdpKit.Protocol.Query`1<UdpKit.Protocol.ProbeEndPointResult>
struct Query_1_tB0A314725DE19BF734E9012581A23B0CA7E455D0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Net.IPEndPoint,UdpKit.UdpEndPoint>
struct ValueCollection_t43A0B2E2461622245DD5CC531E4FC2B83A016999;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<UdpKit.UdpEndPoint,System.Net.IPEndPoint>
struct ValueCollection_t1193607FB3088588B5C8A8FA1433C3EA930089E3;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.Net.IPEndPoint,UdpKit.UdpEndPoint>[]
struct EntryU5BU5D_t9C6F7579B7F65E6027F0CC835A6DBEE23F431952;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// System.Collections.Generic.Dictionary`2/Entry<UdpKit.UdpEndPoint,System.Net.IPEndPoint>[]
struct EntryU5BU5D_t8BAE3513646CE3A4C27A190FF467EE95DCCA483F;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// UdpKit.Protocol.Ack
struct Ack_tAB03C973BF7DC5005D23E5056FBAEB5A8C9CB288;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UdpKit.Protocol.BroadcastSearch
struct BroadcastSearch_t4ADD57791418F4412E25058E510EE71DD3ED98C5;
// UdpKit.Protocol.BroadcastSession
struct BroadcastSession_tC45DA8101D9EBDB1D283A77EBD9DCA43E66068E4;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UdpKit.Protocol.Context
struct Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UdpKit.Protocol.DirectConnectionLan
struct DirectConnectionLan_tDA21D8B4BA3479C4B9623A74756E3DAE32577013;
// UdpKit.Protocol.DirectConnectionWan
struct DirectConnectionWan_tA696ECED78D7F79C805BDC10E40E14207A216A41;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// UdpKit.Protocol.Error
struct Error_t6F569A374FF84F445596C6DC89A31477516E2879;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// UdpKit.Protocol.GetHostList
struct GetHostList_t05CD5923B7A374ABA3A3385955BCBBB4563FE1D8;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// UdpKit.Protocol.HostInfo
struct HostInfo_tE12DEA3082D267788D270C77EEC8FC797B3AA1E8;
// UdpKit.Protocol.HostRegister
struct HostRegister_tA295BD781E7F601C68BC46C76603816C1BA8E5F2;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UdpKit.Protocol.Message
struct Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UdpKit.NatFeatures
struct NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UdpKit.Protocol.PeerConnect
struct PeerConnect_t2959BFA7878A894DCAB13347AC707B1D3DD804B3;
// UdpKit.Protocol.PeerConnectResult
struct PeerConnectResult_t50B8F20CFB9950723BD66E82F38C20278F9C036F;
// UdpKit.Protocol.PeerDisconnect
struct PeerDisconnect_t169A8B7D975A6A616F2821059A6F6289EFEB773E;
// UdpKit.Protocol.PeerKeepAlive
struct PeerKeepAlive_tDE6CB61A5C0C16E37DBB6BEC924F278BB12CEFEA;
// UdpKit.Protocol.PeerReconnect
struct PeerReconnect_tECCB1765089FF3437C603A709E8AE671E30BB3D7;
// UdpKit.Protocol.ProbeEndPoint
struct ProbeEndPoint_t3E02E40C6ED15A2BE82E94099C013031CC7FF481;
// UdpKit.Protocol.ProbeEndPointResult
struct ProbeEndPointResult_t6075D92680B1376B640C8C1D28F3AE69EF50CAEE;
// UdpKit.Protocol.ProbeFeatures
struct ProbeFeatures_tA8BCFDE6C4DB7F44686D11AC727273609B9DFCE0;
// UdpKit.Protocol.ProbeHairpin
struct ProbeHairpin_t1140C48633CF11495A1585F1AFF210994D61F81A;
// UdpKit.Protocol.ProbeUnsolicited
struct ProbeUnsolicited_tE80A1928C3172F190FB078E373FAD700257AED5E;
// UdpKit.Protocol.Punch
struct Punch_t1165B66659A6B79402A9799FE2FD2DF0D62BA9F0;
// UdpKit.Protocol.PunchOnce
struct PunchOnce_t5673A5EDF032ADDA1DB8CBFAAD0C134FE08E0EFB;
// UdpKit.Protocol.PunchRequest
struct PunchRequest_t9246CCC19C46E42E2E7121025FF723A32ECA8544;
// UdpKit.Protocol.Query
struct Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// UdpKit.Protocol.Result
struct Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UdpKit.UdpException
struct UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071;
// UdpKit.UdpSession
struct UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4;
// UdpKit.UdpSessionFilter
struct UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63;
// UdpKit.UdpSessionImpl
struct UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// UdpKit.UdpEndPoint/Comparer
struct Comparer_t7EC97C2245A9F0DFC0DEC6C2D36328E349EC6274;
// UdpKit.UdpIPv4Address/Comparer
struct Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186;
// UdpKit.UdpIPv6Address/Comparer
struct Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32;
// UdpKit.UdpLog/Writer
struct Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t2C1DA38A34DE74A9D4D0D3174ED6E5A4B241822B____5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07049694CB1F48FEB80A07EBA44E4F84DDCAF251;
IL2CPP_EXTERN_C String_t* _stringLiteral0F1CD743C4F8736BC6DFCA1CCE52381F6FE19F6B;
IL2CPP_EXTERN_C String_t* _stringLiteral1675307A152662B3704DEDFD0F17765D03337090;
IL2CPP_EXTERN_C String_t* _stringLiteral3570267F7F0DA9E4E046B63A035D73A841A37753;
IL2CPP_EXTERN_C String_t* _stringLiteral42DD196DE1A7F1A5D86B0BFB0F3C85D0E761B3B9;
IL2CPP_EXTERN_C String_t* _stringLiteral4CAA8EB8F8A40919334B74092BDFF776569ECFB6;
IL2CPP_EXTERN_C String_t* _stringLiteral59CEF764C90FE52CD03DABDBF06DB075E14E678B;
IL2CPP_EXTERN_C String_t* _stringLiteral62522089C882C6915A711DBB052B764686CB70EB;
IL2CPP_EXTERN_C String_t* _stringLiteral64A1CC0A14BE815E808E471FD3FD53F985C73688;
IL2CPP_EXTERN_C String_t* _stringLiteral6BEF2A7861E0A1DDE855716447F2432F92729261;
IL2CPP_EXTERN_C String_t* _stringLiteral7449D16D9732F5F7446ECF54C56A171EDDDDF24A;
IL2CPP_EXTERN_C String_t* _stringLiteral7A9A805533AF6E0812517ACE4475A147F7B49AF1;
IL2CPP_EXTERN_C String_t* _stringLiteral81742155B42580CAD3E12FE6A67E8665294CCE04;
IL2CPP_EXTERN_C String_t* _stringLiteral8FE94193A3EF39943F898714AC9062F7EBD96279;
IL2CPP_EXTERN_C String_t* _stringLiteral93F33F5C5C6822CAF10041503E15865D2FF7E065;
IL2CPP_EXTERN_C String_t* _stringLiteral956C8EE9362B3577886AC15684B0D635BC635226;
IL2CPP_EXTERN_C String_t* _stringLiteral992D23FE06E5F4D73C8734FB3DEFDBABC48F60BA;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB7AE2A6D393ADACFEBBBF239951E42C5ACA0E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F24E7813E509CA75D75D1EE9738C83C77FC94A;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F;
IL2CPP_EXTERN_C String_t* _stringLiteralC297B54761F89E95AF97329EB4F5B3F31308F8E4;
IL2CPP_EXTERN_C String_t* _stringLiteralC5A2A3D0C503892938F51A6C2BD6BC87398CFFA8;
IL2CPP_EXTERN_C String_t* _stringLiteralD0B36D534332EE0F8F415B0E2C5213EF45E9A706;
IL2CPP_EXTERN_C String_t* _stringLiteralD7C761DC1EAE301A716A246D8842A10D06162920;
IL2CPP_EXTERN_C String_t* _stringLiteralDE39DCA2B9DA3D00AC349A54A6BDF33B6F176578;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F3253B939AE75999855ABE1A9D83B51B9A53E6;
IL2CPP_EXTERN_C String_t* _stringLiteralFD7587536DFEF53D894A1E5D3C16B0B57D95C46C;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_CreateMessage_mE6E993B620C76D5AE3FE01F440552D4A9E58F5DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisAck_tAB03C973BF7DC5005D23E5056FBAEB5A8C9CB288_mB8ACBB2BB65550D7E01442471C447ED1E6F8484E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisBroadcastSearch_t4ADD57791418F4412E25058E510EE71DD3ED98C5_mEF1E21FD002F1D98535CC59D23E0277654564C32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisBroadcastSession_tC45DA8101D9EBDB1D283A77EBD9DCA43E66068E4_m4D159A1427882988BF3CFFABC547C4033C2A0839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisDirectConnectionLan_tDA21D8B4BA3479C4B9623A74756E3DAE32577013_mBDB75D755665C9E9C1DDFC8F0B3B47F70A249CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisDirectConnectionWan_tA696ECED78D7F79C805BDC10E40E14207A216A41_m25CC1BB09F2307DD84098BEE0F1818555A3EBBDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisError_t6F569A374FF84F445596C6DC89A31477516E2879_mBBE231030D4D71D9552DE771F5C67D7329CB2835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisGetHostList_t05CD5923B7A374ABA3A3385955BCBBB4563FE1D8_m519E01DC5280C8514E1AAF34B024607032C4934D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisHostInfo_tE12DEA3082D267788D270C77EEC8FC797B3AA1E8_mB4D47E8F8CC3CCFEF7D5532B2FC2EE5F849FEF42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisHostRegister_tA295BD781E7F601C68BC46C76603816C1BA8E5F2_mCE00B7B6EDEF00942CB1885286B636A8DC5542B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisPeerConnectResult_t50B8F20CFB9950723BD66E82F38C20278F9C036F_m88445B8D990BDC85C24DF0096C881E9A94EC2A50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisPeerConnect_t2959BFA7878A894DCAB13347AC707B1D3DD804B3_m308312D5304BB3B2BC7F5E1427E6CA00CF1CCC70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisPeerDisconnect_t169A8B7D975A6A616F2821059A6F6289EFEB773E_m68072AAC165DBECDB4597C7611D3A850D20F1999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisPeerKeepAlive_tDE6CB61A5C0C16E37DBB6BEC924F278BB12CEFEA_m090314B066C4DC254654786085E4CC520A5683CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisPeerReconnect_tECCB1765089FF3437C603A709E8AE671E30BB3D7_mA217F04A4BC5ED6B3DD998F0BCFCBBDCB82A0169_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisProbeEndPointResult_t6075D92680B1376B640C8C1D28F3AE69EF50CAEE_m871FB38C039A574C881B33EF4BB87885FA2D0E8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisProbeEndPoint_t3E02E40C6ED15A2BE82E94099C013031CC7FF481_m92FAB634C829DCE03483F4CE8DEC7A7FA3083B2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisProbeFeatures_tA8BCFDE6C4DB7F44686D11AC727273609B9DFCE0_mD576F0FFDCC92B7993ECB8192E16C3AB40679EF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisProbeHairpin_t1140C48633CF11495A1585F1AFF210994D61F81A_m9AC02C4E06A27A58BB40C62E5DA74AEB3C49F504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisProbeUnsolicited_tE80A1928C3172F190FB078E373FAD700257AED5E_m7DA566398EEF0267260E6A14E3113C5AD5208DCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisPunchOnce_t5673A5EDF032ADDA1DB8CBFAAD0C134FE08E0EFB_mD732EB76A8B3A8C97187DD8A2BCB120F0FFAEDB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisPunchRequest_t9246CCC19C46E42E2E7121025FF723A32ECA8544_m06BE624129B134904D2865385023DBFB38277010_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Context_RegisterMessageType_TisPunch_t1165B66659A6B79402A9799FE2FD2DF0D62BA9F0_mEB9A299750AE68D97FF05DE853873DD23685028C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4BAC76200EE2EB618E1F611C917102D5B206490D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC474CF75DBC3A2280B059F4CCBD02448E04EE66B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9F2C5BA39BEA488D21212AFB1C9D12F20588EA1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF98504F8D8F37BF6F4E6543EC46199086E4D44B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4286F932099E047720A0752628B2155F5F406ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBC583D8711EB2865DEE9EDB64DDEB725868726B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m55ABC4A6EF8AC09582845A8385F0B6AD9CF3A394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6072EB48DD02886249D1A2B3F1975E7C4CAC9793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddressExtensions_GetBroadcastAddress_mA06A858656BF6B80E2A8B856AA39CB484C40A7C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddressExtensions_GetNetworkAddress_mB1274652DB124A59D7B0743B1C5E9C2A8EF0F456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Create_TisNatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5_mBD656E1730E687380D4256B45B862182B0753AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Create_TisUdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6_mA9261EBE4D810F2191946999382C223BF6304B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Serialize_TisNatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_m8D6A5CDAC9036CC9E1A147B0E3B81C4EDBC06213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_Serialize_TisUdpSessionSource_t8D98F3330FF28C5754CAE36D169102BD8978D2DB_m7A3E491F197B394F19ED398C09B5BC1536087F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query_1__ctor_mB4F89F8AEBDF271DCF41FADFF95345676A2E92C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query_1__ctor_mDFB1765635D131FADE7162C6AA567AC78E222CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubnetMask_CreateByHostBitLength_m91FEEB73E64E7C2BAE35EF4B2329822DBA8CAC34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UdpAssert_Assert_m40C626A3CB4AD8D709B33A6A25437FB1D3F716FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UdpAssert_Assert_m967B806CD94EAE0972D1E90DD0BF11423E0CF243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UdpAssert_Assert_mD587035F5FB461BB2E65A552CBB3247BEE518221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UdpEndPoint_Parse_m3AFACC3B0307E6D867AF3A5734D8E958D8969445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UdpEndPoint_get_AsNative_m93BEE5A8ED32B0E68A02C1A839879210E8CC1B0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UdpIPv4Address_Parse_m3CF827562441B8EF9C2D8A5586BF570D7AB213E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UdpIPv6Address_Parse_mF6E37F485B13FA941B9481646F9786D8B4AE5E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UdpSessionFilter_ToDebugString_TisRuntimeObject_TisRuntimeObject_m6D5E028F137709E2BC9E56F01B63715BE184A8D4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAC3A18F0FBF3EDF213CF1A3E54579E9864CCEC07 
{
};

// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,UdpKit.UdpEndPoint>
struct Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9C6F7579B7F65E6027F0CC835A6DBEE23F431952* ____entries_1;
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
	KeyCollection_t57048C36FEE79F2C19A7FDEB9E840D3160D21C76* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t43A0B2E2461622245DD5CC531E4FC2B83A016999* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
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
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Net.IPEndPoint>
struct Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8BAE3513646CE3A4C27A190FF467EE95DCCA483F* ____entries_1;
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
	KeyCollection_t8825B6D0328D23120FDE2C01556ABC295756190E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1193607FB3088588B5C8A8FA1433C3EA930089E3* ____values_8;
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
struct Il2CppArrayBounds;

// UdpKit.Blit
struct Blit_tE5995E83102D2E61A65FC897A2379EAB6FBF964B  : public RuntimeObject
{
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
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

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// UdpKit.Utils.IPAddressExtensions
struct IPAddressExtensions_t90DA5DCEE10878C741D6FFCFE1553112D7C7DAAF  : public RuntimeObject
{
};

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC  : public RuntimeObject
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_0;
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match> System.Text.RegularExpressions.MatchCollection::_matches
	List_1_t425196350A2888B269895DE1C865A3E7E4E2C9B6* ____matches_1;
	// System.Boolean System.Text.RegularExpressions.MatchCollection::_done
	bool ____done_2;
	// System.String System.Text.RegularExpressions.MatchCollection::_input
	String_t* ____input_3;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_beginning
	int32_t ____beginning_4;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_length
	int32_t ____length_5;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_startat
	int32_t ____startat_6;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_prevlen
	int32_t ____prevlen_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// UdpKit.Utils.SubnetMask
struct SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7  : public RuntimeObject
{
};

struct SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_StaticFields
{
	// System.Net.IPAddress UdpKit.Utils.SubnetMask::ClassA
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___ClassA_0;
	// System.Net.IPAddress UdpKit.Utils.SubnetMask::ClassB
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___ClassB_1;
	// System.Net.IPAddress UdpKit.Utils.SubnetMask::ClassC
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___ClassC_2;
};

// UdpKit.UdpAssert
struct UdpAssert_t23D10282804DD3B59D1F551A4FAA89C8F963E0ED  : public RuntimeObject
{
};

// UdpKit.Utils.UdpEndPointExtensions
struct UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E  : public RuntimeObject
{
};

struct UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,UdpKit.UdpEndPoint> UdpKit.Utils.UdpEndPointExtensions::ipEndPointBuffer
	Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586* ___ipEndPointBuffer_0;
	// System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Net.IPEndPoint> UdpKit.Utils.UdpEndPointExtensions::udpEndPointBuffer
	Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A* ___udpEndPointBuffer_1;
};

// UdpKit.UdpLog
struct UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E  : public RuntimeObject
{
};

struct UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields
{
	// System.UInt32 UdpKit.UdpLog::enabled
	uint32_t ___enabled_5;
	// UdpKit.UdpLog/Writer UdpKit.UdpLog::writer
	Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* ___writer_6;
	// System.Object UdpKit.UdpLog::sync
	RuntimeObject* ___sync_7;
};

// UdpKit.UdpMath
struct UdpMath_tC7CD283E24D71807F0515502B8213B40684DFDEA  : public RuntimeObject
{
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

// UdpKit.UdpEndPoint/Comparer
struct Comparer_t7EC97C2245A9F0DFC0DEC6C2D36328E349EC6274  : public RuntimeObject
{
};

// UdpKit.UdpIPv4Address/Comparer
struct Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186  : public RuntimeObject
{
};

struct Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_StaticFields
{
	// UdpKit.UdpIPv4Address/Comparer UdpKit.UdpIPv4Address/Comparer::Instance
	Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186* ___Instance_0;
};

// UdpKit.UdpIPv6Address/Comparer
struct Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32  : public RuntimeObject
{
};

struct Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32_StaticFields
{
	// UdpKit.UdpIPv6Address/Comparer UdpKit.UdpIPv6Address/Comparer::Instance
	Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32* ___Instance_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
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

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
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

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_2;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_3;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_6;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_tA527CC132B4EE520F8D5BA4890A63CB22D469AF5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tA527CC132B4EE520F8D5BA4890A63CB22D469AF5__padding[16];
	};
};
#pragma pack(pop, tp)

// UdpKit.Blit/BitUnion
struct BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 UdpKit.Blit/BitUnion::UInt16
			uint16_t ___UInt16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UInt16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UdpKit.Blit/BitUnion::Int16
			int16_t ___Int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___Int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UdpKit.Blit/BitUnion::UInt32
			uint32_t ___UInt32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UdpKit.Blit/BitUnion::Int32
			int32_t ___Int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UdpKit.Blit/BitUnion::Float32
			float ___Float32_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float32_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UdpKit.Blit/BitUnion::Byte0
			uint8_t ___Byte0_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_6_OffsetPadding[1];
			// System.Byte UdpKit.Blit/BitUnion::Byte1
			uint8_t ___Byte1_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_6_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_7_OffsetPadding[2];
			// System.Byte UdpKit.Blit/BitUnion::Byte2
			uint8_t ___Byte2_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_7_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_8_OffsetPadding[3];
			// System.Byte UdpKit.Blit/BitUnion::Byte3
			uint8_t ___Byte3_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_8_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_8_forAlignmentOnly;
		};
	};
};

// UdpKit.Blit/BitUnion64
struct BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UdpKit.Blit/BitUnion64::UInt64
			uint64_t ___UInt64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___UInt64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UdpKit.Blit/BitUnion64::Byte0
			uint8_t ___Byte0_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_2_OffsetPadding[1];
			// System.Byte UdpKit.Blit/BitUnion64::Byte1
			uint8_t ___Byte1_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_3_OffsetPadding[2];
			// System.Byte UdpKit.Blit/BitUnion64::Byte2
			uint8_t ___Byte2_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_4_OffsetPadding[3];
			// System.Byte UdpKit.Blit/BitUnion64::Byte3
			uint8_t ___Byte3_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_5_OffsetPadding[4];
			// System.Byte UdpKit.Blit/BitUnion64::Byte4
			uint8_t ___Byte4_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_5_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_6_OffsetPadding[5];
			// System.Byte UdpKit.Blit/BitUnion64::Byte5
			uint8_t ___Byte5_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_6_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_7_OffsetPadding[6];
			// System.Byte UdpKit.Blit/BitUnion64::Byte6
			uint8_t ___Byte6_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_7_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_8_OffsetPadding[7];
			// System.Byte UdpKit.Blit/BitUnion64::Byte7
			uint8_t ___Byte7_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_8_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_8_forAlignmentOnly;
		};
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2C1DA38A34DE74A9D4D0D3174ED6E5A4B241822B  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t2C1DA38A34DE74A9D4D0D3174ED6E5A4B241822B_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B
	__StaticArrayInitTypeSizeU3D16_tA527CC132B4EE520F8D5BA4890A63CB22D469AF5 ___5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_0;
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

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
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

// UdpKit.Blit/BitUnion128
struct BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Guid UdpKit.Blit/BitUnion128::Guid
			Guid_t ___Guid_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Guid_t ___Guid_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UdpKit.Blit/BitUnion128::Byte0
			uint8_t ___Byte0_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_2_OffsetPadding[1];
			// System.Byte UdpKit.Blit/BitUnion128::Byte1
			uint8_t ___Byte1_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_3_OffsetPadding[2];
			// System.Byte UdpKit.Blit/BitUnion128::Byte2
			uint8_t ___Byte2_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_4_OffsetPadding[3];
			// System.Byte UdpKit.Blit/BitUnion128::Byte3
			uint8_t ___Byte3_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_5_OffsetPadding[4];
			// System.Byte UdpKit.Blit/BitUnion128::Byte4
			uint8_t ___Byte4_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_5_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_6_OffsetPadding[5];
			// System.Byte UdpKit.Blit/BitUnion128::Byte5
			uint8_t ___Byte5_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_6_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_7_OffsetPadding[6];
			// System.Byte UdpKit.Blit/BitUnion128::Byte6
			uint8_t ___Byte6_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_7_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_8_OffsetPadding[7];
			// System.Byte UdpKit.Blit/BitUnion128::Byte7
			uint8_t ___Byte7_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_8_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_9_OffsetPadding[8];
			// System.Byte UdpKit.Blit/BitUnion128::Byte8
			uint8_t ___Byte8_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_9_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_10_OffsetPadding[9];
			// System.Byte UdpKit.Blit/BitUnion128::Byte9
			uint8_t ___Byte9_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_10_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_11_OffsetPadding[10];
			// System.Byte UdpKit.Blit/BitUnion128::Byte10
			uint8_t ___Byte10_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_11_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_12_OffsetPadding[11];
			// System.Byte UdpKit.Blit/BitUnion128::Byte11
			uint8_t ___Byte11_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_12_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_13_OffsetPadding[12];
			// System.Byte UdpKit.Blit/BitUnion128::Byte12
			uint8_t ___Byte12_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_13_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_14_OffsetPadding[13];
			// System.Byte UdpKit.Blit/BitUnion128::Byte13
			uint8_t ___Byte13_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_14_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_15_OffsetPadding[14];
			// System.Byte UdpKit.Blit/BitUnion128::Byte14
			uint8_t ___Byte14_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_15_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_16_OffsetPadding[15];
			// System.Byte UdpKit.Blit/BitUnion128::Byte15
			uint8_t ___Byte15_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_16_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_16_forAlignmentOnly;
		};
	};
};

// UdpKit.UdpEndPoint/Native
#pragma pack(push, tp, 1)
struct Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89 
{
	// UdpKit.UdpIPv4Address UdpKit.UdpEndPoint/Native::Address
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___Address_0;
	// System.UInt16 UdpKit.UdpEndPoint/Native::Port
	uint16_t ___Port_1;
};
#pragma pack(pop, tp)

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

// UdpKit.NatFeatures
struct NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5  : public RuntimeObject
{
	// UdpKit.UdpEndPoint UdpKit.NatFeatures::WanEndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___WanEndPoint_0;
	// UdpKit.UdpEndPoint UdpKit.NatFeatures::LanEndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___LanEndPoint_1;
	// UdpKit.NatFeatureStates UdpKit.NatFeatures::AllowsUnsolicitedTraffic
	int32_t ___AllowsUnsolicitedTraffic_2;
	// UdpKit.NatFeatureStates UdpKit.NatFeatures::SupportsHairpinTranslation
	int32_t ___SupportsHairpinTranslation_3;
	// UdpKit.NatFeatureStates UdpKit.NatFeatures::SupportsEndPointPreservation
	int32_t ___SupportsEndPointPreservation_4;
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

// UdpKit.UdpException
struct UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071  : public Exception_t
{
};

// UdpKit.UdpSessionImpl
struct UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6  : public UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4
{
	// System.UInt32 UdpKit.UdpSessionImpl::_lastSeen
	uint32_t ____lastSeen_0;
	// System.Guid UdpKit.UdpSessionImpl::_id
	Guid_t ____id_1;
	// UdpKit.UdpEndPoint UdpKit.UdpSessionImpl::_wanEndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ____wanEndPoint_2;
	// UdpKit.UdpEndPoint UdpKit.UdpSessionImpl::_lanEndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ____lanEndPoint_3;
	// UdpKit.UdpSessionSource UdpKit.UdpSessionImpl::_source
	int32_t ____source_4;
	// System.Int32 UdpKit.UdpSessionImpl::_connectionsMax
	int32_t ____connectionsMax_5;
	// System.Int32 UdpKit.UdpSessionImpl::_connectionsCurrent
	int32_t ____connectionsCurrent_6;
	// System.String UdpKit.UdpSessionImpl::_hostName
	String_t* ____hostName_7;
	// System.Byte[] UdpKit.UdpSessionImpl::_hostData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____hostData_8;
	// System.Object UdpKit.UdpSessionImpl::_hostObject
	RuntimeObject* ____hostObject_9;
	// System.Boolean UdpKit.UdpSessionImpl::_hostIsDedicated
	bool ____hostIsDedicated_10;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UdpKit.Protocol.BroadcastSearch
struct BroadcastSearch_t4ADD57791418F4412E25058E510EE71DD3ED98C5  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
};

// UdpKit.Protocol.BroadcastSession
struct BroadcastSession_tC45DA8101D9EBDB1D283A77EBD9DCA43E66068E4  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
	// UdpKit.UdpSession UdpKit.Protocol.BroadcastSession::Host
	UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* ___Host_14;
	// System.Int32 UdpKit.Protocol.BroadcastSession::Port
	int32_t ___Port_15;
};

// UdpKit.Protocol.DirectConnectionLan
struct DirectConnectionLan_tDA21D8B4BA3479C4B9623A74756E3DAE32577013  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
	// System.Guid UdpKit.Protocol.DirectConnectionLan::RemotePeerId
	Guid_t ___RemotePeerId_14;
	// UdpKit.UdpEndPoint UdpKit.Protocol.DirectConnectionLan::RemoteEndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___RemoteEndPoint_15;
};

// UdpKit.Protocol.DirectConnectionWan
struct DirectConnectionWan_tA696ECED78D7F79C805BDC10E40E14207A216A41  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
	// System.Guid UdpKit.Protocol.DirectConnectionWan::RemotePeerId
	Guid_t ___RemotePeerId_14;
	// UdpKit.UdpEndPoint UdpKit.Protocol.DirectConnectionWan::RemoteEndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___RemoteEndPoint_15;
};

// UdpKit.Protocol.Error
struct Error_t6F569A374FF84F445596C6DC89A31477516E2879  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
	// System.String UdpKit.Protocol.Error::Text
	String_t* ___Text_14;
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UdpKit.Protocol.HostInfo
struct HostInfo_tE12DEA3082D267788D270C77EEC8FC797B3AA1E8  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
	// UdpKit.UdpSession UdpKit.Protocol.HostInfo::Host
	UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* ___Host_14;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UdpKit.Protocol.PeerDisconnect
struct PeerDisconnect_t169A8B7D975A6A616F2821059A6F6289EFEB773E  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
};

// UdpKit.Protocol.PeerKeepAlive
struct PeerKeepAlive_tDE6CB61A5C0C16E37DBB6BEC924F278BB12CEFEA  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
};

// UdpKit.Protocol.PeerReconnect
struct PeerReconnect_tECCB1765089FF3437C603A709E8AE671E30BB3D7  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
};

// UdpKit.Protocol.ProbeUnsolicited
struct ProbeUnsolicited_tE80A1928C3172F190FB078E373FAD700257AED5E  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
	// UdpKit.UdpEndPoint UdpKit.Protocol.ProbeUnsolicited::WanEndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___WanEndPoint_14;
};

// UdpKit.Protocol.Punch
struct Punch_t1165B66659A6B79402A9799FE2FD2DF0D62BA9F0  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
};

// UdpKit.Protocol.PunchOnce
struct PunchOnce_t5673A5EDF032ADDA1DB8CBFAAD0C134FE08E0EFB  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
	// System.Guid UdpKit.Protocol.PunchOnce::RemotePeerId
	Guid_t ___RemotePeerId_14;
	// UdpKit.UdpEndPoint UdpKit.Protocol.PunchOnce::RemoteEndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___RemoteEndPoint_15;
};

// UdpKit.Protocol.PunchRequest
struct PunchRequest_t9246CCC19C46E42E2E7121025FF723A32ECA8544  : public Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8
{
	// System.Guid UdpKit.Protocol.PunchRequest::Host
	Guid_t ___Host_14;
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

// UdpKit.UdpLog/Writer
struct Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF  : public MulticastDelegate_t
{
};

// UdpKit.Protocol.Query`1<UdpKit.Protocol.PeerConnectResult>
struct Query_1_tCA85FF417F7D4CF73ED66CA60F1ED5C469ECBEE9  : public Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3
{
};

// UdpKit.Protocol.Query`1<UdpKit.Protocol.ProbeEndPointResult>
struct Query_1_tB0A314725DE19BF734E9012581A23B0CA7E455D0  : public Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3
{
};

// UdpKit.Protocol.Ack
struct Ack_tAB03C973BF7DC5005D23E5056FBAEB5A8C9CB288  : public Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F
{
};

// UdpKit.Protocol.GetHostList
struct GetHostList_t05CD5923B7A374ABA3A3385955BCBBB4563FE1D8  : public Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3
{
};

// UdpKit.Protocol.HostRegister
struct HostRegister_tA295BD781E7F601C68BC46C76603816C1BA8E5F2  : public Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3
{
	// UdpKit.UdpSession UdpKit.Protocol.HostRegister::Host
	UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* ___Host_15;
};

// UdpKit.Protocol.PeerConnectResult
struct PeerConnectResult_t50B8F20CFB9950723BD66E82F38C20278F9C036F  : public Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F
{
	// UdpKit.UdpEndPoint UdpKit.Protocol.PeerConnectResult::Probe0
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___Probe0_15;
	// UdpKit.UdpEndPoint UdpKit.Protocol.PeerConnectResult::Probe1
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___Probe1_16;
	// UdpKit.UdpEndPoint UdpKit.Protocol.PeerConnectResult::Probe2
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___Probe2_17;
};

// UdpKit.Protocol.ProbeEndPointResult
struct ProbeEndPointResult_t6075D92680B1376B640C8C1D28F3AE69EF50CAEE  : public Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F
{
	// UdpKit.UdpEndPoint UdpKit.Protocol.ProbeEndPointResult::WanEndPoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___WanEndPoint_15;
};

// UdpKit.Protocol.ProbeFeatures
struct ProbeFeatures_tA8BCFDE6C4DB7F44686D11AC727273609B9DFCE0  : public Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3
{
	// UdpKit.NatFeatures UdpKit.Protocol.ProbeFeatures::NatFeatures
	NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* ___NatFeatures_15;
};

// UdpKit.Protocol.ProbeHairpin
struct ProbeHairpin_t1140C48633CF11495A1585F1AFF210994D61F81A  : public Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3
{
};

// UdpKit.Protocol.PeerConnect
struct PeerConnect_t2959BFA7878A894DCAB13347AC707B1D3DD804B3  : public Query_1_tCA85FF417F7D4CF73ED66CA60F1ED5C469ECBEE9
{
};

// UdpKit.Protocol.ProbeEndPoint
struct ProbeEndPoint_t3E02E40C6ED15A2BE82E94099C013031CC7FF481  : public Query_1_tB0A314725DE19BF734E9012581A23B0CA7E455D0
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.String UdpKit.UdpSessionFilter::ToDebugString<System.Object,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpSessionFilter_ToDebugString_TisRuntimeObject_TisRuntimeObject_m6D5E028F137709E2BC9E56F01B63715BE184A8D4_gshared (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,UdpKit.UdpEndPoint>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 Dictionary_2_get_Item_m2E5055A3F3E72B7DDD6B2527DB7ADCA4A82DB7CF_gshared (Dictionary_2_t50EAA3B1F04C3FFF906BD102DE16639D09C0CBBB* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mD64689991137F0CF167004CF79D9303CFF84EB76_gshared (Dictionary_2_t24C46F370A775524B503796BAFADCED7F347EDD7* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD4A75E00768A0CC1EC77CAC2989CA6A8DA6C7F6D_gshared (Dictionary_2_t24C46F370A775524B503796BAFADCED7F347EDD7* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m0B95D57AE42CD4B891A990EB7A8D4735027CA1B2_gshared (Dictionary_2_t24C46F370A775524B503796BAFADCED7F347EDD7* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UdpKit.UdpEndPoint>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4D05759656BA9CED3E93A8CCE601CF3D7ABFE077_gshared (Dictionary_2_t50EAA3B1F04C3FFF906BD102DE16639D09C0CBBB* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UdpKit.UdpEndPoint>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC6453113CBD5834ABA90DE1EAB8F4741674E00E2_gshared (Dictionary_2_t50EAA3B1F04C3FFF906BD102DE16639D09C0CBBB* __this, RuntimeObject* ___key0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UdpKit.UdpEndPoint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m06017B0EB1F4EFCD9E9E3EDE022B348D6FBC1285_gshared (Dictionary_2_t50EAA3B1F04C3FFF906BD102DE16639D09C0CBBB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m37334263CC2333A548E7DB1F3AA7444294206565_gshared (Dictionary_2_t24C46F370A775524B503796BAFADCED7F347EDD7* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Context::RegisterMessageType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared (const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Create<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Create_TisRuntimeObject_m1D6E4FB37A663A3AFB1F0AD731C8E455C691F3B4_gshared (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, RuntimeObject** ___value0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Serialize<System.Int32Enum>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEBDA8F336E03060C0A46C79C8B3F69C6AECE39DC_gshared (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, int32_t* ___value0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Query`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_1__ctor_m343A17A16DBBAA51D9CE6C2D7885E80C5EC8DFE9_gshared (Query_1_tB95F09E46EAC1904124A43D99C27AC4EB96AEC87* __this, const RuntimeMethod* method) ;

// System.Void UdpKit.UdpException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpException__ctor_m5164A566305EB2D584120FFE9E140B327B1C524C (UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void UdpKit.Blit::PackByte(System.Byte[],System.Int32&,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackByte_m991AC9E75A2BD47E5C728B4B5D75C842DD58AA8B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, uint8_t ___value2, const RuntimeMethod* method) ;
// System.Byte UdpKit.Blit::ReadByte(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Blit_ReadByte_m82CF3D5F86E53C7075A7780D8345A1938CD3AFFB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) ;
// System.Boolean UdpKit.Blit::PackBool(System.Byte[],System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Blit_PackBool_m3EE740A97BA6E0022D6B27DE66085A11F505F5E2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, bool ___value2, const RuntimeMethod* method) ;
// System.Void UdpKit.Blit::PackI32(System.Byte[],System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackI32_m2D127B42507F906D7745415ECA1F3F27940D61E6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, int32_t ___value2, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Boolean UdpKit.Blit::ReadBool(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Blit_ReadBool_m9ADCE64F1FA2930D667057791027EB961C371098 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) ;
// System.Int32 UdpKit.Blit::ReadI32(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Blit_ReadI32_mDB54756AFE365D4071C9531489DDFA803758844A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) ;
// System.Void UdpKit.Blit::PackU32(System.Byte[],System.Int32&,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackU32_mFD3702FB21822C222A9E1F9E86C4B0AD6939BD0D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, uint32_t ___value2, int32_t ___byteCount3, const RuntimeMethod* method) ;
// System.UInt32 UdpKit.Blit::ReadU32(System.Byte[],System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Blit_ReadU32_m22CBF015CF1BE9A54800D0097876589F9B2A7B4E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, int32_t ___byteCount2, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UdpKit.UdpIPv4Address::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv4Address__ctor_mF8559487FBF5D99CEFFA5AFDBBCDA578EA11A49E (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, uint32_t ___packed0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv4Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___address0, uint16_t ___port1, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv4Address::get_IsWan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsWan_m522879D234FD6C96E923C94DB7317FC3E45AFBEC (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv6Address::get_IsWan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_get_IsWan_m450D483AB813BEDA5914BBBCE7054B91564EB9CD (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpEndPoint::get_IsWan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_get_IsWan_m6E1EC15065C4E90F0C6B011DF679625AE08DAA11 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv4Address::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsPrivate_mE6B8FC641FED77D827899373F994ECF40E8683D6 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv6Address::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_get_IsPrivate_mD6BE251E323B26D4AD50CBFFDBECBCAB5A983A1D (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpEndPoint::get_IsLan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_get_IsLan_m247D9C829F3C34A272B48D875702D3526D8F48F7 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, const RuntimeMethod* method) ;
// UdpKit.UdpEndPoint/Native UdpKit.UdpEndPoint::get_AsNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89 UdpEndPoint_get_AsNative_m93BEE5A8ED32B0E68A02C1A839879210E8CC1B0D (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv6Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___address0, uint16_t ___port1, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpSteamID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m6A49C796240E97E5207E7BD862D557DDFC199933 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF ___steamId0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpSteamID::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSteamID__ctor_m63B5593FC47D224DBDAA3140F6F26A87BB1A6B2C (UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF* __this, uint64_t ___id0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpEndPoint::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m8EE89F1D5673382450EF04B2C398967C2614EC3D (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, uint64_t ___id0, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpEndPoint::Compare(UdpKit.UdpEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpEndPoint_Compare_m5191B8C95F54C96A9123F09C6A63A71619CBBE42 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___x0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___y1, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpEndPoint::CompareTo(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpEndPoint_CompareTo_mD4145320DCE8561C5A122C4D321F14A1068435B5 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___other0, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpEndPoint::Equals(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_Equals_m9C9A71B173E3B730EF7DEF693DA9B8F4D3238415 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___other0, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpEndPoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpEndPoint_GetHashCode_mA040D62B3AE5392375C69C496BFBCB8525549303 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpEndPoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_Equals_m421860D9F9CC367895470A8C3F85CFA57BE6A6DE (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv4Address::get_IsAny()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsAny_m7929D4B0075B53511E3D5036D9DB1F2AF0D9E71A (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv6Address::get_IsAny()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_get_IsAny_mB99595E1826DB89D4FC1F424ADE94B23D685B38A (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Byte[] UdpKit.UdpIPv6Address::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UdpIPv6Address_get_Bytes_m1ED32ECD379C6977240715528DACF1A395F6F14C (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String UdpKit.UdpEndPoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpEndPoint_ToString_mDDD8B7C5462043060B563BAFDE7A4C52FD8E9245 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* Regex_Matches_m6654B7647075F4D6B1470042719C2EB6FCC16024 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926 (MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3 (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, int32_t ___groupnum0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 UdpIPv6Address_Parse_mF6E37F485B13FA941B9481646F9786D8B4AE5E7A (String_t* ___address0, const RuntimeMethod* method) ;
// System.UInt16 System.UInt16::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UInt16_Parse_mBCBC892E7B238919D8666B6388201203C5B4E2D9 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 UdpIPv4Address_Parse_m3CF827562441B8EF9C2D8A5586BF570D7AB213E2 (String_t* ___address0, const RuntimeMethod* method) ;
// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::op_BitwiseAnd(UdpKit.UdpIPv4Address,UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 UdpIPv4Address_op_BitwiseAnd_mF3969CC7F6D1CF49A5B0460E5B9E0C8A3B482D94 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___a0, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___b1, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::CompareTo(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m1292E47C1FE2A1FC5BC5E6E2EB9C1FCDCEFE7745 (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpIPv4Address::CompareTo(UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv4Address_CompareTo_m0EF2C944275881559C2E1EE983BD61F9070B597D (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___other0, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpIPv6Address::CompareTo(UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv6Address_CompareTo_m7F417F08015D57B543A667BE45CC0F68337AB454 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___other0, const RuntimeMethod* method) ;
// System.Int32 System.UInt16::CompareTo(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_m73A3F7183597E4CFBCB8A98A696B4C3DFEDF0845 (uint16_t* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// UdpKit.UdpEndPoint UdpKit.UdpEndPoint/Native::get_AsManaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 Native_get_AsManaged_m8074EC558EC5FF39ABF9F190BB835E5B948245BA (Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UdpKit.UdpLog::Error(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Error_m185B1CCFC22834B75144250038F62D0B4BE25847 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32 System.Net.IPAddress::NetworkToHostOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_NetworkToHostOrder_m0CAF524D9B373D4BBA8FD96C694BB0CE177CF388 (int32_t ___network0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpIPv4Address::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv4Address__ctor_m9A03DFB8884640F6D7668E52EEE2BA39B6EBB151 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, int64_t ___addr0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpIPv4Address::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv4Address__ctor_m0C93D659D8EF2FF0DE7D24FAFA36B4D41E1A9AD2 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, uint8_t ___a0, uint8_t ___b1, uint8_t ___c2, uint8_t ___d3, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpIPv4Address::CompareOrder(UdpKit.UdpIPv4Address,UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv4Address_CompareOrder_m1107003230C3BD195AC9513249A80304874F02F5 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___x0, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___y1, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv4Address::Equals(UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_Equals_m53D2DDC6A1A4E93AF5FAD7546287283F7AF8E9D1 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___other0, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpIPv4Address::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv4Address_GetHashCode_mB43C007DD541F93E3542E52B7084F8DCD956AD45 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv4Address::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_Equals_m7A5DECBF05259465DEAD4289D666C1A2C1953E7E (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String UdpKit.UdpIPv4Address::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpIPv4Address_ToString_m94821749ACFD68AA344E5CE1C448B77C00AE2FF7 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv4Address::get_IsLocalHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsLocalHost_m5D53D4486A4AE04A1284107A16D5F7583FEB1B07 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv4Address::get_IsBroadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsBroadcast_m719AB082416D2CCD0B246DC9A8D165CB198C8C40 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) ;
// System.Byte System.Byte::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpIPv4Address/Comparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__ctor_m60B28682E370C59C594127DB5C785F3BDB652C8A (Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv6Address::op_Equality(UdpKit.UdpIPv6Address,UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_op_Equality_m691064C2AED496017B366DB8ADB61191EA905EBC (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___x0, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___y1, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv6Address::get_IsLocalHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_get_IsLocalHost_m6E6911F889A58A0BA786252C97C0EABBAD8A7F49 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv6Address::get_IsBroadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_get_IsBroadcast_m3477EACF4167FED4DCCFDC95DB313C901D793BE4 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m6811F7CF4DE7C68019D76E9DC6D17B2293BA8B12 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::get_IsIPv6SiteLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv6SiteLocal_m18578B3D7D1F42F9BF980B5E79E93B85FBF3EE66 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpAssert::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpAssert_Assert_mD587035F5FB461BB2E65A552CBB3247BEE518221 (bool ___condition0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpIPv6Address::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv6Address__ctor_m0EC568B3DABC5EF29A9F2688A74B0612FD5BC26F (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpIPv6Address::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv6Address__ctor_m6563F427B03766A7BB4A36EB2DBA29CFCCAB9665 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, uint64_t ___packed00, uint64_t ___packed11, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpIPv6Address::CompareOrder(UdpKit.UdpIPv6Address,UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv6Address_CompareOrder_m5DADC7C2837BA0CD3A1B7E0FECD9FA8753439A57 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___x0, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___y1, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv6Address::Equals(UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_Equals_mCC52609DE2211203CE2D116AA53BE933BEDF5A0C (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___other0, const RuntimeMethod* method) ;
// System.Int32 UdpKit.UdpIPv6Address::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv6Address_GetHashCode_m727ED4AF8E2B949818260D9A131E227C9FDE6C0F (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpIPv6Address::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_Equals_m63F8B1A0253D0C5EB396863A1C92D7294AF23F23 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23 (String_t* ___ipString0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Byte[] System.Net.IPAddress::GetAddressBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.String UdpKit.UdpIPv6Address::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpIPv6Address_ToString_mB08A40B4B1C165E55E09123E44350345FDFA7EF0 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpIPv6Address/Comparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__ctor_m89C271BFC15CACD254866F731E81E437FDF35755 (Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpLog/Writer::Invoke(System.UInt32,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_inline (Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, uint32_t ___level0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpMath::IsSet(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpMath_IsSet_m51256B8BB1A4DBC2FFE1E049C4C2AA26DA130A29 (uint32_t ___mask0, uint32_t ___flag1, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpLog::Write(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Write_mC083B1F6673A841D197C2A95B6BCA75EBA97125F (uint32_t ___level0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpSessionImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl__ctor_m86C333EB05653DE5479D18EAE9806875545260A9 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSession__ctor_mE5ED33AE19B8A651F75660BD6DFDAAAC6799C062 (UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
inline void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean UdpKit.UdpSessionFilter::IsValid(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpSessionFilter_IsValid_m8EDD3729BE911B4DC2BF705E62713ED2006B218F (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpLog::Warn(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object> UdpKit.UdpSessionFilter::get_FilterProperties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* UdpSessionFilter_get_FilterProperties_mFDBAAB426FF1A841CA7D01BD9FB78F23CC59C278_inline (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
inline bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UdpKit.UdpSessionFilter::Add(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpSessionFilter_Add_m2C4D78ADF9F22B0B48EDC5105F8FB87E16BB7D6B (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
inline Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.String UdpKit.UdpSessionFilter::ToDebugString<System.Object,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline String_t* UdpSessionFilter_ToDebugString_TisRuntimeObject_TisRuntimeObject_m6D5E028F137709E2BC9E56F01B63715BE184A8D4 (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63*, RuntimeObject*, const RuntimeMethod*))UdpSessionFilter_ToDebugString_TisRuntimeObject_TisRuntimeObject_m6D5E028F137709E2BC9E56F01B63715BE184A8D4_gshared)(__this, ___dictionary0, method);
}
// System.Net.IPAddress UdpKit.Utils.IPAddressExtensions::GetNetworkAddress(System.Net.IPAddress,System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddressExtensions_GetNetworkAddress_mB1274652DB124A59D7B0743B1C5E9C2A8EF0F456 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___subnetMask1, const RuntimeMethod* method) ;
// System.Boolean UdpKit.Utils.IPAddressExtensions::IsInSameSubnet(System.Net.IPAddress,System.Net.IPAddress,System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddressExtensions_IsInSameSubnet_mCAC2A0F977AF94E0D953B2830AA2720795D6A06B (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address20, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address1, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___subnetMask2, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, int64_t ___newAddress0, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.String System.String::PadRight(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadRight_m7C573780177B3246D67D860C2A75AEF5832C7543 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mC835E3C6004C07A7828640861C7E57DF6F42D0E9 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method) ;
// System.Net.IPAddress UdpKit.Utils.SubnetMask::CreateByHostBitLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* SubnetMask_CreateByHostBitLength_m91FEEB73E64E7C2BAE35EF4B2329822DBA8CAC34 (int32_t ___hostpartLength0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35 (int32_t ___value0, int32_t ___toBase1, const RuntimeMethod* method) ;
// UdpKit.UdpEndPoint UdpKit.Utils.UdpEndPointExtensions::ConvertToUdpEndPoint(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpEndPointExtensions_ConvertToUdpEndPoint_m6816D11682BA05E626768C50F65CF645118E9780 (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endpoint0, const RuntimeMethod* method) ;
// System.Void UdpKit.Utils.UdpEndPointExtensions::Register(System.Net.IPEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPointExtensions_Register_mA4CEA736EBC73B1E051AC9E95C66FC21D6E27E9B (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___ipEndPoint0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endPoint1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,UdpKit.UdpEndPoint>::get_Item(TKey)
inline UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 Dictionary_2_get_Item_m6072EB48DD02886249D1A2B3F1975E7C4CAC9793 (Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___key0, const RuntimeMethod* method)
{
	return ((  UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 (*) (Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586*, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*, const RuntimeMethod*))Dictionary_2_get_Item_m2E5055A3F3E72B7DDD6B2527DB7ADCA4A82DB7CF_gshared)(__this, ___key0, method);
}
// System.Void UdpKit.Utils.UdpEndPointExtensions::Register(UdpKit.UdpEndPoint,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPointExtensions_Register_m81F97FCAA369542E52FEE8AFF9A86F17B625696C (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endPoint0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___ipEndPoint1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Net.IPEndPoint>::get_Item(TKey)
inline IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* Dictionary_2_get_Item_m55ABC4A6EF8AC09582845A8385F0B6AD9CF3A394 (Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, const RuntimeMethod* method)
{
	return ((  IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* (*) (Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A*, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, const RuntimeMethod*))Dictionary_2_get_Item_mD64689991137F0CF167004CF79D9303CFF84EB76_gshared)(__this, ___key0, method);
}
// System.Int64 UdpKit.Utils.IPAddressExtensions::ToLong(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IPAddressExtensions_ToLong_m03281B8F9B0D4A8B04626FDC5D49795DBB57E1B5 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Net.IPEndPoint>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m9F2C5BA39BEA488D21212AFB1C9D12F20588EA1B (Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A*, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, const RuntimeMethod*))Dictionary_2_ContainsKey_mD4A75E00768A0CC1EC77CAC2989CA6A8DA6C7F6D_gshared)(__this, ___key0, method);
}
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Net.IPEndPoint>::Add(TKey,TValue)
inline void Dictionary_2_Add_m4BAC76200EE2EB618E1F611C917102D5B206490D (Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___key0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A*, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*, const RuntimeMethod*))Dictionary_2_Add_m0B95D57AE42CD4B891A990EB7A8D4735027CA1B2_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,UdpKit.UdpEndPoint>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mF98504F8D8F37BF6F4E6543EC46199086E4D44B6 (Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586*, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4D05759656BA9CED3E93A8CCE601CF3D7ABFE077_gshared)(__this, ___key0, method);
}
// System.Boolean UdpKit.UdpEndPoint::op_Equality(UdpKit.UdpEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_op_Equality_m7ABD6588A196A62B9E94DF687A4ED7ED2A2FD591 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___x0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___y1, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,UdpKit.UdpEndPoint>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC474CF75DBC3A2280B059F4CCBD02448E04EE66B (Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___key0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586*, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, const RuntimeMethod*))Dictionary_2_Add_mC6453113CBD5834ABA90DE1EAB8F4741674E00E2_gshared)(__this, ___key0, ___value1, method);
}
// UdpKit.UdpEndPoint UdpKit.UdpEndPoint::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpEndPoint_Parse_m3AFACC3B0307E6D867AF3A5734D8E958D8969445 (String_t* ___endpoint0, const RuntimeMethod* method) ;
// System.Net.IPEndPoint UdpKit.Utils.UdpEndPointExtensions::ConvertToIPEndPoint(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* UdpEndPointExtensions_ConvertToIPEndPoint_m88978E6F66606170977F90AA760204C37593A1B6 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint0, const RuntimeMethod* method) ;
// System.Boolean UdpKit.Utils.IPAddressExtensions::IsInSameSubnet(System.Net.IPAddress,System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddressExtensions_IsInSameSubnet_m9F2F07F37AF96AE81C254C99F8BFCC97289DD623 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address20, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,UdpKit.UdpEndPoint>::.ctor()
inline void Dictionary_2__ctor_m4286F932099E047720A0752628B2155F5F406ABE (Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586*, const RuntimeMethod*))Dictionary_2__ctor_m06017B0EB1F4EFCD9E9E3EDE022B348D6FBC1285_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UdpKit.UdpEndPoint,System.Net.IPEndPoint>::.ctor()
inline void Dictionary_2__ctor_mBC583D8711EB2865DEE9EDB64DDEB725868726B6 (Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A*, const RuntimeMethod*))Dictionary_2__ctor_m37334263CC2333A548E7DB1F3AA7444294206565_gshared)(__this, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Context::.ctor(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__ctor_mBB26675035269A4C81CB6434C21DC68135AADCDA (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, Guid_t ___game0, Guid_t ___peer1, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.Ack>()
inline void Context_RegisterMessageType_TisAck_tAB03C973BF7DC5005D23E5056FBAEB5A8C9CB288_mB8ACBB2BB65550D7E01442471C447ED1E6F8484E (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.Error>()
inline void Context_RegisterMessageType_TisError_t6F569A374FF84F445596C6DC89A31477516E2879_mBBE231030D4D71D9552DE771F5C67D7329CB2835 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.BroadcastSearch>()
inline void Context_RegisterMessageType_TisBroadcastSearch_t4ADD57791418F4412E25058E510EE71DD3ED98C5_mEF1E21FD002F1D98535CC59D23E0277654564C32 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.BroadcastSession>()
inline void Context_RegisterMessageType_TisBroadcastSession_tC45DA8101D9EBDB1D283A77EBD9DCA43E66068E4_m4D159A1427882988BF3CFFABC547C4033C2A0839 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.PeerConnect>()
inline void Context_RegisterMessageType_TisPeerConnect_t2959BFA7878A894DCAB13347AC707B1D3DD804B3_m308312D5304BB3B2BC7F5E1427E6CA00CF1CCC70 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.PeerConnectResult>()
inline void Context_RegisterMessageType_TisPeerConnectResult_t50B8F20CFB9950723BD66E82F38C20278F9C036F_m88445B8D990BDC85C24DF0096C881E9A94EC2A50 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.PeerDisconnect>()
inline void Context_RegisterMessageType_TisPeerDisconnect_t169A8B7D975A6A616F2821059A6F6289EFEB773E_m68072AAC165DBECDB4597C7611D3A850D20F1999 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.PeerReconnect>()
inline void Context_RegisterMessageType_TisPeerReconnect_tECCB1765089FF3437C603A709E8AE671E30BB3D7_mA217F04A4BC5ED6B3DD998F0BCFCBBDCB82A0169 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.PeerKeepAlive>()
inline void Context_RegisterMessageType_TisPeerKeepAlive_tDE6CB61A5C0C16E37DBB6BEC924F278BB12CEFEA_m090314B066C4DC254654786085E4CC520A5683CC (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.HostInfo>()
inline void Context_RegisterMessageType_TisHostInfo_tE12DEA3082D267788D270C77EEC8FC797B3AA1E8_mB4D47E8F8CC3CCFEF7D5532B2FC2EE5F849FEF42 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.HostRegister>()
inline void Context_RegisterMessageType_TisHostRegister_tA295BD781E7F601C68BC46C76603816C1BA8E5F2_mCE00B7B6EDEF00942CB1885286B636A8DC5542B0 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.GetHostList>()
inline void Context_RegisterMessageType_TisGetHostList_t05CD5923B7A374ABA3A3385955BCBBB4563FE1D8_m519E01DC5280C8514E1AAF34B024607032C4934D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.ProbeEndPoint>()
inline void Context_RegisterMessageType_TisProbeEndPoint_t3E02E40C6ED15A2BE82E94099C013031CC7FF481_m92FAB634C829DCE03483F4CE8DEC7A7FA3083B2C (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.ProbeEndPointResult>()
inline void Context_RegisterMessageType_TisProbeEndPointResult_t6075D92680B1376B640C8C1D28F3AE69EF50CAEE_m871FB38C039A574C881B33EF4BB87885FA2D0E8B (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.ProbeHairpin>()
inline void Context_RegisterMessageType_TisProbeHairpin_t1140C48633CF11495A1585F1AFF210994D61F81A_m9AC02C4E06A27A58BB40C62E5DA74AEB3C49F504 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.ProbeUnsolicited>()
inline void Context_RegisterMessageType_TisProbeUnsolicited_tE80A1928C3172F190FB078E373FAD700257AED5E_m7DA566398EEF0267260E6A14E3113C5AD5208DCD (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.ProbeFeatures>()
inline void Context_RegisterMessageType_TisProbeFeatures_tA8BCFDE6C4DB7F44686D11AC727273609B9DFCE0_mD576F0FFDCC92B7993ECB8192E16C3AB40679EF4 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.Punch>()
inline void Context_RegisterMessageType_TisPunch_t1165B66659A6B79402A9799FE2FD2DF0D62BA9F0_mEB9A299750AE68D97FF05DE853873DD23685028C (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.PunchOnce>()
inline void Context_RegisterMessageType_TisPunchOnce_t5673A5EDF032ADDA1DB8CBFAAD0C134FE08E0EFB_mD732EB76A8B3A8C97187DD8A2BCB120F0FFAEDB2 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.PunchRequest>()
inline void Context_RegisterMessageType_TisPunchRequest_t9246CCC19C46E42E2E7121025FF723A32ECA8544_m06BE624129B134904D2865385023DBFB38277010 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.DirectConnectionLan>()
inline void Context_RegisterMessageType_TisDirectConnectionLan_tDA21D8B4BA3479C4B9623A74756E3DAE32577013_mBDB75D755665C9E9C1DDFC8F0B3B47F70A249CA9 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Void UdpKit.Protocol.Context::RegisterMessageType<UdpKit.Protocol.DirectConnectionWan>()
inline void Context_RegisterMessageType_TisDirectConnectionWan_tA696ECED78D7F79C805BDC10E40E14207A216A41_m25CC1BB09F2307DD84098BEE0F1818555A3EBBDD (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))Context_RegisterMessageType_TisRuntimeObject_m771A88C9CD2BDC3AAF186548EC3E5F8E087E1853_gshared)(method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Init(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Init_m6502F4D1C802E7D2F36581D4F3C6620E9EF4F566 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, uint8_t ___type0, const RuntimeMethod* method) ;
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpLog::Info(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Info_m43C0EB22B6BD6E9FEB4AD3E45A0E767CE1DE2E0B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32 UdpKit.Protocol.Message::Serialize(System.Int32,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_Serialize_m39FA80AA081F638D6F81ABEB0BEAF190A64B0DCE (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, int32_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, bool ___pack2, const RuntimeMethod* method) ;
// UdpKit.Protocol.Message UdpKit.Protocol.Context::ParseMessage(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* Context_ParseMessage_mB6571FB38411991C79E68A23D5C7D90C4CCE7C42 (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) ;
// UdpKit.Protocol.Message UdpKit.Protocol.Context::CreateMessage(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* Context_CreateMessage_mE6E993B620C76D5AE3FE01F440552D4A9E58F5DD (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, uint8_t ___type0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::InitBuffer(System.Int32,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_InitBuffer_mABB8DA2C86C53EDB6672DF201843EE466CC3BEA6 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, int32_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, bool ___pack2, const RuntimeMethod* method) ;
// System.Int32 UdpKit.Protocol.Message::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_Serialize_m1E416E4BE1053CB01E910CA859161F91D4AB295A (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, const RuntimeMethod* method) ;
// System.Boolean UdpKit.Protocol.Message::get_Pack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Message_get_Pack_mA3AC09222F9FFF4BB359852C66B8812AE7E9F892 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Serialize(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m941C57CD27B2FD926FF724DDF57E30404807E029 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, uint8_t* ___value0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Serialize(System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_mF36A958C063298673F024EC77F8A450C48A63DCD (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, Guid_t* ___value0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Create<UdpKit.UdpSessionImpl>(T&)
inline void Message_Create_TisUdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6_mA9261EBE4D810F2191946999382C223BF6304B4A (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6** ___value0, const RuntimeMethod* method)
{
	((  void (*) (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*, UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6**, const RuntimeMethod*))Message_Create_TisRuntimeObject_m1D6E4FB37A663A3AFB1F0AD731C8E455C691F3B4_gshared)(__this, ___value0, method);
}
// System.Void UdpKit.Protocol.Message::Serialize(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m295CD7D588FE35DB3A385AB3E938FA003B639FEE (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, String_t** ___value0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Serialize(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m0E0E900C17169230959C6F21723B5CA231CF487A (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___value0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Serialize(UdpKit.UdpEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* ___value0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Serialize(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m45A4F2710E357F3A33DC737C6CC4F0034ADF7BA1 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, int32_t* ___value0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Serialize(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m19A0A278BBFDA008B2FB93D8D3B375AD96458BF6 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, bool* ___value0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Serialize<UdpKit.UdpSessionSource>(T&)
inline void Message_Serialize_TisUdpSessionSource_t8D98F3330FF28C5754CAE36D169102BD8978D2DB_m7A3E491F197B394F19ED398C09B5BC1536087F18 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, int32_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*, int32_t*, const RuntimeMethod*))Message_Serialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEBDA8F336E03060C0A46C79C8B3F69C6AECE39DC_gshared)(__this, ___value0, method);
}
// System.Void UdpKit.Protocol.Message::Create<UdpKit.NatFeatures>(T&)
inline void Message_Create_TisNatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5_mBD656E1730E687380D4256B45B862182B0753AC7 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5** ___value0, const RuntimeMethod* method)
{
	((  void (*) (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*, NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5**, const RuntimeMethod*))Message_Create_TisRuntimeObject_m1D6E4FB37A663A3AFB1F0AD731C8E455C691F3B4_gshared)(__this, ___value0, method);
}
// System.Void UdpKit.Protocol.Message::Serialize<UdpKit.NatFeatureStates>(T&)
inline void Message_Serialize_TisNatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_m8D6A5CDAC9036CC9E1A147B0E3B81C4EDBC06213 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, int32_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*, int32_t*, const RuntimeMethod*))Message_Serialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEBDA8F336E03060C0A46C79C8B3F69C6AECE39DC_gshared)(__this, ___value0, method);
}
// System.Boolean UdpKit.Protocol.Message::HasSpace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Message_HasSpace_mB557580F28AC415370F0D8FE0BD9C8AE3B11E1CA (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, int32_t ___bytes0, const RuntimeMethod* method) ;
// System.Void UdpKit.Blit::PackU32(System.Byte[],System.Int32&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackU32_m6D432A6BE1FB53F6494FE81383BC25565D5CE188 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, uint32_t ___value2, const RuntimeMethod* method) ;
// System.UInt32 UdpKit.Blit::ReadU32(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Blit_ReadU32_m02C37F115163259B325223AB882A050858A9544E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) ;
// System.Int32 UdpKit.Blit::GetStringSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Blit_GetStringSize_m68F8C87DDAFCD88510416EEEF8A6899268C87F8C (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UdpKit.Blit::PackString(System.Byte[],System.Int32&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackString_m95E89E8093F6371BAB426E157615C4DF7303AF14 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, String_t* ___value2, const RuntimeMethod* method) ;
// System.String UdpKit.Blit::ReadString(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Blit_ReadString_m4F4C733413A65BC57B75C4A96B34A598ADA68CE6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) ;
// System.Int32 UdpKit.Blit::GetBytesPrefixSize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Blit_GetBytesPrefixSize_mC026F77C0CF1547A4DDD3CA6801E4712B3273BF8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// System.Void UdpKit.Blit::PackBytesPrefix(System.Byte[],System.Int32&,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackBytesPrefix_mC2F638419351D50CF68D857FDDC43A80816839B2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___from2, const RuntimeMethod* method) ;
// System.Byte[] UdpKit.Blit::ReadBytesPrefix(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Blit_ReadBytesPrefix_m3FA9E55B1C19A531F895D36BCF8AA1E31C1AFF39 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) ;
// System.Void UdpKit.Blit::PackGuid(System.Byte[],System.Int32&,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackGuid_m5BCEDD3B004122BC45CD8A251F6FB6488E2307F9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, Guid_t ___value2, const RuntimeMethod* method) ;
// System.Guid UdpKit.Blit::ReadGuid(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Blit_ReadGuid_mE215E573547804CB700423CBE15A6BE8D9F376B9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) ;
// System.Void UdpKit.Blit::PackEndPoint(System.Byte[],System.Int32&,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackEndPoint_mB945D60F4DEF815DA7165C738CC0FC2230ACF9B6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint2, const RuntimeMethod* method) ;
// UdpKit.UdpEndPoint UdpKit.Blit::ReadEndPoint(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 Blit_ReadEndPoint_mC35F1CD0814D49F7C489E838B9B7171EA074CE22 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::Serialize(UdpKit.UdpSession&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m4E82584D7FB55388D1B6BC3CFC9B188E0E61BCA5 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4** ___session0, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Message::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_OnSerialize_mCEE0519B150B5C2210E48CB60726204490642C36 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Query::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_mBDF81B0FA38CF369A22EFFDD2E22D45CF67A1A78 (Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Query`1<UdpKit.Protocol.PeerConnectResult>::.ctor()
inline void Query_1__ctor_mDFB1765635D131FADE7162C6AA567AC78E222CE4 (Query_1_tCA85FF417F7D4CF73ED66CA60F1ED5C469ECBEE9* __this, const RuntimeMethod* method)
{
	((  void (*) (Query_1_tCA85FF417F7D4CF73ED66CA60F1ED5C469ECBEE9*, const RuntimeMethod*))Query_1__ctor_m343A17A16DBBAA51D9CE6C2D7885E80C5EC8DFE9_gshared)(__this, method);
}
// System.Void UdpKit.Protocol.Result::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_OnSerialize_m6D2A089A3968510BD6BD0FE59543EFABDE3BEE99 (Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mBB949655301609C53AA1445DD160F5CBEC42C573 (Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.Protocol.Query`1<UdpKit.Protocol.ProbeEndPointResult>::.ctor()
inline void Query_1__ctor_mB4F89F8AEBDF271DCF41FADFF95345676A2E92C1 (Query_1_tB0A314725DE19BF734E9012581A23B0CA7E455D0* __this, const RuntimeMethod* method)
{
	((  void (*) (Query_1_tB0A314725DE19BF734E9012581A23B0CA7E455D0*, const RuntimeMethod*))Query_1__ctor_m343A17A16DBBAA51D9CE6C2D7885E80C5EC8DFE9_gshared)(__this, method);
}
// System.Void UdpKit.Protocol.Message::Serialize(UdpKit.NatFeatures&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_mC769A3D5082B75CE98A1246F6B1E99CF361D0E13 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5** ___features0, const RuntimeMethod* method) ;
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
// System.Void UdpKit.UdpAssert::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpAssert_Assert_mD587035F5FB461BB2E65A552CBB3247BEE518221 (bool ___condition0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = ___condition0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071* L_2 = (UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		UdpException__ctor_m5164A566305EB2D584120FFE9E140B327B1C524C(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BEF2A7861E0A1DDE855716447F2432F92729261)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpAssert_Assert_mD587035F5FB461BB2E65A552CBB3247BEE518221_RuntimeMethod_var)));
	}

IL_0015:
	{
		return;
	}
}
// System.Void UdpKit.UdpAssert::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpAssert_Assert_m40C626A3CB4AD8D709B33A6A25437FB1D3F716FC (bool ___condition0, String_t* ___message1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = ___condition0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___message1;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F1CD743C4F8736BC6DFCA1CCE52381F6FE19F6B)), L_2, NULL);
		UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071* L_4 = (UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		UdpException__ctor_m5164A566305EB2D584120FFE9E140B327B1C524C(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpAssert_Assert_m40C626A3CB4AD8D709B33A6A25437FB1D3F716FC_RuntimeMethod_var)));
	}

IL_001b:
	{
		return;
	}
}
// System.Void UdpKit.UdpAssert::Assert(System.Boolean,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpAssert_Assert_m967B806CD94EAE0972D1E90DD0BF11423E0CF243 (bool ___condition0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = ___condition0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___message1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args2;
		String_t* L_4;
		L_4 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_2, L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F1CD743C4F8736BC6DFCA1CCE52381F6FE19F6B)), L_4, NULL);
		UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071* L_6 = (UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		UdpException__ctor_m5164A566305EB2D584120FFE9E140B327B1C524C(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpAssert_Assert_m967B806CD94EAE0972D1E90DD0BF11423E0CF243_RuntimeMethod_var)));
	}

IL_0021:
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
// System.Void UdpKit.Blit::Clear(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_Clear_m400A158206F8B02C55A1E83ED369718D66C323EF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		return;
	}
}
// System.Boolean UdpKit.Blit::PackBool(System.Byte[],System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Blit_PackBool_m3EE740A97BA6E0022D6B27DE66085A11F505F5E2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, bool ___value2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_1 = NULL;
	int32_t* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t* G_B3_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		bool L_2 = ___value2;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000a;
	}

IL_0009:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000a:
	{
		Blit_PackByte_m991AC9E75A2BD47E5C728B4B5D75C842DD58AA8B(G_B3_2, G_B3_1, (uint8_t)G_B3_0, NULL);
		bool L_3 = ___value2;
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UdpKit.Blit::ReadBool(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Blit_ReadBool_m9ADCE64F1FA2930D667057791027EB961C371098 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		uint8_t L_2;
		L_2 = Blit_ReadByte_m82CF3D5F86E53C7075A7780D8345A1938CD3AFFB(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UdpKit.Blit::PackByte(System.Byte[],System.Int32&,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackByte_m991AC9E75A2BD47E5C728B4B5D75C842DD58AA8B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, uint8_t ___value2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		int32_t L_2 = *((int32_t*)L_1);
		uint8_t L_3 = ___value2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)L_3);
		int32_t* L_4 = ___offset1;
		int32_t* L_5 = ___offset1;
		int32_t L_6 = *((int32_t*)L_5);
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Byte UdpKit.Blit::ReadByte(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Blit_ReadByte_m82CF3D5F86E53C7075A7780D8345A1938CD3AFFB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t* L_5 = ___offset1;
		int32_t* L_6 = ___offset1;
		int32_t L_7 = *((int32_t*)L_6);
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(L_7, 1));
		uint8_t L_8 = V_0;
		V_1 = L_8;
		goto IL_0010;
	}

IL_0010:
	{
		uint8_t L_9 = V_1;
		return L_9;
	}
}
// System.Int32 UdpKit.Blit::GetBytesPrefixSize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Blit_GetBytesPrefixSize_mC026F77C0CF1547A4DDD3CA6801E4712B3273BF8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_1 = 1;
		goto IL_0016;
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes0;
		NullCheck(L_2);
		V_1 = ((int32_t)il2cpp_codegen_add(5, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Void UdpKit.Blit::PackBytesPrefix(System.Byte[],System.Int32&,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackBytesPrefix_mC2F638419351D50CF68D857FDDC43A80816839B2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___from2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___from2;
		bool L_3;
		L_3 = Blit_PackBool_m3EE740A97BA6E0022D6B27DE66085A11F505F5E2(L_0, L_1, (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bytes0;
		int32_t* L_6 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___from2;
		NullCheck(L_7);
		Blit_PackI32_m2D127B42507F906D7745415ECA1F3F27940D61E6(L_5, L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___from2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bytes0;
		int32_t* L_10 = ___offset1;
		int32_t L_11 = *((int32_t*)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___from2;
		NullCheck(L_12);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, L_11, ((int32_t)(((RuntimeArray*)L_12)->max_length)), NULL);
		int32_t* L_13 = ___offset1;
		int32_t* L_14 = ___offset1;
		int32_t L_15 = *((int32_t*)L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___from2;
		NullCheck(L_16);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, ((int32_t)(((RuntimeArray*)L_16)->max_length))));
	}

IL_0033:
	{
		return;
	}
}
// System.Byte[] UdpKit.Blit::ReadBytesPrefix(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Blit_ReadBytesPrefix_m3FA9E55B1C19A531F895D36BCF8AA1E31C1AFF39 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		bool L_2;
		L_2 = Blit_ReadBool_m9ADCE64F1FA2930D667057791027EB961C371098(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes0;
		int32_t* L_5 = ___offset1;
		int32_t L_6;
		L_6 = Blit_ReadI32_mDB54756AFE365D4071C9531489DDFA803758844A(L_4, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___bytes0;
		int32_t* L_9 = ___offset1;
		int32_t L_10 = *((int32_t*)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		NullCheck(L_12);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_10, (RuntimeArray*)L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)), NULL);
		int32_t* L_13 = ___offset1;
		int32_t* L_14 = ___offset1;
		int32_t L_15 = *((int32_t*)L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		NullCheck(L_16);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, ((int32_t)(((RuntimeArray*)L_16)->max_length))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		V_2 = L_17;
		goto IL_0038;
	}

IL_0034:
	{
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_0038;
	}

IL_0038:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		return L_18;
	}
}
// System.Void UdpKit.Blit::PackBytes(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackBytes_m23C99C2471E6F15DB3C6B1FC9A1B074AA96BE5A6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___offset1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___from2, int32_t ___length3, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___from2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UdpKit.Blit::ReadBytes(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_ReadBytes_m4F52DCACB0627AACC2A4D8BBA5D2588EF93025ED (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___offset1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___into2, int32_t ___length3, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t L_1 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___into2;
		int32_t L_3 = ___length3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, 0, L_3, NULL);
		return;
	}
}
// System.Void UdpKit.Blit::PackBytes(System.Byte[],System.Int32&,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackBytes_m8C5536E4AF5EF8F1B5A215241793AABA2EBA446C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___bytesOffset1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___from2, int32_t ___fromOffset3, int32_t ___length4, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___from2;
		int32_t L_1 = ___fromOffset3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bytes0;
		int32_t* L_3 = ___bytesOffset1;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5 = ___length4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, L_4, L_5, NULL);
		int32_t* L_6 = ___bytesOffset1;
		int32_t* L_7 = ___bytesOffset1;
		int32_t L_8 = *((int32_t*)L_7);
		int32_t L_9 = ___length4;
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, L_9));
		return;
	}
}
// System.Void UdpKit.Blit::ReadBytes(System.Byte[],System.Int32&,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_ReadBytes_m4EB81E71FFCCC49739F3ECC56E6CBA32FBD9906A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___bytesOffset1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___into2, int32_t ___intoOffset3, int32_t ___length4, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___bytesOffset1;
		int32_t L_2 = *((int32_t*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___into2;
		int32_t L_4 = ___intoOffset3;
		int32_t L_5 = ___length4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_2, (RuntimeArray*)L_3, L_4, L_5, NULL);
		int32_t* L_6 = ___bytesOffset1;
		int32_t* L_7 = ___bytesOffset1;
		int32_t L_8 = *((int32_t*)L_7);
		int32_t L_9 = ___length4;
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, L_9));
		return;
	}
}
// System.Void UdpKit.Blit::PackU16(System.Byte[],System.Int32&,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackU16_m4289D8F730083416578E495A95193BB042E44A72 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, uint16_t ___value2, const RuntimeMethod* method) 
{
	BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		uint16_t L_0 = ___value2;
		(&V_0)->___UInt16_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t* L_2 = ___offset1;
		int32_t L_3 = *((int32_t*)L_2);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_4 = V_0;
		uint8_t L_5 = L_4.___Byte0_5;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bytes0;
		int32_t* L_7 = ___offset1;
		int32_t L_8 = *((int32_t*)L_7);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_9 = V_0;
		uint8_t L_10 = L_9.___Byte1_6;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1))), (uint8_t)L_10);
		int32_t* L_11 = ___offset1;
		int32_t* L_12 = ___offset1;
		int32_t L_13 = *((int32_t*)L_12);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, 2));
		return;
	}
}
// System.UInt16 UdpKit.Blit::ReadU16(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Blit_ReadU16_mE98278E4830945EA46925442C478667F358667FA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint16_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		(&V_0)->___Byte0_5 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bytes0;
		int32_t* L_6 = ___offset1;
		int32_t L_7 = *((int32_t*)L_6);
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		(&V_0)->___Byte1_6 = L_9;
		int32_t* L_10 = ___offset1;
		int32_t* L_11 = ___offset1;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_12, 2));
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_13 = V_0;
		uint16_t L_14 = L_13.___UInt16_0;
		V_1 = L_14;
		goto IL_0030;
	}

IL_0030:
	{
		uint16_t L_15 = V_1;
		return L_15;
	}
}
// System.Void UdpKit.Blit::PackI32(System.Byte[],System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackI32_m2D127B42507F906D7745415ECA1F3F27940D61E6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, int32_t ___value2, const RuntimeMethod* method) 
{
	BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		int32_t L_0 = ___value2;
		(&V_0)->___Int32_3 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t* L_2 = ___offset1;
		int32_t L_3 = *((int32_t*)L_2);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_4 = V_0;
		uint8_t L_5 = L_4.___Byte0_5;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bytes0;
		int32_t* L_7 = ___offset1;
		int32_t L_8 = *((int32_t*)L_7);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_9 = V_0;
		uint8_t L_10 = L_9.___Byte1_6;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1))), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytes0;
		int32_t* L_12 = ___offset1;
		int32_t L_13 = *((int32_t*)L_12);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_14 = V_0;
		uint8_t L_15 = L_14.___Byte2_7;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___bytes0;
		int32_t* L_17 = ___offset1;
		int32_t L_18 = *((int32_t*)L_17);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_19 = V_0;
		uint8_t L_20 = L_19.___Byte3_8;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, 3))), (uint8_t)L_20);
		int32_t* L_21 = ___offset1;
		int32_t* L_22 = ___offset1;
		int32_t L_23 = *((int32_t*)L_22);
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add(L_23, 4));
		return;
	}
}
// System.Int32 UdpKit.Blit::ReadI32(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Blit_ReadI32_mDB54756AFE365D4071C9531489DDFA803758844A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		(&V_0)->___Byte0_5 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bytes0;
		int32_t* L_6 = ___offset1;
		int32_t L_7 = *((int32_t*)L_6);
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		(&V_0)->___Byte1_6 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___bytes0;
		int32_t* L_11 = ___offset1;
		int32_t L_12 = *((int32_t*)L_11);
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		(&V_0)->___Byte2_7 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___bytes0;
		int32_t* L_16 = ___offset1;
		int32_t L_17 = *((int32_t*)L_16);
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		(&V_0)->___Byte3_8 = L_19;
		int32_t* L_20 = ___offset1;
		int32_t* L_21 = ___offset1;
		int32_t L_22 = *((int32_t*)L_21);
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, 4));
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_23 = V_0;
		int32_t L_24 = L_23.___Int32_3;
		V_1 = L_24;
		goto IL_004a;
	}

IL_004a:
	{
		int32_t L_25 = V_1;
		return L_25;
	}
}
// System.Void UdpKit.Blit::PackU32(System.Byte[],System.Int32&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackU32_m6D432A6BE1FB53F6494FE81383BC25565D5CE188 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, uint32_t ___value2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		uint32_t L_2 = ___value2;
		Blit_PackU32_mFD3702FB21822C222A9E1F9E86C4B0AD6939BD0D(L_0, L_1, L_2, 4, NULL);
		return;
	}
}
// System.Void UdpKit.Blit::PackU32(System.Byte[],System.Int32&,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackU32_mFD3702FB21822C222A9E1F9E86C4B0AD6939BD0D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, uint32_t ___value2, int32_t ___byteCount3, const RuntimeMethod* method) 
{
	BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		uint32_t L_0 = ___value2;
		(&V_0)->___UInt32_2 = L_0;
		int32_t L_1 = ___byteCount3;
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_3, 1)))
		{
			case 0:
			{
				goto IL_0032;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0062;
			}
			case 3:
			{
				goto IL_008c;
			}
		}
	}
	{
		goto IL_00c2;
	}

IL_0032:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes0;
		int32_t* L_5 = ___offset1;
		int32_t L_6 = *((int32_t*)L_5);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_7 = V_0;
		uint8_t L_8 = L_7.___Byte0_5;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)L_8);
		int32_t* L_9 = ___offset1;
		int32_t* L_10 = ___offset1;
		int32_t L_11 = *((int32_t*)L_10);
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, 1));
		goto IL_00c2;
	}

IL_0044:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___bytes0;
		int32_t* L_13 = ___offset1;
		int32_t L_14 = *((int32_t*)L_13);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_15 = V_0;
		uint8_t L_16 = L_15.___Byte0_5;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___bytes0;
		int32_t* L_18 = ___offset1;
		int32_t L_19 = *((int32_t*)L_18);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_20 = V_0;
		uint8_t L_21 = L_20.___Byte1_6;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint8_t)L_21);
		int32_t* L_22 = ___offset1;
		int32_t* L_23 = ___offset1;
		int32_t L_24 = *((int32_t*)L_23);
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add(L_24, 2));
		goto IL_00c2;
	}

IL_0062:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___bytes0;
		int32_t* L_26 = ___offset1;
		int32_t L_27 = *((int32_t*)L_26);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_28 = V_0;
		uint8_t L_29 = L_28.___Byte0_5;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___bytes0;
		int32_t* L_31 = ___offset1;
		int32_t L_32 = *((int32_t*)L_31);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_33 = V_0;
		uint8_t L_34 = L_33.___Byte1_6;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_32, 1))), (uint8_t)L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___bytes0;
		int32_t* L_36 = ___offset1;
		int32_t L_37 = *((int32_t*)L_36);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_38 = V_0;
		uint8_t L_39 = L_38.___Byte2_7;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 2))), (uint8_t)L_39);
		int32_t* L_40 = ___offset1;
		int32_t* L_41 = ___offset1;
		int32_t L_42 = *((int32_t*)L_41);
		*((int32_t*)L_40) = (int32_t)((int32_t)il2cpp_codegen_add(L_42, 3));
		goto IL_00c2;
	}

IL_008c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___bytes0;
		int32_t* L_44 = ___offset1;
		int32_t L_45 = *((int32_t*)L_44);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_46 = V_0;
		uint8_t L_47 = L_46.___Byte0_5;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (uint8_t)L_47);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___bytes0;
		int32_t* L_49 = ___offset1;
		int32_t L_50 = *((int32_t*)L_49);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_51 = V_0;
		uint8_t L_52 = L_51.___Byte1_6;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, 1))), (uint8_t)L_52);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___bytes0;
		int32_t* L_54 = ___offset1;
		int32_t L_55 = *((int32_t*)L_54);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_56 = V_0;
		uint8_t L_57 = L_56.___Byte2_7;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_55, 2))), (uint8_t)L_57);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = ___bytes0;
		int32_t* L_59 = ___offset1;
		int32_t L_60 = *((int32_t*)L_59);
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_61 = V_0;
		uint8_t L_62 = L_61.___Byte3_8;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_60, 3))), (uint8_t)L_62);
		int32_t* L_63 = ___offset1;
		int32_t* L_64 = ___offset1;
		int32_t L_65 = *((int32_t*)L_64);
		*((int32_t*)L_63) = (int32_t)((int32_t)il2cpp_codegen_add(L_65, 4));
		goto IL_00c2;
	}

IL_00c2:
	{
		return;
	}
}
// System.UInt32 UdpKit.Blit::ReadU32(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Blit_ReadU32_m02C37F115163259B325223AB882A050858A9544E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		uint32_t L_2;
		L_2 = Blit_ReadU32_m22CBF015CF1BE9A54800D0097876589F9B2A7B4E(L_0, L_1, 4, NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		uint32_t L_3 = V_0;
		return L_3;
	}
}
// System.UInt32 UdpKit.Blit::ReadU32(System.Byte[],System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Blit_ReadU32_m22CBF015CF1BE9A54800D0097876589F9B2A7B4E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, int32_t ___byteCount2, const RuntimeMethod* method) 
{
	BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		int32_t L_0 = ___byteCount2;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_2, 1)))
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_0060;
			}
			case 3:
			{
				goto IL_008d;
			}
		}
	}
	{
		goto IL_00c7;
	}

IL_002a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bytes0;
		int32_t* L_4 = ___offset1;
		int32_t L_5 = *((int32_t*)L_4);
		NullCheck(L_3);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		(&V_0)->___Byte0_5 = L_7;
		int32_t* L_8 = ___offset1;
		int32_t* L_9 = ___offset1;
		int32_t L_10 = *((int32_t*)L_9);
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, 1));
		goto IL_00c7;
	}

IL_0040:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytes0;
		int32_t* L_12 = ___offset1;
		int32_t L_13 = *((int32_t*)L_12);
		NullCheck(L_11);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		(&V_0)->___Byte0_5 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___bytes0;
		int32_t* L_17 = ___offset1;
		int32_t L_18 = *((int32_t*)L_17);
		NullCheck(L_16);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint8_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		(&V_0)->___Byte1_6 = L_20;
		int32_t* L_21 = ___offset1;
		int32_t* L_22 = ___offset1;
		int32_t L_23 = *((int32_t*)L_22);
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add(L_23, 2));
		goto IL_00c7;
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___bytes0;
		int32_t* L_25 = ___offset1;
		int32_t L_26 = *((int32_t*)L_25);
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		(&V_0)->___Byte0_5 = L_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___bytes0;
		int32_t* L_30 = ___offset1;
		int32_t L_31 = *((int32_t*)L_30);
		NullCheck(L_29);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		(&V_0)->___Byte1_6 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___bytes0;
		int32_t* L_35 = ___offset1;
		int32_t L_36 = *((int32_t*)L_35);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_36, 2));
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		(&V_0)->___Byte2_7 = L_38;
		int32_t* L_39 = ___offset1;
		int32_t* L_40 = ___offset1;
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)L_39) = (int32_t)((int32_t)il2cpp_codegen_add(L_41, 3));
		goto IL_00c7;
	}

IL_008d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___bytes0;
		int32_t* L_43 = ___offset1;
		int32_t L_44 = *((int32_t*)L_43);
		NullCheck(L_42);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		(&V_0)->___Byte0_5 = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___bytes0;
		int32_t* L_48 = ___offset1;
		int32_t L_49 = *((int32_t*)L_48);
		NullCheck(L_47);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		uint8_t L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		(&V_0)->___Byte1_6 = L_51;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___bytes0;
		int32_t* L_53 = ___offset1;
		int32_t L_54 = *((int32_t*)L_53);
		NullCheck(L_52);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 2));
		uint8_t L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		(&V_0)->___Byte2_7 = L_56;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___bytes0;
		int32_t* L_58 = ___offset1;
		int32_t L_59 = *((int32_t*)L_58);
		NullCheck(L_57);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 3));
		uint8_t L_61 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		(&V_0)->___Byte3_8 = L_61;
		int32_t* L_62 = ___offset1;
		int32_t* L_63 = ___offset1;
		int32_t L_64 = *((int32_t*)L_63);
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_add(L_64, 4));
		goto IL_00c7;
	}

IL_00c7:
	{
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_65 = V_0;
		uint32_t L_66 = L_65.___UInt32_2;
		V_3 = L_66;
		goto IL_00d0;
	}

IL_00d0:
	{
		uint32_t L_67 = V_3;
		return L_67;
	}
}
// System.Void UdpKit.Blit::PackF32(System.Byte[],System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackF32_mDD92F82D8D4E84A79684CFF5525485444A15A0A1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___offset1, float ___value2, const RuntimeMethod* method) 
{
	BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		float L_0 = ___value2;
		(&V_0)->___Float32_4 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t L_2 = ___offset1;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_3 = V_0;
		uint8_t L_4 = L_3.___Byte0_5;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bytes0;
		int32_t L_6 = ___offset1;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_7 = V_0;
		uint8_t L_8 = L_7.___Byte1_6;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, 1))), (uint8_t)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bytes0;
		int32_t L_10 = ___offset1;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_11 = V_0;
		uint8_t L_12 = L_11.___Byte2_7;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 2))), (uint8_t)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___bytes0;
		int32_t L_14 = ___offset1;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_15 = V_0;
		uint8_t L_16 = L_15.___Byte3_8;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_14, 3))), (uint8_t)L_16);
		return;
	}
}
// System.Single UdpKit.Blit::ReadF32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Blit_ReadF32_mCDCEB6F5030E2AA1E26AC4222FCBC8B16F1D23A7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___offset1, const RuntimeMethod* method) 
{
	BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t L_1 = ___offset1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		(&V_0)->___Byte0_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes0;
		int32_t L_5 = ___offset1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		(&V_0)->___Byte1_6 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___bytes0;
		int32_t L_9 = ___offset1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		(&V_0)->___Byte2_7 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___bytes0;
		int32_t L_13 = ___offset1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		(&V_0)->___Byte3_8 = L_15;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_16 = V_0;
		float L_17 = L_16.___Float32_4;
		V_1 = L_17;
		goto IL_0040;
	}

IL_0040:
	{
		float L_18 = V_1;
		return L_18;
	}
}
// System.Void UdpKit.Blit::PackU64(System.Byte[],System.Int32&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackU64_m82B7BCE39138E12CEE67AB48899EDD96BFF7A6C0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, uint64_t ___value2, const RuntimeMethod* method) 
{
	BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982));
		uint64_t L_0 = ___value2;
		(&V_0)->___UInt64_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t* L_2 = ___offset1;
		int32_t L_3 = *((int32_t*)L_2);
		BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 L_4 = V_0;
		uint8_t L_5 = L_4.___Byte0_1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bytes0;
		int32_t* L_7 = ___offset1;
		int32_t L_8 = *((int32_t*)L_7);
		BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 L_9 = V_0;
		uint8_t L_10 = L_9.___Byte1_2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1))), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytes0;
		int32_t* L_12 = ___offset1;
		int32_t L_13 = *((int32_t*)L_12);
		BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 L_14 = V_0;
		uint8_t L_15 = L_14.___Byte2_3;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___bytes0;
		int32_t* L_17 = ___offset1;
		int32_t L_18 = *((int32_t*)L_17);
		BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 L_19 = V_0;
		uint8_t L_20 = L_19.___Byte3_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, 3))), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___bytes0;
		int32_t* L_22 = ___offset1;
		int32_t L_23 = *((int32_t*)L_22);
		BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 L_24 = V_0;
		uint8_t L_25 = L_24.___Byte4_5;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 4))), (uint8_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___bytes0;
		int32_t* L_27 = ___offset1;
		int32_t L_28 = *((int32_t*)L_27);
		BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 L_29 = V_0;
		uint8_t L_30 = L_29.___Byte5_6;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, 5))), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___bytes0;
		int32_t* L_32 = ___offset1;
		int32_t L_33 = *((int32_t*)L_32);
		BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 L_34 = V_0;
		uint8_t L_35 = L_34.___Byte6_7;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 6))), (uint8_t)L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___bytes0;
		int32_t* L_37 = ___offset1;
		int32_t L_38 = *((int32_t*)L_37);
		BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 L_39 = V_0;
		uint8_t L_40 = L_39.___Byte7_8;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_38, 7))), (uint8_t)L_40);
		int32_t* L_41 = ___offset1;
		int32_t* L_42 = ___offset1;
		int32_t L_43 = *((int32_t*)L_42);
		*((int32_t*)L_41) = (int32_t)((int32_t)il2cpp_codegen_add(L_43, 8));
		return;
	}
}
// System.UInt64 UdpKit.Blit::ReadU64(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Blit_ReadU64_m26BBF1F55E9F3AD52D2442A660A0209D06941EE4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint64_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		(&V_0)->___Byte0_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bytes0;
		int32_t* L_6 = ___offset1;
		int32_t L_7 = *((int32_t*)L_6);
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		(&V_0)->___Byte1_2 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___bytes0;
		int32_t* L_11 = ___offset1;
		int32_t L_12 = *((int32_t*)L_11);
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		(&V_0)->___Byte2_3 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___bytes0;
		int32_t* L_16 = ___offset1;
		int32_t L_17 = *((int32_t*)L_16);
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		(&V_0)->___Byte3_4 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___bytes0;
		int32_t* L_21 = ___offset1;
		int32_t L_22 = *((int32_t*)L_21);
		NullCheck(L_20);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 4));
		uint8_t L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		(&V_0)->___Byte4_5 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___bytes0;
		int32_t* L_26 = ___offset1;
		int32_t L_27 = *((int32_t*)L_26);
		NullCheck(L_25);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 5));
		uint8_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		(&V_0)->___Byte5_6 = L_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___bytes0;
		int32_t* L_31 = ___offset1;
		int32_t L_32 = *((int32_t*)L_31);
		NullCheck(L_30);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 6));
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		(&V_0)->___Byte6_7 = L_34;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___bytes0;
		int32_t* L_36 = ___offset1;
		int32_t L_37 = *((int32_t*)L_36);
		NullCheck(L_35);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 7));
		uint8_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		(&V_0)->___Byte7_8 = L_39;
		int32_t* L_40 = ___offset1;
		int32_t* L_41 = ___offset1;
		int32_t L_42 = *((int32_t*)L_41);
		*((int32_t*)L_40) = (int32_t)((int32_t)il2cpp_codegen_add(L_42, 8));
		BitUnion64_tC8CE2DEA2DC0AF5DA06EDD740097A3B616F59982 L_43 = V_0;
		uint64_t L_44 = L_43.___UInt64_0;
		V_1 = L_44;
		goto IL_007e;
	}

IL_007e:
	{
		uint64_t L_45 = V_1;
		return L_45;
	}
}
// System.Int32 UdpKit.Blit::GetStringSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Blit_GetStringSize_m68F8C87DDAFCD88510416EEEF8A6899268C87F8C (String_t* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
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
		V_1 = 1;
		goto IL_0025;
	}

IL_000e:
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_5 = ___value0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(13 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_4, L_5);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, L_3)), L_6));
		goto IL_0025;
	}

IL_0025:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void UdpKit.Blit::PackString(System.Byte[],System.Int32&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackString_m95E89E8093F6371BAB426E157615C4DF7303AF14 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, String_t* ___value2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		String_t* L_2 = ___value2;
		bool L_3;
		L_3 = Blit_PackBool_m3EE740A97BA6E0022D6B27DE66085A11F505F5E2(L_0, L_1, (bool)((!(((RuntimeObject*)(String_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		int32_t* L_5 = ___offset1;
		int32_t L_6 = *((int32_t*)L_5);
		V_1 = L_6;
		int32_t* L_7 = ___offset1;
		int32_t* L_8 = ___offset1;
		int32_t L_9 = *((int32_t*)L_8);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, 4));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_11 = ___value2;
		String_t* L_12 = ___value2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___bytes0;
		int32_t* L_15 = ___offset1;
		int32_t L_16 = *((int32_t*)L_15);
		NullCheck(L_10);
		int32_t L_17;
		L_17 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(21 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_10, L_11, 0, L_13, L_14, L_16);
		V_2 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___bytes0;
		int32_t L_19 = V_2;
		Blit_PackI32_m2D127B42507F906D7745415ECA1F3F27940D61E6(L_18, (&V_1), L_19, NULL);
		int32_t* L_20 = ___offset1;
		int32_t* L_21 = ___offset1;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_2;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
	}

IL_0041:
	{
		return;
	}
}
// System.String UdpKit.Blit::ReadString(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Blit_ReadString_m4F4C733413A65BC57B75C4A96B34A598ADA68CE6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		bool L_2;
		L_2 = Blit_ReadBool_m9ADCE64F1FA2930D667057791027EB961C371098(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes0;
		int32_t* L_5 = ___offset1;
		int32_t L_6;
		L_6 = Blit_ReadI32_mDB54756AFE365D4071C9531489DDFA803758844A(L_4, L_5, NULL);
		V_1 = L_6;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
		L_7 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___bytes0;
		int32_t* L_9 = ___offset1;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = V_1;
		NullCheck(L_7);
		String_t* L_12;
		L_12 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, L_10, L_11);
		V_2 = L_12;
		int32_t* L_13 = ___offset1;
		int32_t* L_14 = ___offset1;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_1;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16));
		String_t* L_17 = V_2;
		V_3 = L_17;
		goto IL_0032;
	}

IL_002e:
	{
		V_3 = (String_t*)NULL;
		goto IL_0032;
	}

IL_0032:
	{
		String_t* L_18 = V_3;
		return L_18;
	}
}
// UdpKit.UdpEndPoint UdpKit.Blit::ReadEndPoint(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 Blit_ReadEndPoint_mC35F1CD0814D49F7C489E838B9B7171EA074CE22 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	uint16_t V_2 = 0;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		uint8_t L_2;
		L_2 = Blit_ReadByte_m82CF3D5F86E53C7075A7780D8345A1938CD3AFFB(L_0, L_1, NULL);
		(&V_0)->___Byte0_5 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bytes0;
		int32_t* L_4 = ___offset1;
		uint8_t L_5;
		L_5 = Blit_ReadByte_m82CF3D5F86E53C7075A7780D8345A1938CD3AFFB(L_3, L_4, NULL);
		(&V_0)->___Byte1_6 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bytes0;
		int32_t* L_7 = ___offset1;
		uint8_t L_8;
		L_8 = Blit_ReadByte_m82CF3D5F86E53C7075A7780D8345A1938CD3AFFB(L_6, L_7, NULL);
		(&V_0)->___Byte2_7 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bytes0;
		int32_t* L_10 = ___offset1;
		uint8_t L_11;
		L_11 = Blit_ReadByte_m82CF3D5F86E53C7075A7780D8345A1938CD3AFFB(L_9, L_10, NULL);
		(&V_0)->___Byte3_8 = L_11;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_12 = V_0;
		uint32_t L_13 = L_12.___UInt32_2;
		V_1 = L_13;
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___bytes0;
		int32_t* L_15 = ___offset1;
		uint8_t L_16;
		L_16 = Blit_ReadByte_m82CF3D5F86E53C7075A7780D8345A1938CD3AFFB(L_14, L_15, NULL);
		(&V_0)->___Byte0_5 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___bytes0;
		int32_t* L_18 = ___offset1;
		uint8_t L_19;
		L_19 = Blit_ReadByte_m82CF3D5F86E53C7075A7780D8345A1938CD3AFFB(L_17, L_18, NULL);
		(&V_0)->___Byte1_6 = L_19;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_20 = V_0;
		uint16_t L_21 = L_20.___UInt16_0;
		V_2 = L_21;
		uint32_t L_22 = V_1;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_23;
		memset((&L_23), 0, sizeof(L_23));
		UdpIPv4Address__ctor_mF8559487FBF5D99CEFFA5AFDBBCDA578EA11A49E((&L_23), L_22, /*hidden argument*/NULL);
		uint16_t L_24 = V_2;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270((&L_25), L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		goto IL_0082;
	}

IL_0082:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_26 = V_3;
		return L_26;
	}
}
// System.Void UdpKit.Blit::PackEndPoint(System.Byte[],System.Int32&,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackEndPoint_mB945D60F4DEF815DA7165C738CC0FC2230ACF9B6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint2, const RuntimeMethod* method) 
{
	BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___endpoint2;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1 = L_0.___Address_5;
		uint32_t L_2 = L_1.___Packed_3;
		(&V_0)->___UInt32_2 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bytes0;
		int32_t* L_4 = ___offset1;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_5 = V_0;
		uint8_t L_6 = L_5.___Byte0_5;
		Blit_PackByte_m991AC9E75A2BD47E5C728B4B5D75C842DD58AA8B(L_3, L_4, L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bytes0;
		int32_t* L_8 = ___offset1;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_9 = V_0;
		uint8_t L_10 = L_9.___Byte1_6;
		Blit_PackByte_m991AC9E75A2BD47E5C728B4B5D75C842DD58AA8B(L_7, L_8, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytes0;
		int32_t* L_12 = ___offset1;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_13 = V_0;
		uint8_t L_14 = L_13.___Byte2_7;
		Blit_PackByte_m991AC9E75A2BD47E5C728B4B5D75C842DD58AA8B(L_11, L_12, L_14, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___bytes0;
		int32_t* L_16 = ___offset1;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_17 = V_0;
		uint8_t L_18 = L_17.___Byte3_8;
		Blit_PackByte_m991AC9E75A2BD47E5C728B4B5D75C842DD58AA8B(L_15, L_16, L_18, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6));
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_19 = ___endpoint2;
		uint16_t L_20 = L_19.___Port_2;
		(&V_0)->___UInt16_0 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___bytes0;
		int32_t* L_22 = ___offset1;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_23 = V_0;
		uint8_t L_24 = L_23.___Byte0_5;
		Blit_PackByte_m991AC9E75A2BD47E5C728B4B5D75C842DD58AA8B(L_21, L_22, L_24, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___bytes0;
		int32_t* L_26 = ___offset1;
		BitUnion_t801BD998832EEBBAC8FA8AF6DCB05588DBB23FC6 L_27 = V_0;
		uint8_t L_28 = L_27.___Byte1_6;
		Blit_PackByte_m991AC9E75A2BD47E5C728B4B5D75C842DD58AA8B(L_25, L_26, L_28, NULL);
		return;
	}
}
// System.Void UdpKit.Blit::PackGuid(System.Byte[],System.Int32&,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blit_PackGuid_m5BCEDD3B004122BC45CD8A251F6FB6488E2307F9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, Guid_t ___value2, const RuntimeMethod* method) 
{
	BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F));
		Guid_t L_0 = ___value2;
		(&V_0)->___Guid_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t* L_2 = ___offset1;
		int32_t L_3 = *((int32_t*)L_2);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_4 = V_0;
		uint8_t L_5 = L_4.___Byte0_1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___bytes0;
		int32_t* L_7 = ___offset1;
		int32_t L_8 = *((int32_t*)L_7);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_9 = V_0;
		uint8_t L_10 = L_9.___Byte1_2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1))), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bytes0;
		int32_t* L_12 = ___offset1;
		int32_t L_13 = *((int32_t*)L_12);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_14 = V_0;
		uint8_t L_15 = L_14.___Byte2_3;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___bytes0;
		int32_t* L_17 = ___offset1;
		int32_t L_18 = *((int32_t*)L_17);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_19 = V_0;
		uint8_t L_20 = L_19.___Byte3_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, 3))), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___bytes0;
		int32_t* L_22 = ___offset1;
		int32_t L_23 = *((int32_t*)L_22);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_24 = V_0;
		uint8_t L_25 = L_24.___Byte4_5;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 4))), (uint8_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___bytes0;
		int32_t* L_27 = ___offset1;
		int32_t L_28 = *((int32_t*)L_27);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_29 = V_0;
		uint8_t L_30 = L_29.___Byte5_6;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, 5))), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___bytes0;
		int32_t* L_32 = ___offset1;
		int32_t L_33 = *((int32_t*)L_32);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_34 = V_0;
		uint8_t L_35 = L_34.___Byte6_7;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 6))), (uint8_t)L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___bytes0;
		int32_t* L_37 = ___offset1;
		int32_t L_38 = *((int32_t*)L_37);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_39 = V_0;
		uint8_t L_40 = L_39.___Byte7_8;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_38, 7))), (uint8_t)L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___bytes0;
		int32_t* L_42 = ___offset1;
		int32_t L_43 = *((int32_t*)L_42);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_44 = V_0;
		uint8_t L_45 = L_44.___Byte8_9;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_43, 8))), (uint8_t)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___bytes0;
		int32_t* L_47 = ___offset1;
		int32_t L_48 = *((int32_t*)L_47);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_49 = V_0;
		uint8_t L_50 = L_49.___Byte9_10;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_48, ((int32_t)9)))), (uint8_t)L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ___bytes0;
		int32_t* L_52 = ___offset1;
		int32_t L_53 = *((int32_t*)L_52);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_54 = V_0;
		uint8_t L_55 = L_54.___Byte10_11;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_53, ((int32_t)10)))), (uint8_t)L_55);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___bytes0;
		int32_t* L_57 = ___offset1;
		int32_t L_58 = *((int32_t*)L_57);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_59 = V_0;
		uint8_t L_60 = L_59.___Byte11_12;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, ((int32_t)11)))), (uint8_t)L_60);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ___bytes0;
		int32_t* L_62 = ___offset1;
		int32_t L_63 = *((int32_t*)L_62);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_64 = V_0;
		uint8_t L_65 = L_64.___Byte12_13;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, ((int32_t)12)))), (uint8_t)L_65);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___bytes0;
		int32_t* L_67 = ___offset1;
		int32_t L_68 = *((int32_t*)L_67);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_69 = V_0;
		uint8_t L_70 = L_69.___Byte13_14;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, ((int32_t)13)))), (uint8_t)L_70);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = ___bytes0;
		int32_t* L_72 = ___offset1;
		int32_t L_73 = *((int32_t*)L_72);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_74 = V_0;
		uint8_t L_75 = L_74.___Byte14_15;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_73, ((int32_t)14)))), (uint8_t)L_75);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___bytes0;
		int32_t* L_77 = ___offset1;
		int32_t L_78 = *((int32_t*)L_77);
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_79 = V_0;
		uint8_t L_80 = L_79.___Byte15_16;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_78, ((int32_t)15)))), (uint8_t)L_80);
		int32_t* L_81 = ___offset1;
		int32_t* L_82 = ___offset1;
		int32_t L_83 = *((int32_t*)L_82);
		*((int32_t*)L_81) = (int32_t)((int32_t)il2cpp_codegen_add(L_83, ((int32_t)16)));
		return;
	}
}
// System.Guid UdpKit.Blit::ReadGuid(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Blit_ReadGuid_mE215E573547804CB700423CBE15A6BE8D9F376B9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		(&V_0)->___Byte0_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bytes0;
		int32_t* L_6 = ___offset1;
		int32_t L_7 = *((int32_t*)L_6);
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		(&V_0)->___Byte1_2 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___bytes0;
		int32_t* L_11 = ___offset1;
		int32_t L_12 = *((int32_t*)L_11);
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		(&V_0)->___Byte2_3 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___bytes0;
		int32_t* L_16 = ___offset1;
		int32_t L_17 = *((int32_t*)L_16);
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		(&V_0)->___Byte3_4 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___bytes0;
		int32_t* L_21 = ___offset1;
		int32_t L_22 = *((int32_t*)L_21);
		NullCheck(L_20);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 4));
		uint8_t L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		(&V_0)->___Byte4_5 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___bytes0;
		int32_t* L_26 = ___offset1;
		int32_t L_27 = *((int32_t*)L_26);
		NullCheck(L_25);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 5));
		uint8_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		(&V_0)->___Byte5_6 = L_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___bytes0;
		int32_t* L_31 = ___offset1;
		int32_t L_32 = *((int32_t*)L_31);
		NullCheck(L_30);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 6));
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		(&V_0)->___Byte6_7 = L_34;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___bytes0;
		int32_t* L_36 = ___offset1;
		int32_t L_37 = *((int32_t*)L_36);
		NullCheck(L_35);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 7));
		uint8_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		(&V_0)->___Byte7_8 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___bytes0;
		int32_t* L_41 = ___offset1;
		int32_t L_42 = *((int32_t*)L_41);
		NullCheck(L_40);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 8));
		uint8_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		(&V_0)->___Byte8_9 = L_44;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___bytes0;
		int32_t* L_46 = ___offset1;
		int32_t L_47 = *((int32_t*)L_46);
		NullCheck(L_45);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, ((int32_t)9)));
		uint8_t L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		(&V_0)->___Byte9_10 = L_49;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___bytes0;
		int32_t* L_51 = ___offset1;
		int32_t L_52 = *((int32_t*)L_51);
		NullCheck(L_50);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, ((int32_t)10)));
		uint8_t L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		(&V_0)->___Byte10_11 = L_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ___bytes0;
		int32_t* L_56 = ___offset1;
		int32_t L_57 = *((int32_t*)L_56);
		NullCheck(L_55);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, ((int32_t)11)));
		uint8_t L_59 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		(&V_0)->___Byte11_12 = L_59;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___bytes0;
		int32_t* L_61 = ___offset1;
		int32_t L_62 = *((int32_t*)L_61);
		NullCheck(L_60);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, ((int32_t)12)));
		uint8_t L_64 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		(&V_0)->___Byte12_13 = L_64;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = ___bytes0;
		int32_t* L_66 = ___offset1;
		int32_t L_67 = *((int32_t*)L_66);
		NullCheck(L_65);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, ((int32_t)13)));
		uint8_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		(&V_0)->___Byte13_14 = L_69;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ___bytes0;
		int32_t* L_71 = ___offset1;
		int32_t L_72 = *((int32_t*)L_71);
		NullCheck(L_70);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(L_72, ((int32_t)14)));
		uint8_t L_74 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		(&V_0)->___Byte14_15 = L_74;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___bytes0;
		int32_t* L_76 = ___offset1;
		int32_t L_77 = *((int32_t*)L_76);
		NullCheck(L_75);
		int32_t L_78 = ((int32_t)il2cpp_codegen_add(L_77, ((int32_t)15)));
		uint8_t L_79 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		(&V_0)->___Byte15_16 = L_79;
		int32_t* L_80 = ___offset1;
		int32_t* L_81 = ___offset1;
		int32_t L_82 = *((int32_t*)L_81);
		*((int32_t*)L_80) = (int32_t)((int32_t)il2cpp_codegen_add(L_82, ((int32_t)16)));
		BitUnion128_tB0DE84C56473930750C38E807EBE18589FEEDF6F L_83 = V_0;
		Guid_t L_84 = L_83.___Guid_0;
		V_1 = L_84;
		goto IL_00ee;
	}

IL_00ee:
	{
		Guid_t L_85 = V_1;
		return L_85;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UdpKit.UdpEndPoint
IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke(const UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2& unmarshaled, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_pinvoke& marshaled)
{
	marshaled.___Port_2 = unmarshaled.___Port_2;
	marshaled.___SteamId_3 = unmarshaled.___SteamId_3;
	marshaled.___IPv6_4 = static_cast<int32_t>(unmarshaled.___IPv6_4);
	marshaled.___Address_5 = unmarshaled.___Address_5;
	marshaled.___AddressIPv6_6 = unmarshaled.___AddressIPv6_6;
}
IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke_back(const UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_pinvoke& marshaled, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2& unmarshaled)
{
	uint16_t unmarshaledPort_temp_0 = 0;
	unmarshaledPort_temp_0 = marshaled.___Port_2;
	unmarshaled.___Port_2 = unmarshaledPort_temp_0;
	UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF unmarshaledSteamId_temp_1;
	memset((&unmarshaledSteamId_temp_1), 0, sizeof(unmarshaledSteamId_temp_1));
	unmarshaledSteamId_temp_1 = marshaled.___SteamId_3;
	unmarshaled.___SteamId_3 = unmarshaledSteamId_temp_1;
	bool unmarshaledIPv6_temp_2 = false;
	unmarshaledIPv6_temp_2 = static_cast<bool>(marshaled.___IPv6_4);
	unmarshaled.___IPv6_4 = unmarshaledIPv6_temp_2;
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 unmarshaledAddress_temp_3;
	memset((&unmarshaledAddress_temp_3), 0, sizeof(unmarshaledAddress_temp_3));
	unmarshaledAddress_temp_3 = marshaled.___Address_5;
	unmarshaled.___Address_5 = unmarshaledAddress_temp_3;
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 unmarshaledAddressIPv6_temp_4;
	memset((&unmarshaledAddressIPv6_temp_4), 0, sizeof(unmarshaledAddressIPv6_temp_4));
	unmarshaledAddressIPv6_temp_4 = marshaled.___AddressIPv6_6;
	unmarshaled.___AddressIPv6_6 = unmarshaledAddressIPv6_temp_4;
}
// Conversion method for clean up from marshalling of: UdpKit.UdpEndPoint
IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_pinvoke_cleanup(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UdpKit.UdpEndPoint
IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com(const UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2& unmarshaled, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_com& marshaled)
{
	marshaled.___Port_2 = unmarshaled.___Port_2;
	marshaled.___SteamId_3 = unmarshaled.___SteamId_3;
	marshaled.___IPv6_4 = static_cast<int32_t>(unmarshaled.___IPv6_4);
	marshaled.___Address_5 = unmarshaled.___Address_5;
	marshaled.___AddressIPv6_6 = unmarshaled.___AddressIPv6_6;
}
IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com_back(const UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_com& marshaled, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2& unmarshaled)
{
	uint16_t unmarshaledPort_temp_0 = 0;
	unmarshaledPort_temp_0 = marshaled.___Port_2;
	unmarshaled.___Port_2 = unmarshaledPort_temp_0;
	UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF unmarshaledSteamId_temp_1;
	memset((&unmarshaledSteamId_temp_1), 0, sizeof(unmarshaledSteamId_temp_1));
	unmarshaledSteamId_temp_1 = marshaled.___SteamId_3;
	unmarshaled.___SteamId_3 = unmarshaledSteamId_temp_1;
	bool unmarshaledIPv6_temp_2 = false;
	unmarshaledIPv6_temp_2 = static_cast<bool>(marshaled.___IPv6_4);
	unmarshaled.___IPv6_4 = unmarshaledIPv6_temp_2;
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 unmarshaledAddress_temp_3;
	memset((&unmarshaledAddress_temp_3), 0, sizeof(unmarshaledAddress_temp_3));
	unmarshaledAddress_temp_3 = marshaled.___Address_5;
	unmarshaled.___Address_5 = unmarshaledAddress_temp_3;
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 unmarshaledAddressIPv6_temp_4;
	memset((&unmarshaledAddressIPv6_temp_4), 0, sizeof(unmarshaledAddressIPv6_temp_4));
	unmarshaledAddressIPv6_temp_4 = marshaled.___AddressIPv6_6;
	unmarshaled.___AddressIPv6_6 = unmarshaledAddressIPv6_temp_4;
}
// Conversion method for clean up from marshalling of: UdpKit.UdpEndPoint
IL2CPP_EXTERN_C void UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshal_com_cleanup(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_marshaled_com& marshaled)
{
}
// System.Boolean UdpKit.UdpEndPoint::get_IsWan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_get_IsWan_m6E1EC15065C4E90F0C6B011DF679625AE08DAA11 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, const RuntimeMethod* method) 
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B3_0 = false;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = __this->___IPv6_4;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1 = __this->___Address_5;
		V_0 = L_1;
		bool L_2;
		L_2 = UdpIPv4Address_get_IsWan_m522879D234FD6C96E923C94DB7317FC3E45AFBEC((&V_0), NULL);
		G_B3_0 = L_2;
		goto IL_0027;
	}

IL_0019:
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_3 = __this->___AddressIPv6_6;
		V_1 = L_3;
		bool L_4;
		L_4 = UdpIPv6Address_get_IsWan_m450D483AB813BEDA5914BBBCE7054B91564EB9CD((&V_1), NULL);
		G_B3_0 = L_4;
	}

IL_0027:
	{
		if (!G_B3_0)
		{
			goto IL_0034;
		}
	}
	{
		uint16_t L_5 = __this->___Port_2;
		G_B6_0 = ((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 0;
	}

IL_0035:
	{
		V_2 = (bool)G_B6_0;
		goto IL_0038;
	}

IL_0038:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool UdpEndPoint_get_IsWan_m6E1EC15065C4E90F0C6B011DF679625AE08DAA11_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpEndPoint_get_IsWan_m6E1EC15065C4E90F0C6B011DF679625AE08DAA11(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpEndPoint::get_IsLan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_get_IsLan_m247D9C829F3C34A272B48D875702D3526D8F48F7 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, const RuntimeMethod* method) 
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B3_0 = false;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = __this->___IPv6_4;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1 = __this->___Address_5;
		V_0 = L_1;
		bool L_2;
		L_2 = UdpIPv4Address_get_IsPrivate_mE6B8FC641FED77D827899373F994ECF40E8683D6((&V_0), NULL);
		G_B3_0 = L_2;
		goto IL_0027;
	}

IL_0019:
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_3 = __this->___AddressIPv6_6;
		V_1 = L_3;
		bool L_4;
		L_4 = UdpIPv6Address_get_IsPrivate_mD6BE251E323B26D4AD50CBFFDBECBCAB5A983A1D((&V_1), NULL);
		G_B3_0 = L_4;
	}

IL_0027:
	{
		if (!G_B3_0)
		{
			goto IL_0034;
		}
	}
	{
		uint16_t L_5 = __this->___Port_2;
		G_B6_0 = ((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 0;
	}

IL_0035:
	{
		V_2 = (bool)G_B6_0;
		goto IL_0038;
	}

IL_0038:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool UdpEndPoint_get_IsLan_m247D9C829F3C34A272B48D875702D3526D8F48F7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpEndPoint_get_IsLan_m247D9C829F3C34A272B48D875702D3526D8F48F7(_thisAdjusted, method);
	return _returnValue;
}
// UdpKit.UdpEndPoint/Native UdpKit.UdpEndPoint::get_AsNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89 UdpEndPoint_get_AsNative_m93BEE5A8ED32B0E68A02C1A839879210E8CC1B0D (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		bool L_0 = __this->___IPv6_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071* L_2 = (UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		UdpException__ctor_m5164A566305EB2D584120FFE9E140B327B1C524C(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1675307A152662B3704DEDFD0F17765D03337090)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpEndPoint_get_AsNative_m93BEE5A8ED32B0E68A02C1A839879210E8CC1B0D_RuntimeMethod_var)));
	}

IL_0017:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89));
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_3 = __this->___Address_5;
		(&V_1)->___Address_0 = L_3;
		uint16_t L_4 = __this->___Port_2;
		(&V_1)->___Port_1 = L_4;
		Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89 L_5 = V_1;
		V_2 = L_5;
		goto IL_003d;
	}

IL_003d:
	{
		Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89 L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89 UdpEndPoint_get_AsNative_m93BEE5A8ED32B0E68A02C1A839879210E8CC1B0D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89 _returnValue;
	_returnValue = UdpEndPoint_get_AsNative_m93BEE5A8ED32B0E68A02C1A839879210E8CC1B0D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv4Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___address0, uint16_t ___port1, const RuntimeMethod* method) 
{
	{
		UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF* L_0 = (&__this->___SteamId_3);
		il2cpp_codegen_initobj(L_0, sizeof(UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF));
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* L_1 = (&__this->___AddressIPv6_6);
		il2cpp_codegen_initobj(L_1, sizeof(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92));
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_2 = ___address0;
		__this->___Address_5 = L_2;
		__this->___IPv6_4 = (bool)0;
		uint16_t L_3 = ___port1;
		__this->___Port_2 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270_AdjustorThunk (RuntimeObject* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___address0, uint16_t ___port1, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270(_thisAdjusted, ___address0, ___port1, method);
}
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv6Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___address0, uint16_t ___port1, const RuntimeMethod* method) 
{
	{
		UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF* L_0 = (&__this->___SteamId_3);
		il2cpp_codegen_initobj(L_0, sizeof(UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF));
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* L_1 = (&__this->___Address_5);
		il2cpp_codegen_initobj(L_1, sizeof(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789));
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_2 = ___address0;
		__this->___AddressIPv6_6 = L_2;
		__this->___IPv6_4 = (bool)1;
		uint16_t L_3 = ___port1;
		__this->___Port_2 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3_AdjustorThunk (RuntimeObject* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___address0, uint16_t ___port1, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3(_thisAdjusted, ___address0, ___port1, method);
}
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpSteamID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m6A49C796240E97E5207E7BD862D557DDFC199933 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF ___steamId0, const RuntimeMethod* method) 
{
	{
		__this->___Port_2 = (uint16_t)0;
		__this->___IPv6_4 = (bool)0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* L_0 = (&__this->___Address_5);
		il2cpp_codegen_initobj(L_0, sizeof(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789));
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* L_1 = (&__this->___AddressIPv6_6);
		il2cpp_codegen_initobj(L_1, sizeof(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92));
		UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF L_2 = ___steamId0;
		__this->___SteamId_3 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void UdpEndPoint__ctor_m6A49C796240E97E5207E7BD862D557DDFC199933_AdjustorThunk (RuntimeObject* __this, UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF ___steamId0, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	UdpEndPoint__ctor_m6A49C796240E97E5207E7BD862D557DDFC199933(_thisAdjusted, ___steamId0, method);
}
// System.Void UdpKit.UdpEndPoint::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m8EE89F1D5673382450EF04B2C398967C2614EC3D (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, uint64_t ___id0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___id0;
		UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF L_1;
		memset((&L_1), 0, sizeof(L_1));
		UdpSteamID__ctor_m63B5593FC47D224DBDAA3140F6F26A87BB1A6B2C((&L_1), L_0, /*hidden argument*/NULL);
		UdpEndPoint__ctor_m6A49C796240E97E5207E7BD862D557DDFC199933(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void UdpEndPoint__ctor_m8EE89F1D5673382450EF04B2C398967C2614EC3D_AdjustorThunk (RuntimeObject* __this, uint64_t ___id0, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	UdpEndPoint__ctor_m8EE89F1D5673382450EF04B2C398967C2614EC3D(_thisAdjusted, ___id0, method);
}
// System.Int32 UdpKit.UdpEndPoint::CompareTo(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpEndPoint_CompareTo_mD4145320DCE8561C5A122C4D321F14A1068435B5 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = (*(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*)__this);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpEndPoint_Compare_m5191B8C95F54C96A9123F09C6A63A71619CBBE42(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t UdpEndPoint_CompareTo_mD4145320DCE8561C5A122C4D321F14A1068435B5_AdjustorThunk (RuntimeObject* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___other0, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UdpEndPoint_CompareTo_mD4145320DCE8561C5A122C4D321F14A1068435B5(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpEndPoint::Equals(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_Equals_m9C9A71B173E3B730EF7DEF693DA9B8F4D3238415 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = (*(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*)__this);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpEndPoint_Compare_m5191B8C95F54C96A9123F09C6A63A71619CBBE42(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool UdpEndPoint_Equals_m9C9A71B173E3B730EF7DEF693DA9B8F4D3238415_AdjustorThunk (RuntimeObject* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___other0, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpEndPoint_Equals_m9C9A71B173E3B730EF7DEF693DA9B8F4D3238415(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UdpKit.UdpEndPoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpEndPoint_GetHashCode_mA040D62B3AE5392375C69C496BFBCB8525549303 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* L_0 = (&__this->___Address_5);
		uint32_t L_1 = L_0->___Packed_3;
		uint16_t L_2 = __this->___Port_2;
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)L_2));
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t UdpEndPoint_GetHashCode_mA040D62B3AE5392375C69C496BFBCB8525549303_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UdpEndPoint_GetHashCode_mA040D62B3AE5392375C69C496BFBCB8525549303(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpEndPoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_Equals_m421860D9F9CC367895470A8C3F85CFA57BE6A6DE (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var)))
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*)((UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*)(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*)UnBox(L_1, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var))));
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_2 = (*(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*)__this);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = UdpEndPoint_Compare_m5191B8C95F54C96A9123F09C6A63A71619CBBE42(L_2, L_3, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool UdpEndPoint_Equals_m421860D9F9CC367895470A8C3F85CFA57BE6A6DE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpEndPoint_Equals_m421860D9F9CC367895470A8C3F85CFA57BE6A6DE(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.String UdpKit.UdpEndPoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpEndPoint_ToString_mDDD8B7C5462043060B563BAFDE7A4C52FD8E9245 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07049694CB1F48FEB80A07EBA44E4F84DDCAF251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59CEF764C90FE52CD03DABDBF06DB075E14E678B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A9A805533AF6E0812517ACE4475A147F7B49AF1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = __this->___Address_5;
		V_1 = L_0;
		bool L_1;
		L_1 = UdpIPv4Address_get_IsAny_m7929D4B0075B53511E3D5036D9DB1F2AF0D9E71A((&V_1), NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_2 = __this->___AddressIPv6_6;
		V_2 = L_2;
		bool L_3;
		L_3 = UdpIPv6Address_get_IsAny_mB99595E1826DB89D4FC1F424ADE94B23D685B38A((&V_2), NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF* L_4 = (&__this->___SteamId_3);
		uint64_t L_5 = L_4->___Id_0;
		G_B4_0 = ((!(((uint64_t)L_5) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B4_0 = 0;
	}

IL_0033:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF* L_7 = (&__this->___SteamId_3);
		uint64_t L_8 = L_7->___Id_0;
		uint64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7A9A805533AF6E0812517ACE4475A147F7B49AF1, L_10, NULL);
		V_3 = L_11;
		goto IL_00b1;
	}

IL_0055:
	{
		bool L_12 = __this->___IPv6_4;
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_14 = __this->___AddressIPv6_6;
		V_2 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = UdpIPv6Address_get_Bytes_m1ED32ECD379C6977240715528DACF1A395F6F14C((&V_2), NULL);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_16 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_16, L_15, NULL);
		uint16_t L_17 = __this->___Port_2;
		uint16_t L_18 = L_17;
		RuntimeObject* L_19 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral59CEF764C90FE52CD03DABDBF06DB075E14E678B, L_16, L_19, NULL);
		V_3 = L_20;
		goto IL_00b1;
	}

IL_008d:
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_21 = __this->___Address_5;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_22 = L_21;
		RuntimeObject* L_23 = Box(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var, &L_22);
		uint16_t L_24 = __this->___Port_2;
		uint16_t L_25 = L_24;
		RuntimeObject* L_26 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27;
		L_27 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral07049694CB1F48FEB80A07EBA44E4F84DDCAF251, L_23, L_26, NULL);
		V_3 = L_27;
		goto IL_00b1;
	}

IL_00b1:
	{
		String_t* L_28 = V_3;
		return L_28;
	}
}
IL2CPP_EXTERN_C  String_t* UdpEndPoint_ToString_mDDD8B7C5462043060B563BAFDE7A4C52FD8E9245_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UdpEndPoint_ToString_mDDD8B7C5462043060B563BAFDE7A4C52FD8E9245(_thisAdjusted, method);
	return _returnValue;
}
// UdpKit.UdpEndPoint UdpKit.UdpEndPoint::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpEndPoint_Parse_m3AFACC3B0307E6D867AF3A5734D8E958D8969445 (String_t* ___endpoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F3253B939AE75999855ABE1A9D83B51B9A53E6);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* V_3 = NULL;
	MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* V_4 = NULL;
	bool V_5 = false;
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 V_6;
	memset((&V_6), 0, sizeof(V_6));
	uint16_t V_7 = 0;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		String_t* L_0 = ___endpoint0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_0, L_2, NULL);
		V_0 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_009d;
		}
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_6 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_6, _stringLiteralE8F3253B939AE75999855ABE1A9D83B51B9A53E6, 1, NULL);
		V_3 = L_6;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_7 = V_3;
		String_t* L_8 = ___endpoint0;
		NullCheck(L_7);
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_9;
		L_9 = Regex_Matches_m6654B7647075F4D6B1470042719C2EB6FCC16024(L_7, L_8, NULL);
		V_4 = L_9;
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926(L_10, NULL);
		V_5 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0092;
		}
	}
	{
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_13 = V_4;
		NullCheck(L_13);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_14;
		L_14 = VirtualFuncInvoker1< Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F*, int32_t >::Invoke(35 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_13, 0);
		NullCheck(L_14);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_15;
		L_15 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_14);
		NullCheck(L_15);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_16;
		L_16 = GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3(L_15, 1, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_18;
		L_18 = UdpIPv6Address_Parse_mF6E37F485B13FA941B9481646F9786D8B4AE5E7A(L_17, NULL);
		V_6 = L_18;
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_19 = V_4;
		NullCheck(L_19);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_20;
		L_20 = VirtualFuncInvoker1< Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F*, int32_t >::Invoke(35 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_19, 0);
		NullCheck(L_20);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_21;
		L_21 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_20);
		NullCheck(L_21);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_22;
		L_22 = GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3(L_21, 2, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_22, NULL);
		uint16_t L_24;
		L_24 = UInt16_Parse_mBCBC892E7B238919D8666B6388201203C5B4E2D9(L_23, NULL);
		V_7 = L_24;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_25 = V_6;
		uint16_t L_26 = V_7;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3((&L_27), L_25, L_26, /*hidden argument*/NULL);
		V_8 = L_27;
		goto IL_00b8;
	}

IL_0092:
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_28 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81742155B42580CAD3E12FE6A67E8665294CCE04)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpEndPoint_Parse_m3AFACC3B0307E6D867AF3A5734D8E958D8969445_RuntimeMethod_var)));
	}

IL_009d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 0;
		String_t* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_32;
		L_32 = UdpIPv4Address_Parse_m3CF827562441B8EF9C2D8A5586BF570D7AB213E2(L_31, NULL);
		V_1 = L_32;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_33 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = 1;
		String_t* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		uint16_t L_37;
		L_37 = UInt16_Parse_mBCBC892E7B238919D8666B6388201203C5B4E2D9(L_36, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_38;
		memset((&L_38), 0, sizeof(L_38));
		UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270((&L_38), L_33, L_37, /*hidden argument*/NULL);
		V_8 = L_38;
		goto IL_00b8;
	}

IL_00b8:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_39 = V_8;
		return L_39;
	}
}
// System.Boolean UdpKit.UdpEndPoint::op_Equality(UdpKit.UdpEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_op_Equality_m7ABD6588A196A62B9E94DF687A4ED7ED2A2FD591 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___x0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___x0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpEndPoint_Compare_m5191B8C95F54C96A9123F09C6A63A71619CBBE42(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UdpKit.UdpEndPoint::op_Inequality(UdpKit.UdpEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_op_Inequality_mEAB9357D74528B725FCB564D93B6C05D8E1BE550 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___x0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___x0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpEndPoint_Compare_m5191B8C95F54C96A9123F09C6A63A71619CBBE42(L_0, L_1, NULL);
		V_0 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// UdpKit.UdpEndPoint UdpKit.UdpEndPoint::op_BitwiseAnd(UdpKit.UdpEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpEndPoint_op_BitwiseAnd_m8EB8B9BA635C7ADAB18979319D81CABE90204A62 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___a0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___a0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1 = L_0.___Address_5;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_2 = ___b1;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_3 = L_2.___Address_5;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_4;
		L_4 = UdpIPv4Address_op_BitwiseAnd_mF3969CC7F6D1CF49A5B0460E5B9E0C8A3B482D94(L_1, L_3, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_5 = ___a0;
		uint16_t L_6 = L_5.___Port_2;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_7 = ___b1;
		uint16_t L_8 = L_7.___Port_2;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270((&L_9), L_4, (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_6&(int32_t)L_8))), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0028;
	}

IL_0028:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_10 = V_0;
		return L_10;
	}
}
// System.Int32 UdpKit.UdpEndPoint::Compare(UdpKit.UdpEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpEndPoint_Compare_m5191B8C95F54C96A9123F09C6A63A71619CBBE42 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___x0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___y1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	uint16_t V_7 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___x0;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_1 = L_0.___AddressIPv6_6;
		V_2 = L_1;
		bool L_2;
		L_2 = UdpIPv6Address_get_IsAny_mB99595E1826DB89D4FC1F424ADE94B23D685B38A((&V_2), NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_3 = ___y1;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_4 = L_3.___AddressIPv6_6;
		V_2 = L_4;
		bool L_5;
		L_5 = UdpIPv6Address_get_IsAny_mB99595E1826DB89D4FC1F424ADE94B23D685B38A((&V_2), NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_6 = ___x0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_7 = L_6.___Address_5;
		V_3 = L_7;
		bool L_8;
		L_8 = UdpIPv4Address_get_IsAny_m7929D4B0075B53511E3D5036D9DB1F2AF0D9E71A((&V_3), NULL);
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_9 = ___y1;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_10 = L_9.___Address_5;
		V_3 = L_10;
		bool L_11;
		L_11 = UdpIPv4Address_get_IsAny_m7929D4B0075B53511E3D5036D9DB1F2AF0D9E71A((&V_3), NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = 0;
	}

IL_0042:
	{
		V_1 = (bool)G_B5_0;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_13 = ___x0;
		UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF L_14 = L_13.___SteamId_3;
		uint64_t L_15 = L_14.___Id_0;
		V_4 = L_15;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_16 = ___y1;
		UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF L_17 = L_16.___SteamId_3;
		uint64_t L_18 = L_17.___Id_0;
		int32_t L_19;
		L_19 = UInt64_CompareTo_m1292E47C1FE2A1FC5BC5E6E2EB9C1FCDCEFE7745((&V_4), L_18, NULL);
		V_5 = L_19;
		goto IL_00cc;
	}

IL_006a:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_20 = ___x0;
		bool L_21 = L_20.___IPv6_4;
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_22 = ___y1;
		bool L_23 = L_22.___IPv6_4;
		if (L_23)
		{
			goto IL_0090;
		}
	}

IL_007a:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_24 = ___x0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_25 = L_24.___Address_5;
		V_3 = L_25;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_26 = ___y1;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_27 = L_26.___Address_5;
		int32_t L_28;
		L_28 = UdpIPv4Address_CompareTo_m0EF2C944275881559C2E1EE983BD61F9070B597D((&V_3), L_27, NULL);
		G_B11_0 = L_28;
		goto IL_00a4;
	}

IL_0090:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_29 = ___x0;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_30 = L_29.___AddressIPv6_6;
		V_2 = L_30;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_31 = ___y1;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_32 = L_31.___AddressIPv6_6;
		int32_t L_33;
		L_33 = UdpIPv6Address_CompareTo_m7F417F08015D57B543A667BE45CC0F68337AB454((&V_2), L_32, NULL);
		G_B11_0 = L_33;
	}

IL_00a4:
	{
		V_0 = G_B11_0;
		int32_t L_34 = V_0;
		V_6 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_00c7;
		}
	}
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_36 = ___x0;
		uint16_t L_37 = L_36.___Port_2;
		V_7 = L_37;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_38 = ___y1;
		uint16_t L_39 = L_38.___Port_2;
		int32_t L_40;
		L_40 = UInt16_CompareTo_m73A3F7183597E4CFBCB8A98A696B4C3DFEDF0845((&V_7), L_39, NULL);
		V_0 = L_40;
	}

IL_00c7:
	{
		int32_t L_41 = V_0;
		V_5 = L_41;
		goto IL_00cc;
	}

IL_00cc:
	{
		int32_t L_42 = V_5;
		return L_42;
	}
}
// System.Void UdpKit.UdpEndPoint::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__cctor_m952A8BC2DA2669E083B9B85F6B23973349B679B5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = ((UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var))->___Any_0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270((&L_1), L_0, (uint16_t)0, /*hidden argument*/NULL);
		((UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var))->___Any_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_2 = ((UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var))->___Any_0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3((&L_3), L_2, (uint16_t)0, /*hidden argument*/NULL);
		((UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var))->___AnyIPv6_1 = L_3;
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
// UdpKit.UdpEndPoint UdpKit.UdpEndPoint/Native::get_AsManaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 Native_get_AsManaged_m8074EC558EC5FF39ABF9F190BB835E5B948245BA (Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89* __this, const RuntimeMethod* method) 
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = __this->___Address_0;
		uint16_t L_1 = __this->___Port_1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 Native_get_AsManaged_m8074EC558EC5FF39ABF9F190BB835E5B948245BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Native_tA2D620FA6C4E261B4E25ED7FC7610632EFD4DE89*>(__this + _offset);
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 _returnValue;
	_returnValue = Native_get_AsManaged_m8074EC558EC5FF39ABF9F190BB835E5B948245BA(_thisAdjusted, method);
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
// System.Boolean UdpKit.UdpEndPoint/Comparer::System.Collections.Generic.IEqualityComparer<UdpKit.UdpEndPoint>.Equals(UdpKit.UdpEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Comparer_System_Collections_Generic_IEqualityComparerU3CUdpKit_UdpEndPointU3E_Equals_m4CEE0BE6D6CCFE7B173A5328DF2CD5C8FB505A12 (Comparer_t7EC97C2245A9F0DFC0DEC6C2D36328E349EC6274* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___x0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___x0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpEndPoint_Compare_m5191B8C95F54C96A9123F09C6A63A71619CBBE42(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UdpKit.UdpEndPoint/Comparer::System.Collections.Generic.IEqualityComparer<UdpKit.UdpEndPoint>.GetHashCode(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_System_Collections_Generic_IEqualityComparerU3CUdpKit_UdpEndPointU3E_GetHashCode_mDF29D8E2E745361F7467F0AC5163605FD8F9DD29 (Comparer_t7EC97C2245A9F0DFC0DEC6C2D36328E349EC6274* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UdpEndPoint_GetHashCode_mA040D62B3AE5392375C69C496BFBCB8525549303((&___obj0), NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpEndPoint/Comparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__ctor_mAF7E4EABEAE6ECDF81EC43F559930B9A2B424BFD (Comparer_t7EC97C2245A9F0DFC0DEC6C2D36328E349EC6274* __this, const RuntimeMethod* method) 
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
// System.Void UdpKit.UdpException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpException__ctor_m1C2F46D4D9B8B2952E3405B477A49A315A32C9B4 (UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071* __this, const RuntimeMethod* method) 
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
// System.Void UdpKit.UdpException::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpException__ctor_m8416B864B4F6C7209ECFA4BBA4FA96C2BE7CA590 (UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071* __this, String_t* ___fmt0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___fmt0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		String_t* L_2;
		L_2 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_0, L_1, NULL);
		UdpException__ctor_m5164A566305EB2D584120FFE9E140B327B1C524C(__this, L_2, NULL);
		return;
	}
}
// System.Void UdpKit.UdpException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpException__ctor_m5164A566305EB2D584120FFE9E140B327B1C524C (UdpException_t7241D7F24AB1643F9F745DF38128A1FB5E60C071* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		String_t* L_1 = ___msg0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Error_m185B1CCFC22834B75144250038F62D0B4BE25847(L_1, L_2, NULL);
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
// System.Void UdpKit.UdpIPv4Address::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv4Address__ctor_mF8559487FBF5D99CEFFA5AFDBBCDA578EA11A49E (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, uint32_t ___packed0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		int32_t L_0 = 0;
		V_0 = (uint8_t)L_0;
		__this->___Byte3_7 = (uint8_t)L_0;
		uint8_t L_1 = V_0;
		uint8_t L_2 = L_1;
		V_0 = L_2;
		__this->___Byte2_6 = L_2;
		uint8_t L_3 = V_0;
		uint8_t L_4 = L_3;
		V_0 = L_4;
		__this->___Byte1_5 = L_4;
		uint8_t L_5 = V_0;
		__this->___Byte0_4 = L_5;
		uint32_t L_6 = ___packed0;
		__this->___Packed_3 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void UdpIPv4Address__ctor_mF8559487FBF5D99CEFFA5AFDBBCDA578EA11A49E_AdjustorThunk (RuntimeObject* __this, uint32_t ___packed0, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	UdpIPv4Address__ctor_mF8559487FBF5D99CEFFA5AFDBBCDA578EA11A49E(_thisAdjusted, ___packed0, method);
}
// System.Void UdpKit.UdpIPv4Address::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv4Address__ctor_m9A03DFB8884640F6D7668E52EEE2BA39B6EBB151 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, int64_t ___addr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		int32_t L_0 = 0;
		V_0 = (uint8_t)L_0;
		__this->___Byte3_7 = (uint8_t)L_0;
		uint8_t L_1 = V_0;
		uint8_t L_2 = L_1;
		V_0 = L_2;
		__this->___Byte2_6 = L_2;
		uint8_t L_3 = V_0;
		uint8_t L_4 = L_3;
		V_0 = L_4;
		__this->___Byte1_5 = L_4;
		uint8_t L_5 = V_0;
		__this->___Byte0_4 = L_5;
		int64_t L_6 = ___addr0;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = IPAddress_NetworkToHostOrder_m0CAF524D9B373D4BBA8FD96C694BB0CE177CF388(((int32_t)L_6), NULL);
		__this->___Packed_3 = L_7;
		return;
	}
}
IL2CPP_EXTERN_C  void UdpIPv4Address__ctor_m9A03DFB8884640F6D7668E52EEE2BA39B6EBB151_AdjustorThunk (RuntimeObject* __this, int64_t ___addr0, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	UdpIPv4Address__ctor_m9A03DFB8884640F6D7668E52EEE2BA39B6EBB151(_thisAdjusted, ___addr0, method);
}
// System.Void UdpKit.UdpIPv4Address::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv4Address__ctor_m0C93D659D8EF2FF0DE7D24FAFA36B4D41E1A9AD2 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, uint8_t ___a0, uint8_t ___b1, uint8_t ___c2, uint8_t ___d3, const RuntimeMethod* method) 
{
	{
		__this->___Packed_3 = 0;
		uint8_t L_0 = ___d3;
		__this->___Byte0_4 = L_0;
		uint8_t L_1 = ___c2;
		__this->___Byte1_5 = L_1;
		uint8_t L_2 = ___b1;
		__this->___Byte2_6 = L_2;
		uint8_t L_3 = ___a0;
		__this->___Byte3_7 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void UdpIPv4Address__ctor_m0C93D659D8EF2FF0DE7D24FAFA36B4D41E1A9AD2_AdjustorThunk (RuntimeObject* __this, uint8_t ___a0, uint8_t ___b1, uint8_t ___c2, uint8_t ___d3, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	UdpIPv4Address__ctor_m0C93D659D8EF2FF0DE7D24FAFA36B4D41E1A9AD2(_thisAdjusted, ___a0, ___b1, ___c2, ___d3, method);
}
// System.Boolean UdpKit.UdpIPv4Address::Equals(UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_Equals_m53D2DDC6A1A4E93AF5FAD7546287283F7AF8E9D1 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = (*(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*)__this);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv4Address_CompareOrder_m1107003230C3BD195AC9513249A80304874F02F5(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv4Address_Equals_m53D2DDC6A1A4E93AF5FAD7546287283F7AF8E9D1_AdjustorThunk (RuntimeObject* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___other0, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv4Address_Equals_m53D2DDC6A1A4E93AF5FAD7546287283F7AF8E9D1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UdpKit.UdpIPv4Address::CompareTo(UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv4Address_CompareTo_m0EF2C944275881559C2E1EE983BD61F9070B597D (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = (*(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*)__this);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv4Address_CompareOrder_m1107003230C3BD195AC9513249A80304874F02F5(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t UdpIPv4Address_CompareTo_m0EF2C944275881559C2E1EE983BD61F9070B597D_AdjustorThunk (RuntimeObject* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___other0, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UdpIPv4Address_CompareTo_m0EF2C944275881559C2E1EE983BD61F9070B597D(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UdpKit.UdpIPv4Address::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv4Address_GetHashCode_mB43C007DD541F93E3542E52B7084F8DCD956AD45 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___Packed_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UdpIPv4Address_GetHashCode_mB43C007DD541F93E3542E52B7084F8DCD956AD45_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UdpIPv4Address_GetHashCode_mB43C007DD541F93E3542E52B7084F8DCD956AD45(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv4Address::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_Equals_m7A5DECBF05259465DEAD4289D666C1A2C1953E7E (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var)))
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*)((UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*)(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*)UnBox(L_1, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var))));
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_2 = (*(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*)__this);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = UdpIPv4Address_CompareOrder_m1107003230C3BD195AC9513249A80304874F02F5(L_2, L_3, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv4Address_Equals_m7A5DECBF05259465DEAD4289D666C1A2C1953E7E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv4Address_Equals_m7A5DECBF05259465DEAD4289D666C1A2C1953E7E(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.String UdpKit.UdpIPv4Address::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpIPv4Address_ToString_m94821749ACFD68AA344E5CE1C448B77C00AE2FF7 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral992D23FE06E5F4D73C8734FB3DEFDBABC48F60BA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		uint8_t L_2 = __this->___Byte3_7;
		uint8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		uint8_t L_6 = __this->___Byte2_6;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = __this->___Byte1_5;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14 = __this->___Byte0_4;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral992D23FE06E5F4D73C8734FB3DEFDBABC48F60BA, L_13, NULL);
		V_0 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* UdpIPv4Address_ToString_m94821749ACFD68AA344E5CE1C448B77C00AE2FF7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UdpIPv4Address_ToString_m94821749ACFD68AA344E5CE1C448B77C00AE2FF7(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv4Address::get_IsAny()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsAny_m7929D4B0075B53511E3D5036D9DB1F2AF0D9E71A (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		uint8_t L_0 = __this->___Byte0_4;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_1 = __this->___Byte1_5;
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_2 = __this->___Byte2_6;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t L_3 = __this->___Byte3_7;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv4Address_get_IsAny_m7929D4B0075B53511E3D5036D9DB1F2AF0D9E71A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv4Address_get_IsAny_m7929D4B0075B53511E3D5036D9DB1F2AF0D9E71A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv4Address::get_IsLocalHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsLocalHost_m5D53D4486A4AE04A1284107A16D5F7583FEB1B07 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		uint8_t L_0 = __this->___Byte3_7;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_0026;
		}
	}
	{
		uint8_t L_1 = __this->___Byte2_6;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		uint8_t L_2 = __this->___Byte1_5;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		uint8_t L_3 = __this->___Byte0_4;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 0;
	}

IL_0027:
	{
		V_0 = (bool)G_B5_0;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv4Address_get_IsLocalHost_m5D53D4486A4AE04A1284107A16D5F7583FEB1B07_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv4Address_get_IsLocalHost_m5D53D4486A4AE04A1284107A16D5F7583FEB1B07(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv4Address::get_IsBroadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsBroadcast_m719AB082416D2CCD0B246DC9A8D165CB198C8C40 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		uint8_t L_0 = __this->___Byte3_7;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0037;
		}
	}
	{
		uint8_t L_1 = __this->___Byte2_6;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0037;
		}
	}
	{
		uint8_t L_2 = __this->___Byte1_5;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0037;
		}
	}
	{
		uint8_t L_3 = __this->___Byte0_4;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)((int32_t)255)))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 0;
	}

IL_0038:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv4Address_get_IsBroadcast_m719AB082416D2CCD0B246DC9A8D165CB198C8C40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv4Address_get_IsBroadcast_m719AB082416D2CCD0B246DC9A8D165CB198C8C40(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv4Address::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsPrivate_mE6B8FC641FED77D827899373F994ECF40E8683D6 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		uint8_t L_0 = __this->___Byte3_7;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_004b;
		}
	}
	{
		uint8_t L_1 = __this->___Byte3_7;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)172)))))
		{
			goto IL_002c;
		}
	}
	{
		uint8_t L_2 = __this->___Byte2_6;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)16))))
		{
			goto IL_002c;
		}
	}
	{
		uint8_t L_3 = __this->___Byte2_6;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)31))))
		{
			goto IL_004b;
		}
	}

IL_002c:
	{
		uint8_t L_4 = __this->___Byte3_7;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)192)))))
		{
			goto IL_0048;
		}
	}
	{
		uint8_t L_5 = __this->___Byte2_6;
		G_B7_0 = ((((int32_t)L_5) == ((int32_t)((int32_t)168)))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B7_0 = 0;
	}

IL_0049:
	{
		G_B9_0 = G_B7_0;
		goto IL_004c;
	}

IL_004b:
	{
		G_B9_0 = 1;
	}

IL_004c:
	{
		V_0 = (bool)G_B9_0;
		goto IL_004f;
	}

IL_004f:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv4Address_get_IsPrivate_mE6B8FC641FED77D827899373F994ECF40E8683D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv4Address_get_IsPrivate_mE6B8FC641FED77D827899373F994ECF40E8683D6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv4Address::get_IsWan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsWan_m522879D234FD6C96E923C94DB7317FC3E45AFBEC (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		bool L_0;
		L_0 = UdpIPv4Address_get_IsAny_m7929D4B0075B53511E3D5036D9DB1F2AF0D9E71A(__this, NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1;
		L_1 = UdpIPv4Address_get_IsLocalHost_m5D53D4486A4AE04A1284107A16D5F7583FEB1B07(__this, NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = UdpIPv4Address_get_IsBroadcast_m719AB082416D2CCD0B246DC9A8D165CB198C8C40(__this, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		bool L_3;
		L_3 = UdpIPv4Address_get_IsPrivate_mE6B8FC641FED77D827899373F994ECF40E8683D6(__this, NULL);
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv4Address_get_IsWan_m522879D234FD6C96E923C94DB7317FC3E45AFBEC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv4Address_get_IsWan_m522879D234FD6C96E923C94DB7317FC3E45AFBEC(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv4Address::op_Equality(UdpKit.UdpIPv4Address,UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_op_Equality_m24E5196BE83BAFEBD5A74D0B29AC0618D317C1E4 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___x0, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = ___x0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv4Address_CompareOrder_m1107003230C3BD195AC9513249A80304874F02F5(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UdpKit.UdpIPv4Address::op_Inequality(UdpKit.UdpIPv4Address,UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_op_Inequality_mA93D80CDD5464820CFCD8821D6021180AA5F9EA9 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___x0, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = ___x0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv4Address_CompareOrder_m1107003230C3BD195AC9513249A80304874F02F5(L_0, L_1, NULL);
		V_0 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::op_BitwiseAnd(UdpKit.UdpIPv4Address,UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 UdpIPv4Address_op_BitwiseAnd_mF3969CC7F6D1CF49A5B0460E5B9E0C8A3B482D94 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___a0, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___b1, const RuntimeMethod* method) 
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = ___a0;
		uint32_t L_1 = L_0.___Packed_3;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_2 = ___b1;
		uint32_t L_3 = L_2.___Packed_3;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_4;
		memset((&L_4), 0, sizeof(L_4));
		UdpIPv4Address__ctor_mF8559487FBF5D99CEFFA5AFDBBCDA578EA11A49E((&L_4), ((int32_t)((int32_t)L_1&(int32_t)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_5 = V_0;
		return L_5;
	}
}
// System.Int32 UdpKit.UdpIPv4Address::CompareOrder(UdpKit.UdpIPv4Address,UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv4Address_CompareOrder_m1107003230C3BD195AC9513249A80304874F02F5 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___x0, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___y1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = ___x0;
		uint32_t L_1 = L_0.___Packed_3;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_2 = ___y1;
		uint32_t L_3 = L_2.___Packed_3;
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)L_3)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = 1;
		goto IL_0031;
	}

IL_0017:
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_5 = ___x0;
		uint32_t L_6 = L_5.___Packed_3;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_7 = ___y1;
		uint32_t L_8 = L_7.___Packed_3;
		V_2 = (bool)((!(((uint32_t)L_6) >= ((uint32_t)L_8)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_002d;
		}
	}
	{
		V_1 = (-1);
		goto IL_0031;
	}

IL_002d:
	{
		V_1 = 0;
		goto IL_0031;
	}

IL_0031:
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 UdpIPv4Address_Parse_m3CF827562441B8EF9C2D8A5586BF570D7AB213E2 (String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	bool V_1 = false;
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		String_t* L_0 = ___address0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_0, L_2, NULL);
		V_0 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		V_1 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_6 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7449D16D9732F5F7446ECF54C56A171EDDDDF24A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpIPv4Address_Parse_m3CF827562441B8EF9C2D8A5586BF570D7AB213E2_RuntimeMethod_var)));
	}

IL_002c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint8_t L_10;
		L_10 = Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417(L_9, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		uint8_t L_14;
		L_14 = Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417(L_13, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 2;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		uint8_t L_18;
		L_18 = Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417(L_17, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 3;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		uint8_t L_22;
		L_22 = Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417(L_21, NULL);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_23;
		memset((&L_23), 0, sizeof(L_23));
		UdpIPv4Address__ctor_m0C93D659D8EF2FF0DE7D24FAFA36B4D41E1A9AD2((&L_23), L_10, L_14, L_18, L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		goto IL_0054;
	}

IL_0054:
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_24 = V_2;
		return L_24;
	}
}
// System.Void UdpKit.UdpIPv4Address::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv4Address__cctor_m149867F3F68737D678608670571B5114100D455D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var))->___Any_0), sizeof(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789));
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0;
		memset((&L_0), 0, sizeof(L_0));
		UdpIPv4Address__ctor_m0C93D659D8EF2FF0DE7D24FAFA36B4D41E1A9AD2((&L_0), (uint8_t)((int32_t)127), (uint8_t)0, (uint8_t)0, (uint8_t)1, /*hidden argument*/NULL);
		((UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var))->___Localhost_1 = L_0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1;
		memset((&L_1), 0, sizeof(L_1));
		UdpIPv4Address__ctor_m0C93D659D8EF2FF0DE7D24FAFA36B4D41E1A9AD2((&L_1), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		((UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var))->___Broadcast_2 = L_1;
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
// System.Void UdpKit.UdpIPv4Address/Comparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__ctor_m60B28682E370C59C594127DB5C785F3BDB652C8A (Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 UdpKit.UdpIPv4Address/Comparer::System.Collections.Generic.IComparer<UdpKit.UdpIPv4Address>.Compare(UdpKit.UdpIPv4Address,UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_System_Collections_Generic_IComparerU3CUdpKit_UdpIPv4AddressU3E_Compare_mFDD510A172CDA71F7DC6DBF5516E03F9747A8417 (Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___x0, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = ___x0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv4Address_CompareOrder_m1107003230C3BD195AC9513249A80304874F02F5(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UdpKit.UdpIPv4Address/Comparer::System.Collections.Generic.IEqualityComparer<UdpKit.UdpIPv4Address>.Equals(UdpKit.UdpIPv4Address,UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Comparer_System_Collections_Generic_IEqualityComparerU3CUdpKit_UdpIPv4AddressU3E_Equals_m61B9C1FA161289FE6FB881614E2CBB1B58FE0281 (Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___x0, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = ___x0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv4Address_CompareOrder_m1107003230C3BD195AC9513249A80304874F02F5(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UdpKit.UdpIPv4Address/Comparer::System.Collections.Generic.IEqualityComparer<UdpKit.UdpIPv4Address>.GetHashCode(UdpKit.UdpIPv4Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_System_Collections_Generic_IEqualityComparerU3CUdpKit_UdpIPv4AddressU3E_GetHashCode_mED6021313A5192A0820E546BF39A6824A05A9318 (Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_0 = ___obj0;
		uint32_t L_1 = L_0.___Packed_3;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UdpKit.UdpIPv4Address/Comparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__cctor_m4D05C779A0A858C522A3EAB50C9BC5D33B24168D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186* L_0 = (Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186*)il2cpp_codegen_object_new(Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Comparer__ctor_m60B28682E370C59C594127DB5C785F3BDB652C8A(L_0, NULL);
		((Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.Boolean UdpKit.UdpIPv6Address::get_IsAny()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_get_IsAny_mB99595E1826DB89D4FC1F424ADE94B23D685B38A (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0 = __this->___Packed0_19;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_1 = __this->___Packed1_20;
		G_B3_0 = ((((int64_t)L_1) == ((int64_t)((int64_t)0)))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv6Address_get_IsAny_mB99595E1826DB89D4FC1F424ADE94B23D685B38A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv6Address_get_IsAny_mB99595E1826DB89D4FC1F424ADE94B23D685B38A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv6Address::get_IsLocalHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_get_IsLocalHost_m6E6911F889A58A0BA786252C97C0EABBAD8A7F49 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_0 = (*(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*)__this);
		il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_1 = ((UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var))->___Localhost_2;
		bool L_2;
		L_2 = UdpIPv6Address_op_Equality_m691064C2AED496017B366DB8ADB61191EA905EBC(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv6Address_get_IsLocalHost_m6E6911F889A58A0BA786252C97C0EABBAD8A7F49_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv6Address_get_IsLocalHost_m6E6911F889A58A0BA786252C97C0EABBAD8A7F49(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv6Address::get_IsBroadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_get_IsBroadcast_m3477EACF4167FED4DCCFDC95DB313C901D793BE4 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  bool UdpIPv6Address_get_IsBroadcast_m3477EACF4167FED4DCCFDC95DB313C901D793BE4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv6Address_get_IsBroadcast_m3477EACF4167FED4DCCFDC95DB313C901D793BE4(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv6Address::get_IsWan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_get_IsWan_m450D483AB813BEDA5914BBBCE7054B91564EB9CD (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		bool L_0;
		L_0 = UdpIPv6Address_get_IsAny_mB99595E1826DB89D4FC1F424ADE94B23D685B38A(__this, NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1;
		L_1 = UdpIPv6Address_get_IsLocalHost_m6E6911F889A58A0BA786252C97C0EABBAD8A7F49(__this, NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = UdpIPv6Address_get_IsBroadcast_m3477EACF4167FED4DCCFDC95DB313C901D793BE4(__this, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		bool L_3;
		L_3 = UdpIPv6Address_get_IsPrivate_mD6BE251E323B26D4AD50CBFFDBECBCAB5A983A1D(__this, NULL);
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv6Address_get_IsWan_m450D483AB813BEDA5914BBBCE7054B91564EB9CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv6Address_get_IsWan_m450D483AB813BEDA5914BBBCE7054B91564EB9CD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv6Address::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_get_IsPrivate_mD6BE251E323B26D4AD50CBFFDBECBCAB5A983A1D (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3570267F7F0DA9E4E046B63A035D73A841A37753);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CAA8EB8F8A40919334B74092BDFF776569ECFB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FE94193A3EF39943F898714AC9062F7EBD96279);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3F24E7813E509CA75D75D1EE9738C83C77FC94A);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	{
		bool L_0;
		L_0 = UdpIPv6Address_get_IsAny_mB99595E1826DB89D4FC1F424ADE94B23D685B38A(__this, NULL);
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_00f8;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = UdpIPv6Address_get_Bytes_m1ED32ECD379C6977240715528DACF1A395F6F14C(__this, NULL);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_3, L_2, NULL);
		V_0 = L_3;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_1 = L_5;
		String_t* L_6 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = String_Split_m6811F7CF4DE7C68019D76E9DC6D17B2293BA8B12(L_6, L_8, 1, NULL);
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_12, NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)((int32_t)23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_00f8;
	}

IL_0057:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = IPAddress_get_IsIPv6SiteLocal_m18578B3D7D1F42F9BF980B5E79E93B85FBF3EE66(L_15, NULL);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_006b;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_00f8;
	}

IL_006b:
	{
		String_t* L_18 = V_2;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_18, 0, 2, NULL);
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral4CAA8EB8F8A40919334B74092BDFF776569ECFB6, NULL);
		if (!L_20)
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		G_B9_0 = ((((int32_t)((((int32_t)L_22) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_008e;
	}

IL_008d:
	{
		G_B9_0 = 0;
	}

IL_008e:
	{
		V_7 = (bool)G_B9_0;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_0099;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_00f8;
	}

IL_0099:
	{
		String_t* L_24 = V_2;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_24, 0, 2, NULL);
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteralA3F24E7813E509CA75D75D1EE9738C83C77FC94A, NULL);
		if (!L_26)
		{
			goto IL_00bb;
		}
	}
	{
		String_t* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
		G_B14_0 = ((((int32_t)((((int32_t)L_28) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_00bb:
	{
		G_B14_0 = 0;
	}

IL_00bc:
	{
		V_8 = (bool)G_B14_0;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00c7;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_00f8;
	}

IL_00c7:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3570267F7F0DA9E4E046B63A035D73A841A37753, NULL);
		V_9 = L_31;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_00f8;
	}

IL_00dd:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral8FE94193A3EF39943F898714AC9062F7EBD96279, NULL);
		V_10 = L_34;
		bool L_35 = V_10;
		if (!L_35)
		{
			goto IL_00f3;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_00f8;
	}

IL_00f3:
	{
		V_4 = (bool)0;
		goto IL_00f8;
	}

IL_00f8:
	{
		bool L_36 = V_4;
		return L_36;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv6Address_get_IsPrivate_mD6BE251E323B26D4AD50CBFFDBECBCAB5A983A1D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv6Address_get_IsPrivate_mD6BE251E323B26D4AD50CBFFDBECBCAB5A983A1D(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] UdpKit.UdpIPv6Address::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UdpIPv6Address_get_Bytes_m1ED32ECD379C6977240715528DACF1A395F6F14C (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = __this->___Byte0_3;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_1;
		uint8_t L_4 = __this->___Byte1_4;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_3;
		uint8_t L_6 = __this->___Byte2_5;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_5;
		uint8_t L_8 = __this->___Byte3_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_7;
		uint8_t L_10 = __this->___Byte4_7;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_9;
		uint8_t L_12 = __this->___Byte5_8;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_11;
		uint8_t L_14 = __this->___Byte6_9;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_13;
		uint8_t L_16 = __this->___Byte7_10;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_15;
		uint8_t L_18 = __this->___Byte8_11;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_17;
		uint8_t L_20 = __this->___Byte9_12;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_19;
		uint8_t L_22 = __this->___Byte10_13;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_21;
		uint8_t L_24 = __this->___Byte11_14;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = L_23;
		uint8_t L_26 = __this->___Byte12_15;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = L_25;
		uint8_t L_28 = __this->___Byte13_16;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = L_27;
		uint8_t L_30 = __this->___Byte14_17;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_29;
		uint8_t L_32 = __this->___Byte15_18;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)L_32);
		V_0 = L_31;
		goto IL_00a2;
	}

IL_00a2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_0;
		return L_33;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UdpIPv6Address_get_Bytes_m1ED32ECD379C6977240715528DACF1A395F6F14C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = UdpIPv6Address_get_Bytes_m1ED32ECD379C6977240715528DACF1A395F6F14C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UdpKit.UdpIPv6Address::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv6Address__ctor_m0EC568B3DABC5EF29A9F2688A74B0612FD5BC26F (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___address0;
		NullCheck(L_0);
		UdpAssert_Assert_mD587035F5FB461BB2E65A552CBB3247BEE518221((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)16)))? 1 : 0), NULL);
		__this->___Packed0_19 = ((int64_t)0);
		__this->___Packed1_20 = ((int64_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___address0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->___Byte0_3 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___address0;
		NullCheck(L_4);
		int32_t L_5 = 1;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___Byte1_4 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___address0;
		NullCheck(L_7);
		int32_t L_8 = 2;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___Byte2_5 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___address0;
		NullCheck(L_10);
		int32_t L_11 = 3;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->___Byte3_6 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___address0;
		NullCheck(L_13);
		int32_t L_14 = 4;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->___Byte4_7 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___address0;
		NullCheck(L_16);
		int32_t L_17 = 5;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->___Byte5_8 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___address0;
		NullCheck(L_19);
		int32_t L_20 = 6;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		__this->___Byte6_9 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___address0;
		NullCheck(L_22);
		int32_t L_23 = 7;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___Byte7_10 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___address0;
		NullCheck(L_25);
		int32_t L_26 = 8;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		__this->___Byte8_11 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___address0;
		NullCheck(L_28);
		int32_t L_29 = ((int32_t)9);
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		__this->___Byte9_12 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___address0;
		NullCheck(L_31);
		int32_t L_32 = ((int32_t)10);
		uint8_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		__this->___Byte10_13 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___address0;
		NullCheck(L_34);
		int32_t L_35 = ((int32_t)11);
		uint8_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		__this->___Byte11_14 = L_36;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___address0;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)12);
		uint8_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		__this->___Byte12_15 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___address0;
		NullCheck(L_40);
		int32_t L_41 = ((int32_t)13);
		uint8_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		__this->___Byte13_16 = L_42;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___address0;
		NullCheck(L_43);
		int32_t L_44 = ((int32_t)14);
		uint8_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		__this->___Byte14_17 = L_45;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___address0;
		NullCheck(L_46);
		int32_t L_47 = ((int32_t)15);
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		__this->___Byte15_18 = L_48;
		return;
	}
}
IL2CPP_EXTERN_C  void UdpIPv6Address__ctor_m0EC568B3DABC5EF29A9F2688A74B0612FD5BC26F_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	UdpIPv6Address__ctor_m0EC568B3DABC5EF29A9F2688A74B0612FD5BC26F(_thisAdjusted, ___address0, method);
}
// System.Void UdpKit.UdpIPv6Address::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv6Address__ctor_m6563F427B03766A7BB4A36EB2DBA29CFCCAB9665 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, uint64_t ___packed00, uint64_t ___packed11, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_initobj(__this, sizeof(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92));
		uint64_t L_0 = ___packed00;
		__this->___Packed0_19 = L_0;
		uint64_t L_1 = ___packed11;
		__this->___Packed1_20 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void UdpIPv6Address__ctor_m6563F427B03766A7BB4A36EB2DBA29CFCCAB9665_AdjustorThunk (RuntimeObject* __this, uint64_t ___packed00, uint64_t ___packed11, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	UdpIPv6Address__ctor_m6563F427B03766A7BB4A36EB2DBA29CFCCAB9665(_thisAdjusted, ___packed00, ___packed11, method);
}
// System.Boolean UdpKit.UdpIPv6Address::Equals(UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_Equals_mCC52609DE2211203CE2D116AA53BE933BEDF5A0C (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_0 = (*(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*)__this);
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv6Address_CompareOrder_m5DADC7C2837BA0CD3A1B7E0FECD9FA8753439A57(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv6Address_Equals_mCC52609DE2211203CE2D116AA53BE933BEDF5A0C_AdjustorThunk (RuntimeObject* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___other0, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv6Address_Equals_mCC52609DE2211203CE2D116AA53BE933BEDF5A0C(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UdpKit.UdpIPv6Address::CompareTo(UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv6Address_CompareTo_m7F417F08015D57B543A667BE45CC0F68337AB454 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_0 = (*(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*)__this);
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv6Address_CompareOrder_m5DADC7C2837BA0CD3A1B7E0FECD9FA8753439A57(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t UdpIPv6Address_CompareTo_m7F417F08015D57B543A667BE45CC0F68337AB454_AdjustorThunk (RuntimeObject* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___other0, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UdpIPv6Address_CompareTo_m7F417F08015D57B543A667BE45CC0F68337AB454(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UdpKit.UdpIPv6Address::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv6Address_GetHashCode_m727ED4AF8E2B949818260D9A131E227C9FDE6C0F (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0 = __this->___Packed0_19;
		uint64_t L_1 = __this->___Packed1_20;
		V_0 = ((int32_t)((int64_t)((int64_t)L_0^(int64_t)L_1)));
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t UdpIPv6Address_GetHashCode_m727ED4AF8E2B949818260D9A131E227C9FDE6C0F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UdpIPv6Address_GetHashCode_m727ED4AF8E2B949818260D9A131E227C9FDE6C0F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv6Address::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_Equals_m63F8B1A0253D0C5EB396863A1C92D7294AF23F23 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var)))
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*)((UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*)(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*)UnBox(L_1, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var))));
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_2 = (*(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*)__this);
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = UdpIPv6Address_CompareOrder_m5DADC7C2837BA0CD3A1B7E0FECD9FA8753439A57(L_2, L_3, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool UdpIPv6Address_Equals_m63F8B1A0253D0C5EB396863A1C92D7294AF23F23_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	bool _returnValue;
	_returnValue = UdpIPv6Address_Equals_m63F8B1A0253D0C5EB396863A1C92D7294AF23F23(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UdpKit.UdpIPv6Address::op_Equality(UdpKit.UdpIPv6Address,UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_op_Equality_m691064C2AED496017B366DB8ADB61191EA905EBC (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___x0, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_0 = ___x0;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv6Address_CompareOrder_m5DADC7C2837BA0CD3A1B7E0FECD9FA8753439A57(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UdpKit.UdpIPv6Address::op_Inequality(UdpKit.UdpIPv6Address,UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv6Address_op_Inequality_m5AE9776199BBD51005B70D001B6850B3E0940948 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___x0, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_0 = ___x0;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv6Address_CompareOrder_m5DADC7C2837BA0CD3A1B7E0FECD9FA8753439A57(L_0, L_1, NULL);
		V_0 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 UdpIPv6Address_Parse_mF6E37F485B13FA941B9481646F9786D8B4AE5E7A (String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	bool V_1 = false;
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		String_t* L_0 = ___address0;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1;
		L_1 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(L_0, NULL);
		V_0 = L_1;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_2, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)((int32_t)23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5A2A3D0C503892938F51A6C2BD6BC87398CFFA8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpIPv6Address_Parse_mF6E37F485B13FA941B9481646F9786D8B4AE5E7A_RuntimeMethod_var)));
	}

IL_0025:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_6, NULL);
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_8;
		memset((&L_8), 0, sizeof(L_8));
		UdpIPv6Address__ctor_m0EC568B3DABC5EF29A9F2688A74B0612FD5BC26F((&L_8), L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		goto IL_0033;
	}

IL_0033:
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_9 = V_2;
		return L_9;
	}
}
// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::op_BitwiseAnd(UdpKit.UdpIPv6Address,UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 UdpIPv6Address_op_BitwiseAnd_m15F5B0B426C84519C569218565E9F7F55FE8C125 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___a0, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___b1, const RuntimeMethod* method) 
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_0 = ___a0;
		uint64_t L_1 = L_0.___Packed0_19;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_2 = ___b1;
		uint64_t L_3 = L_2.___Packed0_19;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_4 = ___a0;
		uint64_t L_5 = L_4.___Packed1_20;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_6 = ___b1;
		uint64_t L_7 = L_6.___Packed1_20;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_8;
		memset((&L_8), 0, sizeof(L_8));
		UdpIPv6Address__ctor_m6563F427B03766A7BB4A36EB2DBA29CFCCAB9665((&L_8), ((int64_t)((int64_t)L_1&(int64_t)L_3)), ((int64_t)((int64_t)L_5&(int64_t)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_9 = V_0;
		return L_9;
	}
}
// System.String UdpKit.UdpIPv6Address::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpIPv6Address_ToString_mB08A40B4B1C165E55E09123E44350345FDFA7EF0 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = UdpIPv6Address_get_Bytes_m1ED32ECD379C6977240715528DACF1A395F6F14C(__this, NULL);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_1, L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* UdpIPv6Address_ToString_mB08A40B4B1C165E55E09123E44350345FDFA7EF0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UdpIPv6Address_ToString_mB08A40B4B1C165E55E09123E44350345FDFA7EF0(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UdpKit.UdpIPv6Address::CompareOrder(UdpKit.UdpIPv6Address,UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpIPv6Address_CompareOrder_m5DADC7C2837BA0CD3A1B7E0FECD9FA8753439A57 (UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___x0, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___y1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_0 = ___x0;
		uint64_t L_1 = L_0.___Packed0_19;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_2 = ___y1;
		uint64_t L_3 = L_2.___Packed0_19;
		V_0 = (bool)((!(((uint64_t)L_1) <= ((uint64_t)L_3)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = 1;
		goto IL_005f;
	}

IL_0017:
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_5 = ___x0;
		uint64_t L_6 = L_5.___Packed0_19;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_7 = ___y1;
		uint64_t L_8 = L_7.___Packed0_19;
		V_2 = (bool)((!(((uint64_t)L_6) >= ((uint64_t)L_8)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_002d;
		}
	}
	{
		V_1 = (-1);
		goto IL_005f;
	}

IL_002d:
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_10 = ___x0;
		uint64_t L_11 = L_10.___Packed1_20;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_12 = ___y1;
		uint64_t L_13 = L_12.___Packed1_20;
		V_3 = (bool)((!(((uint64_t)L_11) <= ((uint64_t)L_13)))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0043;
		}
	}
	{
		V_1 = 1;
		goto IL_005f;
	}

IL_0043:
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_15 = ___x0;
		uint64_t L_16 = L_15.___Packed1_20;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_17 = ___y1;
		uint64_t L_18 = L_17.___Packed1_20;
		V_4 = (bool)((!(((uint64_t)L_16) >= ((uint64_t)L_18)))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_005b;
		}
	}
	{
		V_1 = (-1);
		goto IL_005f;
	}

IL_005b:
	{
		V_1 = 0;
		goto IL_005f;
	}

IL_005f:
	{
		int32_t L_20 = V_1;
		return L_20;
	}
}
// System.Void UdpKit.UdpIPv6Address::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv6Address__cctor_mFF2B48AF9689AF3FE052AD6828B2BB307A2A413D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t2C1DA38A34DE74A9D4D0D3174ED6E5A4B241822B____5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var))->___Any_0), sizeof(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t2C1DA38A34DE74A9D4D0D3174ED6E5A4B241822B____5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_3;
		memset((&L_3), 0, sizeof(L_3));
		UdpIPv6Address__ctor_m0EC568B3DABC5EF29A9F2688A74B0612FD5BC26F((&L_3), L_1, /*hidden argument*/NULL);
		((UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var))->___Mask_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)1);
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_6;
		memset((&L_6), 0, sizeof(L_6));
		UdpIPv6Address__ctor_m0EC568B3DABC5EF29A9F2688A74B0612FD5BC26F((&L_6), L_5, /*hidden argument*/NULL);
		((UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var))->___Localhost_2 = L_6;
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
// System.Void UdpKit.UdpIPv6Address/Comparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__ctor_m89C271BFC15CACD254866F731E81E437FDF35755 (Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 UdpKit.UdpIPv6Address/Comparer::System.Collections.Generic.IComparer<UdpKit.UdpIPv6Address>.Compare(UdpKit.UdpIPv6Address,UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_System_Collections_Generic_IComparerU3CUdpKit_UdpIPv6AddressU3E_Compare_m726F5EEBDE7D0A73D2E9EE6E44C472289E86506A (Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___x0, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_0 = ___x0;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv6Address_CompareOrder_m5DADC7C2837BA0CD3A1B7E0FECD9FA8753439A57(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UdpKit.UdpIPv6Address/Comparer::System.Collections.Generic.IEqualityComparer<UdpKit.UdpIPv6Address>.Equals(UdpKit.UdpIPv6Address,UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Comparer_System_Collections_Generic_IEqualityComparerU3CUdpKit_UdpIPv6AddressU3E_Equals_m42DF796AE3DB7FB3BA7203762359D9CAB3BB1514 (Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___x0, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_0 = ___x0;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UdpIPv6Address_CompareOrder_m5DADC7C2837BA0CD3A1B7E0FECD9FA8753439A57(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UdpKit.UdpIPv6Address/Comparer::System.Collections.Generic.IEqualityComparer<UdpKit.UdpIPv6Address>.GetHashCode(UdpKit.UdpIPv6Address)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_System_Collections_Generic_IEqualityComparerU3CUdpKit_UdpIPv6AddressU3E_GetHashCode_m543FE7D4E1AF47A99AAC5110946438FCE579A26D (Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_0 = ___obj0;
		uint64_t L_1 = L_0.___Packed0_19;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_2 = ___obj0;
		uint64_t L_3 = L_2.___Packed1_20;
		V_0 = ((int32_t)((int64_t)((int64_t)L_1^(int64_t)L_3)));
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void UdpKit.UdpIPv6Address/Comparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__cctor_m831154037337316F34FB2AFB558AE2E40B548640 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32* L_0 = (Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32*)il2cpp_codegen_object_new(Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Comparer__ctor_m89C271BFC15CACD254866F731E81E437FDF35755(L_0, NULL);
		((Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t243CA8974CE459F54143C7E52900BF1A279F9F32_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.Void UdpKit.UdpLog::Write(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Write_mC083B1F6673A841D197C2A95B6BCA75EBA97125F (uint32_t ___level0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* G_B3_0 = NULL;
	Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* G_B2_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___sync_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0033;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0033:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
				Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* L_4 = ((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___writer_6;
				Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* L_5 = L_4;
				G_B2_0 = L_5;
				if (L_5)
				{
					G_B3_0 = L_5;
					goto IL_001e_1;
				}
			}
			{
				goto IL_0026_1;
			}

IL_001e_1:
			{
				uint32_t L_6 = ___level0;
				String_t* L_7 = ___message1;
				NullCheck(G_B3_0);
				Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_inline(G_B3_0, L_6, L_7, NULL);
			}

IL_0026_1:
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		return;
	}
}
// System.Void UdpKit.UdpLog::Info(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Info_m43C0EB22B6BD6E9FEB4AD3E45A0E767CE1DE2E0B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___enabled_5;
		bool L_1;
		L_1 = UdpMath_IsSet_m51256B8BB1A4DBC2FFE1E049C4C2AA26DA130A29(L_0, 1, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args1;
		String_t* L_5;
		L_5 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Write_mC083B1F6673A841D197C2A95B6BCA75EBA97125F(1, L_5, NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UdpKit.UdpLog::Trace(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Trace_mCDDE4A4D5B57D528FB4D40A4A857BDCF91CC606D (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___enabled_5;
		bool L_1;
		L_1 = UdpMath_IsSet_m51256B8BB1A4DBC2FFE1E049C4C2AA26DA130A29(L_0, 8, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args1;
		String_t* L_5;
		L_5 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Write_mC083B1F6673A841D197C2A95B6BCA75EBA97125F(8, L_5, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UdpKit.UdpLog::Debug(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Debug_mD8C271E21EFA219C4984D5D7E6FFAE57DF6568B9 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___enabled_5;
		bool L_1;
		L_1 = UdpMath_IsSet_m51256B8BB1A4DBC2FFE1E049C4C2AA26DA130A29(L_0, 4, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args1;
		String_t* L_5;
		L_5 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Write_mC083B1F6673A841D197C2A95B6BCA75EBA97125F(4, L_5, NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UdpKit.UdpLog::Warn(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___enabled_5;
		bool L_1;
		L_1 = UdpMath_IsSet_m51256B8BB1A4DBC2FFE1E049C4C2AA26DA130A29(L_0, ((int32_t)16), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args1;
		String_t* L_5;
		L_5 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Write_mC083B1F6673A841D197C2A95B6BCA75EBA97125F(((int32_t)16), L_5, NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UdpKit.UdpLog::Error(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Error_m185B1CCFC22834B75144250038F62D0B4BE25847 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		String_t* L_2;
		L_2 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Write_mC083B1F6673A841D197C2A95B6BCA75EBA97125F(0, L_2, NULL);
		return;
	}
}
// System.Void UdpKit.UdpLog::SetWriter(UdpKit.UdpLog/Writer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_SetWriter_mB97C651C74136B47A0607161A62FE925EADB30FA (Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* L_0 = ___callback0;
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___writer_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___writer_6), (void*)L_0);
		return;
	}
}
// System.Void UdpKit.UdpLog::Disable(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Disable_mAE6DC308FAB1C06CBE0F1BDC1E079D66712696F2 (uint32_t ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___enabled_5;
		uint32_t L_1 = ___flag0;
		((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___enabled_5 = ((int32_t)((int32_t)L_0&(int32_t)((~L_1))));
		return;
	}
}
// System.Void UdpKit.UdpLog::Enable(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Enable_m152548BC049FBEAC58E0C9D56768BA2194587392 (uint32_t ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___enabled_5;
		uint32_t L_1 = ___flag0;
		((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___enabled_5 = ((int32_t)((int32_t)L_0|(int32_t)L_1));
		return;
	}
}
// System.Void UdpKit.UdpLog::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog__cctor_m609985FE681B7D9E9C3C8C6444F8EB7D57985F38 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___enabled_5 = ((int32_t)29);
		((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___writer_6 = (Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___writer_6), (void*)(Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF*)NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___sync_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_StaticFields*)il2cpp_codegen_static_fields_for(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var))->___sync_7), (void*)L_0);
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
void Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_Multicast(Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, uint32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* currentDelegate = reinterpret_cast<Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, uint32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___level0, ___message1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_OpenInst(Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, uint32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___level0, ___message1, method);
}
void Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_OpenStatic(Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, uint32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___level0, ___message1, method);
}
void Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_OpenStaticInvoker(Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, uint32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< uint32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___level0, ___message1);
}
void Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_ClosedStaticInvoker(Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, uint32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, uint32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___level0, ___message1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF (Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, uint32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(___level0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void UdpKit.UdpLog/Writer::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer__ctor_m7172635E8BFDD8D71D8C53E7EA24A99302D0F2FA (Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_Multicast;
}
// System.Void UdpKit.UdpLog/Writer::Invoke(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3 (Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, uint32_t ___level0, String_t* ___message1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___level0, ___message1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UdpKit.UdpLog/Writer::BeginInvoke(System.UInt32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Writer_BeginInvoke_m04616658B18795F25366E2F388F618FCFBE33578 (Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, uint32_t ___level0, String_t* ___message1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &___level0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UdpKit.UdpLog/Writer::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_EndInvoke_m0E7AA6B7EC8CA572F64618594AD9BF714F284942 (Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UdpKit.UdpMath::IsPowerOfTwo(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpMath_IsPowerOfTwo_mD0375F8FBFF2A36A9E012749A05ACDD3FD71B152 (uint32_t ___x0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint32_t L_0 = ___x0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		uint32_t L_1 = ___x0;
		uint32_t L_2 = ___x0;
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_1&((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1))))) == ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UdpKit.UdpMath::IsMultipleOf8(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpMath_IsMultipleOf8_mBFE9C68CEEDF91B2628209351E2CAF970632C141 (uint32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint32_t L_0 = ___value0;
		if ((!(((uint32_t)L_0) > ((uint32_t)0))))
		{
			goto IL_000f;
		}
	}
	{
		uint32_t L_1 = ___value0;
		uint32_t L_2 = ___value0;
		G_B3_0 = ((((int32_t)((int32_t)(((int32_t)((uint32_t)L_1>>3))<<3))) == ((int32_t)L_2))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UdpKit.UdpMath::IsMultipleOf8(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpMath_IsMultipleOf8_mC071443364DB21487DC057C86F4A38543B88C868 (int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___value0;
		int32_t L_2 = ___value0;
		G_B3_0 = ((((int32_t)((int32_t)(((int32_t)(L_1>>3))<<3))) == ((int32_t)L_2))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.UInt32 UdpKit.UdpMath::NextPow2(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UdpMath_NextPow2_mBEA00E4A4DA5DD7D69AE087B6F1CD2A5174CAD5F (uint32_t ___v0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___v0;
		___v0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1));
		uint32_t L_1 = ___v0;
		uint32_t L_2 = ___v0;
		___v0 = ((int32_t)((int32_t)L_1|((int32_t)((uint32_t)L_2>>1))));
		uint32_t L_3 = ___v0;
		uint32_t L_4 = ___v0;
		___v0 = ((int32_t)((int32_t)L_3|((int32_t)((uint32_t)L_4>>2))));
		uint32_t L_5 = ___v0;
		uint32_t L_6 = ___v0;
		___v0 = ((int32_t)((int32_t)L_5|((int32_t)((uint32_t)L_6>>4))));
		uint32_t L_7 = ___v0;
		uint32_t L_8 = ___v0;
		___v0 = ((int32_t)((int32_t)L_7|((int32_t)((uint32_t)L_8>>8))));
		uint32_t L_9 = ___v0;
		uint32_t L_10 = ___v0;
		___v0 = ((int32_t)((int32_t)L_9|((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		uint32_t L_11 = ___v0;
		___v0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, 1));
		uint32_t L_12 = ___v0;
		V_0 = L_12;
		goto IL_0033;
	}

IL_0033:
	{
		uint32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int32 UdpKit.UdpMath::HighBit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpMath_HighBit_mD3421A01280DB20BA1EFBA7BE96ACF6BFA952AA1 (uint32_t ___v0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		uint32_t L_0 = ___v0;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = 0;
		goto IL_0026;
	}

IL_000d:
	{
		V_0 = 0;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		uint32_t L_3 = ___v0;
		int32_t L_4 = ((int32_t)((uint32_t)L_3>>1));
		___v0 = L_4;
		V_3 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// System.Int32 UdpKit.UdpMath::BytesRequired(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpMath_BytesRequired_m95CD7E5FAB846FFC72E2CE437741D6B2B6460B1C (int32_t ___bits0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bits0;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 7))>>3));
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UdpKit.UdpMath::SeqDistance(System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpMath_SeqDistance_m46CCA0CFCC5F431962776A148C41A80748B15B35 (uint32_t ___from0, uint32_t ___to1, int32_t ___shift2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___from0;
		int32_t L_1 = ___shift2;
		___from0 = ((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31)))));
		uint32_t L_2 = ___to1;
		int32_t L_3 = ___shift2;
		___to1 = ((int32_t)((int32_t)L_2<<((int32_t)(L_3&((int32_t)31)))));
		uint32_t L_4 = ___from0;
		uint32_t L_5 = ___to1;
		int32_t L_6 = ___shift2;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))>>((int32_t)(L_6&((int32_t)31)))));
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 UdpKit.UdpMath::SeqDistance(System.UInt16,System.UInt16,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpMath_SeqDistance_m900D448E53D6D59CDF2FD0617F428B561B7D4023 (uint16_t ___from0, uint16_t ___to1, int32_t ___shift2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint16_t L_0 = ___from0;
		int32_t L_1 = ___shift2;
		___from0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31))))));
		uint16_t L_2 = ___to1;
		int32_t L_3 = ___shift2;
		___to1 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2<<((int32_t)(L_3&((int32_t)31))))));
		uint16_t L_4 = ___from0;
		uint16_t L_5 = ___to1;
		int32_t L_6 = ___shift2;
		V_0 = ((int32_t)((int32_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)))>>((int32_t)(L_6&((int32_t)31)))));
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.UInt32 UdpKit.UdpMath::SeqNext(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UdpMath_SeqNext_m693D129A126CA0BD4082CF8AF17530FB18146051 (uint32_t ___seq0, uint32_t ___mask1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___seq0;
		___seq0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		uint32_t L_1 = ___seq0;
		uint32_t L_2 = ___mask1;
		___seq0 = ((int32_t)((int32_t)L_1&(int32_t)L_2));
		uint32_t L_3 = ___seq0;
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// System.UInt16 UdpKit.UdpMath::SeqNext(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UdpMath_SeqNext_m512305635F62EA9F767472C8E554905C9645DDD0 (uint16_t ___seq0, uint16_t ___mask1, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = ___seq0;
		___seq0 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)));
		uint16_t L_1 = ___seq0;
		uint16_t L_2 = ___mask1;
		___seq0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1&(int32_t)L_2)));
		uint16_t L_3 = ___seq0;
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		uint16_t L_4 = V_0;
		return L_4;
	}
}
// System.UInt16 UdpKit.UdpMath::SeqPrev(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UdpMath_SeqPrev_m458F7EF8BB44F4669D1B8ED58B1B714D471C24F1 (uint16_t ___seq0, uint16_t ___mask1, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = ___seq0;
		___seq0 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)));
		uint16_t L_1 = ___seq0;
		uint16_t L_2 = ___mask1;
		___seq0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1&(int32_t)L_2)));
		uint16_t L_3 = ___seq0;
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		uint16_t L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UdpKit.UdpMath::IsSet(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpMath_IsSet_m51256B8BB1A4DBC2FFE1E049C4C2AA26DA130A29 (uint32_t ___mask0, uint32_t ___flag1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0 = ___mask0;
		uint32_t L_1 = ___flag1;
		uint32_t L_2 = ___flag1;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2))? 1 : 0);
		goto IL_000a;
	}

IL_000a:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.UInt16 UdpKit.UdpMath::Clamp(System.UInt16,System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UdpMath_Clamp_mA5EC64844005B76FFFED481A6E46CE1D9588CCD1 (uint16_t ___value0, uint16_t ___min1, uint16_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint16_t V_1 = 0;
	bool V_2 = false;
	{
		uint16_t L_0 = ___value0;
		uint16_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		uint16_t L_3 = ___min1;
		V_1 = L_3;
		goto IL_001d;
	}

IL_000d:
	{
		uint16_t L_4 = ___value0;
		uint16_t L_5 = ___max2;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		uint16_t L_7 = ___max2;
		V_1 = L_7;
		goto IL_001d;
	}

IL_0019:
	{
		uint16_t L_8 = ___value0;
		V_1 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		uint16_t L_9 = V_1;
		return L_9;
	}
}
// System.Single UdpKit.UdpMath::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UdpMath_Clamp_mB10266AF78F8B3106D8F7CC332348D0F8A1F5410 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		float L_3 = ___min1;
		V_1 = L_3;
		goto IL_001d;
	}

IL_000d:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_2 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		V_1 = L_7;
		goto IL_001d;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_1 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_1;
		return L_9;
	}
}
// System.Int32 UdpKit.UdpMath::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpMath_Clamp_mC62EDA09D4EAB46B7DF670E389EDF18EA6DD6FAA (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_3 = ___min1;
		V_1 = L_3;
		goto IL_001d;
	}

IL_000d:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		V_1 = L_7;
		goto IL_001d;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_1 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.UInt32 UdpKit.UdpMath::Clamp(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UdpMath_Clamp_m8CF2F95640DDA3A984BCAE5D3BD6AB4A57E42FD7 (uint32_t ___value0, uint32_t ___min1, uint32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint32_t V_1 = 0;
	bool V_2 = false;
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1 = ___min1;
		V_0 = (bool)((!(((uint32_t)L_0) >= ((uint32_t)L_1)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		uint32_t L_3 = ___min1;
		V_1 = L_3;
		goto IL_001d;
	}

IL_000d:
	{
		uint32_t L_4 = ___value0;
		uint32_t L_5 = ___max2;
		V_2 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)L_5)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		uint32_t L_7 = ___max2;
		V_1 = L_7;
		goto IL_001d;
	}

IL_0019:
	{
		uint32_t L_8 = ___value0;
		V_1 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		uint32_t L_9 = V_1;
		return L_9;
	}
}
// System.Byte UdpKit.UdpMath::Clamp(System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UdpMath_Clamp_mD3068AEF8DCF96EDC826B98519BEA404B17DDF74 (uint8_t ___value0, uint8_t ___min1, uint8_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	{
		uint8_t L_0 = ___value0;
		uint8_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		uint8_t L_3 = ___min1;
		V_1 = L_3;
		goto IL_001d;
	}

IL_000d:
	{
		uint8_t L_4 = ___value0;
		uint8_t L_5 = ___max2;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		uint8_t L_7 = ___max2;
		V_1 = L_7;
		goto IL_001d;
	}

IL_0019:
	{
		uint8_t L_8 = ___value0;
		V_1 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		uint8_t L_9 = V_1;
		return L_9;
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
// UdpKit.NatFeatures UdpKit.NatFeatures::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* NatFeatures_Clone_m485BFCC804748D6ADCBB88A3AAA1EE311F35BF2B (NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		V_0 = ((NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5*)CastclassClass((RuntimeObject*)L_0, NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* L_1 = V_0;
		return L_1;
	}
}
// System.String UdpKit.NatFeatures::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NatFeatures_ToString_mA73430FEA2432505543850DADE962DF29A470059 (NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE39DCA2B9DA3D00AC349A54A6BDF33B6F176578);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_2 = __this->___LanEndPoint_1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_3 = L_2;
		RuntimeObject* L_4 = Box(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_6 = __this->___WanEndPoint_0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_7 = L_6;
		RuntimeObject* L_8 = Box(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10 = __this->___AllowsUnsolicitedTraffic_2;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(NatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		int32_t L_14 = __this->___SupportsHairpinTranslation_3;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(NatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = __this->___SupportsEndPointPreservation_4;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(NatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralDE39DCA2B9DA3D00AC349A54A6BDF33B6F176578, L_17, NULL);
		V_0 = L_21;
		goto IL_005a;
	}

IL_005a:
	{
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.Void UdpKit.NatFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatFeatures__ctor_m827B5D78BB8A7A03DED2131AB3D26A759DF9719E (NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* __this, const RuntimeMethod* method) 
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
// System.Void UdpKit.UdpSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSession__ctor_mE5ED33AE19B8A651F75660BD6DFDAAAC6799C062 (UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* __this, const RuntimeMethod* method) 
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
// UdpKit.UdpSession UdpKit.UdpSessionImpl::Build(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* UdpSessionImpl_Build_m079C63985E1F0A8F2CC662B8EA7BADCF8F4F4F66 (String_t* ___hostID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* V_0 = NULL;
	{
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_0 = (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6*)il2cpp_codegen_object_new(UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UdpSessionImpl__ctor_m86C333EB05653DE5479D18EAE9806875545260A9(L_0, NULL);
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_1 = L_0;
		String_t* L_2 = ___hostID0;
		NullCheck(L_1);
		L_1->____hostName_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->____hostName_7), (void*)L_2);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* L_3 = V_0;
		return L_3;
	}
}
// System.Guid UdpKit.UdpSessionImpl::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t UdpSessionImpl_get_Id_m3E91E3E1B103E37558950214B4D1F0EE822FFEEB (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0 = __this->____id_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Guid_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpSessionImpl::set_Id(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl_set_Id_mC8F0374AC6A53A0489182B18774BC14F756A4567 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___value0;
		__this->____id_1 = L_0;
		return;
	}
}
// UdpKit.UdpSessionSource UdpKit.UdpSessionImpl::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpSessionImpl_get_Source_mC9F6CCB71EF1814E84A2A771DDDD7A758A951676 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____source_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpSessionImpl::set_Source(UdpKit.UdpSessionSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl_set_Source_mA9B80E4AAC4AA9290DF49248CE708B0F6C091814 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____source_4 = L_0;
		return;
	}
}
// UdpKit.UdpEndPoint UdpKit.UdpSessionImpl::get_WanEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpSessionImpl_get_WanEndPoint_m3E3DA477A943F93A41D6D33A5A7301469B9C07A1 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = __this->____wanEndPoint_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpSessionImpl::set_WanEndPoint(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl_set_WanEndPoint_m3326D85D2B4D8A28CF98DFABDC941072CC77867E (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___value0, const RuntimeMethod* method) 
{
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___value0;
		__this->____wanEndPoint_2 = L_0;
		return;
	}
}
// UdpKit.UdpEndPoint UdpKit.UdpSessionImpl::get_LanEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpSessionImpl_get_LanEndPoint_m6D15503B0F7DA028776537DCD8ABB81A0672683A (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = __this->____lanEndPoint_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpSessionImpl::set_LanEndPoint(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl_set_LanEndPoint_m0816838812308A84CD4368614B754BCDC9E134CE (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___value0, const RuntimeMethod* method) 
{
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___value0;
		__this->____lanEndPoint_3 = L_0;
		return;
	}
}
// System.Int32 UdpKit.UdpSessionImpl::get_ConnectionsMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpSessionImpl_get_ConnectionsMax_mCFC0029BC38A4C1E8C052F5C113AF329E711DBC0 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____connectionsMax_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpSessionImpl::set_ConnectionsMax(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl_set_ConnectionsMax_m00340DBB514399088C87076EB050A7E00BA6B2D4 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____connectionsMax_5 = L_0;
		return;
	}
}
// System.Int32 UdpKit.UdpSessionImpl::get_ConnectionsCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpSessionImpl_get_ConnectionsCurrent_mE70AEE8E02F3201749C047E2BDD319F138E997CE (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____connectionsCurrent_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpSessionImpl::set_ConnectionsCurrent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl_set_ConnectionsCurrent_m78ED2FAEE8BF1249A9781A5F13BCE7AD3F81D3B0 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____connectionsCurrent_6 = L_0;
		return;
	}
}
// System.String UdpKit.UdpSessionImpl::get_HostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpSessionImpl_get_HostName_m38A9972F2DF784AC9458DD5548911918E9ECCF5A (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->____hostName_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpSessionImpl::set_HostName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl_set_HostName_mE1009DDA340EE1FAB6EF4CB799E339E5AA65AE58 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____hostName_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hostName_7), (void*)L_0);
		return;
	}
}
// System.Boolean UdpKit.UdpSessionImpl::get_IsDedicatedServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpSessionImpl_get_IsDedicatedServer_m06C060140D0626E9B9828BF9393B5A011F49BF92 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->____hostIsDedicated_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpSessionImpl::set_IsDedicatedServer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl_set_IsDedicatedServer_m6882D1CEB16CEDDBB39271A42BC8D5A64E4BB8E8 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____hostIsDedicated_10 = L_0;
		return;
	}
}
// System.Boolean UdpKit.UdpSessionImpl::get_HasWan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpSessionImpl_get_HasWan_mD1CCE49160F617E8D07F64C2E40388276A473B83 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_0 = (&__this->____wanEndPoint_2);
		bool L_1;
		L_1 = UdpEndPoint_get_IsWan_m6E1EC15065C4E90F0C6B011DF679625AE08DAA11(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UdpKit.UdpSessionImpl::get_HasLan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpSessionImpl_get_HasLan_m8862C70FF91727C8F005197F031C532EE475F824 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_0 = (&__this->____lanEndPoint_3);
		bool L_1;
		L_1 = UdpEndPoint_get_IsLan_m247D9C829F3C34A272B48D875702D3526D8F48F7(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] UdpKit.UdpSessionImpl::get_HostData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UdpSessionImpl_get_HostData_m2B7BF35C26F0D8E37E0719A3A5E38DBBEA73CCC5 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____hostData_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpSessionImpl::set_HostData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl_set_HostData_mA00D4EA15F6B9688F9873ADC0C69732DB7AC3D27 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->____hostData_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hostData_8), (void*)L_0);
		return;
	}
}
// System.Object UdpKit.UdpSessionImpl::get_HostObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UdpSessionImpl_get_HostObject_m26B28E90A00DC2CB2C12D0334F7039503565C75C (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____hostObject_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpSessionImpl::set_HostObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl_set_HostObject_m140FBEF6D26927BDA0BDE76E49B4774573C5D2DE (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->____hostObject_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hostObject_9), (void*)L_0);
		return;
	}
}
// UdpKit.UdpSession UdpKit.UdpSessionImpl::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* UdpSessionImpl_Clone_m522E9E7D075D9C3ADA64912E10F41FE1EC28BBF1 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		V_0 = ((UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4*)CastclassClass((RuntimeObject*)L_0, UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.UdpSessionImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionImpl__ctor_m86C333EB05653DE5479D18EAE9806875545260A9 (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* __this, const RuntimeMethod* method) 
{
	{
		UdpSession__ctor_mE5ED33AE19B8A651F75660BD6DFDAAAC6799C062(__this, NULL);
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
// System.Void UdpKit.UdpSteamID::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSteamID__ctor_m63B5593FC47D224DBDAA3140F6F26A87BB1A6B2C (UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF* __this, uint64_t ___id0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___id0;
		__this->___Id_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void UdpSteamID__ctor_m63B5593FC47D224DBDAA3140F6F26A87BB1A6B2C_AdjustorThunk (RuntimeObject* __this, uint64_t ___id0, const RuntimeMethod* method)
{
	UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UdpSteamID_t11674C8D6041785F5242691E84ECB906432537DF*>(__this + _offset);
	UdpSteamID__ctor_m63B5593FC47D224DBDAA3140F6F26A87BB1A6B2C(_thisAdjusted, ___id0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UdpKit.UdpSessionFillMode UdpKit.UdpSessionFilter::get_FillMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UdpSessionFilter_get_FillMode_m093C6E9B58B7D0BE5AA26385F1E3952753D8953C (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CFillModeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UdpKit.UdpSessionFilter::set_FillMode(UdpKit.UdpSessionFillMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionFilter_set_FillMode_m8DBDCB76849AB07D49C017E02F690FE17F5F4D19 (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___U3CFillModeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Object,System.Object> UdpKit.UdpSessionFilter::get_FilterProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* UdpSessionFilter_get_FilterProperties_mFDBAAB426FF1A841CA7D01BD9FB78F23CC59C278 (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0 = __this->___U3CFilterPropertiesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UdpKit.UdpSessionFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionFilter__ctor_m629CA2C98A4BB5E215D7E9719D19E0DDD393AFDD (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CFillModeU3Ek__BackingField_0 = 0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_0, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___U3CFilterPropertiesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFilterPropertiesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean UdpKit.UdpSessionFilter::Add(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpSessionFilter_Add_m2C4D78ADF9F22B0B48EDC5105F8FB87E16BB7D6B (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC297B54761F89E95AF97329EB4F5B3F31308F8E4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___value1;
		bool L_1;
		L_1 = UdpSessionFilter_IsValid_m8EDD3729BE911B4DC2BF705E62713ED2006B218F(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		RuntimeObject* L_5 = ___value1;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(_stringLiteralC297B54761F89E95AF97329EB4F5B3F31308F8E4, L_4, NULL);
		V_1 = (bool)0;
		goto IL_003f;
	}

IL_002d:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_7;
		L_7 = UdpSessionFilter_get_FilterProperties_mFDBAAB426FF1A841CA7D01BD9FB78F23CC59C278_inline(__this, NULL);
		String_t* L_8 = ___key0;
		RuntimeObject* L_9 = ___value1;
		NullCheck(L_7);
		Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD(L_7, L_8, L_9, Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_RuntimeMethod_var);
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Boolean UdpKit.UdpSessionFilter::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpSessionFilter_Remove_mD187CD0164091D17BEE8AD40BA170167162BE980 (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0;
		L_0 = UdpSessionFilter_get_FilterProperties_mFDBAAB426FF1A841CA7D01BD9FB78F23CC59C278_inline(__this, NULL);
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86(L_0, L_1, Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Object UdpKit.UdpSessionFilter::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UdpSessionFilter_get_Item_mA767F57CDF695495C4F62E0B56861892DD8CACD0 (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, String_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0;
		L_0 = UdpSessionFilter_get_FilterProperties_mFDBAAB426FF1A841CA7D01BD9FB78F23CC59C278_inline(__this, NULL);
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		RuntimeObject* L_3 = V_0;
		V_1 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UdpKit.UdpSessionFilter::set_Item(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpSessionFilter_set_Item_mFACDD141904796D7946486570574AE29A9B2CDDA (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = UdpSessionFilter_Add_m2C4D78ADF9F22B0B48EDC5105F8FB87E16BB7D6B(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object> UdpKit.UdpSessionFilter::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 UdpSessionFilter_GetEnumerator_m6DB4448618A3167E022D0272C93153441F95B893 (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0;
		L_0 = UdpSessionFilter_get_FilterProperties_mFDBAAB426FF1A841CA7D01BD9FB78F23CC59C278_inline(__this, NULL);
		NullCheck(L_0);
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_1;
		L_1 = Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA(L_0, Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 L_2 = V_0;
		return L_2;
	}
}
// System.String UdpKit.UdpSessionFilter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UdpSessionFilter_ToString_m6C897199F1AD6193D8EBBD123284AFCE0AC1D635 (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpSessionFilter_ToDebugString_TisRuntimeObject_TisRuntimeObject_m6D5E028F137709E2BC9E56F01B63715BE184A8D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0;
		L_0 = UdpSessionFilter_get_FilterProperties_mFDBAAB426FF1A841CA7D01BD9FB78F23CC59C278_inline(__this, NULL);
		String_t* L_1;
		L_1 = UdpSessionFilter_ToDebugString_TisRuntimeObject_TisRuntimeObject_m6D5E028F137709E2BC9E56F01B63715BE184A8D4(__this, L_0, UdpSessionFilter_ToDebugString_TisRuntimeObject_TisRuntimeObject_m6D5E028F137709E2BC9E56F01B63715BE184A8D4_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UdpKit.UdpSessionFilter::IsValid(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpSessionFilter_IsValid_m8EDD3729BE911B4DC2BF705E62713ED2006B218F (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B17_0 = 0;
	{
		RuntimeObject* L_0 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_3 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_4 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_5 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_6 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_7 = ___value0;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_8 = ___value0;
		if (((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_8, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_9 = ___value0;
		if (((BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)IsInst((RuntimeObject*)L_9, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_10 = ___value0;
		if (((Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)IsInst((RuntimeObject*)L_10, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_11 = ___value0;
		if (((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)IsInst((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_12 = ___value0;
		if (((Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)IsInst((RuntimeObject*)L_12, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_13 = ___value0;
		if (((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)IsInst((RuntimeObject*)L_13, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_14 = ___value0;
		if (((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)IsInst((RuntimeObject*)L_14, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_15 = ___value0;
		G_B17_0 = ((!(((RuntimeObject*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_15, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B17_0 = 1;
	}

IL_0085:
	{
		V_0 = (bool)G_B17_0;
		goto IL_0088;
	}

IL_0088:
	{
		bool L_16 = V_0;
		return L_16;
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
// System.Net.IPAddress UdpKit.Utils.IPAddressExtensions::GetBroadcastAddress(System.Net.IPAddress,System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddressExtensions_GetBroadcastAddress_mA06A858656BF6B80E2A8B856AA39CB484C40A7C7 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___subnetMask1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_6 = NULL;
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___address0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_0, NULL);
		V_0 = L_1;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2 = ___subnetMask1;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_2, NULL);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AB7AE2A6D393ADACFEBBBF239951E42C5ACA0E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddressExtensions_GetBroadcastAddress_mA06A858656BF6B80E2A8B856AA39CB484C40A7C7_RuntimeMethod_var)));
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)));
		V_2 = L_9;
		V_4 = 0;
		goto IL_0053;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		int32_t L_11 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_15|((int32_t)((int32_t)L_19^((int32_t)255)))))));
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0053:
	{
		int32_t L_21 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		NullCheck(L_22);
		V_5 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_25 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_25, L_24, NULL);
		V_6 = L_25;
		goto IL_006a;
	}

IL_006a:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_26 = V_6;
		return L_26;
	}
}
// System.Net.IPAddress UdpKit.Utils.IPAddressExtensions::GetNetworkAddress(System.Net.IPAddress,System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddressExtensions_GetNetworkAddress_mB1274652DB124A59D7B0743B1C5E9C2A8EF0F456 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___subnetMask1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_6 = NULL;
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___address0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_0, NULL);
		V_0 = L_1;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2 = ___subnetMask1;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_2, NULL);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AB7AE2A6D393ADACFEBBBF239951E42C5ACA0E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddressExtensions_GetNetworkAddress_mB1274652DB124A59D7B0743B1C5E9C2A8EF0F456_RuntimeMethod_var)));
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)));
		V_2 = L_9;
		V_4 = 0;
		goto IL_004d;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		int32_t L_11 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_15&(int32_t)L_19))));
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_004d:
	{
		int32_t L_21 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		NullCheck(L_22);
		V_5 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_25 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_25, L_24, NULL);
		V_6 = L_25;
		goto IL_0064;
	}

IL_0064:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_26 = V_6;
		return L_26;
	}
}
// System.Boolean UdpKit.Utils.IPAddressExtensions::IsInSameSubnet(System.Net.IPAddress,System.Net.IPAddress,System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddressExtensions_IsInSameSubnet_mCAC2A0F977AF94E0D953B2830AA2720795D6A06B (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address20, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address1, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___subnetMask2, const RuntimeMethod* method) 
{
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_1 = NULL;
	bool V_2 = false;
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___address1;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1 = ___subnetMask2;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2;
		L_2 = IPAddressExtensions_GetNetworkAddress_mB1274652DB124A59D7B0743B1C5E9C2A8EF0F456(L_0, L_1, NULL);
		V_0 = L_2;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = ___address20;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_4 = ___subnetMask2;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_5;
		L_5 = IPAddressExtensions_GetNetworkAddress_mB1274652DB124A59D7B0743B1C5E9C2A8EF0F456(L_3, L_4, NULL);
		V_1 = L_5;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_6 = V_0;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_7);
		V_2 = L_8;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Boolean UdpKit.Utils.IPAddressExtensions::IsInSameSubnet(System.Net.IPAddress,System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddressExtensions_IsInSameSubnet_m9F2F07F37AF96AE81C254C99F8BFCC97289DD623 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address20, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___address20;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1 = ___address1;
		il2cpp_codegen_runtime_class_init_inline(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2 = ((SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_StaticFields*)il2cpp_codegen_static_fields_for(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var))->___ClassA_0;
		bool L_3;
		L_3 = IPAddressExtensions_IsInSameSubnet_mCAC2A0F977AF94E0D953B2830AA2720795D6A06B(L_0, L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_4 = ___address20;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_5 = ___address1;
		il2cpp_codegen_runtime_class_init_inline(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_6 = ((SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_StaticFields*)il2cpp_codegen_static_fields_for(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var))->___ClassB_1;
		bool L_7;
		L_7 = IPAddressExtensions_IsInSameSubnet_mCAC2A0F977AF94E0D953B2830AA2720795D6A06B(L_4, L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8 = ___address20;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_9 = ___address1;
		il2cpp_codegen_runtime_class_init_inline(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_10 = ((SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_StaticFields*)il2cpp_codegen_static_fields_for(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var))->___ClassC_2;
		bool L_11;
		L_11 = IPAddressExtensions_IsInSameSubnet_mCAC2A0F977AF94E0D953B2830AA2720795D6A06B(L_8, L_9, L_10, NULL);
		G_B4_0 = ((int32_t)(L_11));
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		V_0 = (bool)G_B4_0;
		goto IL_002f;
	}

IL_002f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Boolean UdpKit.Utils.IPAddressExtensions::IsPrivate(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddressExtensions_IsPrivate_mDC4438FB327AA764F3ADF3B29BF2BBF89F7D9068 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___address0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)10))))
		{
			goto IL_0040;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)172)))))
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_10) < ((int32_t)((int32_t)16))))
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0040;
		}
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		uint8_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)192)))))
		{
			goto IL_003d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		G_B7_0 = ((((int32_t)L_19) == ((int32_t)((int32_t)168)))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B7_0 = 0;
	}

IL_003e:
	{
		G_B9_0 = G_B7_0;
		goto IL_0041;
	}

IL_0040:
	{
		G_B9_0 = 1;
	}

IL_0041:
	{
		V_1 = (bool)G_B9_0;
		goto IL_0044;
	}

IL_0044:
	{
		bool L_20 = V_1;
		return L_20;
	}
}
// System.Int64 UdpKit.Utils.IPAddressExtensions::ToLong(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IPAddressExtensions_ToLong_m03281B8F9B0D4A8B04626FDC5D49795DBB57E1B5 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___address0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 3;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = ((int64_t)(((int64_t)(uint64_t)L_4)<<((int32_t)24)));
		int64_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int64_t)il2cpp_codegen_add(L_5, ((int64_t)(((int64_t)(uint64_t)L_8)<<((int32_t)16)))));
		int64_t L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = ((int64_t)il2cpp_codegen_add(L_9, ((int64_t)(((int64_t)(uint64_t)L_12)<<8))));
		int64_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		uint8_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_1 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)(uint64_t)L_16)));
		int64_t L_17 = V_1;
		V_2 = L_17;
		goto IL_002e;
	}

IL_002e:
	{
		int64_t L_18 = V_2;
		return L_18;
	}
}
// System.Net.IPAddress UdpKit.Utils.IPAddressExtensions::FromLongAddr(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddressExtensions_FromLongAddr_m0E5A17DFDF15A4B95867A503E079FF7DC1971B6A (int64_t ___addr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	{
		int64_t L_0 = ___addr0;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2 = V_0;
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
// System.Net.IPAddress UdpKit.Utils.SubnetMask::CreateByHostBitLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* SubnetMask_CreateByHostBitLength_m91FEEB73E64E7C2BAE35EF4B2329822DBA8CAC34 (int32_t ___hostpartLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	bool V_9 = false;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_10 = NULL;
	{
		int32_t L_0 = ___hostpartLength0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_1));
		int32_t L_2 = V_1;
		V_3 = (bool)((((int32_t)L_2) < ((int32_t)2))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0B36D534332EE0F8F415B0E2C5213EF45E9A706)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubnetMask_CreateByHostBitLength_m91FEEB73E64E7C2BAE35EF4B2329822DBA8CAC34_RuntimeMethod_var)));
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_5;
		V_4 = 0;
		goto IL_0092;
	}

IL_0027:
	{
		int32_t L_6 = V_4;
		int32_t L_7 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, 8)), 8))) > ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)255));
		goto IL_008b;
	}

IL_0047:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = V_1;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_multiply(L_11, 8))) > ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)0);
		goto IL_008b;
	}

IL_005d:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_4;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)il2cpp_codegen_multiply(L_17, 8))));
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		int32_t L_19 = V_7;
		NullCheck(L_18);
		String_t* L_20;
		L_20 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_18, L_19, ((int32_t)49), NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_PadRight_m7C573780177B3246D67D860C2A75AEF5832C7543(L_20, 8, ((int32_t)48), NULL);
		V_8 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		int32_t L_23 = V_4;
		String_t* L_24 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_25;
		L_25 = Convert_ToByte_mC835E3C6004C07A7828640861C7E57DF6F42D0E9(L_24, 2, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)L_25);
	}

IL_008b:
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0092:
	{
		int32_t L_27 = V_4;
		V_9 = (bool)((((int32_t)L_27) < ((int32_t)4))? 1 : 0);
		bool L_28 = V_9;
		if (L_28)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_30 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_30, L_29, NULL);
		V_10 = L_30;
		goto IL_00a7;
	}

IL_00a7:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_31 = V_10;
		return L_31;
	}
}
// System.Net.IPAddress UdpKit.Utils.SubnetMask::CreateByNetBitLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* SubnetMask_CreateByNetBitLength_mDE3C5E3C8D1375040E22B8EEC0358032E4D1E19F (int32_t ___netpartLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_1 = NULL;
	{
		int32_t L_0 = ___netpartLength0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_0));
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2;
		L_2 = SubnetMask_CreateByHostBitLength_m91FEEB73E64E7C2BAE35EF4B2329822DBA8CAC34(L_1, NULL);
		V_1 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = V_1;
		return L_3;
	}
}
// System.Net.IPAddress UdpKit.Utils.SubnetMask::CreateByHostNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* SubnetMask_CreateByHostNumber_m5D2055FC85465F7BFDC58D01C4D4276304B00439 (int32_t ___numberOfHosts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_2 = NULL;
	{
		int32_t L_0 = ___numberOfHosts0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35(L_1, 2, NULL);
		V_1 = L_2;
		String_t* L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_5;
		L_5 = SubnetMask_CreateByHostBitLength_m91FEEB73E64E7C2BAE35EF4B2329822DBA8CAC34(L_4, NULL);
		V_2 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_6 = V_2;
		return L_6;
	}
}
// System.Void UdpKit.Utils.SubnetMask::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubnetMask__cctor_m7D72765C3F07D0087FDD1686827466CE1FD0B1E4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42DD196DE1A7F1A5D86B0BFB0F3C85D0E761B3B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93F33F5C5C6822CAF10041503E15865D2FF7E065);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD7587536DFEF53D894A1E5D3C16B0B57D95C46C);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0;
		L_0 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(_stringLiteral93F33F5C5C6822CAF10041503E15865D2FF7E065, NULL);
		((SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_StaticFields*)il2cpp_codegen_static_fields_for(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var))->___ClassA_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_StaticFields*)il2cpp_codegen_static_fields_for(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var))->___ClassA_0), (void*)L_0);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1;
		L_1 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(_stringLiteralFD7587536DFEF53D894A1E5D3C16B0B57D95C46C, NULL);
		((SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_StaticFields*)il2cpp_codegen_static_fields_for(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var))->___ClassB_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_StaticFields*)il2cpp_codegen_static_fields_for(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var))->___ClassB_1), (void*)L_1);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2;
		L_2 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(_stringLiteral42DD196DE1A7F1A5D86B0BFB0F3C85D0E761B3B9, NULL);
		((SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_StaticFields*)il2cpp_codegen_static_fields_for(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var))->___ClassC_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_StaticFields*)il2cpp_codegen_static_fields_for(SubnetMask_t51C0E564995038028CF235F09755FB4D37F60CF7_il2cpp_TypeInfo_var))->___ClassC_2), (void*)L_2);
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
// UdpKit.UdpEndPoint UdpKit.Utils.UdpEndPointExtensions::ConvertToUdpEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpEndPointExtensions_ConvertToUdpEndPoint_m164368CB9050AB7A20BDBBA7783C43DB550E9D35 (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___endpoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___endpoint0;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1;
		L_1 = UdpEndPointExtensions_ConvertToUdpEndPoint_m6816D11682BA05E626768C50F65CF645118E9780(((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)CastclassClass((RuntimeObject*)L_0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_2 = V_0;
		return L_2;
	}
}
// UdpKit.UdpEndPoint UdpKit.Utils.UdpEndPointExtensions::ConvertToUdpEndPoint(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpEndPointExtensions_ConvertToUdpEndPoint_m6816D11682BA05E626768C50F65CF645118E9780 (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___endpoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6072EB48DD02886249D1A2B3F1975E7C4CAC9793_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_0 = ___endpoint0;
		il2cpp_codegen_initobj((&V_0), sizeof(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2));
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		UdpEndPointExtensions_Register_mA4CEA736EBC73B1E051AC9E95C66FC21D6E27E9B(L_0, L_1, NULL);
		Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586* L_2 = ((UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var))->___ipEndPointBuffer_0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_3 = ___endpoint0;
		NullCheck(L_2);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_4;
		L_4 = Dictionary_2_get_Item_m6072EB48DD02886249D1A2B3F1975E7C4CAC9793(L_2, L_3, Dictionary_2_get_Item_m6072EB48DD02886249D1A2B3F1975E7C4CAC9793_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_5 = V_1;
		return L_5;
	}
}
// System.Net.IPEndPoint UdpKit.Utils.UdpEndPointExtensions::ConvertToIPEndPoint(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* UdpEndPointExtensions_ConvertToIPEndPoint_m88978E6F66606170977F90AA760204C37593A1B6 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m55ABC4A6EF8AC09582845A8385F0B6AD9CF3A394_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_0 = NULL;
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___endpoint0;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		UdpEndPointExtensions_Register_m81F97FCAA369542E52FEE8AFF9A86F17B625696C(L_0, (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)NULL, NULL);
		Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A* L_1 = ((UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var))->___udpEndPointBuffer_1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_2 = ___endpoint0;
		NullCheck(L_1);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_3;
		L_3 = Dictionary_2_get_Item_m55ABC4A6EF8AC09582845A8385F0B6AD9CF3A394(L_1, L_2, Dictionary_2_get_Item_m55ABC4A6EF8AC09582845A8385F0B6AD9CF3A394_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_4 = V_0;
		return L_4;
	}
}
// UdpKit.UdpIPv4Address UdpKit.Utils.UdpEndPointExtensions::ConvertToUdpIPv4Address(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 UdpEndPointExtensions_ConvertToUdpIPv4Address_mD07E1C30CA1D4883DD64AF41E992286121C10DF6 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, const RuntimeMethod* method) 
{
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___address0;
		int64_t L_1;
		L_1 = IPAddressExtensions_ToLong_m03281B8F9B0D4A8B04626FDC5D49795DBB57E1B5(L_0, NULL);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_2;
		memset((&L_2), 0, sizeof(L_2));
		UdpIPv4Address__ctor_m9A03DFB8884640F6D7668E52EEE2BA39B6EBB151((&L_2), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_3 = V_0;
		return L_3;
	}
}
// System.Void UdpKit.Utils.UdpEndPointExtensions::Register(UdpKit.UdpEndPoint,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPointExtensions_Register_m81F97FCAA369542E52FEE8AFF9A86F17B625696C (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endPoint0, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___ipEndPoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4BAC76200EE2EB618E1F611C917102D5B206490D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9F2C5BA39BEA488D21212AFB1C9D12F20588EA1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A* L_0 = ((UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var))->___udpEndPointBuffer_1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = ___endPoint0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m9F2C5BA39BEA488D21212AFB1C9D12F20588EA1B(L_0, L_1, Dictionary_2_ContainsKey_m9F2C5BA39BEA488D21212AFB1C9D12F20588EA1B_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00ba;
		}
	}
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_4 = ___ipEndPoint1;
		V_1 = (bool)((((RuntimeObject*)(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00a4;
		}
	}
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_6 = ___endPoint0;
		bool L_7 = L_6.___IPv6_4;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_9 = ___endPoint0;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_10 = L_9.___AddressIPv6_6;
		V_3 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = UdpIPv6Address_get_Bytes_m1ED32ECD379C6977240715528DACF1A395F6F14C((&V_3), NULL);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_12 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_12, L_11, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_13 = ___endPoint0;
		uint16_t L_14 = L_13.___Port_2;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_15 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_15, L_12, L_14, NULL);
		___ipEndPoint1 = L_15;
		goto IL_00a3;
	}

IL_0051:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_18 = ___endPoint0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_19 = L_18.___Address_5;
		uint8_t L_20 = L_19.___Byte3_7;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_17;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_22 = ___endPoint0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_23 = L_22.___Address_5;
		uint8_t L_24 = L_23.___Byte2_6;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = L_21;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_26 = ___endPoint0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_27 = L_26.___Address_5;
		uint8_t L_28 = L_27.___Byte1_5;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = L_25;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_30 = ___endPoint0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_31 = L_30.___Address_5;
		uint8_t L_32 = L_31.___Byte0_4;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_32);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_33 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_33, L_29, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_34 = ___endPoint0;
		uint16_t L_35 = L_34.___Port_2;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_36 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_36, L_33, L_35, NULL);
		___ipEndPoint1 = L_36;
	}

IL_00a3:
	{
	}

IL_00a4:
	{
		il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A* L_37 = ((UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var))->___udpEndPointBuffer_1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_38 = ___endPoint0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_39 = ___ipEndPoint1;
		NullCheck(L_37);
		Dictionary_2_Add_m4BAC76200EE2EB618E1F611C917102D5B206490D(L_37, L_38, L_39, Dictionary_2_Add_m4BAC76200EE2EB618E1F611C917102D5B206490D_RuntimeMethod_var);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_40 = ___ipEndPoint1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_41 = ___endPoint0;
		UdpEndPointExtensions_Register_mA4CEA736EBC73B1E051AC9E95C66FC21D6E27E9B(L_40, L_41, NULL);
	}

IL_00ba:
	{
		return;
	}
}
// System.Void UdpKit.Utils.UdpEndPointExtensions::Register(System.Net.IPEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPointExtensions_Register_mA4CEA736EBC73B1E051AC9E95C66FC21D6E27E9B (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___ipEndPoint0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endPoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC474CF75DBC3A2280B059F4CCBD02448E04EE66B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF98504F8D8F37BF6F4E6543EC46199086E4D44B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586* L_0 = ((UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var))->___ipEndPointBuffer_0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1 = ___ipEndPoint0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mF98504F8D8F37BF6F4E6543EC46199086E4D44B6(L_0, L_1, Dictionary_2_ContainsKey_mF98504F8D8F37BF6F4E6543EC46199086E4D44B6_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0097;
		}
	}
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_4 = ___endPoint1;
		il2cpp_codegen_initobj((&V_2), sizeof(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2));
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = UdpEndPoint_op_Equality_m7ABD6588A196A62B9E94DF687A4ED7ED2A2FD591(L_4, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0081;
		}
	}
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_8 = ___ipEndPoint0;
		NullCheck(L_8);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_9;
		L_9 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_9, NULL);
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)((int32_t)23)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_12 = ___ipEndPoint0;
		NullCheck(L_12);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_13;
		L_13 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_12, NULL);
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_13, NULL);
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UdpIPv6Address__ctor_m0EC568B3DABC5EF29A9F2688A74B0612FD5BC26F((&L_15), L_14, /*hidden argument*/NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_16 = ___ipEndPoint0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_16, NULL);
		UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3((&___endPoint1), L_15, (uint16_t)((int32_t)(uint16_t)L_17), NULL);
		goto IL_0080;
	}

IL_0060:
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_18 = ___ipEndPoint0;
		NullCheck(L_18);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_19;
		L_19 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_18, NULL);
		int64_t L_20;
		L_20 = IPAddressExtensions_ToLong_m03281B8F9B0D4A8B04626FDC5D49795DBB57E1B5(L_19, NULL);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_21;
		memset((&L_21), 0, sizeof(L_21));
		UdpIPv4Address__ctor_m9A03DFB8884640F6D7668E52EEE2BA39B6EBB151((&L_21), L_20, /*hidden argument*/NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_22 = ___ipEndPoint0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_22, NULL);
		UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270((&___endPoint1), L_21, (uint16_t)((int32_t)(uint16_t)L_23), NULL);
	}

IL_0080:
	{
	}

IL_0081:
	{
		il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586* L_24 = ((UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var))->___ipEndPointBuffer_0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_25 = ___ipEndPoint0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_26 = ___endPoint1;
		NullCheck(L_24);
		Dictionary_2_Add_mC474CF75DBC3A2280B059F4CCBD02448E04EE66B(L_24, L_25, L_26, Dictionary_2_Add_mC474CF75DBC3A2280B059F4CCBD02448E04EE66B_RuntimeMethod_var);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_27 = ___endPoint1;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_28 = ___ipEndPoint0;
		UdpEndPointExtensions_Register_m81F97FCAA369542E52FEE8AFF9A86F17B625696C(L_27, L_28, NULL);
	}

IL_0097:
	{
		return;
	}
}
// System.Byte[] UdpKit.Utils.UdpEndPointExtensions::SerializeEndPoint(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UdpEndPointExtensions_SerializeEndPoint_m6F9ADCA679D5BAAC80812BF28E4C15ABC3C46AC5 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A1CC0A14BE815E808E471FD3FD53F985C73688);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___endPoint0;
		bool L_1 = L_0.___IPv6_4;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_4 = ___endPoint0;
		UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_5 = L_4.___AddressIPv6_6;
		V_1 = L_5;
		String_t* L_6;
		L_6 = UdpIPv6Address_ToString_mB08A40B4B1C165E55E09123E44350345FDFA7EF0((&V_1), NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_7 = ___endPoint0;
		uint16_t L_8 = L_7.___Port_2;
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral64A1CC0A14BE815E808E471FD3FD53F985C73688, L_6, L_10, NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(20 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_11);
		V_2 = L_12;
		goto IL_0079;
	}

IL_0042:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
		L_13 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_14 = ___endPoint0;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_15 = L_14.___Address_5;
		V_3 = L_15;
		String_t* L_16;
		L_16 = UdpIPv4Address_ToString_m94821749ACFD68AA344E5CE1C448B77C00AE2FF7((&V_3), NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_17 = ___endPoint0;
		uint16_t L_18 = L_17.___Port_2;
		uint16_t L_19 = L_18;
		RuntimeObject* L_20 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F, L_16, L_20, NULL);
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(20 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_13, L_21);
		V_2 = L_22;
		goto IL_0079;
	}

IL_0079:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		return L_23;
	}
}
// UdpKit.UdpEndPoint UdpKit.Utils.UdpEndPointExtensions::DeserializeEndPoint(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpEndPointExtensions_DeserializeEndPoint_m207492E3D329666142848EC6D1EAA574D4567EB4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encodedEndPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___encodedEndPoint0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_4;
		L_4 = UdpEndPoint_Parse_m3AFACC3B0307E6D867AF3A5734D8E958D8969445(L_3, NULL);
		V_1 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_5 = V_1;
		return L_5;
	}
}
// System.Boolean UdpKit.Utils.UdpEndPointExtensions::IsSameNetwork(UdpKit.UdpEndPoint,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPointExtensions_IsSameNetwork_m52295713EF4CAE5005F954E024209F04306E4EF2 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endPoint0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___otherEndPoint1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_0 = NULL;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ___endPoint0;
		bool L_1 = L_0.___IPv6_4;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_2 = ___otherEndPoint1;
		bool L_3 = L_2.___IPv6_4;
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_003d;
	}

IL_001b:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_5 = ___endPoint0;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6;
		L_6 = UdpEndPointExtensions_ConvertToIPEndPoint_m88978E6F66606170977F90AA760204C37593A1B6(L_5, NULL);
		V_0 = L_6;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_7 = ___otherEndPoint1;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_8;
		L_8 = UdpEndPointExtensions_ConvertToIPEndPoint_m88978E6F66606170977F90AA760204C37593A1B6(L_7, NULL);
		V_1 = L_8;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_9 = V_0;
		NullCheck(L_9);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_10;
		L_10 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_9, NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_11 = V_1;
		NullCheck(L_11);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_12;
		L_12 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_11, NULL);
		bool L_13;
		L_13 = IPAddressExtensions_IsInSameSubnet_m9F2F07F37AF96AE81C254C99F8BFCC97289DD623(L_10, L_12, NULL);
		V_3 = L_13;
		goto IL_003d;
	}

IL_003d:
	{
		bool L_14 = V_3;
		return L_14;
	}
}
// System.Void UdpKit.Utils.UdpEndPointExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPointExtensions__cctor_mF35809C20F33445F440E32CDB07B323967E97A47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4286F932099E047720A0752628B2155F5F406ABE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBC583D8711EB2865DEE9EDB64DDEB725868726B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586* L_0 = (Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586*)il2cpp_codegen_object_new(Dictionary_2_tE840EB09AF06BB0C4DA530F88108DCFE16A1B586_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m4286F932099E047720A0752628B2155F5F406ABE(L_0, Dictionary_2__ctor_m4286F932099E047720A0752628B2155F5F406ABE_RuntimeMethod_var);
		((UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var))->___ipEndPointBuffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var))->___ipEndPointBuffer_0), (void*)L_0);
		Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A* L_1 = (Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A*)il2cpp_codegen_object_new(Dictionary_2_t6F240EADD04917DD12B9767C3454CF7C60BC0F9A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mBC583D8711EB2865DEE9EDB64DDEB725868726B6(L_1, Dictionary_2__ctor_mBC583D8711EB2865DEE9EDB64DDEB725868726B6_RuntimeMethod_var);
		((UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var))->___udpEndPointBuffer_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var))->___udpEndPointBuffer_1), (void*)L_1);
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
// System.Guid UdpKit.Protocol.Context::get_PeerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Context_get_PeerId_m1BA623D22B3BBF808E38538C8200457990129A4C (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0 = __this->___peerId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Guid_t L_1 = V_0;
		return L_1;
	}
}
// System.Guid UdpKit.Protocol.Context::get_GameId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Context_get_GameId_m080D02700A58E016F5FACFD1BD7421D3348F41CA (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0 = __this->___gameId_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Guid_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.Protocol.Context::.ctor(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__ctor_m99AE9A3A66189ABEEB1C0D67A7FA57C7D67933AC (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, Guid_t ___game0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___game0;
		Guid_t L_1;
		L_1 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		Context__ctor_mBB26675035269A4C81CB6434C21DC68135AADCDA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.Context::.ctor(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__ctor_mBB26675035269A4C81CB6434C21DC68135AADCDA (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, Guid_t ___game0, Guid_t ___peer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Guid_t L_0 = ___game0;
		__this->___gameId_1 = L_0;
		Guid_t L_1 = ___peer1;
		__this->___peerId_0 = L_1;
		return;
	}
}
// System.Void UdpKit.Protocol.Context::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__cctor_m9F051A2B5B6B3B28D4B0F770B1F5EDC8930C335D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisAck_tAB03C973BF7DC5005D23E5056FBAEB5A8C9CB288_mB8ACBB2BB65550D7E01442471C447ED1E6F8484E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisBroadcastSearch_t4ADD57791418F4412E25058E510EE71DD3ED98C5_mEF1E21FD002F1D98535CC59D23E0277654564C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisBroadcastSession_tC45DA8101D9EBDB1D283A77EBD9DCA43E66068E4_m4D159A1427882988BF3CFFABC547C4033C2A0839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisDirectConnectionLan_tDA21D8B4BA3479C4B9623A74756E3DAE32577013_mBDB75D755665C9E9C1DDFC8F0B3B47F70A249CA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisDirectConnectionWan_tA696ECED78D7F79C805BDC10E40E14207A216A41_m25CC1BB09F2307DD84098BEE0F1818555A3EBBDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisError_t6F569A374FF84F445596C6DC89A31477516E2879_mBBE231030D4D71D9552DE771F5C67D7329CB2835_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisGetHostList_t05CD5923B7A374ABA3A3385955BCBBB4563FE1D8_m519E01DC5280C8514E1AAF34B024607032C4934D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisHostInfo_tE12DEA3082D267788D270C77EEC8FC797B3AA1E8_mB4D47E8F8CC3CCFEF7D5532B2FC2EE5F849FEF42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisHostRegister_tA295BD781E7F601C68BC46C76603816C1BA8E5F2_mCE00B7B6EDEF00942CB1885286B636A8DC5542B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisPeerConnectResult_t50B8F20CFB9950723BD66E82F38C20278F9C036F_m88445B8D990BDC85C24DF0096C881E9A94EC2A50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisPeerConnect_t2959BFA7878A894DCAB13347AC707B1D3DD804B3_m308312D5304BB3B2BC7F5E1427E6CA00CF1CCC70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisPeerDisconnect_t169A8B7D975A6A616F2821059A6F6289EFEB773E_m68072AAC165DBECDB4597C7611D3A850D20F1999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisPeerKeepAlive_tDE6CB61A5C0C16E37DBB6BEC924F278BB12CEFEA_m090314B066C4DC254654786085E4CC520A5683CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisPeerReconnect_tECCB1765089FF3437C603A709E8AE671E30BB3D7_mA217F04A4BC5ED6B3DD998F0BCFCBBDCB82A0169_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisProbeEndPointResult_t6075D92680B1376B640C8C1D28F3AE69EF50CAEE_m871FB38C039A574C881B33EF4BB87885FA2D0E8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisProbeEndPoint_t3E02E40C6ED15A2BE82E94099C013031CC7FF481_m92FAB634C829DCE03483F4CE8DEC7A7FA3083B2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisProbeFeatures_tA8BCFDE6C4DB7F44686D11AC727273609B9DFCE0_mD576F0FFDCC92B7993ECB8192E16C3AB40679EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisProbeHairpin_t1140C48633CF11495A1585F1AFF210994D61F81A_m9AC02C4E06A27A58BB40C62E5DA74AEB3C49F504_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisProbeUnsolicited_tE80A1928C3172F190FB078E373FAD700257AED5E_m7DA566398EEF0267260E6A14E3113C5AD5208DCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisPunchOnce_t5673A5EDF032ADDA1DB8CBFAAD0C134FE08E0EFB_mD732EB76A8B3A8C97187DD8A2BCB120F0FFAEDB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisPunchRequest_t9246CCC19C46E42E2E7121025FF723A32ECA8544_m06BE624129B134904D2865385023DBFB38277010_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_RegisterMessageType_TisPunch_t1165B66659A6B79402A9799FE2FD2DF0D62BA9F0_mEB9A299750AE68D97FF05DE853873DD23685028C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		((Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_StaticFields*)il2cpp_codegen_static_fields_for(Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var))->___messageTypes_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_StaticFields*)il2cpp_codegen_static_fields_for(Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var))->___messageTypes_2), (void*)L_0);
		Context_RegisterMessageType_TisAck_tAB03C973BF7DC5005D23E5056FBAEB5A8C9CB288_mB8ACBB2BB65550D7E01442471C447ED1E6F8484E(Context_RegisterMessageType_TisAck_tAB03C973BF7DC5005D23E5056FBAEB5A8C9CB288_mB8ACBB2BB65550D7E01442471C447ED1E6F8484E_RuntimeMethod_var);
		Context_RegisterMessageType_TisError_t6F569A374FF84F445596C6DC89A31477516E2879_mBBE231030D4D71D9552DE771F5C67D7329CB2835(Context_RegisterMessageType_TisError_t6F569A374FF84F445596C6DC89A31477516E2879_mBBE231030D4D71D9552DE771F5C67D7329CB2835_RuntimeMethod_var);
		Context_RegisterMessageType_TisBroadcastSearch_t4ADD57791418F4412E25058E510EE71DD3ED98C5_mEF1E21FD002F1D98535CC59D23E0277654564C32(Context_RegisterMessageType_TisBroadcastSearch_t4ADD57791418F4412E25058E510EE71DD3ED98C5_mEF1E21FD002F1D98535CC59D23E0277654564C32_RuntimeMethod_var);
		Context_RegisterMessageType_TisBroadcastSession_tC45DA8101D9EBDB1D283A77EBD9DCA43E66068E4_m4D159A1427882988BF3CFFABC547C4033C2A0839(Context_RegisterMessageType_TisBroadcastSession_tC45DA8101D9EBDB1D283A77EBD9DCA43E66068E4_m4D159A1427882988BF3CFFABC547C4033C2A0839_RuntimeMethod_var);
		Context_RegisterMessageType_TisPeerConnect_t2959BFA7878A894DCAB13347AC707B1D3DD804B3_m308312D5304BB3B2BC7F5E1427E6CA00CF1CCC70(Context_RegisterMessageType_TisPeerConnect_t2959BFA7878A894DCAB13347AC707B1D3DD804B3_m308312D5304BB3B2BC7F5E1427E6CA00CF1CCC70_RuntimeMethod_var);
		Context_RegisterMessageType_TisPeerConnectResult_t50B8F20CFB9950723BD66E82F38C20278F9C036F_m88445B8D990BDC85C24DF0096C881E9A94EC2A50(Context_RegisterMessageType_TisPeerConnectResult_t50B8F20CFB9950723BD66E82F38C20278F9C036F_m88445B8D990BDC85C24DF0096C881E9A94EC2A50_RuntimeMethod_var);
		Context_RegisterMessageType_TisPeerDisconnect_t169A8B7D975A6A616F2821059A6F6289EFEB773E_m68072AAC165DBECDB4597C7611D3A850D20F1999(Context_RegisterMessageType_TisPeerDisconnect_t169A8B7D975A6A616F2821059A6F6289EFEB773E_m68072AAC165DBECDB4597C7611D3A850D20F1999_RuntimeMethod_var);
		Context_RegisterMessageType_TisPeerReconnect_tECCB1765089FF3437C603A709E8AE671E30BB3D7_mA217F04A4BC5ED6B3DD998F0BCFCBBDCB82A0169(Context_RegisterMessageType_TisPeerReconnect_tECCB1765089FF3437C603A709E8AE671E30BB3D7_mA217F04A4BC5ED6B3DD998F0BCFCBBDCB82A0169_RuntimeMethod_var);
		Context_RegisterMessageType_TisPeerKeepAlive_tDE6CB61A5C0C16E37DBB6BEC924F278BB12CEFEA_m090314B066C4DC254654786085E4CC520A5683CC(Context_RegisterMessageType_TisPeerKeepAlive_tDE6CB61A5C0C16E37DBB6BEC924F278BB12CEFEA_m090314B066C4DC254654786085E4CC520A5683CC_RuntimeMethod_var);
		Context_RegisterMessageType_TisHostInfo_tE12DEA3082D267788D270C77EEC8FC797B3AA1E8_mB4D47E8F8CC3CCFEF7D5532B2FC2EE5F849FEF42(Context_RegisterMessageType_TisHostInfo_tE12DEA3082D267788D270C77EEC8FC797B3AA1E8_mB4D47E8F8CC3CCFEF7D5532B2FC2EE5F849FEF42_RuntimeMethod_var);
		Context_RegisterMessageType_TisHostRegister_tA295BD781E7F601C68BC46C76603816C1BA8E5F2_mCE00B7B6EDEF00942CB1885286B636A8DC5542B0(Context_RegisterMessageType_TisHostRegister_tA295BD781E7F601C68BC46C76603816C1BA8E5F2_mCE00B7B6EDEF00942CB1885286B636A8DC5542B0_RuntimeMethod_var);
		Context_RegisterMessageType_TisGetHostList_t05CD5923B7A374ABA3A3385955BCBBB4563FE1D8_m519E01DC5280C8514E1AAF34B024607032C4934D(Context_RegisterMessageType_TisGetHostList_t05CD5923B7A374ABA3A3385955BCBBB4563FE1D8_m519E01DC5280C8514E1AAF34B024607032C4934D_RuntimeMethod_var);
		Context_RegisterMessageType_TisProbeEndPoint_t3E02E40C6ED15A2BE82E94099C013031CC7FF481_m92FAB634C829DCE03483F4CE8DEC7A7FA3083B2C(Context_RegisterMessageType_TisProbeEndPoint_t3E02E40C6ED15A2BE82E94099C013031CC7FF481_m92FAB634C829DCE03483F4CE8DEC7A7FA3083B2C_RuntimeMethod_var);
		Context_RegisterMessageType_TisProbeEndPointResult_t6075D92680B1376B640C8C1D28F3AE69EF50CAEE_m871FB38C039A574C881B33EF4BB87885FA2D0E8B(Context_RegisterMessageType_TisProbeEndPointResult_t6075D92680B1376B640C8C1D28F3AE69EF50CAEE_m871FB38C039A574C881B33EF4BB87885FA2D0E8B_RuntimeMethod_var);
		Context_RegisterMessageType_TisProbeHairpin_t1140C48633CF11495A1585F1AFF210994D61F81A_m9AC02C4E06A27A58BB40C62E5DA74AEB3C49F504(Context_RegisterMessageType_TisProbeHairpin_t1140C48633CF11495A1585F1AFF210994D61F81A_m9AC02C4E06A27A58BB40C62E5DA74AEB3C49F504_RuntimeMethod_var);
		Context_RegisterMessageType_TisProbeUnsolicited_tE80A1928C3172F190FB078E373FAD700257AED5E_m7DA566398EEF0267260E6A14E3113C5AD5208DCD(Context_RegisterMessageType_TisProbeUnsolicited_tE80A1928C3172F190FB078E373FAD700257AED5E_m7DA566398EEF0267260E6A14E3113C5AD5208DCD_RuntimeMethod_var);
		Context_RegisterMessageType_TisProbeFeatures_tA8BCFDE6C4DB7F44686D11AC727273609B9DFCE0_mD576F0FFDCC92B7993ECB8192E16C3AB40679EF4(Context_RegisterMessageType_TisProbeFeatures_tA8BCFDE6C4DB7F44686D11AC727273609B9DFCE0_mD576F0FFDCC92B7993ECB8192E16C3AB40679EF4_RuntimeMethod_var);
		Context_RegisterMessageType_TisPunch_t1165B66659A6B79402A9799FE2FD2DF0D62BA9F0_mEB9A299750AE68D97FF05DE853873DD23685028C(Context_RegisterMessageType_TisPunch_t1165B66659A6B79402A9799FE2FD2DF0D62BA9F0_mEB9A299750AE68D97FF05DE853873DD23685028C_RuntimeMethod_var);
		Context_RegisterMessageType_TisPunchOnce_t5673A5EDF032ADDA1DB8CBFAAD0C134FE08E0EFB_mD732EB76A8B3A8C97187DD8A2BCB120F0FFAEDB2(Context_RegisterMessageType_TisPunchOnce_t5673A5EDF032ADDA1DB8CBFAAD0C134FE08E0EFB_mD732EB76A8B3A8C97187DD8A2BCB120F0FFAEDB2_RuntimeMethod_var);
		Context_RegisterMessageType_TisPunchRequest_t9246CCC19C46E42E2E7121025FF723A32ECA8544_m06BE624129B134904D2865385023DBFB38277010(Context_RegisterMessageType_TisPunchRequest_t9246CCC19C46E42E2E7121025FF723A32ECA8544_m06BE624129B134904D2865385023DBFB38277010_RuntimeMethod_var);
		Context_RegisterMessageType_TisDirectConnectionLan_tDA21D8B4BA3479C4B9623A74756E3DAE32577013_mBDB75D755665C9E9C1DDFC8F0B3B47F70A249CA9(Context_RegisterMessageType_TisDirectConnectionLan_tDA21D8B4BA3479C4B9623A74756E3DAE32577013_mBDB75D755665C9E9C1DDFC8F0B3B47F70A249CA9_RuntimeMethod_var);
		Context_RegisterMessageType_TisDirectConnectionWan_tA696ECED78D7F79C805BDC10E40E14207A216A41_m25CC1BB09F2307DD84098BEE0F1818555A3EBBDD(Context_RegisterMessageType_TisDirectConnectionWan_tA696ECED78D7F79C805BDC10E40E14207A216A41_m25CC1BB09F2307DD84098BEE0F1818555A3EBBDD_RuntimeMethod_var);
		return;
	}
}
// UdpKit.Protocol.Message UdpKit.Protocol.Context::CreateMessage(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* Context_CreateMessage_mE6E993B620C76D5AE3FE01F440552D4A9E58F5DD (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, uint8_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* V_1 = NULL;
	Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ((Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_StaticFields*)il2cpp_codegen_static_fields_for(Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var))->___messageTypes_2;
		uint8_t L_1 = ___type0;
		NullCheck(L_0);
		uint8_t L_2 = L_1;
		Type_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, (Type_t*)NULL, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = ((Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_StaticFields*)il2cpp_codegen_static_fields_for(Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC_il2cpp_TypeInfo_var))->___messageTypes_2;
		uint8_t L_7 = ___type0;
		NullCheck(L_6);
		uint8_t L_8 = L_7;
		Type_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		RuntimeObject* L_10;
		L_10 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_9, NULL);
		V_1 = ((Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8*)CastclassClass((RuntimeObject*)L_10, Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8_il2cpp_TypeInfo_var));
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_11 = V_1;
		NullCheck(L_11);
		L_11->___Context_13 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___Context_13), (void*)__this);
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_12 = V_1;
		uint8_t L_13 = ___type0;
		NullCheck(L_12);
		Message_Init_m6502F4D1C802E7D2F36581D4F3C6620E9EF4F566(L_12, L_13, NULL);
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_14 = V_1;
		V_2 = L_14;
		goto IL_004f;
	}

IL_0038:
	{
		String_t* L_15;
		L_15 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&___type0), NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62522089C882C6915A711DBB052B764686CB70EB)), L_15, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_17 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Context_CreateMessage_mE6E993B620C76D5AE3FE01F440552D4A9E58F5DD_RuntimeMethod_var)));
	}

IL_004f:
	{
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_18 = V_2;
		return L_18;
	}
}
// System.Int32 UdpKit.Protocol.Context::WriteMessage(UdpKit.Protocol.Message,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Context_WriteMessage_mEA5DFF8FC81B7587A4A52C3A8FA80FC71289AFB7 (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* ___msg0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7C761DC1EAE301A716A246D8842A10D06162920);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_2 = ___msg0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Info_m43C0EB22B6BD6E9FEB4AD3E45A0E767CE1DE2E0B(_stringLiteralD7C761DC1EAE301A716A246D8842A10D06162920, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)255));
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_6 = ___msg0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___buffer1;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = Message_Serialize_m39FA80AA081F638D6F81ABEB0BEAF190A64B0DCE(L_6, 1, L_7, (bool)1, NULL);
		V_0 = L_8;
		goto IL_0034;
	}

IL_0034:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// UdpKit.Protocol.Message UdpKit.Protocol.Context::ParseMessage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* Context_ParseMessage_m3459DB70852E96D9D21B2B6B4C379A9F8684D3D7 (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* V_1 = NULL;
	{
		V_0 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_1;
		L_1 = Context_ParseMessage_mB6571FB38411991C79E68A23D5C7D90C4CCE7C42(__this, L_0, (&V_0), NULL);
		V_1 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_2 = V_1;
		return L_2;
	}
}
// UdpKit.Protocol.Message UdpKit.Protocol.Context::ParseMessage(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* Context_ParseMessage_mB6571FB38411991C79E68A23D5C7D90C4CCE7C42 (Context_tF2D28DAE93E988D91D963CB8A4542BA6F30197FC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t* ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral956C8EE9362B3577886AC15684B0D635BC635226);
		s_Il2CppMethodInitialized = true;
	}
	Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* V_0 = NULL;
	Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t* L_1 = ___offset1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UdpAssert_Assert_mD587035F5FB461BB2E65A552CBB3247BEE518221((bool)((((int32_t)L_4) == ((int32_t)((int32_t)255)))? 1 : 0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bytes0;
		int32_t* L_6 = ___offset1;
		int32_t L_7 = *((int32_t*)L_6);
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_10;
		L_10 = Context_CreateMessage_mE6E993B620C76D5AE3FE01F440552D4A9E58F5DD(__this, L_9, NULL);
		V_0 = L_10;
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_11 = V_0;
		NullCheck(L_11);
		L_11->___Context_13 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___Context_13), (void*)__this);
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_12 = V_0;
		int32_t* L_13 = ___offset1;
		int32_t L_14 = *((int32_t*)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___bytes0;
		NullCheck(L_12);
		Message_InitBuffer_mABB8DA2C86C53EDB6672DF201843EE466CC3BEA6(L_12, ((int32_t)il2cpp_codegen_add(L_14, 1)), L_15, (bool)0, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_18 = V_0;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Info_m43C0EB22B6BD6E9FEB4AD3E45A0E767CE1DE2E0B(_stringLiteral956C8EE9362B3577886AC15684B0D635BC635226, L_17, NULL);
		int32_t* L_21 = ___offset1;
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Message_Serialize_m1E416E4BE1053CB01E910CA859161F91D4AB295A(L_22, NULL);
		*((int32_t*)L_21) = (int32_t)L_23;
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_24 = V_0;
		V_1 = L_24;
		goto IL_005e;
	}

IL_005e:
	{
		Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* L_25 = V_1;
		return L_25;
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
// System.Boolean UdpKit.Protocol.Message::get_Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Message_get_Read_m00D33278AF85653760909B35C2720C39AE021461 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Message_get_Pack_mA3AC09222F9FFF4BB359852C66B8812AE7E9F892(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UdpKit.Protocol.Message::get_Pack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Message_get_Pack_mA3AC09222F9FFF4BB359852C66B8812AE7E9F892 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->____pack_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.Protocol.Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		__this->___MessageId_7 = L_0;
		return;
	}
}
// System.Void UdpKit.Protocol.Message::Init(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Init_m6502F4D1C802E7D2F36581D4F3C6620E9EF4F566 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, uint8_t ___type0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___type0;
		__this->____type_3 = L_0;
		return;
	}
}
// System.Void UdpKit.Protocol.Message::InitBuffer(System.Int32,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_InitBuffer_mABB8DA2C86C53EDB6672DF201843EE466CC3BEA6 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, int32_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, bool ___pack2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___ptr0;
		__this->____ptr_1 = L_0;
		bool L_1 = ___pack2;
		__this->____pack_4 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer1;
		__this->____buffer_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_2), (void*)L_2);
		return;
	}
}
// System.Int32 UdpKit.Protocol.Message::Serialize(System.Int32,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_Serialize_m39FA80AA081F638D6F81ABEB0BEAF190A64B0DCE (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, int32_t ___ptr0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, bool ___pack2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___ptr0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer1;
		bool L_2 = ___pack2;
		Message_InitBuffer_mABB8DA2C86C53EDB6672DF201843EE466CC3BEA6(__this, L_0, L_1, L_2, NULL);
		int32_t L_3;
		L_3 = Message_Serialize_m1E416E4BE1053CB01E910CA859161F91D4AB295A(__this, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UdpKit.Protocol.Message::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Message_Serialize_m1E416E4BE1053CB01E910CA859161F91D4AB295A (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = (&__this->____type_3);
		Message_Serialize_m941C57CD27B2FD926FF724DDF57E30404807E029(__this, L_0, NULL);
		Guid_t* L_1 = (&__this->___GameId_5);
		Message_Serialize_mF36A958C063298673F024EC77F8A450C48A63DCD(__this, L_1, NULL);
		Guid_t* L_2 = (&__this->___PeerId_6);
		Message_Serialize_mF36A958C063298673F024EC77F8A450C48A63DCD(__this, L_2, NULL);
		Guid_t* L_3 = (&__this->___MessageId_7);
		Message_Serialize_mF36A958C063298673F024EC77F8A450C48A63DCD(__this, L_3, NULL);
		VirtualActionInvoker0::Invoke(4 /* System.Void UdpKit.Protocol.Message::OnSerialize() */, __this);
		__this->____buffer_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		int32_t L_4 = __this->____ptr_1;
		V_0 = L_4;
		goto IL_004c;
	}

IL_004c:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.String UdpKit.Protocol.Message::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Message_ToString_m35C3E2D95A11F2139A2DC31187F0B20DFDF9E888 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void UdpKit.Protocol.Message::Serialize(UdpKit.UdpSession&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m4E82584D7FB55388D1B6BC3CFC9B188E0E61BCA5 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4** ___session0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_Create_TisUdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6_mA9261EBE4D810F2191946999382C223BF6304B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_Serialize_TisUdpSessionSource_t8D98F3330FF28C5754CAE36D169102BD8978D2DB_m7A3E491F197B394F19ED398C09B5BC1536087F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* V_0 = NULL;
	bool V_1 = false;
	{
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4** L_0 = ___session0;
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* L_1 = *((UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4**)L_0);
		V_1 = (bool)((((RuntimeObject*)(UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_3 = (UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6*)il2cpp_codegen_object_new(UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UdpSessionImpl__ctor_m86C333EB05653DE5479D18EAE9806875545260A9(L_3, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_0014:
	{
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4** L_4 = ___session0;
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* L_5 = *((UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4**)L_4);
		V_0 = ((UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6*)CastclassClass((RuntimeObject*)L_5, UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6_il2cpp_TypeInfo_var));
	}

IL_001e:
	{
		Message_Create_TisUdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6_mA9261EBE4D810F2191946999382C223BF6304B4A(__this, (&V_0), Message_Create_TisUdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6_mA9261EBE4D810F2191946999382C223BF6304B4A_RuntimeMethod_var);
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_6 = V_0;
		NullCheck(L_6);
		Guid_t* L_7 = (&L_6->____id_1);
		Message_Serialize_mF36A958C063298673F024EC77F8A450C48A63DCD(__this, L_7, NULL);
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_8 = V_0;
		NullCheck(L_8);
		String_t** L_9 = (&L_8->____hostName_7);
		Message_Serialize_m295CD7D588FE35DB3A385AB3E938FA003B639FEE(__this, L_9, NULL);
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_11 = (&L_10->____hostData_8);
		Message_Serialize_m0E0E900C17169230959C6F21723B5CA231CF487A(__this, L_11, NULL);
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_12 = V_0;
		NullCheck(L_12);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_13 = (&L_12->____lanEndPoint_3);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_13, NULL);
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_14 = V_0;
		NullCheck(L_14);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_15 = (&L_14->____wanEndPoint_2);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_15, NULL);
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_16 = V_0;
		NullCheck(L_16);
		int32_t* L_17 = (&L_16->____connectionsMax_5);
		Message_Serialize_m45A4F2710E357F3A33DC737C6CC4F0034ADF7BA1(__this, L_17, NULL);
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_18 = V_0;
		NullCheck(L_18);
		int32_t* L_19 = (&L_18->____connectionsCurrent_6);
		Message_Serialize_m45A4F2710E357F3A33DC737C6CC4F0034ADF7BA1(__this, L_19, NULL);
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_20 = V_0;
		NullCheck(L_20);
		bool* L_21 = (&L_20->____hostIsDedicated_10);
		Message_Serialize_m19A0A278BBFDA008B2FB93D8D3B375AD96458BF6(__this, L_21, NULL);
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_22 = V_0;
		NullCheck(L_22);
		int32_t* L_23 = (&L_22->____source_4);
		Message_Serialize_TisUdpSessionSource_t8D98F3330FF28C5754CAE36D169102BD8978D2DB_m7A3E491F197B394F19ED398C09B5BC1536087F18(__this, L_23, Message_Serialize_TisUdpSessionSource_t8D98F3330FF28C5754CAE36D169102BD8978D2DB_m7A3E491F197B394F19ED398C09B5BC1536087F18_RuntimeMethod_var);
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4** L_24 = ___session0;
		UdpSessionImpl_tABCAA1D60C862344CD79F5F56813B4E9E53F5BD6* L_25 = V_0;
		*((RuntimeObject**)L_24) = (RuntimeObject*)L_25;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_24, (void*)(RuntimeObject*)L_25);
		return;
	}
}
// System.Void UdpKit.Protocol.Message::Serialize(UdpKit.NatFeatures&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_mC769A3D5082B75CE98A1246F6B1E99CF361D0E13 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5** ___features0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_Create_TisNatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5_mBD656E1730E687380D4256B45B862182B0753AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_Serialize_TisNatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_m8D6A5CDAC9036CC9E1A147B0E3B81C4EDBC06213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5** L_0 = ___features0;
		Message_Create_TisNatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5_mBD656E1730E687380D4256B45B862182B0753AC7(__this, L_0, Message_Create_TisNatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5_mBD656E1730E687380D4256B45B862182B0753AC7_RuntimeMethod_var);
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5** L_1 = ___features0;
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* L_2 = *((NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5**)L_1);
		NullCheck(L_2);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_3 = (&L_2->___WanEndPoint_0);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_3, NULL);
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5** L_4 = ___features0;
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* L_5 = *((NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5**)L_4);
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___AllowsUnsolicitedTraffic_2);
		Message_Serialize_TisNatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_m8D6A5CDAC9036CC9E1A147B0E3B81C4EDBC06213(__this, L_6, Message_Serialize_TisNatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_m8D6A5CDAC9036CC9E1A147B0E3B81C4EDBC06213_RuntimeMethod_var);
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5** L_7 = ___features0;
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* L_8 = *((NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5**)L_7);
		NullCheck(L_8);
		int32_t* L_9 = (&L_8->___SupportsHairpinTranslation_3);
		Message_Serialize_TisNatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_m8D6A5CDAC9036CC9E1A147B0E3B81C4EDBC06213(__this, L_9, Message_Serialize_TisNatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_m8D6A5CDAC9036CC9E1A147B0E3B81C4EDBC06213_RuntimeMethod_var);
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5** L_10 = ___features0;
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* L_11 = *((NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5**)L_10);
		NullCheck(L_11);
		int32_t* L_12 = (&L_11->___SupportsEndPointPreservation_4);
		Message_Serialize_TisNatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_m8D6A5CDAC9036CC9E1A147B0E3B81C4EDBC06213(__this, L_12, Message_Serialize_TisNatFeatureStates_t91E3B6C8A33F1D69907D606F186457FA5148CD84_m8D6A5CDAC9036CC9E1A147B0E3B81C4EDBC06213_RuntimeMethod_var);
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5** L_13 = ___features0;
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5* L_14 = *((NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5**)L_13);
		NullCheck(L_14);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_15 = (&L_14->___LanEndPoint_1);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_15, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.Message::Serialize(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m19A0A278BBFDA008B2FB93D8D3B375AD96458BF6 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, bool* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->____pack_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		bool L_2;
		L_2 = Message_HasSpace_mB557580F28AC415370F0D8FE0BD9C8AE3B11E1CA(__this, 1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer_2;
		int32_t* L_5 = (&__this->____ptr_1);
		bool* L_6 = ___value0;
		int32_t L_7 = *((uint8_t*)L_6);
		bool L_8;
		L_8 = Blit_PackBool_m3EE740A97BA6E0022D6B27DE66085A11F505F5E2(L_4, L_5, (bool)L_7, NULL);
	}

IL_002d:
	{
		goto IL_0045;
	}

IL_0030:
	{
		bool* L_9 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->____buffer_2;
		int32_t* L_11 = (&__this->____ptr_1);
		bool L_12;
		L_12 = Blit_ReadBool_m9ADCE64F1FA2930D667057791027EB961C371098(L_10, L_11, NULL);
		*((int8_t*)L_9) = (int8_t)L_12;
	}

IL_0045:
	{
		return;
	}
}
// System.Void UdpKit.Protocol.Message::Serialize(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m941C57CD27B2FD926FF724DDF57E30404807E029 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, uint8_t* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->____pack_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		bool L_2;
		L_2 = Message_HasSpace_mB557580F28AC415370F0D8FE0BD9C8AE3B11E1CA(__this, 1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer_2;
		int32_t* L_5 = (&__this->____ptr_1);
		uint8_t* L_6 = ___value0;
		int32_t L_7 = *((uint8_t*)L_6);
		Blit_PackByte_m991AC9E75A2BD47E5C728B4B5D75C842DD58AA8B(L_4, L_5, (uint8_t)L_7, NULL);
	}

IL_002d:
	{
		goto IL_0045;
	}

IL_0030:
	{
		uint8_t* L_8 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____buffer_2;
		int32_t* L_10 = (&__this->____ptr_1);
		uint8_t L_11;
		L_11 = Blit_ReadByte_m82CF3D5F86E53C7075A7780D8345A1938CD3AFFB(L_9, L_10, NULL);
		*((int8_t*)L_8) = (int8_t)L_11;
	}

IL_0045:
	{
		return;
	}
}
// System.Void UdpKit.Protocol.Message::Serialize(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m45A4F2710E357F3A33DC737C6CC4F0034ADF7BA1 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, int32_t* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->____pack_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		bool L_2;
		L_2 = Message_HasSpace_mB557580F28AC415370F0D8FE0BD9C8AE3B11E1CA(__this, 4, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer_2;
		int32_t* L_5 = (&__this->____ptr_1);
		int32_t* L_6 = ___value0;
		int32_t L_7 = *((int32_t*)L_6);
		Blit_PackI32_m2D127B42507F906D7745415ECA1F3F27940D61E6(L_4, L_5, L_7, NULL);
	}

IL_002d:
	{
		goto IL_0045;
	}

IL_0030:
	{
		int32_t* L_8 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____buffer_2;
		int32_t* L_10 = (&__this->____ptr_1);
		int32_t L_11;
		L_11 = Blit_ReadI32_mDB54756AFE365D4071C9531489DDFA803758844A(L_9, L_10, NULL);
		*((int32_t*)L_8) = (int32_t)L_11;
	}

IL_0045:
	{
		return;
	}
}
// System.Void UdpKit.Protocol.Message::Serialize(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m8077E79FCF8F98F7D84986E277A4F4A922F682F9 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, uint32_t* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->____pack_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		bool L_2;
		L_2 = Message_HasSpace_mB557580F28AC415370F0D8FE0BD9C8AE3B11E1CA(__this, 4, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer_2;
		int32_t* L_5 = (&__this->____ptr_1);
		uint32_t* L_6 = ___value0;
		int32_t L_7 = *((uint32_t*)L_6);
		Blit_PackU32_m6D432A6BE1FB53F6494FE81383BC25565D5CE188(L_4, L_5, L_7, NULL);
	}

IL_002d:
	{
		goto IL_0045;
	}

IL_0030:
	{
		uint32_t* L_8 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____buffer_2;
		int32_t* L_10 = (&__this->____ptr_1);
		uint32_t L_11;
		L_11 = Blit_ReadU32_m02C37F115163259B325223AB882A050858A9544E(L_9, L_10, NULL);
		*((int32_t*)L_8) = (int32_t)L_11;
	}

IL_0045:
	{
		return;
	}
}
// System.Void UdpKit.Protocol.Message::Serialize(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m295CD7D588FE35DB3A385AB3E938FA003B639FEE (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, String_t** ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->____pack_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		String_t** L_2 = ___value0;
		String_t* L_3 = *((String_t**)L_2);
		int32_t L_4;
		L_4 = Blit_GetStringSize_m68F8C87DDAFCD88510416EEEF8A6899268C87F8C(L_3, NULL);
		bool L_5;
		L_5 = Message_HasSpace_mB557580F28AC415370F0D8FE0BD9C8AE3B11E1CA(__this, L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____buffer_2;
		int32_t* L_8 = (&__this->____ptr_1);
		String_t** L_9 = ___value0;
		String_t* L_10 = *((String_t**)L_9);
		Blit_PackString_m95E89E8093F6371BAB426E157615C4DF7303AF14(L_7, L_8, L_10, NULL);
	}

IL_0033:
	{
		goto IL_004b;
	}

IL_0036:
	{
		String_t** L_11 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->____buffer_2;
		int32_t* L_13 = (&__this->____ptr_1);
		String_t* L_14;
		L_14 = Blit_ReadString_m4F4C733413A65BC57B75C4A96B34A598ADA68CE6(L_12, L_13, NULL);
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_14;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_14);
	}

IL_004b:
	{
		return;
	}
}
// System.Void UdpKit.Protocol.Message::Serialize(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m0E0E900C17169230959C6F21723B5CA231CF487A (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->____pack_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_2 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_2);
		int32_t L_4;
		L_4 = Blit_GetBytesPrefixSize_mC026F77C0CF1547A4DDD3CA6801E4712B3273BF8(L_3, NULL);
		bool L_5;
		L_5 = Message_HasSpace_mB557580F28AC415370F0D8FE0BD9C8AE3B11E1CA(__this, L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____buffer_2;
		int32_t* L_8 = (&__this->____ptr_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_9 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_9);
		Blit_PackBytesPrefix_mC2F638419351D50CF68D857FDDC43A80816839B2(L_7, L_8, L_10, NULL);
	}

IL_0033:
	{
		goto IL_004b;
	}

IL_0036:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_11 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->____buffer_2;
		int32_t* L_13 = (&__this->____ptr_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Blit_ReadBytesPrefix_m3FA9E55B1C19A531F895D36BCF8AA1E31C1AFF39(L_12, L_13, NULL);
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_14;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_14);
	}

IL_004b:
	{
		return;
	}
}
// System.Void UdpKit.Protocol.Message::Serialize(System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_mF36A958C063298673F024EC77F8A450C48A63DCD (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, Guid_t* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->____pack_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2;
		L_2 = Message_HasSpace_mB557580F28AC415370F0D8FE0BD9C8AE3B11E1CA(__this, ((int32_t)16), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer_2;
		int32_t* L_5 = (&__this->____ptr_1);
		Guid_t* L_6 = ___value0;
		Guid_t L_7 = (*(Guid_t*)L_6);
		Blit_PackGuid_m5BCEDD3B004122BC45CD8A251F6FB6488E2307F9(L_4, L_5, L_7, NULL);
	}

IL_0032:
	{
		goto IL_004e;
	}

IL_0035:
	{
		Guid_t* L_8 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____buffer_2;
		int32_t* L_10 = (&__this->____ptr_1);
		Guid_t L_11;
		L_11 = Blit_ReadGuid_mE215E573547804CB700423CBE15A6BE8D9F376B9(L_9, L_10, NULL);
		*(Guid_t*)L_8 = L_11;
	}

IL_004e:
	{
		return;
	}
}
// System.Void UdpKit.Protocol.Message::Serialize(UdpKit.UdpEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->____pack_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		bool L_2;
		L_2 = Message_HasSpace_mB557580F28AC415370F0D8FE0BD9C8AE3B11E1CA(__this, 6, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer_2;
		int32_t* L_5 = (&__this->____ptr_1);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_6 = ___value0;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_7 = (*(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*)L_6);
		Blit_PackEndPoint_mB945D60F4DEF815DA7165C738CC0FC2230ACF9B6(L_4, L_5, L_7, NULL);
	}

IL_0031:
	{
		goto IL_004d;
	}

IL_0034:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_8 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____buffer_2;
		int32_t* L_10 = (&__this->____ptr_1);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_11;
		L_11 = Blit_ReadEndPoint_mC35F1CD0814D49F7C489E838B9B7171EA074CE22(L_9, L_10, NULL);
		*(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*)L_8 = L_11;
	}

IL_004d:
	{
		return;
	}
}
// System.Void UdpKit.Protocol.Message::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_OnSerialize_mCEE0519B150B5C2210E48CB60726204490642C36 (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UdpKit.Protocol.Message::HasSpace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Message_HasSpace_mB557580F28AC415370F0D8FE0BD9C8AE3B11E1CA (Message_tECBCBB0125C8814E2E446F434147B1123DFA70F8* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____ptr_1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = __this->____ptr_1;
		int32_t L_2 = ___bytes0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____buffer_2;
		NullCheck(L_3);
		G_B3_0 = ((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) > ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0036;
	}

IL_002b:
	{
		__this->____ptr_1 = (-1);
		V_1 = (bool)0;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_5 = V_1;
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
// System.Void UdpKit.Protocol.BroadcastSearch::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastSearch_OnSerialize_m6555D8B7AB8C1016F5677E8AF607FAC574873064 (BroadcastSearch_t4ADD57791418F4412E25058E510EE71DD3ED98C5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UdpKit.Protocol.BroadcastSearch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastSearch__ctor_m70A6FF42838C640C0B62383050F9F6FA64A4BECA (BroadcastSearch_t4ADD57791418F4412E25058E510EE71DD3ED98C5* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Void UdpKit.Protocol.BroadcastSession::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastSession_OnSerialize_mEEB1E4AA5DB23CAB866CE76A5B3DAC7176D20EC2 (BroadcastSession_tC45DA8101D9EBDB1D283A77EBD9DCA43E66068E4* __this, const RuntimeMethod* method) 
{
	{
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4** L_0 = (&__this->___Host_14);
		Message_Serialize_m4E82584D7FB55388D1B6BC3CFC9B188E0E61BCA5(__this, L_0, NULL);
		int32_t* L_1 = (&__this->___Port_15);
		Message_Serialize_m45A4F2710E357F3A33DC737C6CC4F0034ADF7BA1(__this, L_1, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.BroadcastSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastSession__ctor_m739F2B69F1B14EFCDEEC6FBA3B06D728C018081C (BroadcastSession_tC45DA8101D9EBDB1D283A77EBD9DCA43E66068E4* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Void UdpKit.Protocol.DirectConnectionLan::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectConnectionLan_OnSerialize_m2D7183303AC32DA779975A91913BCE230B387C5D (DirectConnectionLan_tDA21D8B4BA3479C4B9623A74756E3DAE32577013* __this, const RuntimeMethod* method) 
{
	{
		Message_OnSerialize_mCEE0519B150B5C2210E48CB60726204490642C36(__this, NULL);
		Guid_t* L_0 = (&__this->___RemotePeerId_14);
		Message_Serialize_mF36A958C063298673F024EC77F8A450C48A63DCD(__this, L_0, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_1 = (&__this->___RemoteEndPoint_15);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_1, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.DirectConnectionLan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectConnectionLan__ctor_mF6C4361AED949F23228D07F6581C5BC98F0D9DE9 (DirectConnectionLan_tDA21D8B4BA3479C4B9623A74756E3DAE32577013* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Void UdpKit.Protocol.DirectConnectionWan::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectConnectionWan_OnSerialize_m01767BE7698ED1305178530FCA7D720B2315CBE7 (DirectConnectionWan_tA696ECED78D7F79C805BDC10E40E14207A216A41* __this, const RuntimeMethod* method) 
{
	{
		Message_OnSerialize_mCEE0519B150B5C2210E48CB60726204490642C36(__this, NULL);
		Guid_t* L_0 = (&__this->___RemotePeerId_14);
		Message_Serialize_mF36A958C063298673F024EC77F8A450C48A63DCD(__this, L_0, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_1 = (&__this->___RemoteEndPoint_15);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_1, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.DirectConnectionWan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectConnectionWan__ctor_mD7D00C61AA6D0825E9ECB14C5DDEAF3D4E7E40BE (DirectConnectionWan_tA696ECED78D7F79C805BDC10E40E14207A216A41* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Void UdpKit.Protocol.Error::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error_OnSerialize_m9DA8D225CD5855188FB0CB41894B20A8AC1B8FCF (Error_t6F569A374FF84F445596C6DC89A31477516E2879* __this, const RuntimeMethod* method) 
{
	{
		Message_OnSerialize_mCEE0519B150B5C2210E48CB60726204490642C36(__this, NULL);
		String_t** L_0 = (&__this->___Text_14);
		Message_Serialize_m295CD7D588FE35DB3A385AB3E938FA003B639FEE(__this, L_0, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.Error::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error__ctor_m1C6D0891BAF98EA3A5225A95F1E97526522EB5A5 (Error_t6F569A374FF84F445596C6DC89A31477516E2879* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Boolean UdpKit.Protocol.GetHostList::get_Resend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetHostList_get_Resend_m5BC195D4FF153BA185EE5BF741900C6EB8FA294F (GetHostList_t05CD5923B7A374ABA3A3385955BCBBB4563FE1D8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UdpKit.Protocol.GetHostList::get_IsUnique()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetHostList_get_IsUnique_mBDE80CAD37C3DCFBCA12C67E4B6455193ADABB67 (GetHostList_t05CD5923B7A374ABA3A3385955BCBBB4563FE1D8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UdpKit.Protocol.GetHostList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetHostList__ctor_m4FABEDF29D921B69AAE8256884498654285F7B0B (GetHostList_t05CD5923B7A374ABA3A3385955BCBBB4563FE1D8* __this, const RuntimeMethod* method) 
{
	{
		Query__ctor_mBDF81B0FA38CF369A22EFFDD2E22D45CF67A1A78(__this, NULL);
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
// System.Void UdpKit.Protocol.HostInfo::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostInfo_OnSerialize_m43FBA4A8EF49CEC72AA16C988B4544F76DC6CB02 (HostInfo_tE12DEA3082D267788D270C77EEC8FC797B3AA1E8* __this, const RuntimeMethod* method) 
{
	{
		Message_OnSerialize_mCEE0519B150B5C2210E48CB60726204490642C36(__this, NULL);
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4** L_0 = (&__this->___Host_14);
		Message_Serialize_m4E82584D7FB55388D1B6BC3CFC9B188E0E61BCA5(__this, L_0, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.HostInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostInfo__ctor_m31667BA61610AD8B60070A085FAB3857120667E2 (HostInfo_tE12DEA3082D267788D270C77EEC8FC797B3AA1E8* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Void UdpKit.Protocol.PeerConnect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerConnect__ctor_m916AAED21842FB89E6F38DDF7F3BE234C4ABD0D7 (PeerConnect_t2959BFA7878A894DCAB13347AC707B1D3DD804B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Query_1__ctor_mDFB1765635D131FADE7162C6AA567AC78E222CE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Query_1__ctor_mDFB1765635D131FADE7162C6AA567AC78E222CE4(__this, Query_1__ctor_mDFB1765635D131FADE7162C6AA567AC78E222CE4_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UdpKit.Protocol.PeerConnect::get_Resend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PeerConnect_get_Resend_m6FE0763CB3DDB2DB65FB13A7B2F1DAA3576D10F9 (PeerConnect_t2959BFA7878A894DCAB13347AC707B1D3DD804B3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UdpKit.Protocol.PeerConnect::get_IsUnique()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PeerConnect_get_IsUnique_m66A0A8B938F84CFB7E54173D406D870ABC157EE5 (PeerConnect_t2959BFA7878A894DCAB13347AC707B1D3DD804B3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
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
// System.Void UdpKit.Protocol.PeerConnectResult::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerConnectResult_OnSerialize_m740FD5503F8C66F784DB6632CC280CAC46F47AA0 (PeerConnectResult_t50B8F20CFB9950723BD66E82F38C20278F9C036F* __this, const RuntimeMethod* method) 
{
	{
		Result_OnSerialize_m6D2A089A3968510BD6BD0FE59543EFABDE3BEE99(__this, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_0 = (&__this->___Probe0_15);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_0, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_1 = (&__this->___Probe1_16);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_1, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_2 = (&__this->___Probe2_17);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_2, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.PeerConnectResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerConnectResult__ctor_m348F6DA59328C637F5156BE9F564B8274684CCA0 (PeerConnectResult_t50B8F20CFB9950723BD66E82F38C20278F9C036F* __this, const RuntimeMethod* method) 
{
	{
		Result__ctor_mBB949655301609C53AA1445DD160F5CBEC42C573(__this, NULL);
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
// System.Void UdpKit.Protocol.PeerKeepAlive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerKeepAlive__ctor_m256AE9A2086D31CE0BA15701273868DC7F0B18D1 (PeerKeepAlive_tDE6CB61A5C0C16E37DBB6BEC924F278BB12CEFEA* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Boolean UdpKit.Protocol.HostRegister::get_Resend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HostRegister_get_Resend_m5BFAAF54E81913A7FCD69E4E8EE5CCE90914AD24 (HostRegister_tA295BD781E7F601C68BC46C76603816C1BA8E5F2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UdpKit.Protocol.HostRegister::get_IsUnique()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HostRegister_get_IsUnique_m2928F5890AF9C054C7A25506E95EDFC11AE16439 (HostRegister_tA295BD781E7F601C68BC46C76603816C1BA8E5F2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UdpKit.Protocol.HostRegister::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostRegister_OnSerialize_mD1173148BD3AD79D0AE198227DEB9C00725D2B35 (HostRegister_tA295BD781E7F601C68BC46C76603816C1BA8E5F2* __this, const RuntimeMethod* method) 
{
	{
		UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4** L_0 = (&__this->___Host_15);
		Message_Serialize_m4E82584D7FB55388D1B6BC3CFC9B188E0E61BCA5(__this, L_0, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.HostRegister::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostRegister__ctor_m3ACBF4FA6E4FBBE8532489BDB274BD6012330545 (HostRegister_tA295BD781E7F601C68BC46C76603816C1BA8E5F2* __this, const RuntimeMethod* method) 
{
	{
		Query__ctor_mBDF81B0FA38CF369A22EFFDD2E22D45CF67A1A78(__this, NULL);
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
// System.Void UdpKit.Protocol.PeerDisconnect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerDisconnect__ctor_mB26355F1DF0064D4E222DF3C86898B66C5259578 (PeerDisconnect_t169A8B7D975A6A616F2821059A6F6289EFEB773E* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Boolean UdpKit.Protocol.ProbeEndPoint::get_Resend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProbeEndPoint_get_Resend_m629C30B98F814B3431CCE00A3EF2E563DDB22B3D (ProbeEndPoint_t3E02E40C6ED15A2BE82E94099C013031CC7FF481* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UdpKit.Protocol.ProbeEndPoint::get_IsUnique()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProbeEndPoint_get_IsUnique_m38554B66A3E5A16508455258210E518C94A47E9A (ProbeEndPoint_t3E02E40C6ED15A2BE82E94099C013031CC7FF481* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UdpKit.Protocol.ProbeEndPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeEndPoint__ctor_m4BDAEC56CEEA0B2612884E0801D6A7D530E29A3F (ProbeEndPoint_t3E02E40C6ED15A2BE82E94099C013031CC7FF481* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Query_1__ctor_mB4F89F8AEBDF271DCF41FADFF95345676A2E92C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Query_1__ctor_mB4F89F8AEBDF271DCF41FADFF95345676A2E92C1(__this, Query_1__ctor_mB4F89F8AEBDF271DCF41FADFF95345676A2E92C1_RuntimeMethod_var);
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
// System.Void UdpKit.Protocol.ProbeEndPointResult::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeEndPointResult_OnSerialize_m4445EBBE7FB41EAC3D4FF4C13E290BE7B9BDD628 (ProbeEndPointResult_t6075D92680B1376B640C8C1D28F3AE69EF50CAEE* __this, const RuntimeMethod* method) 
{
	{
		Result_OnSerialize_m6D2A089A3968510BD6BD0FE59543EFABDE3BEE99(__this, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_0 = (&__this->___WanEndPoint_15);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_0, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.ProbeEndPointResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeEndPointResult__ctor_m16F0B6FF1F2CED532AD5C8439E0F6C906892FC56 (ProbeEndPointResult_t6075D92680B1376B640C8C1D28F3AE69EF50CAEE* __this, const RuntimeMethod* method) 
{
	{
		Result__ctor_mBB949655301609C53AA1445DD160F5CBEC42C573(__this, NULL);
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
// System.Boolean UdpKit.Protocol.ProbeFeatures::get_IsUnique()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProbeFeatures_get_IsUnique_mE054D52ED6AC7698AE74C9AA90F5D2CB72B4A8F8 (ProbeFeatures_tA8BCFDE6C4DB7F44686D11AC727273609B9DFCE0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UdpKit.Protocol.ProbeFeatures::get_Resend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProbeFeatures_get_Resend_m9D9CAED97DF9B4F630E06A573B0398DC05F64138 (ProbeFeatures_tA8BCFDE6C4DB7F44686D11AC727273609B9DFCE0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UdpKit.Protocol.ProbeFeatures::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeFeatures_OnSerialize_m8A91D310E57FE91D39F8F5E5C81F18BB8A08A74E (ProbeFeatures_tA8BCFDE6C4DB7F44686D11AC727273609B9DFCE0* __this, const RuntimeMethod* method) 
{
	{
		Message_OnSerialize_mCEE0519B150B5C2210E48CB60726204490642C36(__this, NULL);
		NatFeatures_t33CCB083F1BA9B77F57FD30FF4EA67774F19D4C5** L_0 = (&__this->___NatFeatures_15);
		Message_Serialize_mC769A3D5082B75CE98A1246F6B1E99CF361D0E13(__this, L_0, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.ProbeFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeFeatures__ctor_mFE90355CD427D4C1D590AE67AEEE7BFE009A7DD4 (ProbeFeatures_tA8BCFDE6C4DB7F44686D11AC727273609B9DFCE0* __this, const RuntimeMethod* method) 
{
	{
		Query__ctor_mBDF81B0FA38CF369A22EFFDD2E22D45CF67A1A78(__this, NULL);
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
// System.Boolean UdpKit.Protocol.ProbeHairpin::get_IsUnique()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProbeHairpin_get_IsUnique_mBF4000B3C57FF33A79D1C5C45E5FA3C8DC594ED7 (ProbeHairpin_t1140C48633CF11495A1585F1AFF210994D61F81A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UdpKit.Protocol.ProbeHairpin::get_Resend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProbeHairpin_get_Resend_m394E398A32FE37CAADD458D41AE66CEAC384B0DF (ProbeHairpin_t1140C48633CF11495A1585F1AFF210994D61F81A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UdpKit.Protocol.ProbeHairpin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeHairpin__ctor_mCC76F25BD4CD34FE66EBA9EE643A91DCDB1F14C4 (ProbeHairpin_t1140C48633CF11495A1585F1AFF210994D61F81A* __this, const RuntimeMethod* method) 
{
	{
		Query__ctor_mBDF81B0FA38CF369A22EFFDD2E22D45CF67A1A78(__this, NULL);
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
// System.Void UdpKit.Protocol.PeerReconnect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerReconnect__ctor_m0B94BFA3CC8353899187CBC6F782C711D8B6B934 (PeerReconnect_tECCB1765089FF3437C603A709E8AE671E30BB3D7* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Void UdpKit.Protocol.ProbeUnsolicited::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeUnsolicited_OnSerialize_mAE796E548160895D7C8D9DD0D71DA30AB95B2F84 (ProbeUnsolicited_tE80A1928C3172F190FB078E373FAD700257AED5E* __this, const RuntimeMethod* method) 
{
	{
		Message_OnSerialize_mCEE0519B150B5C2210E48CB60726204490642C36(__this, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_0 = (&__this->___WanEndPoint_14);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_0, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.ProbeUnsolicited::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbeUnsolicited__ctor_m1C5790C52AF50C9F8D26B518DE77D4945AA39FBE (ProbeUnsolicited_tE80A1928C3172F190FB078E373FAD700257AED5E* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Void UdpKit.Protocol.Punch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Punch__ctor_m72997F061DCECC2E6766AA942AE6D308FF094D52 (Punch_t1165B66659A6B79402A9799FE2FD2DF0D62BA9F0* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Void UdpKit.Protocol.PunchOnce::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunchOnce_OnSerialize_m73B42FAB3729142B7C367ED99A764A27BEE8E627 (PunchOnce_t5673A5EDF032ADDA1DB8CBFAAD0C134FE08E0EFB* __this, const RuntimeMethod* method) 
{
	{
		Message_OnSerialize_mCEE0519B150B5C2210E48CB60726204490642C36(__this, NULL);
		Guid_t* L_0 = (&__this->___RemotePeerId_14);
		Message_Serialize_mF36A958C063298673F024EC77F8A450C48A63DCD(__this, L_0, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_1 = (&__this->___RemoteEndPoint_15);
		Message_Serialize_m74265410A63B4D3E12FA27050D515A825614D7FA(__this, L_1, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.PunchOnce::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunchOnce__ctor_m4657F9E40DA9256677B1A18E52CD681FE2925F19 (PunchOnce_t5673A5EDF032ADDA1DB8CBFAAD0C134FE08E0EFB* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Void UdpKit.Protocol.PunchRequest::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunchRequest_OnSerialize_mD21CFDFEA916DA60501E0043259F5DFB91BF633E (PunchRequest_t9246CCC19C46E42E2E7121025FF723A32ECA8544* __this, const RuntimeMethod* method) 
{
	{
		Message_OnSerialize_mCEE0519B150B5C2210E48CB60726204490642C36(__this, NULL);
		Guid_t* L_0 = (&__this->___Host_14);
		Message_Serialize_mF36A958C063298673F024EC77F8A450C48A63DCD(__this, L_0, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.PunchRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunchRequest__ctor_m76175FBD256BB5B2B0EC4FABF375A5D29821B961 (PunchRequest_t9246CCC19C46E42E2E7121025FF723A32ECA8544* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Boolean UdpKit.Protocol.Query::get_HasResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Query_get_HasResult_m75023341C67A9C02A15524D5ED78F6A455E27C35 (Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* L_0 = __this->___Result_14;
		V_0 = (bool)((!(((RuntimeObject*)(Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UdpKit.Protocol.Query::get_Failed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Query_get_Failed_m728B5EB897B335EB4B69CD042B91F7AA0D6B2864 (Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* L_0 = __this->___Result_14;
		V_0 = (bool)((((RuntimeObject*)(Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UdpKit.Protocol.Query::get_IsUnique()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Query_get_IsUnique_m78CF791F607BF0D4BE6FED4527C01A0CE866D435 (Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* __this, const RuntimeMethod* method) 
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
// System.Boolean UdpKit.Protocol.Query::get_Resend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Query_get_Resend_m58C7A938DE95C6C134B4192E0F773AB0392222DD (Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* __this, const RuntimeMethod* method) 
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
// System.UInt32 UdpKit.Protocol.Query::get_BaseTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Query_get_BaseTimeout_m046C87B22C6F0AD753155F507FC0C708BEF9C06D (Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = ((int32_t)500);
		goto IL_0009;
	}

IL_0009:
	{
		uint32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void UdpKit.Protocol.Query::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_mBDF81B0FA38CF369A22EFFDD2E22D45CF67A1A78 (Query_tEBBDADD5C298ED996B284168346F9D8588FB3DC3* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Void UdpKit.Protocol.Result::OnSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_OnSerialize_m6D2A089A3968510BD6BD0FE59543EFABDE3BEE99 (Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* __this, const RuntimeMethod* method) 
{
	{
		Message_OnSerialize_mCEE0519B150B5C2210E48CB60726204490642C36(__this, NULL);
		Guid_t* L_0 = (&__this->___Query_14);
		Message_Serialize_mF36A958C063298673F024EC77F8A450C48A63DCD(__this, L_0, NULL);
		return;
	}
}
// System.Void UdpKit.Protocol.Result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mBB949655301609C53AA1445DD160F5CBEC42C573 (Result_t792ADD81180269A73B4403756CB1F65EBC6F0F9F* __this, const RuntimeMethod* method) 
{
	{
		Message__ctor_m0D0E99D75AD4696C3937D33A86AECAA25335C167(__this, NULL);
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
// System.Void UdpKit.Protocol.Ack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ack__ctor_m9C514AA88B9F323291DE77ADB0C9A28414456375 (Ack_tAB03C973BF7DC5005D23E5056FBAEB5A8C9CB288* __this, const RuntimeMethod* method) 
{
	{
		Result__ctor_mBB949655301609C53AA1445DD160F5CBEC42C573(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Invoke_mA296207367E0F554A9BF1DD50F78C5433A46F1C3_inline (Writer_t90D0F86AE0BFD029C8EB101FF28DC23CD1C929AF* __this, uint32_t ___level0, String_t* ___message1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___level0, ___message1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* UdpSessionFilter_get_FilterProperties_mFDBAAB426FF1A841CA7D01BD9FB78F23CC59C278_inline (UdpSessionFilter_t51B67274F6C673BB2939D4ACE9EB36A0274B6A63* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0 = __this->___U3CFilterPropertiesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->____address_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____port_3;
		return L_0;
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

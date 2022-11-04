#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// Photon.Bolt.Collections.BoltDoubleList`1<Photon.Bolt.Internal.GlobalEventListenerBase>
struct BoltDoubleList_1_t2F0E19BAB3CA7567E5600D1EE23786A1BAE0FE92;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`1<System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>>>
struct Func_1_t2A1D3A29AAB3913DBF979CD6754BCA09515B4FD4;
// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`2<System.Int32,System.Object>
struct Func_2_tB8444326CD91502B291E0988F04448A82D0F6552;
// System.Func`2<System.Int32,System.String>
struct Func_2_t5F1225B06C6A5C271E62144313BDD06C76F20302;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.String,System.Int32>
struct Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
// System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>>
struct List_1_t42A0D954620E0952274A228232D7FE639FA108C7;
// System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<System.Object,System.Object>>
struct List_1_tAEED11AB20BF771C0B63AC1ECF1D030649939125;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Reflection.Assembly>
struct Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>[]
struct STuple_2U5BU5D_t193B100A4D4FB836988FF7996190AD0F79F83EC0;
// Photon.Bolt.Collections.STuple`2<System.Object,System.Object>[]
struct STuple_2U5BU5D_t2B846113DB25E74BABAEEBCDF10BBB17E5DFFB5C;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
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
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Diagnostics.AsyncStreamReader
struct AsyncStreamReader_tAC4F4C9FDA0C1A8D21F2B1C838C08C0E83AE871B;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Photon.Bolt.BoltConfig
struct BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979;
// Photon.Bolt.BoltDebugStart
struct BoltDebugStart_tD90A04848F949227F6E1F7AB00FA2E7E67B5DD66;
// Photon.Bolt.BoltDebugStartSettings
struct BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12;
// Photon.Bolt.BoltExecutionOrderAttribute
struct BoltExecutionOrderAttribute_t2FA47CF768D9005CFFB1A83073A8A7324E358673;
// Photon.Bolt.BoltGlobalBehaviourAttribute
struct BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087;
// Photon.Bolt.BoltRuntimeSettings
struct BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Diagnostics.DataReceivedEventHandler
struct DataReceivedEventHandler_t9E71CD00F9E67F5049738A8A67CD54B145C70BDC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Photon.Bolt.Internal.GlobalEventListenerBase
struct GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Photon.Bolt.Internal.IDebugDrawer
struct IDebugDrawer_t04FCE58DE42470B3D76AC5283177812211AE5BF2;
// Photon.Bolt.Internal.IDebugDrawerObjectArray
struct IDebugDrawerObjectArray_t118B8607185929EBFC0AD0A2B84404CE7670EC74;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Photon.Bolt.IProtocolToken
struct IProtocolToken_tB524DC17264ED5B421A139F373F65FF712065B83;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t94542FC52B3B1FCA7BC4D8CC518FC2EF9870861F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.OperatingSystem
struct OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557;
// System.Diagnostics.Process
struct Process_tF74794C64BCE464912BF158980B347CE66AF203B;
// System.Diagnostics.ProcessModule
struct ProcessModule_t7CCBC3E3C3382F1A431C2CE645F06224FC47BC16;
// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_tB2EBC893262A796A0182EDF0022F0B08E30461EE;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C;
// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t9E9F6B3EB7E8031736898D77DD88F2BD29740971;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t5AEE89AB4B4A54EAC5B66A72A0D7D2EF8C82EC86;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_tA260D4420C5F481A5DA030FFB19D038BBF8A63CB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Diagnostics.TraceSwitch
struct TraceSwitch_t199A0DB240149B5CDCF2754FC0E11CCBF51224B4;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// Photon.Bolt.Internal.UnityDebugDrawer
struct UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4
struct U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB;
// Photon.Bolt.BoltDebugStartSettings/EnumWindowsProc
struct EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755;
// Photon.Bolt.BoltDynamicData/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltAssemblies_t2B93451C82C0446CE6FE1A6AEFAF70AFDC25395A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltNetwork_t089758D07E24A397C5DB492715117C30154CD81C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugInfo_tFAA0833B8DC00F29BA1DA3047B896A3D88024609_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2A1D3A29AAB3913DBF979CD6754BCA09515B4FD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5F1225B06C6A5C271E62144313BDD06C76F20302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t42A0D954620E0952274A228232D7FE639FA108C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitySettings_tA555A914A8781790DF9DE0AF41B32AFCF2834BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral332E60615BFCD7C3FAB9BB106F6604F38A206248;
IL2CPP_EXTERN_C String_t* _stringLiteral35F1FB4654DBC227365C54104E6FF140C68AB66C;
IL2CPP_EXTERN_C String_t* _stringLiteral4020D133DCC1D50ACDB8B4A2FA55737DEA76ADA2;
IL2CPP_EXTERN_C String_t* _stringLiteral75578BE4212F61B391F054AA12B1C33FCAF798C7;
IL2CPP_EXTERN_C String_t* _stringLiteral8A08E2E3369AF6AD6BE7D006CB0EDC019FB2FBBA;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB05A937F99D56323E53D6EC32988D8BC54EE5A;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA8C0C0E2CE2F38F6475B5D65D0F443BC2CF759;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE8213CEBBAFEF02CEC81B1441E91C0156D115511;
IL2CPP_EXTERN_C String_t* _stringLiteralE9FEAAC83276FE694BA085AC3376C3B2089B921C;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisAssembly_t_m69D7963E7C3F19E3FD5B7D9FE783F9F7DF083DB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltDebugStartSettings_Window_mAD6E33EAC33D6FF74976FBA4A20970A949003EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltDynamicData_GetActiveSceneIndex_mF797BDDD306D38E1A995688CA21E46293BC6D0B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltDynamicData_GetGlobalBehaviourTypes_mAD5C1F11A5B3CB3A4BCDF33B5AD787457B200F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltDynamicData_GetSceneIndex_mBCD317FF3165F54C71ED896A3E0813B257813083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltDynamicData_GetSceneName_m64ECFE8E93183B022C1140A14547C78AFF2A53E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltNetworkInternal_User_EnvironmentReset_m33511BF5E0B1BC070CBB5D3AF21D2900B56F38A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltNetworkInternal_User_EnvironmentSetup_mB49D13AC9B253E83298252E9E10B5E5090573586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisBoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087_mBFC4004E3D17D9DCC5955B8C2DC8282D0A31EEC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3E3B9B34A834C8C7683298785F329C18308A28F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8A356B6396F4F7F3D5A0CFA18F886FE794970BDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* STuple_2__ctor_mE1CCD1DACA36C961EBDAEBA4DBBF9CBE61423590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayClientConnectU3Ed__4_System_Collections_IEnumerator_Reset_m780F73AACB2321CDE1D9124947E53614A236E464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CGetGlobalBehaviourTypesU3Eb__0_mC480F15F888D5CD3A42AFECC432BA6EC02E47CB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_0_0_0_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct STuple_2U5BU5D_t2B846113DB25E74BABAEEBCDF10BBB17E5DFFB5C;
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
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
struct U3CModuleU3E_t8AF00E4A68B1D26EF3589A3E1B9FA4881DA74BFF 
{
};

// System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>>
struct List_1_t42A0D954620E0952274A228232D7FE639FA108C7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	STuple_2U5BU5D_t193B100A4D4FB836988FF7996190AD0F79F83EC0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t42A0D954620E0952274A228232D7FE639FA108C7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	STuple_2U5BU5D_t193B100A4D4FB836988FF7996190AD0F79F83EC0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<System.Object,System.Object>>
struct List_1_tAEED11AB20BF771C0B63AC1ECF1D030649939125  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	STuple_2U5BU5D_t2B846113DB25E74BABAEEBCDF10BBB17E5DFFB5C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAEED11AB20BF771C0B63AC1ECF1D030649939125_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	STuple_2U5BU5D_t2B846113DB25E74BABAEEBCDF10BBB17E5DFFB5C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2  : public RuntimeObject
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;
};
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Photon.Bolt.BoltConfig
struct BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979  : public RuntimeObject
{
	// System.Int32 Photon.Bolt.BoltConfig::framesPerSecond
	int32_t ___framesPerSecond_0;
	// System.Int32 Photon.Bolt.BoltConfig::packetSize
	int32_t ___packetSize_1;
	// System.Int32 Photon.Bolt.BoltConfig::packetMaxEventSize
	int32_t ___packetMaxEventSize_2;
	// System.Int32 Photon.Bolt.BoltConfig::packetStreamSize
	int32_t ___packetStreamSize_3;
	// System.Int32 Photon.Bolt.BoltConfig::maxEntityPriority
	int32_t ___maxEntityPriority_4;
	// System.Int32 Photon.Bolt.BoltConfig::maxPropertyPriority
	int32_t ___maxPropertyPriority_5;
	// Photon.Bolt.ScopeMode Photon.Bolt.BoltConfig::scopeMode
	int32_t ___scopeMode_6;
	// Photon.Bolt.BoltConfigLogTargets Photon.Bolt.BoltConfig::logTargets
	int32_t ___logTargets_7;
	// System.Boolean Photon.Bolt.BoltConfig::disableDejitterBuffer
	bool ___disableDejitterBuffer_8;
	// System.Int32 Photon.Bolt.BoltConfig::clientSendRate
	int32_t ___clientSendRate_9;
	// System.Int32 Photon.Bolt.BoltConfig::clientDejitterDelay
	int32_t ___clientDejitterDelay_10;
	// System.Int32 Photon.Bolt.BoltConfig::clientDejitterDelayMin
	int32_t ___clientDejitterDelayMin_11;
	// System.Int32 Photon.Bolt.BoltConfig::clientDejitterDelayMax
	int32_t ___clientDejitterDelayMax_12;
	// System.Int32 Photon.Bolt.BoltConfig::serverSendRate
	int32_t ___serverSendRate_13;
	// System.Int32 Photon.Bolt.BoltConfig::serverDejitterDelay
	int32_t ___serverDejitterDelay_14;
	// System.Int32 Photon.Bolt.BoltConfig::serverDejitterDelayMin
	int32_t ___serverDejitterDelayMin_15;
	// System.Int32 Photon.Bolt.BoltConfig::serverDejitterDelayMax
	int32_t ___serverDejitterDelayMax_16;
	// System.Int32 Photon.Bolt.BoltConfig::serverConnectionLimit
	int32_t ___serverConnectionLimit_17;
	// Photon.Bolt.BoltConnectionAcceptMode Photon.Bolt.BoltConfig::serverConnectionAcceptMode
	int32_t ___serverConnectionAcceptMode_18;
	// System.Int32 Photon.Bolt.BoltConfig::<commandDejitterDelay>k__BackingField
	int32_t ___U3CcommandDejitterDelayU3Ek__BackingField_19;
	// System.Int32 Photon.Bolt.BoltConfig::commandQueueSize
	int32_t ___commandQueueSize_20;
	// System.Int32 Photon.Bolt.BoltConfig::commandRedundancy
	int32_t ___commandRedundancy_21;
	// System.Single Photon.Bolt.BoltConfig::commandPingMultiplier
	float ___commandPingMultiplier_22;
	// System.Boolean Photon.Bolt.BoltConfig::useNetworkSimulation
	bool ___useNetworkSimulation_23;
	// System.Single Photon.Bolt.BoltConfig::simulatedLoss
	float ___simulatedLoss_24;
	// System.Int32 Photon.Bolt.BoltConfig::simulatedPingMean
	int32_t ___simulatedPingMean_25;
	// System.Int32 Photon.Bolt.BoltConfig::simulatedPingJitter
	int32_t ___simulatedPingJitter_26;
	// Photon.Bolt.BoltRandomFunction Photon.Bolt.BoltConfig::simulatedRandomFunction
	int32_t ___simulatedRandomFunction_27;
	// System.Int32 Photon.Bolt.BoltConfig::connectionTimeout
	int32_t ___connectionTimeout_28;
	// System.Int32 Photon.Bolt.BoltConfig::connectionRequestTimeout
	int32_t ___connectionRequestTimeout_29;
	// System.Int32 Photon.Bolt.BoltConfig::connectionRequestAttempts
	int32_t ___connectionRequestAttempts_30;
	// System.Int32 Photon.Bolt.BoltConfig::connectionLocalRequestAttempts
	int32_t ___connectionLocalRequestAttempts_31;
	// System.Boolean Photon.Bolt.BoltConfig::connectionLocalRequestAttemptsOverride
	bool ___connectionLocalRequestAttemptsOverride_32;
	// System.Boolean Photon.Bolt.BoltConfig::disableAutoSceneLoading
	bool ___disableAutoSceneLoading_33;
	// System.Boolean Photon.Bolt.BoltConfig::EnableIPv6
	bool ___EnableIPv6_34;
};

// Photon.Bolt.BoltDynamicData
struct BoltDynamicData_tE9BA0B4CF859A8598EE013BB7CFDD3D4E1D2552C  : public RuntimeObject
{
};

// Photon.Bolt.Internal.BoltNetworkInternal
struct BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E  : public RuntimeObject
{
};

struct BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields
{
	// System.Boolean Photon.Bolt.Internal.BoltNetworkInternal::UsingUnityPro
	bool ___UsingUnityPro_0;
	// System.Action Photon.Bolt.Internal.BoltNetworkInternal::EnvironmentSetup
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EnvironmentSetup_1;
	// System.Action Photon.Bolt.Internal.BoltNetworkInternal::EnvironmentReset
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EnvironmentReset_2;
	// Photon.Bolt.Internal.IDebugDrawer Photon.Bolt.Internal.BoltNetworkInternal::DebugDrawer
	RuntimeObject* ___DebugDrawer_3;
	// System.Func`2<System.Int32,System.String> Photon.Bolt.Internal.BoltNetworkInternal::GetSceneName
	Func_2_t5F1225B06C6A5C271E62144313BDD06C76F20302* ___GetSceneName_4;
	// System.Func`2<System.String,System.Int32> Photon.Bolt.Internal.BoltNetworkInternal::GetSceneIndex
	Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* ___GetSceneIndex_5;
	// System.Func`1<System.Int32> Photon.Bolt.Internal.BoltNetworkInternal::GetActiveSceneIndex
	Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___GetActiveSceneIndex_6;
	// System.Func`1<System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>>> Photon.Bolt.Internal.BoltNetworkInternal::GetGlobalBehaviourTypes
	Func_1_t2A1D3A29AAB3913DBF979CD6754BCA09515B4FD4* ___GetGlobalBehaviourTypes_7;
};

// Photon.Bolt.Internal.BoltNetworkInternal_User
struct BoltNetworkInternal_User_tC403A213A2B078D4FAACE285359878B8BB8E58E5  : public RuntimeObject
{
};

// System.Console
struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E  : public RuntimeObject
{
};

struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields
{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053* ___cancel_event_5;
};

// Photon.Bolt.ConsoleWriter
struct ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E  : public RuntimeObject
{
};

struct ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_StaticFields
{
	// System.IO.TextWriter Photon.Bolt.ConsoleWriter::realOut
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___realOut_0;
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

// Photon.Bolt.Internal.UnityDebugDrawer
struct UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094  : public RuntimeObject
{
	// System.Boolean Photon.Bolt.Internal.UnityDebugDrawer::isEditor
	bool ___isEditor_0;
};

// Photon.Bolt.UnitySettings
struct UnitySettings_tA555A914A8781790DF9DE0AF41B32AFCF2834BB6  : public RuntimeObject
{
};

struct UnitySettings_tA555A914A8781790DF9DE0AF41B32AFCF2834BB6_StaticFields
{
	// System.Boolean Photon.Bolt.UnitySettings::IsBuildMono
	bool ___IsBuildMono_0;
	// System.Boolean Photon.Bolt.UnitySettings::IsBuildDotNet
	bool ___IsBuildDotNet_1;
	// System.Boolean Photon.Bolt.UnitySettings::IsBuildIL2CPP
	bool ___IsBuildIL2CPP_2;
	// Photon.Bolt.UnitySettings/DotNetVersion Photon.Bolt.UnitySettings::CurrentDotNetVersion
	int32_t ___CurrentDotNetVersion_3;
	// UnityEngine.RuntimePlatform Photon.Bolt.UnitySettings::CurrentPlatform
	int32_t ___CurrentPlatform_4;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4
struct U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB  : public RuntimeObject
{
	// System.Int32 Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Photon.Bolt.BoltDebugStart Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4::<>4__this
	BoltDebugStart_tD90A04848F949227F6E1F7AB00FA2E7E67B5DD66* ___U3CU3E4__this_2;
	// System.Int32 Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4::<i>5__1
	int32_t ___U3CiU3E5__1_3;
};

// Photon.Bolt.BoltDebugStartSettings/SWP
struct SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082  : public RuntimeObject
{
};

struct SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields
{
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::NOSIZE
	int32_t ___NOSIZE_0;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::NOMOVE
	int32_t ___NOMOVE_1;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::NOZORDER
	int32_t ___NOZORDER_2;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::NOREDRAW
	int32_t ___NOREDRAW_3;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::NOACTIVATE
	int32_t ___NOACTIVATE_4;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::DRAWFRAME
	int32_t ___DRAWFRAME_5;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::FRAMECHANGED
	int32_t ___FRAMECHANGED_6;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::SHOWWINDOW
	int32_t ___SHOWWINDOW_7;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::HIDEWINDOW
	int32_t ___HIDEWINDOW_8;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::NOCOPYBITS
	int32_t ___NOCOPYBITS_9;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::NOOWNERZORDER
	int32_t ___NOOWNERZORDER_10;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::NOREPOSITION
	int32_t ___NOREPOSITION_11;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::NOSENDCHANGING
	int32_t ___NOSENDCHANGING_12;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::DEFERERASE
	int32_t ___DEFERERASE_13;
	// System.Int32 Photon.Bolt.BoltDebugStartSettings/SWP::ASYNCWINDOWPOS
	int32_t ___ASYNCWINDOWPOS_14;
};

// Photon.Bolt.BoltDynamicData/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A  : public RuntimeObject
{
	// System.Collections.Generic.IEnumerator`1<System.String> Photon.Bolt.BoltDynamicData/<>c__DisplayClass4_0::asmIter
	RuntimeObject* ___asmIter_0;
	// System.Predicate`1<System.Reflection.Assembly> Photon.Bolt.BoltDynamicData/<>c__DisplayClass4_0::<>9__0
	Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* ___U3CU3E9__0_1;
};

// Photon.Bolt.ConsoleWriter/PInvoke
struct PInvoke_tD27198A520DEBE1F8A2329774B4881D07820BE57  : public RuntimeObject
{
};

// Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>
struct STuple_2_tD6FE030E735508E78FC07AA32FBA933E86A0BA4F 
{
	// T0 Photon.Bolt.Collections.STuple`2::item0
	BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087* ___item0_0;
	// T1 Photon.Bolt.Collections.STuple`2::item1
	Type_t* ___item1_1;
};

// Photon.Bolt.Collections.STuple`2<System.Object,System.Object>
struct STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6 
{
	// T0 Photon.Bolt.Collections.STuple`2::item0
	RuntimeObject* ___item0_0;
	// T1 Photon.Bolt.Collections.STuple`2::item1
	RuntimeObject* ___item1_1;
};

// Photon.Bolt.BoltExecutionOrderAttribute
struct BoltExecutionOrderAttribute_t2FA47CF768D9005CFFB1A83073A8A7324E358673  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 Photon.Bolt.BoltExecutionOrderAttribute::_executionOrder
	int32_t ____executionOrder_0;
};

// Photon.Bolt.BoltGlobalBehaviourAttribute
struct BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// Photon.Bolt.BoltNetworkModes Photon.Bolt.BoltGlobalBehaviourAttribute::<Mode>k__BackingField
	int32_t ___U3CModeU3Ek__BackingField_0;
	// System.String[] Photon.Bolt.BoltGlobalBehaviourAttribute::<Scenes>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CScenesU3Ek__BackingField_1;
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

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
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

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// System.Diagnostics.Process
struct Process_tF74794C64BCE464912BF158980B347CE66AF203B  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Boolean System.Diagnostics.Process::haveProcessId
	bool ___haveProcessId_4;
	// System.Int32 System.Diagnostics.Process::processId
	int32_t ___processId_5;
	// System.Boolean System.Diagnostics.Process::haveProcessHandle
	bool ___haveProcessHandle_6;
	// Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::m_processHandle
	SafeProcessHandle_tA260D4420C5F481A5DA030FFB19D038BBF8A63CB* ___m_processHandle_7;
	// System.Boolean System.Diagnostics.Process::isRemoteMachine
	bool ___isRemoteMachine_8;
	// System.String System.Diagnostics.Process::machineName
	String_t* ___machineName_9;
	// System.Int32 System.Diagnostics.Process::m_processAccess
	int32_t ___m_processAccess_10;
	// System.Diagnostics.ProcessThreadCollection System.Diagnostics.Process::threads
	ProcessThreadCollection_t9E9F6B3EB7E8031736898D77DD88F2BD29740971* ___threads_11;
	// System.Diagnostics.ProcessModuleCollection System.Diagnostics.Process::modules
	ProcessModuleCollection_tB2EBC893262A796A0182EDF0022F0B08E30461EE* ___modules_12;
	// System.Boolean System.Diagnostics.Process::haveWorkingSetLimits
	bool ___haveWorkingSetLimits_13;
	// System.IntPtr System.Diagnostics.Process::minWorkingSet
	intptr_t ___minWorkingSet_14;
	// System.IntPtr System.Diagnostics.Process::maxWorkingSet
	intptr_t ___maxWorkingSet_15;
	// System.Boolean System.Diagnostics.Process::havePriorityClass
	bool ___havePriorityClass_16;
	// System.Diagnostics.ProcessPriorityClass System.Diagnostics.Process::priorityClass
	int32_t ___priorityClass_17;
	// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::startInfo
	ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* ___startInfo_18;
	// System.Boolean System.Diagnostics.Process::watchForExit
	bool ___watchForExit_19;
	// System.Boolean System.Diagnostics.Process::watchingForExit
	bool ___watchingForExit_20;
	// System.EventHandler System.Diagnostics.Process::onExited
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___onExited_21;
	// System.Boolean System.Diagnostics.Process::exited
	bool ___exited_22;
	// System.Int32 System.Diagnostics.Process::exitCode
	int32_t ___exitCode_23;
	// System.Boolean System.Diagnostics.Process::signaled
	bool ___signaled_24;
	// System.DateTime System.Diagnostics.Process::exitTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___exitTime_25;
	// System.Boolean System.Diagnostics.Process::haveExitTime
	bool ___haveExitTime_26;
	// System.Boolean System.Diagnostics.Process::raisedOnExited
	bool ___raisedOnExited_27;
	// System.Threading.RegisteredWaitHandle System.Diagnostics.Process::registeredWaitHandle
	RegisteredWaitHandle_t5AEE89AB4B4A54EAC5B66A72A0D7D2EF8C82EC86* ___registeredWaitHandle_28;
	// System.Threading.WaitHandle System.Diagnostics.Process::waitHandle
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ___waitHandle_29;
	// System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::synchronizingObject
	RuntimeObject* ___synchronizingObject_30;
	// System.IO.StreamReader System.Diagnostics.Process::standardOutput
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___standardOutput_31;
	// System.IO.StreamWriter System.Diagnostics.Process::standardInput
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___standardInput_32;
	// System.IO.StreamReader System.Diagnostics.Process::standardError
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___standardError_33;
	// System.OperatingSystem System.Diagnostics.Process::operatingSystem
	OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* ___operatingSystem_34;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_35;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::outputStreamReadMode
	int32_t ___outputStreamReadMode_36;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::errorStreamReadMode
	int32_t ___errorStreamReadMode_37;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::inputStreamReadMode
	int32_t ___inputStreamReadMode_38;
	// System.Diagnostics.DataReceivedEventHandler System.Diagnostics.Process::OutputDataReceived
	DataReceivedEventHandler_t9E71CD00F9E67F5049738A8A67CD54B145C70BDC* ___OutputDataReceived_39;
	// System.Diagnostics.DataReceivedEventHandler System.Diagnostics.Process::ErrorDataReceived
	DataReceivedEventHandler_t9E71CD00F9E67F5049738A8A67CD54B145C70BDC* ___ErrorDataReceived_40;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::output
	AsyncStreamReader_tAC4F4C9FDA0C1A8D21F2B1C838C08C0E83AE871B* ___output_41;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::error
	AsyncStreamReader_tAC4F4C9FDA0C1A8D21F2B1C838C08C0E83AE871B* ___error_42;
	// System.Boolean System.Diagnostics.Process::pendingOutputRead
	bool ___pendingOutputRead_43;
	// System.Boolean System.Diagnostics.Process::pendingErrorRead
	bool ___pendingErrorRead_44;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_46;
};

struct Process_tF74794C64BCE464912BF158980B347CE66AF203B_StaticFields
{
	// System.Diagnostics.TraceSwitch System.Diagnostics.Process::processTracing
	TraceSwitch_t199A0DB240149B5CDCF2754FC0E11CCBF51224B4* ___processTracing_45;
	// System.Diagnostics.ProcessModule System.Diagnostics.Process::current_main_module
	ProcessModule_t7CCBC3E3C3382F1A431C2CE645F06224FC47BC16* ___current_main_module_47;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
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

// Photon.Bolt.BoltDebugStartSettings/HWND
struct HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43  : public RuntimeObject
{
};

struct HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_StaticFields
{
	// System.IntPtr Photon.Bolt.BoltDebugStartSettings/HWND::NoTopMost
	intptr_t ___NoTopMost_0;
	// System.IntPtr Photon.Bolt.BoltDebugStartSettings/HWND::TopMost
	intptr_t ___TopMost_1;
	// System.IntPtr Photon.Bolt.BoltDebugStartSettings/HWND::Top
	intptr_t ___Top_2;
	// System.IntPtr Photon.Bolt.BoltDebugStartSettings/HWND::Bottom
	intptr_t ___Bottom_3;
};

// Photon.Bolt.BoltDebugStartSettings
struct BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12  : public RuntimeObject
{
};

struct BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_StaticFields
{
	// System.Object Photon.Bolt.BoltDebugStartSettings::handle
	RuntimeObject* ___handle_0;
	// System.Runtime.InteropServices.HandleRef Photon.Bolt.BoltDebugStartSettings::unityHandle
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___unityHandle_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
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

// System.Func`1<System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>>>
struct Func_1_t2A1D3A29AAB3913DBF979CD6754BCA09515B4FD4  : public MulticastDelegate_t
{
};

// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.String>
struct Func_2_t5F1225B06C6A5C271E62144313BDD06C76F20302  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Int32>
struct Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783  : public MulticastDelegate_t
{
};

// System.Predicate`1<System.Reflection.Assembly>
struct Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Photon.Bolt.BoltRuntimeSettings
struct BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Photon.Bolt.BoltConfig Photon.Bolt.BoltRuntimeSettings::_config
	BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* ____config_5;
	// System.Int32 Photon.Bolt.BoltRuntimeSettings::debugClientCount
	int32_t ___debugClientCount_6;
	// System.Int32 Photon.Bolt.BoltRuntimeSettings::debugStartPort
	int32_t ___debugStartPort_7;
	// System.Int32 Photon.Bolt.BoltRuntimeSettings::debugBuildMode
	int32_t ___debugBuildMode_8;
	// System.String Photon.Bolt.BoltRuntimeSettings::debugStartMapName
	String_t* ___debugStartMapName_9;
	// System.Boolean Photon.Bolt.BoltRuntimeSettings::debugPlayAsServer
	bool ___debugPlayAsServer_10;
	// System.Boolean Photon.Bolt.BoltRuntimeSettings::showDebugInfo
	bool ___showDebugInfo_11;
	// System.Boolean Photon.Bolt.BoltRuntimeSettings::overrideTimeScale
	bool ___overrideTimeScale_12;
	// Photon.Bolt.Utils.BoltEditorStartMode Photon.Bolt.BoltRuntimeSettings::debugEditorMode
	int32_t ___debugEditorMode_13;
	// UnityEngine.KeyCode Photon.Bolt.BoltRuntimeSettings::consoleToggleKey
	int32_t ___consoleToggleKey_14;
	// System.Boolean Photon.Bolt.BoltRuntimeSettings::consoleVisibleByDefault
	bool ___consoleVisibleByDefault_15;
	// System.Int32 Photon.Bolt.BoltRuntimeSettings::compilationWarnLevel
	int32_t ___compilationWarnLevel_16;
	// System.Int32 Photon.Bolt.BoltRuntimeSettings::editorSkin
	int32_t ___editorSkin_17;
	// System.Boolean Photon.Bolt.BoltRuntimeSettings::scopeModeHideWarningInGui
	bool ___scopeModeHideWarningInGui_18;
	// System.Boolean Photon.Bolt.BoltRuntimeSettings::showBoltEntityHints
	bool ___showBoltEntityHints_19;
	// System.Boolean Photon.Bolt.BoltRuntimeSettings::serializeProjectAsText
	bool ___serializeProjectAsText_20;
	// System.String Photon.Bolt.BoltRuntimeSettings::photonAppId
	String_t* ___photonAppId_21;
	// System.Boolean Photon.Bolt.BoltRuntimeSettings::photonUsePunch
	bool ___photonUsePunch_22;
	// System.Int32 Photon.Bolt.BoltRuntimeSettings::photonCloudRegionIndex
	int32_t ___photonCloudRegionIndex_23;
	// Photon.Bolt.BoltPrefabInstantiateMode Photon.Bolt.BoltRuntimeSettings::instantiateMode
	int32_t ___instantiateMode_24;
	// Photon.Bolt.QueryComponentOptionsGlobal Photon.Bolt.BoltRuntimeSettings::globalEntityBehaviourQueryOption
	int32_t ___globalEntityBehaviourQueryOption_25;
	// Photon.Bolt.QueryComponentOptionsGlobal Photon.Bolt.BoltRuntimeSettings::globalEntityPriorityCalculatorQueryOption
	int32_t ___globalEntityPriorityCalculatorQueryOption_26;
	// Photon.Bolt.QueryComponentOptionsGlobal Photon.Bolt.BoltRuntimeSettings::globalEntityReplicationFilterQueryOption
	int32_t ___globalEntityReplicationFilterQueryOption_27;
	// System.Int32 Photon.Bolt.BoltRuntimeSettings::a2sServerPort
	int32_t ___a2sServerPort_28;
	// System.Boolean Photon.Bolt.BoltRuntimeSettings::enableA2sServer
	bool ___enableA2sServer_29;
	// System.Single Photon.Bolt.BoltRuntimeSettings::RoomCreateTimeout
	float ___RoomCreateTimeout_30;
	// System.Single Photon.Bolt.BoltRuntimeSettings::RoomJoinTimeout
	float ___RoomJoinTimeout_31;
	// System.Boolean Photon.Bolt.BoltRuntimeSettings::enableClientMetrics
	bool ___enableClientMetrics_32;
	// System.Boolean Photon.Bolt.BoltRuntimeSettings::enableSourceProvider
	bool ___enableSourceProvider_33;
};

struct BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0_StaticFields
{
	// Photon.Bolt.BoltRuntimeSettings Photon.Bolt.BoltRuntimeSettings::_instance
	BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0* ____instance_4;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Photon.Bolt.BoltDebugStartSettings/EnumWindowsProc
struct EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Photon.Bolt.Internal.GlobalEventListenerBase
struct GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Bolt.Internal.GlobalEventListenerBase Photon.Bolt.Internal.GlobalEventListenerBase::<Photon.Bolt.Collections.IBoltListNode<Photon.Bolt.Internal.GlobalEventListenerBase>.prev>k__BackingField
	GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4* ___U3CPhoton_Bolt_Collections_IBoltListNodeU3CPhoton_Bolt_Internal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5;
	// Photon.Bolt.Internal.GlobalEventListenerBase Photon.Bolt.Internal.GlobalEventListenerBase::<Photon.Bolt.Collections.IBoltListNode<Photon.Bolt.Internal.GlobalEventListenerBase>.next>k__BackingField
	GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4* ___U3CPhoton_Bolt_Collections_IBoltListNodeU3CPhoton_Bolt_Internal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6;
	// System.Object Photon.Bolt.Internal.GlobalEventListenerBase::<Photon.Bolt.Collections.IBoltListNode<Photon.Bolt.Internal.GlobalEventListenerBase>.list>k__BackingField
	RuntimeObject* ___U3CPhoton_Bolt_Collections_IBoltListNodeU3CPhoton_Bolt_Internal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7;
};

struct GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4_StaticFields
{
	// Photon.Bolt.Collections.BoltDoubleList`1<Photon.Bolt.Internal.GlobalEventListenerBase> Photon.Bolt.Internal.GlobalEventListenerBase::callbacks
	BoltDoubleList_1_t2F0E19BAB3CA7567E5600D1EE23786A1BAE0FE92* ___callbacks_4;
};

// Photon.Bolt.BoltDebugStart
struct BoltDebugStart_tD90A04848F949227F6E1F7AB00FA2E7E67B5DD66  : public GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Photon.Bolt.Collections.STuple`2<System.Object,System.Object>[]
struct STuple_2U5BU5D_t2B846113DB25E74BABAEEBCDF10BBB17E5DFFB5C  : public RuntimeArray
{
	ALIGN_FIELD (8) STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6 m_Items[1];

	inline STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___item0_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___item1_1), (void*)NULL);
		#endif
	}
	inline STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___item0_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___item1_1), (void*)NULL);
		#endif
	}
};


// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared (RuntimeObject* ___source0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mFEA55388B25FFE20BEE7DB66FA1D0FCC0EE2EE38_gshared (Func_2_tB8444326CD91502B291E0988F04448A82D0F6552* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF2A7892ADBE5FCA29B4C2C574F9BC49E3C09EA08_gshared (List_1_tAEED11AB20BF771C0B63AC1ECF1D030649939125* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match1, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m9EFD5CBA0FF05E990D56D14EE1BD1E289E6BE9EA_gshared (MemberInfo_t* ___element0, bool ___inherit1, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.Collections.STuple`2<System.Object,System.Object>::.ctor(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void STuple_2__ctor_m30031154109EB82F87743E533B4B45AF236F23A2_gshared (STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6* __this, RuntimeObject* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<System.Object,System.Object>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0150B7911C20D9E2D2172005C7DF818210015764_gshared_inline (List_1_tAEED11AB20BF771C0B63AC1ECF1D030649939125* __this, STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6 ___item0, const RuntimeMethod* method) ;

// System.IO.TextWriter System.Console::get_Out()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Out_m73E553D219D64916F2AA7CDC41568968CB055F1E_inline (const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.ConsoleWriter/PInvoke::AttachConsole(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_AttachConsole_m0DB4667751301403B84236A0B000B3401835F2B6 (uint32_t ___dwProcessId0, const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.ConsoleWriter/PInvoke::AllocConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_AllocConsole_m75355E1A9C39C6CB57A3DAEF6DC8D63BF2778345 (const RuntimeMethod* method) ;
// System.IntPtr Photon.Bolt.ConsoleWriter/PInvoke::GetStdHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PInvoke_GetStdHandle_m0D26FCDFA0F39432CF3B714BABE6537AA64F5AFA (int32_t ___nStdHandle0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.IntPtr,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m6CFAF369AD4742168D4CE2C7C2D703705EE26742 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, intptr_t ___handle0, int32_t ___access1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m1E6CB00AA57A3E35968208F705E444511AD9B5DC (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) ;
// System.Void System.Console::SetOut(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_SetOut_mD75C5604C18C440B6C31B4F91B0944E0DD972BA1 (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___newOut0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.ConsoleWriter/PInvoke::FreeConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_FreeConsole_m3E05DFC9A0AAF30821BD4527D64E86F9F82153CF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___value0, const RuntimeMethod* method) ;
// Photon.Bolt.BoltRuntimeSettings Photon.Bolt.BoltRuntimeSettings::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0* BoltRuntimeSettings_get_instance_mA3933E9B18B54B3D0E560053C636F92F896269E4 (const RuntimeMethod* method) ;
// Photon.Bolt.BoltConfig Photon.Bolt.BoltRuntimeSettings::GetConfigCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* BoltRuntimeSettings_GetConfigCopy_m116447757E90F5B2E452B1AC4107D836DA28D0DE (BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.BoltDebugStartSettings::get_DebugStartIsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsServer_m49C77B20D2EE45591B524F98FFC82EBB8E1CD17F (const RuntimeMethod* method) ;
// System.Void Photon.Bolt.Utils.BoltLog::Warn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLog_Warn_m665464631D68323CE17187B426680CB8A5574F86 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv4Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___address0, uint16_t ___port1, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.BoltLauncher::StartServer(UdpKit.UdpEndPoint,Photon.Bolt.BoltConfig,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLauncher_StartServer_m55C47B7C843C19567936D1930346FC21303683F3 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint0, BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* ___config1, String_t* ___scene2, const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.BoltDebugStartSettings::get_DebugStartIsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsClient_mAECE2CB95635DA3CF6248BDDAC37A5F4282110AF (const RuntimeMethod* method) ;
// System.Void Photon.Bolt.BoltLauncher::StartClient(UdpKit.UdpEndPoint,Photon.Bolt.BoltConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLauncher_StartClient_m22920644A34CF5CA79FDA9A2F8FBE6BD50F5B70C (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint0, BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* ___config1, const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.BoltDebugStartSettings::get_DebugStartIsSinglePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsSinglePlayer_mE1CB522CBE5339BA3A9B529198BD5EEA1BB28808 (const RuntimeMethod* method) ;
// System.Void Photon.Bolt.BoltLauncher::StartSinglePlayer(Photon.Bolt.BoltConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLauncher_StartSinglePlayer_mD6EB4CD7F9993A56C320860F1B57401A5841DDBF (BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* ___config0, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.BoltDebugStartSettings::PositionWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStartSettings_PositionWindow_m5F8760FDAB80D816B149ABF48FA23451AB75EAB5 (const RuntimeMethod* method) ;
// System.Void Photon.Bolt.Utils.BoltLog::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLog_Error_m938D4D4EF5DAA7C5F89ABCB2C1A1822192FAC002 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.BoltNetwork::get_IsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltNetwork_get_IsServer_m56258C064CA52A904D90FA9710252D4C9AFD14C3 (const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.BoltNetwork::get_IsSinglePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltNetwork_get_IsSinglePlayer_mEF9788129500CECC3B7831D48A8C129ADBC64C19 (const RuntimeMethod* method) ;
// System.Void Photon.Bolt.BoltNetwork::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltNetwork_LoadScene_m7CF631732448810F7E73BD6AD8592AA89F7D00FE (String_t* ___scene0, const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.BoltNetwork::get_IsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltNetwork_get_IsClient_mC0280D8A78E630E118D4F5AF113154C603CB99B7 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Photon.Bolt.BoltDebugStart::DelayClientConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoltDebugStart_DelayClientConnect_mF3E0855EB426645FE09677E1B72C06EB66F17096 (BoltDebugStart_tD90A04848F949227F6E1F7AB00FA2E7E67B5DD66* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayClientConnectU3Ed__4__ctor_mADF3922826A4279C2F71F5A184388C3B8FDD8D6B (U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.Internal.GlobalEventListenerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalEventListenerBase__ctor_m50DEF06E575F71CFC795E122667FD1017FD1A27C (GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.Utils.BoltLog::Info(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLog_Info_mB346290DADF8A91DA1C7EC4ABCF5805C9058B7B9 (String_t* ___message0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.BoltNetwork::Connect(System.UInt16,Photon.Bolt.IProtocolToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltNetwork_Connect_mE073C793CB69D46B8C189842A305E9D9C9B44A6A (uint16_t ___port0, RuntimeObject* ___token1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String[] System.Environment::GetCommandLineArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D (const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33 (RuntimeObject* ___source0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___source0, ___value1, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Diagnostics.Process System.Diagnostics.Process::GetCurrentProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Process_tF74794C64BCE464912BF158980B347CE66AF203B* Process_GetCurrentProcess_mB9E146001302DA6A60946152A09E8205E5FD2F0E (const RuntimeMethod* method) ;
// System.Int32 System.Diagnostics.Process::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Process_get_Id_m7401D58B8B638025FFD4574E33057A8F1B4B4E54 (Process_tF74794C64BCE464912BF158980B347CE66AF203B* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method) ;
// System.Int32 Photon.Bolt.BoltDebugStartSettings::GetWindowThreadProcessId(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_GetWindowThreadProcessId_mC99F2F3BAAB10C95399AC89F82026935FB4A706C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___handle0, int32_t* ___processId1, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.BoltDebugStartSettings/EnumWindowsProc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumWindowsProc__ctor_mE0715F5E3890D9E51F7A84B2EB6107C18F40291C (EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.BoltDebugStartSettings::EnumWindows(Photon.Bolt.BoltDebugStartSettings/EnumWindowsProc,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_EnumWindows_m2274A9CF276ED61925C1EE1D0AF233530BC72DCA (EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* ___callback0, intptr_t ___extraData1, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.HandleRef::get_Wrapper()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandleRef_get_Wrapper_m5AACA25B372CE2E7415DE95A7A9141EBD194BB1C_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Int32 Photon.Bolt.BoltDebugStartSettings::GetSystemMetrics(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_GetSystemMetrics_m2388974911B590B3D3E71474203E32ECCA2FA41B (int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 Photon.Bolt.BoltDebugStartSettings::get_WindowIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_get_WindowIndex_mCB643E55C78991E98ADB83A44CF531B6224511E8 (const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.BoltDebugStartSettings::SetWindowPos(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_SetWindowPos_m8E77472FA00FD07F3C275214398F27CD99CC1B14 (intptr_t ___hWnd0, intptr_t ___hWndInsertAfter1, int32_t ___X2, int32_t ___Y3, int32_t ___cx4, int32_t ___cy5, int32_t ___uFlags6, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.Internal.UnityDebugDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer__ctor_m616E8432AA474AFD642427A7190376607608FC40 (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1 (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<System.Int32,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m836867166FF7EAFCFAC2D0EC79B697AE3525A27E (Func_2_t5F1225B06C6A5C271E62144313BDD06C76F20302* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5F1225B06C6A5C271E62144313BDD06C76F20302*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mFEA55388B25FFE20BEE7DB66FA1D0FCC0EE2EE38_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<System.String,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8735C973EB9B6C7545BC87E34D15C7FE2DD84B81 (Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`1<System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m3FF829535B41B18262217D3BAE15FD607244F7AF (Func_1_t2A1D3A29AAB3913DBF979CD6754BCA09515B4FD4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2A1D3A29AAB3913DBF979CD6754BCA09515B4FD4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Bolt.BoltDynamicData::GetSceneIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDynamicData_GetSceneIndex_mBCD317FF3165F54C71ED896A3E0813B257813083 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 Photon.Bolt.Internal.BoltScenes_Internal::GetSceneIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltScenes_Internal_GetSceneIndex_mBD9D2DC1D223BAB2D4590D9597A8F3CB4ECD5C44 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String Photon.Bolt.Internal.BoltScenes_Internal::GetSceneName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoltScenes_Internal_GetSceneName_m7243D45DB8C49FF5DF590FB3C0E65E234E4232B5 (int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.BoltDynamicData/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m813179C7EA14401ABD4BC14F58231BB7280771C9 (U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>>::.ctor()
inline void List_1__ctor_m8A356B6396F4F7F3D5A0CFA18F886FE794970BDE (List_1_t42A0D954620E0952274A228232D7FE639FA108C7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t42A0D954620E0952274A228232D7FE639FA108C7*, const RuntimeMethod*))List_1__ctor_mF2A7892ADBE5FCA29B4C2C574F9BC49E3C09EA08_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<System.String> BoltAssemblies::get_AllAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoltAssemblies_get_AllAssemblies_m18C64431FA485194289740147EC0293AC45FBDB1 (const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Reflection.Assembly>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m48B6BB78EBAEDDBE451D41754CCD6E6A179AA237 (Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Array::Find<System.Reflection.Assembly>(T[],System.Predicate`1<T>)
inline Assembly_t* Array_Find_TisAssembly_t_m69D7963E7C3F19E3FD5B7D9FE783F9F7DF083DB5 (AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* ___array0, Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* ___match1, const RuntimeMethod* method)
{
	return ((  Assembly_t* (*) (AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339*, Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared)(___array0, ___match1, method);
}
// System.Boolean System.Reflection.Assembly::op_Equality(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB (Assembly_t* ___left0, Assembly_t* ___right1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Photon.Bolt.BoltGlobalBehaviourAttribute>(System.Reflection.MemberInfo,System.Boolean)
inline BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087* CustomAttributeExtensions_GetCustomAttribute_TisBoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087_mBFC4004E3D17D9DCC5955B8C2DC8282D0A31EEC7 (MemberInfo_t* ___element0, bool ___inherit1, const RuntimeMethod* method)
{
	return ((  BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087* (*) (MemberInfo_t*, bool, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m9EFD5CBA0FF05E990D56D14EE1BD1E289E6BE9EA_gshared)(___element0, ___inherit1, method);
}
// System.Void Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>::.ctor(T0,T1)
inline void STuple_2__ctor_mE1CCD1DACA36C961EBDAEBA4DBBF9CBE61423590 (STuple_2_tD6FE030E735508E78FC07AA32FBA933E86A0BA4F* __this, BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087* ___a0, Type_t* ___b1, const RuntimeMethod* method)
{
	((  void (*) (STuple_2_tD6FE030E735508E78FC07AA32FBA933E86A0BA4F*, BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087*, Type_t*, const RuntimeMethod*))STuple_2__ctor_m30031154109EB82F87743E533B4B45AF236F23A2_gshared)(__this, ___a0, ___b1, method);
}
// System.Void System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>>::Add(T)
inline void List_1_Add_m3E3B9B34A834C8C7683298785F329C18308A28F3_inline (List_1_t42A0D954620E0952274A228232D7FE639FA108C7* __this, STuple_2_tD6FE030E735508E78FC07AA32FBA933E86A0BA4F ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t42A0D954620E0952274A228232D7FE639FA108C7*, STuple_2_tD6FE030E735508E78FC07AA32FBA933E86A0BA4F, const RuntimeMethod*))List_1_Add_m0150B7911C20D9E2D2172005C7DF818210015764_gshared_inline)(__this, ___item0, method);
}
// System.Void Photon.Bolt.Utils.BoltLog::Warn(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLog_Warn_m5C7AEE459D812FFAFF5021B371DAC812C1D1D0CE (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.Reflection.AssemblyName::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.Utils.DebugInfo::Label(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugInfo_Label_m2C7A7400DA09EF74F59A7C439146C530EBDDD048 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.Utils.DebugInfo::LabelBold(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugInfo_LabelBold_m0462E74DFE515ED8838A63C0964CFF625C6AD971 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.Utils.DebugInfo::LabelField(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugInfo_LabelField_m65BFF7D1A63AD017A1B919143DEE0DC8670F59DC (RuntimeObject* ___label0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Space(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Space_m9254FBF173F9260DDB6C83C0066447FC9D9CA597 (float ___pixels0, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AttachConsole(uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AllocConsole();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeConsole();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL GetStdHandle(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetConsoleTitle(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_user32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetWindowThreadProcessId(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_user32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL EnumWindows(Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_user32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetSystemMetrics(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_user32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetWindowPos(intptr_t, intptr_t, int32_t, int32_t, int32_t, int32_t, int32_t);
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
// System.Void Photon.Bolt.ConsoleWriter::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleWriter_Open_mCE86064731462F053D381265B945BA76CAA9F969 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_4 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (realOut == null)
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ((ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_il2cpp_TypeInfo_var))->___realOut_0;
		V_1 = (bool)((((RuntimeObject*)(TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// realOut = Console.Out;
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_2;
		L_2 = Console_get_Out_m73E553D219D64916F2AA7CDC41568968CB055F1E_inline(NULL);
		((ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_il2cpp_TypeInfo_var))->___realOut_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_il2cpp_TypeInfo_var))->___realOut_0), (void*)L_2);
	}

IL_0019:
	{
		// var hasConsole = PInvoke.AttachConsole(0x0ffffffff);
		bool L_3;
		L_3 = PInvoke_AttachConsole_m0DB4667751301403B84236A0B000B3401835F2B6((-1), NULL);
		V_0 = L_3;
		// if (hasConsole == false)
		bool L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// PInvoke.AllocConsole();
		bool L_6;
		L_6 = PInvoke_AllocConsole_m75355E1A9C39C6CB57A3DAEF6DC8D63BF2778345(NULL);
	}

IL_0030:
	{
	}
	try
	{// begin try (depth: 1)
		// var outHandlePtr = PInvoke.GetStdHandle(PInvoke.STD_OUTPUT_HANDLE);
		intptr_t L_7;
		L_7 = PInvoke_GetStdHandle_m0D26FCDFA0F39432CF3B714BABE6537AA64F5AFA(((int32_t)-11), NULL);
		V_3 = L_7;
		// var fileStream = new FileStream(outHandlePtr, FileAccess.Write);
		intptr_t L_8 = V_3;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		FileStream__ctor_m6CFAF369AD4742168D4CE2C7C2D703705EE26742(L_9, L_8, 2, NULL);
		V_4 = L_9;
		// var stdOut = new StreamWriter(fileStream, Encoding.ASCII)
		// {
		//     AutoFlush = true
		// };
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_10 = V_4;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11;
		L_11 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_12 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		StreamWriter__ctor_m1E6CB00AA57A3E35968208F705E444511AD9B5DC(L_12, L_10, L_11, NULL);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_13 = L_12;
		NullCheck(L_13);
		VirtualActionInvoker1< bool >::Invoke(44 /* System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean) */, L_13, (bool)1);
		V_5 = L_13;
		// Console.SetOut(stdOut);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_14 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_SetOut_mD75C5604C18C440B6C31B4F91B0944E0DD972BA1(L_14, NULL);
		goto IL_0072;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0064;
		}
		throw e;
	}

CATCH_0064:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.Log(e);
		Exception_t* L_15 = V_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0072;
	}// end catch (depth: 1)

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Photon.Bolt.ConsoleWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleWriter_Close_mAEB29E1E45E80DDE7739F8E47911D09430C9EEE9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PInvoke.FreeConsole();
		bool L_0;
		L_0 = PInvoke_FreeConsole_m3E05DFC9A0AAF30821BD4527D64E86F9F82153CF(NULL);
		// Console.SetOut(realOut);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = ((ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_il2cpp_TypeInfo_var))->___realOut_0;
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_SetOut_mD75C5604C18C440B6C31B4F91B0944E0DD972BA1(L_1, NULL);
		// realOut = null;
		((ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_il2cpp_TypeInfo_var))->___realOut_0 = (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleWriter_t94A37D2826A6C9DA2CCDD06AFEECD9E23665A54E_il2cpp_TypeInfo_var))->___realOut_0), (void*)(TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3*)NULL);
		// }
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
// System.Boolean Photon.Bolt.ConsoleWriter/PInvoke::AttachConsole(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_AttachConsole_m0DB4667751301403B84236A0B000B3401835F2B6 (uint32_t ___dwProcessId0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "AttachConsole", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AttachConsole)(___dwProcessId0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___dwProcessId0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.Boolean Photon.Bolt.ConsoleWriter/PInvoke::AllocConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_AllocConsole_m75355E1A9C39C6CB57A3DAEF6DC8D63BF2778345 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "AllocConsole", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AllocConsole)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.Boolean Photon.Bolt.ConsoleWriter/PInvoke::FreeConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_FreeConsole_m3E05DFC9A0AAF30821BD4527D64E86F9F82153CF (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeConsole", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeConsole)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.IntPtr Photon.Bolt.ConsoleWriter/PInvoke::GetStdHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PInvoke_GetStdHandle_m0D26FCDFA0F39432CF3B714BABE6537AA64F5AFA (int32_t ___nStdHandle0, const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetStdHandle", IL2CPP_CALL_STDCALL, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetStdHandle)(___nStdHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___nStdHandle0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean Photon.Bolt.ConsoleWriter/PInvoke::SetConsoleTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_SetConsoleTitle_mDECE4276A2B7336CDF403CE22D41095A4310E764 (String_t* ___lpConsoleTitle0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "SetConsoleTitle", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___lpConsoleTitle0' to native representation
	char* ____lpConsoleTitle0_marshaled = NULL;
	____lpConsoleTitle0_marshaled = il2cpp_codegen_marshal_string(___lpConsoleTitle0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetConsoleTitle)(____lpConsoleTitle0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____lpConsoleTitle0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___lpConsoleTitle0' native representation
	il2cpp_codegen_marshal_free(____lpConsoleTitle0_marshaled);
	____lpConsoleTitle0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Bolt.BoltDebugStart::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStart_Awake_m285A0758BDD39C48B672588F4BE056D615DA2BD3 (BoltDebugStart_tD90A04848F949227F6E1F7AB00FA2E7E67B5DD66* __this, const RuntimeMethod* method) 
{
	{
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)60), NULL);
		// }
		return;
	}
}
// System.Void Photon.Bolt.BoltDebugStart::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStart_Start_mAA25319B7869F6CCF14E7A9063609EEC991F1F78 (BoltDebugStart_tD90A04848F949227F6E1F7AB00FA2E7E67B5DD66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75578BE4212F61B391F054AA12B1C33FCAF798C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A08E2E3369AF6AD6BE7D006CB0EDC019FB2FBBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB05A937F99D56323E53D6EC32988D8BC54EE5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9FEAAC83276FE694BA085AC3376C3B2089B921C);
		s_Il2CppMethodInitialized = true;
	}
	BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0* V_0 = NULL;
	BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	{
		// var settings = BoltRuntimeSettings.instance;
		BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0* L_0;
		L_0 = BoltRuntimeSettings_get_instance_mA3933E9B18B54B3D0E560053C636F92F896269E4(NULL);
		V_0 = L_0;
		// var cfg = settings.GetConfigCopy();
		BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0* L_1 = V_0;
		NullCheck(L_1);
		BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* L_2;
		L_2 = BoltRuntimeSettings_GetConfigCopy_m116447757E90F5B2E452B1AC4107D836DA28D0DE(L_1, NULL);
		V_1 = L_2;
		// cfg.connectionTimeout = 60000000;
		BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* L_3 = V_1;
		NullCheck(L_3);
		L_3->___connectionTimeout_28 = ((int32_t)60000000);
		// cfg.connectionRequestTimeout = 500;
		BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* L_4 = V_1;
		NullCheck(L_4);
		L_4->___connectionRequestTimeout_29 = ((int32_t)500);
		// cfg.connectionRequestAttempts = 1000;
		BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* L_5 = V_1;
		NullCheck(L_5);
		L_5->___connectionRequestAttempts_30 = ((int32_t)1000);
		// if (string.IsNullOrEmpty(settings.debugStartMapName) == false)
		BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___debugStartMapName_9;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_00d2;
		}
	}
	{
		// if (BoltDebugStartSettings.DebugStartIsServer)
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = BoltDebugStartSettings_get_DebugStartIsServer_m49C77B20D2EE45591B524F98FFC82EBB8E1CD17F(NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// BoltLog.Warn("Starting as SERVER");
		il2cpp_codegen_runtime_class_init_inline(BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var);
		BoltLog_Warn_m665464631D68323CE17187B426680CB8A5574F86(_stringLiteralE9FEAAC83276FE694BA085AC3376C3B2089B921C, NULL);
		// var serverEndPoint = new UdpEndPoint(UdpIPv4Address.Localhost, (ushort)settings.debugStartPort);
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_12 = ((UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var))->___Localhost_1;
		BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___debugStartPort_7;
		UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270((&V_4), L_12, (uint16_t)((int32_t)(uint16_t)L_14), NULL);
		// BoltLauncher.StartServer(serverEndPoint, cfg);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_15 = V_4;
		BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* L_16 = V_1;
		BoltLauncher_StartServer_m55C47B7C843C19567936D1930346FC21303683F3(L_15, L_16, (String_t*)NULL, NULL);
		goto IL_00c9;
	}

IL_007a:
	{
		// else if (BoltDebugStartSettings.DebugStartIsClient)
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = BoltDebugStartSettings_get_DebugStartIsClient_mAECE2CB95635DA3CF6248BDDAC37A5F4282110AF(NULL);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		// BoltLog.Warn("Starting as CLIENT");
		il2cpp_codegen_runtime_class_init_inline(BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var);
		BoltLog_Warn_m665464631D68323CE17187B426680CB8A5574F86(_stringLiteral75578BE4212F61B391F054AA12B1C33FCAF798C7, NULL);
		// var clientEndPoint = new UdpEndPoint(UdpIPv4Address.Localhost, 0);
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_19 = ((UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var))->___Localhost_1;
		UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270((&V_6), L_19, (uint16_t)0, NULL);
		// BoltLauncher.StartClient(clientEndPoint, cfg);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_20 = V_6;
		BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* L_21 = V_1;
		BoltLauncher_StartClient_m22920644A34CF5CA79FDA9A2F8FBE6BD50F5B70C(L_20, L_21, NULL);
		goto IL_00c9;
	}

IL_00aa:
	{
		// else if (BoltDebugStartSettings.DebugStartIsSinglePlayer)
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = BoltDebugStartSettings_get_DebugStartIsSinglePlayer_mE1CB522CBE5339BA3A9B529198BD5EEA1BB28808(NULL);
		V_7 = L_22;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00c9;
		}
	}
	{
		// BoltLog.Warn("Starting as SINGLE PLAYER");
		il2cpp_codegen_runtime_class_init_inline(BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var);
		BoltLog_Warn_m665464631D68323CE17187B426680CB8A5574F86(_stringLiteral8A08E2E3369AF6AD6BE7D006CB0EDC019FB2FBBA, NULL);
		// BoltLauncher.StartSinglePlayer(cfg);
		BoltConfig_tC5F3127F01B55804745D75A17C1F06489E966979* L_24 = V_1;
		BoltLauncher_StartSinglePlayer_mD6EB4CD7F9993A56C320860F1B57401A5841DDBF(L_24, NULL);
	}

IL_00c9:
	{
		// BoltDebugStartSettings.PositionWindow();
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		BoltDebugStartSettings_PositionWindow_m5F8760FDAB80D816B149ABF48FA23451AB75EAB5(NULL);
		goto IL_00df;
	}

IL_00d2:
	{
		// BoltLog.Error("No map found to start from");
		il2cpp_codegen_runtime_class_init_inline(BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var);
		BoltLog_Error_m938D4D4EF5DAA7C5F89ABCB2C1A1822192FAC002(_stringLiteral8AB05A937F99D56323E53D6EC32988D8BC54EE5A, NULL);
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Void Photon.Bolt.BoltDebugStart::BoltStartFailed(UdpKit.UdpConnectionDisconnectReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStart_BoltStartFailed_m02575EE9DFA4E9956AAC8DA70A3AB63B844CE301 (BoltDebugStart_tD90A04848F949227F6E1F7AB00FA2E7E67B5DD66* __this, int32_t ___disconnectReason0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4020D133DCC1D50ACDB8B4A2FA55737DEA76ADA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoltLog.Error("Failed to start debug mode");
		il2cpp_codegen_runtime_class_init_inline(BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var);
		BoltLog_Error_m938D4D4EF5DAA7C5F89ABCB2C1A1822192FAC002(_stringLiteral4020D133DCC1D50ACDB8B4A2FA55737DEA76ADA2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Bolt.BoltDebugStart::BoltStartDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStart_BoltStartDone_m030A84D79230551E88BFCF57A676483DD667D8AC (BoltDebugStart_tD90A04848F949227F6E1F7AB00FA2E7E67B5DD66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltNetwork_t089758D07E24A397C5DB492715117C30154CD81C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (BoltNetwork.IsServer || BoltNetwork.IsSinglePlayer)
		il2cpp_codegen_runtime_class_init_inline(BoltNetwork_t089758D07E24A397C5DB492715117C30154CD81C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BoltNetwork_get_IsServer_m56258C064CA52A904D90FA9710252D4C9AFD14C3(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BoltNetwork_t089758D07E24A397C5DB492715117C30154CD81C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BoltNetwork_get_IsSinglePlayer_mEF9788129500CECC3B7831D48A8C129ADBC64C19(NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// BoltNetwork.LoadScene(BoltRuntimeSettings.instance.debugStartMapName);
		BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0* L_3;
		L_3 = BoltRuntimeSettings_get_instance_mA3933E9B18B54B3D0E560053C636F92F896269E4(NULL);
		NullCheck(L_3);
		String_t* L_4 = L_3->___debugStartMapName_9;
		il2cpp_codegen_runtime_class_init_inline(BoltNetwork_t089758D07E24A397C5DB492715117C30154CD81C_il2cpp_TypeInfo_var);
		BoltNetwork_LoadScene_m7CF631732448810F7E73BD6AD8592AA89F7D00FE(L_4, NULL);
		goto IL_0040;
	}

IL_0028:
	{
		// else if (BoltNetwork.IsClient)
		il2cpp_codegen_runtime_class_init_inline(BoltNetwork_t089758D07E24A397C5DB492715117C30154CD81C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BoltNetwork_get_IsClient_mC0280D8A78E630E118D4F5AF113154C603CB99B7(NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// StartCoroutine(DelayClientConnect());
		RuntimeObject* L_7;
		L_7 = BoltDebugStart_DelayClientConnect_mF3E0855EB426645FE09677E1B72C06EB66F17096(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Photon.Bolt.BoltDebugStart::DelayClientConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoltDebugStart_DelayClientConnect_mF3E0855EB426645FE09677E1B72C06EB66F17096 (BoltDebugStart_tD90A04848F949227F6E1F7AB00FA2E7E67B5DD66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB* L_0 = (U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB*)il2cpp_codegen_object_new(U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDelayClientConnectU3Ed__4__ctor_mADF3922826A4279C2F71F5A184388C3B8FDD8D6B(L_0, 0, NULL);
		U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Photon.Bolt.BoltDebugStart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStart__ctor_m2EE314DD8B364B561B3614779A5DC70F69ED653B (BoltDebugStart_tD90A04848F949227F6E1F7AB00FA2E7E67B5DD66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4_il2cpp_TypeInfo_var);
		GlobalEventListenerBase__ctor_m50DEF06E575F71CFC795E122667FD1017FD1A27C(__this, NULL);
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
// System.Void Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayClientConnectU3Ed__4__ctor_mADF3922826A4279C2F71F5A184388C3B8FDD8D6B (U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayClientConnectU3Ed__4_System_IDisposable_Dispose_mD53B907C1EB67E98D5B3CE1847552777076C27DB (U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayClientConnectU3Ed__4_MoveNext_mFDAE3E9B23277276BA7176449B3C3B69B8D212C6 (U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltNetwork_t089758D07E24A397C5DB492715117C30154CD81C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral332E60615BFCD7C3FAB9BB106F6604F38A206248);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005b;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < 5; i++)
		__this->___U3CiU3E5__1_3 = 0;
		goto IL_0073;
	}

IL_0029:
	{
		// BoltLog.Info("Connecting in {0} seconds...", 5 - i);
		int32_t L_3 = __this->___U3CiU3E5__1_3;
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(5, L_3));
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var);
		BoltLog_Info_mB346290DADF8A91DA1C7EC4ABCF5805C9058B7B9(_stringLiteral332E60615BFCD7C3FAB9BB106F6604F38A206248, L_5, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < 5; i++)
		int32_t L_7 = __this->___U3CiU3E5__1_3;
		V_1 = L_7;
		int32_t L_8 = V_1;
		__this->___U3CiU3E5__1_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0073:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_9 = __this->___U3CiU3E5__1_3;
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)5))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0029;
		}
	}
	{
		// BoltNetwork.Connect((ushort)BoltRuntimeSettings.instance.debugStartPort);
		BoltRuntimeSettings_tAF3FE7CE982EC40358744A6179CB2B083A8CB5F0* L_11;
		L_11 = BoltRuntimeSettings_get_instance_mA3933E9B18B54B3D0E560053C636F92F896269E4(NULL);
		NullCheck(L_11);
		int32_t L_12 = L_11->___debugStartPort_7;
		il2cpp_codegen_runtime_class_init_inline(BoltNetwork_t089758D07E24A397C5DB492715117C30154CD81C_il2cpp_TypeInfo_var);
		BoltNetwork_Connect_mE073C793CB69D46B8C189842A305E9D9C9B44A6A((uint16_t)((int32_t)(uint16_t)L_12), (RuntimeObject*)NULL, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayClientConnectU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m26EBC0BD7945869628B145C6948156BBB9F0A631 (U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayClientConnectU3Ed__4_System_Collections_IEnumerator_Reset_m780F73AACB2321CDE1D9124947E53614A236E464 (U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayClientConnectU3Ed__4_System_Collections_IEnumerator_Reset_m780F73AACB2321CDE1D9124947E53614A236E464_RuntimeMethod_var)));
	}
}
// System.Object Photon.Bolt.BoltDebugStart/<DelayClientConnect>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayClientConnectU3Ed__4_System_Collections_IEnumerator_get_Current_m2109BD22998BC387C28A244899BA908E9FC1EFCA (U3CDelayClientConnectU3Ed__4_tC07E65879DB0E3E0E54CA2D89B32F5D0F2BD20FB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Boolean Photon.Bolt.BoltDebugStartSettings::get_DebugStartIsSinglePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsSinglePlayer_mE1CB522CBE5339BA3A9B529198BD5EEA1BB28808 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return false; }
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return false; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean Photon.Bolt.BoltDebugStartSettings::get_DebugStartIsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsServer_m49C77B20D2EE45591B524F98FFC82EBB8E1CD17F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8213CEBBAFEF02CEC81B1441E91C0156D115511);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { return Environment.GetCommandLineArgs().Contains("--bolt-debugstart-server"); }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D(NULL);
		bool L_1;
		L_1 = Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33((RuntimeObject*)L_0, _stringLiteralE8213CEBBAFEF02CEC81B1441E91C0156D115511, Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// get { return Environment.GetCommandLineArgs().Contains("--bolt-debugstart-server"); }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Bolt.BoltDebugStartSettings::get_DebugStartIsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsClient_mAECE2CB95635DA3CF6248BDDAC37A5F4282110AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35F1FB4654DBC227365C54104E6FF140C68AB66C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { return Environment.GetCommandLineArgs().Contains("--bolt-debugstart-client"); }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D(NULL);
		bool L_1;
		L_1 = Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33((RuntimeObject*)L_0, _stringLiteral35F1FB4654DBC227365C54104E6FF140C68AB66C, Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// get { return Environment.GetCommandLineArgs().Contains("--bolt-debugstart-client"); }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Photon.Bolt.BoltDebugStartSettings::get_WindowIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_get_WindowIndex_mCB643E55C78991E98ADB83A44CF531B6224511E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA8C0C0E2CE2F38F6475B5D65D0F443BC2CF759);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// foreach (string arg in Environment.GetCommandLineArgs())
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D(NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003f;
	}

IL_000c:
	{
		// foreach (string arg in Environment.GetCommandLineArgs())
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (arg.StartsWith("--bolt-window-index-"))
		String_t* L_5 = V_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_5, _stringLiteral9CA8C0C0E2CE2F38F6475B5D65D0F443BC2CF759, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// return int.Parse(arg.Replace("--bolt-window-index-", ""));
		String_t* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, _stringLiteral9CA8C0C0E2CE2F38F6475B5D65D0F443BC2CF759, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_10;
		L_10 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_9, NULL);
		V_4 = L_10;
		goto IL_004a;
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		// foreach (string arg in Environment.GetCommandLineArgs())
		int32_t L_12 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// return 0;
		V_4 = 0;
		goto IL_004a;
	}

IL_004a:
	{
		// }
		int32_t L_14 = V_4;
		return L_14;
	}
}
// System.Int32 Photon.Bolt.BoltDebugStartSettings::GetWindowThreadProcessId(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_GetWindowThreadProcessId_mC99F2F3BAAB10C95399AC89F82026935FB4A706C (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___handle0, int32_t* ___processId1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_user32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "GetWindowThreadProcessId", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	____handle0_marshaled = (void*)___handle0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_user32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetWindowThreadProcessId)(____handle0_marshaled, ___processId1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___processId1);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean Photon.Bolt.BoltDebugStartSettings::EnumWindows(Photon.Bolt.BoltDebugStartSettings/EnumWindowsProc,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_EnumWindows_m2274A9CF276ED61925C1EE1D0AF233530BC72DCA (EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* ___callback0, intptr_t ___extraData1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_user32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "EnumWindows", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_user32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(EnumWindows)(____callback0_marshaled, ___extraData1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____callback0_marshaled, ___extraData1);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.Int32 Photon.Bolt.BoltDebugStartSettings::GetSystemMetrics(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_GetSystemMetrics_m2388974911B590B3D3E71474203E32ECCA2FA41B (int32_t ___index0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_user32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "GetSystemMetrics", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_user32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetSystemMetrics)(___index0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___index0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean Photon.Bolt.BoltDebugStartSettings::SetWindowPos(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_SetWindowPos_m8E77472FA00FD07F3C275214398F27CD99CC1B14 (intptr_t ___hWnd0, intptr_t ___hWndInsertAfter1, int32_t ___X2, int32_t ___Y3, int32_t ___cx4, int32_t ___cy5, int32_t ___uFlags6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, int32_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_user32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "SetWindowPos", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_user32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetWindowPos)(___hWnd0, ___hWndInsertAfter1, ___X2, ___Y3, ___cx4, ___cy5, ___uFlags6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hWnd0, ___hWndInsertAfter1, ___X2, ___Y3, ___cx4, ___cy5, ___uFlags6);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Photon.Bolt.BoltDebugStartSettings::Window(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_Window_mAD6E33EAC33D6FF74976FBA4A20970A949003EA4 (intptr_t ___hWnd0, intptr_t ___lParam1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// int pid = -1;
		V_0 = (-1);
		// int unity_pid = System.Diagnostics.Process.GetCurrentProcess().Id;
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_0;
		L_0 = Process_GetCurrentProcess_mB9E146001302DA6A60946152A09E8205E5FD2F0E(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Process_get_Id_m7401D58B8B638025FFD4574E33057A8F1B4B4E54(L_0, NULL);
		V_1 = L_1;
		// GetWindowThreadProcessId(new HandleRef(handle, hWnd), out pid);
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var))->___handle_0;
		intptr_t L_3 = ___hWnd0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), L_2, L_3, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = BoltDebugStartSettings_GetWindowThreadProcessId_mC99F2F3BAAB10C95399AC89F82026935FB4A706C(L_4, (&V_0), NULL);
		// if (pid == unity_pid)
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// unityHandle = new HandleRef(handle, hWnd);
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var))->___handle_0;
		intptr_t L_10 = ___hWnd0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11;
		memset((&L_11), 0, sizeof(L_11));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_11), L_9, L_10, /*hidden argument*/NULL);
		((BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var))->___unityHandle_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)&(((&((BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var))->___unityHandle_1))->____wrapper_0), (void*)NULL);
		// return false;
		V_3 = (bool)0;
		goto IL_0042;
	}

IL_003e:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		bool L_12 = V_3;
		return L_12;
	}
}
// System.Void Photon.Bolt.BoltDebugStartSettings::PositionWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStartSettings_PositionWindow_m5F8760FDAB80D816B149ABF48FA23451AB75EAB5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltDebugStartSettings_Window_mAD6E33EAC33D6FF74976FBA4A20970A949003EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (DebugStartIsClient || DebugStartIsServer)
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BoltDebugStartSettings_get_DebugStartIsClient_mAECE2CB95635DA3CF6248BDDAC37A5F4282110AF(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BoltDebugStartSettings_get_DebugStartIsServer_m49C77B20D2EE45591B524F98FFC82EBB8E1CD17F(NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00ef;
		}
	}
	{
		// EnumWindows(Window, IntPtr.Zero);
		EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* L_3 = (EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755*)il2cpp_codegen_object_new(EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EnumWindowsProc__ctor_mE0715F5E3890D9E51F7A84B2EB6107C18F40291C(L_3, NULL, (intptr_t)((void*)BoltDebugStartSettings_Window_mAD6E33EAC33D6FF74976FBA4A20970A949003EA4_RuntimeMethod_var), NULL);
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BoltDebugStartSettings_EnumWindows_m2274A9CF276ED61925C1EE1D0AF233530BC72DCA(L_3, L_4, NULL);
		// if (unityHandle.Wrapper != null)
		RuntimeObject* L_6;
		L_6 = HandleRef_get_Wrapper_m5AACA25B372CE2E7415DE95A7A9141EBD194BB1C_inline((&((BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var))->___unityHandle_1), NULL);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_00ee;
		}
	}
	{
		// int ww = UnityEngine.Screen.width;
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_2 = L_8;
		// int wh = UnityEngine.Screen.height;
		int32_t L_9;
		L_9 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_3 = L_9;
		// int x = 0;
		V_4 = 0;
		// int y = 0;
		V_5 = 0;
		// int w = GetSystemMetrics(0);
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = BoltDebugStartSettings_GetSystemMetrics_m2388974911B590B3D3E71474203E32ECCA2FA41B(0, NULL);
		V_6 = L_10;
		// int h = GetSystemMetrics(1);
		int32_t L_11;
		L_11 = BoltDebugStartSettings_GetSystemMetrics_m2388974911B590B3D3E71474203E32ECCA2FA41B(1, NULL);
		V_7 = L_11;
		// if (DebugStartIsServer)
		bool L_12;
		L_12 = BoltDebugStartSettings_get_DebugStartIsServer_m49C77B20D2EE45591B524F98FFC82EBB8E1CD17F(NULL);
		V_8 = L_12;
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		// x = w / 2 - (ww / 2);
		int32_t L_14 = V_6;
		int32_t L_15 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_14/2)), ((int32_t)(L_15/2))));
		// y = h / 2 - (wh / 2);
		int32_t L_16 = V_7;
		int32_t L_17 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_16/2)), ((int32_t)(L_17/2))));
		goto IL_00cd;
	}

IL_0089:
	{
		// switch (WindowIndex % 4)
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = BoltDebugStartSettings_get_WindowIndex_mCB643E55C78991E98ADB83A44CF531B6224511E8(NULL);
		V_10 = ((int32_t)(L_18%4));
		int32_t L_19 = V_10;
		V_9 = L_19;
		int32_t L_20 = V_9;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, 1)))
		{
			case 0:
			{
				goto IL_00ae;
			}
			case 1:
			{
				goto IL_00b6;
			}
			case 2:
			{
				goto IL_00be;
			}
		}
	}
	{
		goto IL_00cc;
	}

IL_00ae:
	{
		// case 1: x = w - ww; break;
		int32_t L_21 = V_6;
		int32_t L_22 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
		// case 1: x = w - ww; break;
		goto IL_00cc;
	}

IL_00b6:
	{
		// case 2: y = h - wh; break;
		int32_t L_23 = V_7;
		int32_t L_24 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_23, L_24));
		// case 2: y = h - wh; break;
		goto IL_00cc;
	}

IL_00be:
	{
		// x = w - ww;
		int32_t L_25 = V_6;
		int32_t L_26 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
		// y = h - wh;
		int32_t L_27 = V_7;
		int32_t L_28 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_27, L_28));
		// break;
		goto IL_00cc;
	}

IL_00cc:
	{
	}

IL_00cd:
	{
		// SetWindowPos(unityHandle.Handle, HWND.Top, x, y, ww, wh, SWP.NOSIZE);
		il2cpp_codegen_runtime_class_init_inline(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		intptr_t L_29;
		L_29 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline((&((BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var))->___unityHandle_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_il2cpp_TypeInfo_var);
		intptr_t L_30 = ((HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_StaticFields*)il2cpp_codegen_static_fields_for(HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_il2cpp_TypeInfo_var))->___Top_2;
		int32_t L_31 = V_4;
		int32_t L_32 = V_5;
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var);
		int32_t L_35 = ((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___NOSIZE_0;
		bool L_36;
		L_36 = BoltDebugStartSettings_SetWindowPos_m8E77472FA00FD07F3C275214398F27CD99CC1B14(L_29, L_30, L_31, L_32, L_33, L_34, L_35, NULL);
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Photon.Bolt.BoltDebugStartSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStartSettings__ctor_mA2B8379E1D533777A41CE57825B90DE5481169B1 (BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Photon.Bolt.BoltDebugStartSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStartSettings__cctor_m8840DFA8A7B0C554E016D79447A8179C0C1D4314 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly object handle = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var))->___handle_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var))->___handle_0), (void*)L_0);
		// static HandleRef unityHandle = new HandleRef();
		il2cpp_codegen_initobj((&((BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t1E7BF0093C8D0B72004FAE278A5A4F8D8342AF12_il2cpp_TypeInfo_var))->___unityHandle_1), sizeof(HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F));
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
// System.Void Photon.Bolt.BoltDebugStartSettings/HWND::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HWND__cctor_m507CD7A704D45EBC5C5F8B06C2F721D3B34DCC19 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IntPtr
		//   NoTopMost = new IntPtr(-2),
		intptr_t L_0;
		memset((&L_0), 0, sizeof(L_0));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_0), ((int32_t)-2), /*hidden argument*/NULL);
		((HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_StaticFields*)il2cpp_codegen_static_fields_for(HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_il2cpp_TypeInfo_var))->___NoTopMost_0 = L_0;
		// TopMost = new IntPtr(-1),
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_1), (-1), /*hidden argument*/NULL);
		((HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_StaticFields*)il2cpp_codegen_static_fields_for(HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_il2cpp_TypeInfo_var))->___TopMost_1 = L_1;
		// Top = new IntPtr(0),
		intptr_t L_2;
		memset((&L_2), 0, sizeof(L_2));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_2), 0, /*hidden argument*/NULL);
		((HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_StaticFields*)il2cpp_codegen_static_fields_for(HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_il2cpp_TypeInfo_var))->___Top_2 = L_2;
		// Bottom = new IntPtr(1);
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_m20A566609A091311C734617C699E61F545250AC7((&L_3), 1, /*hidden argument*/NULL);
		((HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_StaticFields*)il2cpp_codegen_static_fields_for(HWND_t386BEAE61F65B322BB8D8721ECAB00856FF0DE43_il2cpp_TypeInfo_var))->___Bottom_3 = L_3;
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
// System.Void Photon.Bolt.BoltDebugStartSettings/SWP::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWP__cctor_m599F4EF36231F03B28A5AE99D4758A16C9523F82 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int
		//   NOSIZE = 0x0001,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___NOSIZE_0 = 1;
		// NOMOVE = 0x0002,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___NOMOVE_1 = 2;
		// NOZORDER = 0x0004,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___NOZORDER_2 = 4;
		// NOREDRAW = 0x0008,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___NOREDRAW_3 = 8;
		// NOACTIVATE = 0x0010,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___NOACTIVATE_4 = ((int32_t)16);
		// DRAWFRAME = 0x0020,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___DRAWFRAME_5 = ((int32_t)32);
		// FRAMECHANGED = 0x0020,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___FRAMECHANGED_6 = ((int32_t)32);
		// SHOWWINDOW = 0x0040,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___SHOWWINDOW_7 = ((int32_t)64);
		// HIDEWINDOW = 0x0080,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___HIDEWINDOW_8 = ((int32_t)128);
		// NOCOPYBITS = 0x0100,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___NOCOPYBITS_9 = ((int32_t)256);
		// NOOWNERZORDER = 0x0200,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___NOOWNERZORDER_10 = ((int32_t)512);
		// NOREPOSITION = 0x0200,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___NOREPOSITION_11 = ((int32_t)512);
		// NOSENDCHANGING = 0x0400,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___NOSENDCHANGING_12 = ((int32_t)1024);
		// DEFERERASE = 0x2000,
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___DEFERERASE_13 = ((int32_t)8192);
		// ASYNCWINDOWPOS = 0x4000;
		((SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t18B5D6BB47B90B0353AF59E3E0C8CB95027F7082_il2cpp_TypeInfo_var))->___ASYNCWINDOWPOS_14 = ((int32_t)16384);
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
bool EnumWindowsProc_Invoke_m9D927A4E4083EE0CFB278BDEEAC4B42E041B5E70_Multicast(EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* __this, intptr_t ___hWnd0, intptr_t ___lParam1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* currentDelegate = reinterpret_cast<EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___hWnd0, ___lParam1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool EnumWindowsProc_Invoke_m9D927A4E4083EE0CFB278BDEEAC4B42E041B5E70_OpenInst(EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* __this, intptr_t ___hWnd0, intptr_t ___lParam1, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___hWnd0, ___lParam1, method);
}
bool EnumWindowsProc_Invoke_m9D927A4E4083EE0CFB278BDEEAC4B42E041B5E70_OpenStatic(EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* __this, intptr_t ___hWnd0, intptr_t ___lParam1, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___hWnd0, ___lParam1, method);
}
bool EnumWindowsProc_Invoke_m9D927A4E4083EE0CFB278BDEEAC4B42E041B5E70_OpenStaticInvoker(EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* __this, intptr_t ___hWnd0, intptr_t ___lParam1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___hWnd0, ___lParam1);
}
bool EnumWindowsProc_Invoke_m9D927A4E4083EE0CFB278BDEEAC4B42E041B5E70_ClosedStaticInvoker(EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* __this, intptr_t ___hWnd0, intptr_t ___lParam1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< bool, RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___hWnd0, ___lParam1);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755 (EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* __this, intptr_t ___hWnd0, intptr_t ___lParam1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___hWnd0, ___lParam1);

	return static_cast<bool>(returnValue);
}
// System.Void Photon.Bolt.BoltDebugStartSettings/EnumWindowsProc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumWindowsProc__ctor_mE0715F5E3890D9E51F7A84B2EB6107C18F40291C (EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&EnumWindowsProc_Invoke_m9D927A4E4083EE0CFB278BDEEAC4B42E041B5E70_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EnumWindowsProc_Invoke_m9D927A4E4083EE0CFB278BDEEAC4B42E041B5E70_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EnumWindowsProc_Invoke_m9D927A4E4083EE0CFB278BDEEAC4B42E041B5E70_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&EnumWindowsProc_Invoke_m9D927A4E4083EE0CFB278BDEEAC4B42E041B5E70_Multicast;
}
// System.Boolean Photon.Bolt.BoltDebugStartSettings/EnumWindowsProc::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnumWindowsProc_Invoke_m9D927A4E4083EE0CFB278BDEEAC4B42E041B5E70 (EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* __this, intptr_t ___hWnd0, intptr_t ___lParam1, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hWnd0, ___lParam1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Photon.Bolt.BoltDebugStartSettings/EnumWindowsProc::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnumWindowsProc_BeginInvoke_m853A27D4E0A549821BA9BC6634F80484E3D31FCA (EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* __this, intptr_t ___hWnd0, intptr_t ___lParam1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hWnd0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___lParam1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean Photon.Bolt.BoltDebugStartSettings/EnumWindowsProc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnumWindowsProc_EndInvoke_mBCB150B982527223FC0A518FCA56F37FCDD4BDA5 (EnumWindowsProc_t937870C80431D7A9D250528E683239E839C46755* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Bolt.BoltDynamicData::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDynamicData_Setup_m3508B8AF9BFC44C4F31D04063AE7D0BE7FC1F57E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltDynamicData_GetActiveSceneIndex_mF797BDDD306D38E1A995688CA21E46293BC6D0B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltDynamicData_GetGlobalBehaviourTypes_mAD5C1F11A5B3CB3A4BCDF33B5AD787457B200F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltDynamicData_GetSceneIndex_mBCD317FF3165F54C71ED896A3E0813B257813083_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltDynamicData_GetSceneName_m64ECFE8E93183B022C1140A14547C78AFF2A53E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltNetworkInternal_User_EnvironmentReset_m33511BF5E0B1BC070CBB5D3AF21D2900B56F38A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltNetworkInternal_User_EnvironmentSetup_mB49D13AC9B253E83298252E9E10B5E5090573586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2A1D3A29AAB3913DBF979CD6754BCA09515B4FD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5F1225B06C6A5C271E62144313BDD06C76F20302_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySettings_tA555A914A8781790DF9DE0AF41B32AFCF2834BB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoltNetworkInternal.DebugDrawer = new UnityDebugDrawer();
		UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* L_0 = (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094*)il2cpp_codegen_object_new(UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityDebugDrawer__ctor_m616E8432AA474AFD642427A7190376607608FC40(L_0, NULL);
		((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___DebugDrawer_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___DebugDrawer_3), (void*)L_0);
		// BoltNetworkInternal.UsingUnityPro = true;
		((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___UsingUnityPro_0 = (bool)1;
		// BoltNetworkInternal.GetActiveSceneIndex = GetActiveSceneIndex;
		Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_1 = (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*)il2cpp_codegen_object_new(Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1(L_1, NULL, (intptr_t)((void*)BoltDynamicData_GetActiveSceneIndex_mF797BDDD306D38E1A995688CA21E46293BC6D0B9_RuntimeMethod_var), NULL);
		((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___GetActiveSceneIndex_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___GetActiveSceneIndex_6), (void*)L_1);
		// BoltNetworkInternal.GetSceneName = GetSceneName;
		Func_2_t5F1225B06C6A5C271E62144313BDD06C76F20302* L_2 = (Func_2_t5F1225B06C6A5C271E62144313BDD06C76F20302*)il2cpp_codegen_object_new(Func_2_t5F1225B06C6A5C271E62144313BDD06C76F20302_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_2__ctor_m836867166FF7EAFCFAC2D0EC79B697AE3525A27E(L_2, NULL, (intptr_t)((void*)BoltDynamicData_GetSceneName_m64ECFE8E93183B022C1140A14547C78AFF2A53E0_RuntimeMethod_var), NULL);
		((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___GetSceneName_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___GetSceneName_4), (void*)L_2);
		// BoltNetworkInternal.GetSceneIndex = GetSceneIndex;
		Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783* L_3 = (Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783*)il2cpp_codegen_object_new(Func_2_tE86BD37F96840C70F2EA1D505476CEDA46364783_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_m8735C973EB9B6C7545BC87E34D15C7FE2DD84B81(L_3, NULL, (intptr_t)((void*)BoltDynamicData_GetSceneIndex_mBCD317FF3165F54C71ED896A3E0813B257813083_RuntimeMethod_var), NULL);
		((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___GetSceneIndex_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___GetSceneIndex_5), (void*)L_3);
		// BoltNetworkInternal.GetGlobalBehaviourTypes = GetGlobalBehaviourTypes;
		Func_1_t2A1D3A29AAB3913DBF979CD6754BCA09515B4FD4* L_4 = (Func_1_t2A1D3A29AAB3913DBF979CD6754BCA09515B4FD4*)il2cpp_codegen_object_new(Func_1_t2A1D3A29AAB3913DBF979CD6754BCA09515B4FD4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_1__ctor_m3FF829535B41B18262217D3BAE15FD607244F7AF(L_4, NULL, (intptr_t)((void*)BoltDynamicData_GetGlobalBehaviourTypes_mAD5C1F11A5B3CB3A4BCDF33B5AD787457B200F49_RuntimeMethod_var), NULL);
		((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___GetGlobalBehaviourTypes_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___GetGlobalBehaviourTypes_7), (void*)L_4);
		// BoltNetworkInternal.EnvironmentSetup = BoltNetworkInternal_User.EnvironmentSetup;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, NULL, (intptr_t)((void*)BoltNetworkInternal_User_EnvironmentSetup_mB49D13AC9B253E83298252E9E10B5E5090573586_RuntimeMethod_var), NULL);
		((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___EnvironmentSetup_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___EnvironmentSetup_1), (void*)L_5);
		// BoltNetworkInternal.EnvironmentReset = BoltNetworkInternal_User.EnvironmentReset;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, NULL, (intptr_t)((void*)BoltNetworkInternal_User_EnvironmentReset_m33511BF5E0B1BC070CBB5D3AF21D2900B56F38A4_RuntimeMethod_var), NULL);
		((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___EnvironmentReset_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_t6877EE4B40A5546843A150DFBE7BFB467C9E911E_il2cpp_TypeInfo_var))->___EnvironmentReset_2), (void*)L_6);
		// UnitySettings.IsBuildIL2CPP = true;
		((UnitySettings_tA555A914A8781790DF9DE0AF41B32AFCF2834BB6_StaticFields*)il2cpp_codegen_static_fields_for(UnitySettings_tA555A914A8781790DF9DE0AF41B32AFCF2834BB6_il2cpp_TypeInfo_var))->___IsBuildIL2CPP_2 = (bool)1;
		// UnitySettings.CurrentPlatform = Application.platform;
		int32_t L_7;
		L_7 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		((UnitySettings_tA555A914A8781790DF9DE0AF41B32AFCF2834BB6_StaticFields*)il2cpp_codegen_static_fields_for(UnitySettings_tA555A914A8781790DF9DE0AF41B32AFCF2834BB6_il2cpp_TypeInfo_var))->___CurrentPlatform_4 = L_7;
		// }
		return;
	}
}
// System.Int32 Photon.Bolt.BoltDynamicData::GetActiveSceneIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDynamicData_GetActiveSceneIndex_mF797BDDD306D38E1A995688CA21E46293BC6D0B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return GetSceneIndex(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		int32_t L_2;
		L_2 = BoltDynamicData_GetSceneIndex_mBCD317FF3165F54C71ED896A3E0813B257813083(L_1, NULL);
		V_1 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Int32 Photon.Bolt.BoltDynamicData::GetSceneIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDynamicData_GetSceneIndex_mBCD317FF3165F54C71ED896A3E0813B257813083 (String_t* ___name0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// return BoltScenes_Internal.GetSceneIndex(name);
		String_t* L_0 = ___name0;
		int32_t L_1;
		L_1 = BoltScenes_Internal_GetSceneIndex_mBD9D2DC1D223BAB2D4590D9597A8F3CB4ECD5C44(L_0, NULL);
		V_0 = L_1;
		goto IL_0011;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.Object)
		// catch
		// return -1;
		V_0 = (-1);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0011;
	}// end catch (depth: 1)

IL_0011:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.String Photon.Bolt.BoltDynamicData::GetSceneName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoltDynamicData_GetSceneName_m64ECFE8E93183B022C1140A14547C78AFF2A53E0 (int32_t ___index0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// return BoltScenes_Internal.GetSceneName(index);
		int32_t L_0 = ___index0;
		String_t* L_1;
		L_1 = BoltScenes_Internal_GetSceneName_m7243D45DB8C49FF5DF590FB3C0E65E234E4232B5(L_0, NULL);
		V_0 = L_1;
		goto IL_0011;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.Object)
		// catch
		// return null;
		V_0 = (String_t*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0011;
	}// end catch (depth: 1)

IL_0011:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<Photon.Bolt.Collections.STuple`2<Photon.Bolt.BoltGlobalBehaviourAttribute,System.Type>> Photon.Bolt.BoltDynamicData::GetGlobalBehaviourTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t42A0D954620E0952274A228232D7FE639FA108C7* BoltDynamicData_GetGlobalBehaviourTypes_mAD5C1F11A5B3CB3A4BCDF33B5AD787457B200F49 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisAssembly_t_m69D7963E7C3F19E3FD5B7D9FE783F9F7DF083DB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltAssemblies_t2B93451C82C0446CE6FE1A6AEFAF70AFDC25395A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisBoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087_mBFC4004E3D17D9DCC5955B8C2DC8282D0A31EEC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3E3B9B34A834C8C7683298785F329C18308A28F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8A356B6396F4F7F3D5A0CFA18F886FE794970BDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t42A0D954620E0952274A228232D7FE639FA108C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&STuple_2__ctor_mE1CCD1DACA36C961EBDAEBA4DBBF9CBE61423590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CGetGlobalBehaviourTypesU3Eb__0_mC480F15F888D5CD3A42AFECC432BA6EC02E47CB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A* V_0 = NULL;
	List_1_t42A0D954620E0952274A228232D7FE639FA108C7* V_1 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_2 = NULL;
	Assembly_t* V_3 = NULL;
	Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* V_4 = NULL;
	bool V_5 = false;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_6 = NULL;
	int32_t V_7 = 0;
	Type_t* V_8 = NULL;
	bool V_9 = false;
	BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087* V_10 = NULL;
	bool V_11 = false;
	Exception_t* V_12 = NULL;
	Exception_t* V_13 = NULL;
	bool V_14 = false;
	List_1_t42A0D954620E0952274A228232D7FE639FA108C7* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* G_B4_0 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* G_B4_1 = NULL;
	Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* G_B3_0 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A* L_0 = (U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m813179C7EA14401ABD4BC14F58231BB7280771C9(L_0, NULL);
		V_0 = L_0;
		// var globalBehaviours = new List<STuple<BoltGlobalBehaviourAttribute, Type>>();
		List_1_t42A0D954620E0952274A228232D7FE639FA108C7* L_1 = (List_1_t42A0D954620E0952274A228232D7FE639FA108C7*)il2cpp_codegen_object_new(List_1_t42A0D954620E0952274A228232D7FE639FA108C7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m8A356B6396F4F7F3D5A0CFA18F886FE794970BDE(L_1, List_1__ctor_m8A356B6396F4F7F3D5A0CFA18F886FE794970BDE_RuntimeMethod_var);
		V_1 = L_1;
		// var asmIter = BoltAssemblies.AllAssemblies;
		U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BoltAssemblies_t2B93451C82C0446CE6FE1A6AEFAF70AFDC25395A_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = BoltAssemblies_get_AllAssemblies_m18C64431FA485194289740147EC0293AC45FBDB1(NULL);
		NullCheck(L_2);
		L_2->___asmIter_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___asmIter_0), (void*)L_3);
		// var assemblyList = AppDomain.CurrentDomain.GetAssemblies();
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_4;
		L_4 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_4);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_5;
		L_5 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_4, NULL);
		V_2 = L_5;
		goto IL_00ee;
	}

IL_0028:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// var asm = Array.Find(assemblyList, (assembly) => assembly.GetName().Name.Equals(asmIter.Current));
			AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_6 = V_2;
			U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A* L_7 = V_0;
			NullCheck(L_7);
			Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* L_8 = L_7->___U3CU3E9__0_1;
			Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* L_9 = L_8;
			G_B3_0 = L_9;
			G_B3_1 = L_6;
			if (L_9)
			{
				G_B4_0 = L_9;
				G_B4_1 = L_6;
				goto IL_004c_1;
			}
		}
		{
			U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A* L_10 = V_0;
			U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A* L_11 = V_0;
			Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* L_12 = (Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E*)il2cpp_codegen_object_new(Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			Predicate_1__ctor_m48B6BB78EBAEDDBE451D41754CCD6E6A179AA237(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CGetGlobalBehaviourTypesU3Eb__0_mC480F15F888D5CD3A42AFECC432BA6EC02E47CB0_RuntimeMethod_var), NULL);
			Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* L_13 = L_12;
			V_4 = L_13;
			NullCheck(L_10);
			L_10->___U3CU3E9__0_1 = L_13;
			Il2CppCodeGenWriteBarrier((void**)(&L_10->___U3CU3E9__0_1), (void*)L_13);
			Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* L_14 = V_4;
			G_B4_0 = L_14;
			G_B4_1 = G_B3_1;
		}

IL_004c_1:
		{
			Assembly_t* L_15;
			L_15 = Array_Find_TisAssembly_t_m69D7963E7C3F19E3FD5B7D9FE783F9F7DF083DB5(G_B4_1, G_B4_0, Array_Find_TisAssembly_t_m69D7963E7C3F19E3FD5B7D9FE783F9F7DF083DB5_RuntimeMethod_var);
			V_3 = L_15;
			// if (asm == null) { continue; }
			Assembly_t* L_16 = V_3;
			bool L_17;
			L_17 = Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB(L_16, (Assembly_t*)NULL, NULL);
			V_5 = L_17;
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0065_1;
			}
		}
		{
			// if (asm == null) { continue; }
			goto IL_00ee;
		}

IL_0065_1:
		{
			// foreach (Type type in asm.GetTypes())
			Assembly_t* L_19 = V_3;
			NullCheck(L_19);
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20;
			L_20 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(18 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_19);
			V_6 = L_20;
			V_7 = 0;
			goto IL_00d4_1;
		}

IL_0073_1:
		{
			// foreach (Type type in asm.GetTypes())
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21 = V_6;
			int32_t L_22 = V_7;
			NullCheck(L_21);
			int32_t L_23 = L_22;
			Type_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
			V_8 = L_24;
		}
		try
		{// begin try (depth: 2)
			{
				// if (typeof(MonoBehaviour).IsAssignableFrom(type))
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				Type_t* L_27 = V_8;
				NullCheck(L_26);
				bool L_28;
				L_28 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_27);
				V_9 = L_28;
				bool L_29 = V_9;
				if (!L_29)
				{
					goto IL_00bc_2;
				}
			}
			{
				// var globalAttr = type.GetCustomAttribute<BoltGlobalBehaviourAttribute>(false);
				Type_t* L_30 = V_8;
				BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087* L_31;
				L_31 = CustomAttributeExtensions_GetCustomAttribute_TisBoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087_mBFC4004E3D17D9DCC5955B8C2DC8282D0A31EEC7(L_30, (bool)0, CustomAttributeExtensions_GetCustomAttribute_TisBoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087_mBFC4004E3D17D9DCC5955B8C2DC8282D0A31EEC7_RuntimeMethod_var);
				V_10 = L_31;
				// if (globalAttr != null)
				BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087* L_32 = V_10;
				V_11 = (bool)((!(((RuntimeObject*)(BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087*)L_32) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_33 = V_11;
				if (!L_33)
				{
					goto IL_00bb_2;
				}
			}
			{
				// globalBehaviours.Add(new STuple<BoltGlobalBehaviourAttribute, Type>(globalAttr, type));
				List_1_t42A0D954620E0952274A228232D7FE639FA108C7* L_34 = V_1;
				BoltGlobalBehaviourAttribute_t81A4AD8A0477EA94F1655F9E21268FCC64679087* L_35 = V_10;
				Type_t* L_36 = V_8;
				STuple_2_tD6FE030E735508E78FC07AA32FBA933E86A0BA4F L_37;
				memset((&L_37), 0, sizeof(L_37));
				STuple_2__ctor_mE1CCD1DACA36C961EBDAEBA4DBBF9CBE61423590((&L_37), L_35, L_36, /*hidden argument*/STuple_2__ctor_mE1CCD1DACA36C961EBDAEBA4DBBF9CBE61423590_RuntimeMethod_var);
				NullCheck(L_34);
				List_1_Add_m3E3B9B34A834C8C7683298785F329C18308A28F3_inline(L_34, L_37, List_1_Add_m3E3B9B34A834C8C7683298785F329C18308A28F3_RuntimeMethod_var);
			}

IL_00bb_2:
			{
			}

IL_00bc_2:
			{
				goto IL_00cd_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00bf_1;
			}
			throw e;
		}

CATCH_00bf_1:
		{// begin catch(System.Exception)
			// catch (Exception e2)
			V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// BoltLog.Warn(e2);
			Exception_t* L_38 = V_12;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var)));
			BoltLog_Warn_m5C7AEE459D812FFAFF5021B371DAC812C1D1D0CE(L_38, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00cd_1;
		}// end catch (depth: 2)

IL_00cd_1:
		{
			int32_t L_39 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		}

IL_00d4_1:
		{
			// foreach (Type type in asm.GetTypes())
			int32_t L_40 = V_7;
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_41 = V_6;
			NullCheck(L_41);
			if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
			{
				goto IL_0073_1;
			}
		}
		{
			goto IL_00ed;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00df;
		}
		throw e;
	}

CATCH_00df:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// BoltLog.Warn(e);
		Exception_t* L_42 = V_13;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BoltLog_tAED36F7E5204E9BDBEE2B79C75D71347EA97A4DC_il2cpp_TypeInfo_var)));
		BoltLog_Warn_m5C7AEE459D812FFAFF5021B371DAC812C1D1D0CE(L_42, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ed;
	}// end catch (depth: 1)

IL_00ed:
	{
	}

IL_00ee:
	{
		// while (asmIter.MoveNext())
		U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A* L_43 = V_0;
		NullCheck(L_43);
		RuntimeObject* L_44 = L_43->___asmIter_0;
		NullCheck(L_44);
		bool L_45;
		L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_44);
		V_14 = L_45;
		bool L_46 = V_14;
		if (L_46)
		{
			goto IL_0028;
		}
	}
	{
		// return globalBehaviours;
		List_1_t42A0D954620E0952274A228232D7FE639FA108C7* L_47 = V_1;
		V_15 = L_47;
		goto IL_0107;
	}

IL_0107:
	{
		// }
		List_1_t42A0D954620E0952274A228232D7FE639FA108C7* L_48 = V_15;
		return L_48;
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
// System.Void Photon.Bolt.BoltDynamicData/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m813179C7EA14401ABD4BC14F58231BB7280771C9 (U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Photon.Bolt.BoltDynamicData/<>c__DisplayClass4_0::<GetGlobalBehaviourTypes>b__0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CGetGlobalBehaviourTypesU3Eb__0_mC480F15F888D5CD3A42AFECC432BA6EC02E47CB0 (U3CU3Ec__DisplayClass4_0_t8B75DE9200AC588F629D2D7F59100C936614324A* __this, Assembly_t* ___assembly0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var asm = Array.Find(assemblyList, (assembly) => assembly.GetName().Name.Equals(asmIter.Current));
		Assembly_t* L_0 = ___assembly0;
		NullCheck(L_0);
		AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_1;
		L_1 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(22 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline(L_1, NULL);
		RuntimeObject* L_3 = __this->___asmIter_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
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
// System.Void Photon.Bolt.BoltExecutionOrderAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltExecutionOrderAttribute__ctor_m735A8F78518FB70574C5DEA280E291EF8918251C (BoltExecutionOrderAttribute_t2FA47CF768D9005CFFB1A83073A8A7324E358673* __this, int32_t ___order0, const RuntimeMethod* method) 
{
	{
		// public BoltExecutionOrderAttribute(int order)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// _executionOrder = order;
		int32_t L_0 = ___order0;
		__this->____executionOrder_0 = L_0;
		// }
		return;
	}
}
// System.Int32 Photon.Bolt.BoltExecutionOrderAttribute::get_executionOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltExecutionOrderAttribute_get_executionOrder_m204C9B93617C60FD2C060A6C7AC8FD4814ED6B5E (BoltExecutionOrderAttribute_t2FA47CF768D9005CFFB1A83073A8A7324E358673* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _executionOrder; }
		int32_t L_0 = __this->____executionOrder_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _executionOrder; }
		int32_t L_1 = V_0;
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
// System.Void Photon.Bolt.Internal.UnityDebugDrawer::Photon.Bolt.Internal.IDebugDrawer.IsEditor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_Photon_Bolt_Internal_IDebugDrawer_IsEditor_m119367A56F9F56D3C60B3B3F89C955194D35E273 (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* __this, bool ___isEditor0, const RuntimeMethod* method) 
{
	{
		// this.isEditor = isEditor;
		bool L_0 = ___isEditor0;
		__this->___isEditor_0 = L_0;
		// }
		return;
	}
}
// System.Void Photon.Bolt.Internal.UnityDebugDrawer::Photon.Bolt.Internal.IDebugDrawer.SelectGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_Photon_Bolt_Internal_IDebugDrawer_SelectGameObject_m5F59097F957576D1198F285A0091EBC89F282D6F (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Bolt.Internal.UnityDebugDrawer::Photon.Bolt.Internal.IDebugDrawer.Indent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_Photon_Bolt_Internal_IDebugDrawer_Indent_mA518CA6C3510910111D962F325201E790CA11D17 (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Bolt.Internal.UnityDebugDrawer::Photon.Bolt.Internal.IDebugDrawer.Label(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_Photon_Bolt_Internal_IDebugDrawer_Label_mC909DE9FF2287286989F3468F0844AE7C867ECC1 (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugInfo_tFAA0833B8DC00F29BA1DA3047B896A3D88024609_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugInfo.Label(text);
		String_t* L_0 = ___text0;
		il2cpp_codegen_runtime_class_init_inline(DebugInfo_tFAA0833B8DC00F29BA1DA3047B896A3D88024609_il2cpp_TypeInfo_var);
		DebugInfo_Label_m2C7A7400DA09EF74F59A7C439146C530EBDDD048(L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Bolt.Internal.UnityDebugDrawer::Photon.Bolt.Internal.IDebugDrawer.LabelBold(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_Photon_Bolt_Internal_IDebugDrawer_LabelBold_mFE01ED0C08BE8E167AD22C982E329795EC31B544 (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugInfo_tFAA0833B8DC00F29BA1DA3047B896A3D88024609_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugInfo.LabelBold(text);
		String_t* L_0 = ___text0;
		il2cpp_codegen_runtime_class_init_inline(DebugInfo_tFAA0833B8DC00F29BA1DA3047B896A3D88024609_il2cpp_TypeInfo_var);
		DebugInfo_LabelBold_m0462E74DFE515ED8838A63C0964CFF625C6AD971(L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Bolt.Internal.UnityDebugDrawer::Photon.Bolt.Internal.IDebugDrawer.LabelField(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_Photon_Bolt_Internal_IDebugDrawer_LabelField_mD2FDECEADDEBB88F3DB05BD61B347D6845C47B38 (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* __this, String_t* ___text0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugInfo_tFAA0833B8DC00F29BA1DA3047B896A3D88024609_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugInfo.LabelField(text, value);
		String_t* L_0 = ___text0;
		RuntimeObject* L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(DebugInfo_tFAA0833B8DC00F29BA1DA3047B896A3D88024609_il2cpp_TypeInfo_var);
		DebugInfo_LabelField_m65BFF7D1A63AD017A1B919143DEE0DC8670F59DC(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Bolt.Internal.UnityDebugDrawer::Photon.Bolt.Internal.IDebugDrawer.Separator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_Photon_Bolt_Internal_IDebugDrawer_Separator_m10D8612239E6DE9F13D4EBF2D6538583E47A593E (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* __this, const RuntimeMethod* method) 
{
	{
		// GUILayout.Space(2);
		GUILayout_Space_m9254FBF173F9260DDB6C83C0066447FC9D9CA597((2.0f), NULL);
		// }
		return;
	}
}
// System.Void Photon.Bolt.Internal.UnityDebugDrawer::Photon.Bolt.Internal.IDebugDrawer.DrawObjectArray(Photon.Bolt.Internal.IDebugDrawerObjectArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_Photon_Bolt_Internal_IDebugDrawer_DrawObjectArray_mD8A199813961386CF5422DC48BB4C2E997E5689D (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* __this, RuntimeObject* ___root0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Bolt.Internal.UnityDebugDrawer::DrawObjectArrayItem(Photon.Bolt.Internal.IDebugDrawerObjectArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_DrawObjectArrayItem_m22796434A2A9ECC0101C24E245CBCDE9B62E1594 (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Bolt.Internal.UnityDebugDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer__ctor_m616E8432AA474AFD642427A7190376607608FC40 (UnityDebugDrawer_tE8C14B5240C19F98FEC8823CB68CDA7037310094* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Out_m73E553D219D64916F2AA7CDC41568968CB055F1E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ((Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var))->___stdout_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandleRef_get_Wrapper_m5AACA25B372CE2E7415DE95A7A9141EBD194BB1C_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____wrapper_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0150B7911C20D9E2D2172005C7DF818210015764_gshared_inline (List_1_tAEED11AB20BF771C0B63AC1ECF1D030649939125* __this, STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6 ___item0, const RuntimeMethod* method) 
{
	STuple_2U5BU5D_t2B846113DB25E74BABAEEBCDF10BBB17E5DFFB5C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		STuple_2U5BU5D_t2B846113DB25E74BABAEEBCDF10BBB17E5DFFB5C* L_1 = (STuple_2U5BU5D_t2B846113DB25E74BABAEEBCDF10BBB17E5DFFB5C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		STuple_2U5BU5D_t2B846113DB25E74BABAEEBCDF10BBB17E5DFFB5C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		STuple_2U5BU5D_t2B846113DB25E74BABAEEBCDF10BBB17E5DFFB5C* L_6 = V_0;
		int32_t L_7 = V_1;
		STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6)L_8);
		return;
	}

IL_0034:
	{
		STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6 L_9 = ___item0;
		((  void (*) (List_1_tAEED11AB20BF771C0B63AC1ECF1D030649939125*, STuple_2_t59CF9E7F0764DE54A3B603BD924B4999A59BA0B6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}

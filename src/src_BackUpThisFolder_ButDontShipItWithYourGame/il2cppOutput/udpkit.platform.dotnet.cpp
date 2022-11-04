#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.GatewayIPAddressInformation>
struct Collection_1_tAA30BCAC05A7C0F54CEE311DF69028C96E69A079;
// System.Collections.ObjectModel.Collection`1<System.Net.IPAddress>
struct Collection_1_tE48AA187F55CD76B677887F9A9BD63FFBB70312B;
// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.MulticastIPAddressInformation>
struct Collection_1_t6D25CA1BEFBE57DC6CF6A38063C10C0FA80C2DDC;
// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation>
struct Collection_1_tFCFDED5321BE15CA8D30D61CF04DDE693BB0CB5B;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>
struct HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A;
// System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>
struct HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14;
// System.Collections.Generic.IEnumerable`1<UdpKit.UdpEndPoint>
struct IEnumerable_1_t930D0A2B7AA26DF073AC7E64D46D7337F664B3C5;
// System.Collections.Generic.IEnumerable`1<UdpKit.UdpIPv4Address>
struct IEnumerable_1_t0031A8D56D54E4E3B2CFE35693AFB4D76A71A636;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<UdpKit.UdpEndPoint>
struct IEqualityComparer_1_tA1E9C40238963A1C34ACF28E9E992F881F80881C;
// System.Collections.Generic.IEqualityComparer`1<UdpKit.UdpIPv4Address>
struct IEqualityComparer_1_t647543D991D7E73B4D20C839CDE5D08FC5055BE1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint>
struct List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456;
// System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>
struct List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8;
// System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface>
struct List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Collections.Generic.HashSet`1/Slot<UdpKit.UdpEndPoint>[]
struct SlotU5BU5D_tDFCC29B0470ED44A99581A1284E6A12C899FCC65;
// System.Collections.Generic.HashSet`1/Slot<UdpKit.UdpIPv4Address>[]
struct SlotU5BU5D_t1293BE730829519E3B2837DD437402EFE559EED8;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// UdpKit.UdpEndPoint[]
struct UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947;
// UdpKit.UdpIPv4Address[]
struct UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731;
// UdpKit.Platform.UdpPlatformInterface[]
struct UdpPlatformInterfaceU5BU5D_tA4D5283B839F3C80B6E3EAA1230DB21C4B550FF8;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UdpKit.Platform.DotNet.Utils.DotNetInterface
struct DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C;
// UdpKit.Platform.DotNetPlatform
struct DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E;
// UdpKit.Platform.DotNetSocket
struct DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A;
// System.Net.NetworkInformation.PhysicalAddress
struct PhysicalAddress_tBD58CB2A171D8DEFF0C882DE988D2D446EF40DEB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B;
// System.String
struct String_t;
// UdpKit.UdpConfig
struct UdpConfig_t40D9E5EC737F64EFB5C8E3E40B6DC256350DDCCA;
// UdpKit.Platform.UdpPlatform
struct UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF;
// UdpKit.Platform.UdpPlatformInterface
struct UdpPlatformInterface_t4857820E718813541D2A62687507A3FCCD783C94;
// UdpKit.Platform.UdpPlatformSocket
struct UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8;
// UdpKit.UdpSocket
struct UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dns_tE6305F126E5677E1AFB444735257D41D0D0FE273_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t12B82C0DABD0D182F9ECF23E4933968201C24EC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t16E7D3FE11465476DD7529A8DDDD6519A2E26D6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t449A74823AA2BEDD608BF520E096E15EA25A5C86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA218C3658C89562941B7435E73E48E2EDC26D9BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketError_t4AD3BECF393E3FD8C5238C4AE47B768B3ABC07B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098;
IL2CPP_EXTERN_C String_t* _stringLiteral7749A2A14D9C5D9E5B5A2D3FF748EE1ED757BB07;
IL2CPP_EXTERN_C String_t* _stringLiteral8F808033127A3B2A6E71FBCD87EF430FB4905D69;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB7AE2A6D393ADACFEBBBF239951E42C5ACA0E8;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DotNetPlatformUtils_FindBroadcastAddress_m287A4E26ECF4213012F75EE2BE6ACDE6B8CEFAF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DotNetSocket_VerifyIsBound_m887ACBA77C783E6E3EFC223644E0D28A59A99733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisUdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_mFE92AC379D6D2F5B96FCC7AE91625EB03283AE3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m88ED9DCE7F550C8A6D4D5DF7652F7790813E5EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD86A3FAF382C03D3141EDF9CF25FA3E5074D2BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBF7FBFFD1F2788C9243520BAF7518757ABF22320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m11B9F40360C6E76E7EC06C8F40EF94BAFBA3EBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m505777F7D52B7490B54E36C419926D16A9B6D8DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m52160B38797B737DCCEFFAB39ABEE7391637C6B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mD6AA1519DCE177D3AD03EFBC605AE1B3FCF4B339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mCCF252D8C6DF0A809A2E290DB6420EF08E29EE8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m6D923FE9DB1E14374E913323F2EE88287755EDB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mEC07AC6F1E9F3AD3530280ADE0AF766636DC18EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m66CC40CC30B064D227ADB54EDE525EC305BB1BCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC785E6DC504AAFAD3683C80D30A23697BA0AE443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC86F1A6CC0DE9EB06BDBA6189AF0AA3693CFBDA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB66C9A7D9D641504EAEB5FA9187D3BBD981463E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD808B216A565AEC0123038509D95A9E636859290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE9CE13827AA770B7A5E37CFCB3608C1282129C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m06A3DD667AA8C5A419E5D5FAD7B60332D5C17CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFB5B3B40F26D40ADF0CD1710EAC16841C1E5B66A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB1D0FB4A2CE210A04588DE9BC4CF1783263EB45F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UdpEndPointU5BU5D_t9A796AA40E5E6C1559A042C0D8C7C608B3F36947;
struct UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5D9F0C6E2A816060FF5C7FDE7713E5D811807751 
{
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

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>
struct HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tDFCC29B0470ED44A99581A1284E6A12C899FCC65* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>
struct HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t1293BE730829519E3B2837DD437402EFE559EED8* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
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

// System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>
struct List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface>
struct List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UdpPlatformInterfaceU5BU5D_tA4D5283B839F3C80B6E3EAA1230DB21C4B550FF8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UdpPlatformInterfaceU5BU5D_tA4D5283B839F3C80B6E3EAA1230DB21C4B550FF8* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils
struct DotNetPlatformUtils_t8E4F051090C86538820A1D1E4C558ACB07312183  : public RuntimeObject
{
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Net.NetworkInformation.GatewayIPAddressInformation
struct GatewayIPAddressInformation_tB8FA9E5C0F0AA4352D9221F2A0A7CDA405FB1BF2  : public RuntimeObject
{
};

// System.Net.NetworkInformation.GatewayIPAddressInformationCollection
struct GatewayIPAddressInformationCollection_t4D24D7B02E632A5F8DBE65DBFB751C2EC925E817  : public RuntimeObject
{
	// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.GatewayIPAddressInformation> System.Net.NetworkInformation.GatewayIPAddressInformationCollection::addresses
	Collection_1_tAA30BCAC05A7C0F54CEE311DF69028C96E69A079* ___addresses_0;
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

// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_tEA1FAB768B2682B0A780F86906B34621615F84E4  : public RuntimeObject
{
	// System.Collections.ObjectModel.Collection`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::addresses
	Collection_1_tE48AA187F55CD76B677887F9A9BD63FFBB70312B* ___addresses_0;
};

// System.Net.NetworkInformation.IPAddressInformation
struct IPAddressInformation_t88AEE176C5711B91C890536A43B17C95690A07A7  : public RuntimeObject
{
};

// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490  : public RuntimeObject
{
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;
};

// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F  : public RuntimeObject
{
};

// System.Net.NetworkInformation.MulticastIPAddressInformationCollection
struct MulticastIPAddressInformationCollection_tB4734B1163743DBD810D1FB60F5CC802CD4919EC  : public RuntimeObject
{
	// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.MulticastIPAddressInformation> System.Net.NetworkInformation.MulticastIPAddressInformationCollection::addresses
	Collection_1_t6D25CA1BEFBE57DC6CF6A38063C10C0FA80C2DDC* ___addresses_0;
};

// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A  : public RuntimeObject
{
};

// System.Net.NetworkInformation.PhysicalAddress
struct PhysicalAddress_tBD58CB2A171D8DEFF0C882DE988D2D446EF40DEB  : public RuntimeObject
{
	// System.Byte[] System.Net.NetworkInformation.PhysicalAddress::address
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address_0;
	// System.Boolean System.Net.NetworkInformation.PhysicalAddress::changed
	bool ___changed_1;
	// System.Int32 System.Net.NetworkInformation.PhysicalAddress::hash
	int32_t ___hash_2;
};

struct PhysicalAddress_tBD58CB2A171D8DEFF0C882DE988D2D446EF40DEB_StaticFields
{
	// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.PhysicalAddress::None
	PhysicalAddress_tBD58CB2A171D8DEFF0C882DE988D2D446EF40DEB* ___None_3;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
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

// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_tB4D61C9127DFB4168CA3855020CCEB59B75C6EDA  : public RuntimeObject
{
	// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::addresses
	Collection_1_tFCFDED5321BE15CA8D30D61CF04DDE693BB0CB5B* ___addresses_0;
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

// UdpKit.UdpIPv4Address/Comparer
struct Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186  : public RuntimeObject
{
};

struct Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_StaticFields
{
	// UdpKit.UdpIPv4Address/Comparer UdpKit.UdpIPv4Address/Comparer::Instance
	Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186* ___Instance_0;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.String>
struct Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	String_t* ____current_3;
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

// UdpKit.Platform.DotNet.Utils.DotNetInterface
struct DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C  : public UdpPlatformInterface_t4857820E718813541D2A62687507A3FCCD783C94
{
	// System.String UdpKit.Platform.DotNet.Utils.DotNetInterface::name
	String_t* ___name_1;
	// UdpKit.Platform.UdpLinkType UdpKit.Platform.DotNet.Utils.DotNetInterface::linkType
	int32_t ___linkType_2;
	// System.Byte[] UdpKit.Platform.DotNet.Utils.DotNetInterface::physicalAddress
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___physicalAddress_3;
	// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::gatewayAddresses
	UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* ___gatewayAddresses_4;
	// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::unicastAddresses
	UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* ___unicastAddresses_5;
	// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::multicastAddresses
	UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* ___multicastAddresses_6;
};

// UdpKit.Platform.DotNetPlatform
struct DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E  : public UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF
{
	// UdpKit.UdpConfig UdpKit.Platform.DotNetPlatform::_config
	UdpConfig_t40D9E5EC737F64EFB5C8E3E40B6DC256350DDCCA* ____config_2;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// System.Net.NetworkInformation.MulticastIPAddressInformation
struct MulticastIPAddressInformation_tFC4BE9DB7286942FF9734B4C3928FEAECD331B98  : public IPAddressInformation_t88AEE176C5711B91C890536A43B17C95690A07A7
{
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

// System.Net.NetworkInformation.UnicastIPAddressInformation
struct UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3  : public IPAddressInformation_t88AEE176C5711B91C890536A43B17C95690A07A7
{
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

// System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>
struct Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ____current_3;
};

// UdpKit.Platform.DotNetSocket
struct DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624  : public UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8
{
	// System.String UdpKit.Platform.DotNetSocket::error
	String_t* ___error_1;
	// System.Net.Sockets.Socket UdpKit.Platform.DotNetSocket::socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_2;
	// UdpKit.Platform.DotNetPlatform UdpKit.Platform.DotNetSocket::platform
	DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* ___platform_3;
	// System.Net.EndPoint UdpKit.Platform.DotNetSocket::recvEndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___recvEndPoint_4;
	// UdpKit.UdpEndPoint UdpKit.Platform.DotNetSocket::endpoint
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint_5;
};

struct DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_StaticFields
{
	// System.Byte[] UdpKit.Platform.DotNetSocket::PING_DATA
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PING_DATA_6;
	// UdpKit.UdpEndPoint UdpKit.Platform.DotNetSocket::PING_TARGET_4
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___PING_TARGET_4_7;
	// UdpKit.UdpEndPoint UdpKit.Platform.DotNetSocket::PING_TARGET_6
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___PING_TARGET_6_8;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_18;
};

// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B  : public Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9
{
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___m_EndPoint_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080  : public RuntimeArray
{
	ALIGN_FIELD (8) NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* m_Items[1];

	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UdpKit.UdpIPv4Address[]
struct UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731  : public RuntimeArray
{
	ALIGN_FIELD (8) UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 m_Items[1];

	inline UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 value)
	{
		m_Items[index] = value;
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


// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB66C9A7D9D641504EAEB5FA9187D3BBD981463E7_gshared (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6D923FE9DB1E14374E913323F2EE88287755EDB9_gshared (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFB5B3B40F26D40ADF0CD1710EAC16841C1E5B66A_gshared_inline (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6 List_1_GetEnumerator_mC86F1A6CC0DE9EB06BDBA6189AF0AA3693CFBDA6_gshared (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m88ED9DCE7F550C8A6D4D5DF7652F7790813E5EC5_gshared (Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 Enumerator_get_Current_mBF7FBFFD1F2788C9243520BAF7518757ABF22320_gshared_inline (Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m66CC40CC30B064D227ADB54EDE525EC305BB1BCC_gshared_inline (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD86A3FAF382C03D3141EDF9CF25FA3E5074D2BB6_gshared (Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 List_1_get_Item_mB1D0FB4A2CE210A04588DE9BC4CF1783263EB45F_gshared (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_gshared (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mEC07AC6F1E9F3AD3530280ADE0AF766636DC18EA_gshared (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m06A3DD667AA8C5A419E5D5FAD7B60332D5C17CF6_gshared_inline (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_gshared_inline (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m52160B38797B737DCCEFFAB39ABEE7391637C6B5_gshared (HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m11B9F40360C6E76E7EC06C8F40EF94BAFBA3EBD0_gshared (HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE9CE13827AA770B7A5E37CFCB3608C1282129C4A_gshared (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m505777F7D52B7490B54E36C419926D16A9B6D8DA_gshared (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE_gshared (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mCCF252D8C6DF0A809A2E290DB6420EF08E29EE8F_gshared_inline (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<UdpKit.UdpIPv4Address>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* Enumerable_ToArray_TisUdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_mFE92AC379D6D2F5B96FCC7AE91625EB03283AE3A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD6AA1519DCE177D3AD03EFBC605AE1B3FCF4B339_gshared (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* __this, const RuntimeMethod* method) ;

// System.Void UdpKit.Platform.UdpPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform__ctor_m46DB9E65E17B405BAAD784DC9364057F762A259D (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::.ctor()
inline void List_1__ctor_mB66C9A7D9D641504EAEB5FA9187D3BBD981463E7 (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8*, const RuntimeMethod*))List_1__ctor_mB66C9A7D9D641504EAEB5FA9187D3BBD981463E7_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::FindBroadcastAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* DotNetPlatformUtils_FindBroadcastAddress_m287A4E26ECF4213012F75EE2BE6ACDE6B8CEFAF7 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m6D923FE9DB1E14374E913323F2EE88287755EDB9 (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6D923FE9DB1E14374E913323F2EE88287755EDB9_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::get_Count()
inline int32_t List_1_get_Count_mFB5B3B40F26D40ADF0CD1710EAC16841C1E5B66A_inline (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8*, const RuntimeMethod*))List_1_get_Count_mFB5B3B40F26D40ADF0CD1710EAC16841C1E5B66A_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::GetEnumerator()
inline Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6 List_1_GetEnumerator_mC86F1A6CC0DE9EB06BDBA6189AF0AA3693CFBDA6 (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6 (*) (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*, const RuntimeMethod*))List_1_GetEnumerator_mC86F1A6CC0DE9EB06BDBA6189AF0AA3693CFBDA6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::Dispose()
inline void Enumerator_Dispose_m88ED9DCE7F550C8A6D4D5DF7652F7790813E5EC5 (Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6*, const RuntimeMethod*))Enumerator_Dispose_m88ED9DCE7F550C8A6D4D5DF7652F7790813E5EC5_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::get_Current()
inline UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 Enumerator_get_Current_mBF7FBFFD1F2788C9243520BAF7518757ABF22320_inline (Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6* __this, const RuntimeMethod* method)
{
	return ((  UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 (*) (Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6*, const RuntimeMethod*))Enumerator_get_Current_mBF7FBFFD1F2788C9243520BAF7518757ABF22320_gshared_inline)(__this, method);
}
// System.Boolean UdpKit.UdpIPv4Address::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsPrivate_mE6B8FC641FED77D827899373F994ECF40E8683D6 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::Add(T)
inline void List_1_Add_m66CC40CC30B064D227ADB54EDE525EC305BB1BCC_inline (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8*, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789, const RuntimeMethod*))List_1_Add_m66CC40CC30B064D227ADB54EDE525EC305BB1BCC_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::MoveNext()
inline bool Enumerator_MoveNext_mD86A3FAF382C03D3141EDF9CF25FA3E5074D2BB6 (Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6*, const RuntimeMethod*))Enumerator_MoveNext_mD86A3FAF382C03D3141EDF9CF25FA3E5074D2BB6_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::get_Item(System.Int32)
inline UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 List_1_get_Item_mB1D0FB4A2CE210A04588DE9BC4CF1783263EB45F (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 (*) (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8*, int32_t, const RuntimeMethod*))List_1_get_Item_mB1D0FB4A2CE210A04588DE9BC4CF1783263EB45F_gshared)(__this, ___index0, method);
}
// System.Void UdpKit.Platform.DotNetSocket::.ctor(UdpKit.Platform.DotNetPlatform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket__ctor_mD8B6586400B4D9418775CC84DEC2A2B51003C0BD (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* ___platform0, bool ___ipv61, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface>::.ctor()
inline void List_1__ctor_mD808B216A565AEC0123038509D95A9E636859290 (List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.NetworkInterface::GetAllNetworkInterfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* NetworkInterface_GetAllNetworkInterfaces_m4E5A4AAEED8B11868BDC8F78975460D9B6F3CD70 (const RuntimeMethod* method) ;
// UdpKit.Platform.DotNet.Utils.DotNetInterface UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ParseInterface(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* DotNetPlatformUtils_ParseInterface_m5186C756D1AE559F8983E2A77F90D8A49E38DE00 (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface>::Add(T)
inline void List_1_Add_mC785E6DC504AAFAD3683C80D30A23697BA0AE443_inline (List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* __this, UdpPlatformInterface_t4857820E718813541D2A62687507A3FCCD783C94* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289*, UdpPlatformInterface_t4857820E718813541D2A62687507A3FCCD783C94*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UdpKit.UdpLog::Error(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Error_m185B1CCFC22834B75144250038F62D0B4BE25847 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::.ctor()
inline void List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7 (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*, const RuntimeMethod*))List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ResolveHostAddressesViaHostName(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* DotNetPlatformUtils_ResolveHostAddressesViaHostName_m6494682C4AFB739F527014A7B35A357D901476C4 (int32_t ___port0, bool ___ipv61, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mEC07AC6F1E9F3AD3530280ADE0AF766636DC18EA (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mEC07AC6F1E9F3AD3530280ADE0AF766636DC18EA_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::get_Count()
inline int32_t List_1_get_Count_m06A3DD667AA8C5A419E5D5FAD7B60332D5C17CF6_inline (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*, const RuntimeMethod*))List_1_get_Count_m06A3DD667AA8C5A419E5D5FAD7B60332D5C17CF6_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ResolveHostLocalAddressViaNetworkInterfaces(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* DotNetPlatformUtils_ResolveHostLocalAddressViaNetworkInterfaces_m2F8BD682943A55417FD0B31B6DDC97211ECDFFC7 (int32_t ___port0, bool ___ipv61, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.UdpPlatform::ResolveHostAddresses(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* UdpPlatform_ResolveHostAddresses_m10E3537F3072C77B3899A3528FD304EA85BA4D98 (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, int32_t ___port0, bool ___ipv61, const RuntimeMethod* method) ;
// System.UInt32 UdpKit.Utils.PrecisionTimer::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PrecisionTimer_GetCurrentTime_mAAD6A79E9242D0A994B553068ED836D38B8429DE (const RuntimeMethod* method) ;
// System.Void UdpKit.Platform.UdpPlatformSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatformSocket__ctor_m9176F8F020D9F899E035D33421A6563BE4D62AF1 (UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::set_DualMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_DualMode_m08152574129C01AC8941AAB43752C3CD1525C193 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_Blocking_mAE329D3DA788B19FDDC6B773F5B0A1C31FBE9A7B (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UdpKit.Platform.DotNetSocket::HandleSocketException(System.Net.Sockets.SocketException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_HandleSocketException_mD1A46F770B6C2F8E89DEA0FADA4143CDF31DE60D (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* ___exn0, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::get_IsBound()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_IsBound_m6CA0A4232291A7A0B99FCE2E5662A576D31A0A9D_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.Platform.DotNetSocket::VerifyIsBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_VerifyIsBound_m887ACBA77C783E6E3EFC223644E0D28A59A99733 (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::get_EnableBroadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_EnableBroadcast_mDC40C78B173A146FA2066955925DF17AE61786DD (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::set_EnableBroadcast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_EnableBroadcast_m8C25D9941F2D9BD40277F8D3395400993F4CF1CF (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Net.IPEndPoint UdpKit.Utils.UdpEndPointExtensions::ConvertToIPEndPoint(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* UdpEndPointExtensions_ConvertToIPEndPoint_m88978E6F66606170977F90AA760204C37593A1B6 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___localEP0, const RuntimeMethod* method) ;
// System.Int32 UdpKit.Platform.UdpPlatformSocket::SendTo(System.Byte[],UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UdpPlatformSocket_SendTo_m1E8B609DF7AA080F760A92FDB8A796AED3483384 (UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint1, const RuntimeMethod* method) ;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* Socket_get_LocalEndPoint_m3A2B4E60F0096E2DB31F7C28EF3CDE148D256E26 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// UdpKit.UdpEndPoint UdpKit.Utils.UdpEndPointExtensions::ConvertToUdpEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpEndPointExtensions_ConvertToUdpEndPoint_m164368CB9050AB7A20BDBBA7783C43DB550E9D35 (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___endpoint0, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_Poll_m65D8E383FBE5A1D4A115942182620422B6646B98 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___microSeconds0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_ReceiveFrom_m780282028E62CDD6021E3B8917656AC820878E6E (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564** ___remoteEP4, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_SendTo_m07A6D82F7ABD61B6B9C87931035FCF793AA3D6F6 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEP4, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6 (SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpLog::Warn(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// UdpKit.UdpEndPoint UdpKit.UdpEndPoint::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 UdpEndPoint_Parse_m3AFACC3B0307E6D867AF3A5734D8E958D8969445 (String_t* ___endpoint0, const RuntimeMethod* method) ;
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083 (const RuntimeMethod* method) ;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method) ;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 UdpIPv6Address_Parse_mF6E37F485B13FA941B9481646F9786D8B4AE5E7A (String_t* ___address0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv6Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 ___address0, uint16_t ___port1, const RuntimeMethod* method) ;
// System.Boolean UdpKit.UdpEndPoint::get_IsLan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_get_IsLan_m247D9C829F3C34A272B48D875702D3526D8F48F7 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::Add(T)
inline void List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_inline (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, const RuntimeMethod*))List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_gshared_inline)(__this, ___item0, method);
}
// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 UdpIPv4Address_Parse_m3CF827562441B8EF9C2D8A5586BF570D7AB213E2 (String_t* ___address0, const RuntimeMethod* method) ;
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv4Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270 (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___address0, uint16_t ___port1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>::.ctor()
inline void HashSet_1__ctor_m52160B38797B737DCCEFFAB39ABEE7391637C6B5 (HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A*, const RuntimeMethod*))HashSet_1__ctor_m52160B38797B737DCCEFFAB39ABEE7391637C6B5_gshared)(__this, method);
}
// System.Boolean UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ValidType(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatformUtils_ValidType_mC107FBA8DD132ECBE09DCDEB8856B4A89E85F76D (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1<System.String> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::GetIpsFromNetworkInterface(System.Net.NetworkInformation.NetworkInterface,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* DotNetPlatformUtils_GetIpsFromNetworkInterface_m181735C8DF60E36B447F28ED94B9921CC2256BC6 (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, bool ___ipv61, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
inline Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0 (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_inline (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>::Add(T)
inline bool HashSet_1_Add_m11B9F40360C6E76E7EC06C8F40EF94BAFBA3EBD0 (HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A*, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2, const RuntimeMethod*))HashSet_1_Add_m11B9F40360C6E76E7EC06C8F40EF94BAFBA3EBD0_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mE9CE13827AA770B7A5E37CFCB3608C1282129C4A (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE9CE13827AA770B7A5E37CFCB3608C1282129C4A_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
inline void HashSet_1__ctor_m505777F7D52B7490B54E36C419926D16A9B6D8DA (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m505777F7D52B7490B54E36C419926D16A9B6D8DA_gshared)(__this, ___comparer0, method);
}
// UdpKit.UdpIPv4Address UdpKit.Utils.UdpEndPointExtensions::ConvertToUdpIPv4Address(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 UdpEndPointExtensions_ConvertToUdpIPv4Address_mD07E1C30CA1D4883DD64AF41E992286121C10DF6 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::Add(T)
inline bool HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14*, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789, const RuntimeMethod*))HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE_gshared)(__this, ___item0, method);
}
// System.Void UdpKit.UdpIPv4Address::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv4Address__ctor_m0C93D659D8EF2FF0DE7D24FAFA36B4D41E1A9AD2 (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789* __this, uint8_t ___a0, uint8_t ___b1, uint8_t ___c2, uint8_t ___d3, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::get_Count()
inline int32_t HashSet_1_get_Count_mCCF252D8C6DF0A809A2E290DB6420EF08E29EE8F_inline (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14*, const RuntimeMethod*))HashSet_1_get_Count_mCCF252D8C6DF0A809A2E290DB6420EF08E29EE8F_gshared_inline)(__this, method);
}
// TSource[] System.Linq.Enumerable::ToArray<UdpKit.UdpIPv4Address>(System.Collections.Generic.IEnumerable`1<TSource>)
inline UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* Enumerable_ToArray_TisUdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_mFE92AC379D6D2F5B96FCC7AE91625EB03283AE3A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisUdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_mFE92AC379D6D2F5B96FCC7AE91625EB03283AE3A_gshared)(___source0, method);
}
// System.Void UdpKit.Platform.DotNet.Utils.DotNetInterface::.ctor(System.Net.NetworkInformation.NetworkInterface,UdpKit.UdpIPv4Address[],UdpKit.UdpIPv4Address[],UdpKit.UdpIPv4Address[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetInterface__ctor_m48B0751A3868E636AD7A2D7F74272BE6B1BA84DE (DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* __this, NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* ___gw1, UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* ___uni2, UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* ___multi3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::.ctor()
inline void HashSet_1__ctor_mD6AA1519DCE177D3AD03EFBC605AE1B3FCF4B339 (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14*, const RuntimeMethod*))HashSet_1__ctor_mD6AA1519DCE177D3AD03EFBC605AE1B3FCF4B339_gshared)(__this, method);
}
// System.Boolean UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::IsValidInterface(System.Net.NetworkInformation.IPInterfaceProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatformUtils_IsValidInterface_mF93CAF19D7014472CFC74209C6A21946743BF508 (IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* ___p0, const RuntimeMethod* method) ;
// System.Byte[] System.Net.IPAddress::GetAddressBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UdpKit.Platform.UdpPlatformInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatformInterface__ctor_mEC3E8EA05F64748FA78D9442D2972DB1B9B63439 (UdpPlatformInterface_t4857820E718813541D2A62687507A3FCCD783C94* __this, const RuntimeMethod* method) ;
// System.String UdpKit.Platform.DotNet.Utils.DotNetInterface::ParseName(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotNetInterface_ParseName_m5A7285622D0F0950A9AE68DBFDFF3A9FDCA40C5B (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, const RuntimeMethod* method) ;
// UdpKit.Platform.UdpLinkType UdpKit.Platform.DotNet.Utils.DotNetInterface::ParseLinkType(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetInterface_ParseLinkType_m53EF129013582637B9E7F1E53CE1DC1088F6992D (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, const RuntimeMethod* method) ;
// System.Byte[] UdpKit.Platform.DotNet.Utils.DotNetInterface::ParsePhysicalAddress(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DotNetInterface_ParsePhysicalAddress_m5316974C84191CB7D4ACA3074A152CE62EA3CAE5 (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, const RuntimeMethod* method) ;
// System.Byte[] System.Net.NetworkInformation.PhysicalAddress::GetAddressBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PhysicalAddress_GetAddressBytes_m580AD31C035F8FA177C2BBADF8196EBFAD400F1B (PhysicalAddress_tBD58CB2A171D8DEFF0C882DE988D2D446EF40DEB* __this, const RuntimeMethod* method) ;
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
// System.Boolean UdpKit.Platform.DotNetPlatform::get_SessionListProvidedExternally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatform_get_SessionListProvidedExternally_m5C8ECC8C3953657BB57488BA7518C8588444926D (DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean UdpKit.Platform.DotNetPlatform::get_SupportsBroadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatform_get_SupportsBroadcast_m6BF1628B14C4F4C8622B0FC2499097C180C2BFCC (DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean UdpKit.Platform.DotNetPlatform::get_SupportsMasterServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatform_get_SupportsMasterServer_mFC58B54C72B9ED29E4085937AD1F7FDAE234B5D7 (DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Void UdpKit.Platform.DotNetPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetPlatform__ctor_m71BCFA9329EED2C5F1C9AA29844E727EADEA5B7C (DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* __this, const RuntimeMethod* method) 
{
	{
		UdpPlatform__ctor_m46DB9E65E17B405BAAD784DC9364057F762A259D(__this, NULL);
		uint32_t L_0;
		L_0 = VirtualFuncInvoker0< uint32_t >::Invoke(31 /* System.UInt32 UdpKit.Platform.UdpPlatform::GetPrecisionTime() */, __this);
		return;
	}
}
// UdpKit.UdpSessionSource UdpKit.Platform.DotNetPlatform::GetSessionSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetPlatform_GetSessionSource_m20AAB60E059433C1A14C64C70CFE54917227446B (DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(0);
	}
}
// UdpKit.UdpIPv4Address UdpKit.Platform.DotNetPlatform::GetBroadcastAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 DotNetPlatform_GetBroadcastAddress_mAA86A8B580E76FF37553E6866837A23306F2816B (DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m88ED9DCE7F550C8A6D4D5DF7652F7790813E5EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD86A3FAF382C03D3141EDF9CF25FA3E5074D2BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBF7FBFFD1F2788C9243520BAF7518757ABF22320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m6D923FE9DB1E14374E913323F2EE88287755EDB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m66CC40CC30B064D227ADB54EDE525EC305BB1BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC86F1A6CC0DE9EB06BDBA6189AF0AA3693CFBDA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB66C9A7D9D641504EAEB5FA9187D3BBD981463E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFB5B3B40F26D40ADF0CD1710EAC16841C1E5B66A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB1D0FB4A2CE210A04588DE9BC4CF1783263EB45F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* V_0 = NULL;
	bool V_1 = false;
	Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	{
		List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* L_0 = (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8*)il2cpp_codegen_object_new(List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB66C9A7D9D641504EAEB5FA9187D3BBD981463E7(L_0, List_1__ctor_mB66C9A7D9D641504EAEB5FA9187D3BBD981463E7_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* L_1 = V_0;
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_2;
		L_2 = DotNetPlatformUtils_FindBroadcastAddress_m287A4E26ECF4213012F75EE2BE6ACDE6B8CEFAF7(NULL);
		NullCheck(L_1);
		List_1_AddRange_m6D923FE9DB1E14374E913323F2EE88287755EDB9(L_1, L_2, List_1_AddRange_m6D923FE9DB1E14374E913323F2EE88287755EDB9_RuntimeMethod_var);
		List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mFB5B3B40F26D40ADF0CD1710EAC16841C1E5B66A_inline(L_3, List_1_get_Count_mFB5B3B40F26D40ADF0CD1710EAC16841C1E5B66A_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0083;
		}
	}
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_6;
		L_6 = VirtualFuncInvoker2< List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*, int32_t, bool >::Invoke(23 /* System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.UdpPlatform::ResolveHostAddresses(System.Int32,System.Boolean) */, __this, 1, (bool)0);
		NullCheck(L_6);
		Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6 L_7;
		L_7 = List_1_GetEnumerator_mC86F1A6CC0DE9EB06BDBA6189AF0AA3693CFBDA6(L_6, List_1_GetEnumerator_mC86F1A6CC0DE9EB06BDBA6189AF0AA3693CFBDA6_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m88ED9DCE7F550C8A6D4D5DF7652F7790813E5EC5((&V_2), Enumerator_Dispose_m88ED9DCE7F550C8A6D4D5DF7652F7790813E5EC5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0068_1;
			}

IL_0032_1:
			{
				UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_8;
				L_8 = Enumerator_get_Current_mBF7FBFFD1F2788C9243520BAF7518757ABF22320_inline((&V_2), Enumerator_get_Current_mBF7FBFFD1F2788C9243520BAF7518757ABF22320_RuntimeMethod_var);
				V_3 = L_8;
				UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_9 = V_3;
				UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_10 = L_9.___Address_5;
				V_4 = L_10;
				(&V_4)->___Byte0_4 = (uint8_t)((int32_t)255);
				bool L_11;
				L_11 = UdpIPv4Address_get_IsPrivate_mE6B8FC641FED77D827899373F994ECF40E8683D6((&V_4), NULL);
				V_5 = L_11;
				bool L_12 = V_5;
				if (!L_12)
				{
					goto IL_0067_1;
				}
			}
			{
				List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* L_13 = V_0;
				UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_14 = V_4;
				NullCheck(L_13);
				List_1_Add_m66CC40CC30B064D227ADB54EDE525EC305BB1BCC_inline(L_13, L_14, List_1_Add_m66CC40CC30B064D227ADB54EDE525EC305BB1BCC_RuntimeMethod_var);
			}

IL_0067_1:
			{
			}

IL_0068_1:
			{
				bool L_15;
				L_15 = Enumerator_MoveNext_mD86A3FAF382C03D3141EDF9CF25FA3E5074D2BB6((&V_2), Enumerator_MoveNext_mD86A3FAF382C03D3141EDF9CF25FA3E5074D2BB6_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0082;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
	}

IL_0083:
	{
		List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mFB5B3B40F26D40ADF0CD1710EAC16841C1E5B66A_inline(L_16, List_1_get_Count_mFB5B3B40F26D40ADF0CD1710EAC16841C1E5B66A_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* L_18 = V_0;
		NullCheck(L_18);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_19;
		L_19 = List_1_get_Item_mB1D0FB4A2CE210A04588DE9BC4CF1783263EB45F(L_18, 0, List_1_get_Item_mB1D0FB4A2CE210A04588DE9BC4CF1783263EB45F_RuntimeMethod_var);
		G_B13_0 = L_19;
		goto IL_0099;
	}

IL_0094:
	{
		il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_20 = ((UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var))->___Any_0;
		G_B13_0 = L_20;
	}

IL_0099:
	{
		V_6 = G_B13_0;
		goto IL_009d;
	}

IL_009d:
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_21 = V_6;
		return L_21;
	}
}
// UdpKit.Platform.UdpPlatformSocket UdpKit.Platform.DotNetPlatform::CreateSocket(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* DotNetPlatform_CreateSocket_m0C1A031782E31725F6B9FAE14B3F282DD6E61008 (DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* __this, bool ___ipv60, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* V_0 = NULL;
	{
		bool L_0 = ___ipv60;
		DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* L_1 = (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624*)il2cpp_codegen_object_new(DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DotNetSocket__ctor_mD8B6586400B4D9418775CC84DEC2A2B51003C0BD(L_1, __this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface> UdpKit.Platform.DotNetPlatform::GetNetworkInterfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* DotNetPlatform_GetNetworkInterfaces_mD72E893C2A23C62F66AEF1258A1A26096EFFD046 (DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC785E6DC504AAFAD3683C80D30A23697BA0AE443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD808B216A565AEC0123038509D95A9E636859290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* V_0 = NULL;
	NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* V_1 = NULL;
	int32_t V_2 = 0;
	NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* V_3 = NULL;
	DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
	Exception_t* V_9 = NULL;
	List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B6_0 = 0;
	{
		List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* L_0 = (List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289*)il2cpp_codegen_object_new(List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD808B216A565AEC0123038509D95A9E636859290(L_0, List_1__ctor_mD808B216A565AEC0123038509D95A9E636859290_RuntimeMethod_var);
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_1;
			L_1 = NetworkInterface_GetAllNetworkInterfaces_m4E5A4AAEED8B11868BDC8F78975460D9B6F3CD70(NULL);
			V_1 = L_1;
			V_2 = 0;
			goto IL_008b_1;
		}

IL_0013_1:
		{
			NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_2 = V_1;
			int32_t L_3 = V_2;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_3 = L_5;
		}
		try
		{// begin try (depth: 2)
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_6 = V_3;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_6);
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0030_2;
				}
			}
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_8 = V_3;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_8);
				G_B6_0 = ((((int32_t)((((int32_t)L_9) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_0031_2;
			}

IL_0030_2:
			{
				G_B6_0 = 0;
			}

IL_0031_2:
			{
				V_5 = (bool)G_B6_0;
				bool L_10 = V_5;
				if (!L_10)
				{
					goto IL_003a_2;
				}
			}
			{
				goto IL_0087_1;
			}

IL_003a_2:
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_11 = V_3;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_11);
				V_6 = (bool)((((int32_t)L_12) == ((int32_t)((int32_t)24)))? 1 : 0);
				bool L_13 = V_6;
				if (!L_13)
				{
					goto IL_004d_2;
				}
			}
			{
				goto IL_0087_1;
			}

IL_004d_2:
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_14 = V_3;
				DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* L_15;
				L_15 = DotNetPlatformUtils_ParseInterface_m5186C756D1AE559F8983E2A77F90D8A49E38DE00(L_14, NULL);
				V_4 = L_15;
				DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* L_16 = V_4;
				V_7 = (bool)((!(((RuntimeObject*)(DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_17 = V_7;
				if (!L_17)
				{
					goto IL_006b_2;
				}
			}
			{
				List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* L_18 = V_0;
				DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* L_19 = V_4;
				NullCheck(L_18);
				List_1_Add_mC785E6DC504AAFAD3683C80D30A23697BA0AE443_inline(L_18, L_19, List_1_Add_mC785E6DC504AAFAD3683C80D30A23697BA0AE443_RuntimeMethod_var);
			}

IL_006b_2:
			{
				goto IL_0086_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_006e_1;
			}
			throw e;
		}

CATCH_006e_1:
		{// begin catch(System.Exception)
			V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_20 = V_8;
			NullCheck(L_20);
			String_t* L_21;
			L_21 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_20);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22;
			L_22 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var)));
			UdpLog_Error_m185B1CCFC22834B75144250038F62D0B4BE25847(L_21, L_22, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0086_1;
		}// end catch (depth: 2)

IL_0086_1:
		{
		}

IL_0087_1:
		{
			int32_t L_23 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		}

IL_008b_1:
		{
			int32_t L_24 = V_2;
			NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_25 = V_1;
			NullCheck(L_25);
			if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_00ac;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0094;
		}
		throw e;
	}

CATCH_0094:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_26 = V_9;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28;
		L_28 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var)));
		UdpLog_Error_m185B1CCFC22834B75144250038F62D0B4BE25847(L_27, L_28, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ac;
	}// end catch (depth: 1)

IL_00ac:
	{
		List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* L_29 = V_0;
		V_10 = L_29;
		goto IL_00b1;
	}

IL_00b1:
	{
		List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* L_30 = V_10;
		return L_30;
	}
}
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.DotNetPlatform::ResolveHostAddresses(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* DotNetPlatform_ResolveHostAddresses_m7303D94C5459F0455299954A89D610A781B6DC84 (DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* __this, int32_t ___port0, bool ___ipv61, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mEC07AC6F1E9F3AD3530280ADE0AF766636DC18EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m06A3DD667AA8C5A419E5D5FAD7B60332D5C17CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* V_5 = NULL;
	int32_t G_B6_0 = 0;
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* G_B11_0 = NULL;
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_0 = (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*)il2cpp_codegen_object_new(List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7(L_0, List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_1 = V_0;
		int32_t L_2 = ___port0;
		bool L_3 = ___ipv61;
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_4;
		L_4 = DotNetPlatformUtils_ResolveHostAddressesViaHostName_m6494682C4AFB739F527014A7B35A357D901476C4(L_2, L_3, NULL);
		NullCheck(L_1);
		List_1_AddRange_mEC07AC6F1E9F3AD3530280ADE0AF766636DC18EA(L_1, L_4, List_1_AddRange_mEC07AC6F1E9F3AD3530280ADE0AF766636DC18EA_RuntimeMethod_var);
		V_1 = (bool)1;
		UdpConfig_t40D9E5EC737F64EFB5C8E3E40B6DC256350DDCCA* L_5 = __this->____config_2;
		NullCheck(L_5);
		int32_t L_6 = L_5->___CurrentPlatform_29;
		V_3 = L_6;
		int32_t L_7 = V_3;
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)32))))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0030;
	}

IL_002c:
	{
		V_1 = (bool)0;
		goto IL_0030;
	}

IL_0030:
	{
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m06A3DD667AA8C5A419E5D5FAD7B60332D5C17CF6_inline(L_10, List_1_get_Count_m06A3DD667AA8C5A419E5D5FAD7B60332D5C17CF6_RuntimeMethod_var);
		G_B6_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 0;
	}

IL_003f:
	{
		V_4 = (bool)G_B6_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_13 = V_0;
		int32_t L_14 = ___port0;
		bool L_15 = ___ipv61;
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_16;
		L_16 = DotNetPlatformUtils_ResolveHostLocalAddressViaNetworkInterfaces_m2F8BD682943A55417FD0B31B6DDC97211ECDFFC7(L_14, L_15, NULL);
		NullCheck(L_13);
		List_1_AddRange_mEC07AC6F1E9F3AD3530280ADE0AF766636DC18EA(L_13, L_16, List_1_AddRange_mEC07AC6F1E9F3AD3530280ADE0AF766636DC18EA_RuntimeMethod_var);
	}

IL_0055:
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m06A3DD667AA8C5A419E5D5FAD7B60332D5C17CF6_inline(L_17, List_1_get_Count_m06A3DD667AA8C5A419E5D5FAD7B60332D5C17CF6_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_19 = V_0;
		G_B11_0 = L_19;
		goto IL_0068;
	}

IL_0060:
	{
		int32_t L_20 = ___port0;
		bool L_21 = ___ipv61;
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_22;
		L_22 = UdpPlatform_ResolveHostAddresses_m10E3537F3072C77B3899A3528FD304EA85BA4D98(__this, L_20, L_21, NULL);
		G_B11_0 = L_22;
	}

IL_0068:
	{
		V_5 = G_B11_0;
		goto IL_006c;
	}

IL_006c:
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_23 = V_5;
		return L_23;
	}
}
// System.UInt32 UdpKit.Platform.DotNetPlatform::GetPrecisionTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DotNetPlatform_GetPrecisionTime_m72FF407A08AB0AF2CC59A838045B88BFCEF51B84 (DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var);
		uint32_t L_0;
		L_0 = PrecisionTimer_GetCurrentTime_mAAD6A79E9242D0A994B553068ED836D38B8429DE(NULL);
		return L_0;
	}
}
// System.Void UdpKit.Platform.DotNetPlatform::Configure(UdpKit.UdpConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetPlatform_Configure_m676B429EE040EBA1AE83845884BF1D7123F980C7 (DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* __this, UdpConfig_t40D9E5EC737F64EFB5C8E3E40B6DC256350DDCCA* ___config0, const RuntimeMethod* method) 
{
	{
		UdpConfig_t40D9E5EC737F64EFB5C8E3E40B6DC256350DDCCA* L_0 = ___config0;
		__this->____config_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____config_2), (void*)L_0);
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
// System.Void UdpKit.Platform.DotNetSocket::.ctor(UdpKit.Platform.DotNetPlatform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket__ctor_mD8B6586400B4D9418775CC84DEC2A2B51003C0BD (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* ___platform0, bool ___ipv61, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* G_B3_0 = NULL;
	DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* G_B4_1 = NULL;
	{
		UdpPlatformSocket__ctor_m9176F8F020D9F899E035D33421A6563BE4D62AF1(__this, NULL);
		DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* L_0 = ___platform0;
		__this->___platform_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platform_3), (void*)L_0);
	}
	try
	{// begin try (depth: 1)
		{
			bool L_1 = ___ipv61;
			G_B2_0 = __this;
			if (L_1)
			{
				G_B3_0 = __this;
				goto IL_0017_1;
			}
		}
		{
			G_B4_0 = 2;
			G_B4_1 = G_B2_0;
			goto IL_0019_1;
		}

IL_0017_1:
		{
			G_B4_0 = ((int32_t)23);
			G_B4_1 = G_B3_0;
		}

IL_0019_1:
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_2, G_B4_0, 2, ((int32_t)17), NULL);
			NullCheck(G_B4_1);
			G_B4_1->___socket_2 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___socket_2), (void*)L_2);
			bool L_3 = ___ipv61;
			V_0 = L_3;
			bool L_4 = V_0;
			if (!L_4)
			{
				goto IL_003a_1;
			}
		}
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5 = __this->___socket_2;
			NullCheck(L_5);
			Socket_set_DualMode_m08152574129C01AC8941AAB43752C3CD1525C193(L_5, (bool)1, NULL);
		}

IL_003a_1:
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_6 = __this->___socket_2;
			NullCheck(L_6);
			Socket_set_Blocking_mAE329D3DA788B19FDDC6B773F5B0A1C31FBE9A7B(L_6, (bool)0, NULL);
			goto IL_0057;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004a;
		}
		throw e;
	}

CATCH_004a:
	{// begin catch(System.Net.Sockets.SocketException)
		V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_7 = V_1;
		DotNetSocket_HandleSocketException_mD1A46F770B6C2F8E89DEA0FADA4143CDF31DE60D(__this, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0057;
	}// end catch (depth: 1)

IL_0057:
	{
		bool L_8 = ___ipv61;
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0071;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_10 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Any_5;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_11 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_11, L_10, 0, NULL);
		__this->___recvEndPoint_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recvEndPoint_4), (void*)L_11);
		goto IL_0084;
	}

IL_0071:
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_12 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_13 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_13, L_12, 0, NULL);
		__this->___recvEndPoint_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recvEndPoint_4), (void*)L_13);
	}

IL_0084:
	{
		return;
	}
}
// UdpKit.Platform.UdpPlatform UdpKit.Platform.DotNetSocket::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* DotNetSocket_get_Platform_mE06D2A10956946165CDA1854641F0022F683BBD0 (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, const RuntimeMethod* method) 
{
	UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* V_0 = NULL;
	{
		DotNetPlatform_t4B3871702D6AC283CD8D6DB9911293C98B9E989E* L_0 = __this->___platform_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* L_1 = V_0;
		return L_1;
	}
}
// System.String UdpKit.Platform.DotNetSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotNetSocket_get_Error_mC2807D620F97B741925EBF462B0EA8C9BF77FA1A (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___error_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UdpKit.Platform.DotNetSocket::get_IsBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetSocket_get_IsBound_mBF06C292090DC280E030B098BA89F292C101633C (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = __this->___socket_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Socket_get_IsBound_m6CA0A4232291A7A0B99FCE2E5662A576D31A0A9D_inline(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// UdpKit.UdpEndPoint UdpKit.Platform.DotNetSocket::get_EndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 DotNetSocket_get_EndPoint_m4F320D901E210E6230C7C1A0AC2A510FB2EAF9C1 (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, const RuntimeMethod* method) 
{
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DotNetSocket_VerifyIsBound_m887ACBA77C783E6E3EFC223644E0D28A59A99733(__this, NULL);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = __this->___endpoint_5;
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UdpKit.Platform.DotNetSocket::get_Broadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetSocket_get_Broadcast_mDD4367BDE6480BE8ACFB9942E9F153AC2D4C0F99 (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		DotNetSocket_VerifyIsBound_m887ACBA77C783E6E3EFC223644E0D28A59A99733(__this, NULL);
	}
	try
	{// begin try (depth: 1)
		__this->___error_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___error_1), (void*)(String_t*)NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = Socket_get_EnableBroadcast_mDC40C78B173A146FA2066955925DF17AE61786DD(L_0, NULL);
		V_0 = L_1;
		goto IL_002c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001e;
		}
		throw e;
	}

CATCH_001e:
	{// begin catch(System.Net.Sockets.SocketException)
		V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_2 = V_1;
		DotNetSocket_HandleSocketException_mD1A46F770B6C2F8E89DEA0FADA4143CDF31DE60D(__this, L_2, NULL);
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	}// end catch (depth: 1)

IL_002c:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UdpKit.Platform.DotNetSocket::set_Broadcast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_set_Broadcast_m9E0757546545F980FCD7756F550A3939AF164AFD (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, bool ___value0, const RuntimeMethod* method) 
{
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		DotNetSocket_VerifyIsBound_m887ACBA77C783E6E3EFC223644E0D28A59A99733(__this, NULL);
	}
	try
	{// begin try (depth: 1)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_2;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Socket_set_EnableBroadcast_m8C25D9941F2D9BD40277F8D3395400993F4CF1CF(L_0, L_1, NULL);
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Net.Sockets.SocketException)
		V_0 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		__this->___error_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___error_1), (void*)(String_t*)NULL);
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_2 = V_0;
		DotNetSocket_HandleSocketException_mD1A46F770B6C2F8E89DEA0FADA4143CDF31DE60D(__this, L_2, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002d;
	}// end catch (depth: 1)

IL_002d:
	{
		return;
	}
}
// System.Void UdpKit.Platform.DotNetSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_Close_mE75C62237F34973AB14580435D108E3FA1EC0B43 (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, const RuntimeMethod* method) 
{
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		DotNetSocket_VerifyIsBound_m887ACBA77C783E6E3EFC223644E0D28A59A99733(__this, NULL);
	}
	try
	{// begin try (depth: 1)
		__this->___error_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___error_1), (void*)(String_t*)NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_2;
		NullCheck(L_0);
		Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(L_0, NULL);
		goto IL_002c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001f;
		}
		throw e;
	}

CATCH_001f:
	{// begin catch(System.Net.Sockets.SocketException)
		V_0 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_1 = V_0;
		DotNetSocket_HandleSocketException_mD1A46F770B6C2F8E89DEA0FADA4143CDF31DE60D(__this, L_1, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	}// end catch (depth: 1)

IL_002c:
	{
		return;
	}
}
// System.Void UdpKit.Platform.DotNetSocket::Bind(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_Bind_mC549CAB382EFB008974497DD961EBDB859EE4289 (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___ep0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* G_B3_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* G_B2_1 = NULL;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_1 = NULL;
	DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* G_B4_2 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		{
			__this->___error_1 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___error_1), (void*)(String_t*)NULL);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_2;
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = ___ep0;
			il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
			IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_2;
			L_2 = UdpEndPointExtensions_ConvertToIPEndPoint_m88978E6F66606170977F90AA760204C37593A1B6(L_1, NULL);
			NullCheck(L_0);
			Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA(L_0, L_2, NULL);
			il2cpp_codegen_runtime_class_init_inline(DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_StaticFields*)il2cpp_codegen_static_fields_for(DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var))->___PING_DATA_6;
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_4 = ___ep0;
			bool L_5 = L_4.___IPv6_4;
			G_B2_0 = L_3;
			G_B2_1 = __this;
			if (L_5)
			{
				G_B3_0 = L_3;
				G_B3_1 = __this;
				goto IL_0030_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var);
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_6 = ((DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_StaticFields*)il2cpp_codegen_static_fields_for(DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var))->___PING_TARGET_4_7;
			G_B4_0 = L_6;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			goto IL_0035_1;
		}

IL_0030_1:
		{
			il2cpp_codegen_runtime_class_init_inline(DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var);
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_7 = ((DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_StaticFields*)il2cpp_codegen_static_fields_for(DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var))->___PING_TARGET_6_8;
			G_B4_0 = L_7;
			G_B4_1 = G_B3_0;
			G_B4_2 = G_B3_1;
		}

IL_0035_1:
		{
			NullCheck(G_B4_2);
			int32_t L_8;
			L_8 = UdpPlatformSocket_SendTo_m1E8B609DF7AA080F760A92FDB8A796AED3483384(G_B4_2, G_B4_1, G_B4_0, NULL);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9 = __this->___socket_2;
			NullCheck(L_9);
			EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_10;
			L_10 = Socket_get_LocalEndPoint_m3A2B4E60F0096E2DB31F7C28EF3CDE148D256E26(L_9, NULL);
			il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_11;
			L_11 = UdpEndPointExtensions_ConvertToUdpEndPoint_m164368CB9050AB7A20BDBBA7783C43DB550E9D35(L_10, NULL);
			__this->___endpoint_5 = L_11;
			goto IL_0061;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0054;
		}
		throw e;
	}

CATCH_0054:
	{// begin catch(System.Net.Sockets.SocketException)
		V_0 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_12 = V_0;
		DotNetSocket_HandleSocketException_mD1A46F770B6C2F8E89DEA0FADA4143CDF31DE60D(__this, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0061;
	}// end catch (depth: 1)

IL_0061:
	{
		return;
	}
}
// System.Boolean UdpKit.Platform.DotNetSocket::RecvPoll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetSocket_RecvPoll_m8FA85AC9CB290FC8105B4C2E273C0C811ADA1ACA (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = VirtualFuncInvoker1< bool, int32_t >::Invoke(13 /* System.Boolean UdpKit.Platform.UdpPlatformSocket::RecvPoll(System.Int32) */, __this, 0);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UdpKit.Platform.DotNetSocket::RecvPoll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetSocket_RecvPoll_mEE8BD8B748315F84DC59EF2FC6336C6CEA32238D (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, int32_t ___timeout0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_2;
		int32_t L_1 = ___timeout0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Socket_Poll_m65D8E383FBE5A1D4A115942182620422B6646B98(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)1000))), 0, NULL);
		V_0 = L_2;
		goto IL_0026;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{// begin catch(System.Net.Sockets.SocketException)
		V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_3 = V_1;
		DotNetSocket_HandleSocketException_mD1A46F770B6C2F8E89DEA0FADA4143CDF31DE60D(__this, L_3, NULL);
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	}// end catch (depth: 1)

IL_0026:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UdpKit.Platform.DotNetSocket::RecvFrom(System.Byte[],System.Int32,UdpKit.UdpEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetSocket_RecvFrom_m130D5AA28A55D7D4E5894CEE6141318D881B2FC5 (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___bufferSize1, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* ___remoteEndpoint2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
			int32_t L_2 = ___bufferSize1;
			EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564** L_3 = (&__this->___recvEndPoint_4);
			NullCheck(L_0);
			int32_t L_4;
			L_4 = Socket_ReceiveFrom_m780282028E62CDD6021E3B8917656AC820878E6E(L_0, L_1, 0, L_2, 0, L_3, NULL);
			V_0 = L_4;
			int32_t L_5 = V_0;
			V_1 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0036_1;
			}
		}
		{
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* L_7 = ___remoteEndpoint2;
			EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_8 = __this->___recvEndPoint_4;
			il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_9;
			L_9 = UdpEndPointExtensions_ConvertToUdpEndPoint_m164368CB9050AB7A20BDBBA7783C43DB550E9D35(L_8, NULL);
			*(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2*)L_7 = L_9;
			int32_t L_10 = V_0;
			V_2 = L_10;
			goto IL_0049;
		}

IL_0036_1:
		{
			V_2 = (-1);
			goto IL_0049;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003b;
		}
		throw e;
	}

CATCH_003b:
	{// begin catch(System.Net.Sockets.SocketException)
		V_3 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_11 = V_3;
		DotNetSocket_HandleSocketException_mD1A46F770B6C2F8E89DEA0FADA4143CDF31DE60D(__this, L_11, NULL);
		V_2 = (-1);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0049;
	}// end catch (depth: 1)

IL_0049:
	{
		int32_t L_12 = V_2;
		return L_12;
	}
}
// System.Int32 UdpKit.Platform.DotNetSocket::SendTo(System.Byte[],System.Int32,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetSocket_SendTo_m0C1C73172C5486DAA0CCD3D2BAB0B7EC4B89D6B4 (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___bytesToSend1, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___bytesToSend1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_3 = ___endpoint2;
		il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_4;
		L_4 = UdpEndPointExtensions_ConvertToIPEndPoint_m88978E6F66606170977F90AA760204C37593A1B6(L_3, NULL);
		NullCheck(L_0);
		int32_t L_5;
		L_5 = Socket_SendTo_m07A6D82F7ABD61B6B9C87931035FCF793AA3D6F6(L_0, L_1, 0, L_2, 0, L_4, NULL);
		V_0 = L_5;
		goto IL_0028;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Net.Sockets.SocketException)
		V_1 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_6 = V_1;
		DotNetSocket_HandleSocketException_mD1A46F770B6C2F8E89DEA0FADA4143CDF31DE60D(__this, L_6, NULL);
		V_0 = (-1);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0028;
	}// end catch (depth: 1)

IL_0028:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Void UdpKit.Platform.DotNetSocket::HandleSocketException(System.Net.Sockets.SocketException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_HandleSocketException_mD1A46F770B6C2F8E89DEA0FADA4143CDF31DE60D (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* ___exn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketError_t4AD3BECF393E3FD8C5238C4AE47B768B3ABC07B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_0 = ___exn0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)10054)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0058;
	}

IL_0015:
	{
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_3 = ___exn0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_3);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_6 = ___exn0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SocketException_get_SocketErrorCode_m84FB2D308F046A24A1355975F3BF689C988224C6(L_6, NULL);
		V_2 = L_7;
		Il2CppFakeBox<int32_t> L_8(SocketError_t4AD3BECF393E3FD8C5238C4AE47B768B3ABC07B8_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_5, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_9, NULL);
		__this->___error_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___error_1), (void*)L_10);
		String_t* L_11 = __this->___error_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var);
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(L_11, L_12, NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void UdpKit.Platform.DotNetSocket::VerifyIsBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_VerifyIsBound_m887ACBA77C783E6E3EFC223644E0D28A59A99733 (DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean UdpKit.Platform.UdpPlatformSocket::get_IsBound() */, __this);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DotNetSocket_VerifyIsBound_m887ACBA77C783E6E3EFC223644E0D28A59A99733_RuntimeMethod_var)));
	}

IL_0015:
	{
		return;
	}
}
// System.Void UdpKit.Platform.DotNetSocket::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket__cctor_mF051FE88C840776CE4DF0559C5A1EAA9076E1324 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7749A2A14D9C5D9E5B5A2D3FF748EE1ED757BB07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F808033127A3B2A6E71FBCD87EF430FB4905D69);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_StaticFields*)il2cpp_codegen_static_fields_for(DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var))->___PING_DATA_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_StaticFields*)il2cpp_codegen_static_fields_for(DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var))->___PING_DATA_6), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1;
		L_1 = UdpEndPoint_Parse_m3AFACC3B0307E6D867AF3A5734D8E958D8969445(_stringLiteral7749A2A14D9C5D9E5B5A2D3FF748EE1ED757BB07, NULL);
		((DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_StaticFields*)il2cpp_codegen_static_fields_for(DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var))->___PING_TARGET_4_7 = L_1;
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_2;
		L_2 = UdpEndPoint_Parse_m3AFACC3B0307E6D867AF3A5734D8E958D8969445(_stringLiteral8F808033127A3B2A6E71FBCD87EF430FB4905D69, NULL);
		((DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_StaticFields*)il2cpp_codegen_static_fields_for(DotNetSocket_tADE5A6894E27C03AF771AD9F4B8FA34DD1628624_il2cpp_TypeInfo_var))->___PING_TARGET_6_8 = L_2;
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
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ResolveHostAddressesViaHostName(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* DotNetPlatformUtils_ResolveHostAddressesViaHostName_m6494682C4AFB739F527014A7B35A357D901476C4 (int32_t ___port0, bool ___ipv61, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dns_tE6305F126E5677E1AFB444735257D41D0D0FE273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* V_0 = NULL;
	IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* V_1 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* V_2 = NULL;
	int32_t V_3 = 0;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_4 = NULL;
	bool V_5 = false;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_0 = (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*)il2cpp_codegen_object_new(List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7(L_0, List_1__ctor_m422110CED2DB065DFBBA25D48717DDDA486A02D7_RuntimeMethod_var);
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			il2cpp_codegen_runtime_class_init_inline(Dns_tE6305F126E5677E1AFB444735257D41D0D0FE273_il2cpp_TypeInfo_var);
			String_t* L_1;
			L_1 = Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083(NULL);
			IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_2;
			L_2 = Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53(L_1, NULL);
			V_1 = L_2;
			IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_3 = V_1;
			NullCheck(L_3);
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_4;
			L_4 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_3, NULL);
			V_2 = L_4;
			V_3 = 0;
			goto IL_00b8_1;
		}

IL_0022_1:
		{
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_5 = V_2;
			int32_t L_6 = V_3;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_4 = L_8;
			bool L_9 = ___ipv61;
			if (!L_9)
			{
				goto IL_0038_1;
			}
		}
		{
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_10 = V_4;
			NullCheck(L_10);
			int32_t L_11;
			L_11 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_10, NULL);
			G_B5_0 = ((((int32_t)L_11) == ((int32_t)((int32_t)23)))? 1 : 0);
			goto IL_0039_1;
		}

IL_0038_1:
		{
			G_B5_0 = 0;
		}

IL_0039_1:
		{
			V_5 = (bool)G_B5_0;
			bool L_12 = V_5;
			if (!L_12)
			{
				goto IL_006e_1;
			}
		}
		{
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_13 = V_4;
			NullCheck(L_13);
			String_t* L_14;
			L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
			il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
			UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_15;
			L_15 = UdpIPv6Address_Parse_mF6E37F485B13FA941B9481646F9786D8B4AE5E7A(L_14, NULL);
			int32_t L_16 = ___port0;
			UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3((&V_6), L_15, (uint16_t)((int32_t)(uint16_t)L_16), NULL);
			bool L_17;
			L_17 = UdpEndPoint_get_IsLan_m247D9C829F3C34A272B48D875702D3526D8F48F7((&V_6), NULL);
			V_7 = L_17;
			bool L_18 = V_7;
			if (!L_18)
			{
				goto IL_006d_1;
			}
		}
		{
			List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_19 = V_0;
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_20 = V_6;
			NullCheck(L_19);
			List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_inline(L_19, L_20, List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_RuntimeMethod_var);
		}

IL_006d_1:
		{
		}

IL_006e_1:
		{
			bool L_21 = ___ipv61;
			if (L_21)
			{
				goto IL_007d_1;
			}
		}
		{
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_22 = V_4;
			NullCheck(L_22);
			int32_t L_23;
			L_23 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_22, NULL);
			G_B12_0 = ((((int32_t)L_23) == ((int32_t)2))? 1 : 0);
			goto IL_007e_1;
		}

IL_007d_1:
		{
			G_B12_0 = 0;
		}

IL_007e_1:
		{
			V_8 = (bool)G_B12_0;
			bool L_24 = V_8;
			if (!L_24)
			{
				goto IL_00b3_1;
			}
		}
		{
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_25 = V_4;
			NullCheck(L_25);
			String_t* L_26;
			L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
			il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
			UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_27;
			L_27 = UdpIPv4Address_Parse_m3CF827562441B8EF9C2D8A5586BF570D7AB213E2(L_26, NULL);
			int32_t L_28 = ___port0;
			UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270((&V_9), L_27, (uint16_t)((int32_t)(uint16_t)L_28), NULL);
			bool L_29;
			L_29 = UdpEndPoint_get_IsLan_m247D9C829F3C34A272B48D875702D3526D8F48F7((&V_9), NULL);
			V_10 = L_29;
			bool L_30 = V_10;
			if (!L_30)
			{
				goto IL_00b2_1;
			}
		}
		{
			List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_31 = V_0;
			UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_32 = V_9;
			NullCheck(L_31);
			List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_inline(L_31, L_32, List_1_Add_mAF1772ACFAFB2829EE61EC32A846E54E55C16D0E_RuntimeMethod_var);
		}

IL_00b2_1:
		{
		}

IL_00b3_1:
		{
			int32_t L_33 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		}

IL_00b8_1:
		{
			int32_t L_34 = V_3;
			IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_35 = V_2;
			NullCheck(L_35);
			if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
			{
				goto IL_0022_1;
			}
		}
		{
			goto IL_00c9;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c4;
		}
		throw e;
	}

CATCH_00c4:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c9;
	}// end catch (depth: 1)

IL_00c9:
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_36 = V_0;
		V_11 = L_36;
		goto IL_00ce;
	}

IL_00ce:
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_37 = V_11;
		return L_37;
	}
}
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ResolveHostLocalAddressViaNetworkInterfaces(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* DotNetPlatformUtils_ResolveHostLocalAddressViaNetworkInterfaces_m2F8BD682943A55417FD0B31B6DDC97211ECDFFC7 (int32_t ___port0, bool ___ipv61, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m11B9F40360C6E76E7EC06C8F40EF94BAFBA3EBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m52160B38797B737DCCEFFAB39ABEE7391637C6B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE9CE13827AA770B7A5E37CFCB3608C1282129C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A* V_0 = NULL;
	NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* V_1 = NULL;
	int32_t V_2 = 0;
	NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C V_6;
	memset((&V_6), 0, sizeof(V_6));
	String_t* V_7 = NULL;
	bool V_8 = false;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Exception_t* V_14 = NULL;
	Exception_t* V_15 = NULL;
	List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B6_0 = 0;
	{
		HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A* L_0 = (HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A*)il2cpp_codegen_object_new(HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m52160B38797B737DCCEFFAB39ABEE7391637C6B5(L_0, HashSet_1__ctor_m52160B38797B737DCCEFFAB39ABEE7391637C6B5_RuntimeMethod_var);
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_1;
			L_1 = NetworkInterface_GetAllNetworkInterfaces_m4E5A4AAEED8B11868BDC8F78975460D9B6F3CD70(NULL);
			V_1 = L_1;
			V_2 = 0;
			goto IL_0108_1;
		}

IL_0016_1:
		{
			NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_2 = V_1;
			int32_t L_3 = V_2;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_3 = L_5;
		}
		try
		{// begin try (depth: 2)
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_6 = V_3;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_6);
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0033_2;
				}
			}
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_8 = V_3;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_8);
				G_B6_0 = ((((int32_t)((((int32_t)L_9) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_0034_2;
			}

IL_0033_2:
			{
				G_B6_0 = 0;
			}

IL_0034_2:
			{
				V_4 = (bool)G_B6_0;
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_0040_2;
				}
			}
			{
				goto IL_0104_1;
			}

IL_0040_2:
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_11 = V_3;
				bool L_12;
				L_12 = DotNetPlatformUtils_ValidType_mC107FBA8DD132ECBE09DCDEB8856B4A89E85F76D(L_11, NULL);
				V_5 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
				bool L_13 = V_5;
				if (!L_13)
				{
					goto IL_0055_2;
				}
			}
			{
				goto IL_0104_1;
			}

IL_0055_2:
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_14 = V_3;
				bool L_15 = ___ipv61;
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_16;
				L_16 = DotNetPlatformUtils_GetIpsFromNetworkInterface_m181735C8DF60E36B447F28ED94B9921CC2256BC6(L_14, L_15, NULL);
				NullCheck(L_16);
				Enumerator_tF6C1B465074968C3538509E911717559FDDBD72C L_17;
				L_17 = HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B(L_16, HashSet_1_GetEnumerator_m11AAEE8A10D781104560F78D5EEC790433FEEE2B_RuntimeMethod_var);
				V_6 = L_17;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00e3_2:
					{// begin finally (depth: 3)
						Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0((&V_6), Enumerator_Dispose_mA8C03191318421835C1B51FEAD0F902EB506D6C0_RuntimeMethod_var);
						return;
					}// end finally (depth: 3)
				});
				try
				{// begin try (depth: 3)
					{
						goto IL_00d8_3;
					}

IL_0066_3:
					{
						String_t* L_18;
						L_18 = Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_inline((&V_6), Enumerator_get_Current_m2766585450EAB9CE01A3702DD017FFE45D4AF85F_RuntimeMethod_var);
						V_7 = L_18;
						bool L_19 = ___ipv61;
						V_8 = L_19;
						bool L_20 = V_8;
						if (!L_20)
						{
							goto IL_00a3_3;
						}
					}
					{
						String_t* L_21 = V_7;
						il2cpp_codegen_runtime_class_init_inline(UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92_il2cpp_TypeInfo_var);
						UdpIPv6Address_tEE58BB843E612DD724E068C20CF427BD4D7F1F92 L_22;
						L_22 = UdpIPv6Address_Parse_mF6E37F485B13FA941B9481646F9786D8B4AE5E7A(L_21, NULL);
						int32_t L_23 = ___port0;
						UdpEndPoint__ctor_m0CFE5B05196C0BEC56EEA7E173C2A20B415657D3((&V_9), L_22, (uint16_t)((int32_t)(uint16_t)L_23), NULL);
						bool L_24;
						L_24 = UdpEndPoint_get_IsLan_m247D9C829F3C34A272B48D875702D3526D8F48F7((&V_9), NULL);
						V_10 = L_24;
						bool L_25 = V_10;
						if (!L_25)
						{
							goto IL_00a0_3;
						}
					}
					{
						HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A* L_26 = V_0;
						UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_27 = V_9;
						NullCheck(L_26);
						bool L_28;
						L_28 = HashSet_1_Add_m11B9F40360C6E76E7EC06C8F40EF94BAFBA3EBD0(L_26, L_27, HashSet_1_Add_m11B9F40360C6E76E7EC06C8F40EF94BAFBA3EBD0_RuntimeMethod_var);
					}

IL_00a0_3:
					{
						goto IL_00d7_3;
					}

IL_00a3_3:
					{
						bool L_29 = ___ipv61;
						V_11 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
						bool L_30 = V_11;
						if (!L_30)
						{
							goto IL_00d7_3;
						}
					}
					{
						String_t* L_31 = V_7;
						il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
						UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_32;
						L_32 = UdpIPv4Address_Parse_m3CF827562441B8EF9C2D8A5586BF570D7AB213E2(L_31, NULL);
						int32_t L_33 = ___port0;
						UdpEndPoint__ctor_m6194C814B981B87634B8C9D0455936505B24E270((&V_12), L_32, (uint16_t)((int32_t)(uint16_t)L_33), NULL);
						bool L_34;
						L_34 = UdpEndPoint_get_IsLan_m247D9C829F3C34A272B48D875702D3526D8F48F7((&V_12), NULL);
						V_13 = L_34;
						bool L_35 = V_13;
						if (!L_35)
						{
							goto IL_00d6_3;
						}
					}
					{
						HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A* L_36 = V_0;
						UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_37 = V_12;
						NullCheck(L_36);
						bool L_38;
						L_38 = HashSet_1_Add_m11B9F40360C6E76E7EC06C8F40EF94BAFBA3EBD0(L_36, L_37, HashSet_1_Add_m11B9F40360C6E76E7EC06C8F40EF94BAFBA3EBD0_RuntimeMethod_var);
					}

IL_00d6_3:
					{
					}

IL_00d7_3:
					{
					}

IL_00d8_3:
					{
						bool L_39;
						L_39 = Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F((&V_6), Enumerator_MoveNext_m7DCB52497076047551577A950FB809E3270BEF9F_RuntimeMethod_var);
						if (L_39)
						{
							goto IL_0066_3;
						}
					}
					{
						goto IL_00f2_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00f2_2:
			{
				goto IL_0103_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00f5_1;
			}
			throw e;
		}

CATCH_00f5_1:
		{// begin catch(System.Exception)
			V_14 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_40 = V_14;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_40, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0103_1;
		}// end catch (depth: 2)

IL_0103_1:
		{
		}

IL_0104_1:
		{
			int32_t L_41 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		}

IL_0108_1:
		{
			int32_t L_42 = V_2;
			NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_43 = V_1;
			NullCheck(L_43);
			if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
			{
				goto IL_0016_1;
			}
		}
		{
			goto IL_0122;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0114;
		}
		throw e;
	}

CATCH_0114:
	{// begin catch(System.Exception)
		V_15 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_44 = V_15;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_44, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0122;
	}// end catch (depth: 1)

IL_0122:
	{
		HashSet_1_t1C9B0F7946C08527BAA7047BB965DA3858BB573A* L_45 = V_0;
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_46 = (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456*)il2cpp_codegen_object_new(List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		List_1__ctor_mE9CE13827AA770B7A5E37CFCB3608C1282129C4A(L_46, L_45, List_1__ctor_mE9CE13827AA770B7A5E37CFCB3608C1282129C4A_RuntimeMethod_var);
		V_16 = L_46;
		goto IL_012c;
	}

IL_012c:
	{
		List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* L_47 = V_16;
		return L_47;
	}
}
// System.Boolean UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ValidType(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatformUtils_ValidType_mC107FBA8DD132ECBE09DCDEB8856B4A89E85F76D (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_0 = ___n0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)26))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)26))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)69))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)62))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_002e;
	}

IL_002e:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)69))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0047;
	}

IL_0035:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)71))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_003c;
	}

IL_003c:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)117))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0047;
	}

IL_0043:
	{
		V_2 = (bool)1;
		goto IL_004b;
	}

IL_0047:
	{
		V_2 = (bool)0;
		goto IL_004b;
	}

IL_004b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Collections.Generic.HashSet`1<System.String> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::GetIpsFromNetworkInterface(System.Net.NetworkInformation.NetworkInterface,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* DotNetPlatformUtils_GetIpsFromNetworkInterface_m181735C8DF60E36B447F28ED94B9921CC2256BC6 (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, bool ___ipv61, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA218C3658C89562941B7435E73E48E2EDC26D9BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_0 = NULL;
	IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* V_1 = NULL;
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_1 = ___n0;
		NullCheck(L_1);
		IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_2;
		L_2 = VirtualFuncInvoker0< IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* >::Invoke(7 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_1);
		V_1 = L_2;
		goto IL_001b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.Object)
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = V_0;
		V_2 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e7;
	}// end catch (depth: 1)

IL_001b:
	{
		IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_4 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_00e3;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		{
			IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_6 = V_1;
			NullCheck(L_6);
			UnicastIPAddressInformationCollection_tB4D61C9127DFB4168CA3855020CCEB59B75C6EDA* L_7;
			L_7 = VirtualFuncInvoker0< UnicastIPAddressInformationCollection_tB4D61C9127DFB4168CA3855020CCEB59B75C6EDA* >::Invoke(7 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_7);
			V_4 = L_8;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00c4_1:
				{// begin finally (depth: 2)
					{
						RuntimeObject* L_9 = V_4;
						if (!L_9)
						{
							goto IL_00d0_1;
						}
					}
					{
						RuntimeObject* L_10 = V_4;
						NullCheck(L_10);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
					}

IL_00d0_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_00b6_2;
				}

IL_0038_2:
				{
					RuntimeObject* L_11 = V_4;
					NullCheck(L_11);
					UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_12;
					L_12 = InterfaceFuncInvoker0< UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_tA218C3658C89562941B7435E73E48E2EDC26D9BD_il2cpp_TypeInfo_var, L_11);
					V_5 = L_12;
				}
				try
				{// begin try (depth: 3)
					{
						bool L_13 = ___ipv61;
						if (L_13)
						{
							goto IL_0057_3;
						}
					}
					{
						UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_14 = V_5;
						NullCheck(L_14);
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_15;
						L_15 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_14);
						NullCheck(L_15);
						int32_t L_16;
						L_16 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_15, NULL);
						G_B11_0 = ((((int32_t)L_16) == ((int32_t)2))? 1 : 0);
						goto IL_0058_3;
					}

IL_0057_3:
					{
						G_B11_0 = 0;
					}

IL_0058_3:
					{
						V_6 = (bool)G_B11_0;
						bool L_17 = V_6;
						if (!L_17)
						{
							goto IL_0073_3;
						}
					}
					{
						HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_18 = V_0;
						UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_19 = V_5;
						NullCheck(L_19);
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_20;
						L_20 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_19);
						NullCheck(L_20);
						String_t* L_21;
						L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
						NullCheck(L_18);
						bool L_22;
						L_22 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_18, L_21, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
					}

IL_0073_3:
					{
						bool L_23 = ___ipv61;
						if (!L_23)
						{
							goto IL_0088_3;
						}
					}
					{
						UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_24 = V_5;
						NullCheck(L_24);
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_25;
						L_25 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_24);
						NullCheck(L_25);
						int32_t L_26;
						L_26 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_25, NULL);
						G_B16_0 = ((((int32_t)L_26) == ((int32_t)((int32_t)23)))? 1 : 0);
						goto IL_0089_3;
					}

IL_0088_3:
					{
						G_B16_0 = 0;
					}

IL_0089_3:
					{
						V_7 = (bool)G_B16_0;
						bool L_27 = V_7;
						if (!L_27)
						{
							goto IL_00a4_3;
						}
					}
					{
						HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_28 = V_0;
						UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_29 = V_5;
						NullCheck(L_29);
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_30;
						L_30 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_29);
						NullCheck(L_30);
						String_t* L_31;
						L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
						NullCheck(L_28);
						bool L_32;
						L_32 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_28, L_31, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
					}

IL_00a4_3:
					{
						goto IL_00b5_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00a7_2;
					}
					throw e;
				}

CATCH_00a7_2:
				{// begin catch(System.Exception)
					V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_33 = V_8;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_33, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00b5_2;
				}// end catch (depth: 3)

IL_00b5_2:
				{
				}

IL_00b6_2:
				{
					RuntimeObject* L_34 = V_4;
					NullCheck(L_34);
					bool L_35;
					L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_34);
					if (L_35)
					{
						goto IL_0038_2;
					}
				}
				{
					goto IL_00d1_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00d1_1:
		{
			goto IL_00e2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d4;
		}
		throw e;
	}

CATCH_00d4:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_36 = V_9;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_36, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e2;
	}// end catch (depth: 1)

IL_00e2:
	{
	}

IL_00e3:
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_37 = V_0;
		V_2 = L_37;
		goto IL_00e7;
	}

IL_00e7:
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_38 = V_2;
		return L_38;
	}
}
// UdpKit.Platform.DotNet.Utils.DotNetInterface UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ParseInterface(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* DotNetPlatformUtils_ParseInterface_m5186C756D1AE559F8983E2A77F90D8A49E38DE00 (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisUdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_mFE92AC379D6D2F5B96FCC7AE91625EB03283AE3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m505777F7D52B7490B54E36C419926D16A9B6D8DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_mCCF252D8C6DF0A809A2E290DB6420EF08E29EE8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t12B82C0DABD0D182F9ECF23E4933968201C24EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t16E7D3FE11465476DD7529A8DDDD6519A2E26D6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA218C3658C89562941B7435E73E48E2EDC26D9BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* V_0 = NULL;
	HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* V_1 = NULL;
	HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* V_2 = NULL;
	IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* V_3 = NULL;
	DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_7 = NULL;
	bool V_8 = false;
	Exception_t* V_9 = NULL;
	Exception_t* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* V_12 = NULL;
	bool V_13 = false;
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	Exception_t* V_16 = NULL;
	RuntimeObject* V_17 = NULL;
	MulticastIPAddressInformation_tFC4BE9DB7286942FF9734B4C3928FEAECD331B98* V_18 = NULL;
	bool V_19 = false;
	Exception_t* V_20 = NULL;
	Exception_t* V_21 = NULL;
	bool V_22 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B55_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_il2cpp_TypeInfo_var);
		Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186* L_0 = ((Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_il2cpp_TypeInfo_var))->___Instance_0;
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_1 = (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14*)il2cpp_codegen_object_new(HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m505777F7D52B7490B54E36C419926D16A9B6D8DA(L_1, L_0, HashSet_1__ctor_m505777F7D52B7490B54E36C419926D16A9B6D8DA_RuntimeMethod_var);
		V_0 = L_1;
		Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186* L_2 = ((Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_il2cpp_TypeInfo_var))->___Instance_0;
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_3 = (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14*)il2cpp_codegen_object_new(HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HashSet_1__ctor_m505777F7D52B7490B54E36C419926D16A9B6D8DA(L_3, L_2, HashSet_1__ctor_m505777F7D52B7490B54E36C419926D16A9B6D8DA_RuntimeMethod_var);
		V_1 = L_3;
		Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186* L_4 = ((Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_tCF327D7D80A17C9C791CAE203D10F26BD8BD1186_il2cpp_TypeInfo_var))->___Instance_0;
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_5 = (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14*)il2cpp_codegen_object_new(HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HashSet_1__ctor_m505777F7D52B7490B54E36C419926D16A9B6D8DA(L_5, L_4, HashSet_1__ctor_m505777F7D52B7490B54E36C419926D16A9B6D8DA_RuntimeMethod_var);
		V_2 = L_5;
	}
	try
	{// begin try (depth: 1)
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_6 = ___n0;
		NullCheck(L_6);
		IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_7;
		L_7 = VirtualFuncInvoker0< IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* >::Invoke(7 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_6);
		V_3 = L_7;
		goto IL_0037;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		throw e;
	}

CATCH_002d:
	{// begin catch(System.Object)
		V_4 = (DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_025f;
	}// end catch (depth: 1)

IL_0037:
	{
		IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_8 = V_3;
		V_5 = (bool)((!(((RuntimeObject*)(IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0243;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		{
			IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_10 = V_3;
			NullCheck(L_10);
			IPAddressCollection_tEA1FAB768B2682B0A780F86906B34621615F84E4* L_11;
			L_11 = VirtualFuncInvoker0< IPAddressCollection_tEA1FAB768B2682B0A780F86906B34621615F84E4* >::Invoke(10 /* System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.IPInterfaceProperties::get_DnsAddresses() */, L_10);
			NullCheck(L_11);
			RuntimeObject* L_12;
			L_12 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::GetEnumerator() */, L_11);
			V_6 = L_12;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00a8_1:
				{// begin finally (depth: 2)
					{
						RuntimeObject* L_13 = V_6;
						if (!L_13)
						{
							goto IL_00b4_1;
						}
					}
					{
						RuntimeObject* L_14 = V_6;
						NullCheck(L_14);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
					}

IL_00b4_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_009d_2;
				}

IL_0056_2:
				{
					RuntimeObject* L_15 = V_6;
					NullCheck(L_15);
					IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_16;
					L_16 = InterfaceFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Net.IPAddress>::get_Current() */, IEnumerator_1_t16E7D3FE11465476DD7529A8DDDD6519A2E26D6B_il2cpp_TypeInfo_var, L_15);
					V_7 = L_16;
				}
				try
				{// begin try (depth: 3)
					{
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_17 = V_7;
						NullCheck(L_17);
						int32_t L_18;
						L_18 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_17, NULL);
						V_8 = (bool)((((int32_t)L_18) == ((int32_t)2))? 1 : 0);
						bool L_19 = V_8;
						if (!L_19)
						{
							goto IL_0081_3;
						}
					}
					{
						HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_20 = V_0;
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_21 = V_7;
						il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
						UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_22;
						L_22 = UdpEndPointExtensions_ConvertToUdpIPv4Address_mD07E1C30CA1D4883DD64AF41E992286121C10DF6(L_21, NULL);
						NullCheck(L_20);
						bool L_23;
						L_23 = HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE(L_20, L_22, HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE_RuntimeMethod_var);
					}

IL_0081_3:
					{
						goto IL_009c_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_0084_2;
					}
					throw e;
				}

CATCH_0084_2:
				{// begin catch(System.Exception)
					V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_24 = V_9;
					NullCheck(L_24);
					String_t* L_25;
					L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26;
					L_26 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var)));
					UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(L_25, L_26, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_009c_2;
				}// end catch (depth: 3)

IL_009c_2:
				{
				}

IL_009d_2:
				{
					RuntimeObject* L_27 = V_6;
					NullCheck(L_27);
					bool L_28;
					L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_27);
					if (L_28)
					{
						goto IL_0056_2;
					}
				}
				{
					goto IL_00b5_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00b5_1:
		{
			goto IL_00d0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b8;
		}
		throw e;
	}

CATCH_00b8:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_29 = V_10;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31;
		L_31 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var)));
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(L_30, L_31, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d0;
	}// end catch (depth: 1)

IL_00d0:
	{
	}
	try
	{// begin try (depth: 1)
		{
			IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_32 = V_3;
			NullCheck(L_32);
			UnicastIPAddressInformationCollection_tB4D61C9127DFB4168CA3855020CCEB59B75C6EDA* L_33;
			L_33 = VirtualFuncInvoker0< UnicastIPAddressInformationCollection_tB4D61C9127DFB4168CA3855020CCEB59B75C6EDA* >::Invoke(7 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_32);
			NullCheck(L_33);
			RuntimeObject* L_34;
			L_34 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_33);
			V_11 = L_34;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0164_1:
				{// begin finally (depth: 2)
					{
						RuntimeObject* L_35 = V_11;
						if (!L_35)
						{
							goto IL_0170_1;
						}
					}
					{
						RuntimeObject* L_36 = V_11;
						NullCheck(L_36);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_36);
					}

IL_0170_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0159_2;
				}

IL_00e2_2:
				{
					RuntimeObject* L_37 = V_11;
					NullCheck(L_37);
					UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_38;
					L_38 = InterfaceFuncInvoker0< UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_tA218C3658C89562941B7435E73E48E2EDC26D9BD_il2cpp_TypeInfo_var, L_37);
					V_12 = L_38;
				}
				try
				{// begin try (depth: 3)
					{
						UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_39 = V_12;
						NullCheck(L_39);
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_40;
						L_40 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_39);
						NullCheck(L_40);
						int32_t L_41;
						L_41 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_40, NULL);
						V_13 = (bool)((((int32_t)L_41) == ((int32_t)2))? 1 : 0);
						bool L_42 = V_13;
						if (!L_42)
						{
							goto IL_013d_3;
						}
					}
					{
						UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_43 = V_12;
						NullCheck(L_43);
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_44;
						L_44 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_43);
						il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
						UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_45;
						L_45 = UdpEndPointExtensions_ConvertToUdpIPv4Address_mD07E1C30CA1D4883DD64AF41E992286121C10DF6(L_44, NULL);
						V_14 = L_45;
						HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_46 = V_1;
						UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_47 = V_14;
						NullCheck(L_46);
						bool L_48;
						L_48 = HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE(L_46, L_47, HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE_RuntimeMethod_var);
						HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_49 = V_0;
						UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_50 = V_14;
						uint8_t L_51 = L_50.___Byte3_7;
						UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_52 = V_14;
						uint8_t L_53 = L_52.___Byte2_6;
						UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_54 = V_14;
						uint8_t L_55 = L_54.___Byte1_5;
						UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_56;
						memset((&L_56), 0, sizeof(L_56));
						UdpIPv4Address__ctor_m0C93D659D8EF2FF0DE7D24FAFA36B4D41E1A9AD2((&L_56), L_51, L_53, L_55, (uint8_t)1, /*hidden argument*/NULL);
						NullCheck(L_49);
						bool L_57;
						L_57 = HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE(L_49, L_56, HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE_RuntimeMethod_var);
					}

IL_013d_3:
					{
						goto IL_0158_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_0140_2;
					}
					throw e;
				}

CATCH_0140_2:
				{// begin catch(System.Exception)
					V_15 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_58 = V_15;
					NullCheck(L_58);
					String_t* L_59;
					L_59 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_58);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60;
					L_60 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var)));
					UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(L_59, L_60, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0158_2;
				}// end catch (depth: 3)

IL_0158_2:
				{
				}

IL_0159_2:
				{
					RuntimeObject* L_61 = V_11;
					NullCheck(L_61);
					bool L_62;
					L_62 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_61);
					if (L_62)
					{
						goto IL_00e2_2;
					}
				}
				{
					goto IL_0171_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0171_1:
		{
			goto IL_018c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0174;
		}
		throw e;
	}

CATCH_0174:
	{// begin catch(System.Exception)
		V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_63 = V_16;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_63);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65;
		L_65 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var)));
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(L_64, L_65, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_018c;
	}// end catch (depth: 1)

IL_018c:
	{
	}
	try
	{// begin try (depth: 1)
		{
			IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_66 = V_3;
			NullCheck(L_66);
			MulticastIPAddressInformationCollection_tB4734B1163743DBD810D1FB60F5CC802CD4919EC* L_67;
			L_67 = VirtualFuncInvoker0< MulticastIPAddressInformationCollection_tB4734B1163743DBD810D1FB60F5CC802CD4919EC* >::Invoke(8 /* System.Net.NetworkInformation.MulticastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_MulticastAddresses() */, L_66);
			NullCheck(L_67);
			RuntimeObject* L_68;
			L_68 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.MulticastIPAddressInformation> System.Net.NetworkInformation.MulticastIPAddressInformationCollection::GetEnumerator() */, L_67);
			V_17 = L_68;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_01fa_1:
				{// begin finally (depth: 2)
					{
						RuntimeObject* L_69 = V_17;
						if (!L_69)
						{
							goto IL_0206_1;
						}
					}
					{
						RuntimeObject* L_70 = V_17;
						NullCheck(L_70);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_70);
					}

IL_0206_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_01ef_2;
				}

IL_019e_2:
				{
					RuntimeObject* L_71 = V_17;
					NullCheck(L_71);
					MulticastIPAddressInformation_tFC4BE9DB7286942FF9734B4C3928FEAECD331B98* L_72;
					L_72 = InterfaceFuncInvoker0< MulticastIPAddressInformation_tFC4BE9DB7286942FF9734B4C3928FEAECD331B98* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.MulticastIPAddressInformation>::get_Current() */, IEnumerator_1_t12B82C0DABD0D182F9ECF23E4933968201C24EC3_il2cpp_TypeInfo_var, L_71);
					V_18 = L_72;
				}
				try
				{// begin try (depth: 3)
					{
						MulticastIPAddressInformation_tFC4BE9DB7286942FF9734B4C3928FEAECD331B98* L_73 = V_18;
						NullCheck(L_73);
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_74;
						L_74 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_73);
						NullCheck(L_74);
						int32_t L_75;
						L_75 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_74, NULL);
						V_19 = (bool)((((int32_t)L_75) == ((int32_t)2))? 1 : 0);
						bool L_76 = V_19;
						if (!L_76)
						{
							goto IL_01d3_3;
						}
					}
					{
						HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_77 = V_2;
						MulticastIPAddressInformation_tFC4BE9DB7286942FF9734B4C3928FEAECD331B98* L_78 = V_18;
						NullCheck(L_78);
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_79;
						L_79 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_78);
						il2cpp_codegen_runtime_class_init_inline(UdpEndPointExtensions_t4B161939257B732F11DDE67AD74C2E19F8EB848E_il2cpp_TypeInfo_var);
						UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_80;
						L_80 = UdpEndPointExtensions_ConvertToUdpIPv4Address_mD07E1C30CA1D4883DD64AF41E992286121C10DF6(L_79, NULL);
						NullCheck(L_77);
						bool L_81;
						L_81 = HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE(L_77, L_80, HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE_RuntimeMethod_var);
					}

IL_01d3_3:
					{
						goto IL_01ee_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_01d6_2;
					}
					throw e;
				}

CATCH_01d6_2:
				{// begin catch(System.Exception)
					V_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_82 = V_20;
					NullCheck(L_82);
					String_t* L_83;
					L_83 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_82);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_84;
					L_84 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var)));
					UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(L_83, L_84, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_01ee_2;
				}// end catch (depth: 3)

IL_01ee_2:
				{
				}

IL_01ef_2:
				{
					RuntimeObject* L_85 = V_17;
					NullCheck(L_85);
					bool L_86;
					L_86 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_85);
					if (L_86)
					{
						goto IL_019e_2;
					}
				}
				{
					goto IL_0207_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0207_1:
		{
			goto IL_0222;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_020a;
		}
		throw e;
	}

CATCH_020a:
	{// begin catch(System.Exception)
		V_21 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_87 = V_21;
		NullCheck(L_87);
		String_t* L_88;
		L_88 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_87);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_89;
		L_89 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UdpLog_t506E9A601D013FC17739EB380CF55500C3C64E7E_il2cpp_TypeInfo_var)));
		UdpLog_Warn_m7C44772ED929F56083045D3AACE64DB6FB4FCC75(L_88, L_89, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0222;
	}// end catch (depth: 1)

IL_0222:
	{
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_90 = V_1;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = HashSet_1_get_Count_mCCF252D8C6DF0A809A2E290DB6420EF08E29EE8F_inline(L_90, HashSet_1_get_Count_mCCF252D8C6DF0A809A2E290DB6420EF08E29EE8F_RuntimeMethod_var);
		if (!L_91)
		{
			goto IL_0235;
		}
	}
	{
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_92 = V_0;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = HashSet_1_get_Count_mCCF252D8C6DF0A809A2E290DB6420EF08E29EE8F_inline(L_92, HashSet_1_get_Count_mCCF252D8C6DF0A809A2E290DB6420EF08E29EE8F_RuntimeMethod_var);
		G_B55_0 = ((((int32_t)L_93) == ((int32_t)0))? 1 : 0);
		goto IL_0236;
	}

IL_0235:
	{
		G_B55_0 = 1;
	}

IL_0236:
	{
		V_22 = (bool)G_B55_0;
		bool L_94 = V_22;
		if (!L_94)
		{
			goto IL_0242;
		}
	}
	{
		V_4 = (DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C*)NULL;
		goto IL_025f;
	}

IL_0242:
	{
	}

IL_0243:
	{
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_95 = ___n0;
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_96 = V_0;
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_97;
		L_97 = Enumerable_ToArray_TisUdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_mFE92AC379D6D2F5B96FCC7AE91625EB03283AE3A(L_96, Enumerable_ToArray_TisUdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_mFE92AC379D6D2F5B96FCC7AE91625EB03283AE3A_RuntimeMethod_var);
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_98 = V_1;
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_99;
		L_99 = Enumerable_ToArray_TisUdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_mFE92AC379D6D2F5B96FCC7AE91625EB03283AE3A(L_98, Enumerable_ToArray_TisUdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_mFE92AC379D6D2F5B96FCC7AE91625EB03283AE3A_RuntimeMethod_var);
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_100 = V_2;
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_101;
		L_101 = Enumerable_ToArray_TisUdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_mFE92AC379D6D2F5B96FCC7AE91625EB03283AE3A(L_100, Enumerable_ToArray_TisUdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_mFE92AC379D6D2F5B96FCC7AE91625EB03283AE3A_RuntimeMethod_var);
		DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* L_102 = (DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C*)il2cpp_codegen_object_new(DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C_il2cpp_TypeInfo_var);
		NullCheck(L_102);
		DotNetInterface__ctor_m48B0751A3868E636AD7A2D7F74272BE6B1BA84DE(L_102, L_95, L_97, L_99, L_101, NULL);
		V_4 = L_102;
		goto IL_025f;
	}

IL_025f:
	{
		DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* L_103 = V_4;
		return L_103;
	}
}
// System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::FindBroadcastAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* DotNetPlatformUtils_FindBroadcastAddress_m287A4E26ECF4213012F75EE2BE6ACDE6B8CEFAF7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mD6AA1519DCE177D3AD03EFBC605AE1B3FCF4B339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t16E7D3FE11465476DD7529A8DDDD6519A2E26D6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA218C3658C89562941B7435E73E48E2EDC26D9BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* V_0 = NULL;
	NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* V_1 = NULL;
	int32_t V_2 = 0;
	NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* V_3 = NULL;
	IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	RuntimeObject* V_14 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_15 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_16 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_17 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_18 = NULL;
	UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	Exception_t* V_24 = NULL;
	Exception_t* V_25 = NULL;
	HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* V_26 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B7_0 = 0;
	{
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_0 = (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14*)il2cpp_codegen_object_new(HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_mD6AA1519DCE177D3AD03EFBC605AE1B3FCF4B339(L_0, HashSet_1__ctor_mD6AA1519DCE177D3AD03EFBC605AE1B3FCF4B339_RuntimeMethod_var);
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_1;
			L_1 = NetworkInterface_GetAllNetworkInterfaces_m4E5A4AAEED8B11868BDC8F78975460D9B6F3CD70(NULL);
			V_1 = L_1;
			V_2 = 0;
			goto IL_020a_1;
		}

IL_0016_1:
		{
			NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_2 = V_1;
			int32_t L_3 = V_2;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_3 = L_5;
		}
		try
		{// begin try (depth: 2)
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_6 = V_3;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_6);
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_002e_2;
				}
			}
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_8 = V_3;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_8);
				if ((!(((uint32_t)L_9) == ((uint32_t)4))))
				{
					goto IL_0039_2;
				}
			}

IL_002e_2:
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_10 = V_3;
				bool L_11;
				L_11 = DotNetPlatformUtils_ValidType_mC107FBA8DD132ECBE09DCDEB8856B4A89E85F76D(L_10, NULL);
				G_B7_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
				goto IL_003a_2;
			}

IL_0039_2:
			{
				G_B7_0 = 1;
			}

IL_003a_2:
			{
				V_5 = (bool)G_B7_0;
				bool L_12 = V_5;
				if (!L_12)
				{
					goto IL_0046_2;
				}
			}
			{
				goto IL_0206_1;
			}

IL_0046_2:
			{
				NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_13 = V_3;
				NullCheck(L_13);
				IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_14;
				L_14 = VirtualFuncInvoker0< IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* >::Invoke(7 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_13);
				V_4 = L_14;
				IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_15 = V_4;
				bool L_16;
				L_16 = DotNetPlatformUtils_IsValidInterface_mF93CAF19D7014472CFC74209C6A21946743BF508(L_15, NULL);
				V_6 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
				bool L_17 = V_6;
				if (!L_17)
				{
					goto IL_0064_2;
				}
			}
			{
				goto IL_0206_1;
			}

IL_0064_2:
			{
				IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_18 = V_4;
				NullCheck(L_18);
				UnicastIPAddressInformationCollection_tB4D61C9127DFB4168CA3855020CCEB59B75C6EDA* L_19;
				L_19 = VirtualFuncInvoker0< UnicastIPAddressInformationCollection_tB4D61C9127DFB4168CA3855020CCEB59B75C6EDA* >::Invoke(7 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_18);
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_19);
				V_7 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01e7_2:
					{// begin finally (depth: 3)
						{
							RuntimeObject* L_21 = V_7;
							if (!L_21)
							{
								goto IL_01f3_2;
							}
						}
						{
							RuntimeObject* L_22 = V_7;
							NullCheck(L_22);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
						}

IL_01f3_2:
						{
							return;
						}
					}// end finally (depth: 3)
				});
				try
				{// begin try (depth: 3)
					{
						goto IL_01d9_3;
					}

IL_0078_3:
					{
						RuntimeObject* L_23 = V_7;
						NullCheck(L_23);
						UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_24;
						L_24 = InterfaceFuncInvoker0< UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_tA218C3658C89562941B7435E73E48E2EDC26D9BD_il2cpp_TypeInfo_var, L_23);
						V_8 = L_24;
						UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_25 = V_8;
						NullCheck(L_25);
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_26;
						L_26 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_25);
						NullCheck(L_26);
						int32_t L_27;
						L_27 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_26, NULL);
						V_9 = (bool)((((int32_t)L_27) == ((int32_t)2))? 1 : 0);
						bool L_28 = V_9;
						if (!L_28)
						{
							goto IL_01d8_3;
						}
					}
					{
						IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_29 = V_4;
						NullCheck(L_29);
						IPAddressCollection_tEA1FAB768B2682B0A780F86906B34621615F84E4* L_30;
						L_30 = VirtualFuncInvoker0< IPAddressCollection_tEA1FAB768B2682B0A780F86906B34621615F84E4* >::Invoke(12 /* System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.IPInterfaceProperties::get_DhcpServerAddresses() */, L_29);
						NullCheck(L_30);
						int32_t L_31;
						L_31 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Net.NetworkInformation.IPAddressCollection::get_Count() */, L_30);
						V_10 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
						bool L_32 = V_10;
						if (!L_32)
						{
							goto IL_00f9_3;
						}
					}
					{
						UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_33 = V_8;
						NullCheck(L_33);
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_34;
						L_34 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_33);
						NullCheck(L_34);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
						L_35 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_34, NULL);
						V_11 = L_35;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_11;
						NullCheck(L_36);
						(L_36)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)255));
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_11;
						IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_38 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
						NullCheck(L_38);
						IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_38, L_37, NULL);
						NullCheck(L_38);
						String_t* L_39;
						L_39 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
						il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
						UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_40;
						L_40 = UdpIPv4Address_Parse_m3CF827562441B8EF9C2D8A5586BF570D7AB213E2(L_39, NULL);
						V_12 = L_40;
						bool L_41;
						L_41 = UdpIPv4Address_get_IsPrivate_mE6B8FC641FED77D827899373F994ECF40E8683D6((&V_12), NULL);
						V_13 = L_41;
						bool L_42 = V_13;
						if (!L_42)
						{
							goto IL_00f3_3;
						}
					}
					{
						HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_43 = V_0;
						UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_44 = V_12;
						NullCheck(L_43);
						bool L_45;
						L_45 = HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE(L_43, L_44, HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE_RuntimeMethod_var);
					}

IL_00f3_3:
					{
						goto IL_01d7_3;
					}

IL_00f9_3:
					{
						IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_46 = V_4;
						NullCheck(L_46);
						IPAddressCollection_tEA1FAB768B2682B0A780F86906B34621615F84E4* L_47;
						L_47 = VirtualFuncInvoker0< IPAddressCollection_tEA1FAB768B2682B0A780F86906B34621615F84E4* >::Invoke(12 /* System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.IPInterfaceProperties::get_DhcpServerAddresses() */, L_46);
						NullCheck(L_47);
						RuntimeObject* L_48;
						L_48 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::GetEnumerator() */, L_47);
						V_14 = L_48;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_01c9_3:
							{// begin finally (depth: 4)
								{
									RuntimeObject* L_49 = V_14;
									if (!L_49)
									{
										goto IL_01d5_3;
									}
								}
								{
									RuntimeObject* L_50 = V_14;
									NullCheck(L_50);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_50);
								}

IL_01d5_3:
								{
									return;
								}
							}// end finally (depth: 4)
						});
						try
						{// begin try (depth: 4)
							{
								goto IL_01bb_4;
							}

IL_010e_4:
							{
								RuntimeObject* L_51 = V_14;
								NullCheck(L_51);
								IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_52;
								L_52 = InterfaceFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Net.IPAddress>::get_Current() */, IEnumerator_1_t16E7D3FE11465476DD7529A8DDDD6519A2E26D6B_il2cpp_TypeInfo_var, L_51);
								V_15 = L_52;
								UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_53 = V_8;
								NullCheck(L_53);
								IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_54;
								L_54 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_53);
								NullCheck(L_54);
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
								L_55 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_54, NULL);
								V_16 = L_55;
								UnicastIPAddressInformation_t4ACCADE9FBC1F8243A602439C94301E2C30295F3* L_56 = V_8;
								NullCheck(L_56);
								IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_57;
								L_57 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(13 /* System.Net.IPAddress System.Net.NetworkInformation.UnicastIPAddressInformation::get_IPv4Mask() */, L_56);
								NullCheck(L_57);
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58;
								L_58 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_57, NULL);
								V_17 = L_58;
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_16;
								NullCheck(L_59);
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_17;
								NullCheck(L_60);
								V_20 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
								bool L_61 = V_20;
								if (!L_61)
								{
									goto IL_0152_4;
								}
							}
							{
								ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_62 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
								NullCheck(L_62);
								ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AB7AE2A6D393ADACFEBBBF239951E42C5ACA0E8)), NULL);
								IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DotNetPlatformUtils_FindBroadcastAddress_m287A4E26ECF4213012F75EE2BE6ACDE6B8CEFAF7_RuntimeMethod_var)));
							}

IL_0152_4:
							{
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_16;
								NullCheck(L_63);
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)));
								V_18 = L_64;
								V_21 = 0;
								goto IL_0181_4;
							}

IL_0162_4:
							{
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_18;
								int32_t L_66 = V_21;
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_16;
								int32_t L_68 = V_21;
								NullCheck(L_67);
								int32_t L_69 = L_68;
								uint8_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_17;
								int32_t L_72 = V_21;
								NullCheck(L_71);
								int32_t L_73 = L_72;
								uint8_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
								NullCheck(L_65);
								(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_70|((int32_t)((int32_t)L_74^((int32_t)255)))))));
								int32_t L_75 = V_21;
								V_21 = ((int32_t)il2cpp_codegen_add(L_75, 1));
							}

IL_0181_4:
							{
								int32_t L_76 = V_21;
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = V_18;
								NullCheck(L_77);
								V_22 = (bool)((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length))))? 1 : 0);
								bool L_78 = V_22;
								if (L_78)
								{
									goto IL_0162_4;
								}
							}
							{
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_18;
								IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_80 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
								NullCheck(L_80);
								IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_80, L_79, NULL);
								NullCheck(L_80);
								String_t* L_81;
								L_81 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_80);
								il2cpp_codegen_runtime_class_init_inline(UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789_il2cpp_TypeInfo_var);
								UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_82;
								L_82 = UdpIPv4Address_Parse_m3CF827562441B8EF9C2D8A5586BF570D7AB213E2(L_81, NULL);
								V_19 = L_82;
								bool L_83;
								L_83 = UdpIPv4Address_get_IsPrivate_mE6B8FC641FED77D827899373F994ECF40E8683D6((&V_19), NULL);
								V_23 = L_83;
								bool L_84 = V_23;
								if (!L_84)
								{
									goto IL_01ba_4;
								}
							}
							{
								HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_85 = V_0;
								UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_86 = V_19;
								NullCheck(L_85);
								bool L_87;
								L_87 = HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE(L_85, L_86, HashSet_1_Add_m4B58CEA25965A8C1F7F1B6EA85D97ED24434AFCE_RuntimeMethod_var);
							}

IL_01ba_4:
							{
							}

IL_01bb_4:
							{
								RuntimeObject* L_88 = V_14;
								NullCheck(L_88);
								bool L_89;
								L_89 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_88);
								if (L_89)
								{
									goto IL_010e_4;
								}
							}
							{
								goto IL_01d6_3;
							}
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_01d6_3:
					{
					}

IL_01d7_3:
					{
					}

IL_01d8_3:
					{
					}

IL_01d9_3:
					{
						RuntimeObject* L_90 = V_7;
						NullCheck(L_90);
						bool L_91;
						L_91 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_90);
						if (L_91)
						{
							goto IL_0078_3;
						}
					}
					{
						goto IL_01f4_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_01f4_2:
			{
				goto IL_0205_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01f7_1;
			}
			throw e;
		}

CATCH_01f7_1:
		{// begin catch(System.Exception)
			V_24 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_92 = V_24;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_92, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0205_1;
		}// end catch (depth: 2)

IL_0205_1:
		{
		}

IL_0206_1:
		{
			int32_t L_93 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		}

IL_020a_1:
		{
			int32_t L_94 = V_2;
			NetworkInterfaceU5BU5D_t62783E27F1C4A989B118CDBBE2FCBE65EE5CA080* L_95 = V_1;
			NullCheck(L_95);
			if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
			{
				goto IL_0016_1;
			}
		}
		{
			goto IL_0224;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0216;
		}
		throw e;
	}

CATCH_0216:
	{// begin catch(System.Exception)
		V_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_96 = V_25;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_96, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0224;
	}// end catch (depth: 1)

IL_0224:
	{
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_97 = V_0;
		V_26 = L_97;
		goto IL_0229;
	}

IL_0229:
	{
		HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* L_98 = V_26;
		return L_98;
	}
}
// System.Boolean UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::IsValidInterface(System.Net.NetworkInformation.IPInterfaceProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatformUtils_IsValidInterface_mF93CAF19D7014472CFC74209C6A21946743BF508 (IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t449A74823AA2BEDD608BF520E096E15EA25A5C86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	GatewayIPAddressInformation_tB8FA9E5C0F0AA4352D9221F2A0A7CDA405FB1BF2* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	bool V_4 = false;
	bool G_B7_0 = false;
	bool G_B3_0 = false;
	bool G_B4_0 = false;
	bool G_B5_0 = false;
	bool G_B6_0 = false;
	int32_t G_B8_0 = 0;
	bool G_B8_1 = false;
	{
		V_0 = (bool)1;
		IPInterfaceProperties_t60A00D504E4F72CAFE4C0AE4DA6A062B44D1512F* L_0 = ___p0;
		NullCheck(L_0);
		GatewayIPAddressInformationCollection_t4D24D7B02E632A5F8DBE65DBFB751C2EC925E817* L_1;
		L_1 = VirtualFuncInvoker0< GatewayIPAddressInformationCollection_t4D24D7B02E632A5F8DBE65DBFB751C2EC925E817* >::Invoke(11 /* System.Net.NetworkInformation.GatewayIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_GatewayAddresses() */, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(19 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.GatewayIPAddressInformation> System.Net.NetworkInformation.GatewayIPAddressInformationCollection::GetEnumerator() */, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_005c;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_005c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_0012_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				GatewayIPAddressInformation_tB8FA9E5C0F0AA4352D9221F2A0A7CDA405FB1BF2* L_6;
				L_6 = InterfaceFuncInvoker0< GatewayIPAddressInformation_tB8FA9E5C0F0AA4352D9221F2A0A7CDA405FB1BF2* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.GatewayIPAddressInformation>::get_Current() */, IEnumerator_1_t449A74823AA2BEDD608BF520E096E15EA25A5C86_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				GatewayIPAddressInformation_tB8FA9E5C0F0AA4352D9221F2A0A7CDA405FB1BF2* L_7 = V_2;
				NullCheck(L_7);
				IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8;
				L_8 = VirtualFuncInvoker0< IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.GatewayIPAddressInformation::get_Address() */, L_7);
				NullCheck(L_8);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
				L_9 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_8, NULL);
				V_3 = L_9;
				bool L_10 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_3;
				NullCheck(L_11);
				G_B3_0 = L_10;
				if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))) == ((uint32_t)4))))
				{
					G_B7_0 = L_10;
					goto IL_0044_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_3;
				NullCheck(L_12);
				int32_t L_13 = 0;
				uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				G_B4_0 = G_B3_0;
				if (!L_14)
				{
					G_B7_0 = G_B3_0;
					goto IL_0044_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_3;
				NullCheck(L_15);
				int32_t L_16 = 1;
				uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
				G_B5_0 = G_B4_0;
				if (!L_17)
				{
					G_B7_0 = G_B4_0;
					goto IL_0044_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_3;
				NullCheck(L_18);
				int32_t L_19 = 2;
				uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
				G_B6_0 = G_B5_0;
				if (!L_20)
				{
					G_B7_0 = G_B5_0;
					goto IL_0044_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_3;
				NullCheck(L_21);
				int32_t L_22 = 3;
				uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				G_B8_0 = ((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
				G_B8_1 = G_B6_0;
				goto IL_0045_1;
			}

IL_0044_1:
			{
				G_B8_0 = 0;
				G_B8_1 = G_B7_0;
			}

IL_0045_1:
			{
				V_0 = (bool)((int32_t)((int32_t)G_B8_1&G_B8_0));
			}

IL_0048_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		bool L_26 = V_0;
		V_4 = L_26;
		goto IL_0062;
	}

IL_0062:
	{
		bool L_27 = V_4;
		return L_27;
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
// System.Void UdpKit.Platform.DotNet.Utils.DotNetInterface::.ctor(System.Net.NetworkInformation.NetworkInterface,UdpKit.UdpIPv4Address[],UdpKit.UdpIPv4Address[],UdpKit.UdpIPv4Address[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetInterface__ctor_m48B0751A3868E636AD7A2D7F74272BE6B1BA84DE (DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* __this, NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* ___gw1, UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* ___uni2, UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* ___multi3, const RuntimeMethod* method) 
{
	{
		UdpPlatformInterface__ctor_mEC3E8EA05F64748FA78D9442D2972DB1B9B63439(__this, NULL);
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_0 = ___n0;
		String_t* L_1;
		L_1 = DotNetInterface_ParseName_m5A7285622D0F0950A9AE68DBFDFF3A9FDCA40C5B(L_0, NULL);
		__this->___name_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_1);
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_2 = ___n0;
		int32_t L_3;
		L_3 = DotNetInterface_ParseLinkType_m53EF129013582637B9E7F1E53CE1DC1088F6992D(L_2, NULL);
		__this->___linkType_2 = L_3;
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_4 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = DotNetInterface_ParsePhysicalAddress_m5316974C84191CB7D4ACA3074A152CE62EA3CAE5(L_4, NULL);
		__this->___physicalAddress_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___physicalAddress_3), (void*)L_5);
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_6 = ___gw1;
		__this->___gatewayAddresses_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gatewayAddresses_4), (void*)L_6);
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_7 = ___uni2;
		__this->___unicastAddresses_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unicastAddresses_5), (void*)L_7);
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_8 = ___multi3;
		__this->___multicastAddresses_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___multicastAddresses_6), (void*)L_8);
		return;
	}
}
// System.String UdpKit.Platform.DotNet.Utils.DotNetInterface::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotNetInterface_get_Name_mD87EFF983A3ADE72E3C6F64360B3F29931EDF5B8 (DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___name_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// UdpKit.Platform.UdpLinkType UdpKit.Platform.DotNet.Utils.DotNetInterface::get_LinkType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetInterface_get_LinkType_mBF6EE6246EC7D4053AB880BC017A4ED36C2F06A1 (DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___linkType_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UdpKit.Platform.DotNet.Utils.DotNetInterface::get_PhysicalAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DotNetInterface_get_PhysicalAddress_m06CC83CB7A4CACBE0F9AFB9B46E844CDE89ED703 (DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___physicalAddress_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::get_GatewayAddresses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* DotNetInterface_get_GatewayAddresses_m23DE70B5DAA8C122B2F4ED34443C23B49EBA1589 (DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* __this, const RuntimeMethod* method) 
{
	UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* V_0 = NULL;
	{
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_0 = __this->___gatewayAddresses_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_1 = V_0;
		return L_1;
	}
}
// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::get_UnicastAddresses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* DotNetInterface_get_UnicastAddresses_mE04097EE53FFFBF2E1E96BFB106FB0A2E08CE59A (DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* __this, const RuntimeMethod* method) 
{
	UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* V_0 = NULL;
	{
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_0 = __this->___unicastAddresses_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_1 = V_0;
		return L_1;
	}
}
// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::get_MulticastAddresses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* DotNetInterface_get_MulticastAddresses_mF7C0F8FE1E8E5C824F2ED835B368909E0B2E20FF (DotNetInterface_t6D87EB052C18C92C39FBC53870D451BA3746091C* __this, const RuntimeMethod* method) 
{
	UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* V_0 = NULL;
	{
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_0 = __this->___multicastAddresses_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_1 = V_0;
		return L_1;
	}
}
// System.String UdpKit.Platform.DotNet.Utils.DotNetInterface::ParseName(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotNetInterface_ParseName_m5A7285622D0F0950A9AE68DBFDFF3A9FDCA40C5B (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_0 = ___n0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Net.NetworkInformation.NetworkInterface::get_Description() */, L_0);
		V_0 = L_1;
		goto IL_0015;
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
		V_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0015;
	}// end catch (depth: 1)

IL_0015:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] UdpKit.Platform.DotNet.Utils.DotNetInterface::ParsePhysicalAddress(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DotNetInterface_ParsePhysicalAddress_m5316974C84191CB7D4ACA3074A152CE62EA3CAE5 (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_0 = ___n0;
		NullCheck(L_0);
		PhysicalAddress_tBD58CB2A171D8DEFF0C882DE988D2D446EF40DEB* L_1;
		L_1 = VirtualFuncInvoker0< PhysicalAddress_tBD58CB2A171D8DEFF0C882DE988D2D446EF40DEB* >::Invoke(14 /* System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.NetworkInterface::GetPhysicalAddress() */, L_0);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = PhysicalAddress_GetAddressBytes_m580AD31C035F8FA177C2BBADF8196EBFAD400F1B(L_1, NULL);
		V_0 = L_2;
		goto IL_001b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Object)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), (uint32_t)0);
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001b;
	}// end catch (depth: 1)

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// UdpKit.Platform.UdpLinkType UdpKit.Platform.DotNet.Utils.DotNetInterface::ParseLinkType(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetInterface_ParseLinkType_m53EF129013582637B9E7F1E53CE1DC1088F6992D (NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* ___n0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NetworkInterface_t3E7DDFADB8912D0F9D001D1195EBD0FB08B7F47A* L_0 = ___n0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)62))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)26))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)62))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0040;
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)69))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)71))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0031;
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)117))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0040;
	}

IL_0038:
	{
		V_2 = 2;
		goto IL_0044;
	}

IL_003c:
	{
		V_2 = 1;
		goto IL_0044;
	}

IL_0040:
	{
		V_2 = 0;
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_IsBound_m6CA0A4232291A7A0B99FCE2E5662A576D31A0A9D_inline (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_bound_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) 
{
	{
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_0 = __this->___addressList_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFB5B3B40F26D40ADF0CD1710EAC16841C1E5B66A_gshared_inline (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 Enumerator_get_Current_mBF7FBFFD1F2788C9243520BAF7518757ABF22320_gshared_inline (Enumerator_t88D16808BDE46E50CC54AD7EA3EE59A76F56C7C6* __this, const RuntimeMethod* method) 
{
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = (UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m66CC40CC30B064D227ADB54EDE525EC305BB1BCC_gshared_inline (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8* __this, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 ___item0, const RuntimeMethod* method) 
{
	UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_1 = (UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UdpIPv4AddressU5BU5D_t4705F1FC5C29E887D61334819AF01617B60B0731* L_6 = V_0;
		int32_t L_7 = V_1;
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789)L_8);
		return;
	}

IL_0034:
	{
		UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789 L_9 = ___item0;
		((  void (*) (List_1_t3527BE6A3B21D8A3CE9D0E9754DDF95E4C6688A8*, UdpIPv4Address_t8FA90CA5E2AEFBCC2A2D3650F428F49744D83789, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m06A3DD667AA8C5A419E5D5FAD7B60332D5C17CF6_gshared_inline (List_1_t9E17C73C9F5001E9DE2CAD1F3310AA8B701FC456* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mCCF252D8C6DF0A809A2E290DB6420EF08E29EE8F_gshared_inline (HashSet_1_t4856265F298D590C1D53CDA6D561CCD4A110DA14* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}

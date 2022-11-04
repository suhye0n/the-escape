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

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface>
struct List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UdpKit.Platform.UdpPlatformInterface[]
struct UdpPlatformInterfaceU5BU5D_tA4D5283B839F3C80B6E3EAA1230DB21C4B550FF8;
// UdpKit.Platform.NullPlatform
struct NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457;
// UdpKit.Platform.NullSocket
struct NullSocket_t08E742892662802EA79318F18E338360DD62E558;
// System.String
struct String_t;
// UdpKit.Platform.UdpPlatform
struct UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF;
// UdpKit.Platform.UdpPlatformSocket
struct UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8;
// UdpKit.UdpSocket
struct UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979;

IL2CPP_EXTERN_C RuntimeClass* List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullSocket_t08E742892662802EA79318F18E338360DD62E558_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrecisionTimer_t81727287BF1EB445CDFD8AFB4108AF68DD4C9961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD808B216A565AEC0123038509D95A9E636859290_RuntimeMethod_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA3F095964C3E4900A4AA1F30C0DA7BBD28183C44 
{
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

// UdpKit.Platform.UdpPlatform
struct UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF  : public RuntimeObject
{
	// UdpKit.UdpSocket UdpKit.Platform.UdpPlatform::<udpSocket>k__BackingField
	UdpSocket_t0E04E749F179F956458067B93DFBDA3CB7848979* ___U3CudpSocketU3Ek__BackingField_0;
	// System.Object UdpKit.Platform.UdpPlatform::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_1;
};

// UdpKit.Platform.UdpPlatformSocket
struct UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8  : public RuntimeObject
{
	// System.Object UdpKit.Platform.UdpPlatformSocket::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_0;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// UdpKit.Platform.NullPlatform
struct NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457  : public UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF
{
};

// UdpKit.Platform.NullSocket
struct NullSocket_t08E742892662802EA79318F18E338360DD62E558  : public UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8
{
	// UdpKit.Platform.NullPlatform UdpKit.Platform.NullSocket::platform
	NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457* ___platform_1;
	// System.Boolean UdpKit.Platform.NullSocket::<Broadcast>k__BackingField
	bool ___U3CBroadcastU3Ek__BackingField_2;
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UdpKit.Platform.UdpPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform__ctor_m46DB9E65E17B405BAAD784DC9364057F762A259D (UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* __this, const RuntimeMethod* method) ;
// System.Void UdpKit.Platform.NullSocket::.ctor(UdpKit.Platform.NullPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSocket__ctor_mF61A4B15FF7CB8E9428AC97A1BE1BE83A71A9E8B (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457* ___p0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface>::.ctor()
inline void List_1__ctor_mD808B216A565AEC0123038509D95A9E636859290 (List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.UInt32 UdpKit.Utils.PrecisionTimer::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PrecisionTimer_GetCurrentTime_mAAD6A79E9242D0A994B553068ED836D38B8429DE (const RuntimeMethod* method) ;
// System.Void UdpKit.Platform.UdpPlatformSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatformSocket__ctor_m9176F8F020D9F899E035D33421A6563BE4D62AF1 (UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
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
// System.Void UdpKit.Platform.NullPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlatform__ctor_m3FA0ECC12C27EDE140D7EBE7C8DD929FC71830F1 (NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457* __this, const RuntimeMethod* method) 
{
	{
		UdpPlatform__ctor_m46DB9E65E17B405BAAD784DC9364057F762A259D(__this, NULL);
		uint32_t L_0;
		L_0 = VirtualFuncInvoker0< uint32_t >::Invoke(31 /* System.UInt32 UdpKit.Platform.UdpPlatform::GetPrecisionTime() */, __this);
		return;
	}
}
// UdpKit.Platform.UdpPlatformSocket UdpKit.Platform.NullPlatform::CreateSocket(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* NullPlatform_CreateSocket_mCFD220A18942D0C4ED810F35368D85B677ADD86D (NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457* __this, bool ___ipv60, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullSocket_t08E742892662802EA79318F18E338360DD62E558_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* V_0 = NULL;
	{
		NullSocket_t08E742892662802EA79318F18E338360DD62E558* L_0 = (NullSocket_t08E742892662802EA79318F18E338360DD62E558*)il2cpp_codegen_object_new(NullSocket_t08E742892662802EA79318F18E338360DD62E558_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NullSocket__ctor_mF61A4B15FF7CB8E9428AC97A1BE1BE83A71A9E8B(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpPlatformSocket_tCF8326D7907CEE0C04116972D2CEB7A7723DC7C8* L_1 = V_0;
		return L_1;
	}
}
// UdpKit.UdpSessionSource UdpKit.Platform.NullPlatform::GetSessionSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullPlatform_GetSessionSource_m12AFF181305ACD75FA53307F15CAC5B446E1E70E (NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 2;
		goto IL_0005;
	}

IL_0005:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface> UdpKit.Platform.NullPlatform::GetNetworkInterfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* NullPlatform_GetNetworkInterfaces_mA24290F7485358EF981CD4497826C249157CB2FB (NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD808B216A565AEC0123038509D95A9E636859290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* V_0 = NULL;
	{
		List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* L_0 = (List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289*)il2cpp_codegen_object_new(List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD808B216A565AEC0123038509D95A9E636859290(L_0, List_1__ctor_mD808B216A565AEC0123038509D95A9E636859290_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		List_1_t0185B8713E0F3D92D1B69C627E07AA23CD917289* L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UdpKit.Platform.NullPlatform::GetPrecisionTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NullPlatform_GetPrecisionTime_m867BD6140F20EB22933DDB4BC0331E4C8C9EB5F7 (NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457* __this, const RuntimeMethod* method) 
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
// System.Boolean UdpKit.Platform.NullPlatform::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullPlatform_get_IsNull_mA710561128DB3E7F95156339BF0B95D6644F73AC (NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457* __this, const RuntimeMethod* method) 
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
// System.Void UdpKit.Platform.NullSocket::.ctor(UdpKit.Platform.NullPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSocket__ctor_mF61A4B15FF7CB8E9428AC97A1BE1BE83A71A9E8B (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457* ___p0, const RuntimeMethod* method) 
{
	{
		UdpPlatformSocket__ctor_m9176F8F020D9F899E035D33421A6563BE4D62AF1(__this, NULL);
		NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457* L_0 = ___p0;
		__this->___platform_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platform_1), (void*)L_0);
		return;
	}
}
// System.Void UdpKit.Platform.NullSocket::Bind(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSocket_Bind_mD3F4868D40409AF49BEE3142797BFBCDE3ECA5A9 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___ep0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UdpKit.Platform.NullSocket::get_Broadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullSocket_get_Broadcast_mF86031F9F6FB3AC54F3257EEB1D15FD75DB5FE94 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CBroadcastU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UdpKit.Platform.NullSocket::set_Broadcast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSocket_set_Broadcast_m3E2F92186BEF009C3549F050D1B6E391CDC99214 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CBroadcastU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void UdpKit.Platform.NullSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSocket_Close_m5C83C6C707E1ED5DF3A856FBB928598DD36B8CC1 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// UdpKit.UdpEndPoint UdpKit.Platform.NullSocket::get_EndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 NullSocket_get_EndPoint_m17B2CADB7F62563382AAF764C9CFFA45B2521BE9 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var);
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_0 = ((UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2_il2cpp_TypeInfo_var))->___Any_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 L_1 = V_0;
		return L_1;
	}
}
// System.String UdpKit.Platform.NullSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NullSocket_get_Error_mFE8D80D355C76980682E0620AD7B61C4D15EA248 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UdpKit.Platform.NullSocket::get_IsBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullSocket_get_IsBound_mA303D60093C11B27CDA2C5F275730C2C94A0C827 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, const RuntimeMethod* method) 
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
// UdpKit.Platform.UdpPlatform UdpKit.Platform.NullSocket::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* NullSocket_get_Platform_mD34C14B1132DB277DC507F3F21321F175D2828B9 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, const RuntimeMethod* method) 
{
	UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* V_0 = NULL;
	{
		NullPlatform_tA3ED2DF0E3957217968F8EA00E00605DD47B8457* L_0 = __this->___platform_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpPlatform_tAC2E9E42D71F5AD33E449B49EB5188B9472732AF* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UdpKit.Platform.NullSocket::RecvFrom(System.Byte[],System.Int32,UdpKit.UdpEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullSocket_RecvFrom_mFA552BDC8AAE4FB0E45DE0EC0442B48F11CC9DC4 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___bufferSize1, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2* ___remoteEndpoint2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UdpKit.Platform.NullSocket::RecvPoll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullSocket_RecvPoll_m8E20297B2C6C540FE97178C819F67D321DC983F3 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, int32_t ___timeout0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___timeout0;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(1, NULL);
	}

IL_0012:
	{
		V_1 = (bool)0;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Boolean UdpKit.Platform.NullSocket::RecvPoll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullSocket_RecvPoll_m3DB97B45CA2F918AE0E5B46EC462A6B1109DD495 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, const RuntimeMethod* method) 
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
// System.Int32 UdpKit.Platform.NullSocket::SendTo(System.Byte[],System.Int32,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullSocket_SendTo_m306C91215DCACC394DA73282D7A90935EA3EDCD7 (NullSocket_t08E742892662802EA79318F18E338360DD62E558* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___bytesToSend1, UdpEndPoint_tD27A68988A036ECB8A32150E6A502A3E9C5C00E2 ___endpoint2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bytesToSend1;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

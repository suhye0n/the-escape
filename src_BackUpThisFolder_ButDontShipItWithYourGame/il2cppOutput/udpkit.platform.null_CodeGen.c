#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UdpKit.Platform.NullPlatform::.ctor()
extern void NullPlatform__ctor_m3FA0ECC12C27EDE140D7EBE7C8DD929FC71830F1 (void);
// 0x00000002 UdpKit.Platform.UdpPlatformSocket UdpKit.Platform.NullPlatform::CreateSocket(System.Boolean)
extern void NullPlatform_CreateSocket_mCFD220A18942D0C4ED810F35368D85B677ADD86D (void);
// 0x00000003 UdpKit.UdpSessionSource UdpKit.Platform.NullPlatform::GetSessionSource()
extern void NullPlatform_GetSessionSource_m12AFF181305ACD75FA53307F15CAC5B446E1E70E (void);
// 0x00000004 System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface> UdpKit.Platform.NullPlatform::GetNetworkInterfaces()
extern void NullPlatform_GetNetworkInterfaces_mA24290F7485358EF981CD4497826C249157CB2FB (void);
// 0x00000005 System.UInt32 UdpKit.Platform.NullPlatform::GetPrecisionTime()
extern void NullPlatform_GetPrecisionTime_m867BD6140F20EB22933DDB4BC0331E4C8C9EB5F7 (void);
// 0x00000006 System.Boolean UdpKit.Platform.NullPlatform::get_IsNull()
extern void NullPlatform_get_IsNull_mA710561128DB3E7F95156339BF0B95D6644F73AC (void);
// 0x00000007 System.Void UdpKit.Platform.NullSocket::.ctor(UdpKit.Platform.NullPlatform)
extern void NullSocket__ctor_mF61A4B15FF7CB8E9428AC97A1BE1BE83A71A9E8B (void);
// 0x00000008 System.Void UdpKit.Platform.NullSocket::Bind(UdpKit.UdpEndPoint)
extern void NullSocket_Bind_mD3F4868D40409AF49BEE3142797BFBCDE3ECA5A9 (void);
// 0x00000009 System.Boolean UdpKit.Platform.NullSocket::get_Broadcast()
extern void NullSocket_get_Broadcast_mF86031F9F6FB3AC54F3257EEB1D15FD75DB5FE94 (void);
// 0x0000000A System.Void UdpKit.Platform.NullSocket::set_Broadcast(System.Boolean)
extern void NullSocket_set_Broadcast_m3E2F92186BEF009C3549F050D1B6E391CDC99214 (void);
// 0x0000000B System.Void UdpKit.Platform.NullSocket::Close()
extern void NullSocket_Close_m5C83C6C707E1ED5DF3A856FBB928598DD36B8CC1 (void);
// 0x0000000C UdpKit.UdpEndPoint UdpKit.Platform.NullSocket::get_EndPoint()
extern void NullSocket_get_EndPoint_m17B2CADB7F62563382AAF764C9CFFA45B2521BE9 (void);
// 0x0000000D System.String UdpKit.Platform.NullSocket::get_Error()
extern void NullSocket_get_Error_mFE8D80D355C76980682E0620AD7B61C4D15EA248 (void);
// 0x0000000E System.Boolean UdpKit.Platform.NullSocket::get_IsBound()
extern void NullSocket_get_IsBound_mA303D60093C11B27CDA2C5F275730C2C94A0C827 (void);
// 0x0000000F UdpKit.Platform.UdpPlatform UdpKit.Platform.NullSocket::get_Platform()
extern void NullSocket_get_Platform_mD34C14B1132DB277DC507F3F21321F175D2828B9 (void);
// 0x00000010 System.Int32 UdpKit.Platform.NullSocket::RecvFrom(System.Byte[],System.Int32,UdpKit.UdpEndPoint&)
extern void NullSocket_RecvFrom_mFA552BDC8AAE4FB0E45DE0EC0442B48F11CC9DC4 (void);
// 0x00000011 System.Boolean UdpKit.Platform.NullSocket::RecvPoll(System.Int32)
extern void NullSocket_RecvPoll_m8E20297B2C6C540FE97178C819F67D321DC983F3 (void);
// 0x00000012 System.Boolean UdpKit.Platform.NullSocket::RecvPoll()
extern void NullSocket_RecvPoll_m3DB97B45CA2F918AE0E5B46EC462A6B1109DD495 (void);
// 0x00000013 System.Int32 UdpKit.Platform.NullSocket::SendTo(System.Byte[],System.Int32,UdpKit.UdpEndPoint)
extern void NullSocket_SendTo_m306C91215DCACC394DA73282D7A90935EA3EDCD7 (void);
static Il2CppMethodPointer s_methodPointers[19] = 
{
	NullPlatform__ctor_m3FA0ECC12C27EDE140D7EBE7C8DD929FC71830F1,
	NullPlatform_CreateSocket_mCFD220A18942D0C4ED810F35368D85B677ADD86D,
	NullPlatform_GetSessionSource_m12AFF181305ACD75FA53307F15CAC5B446E1E70E,
	NullPlatform_GetNetworkInterfaces_mA24290F7485358EF981CD4497826C249157CB2FB,
	NullPlatform_GetPrecisionTime_m867BD6140F20EB22933DDB4BC0331E4C8C9EB5F7,
	NullPlatform_get_IsNull_mA710561128DB3E7F95156339BF0B95D6644F73AC,
	NullSocket__ctor_mF61A4B15FF7CB8E9428AC97A1BE1BE83A71A9E8B,
	NullSocket_Bind_mD3F4868D40409AF49BEE3142797BFBCDE3ECA5A9,
	NullSocket_get_Broadcast_mF86031F9F6FB3AC54F3257EEB1D15FD75DB5FE94,
	NullSocket_set_Broadcast_m3E2F92186BEF009C3549F050D1B6E391CDC99214,
	NullSocket_Close_m5C83C6C707E1ED5DF3A856FBB928598DD36B8CC1,
	NullSocket_get_EndPoint_m17B2CADB7F62563382AAF764C9CFFA45B2521BE9,
	NullSocket_get_Error_mFE8D80D355C76980682E0620AD7B61C4D15EA248,
	NullSocket_get_IsBound_mA303D60093C11B27CDA2C5F275730C2C94A0C827,
	NullSocket_get_Platform_mD34C14B1132DB277DC507F3F21321F175D2828B9,
	NullSocket_RecvFrom_mFA552BDC8AAE4FB0E45DE0EC0442B48F11CC9DC4,
	NullSocket_RecvPoll_m8E20297B2C6C540FE97178C819F67D321DC983F3,
	NullSocket_RecvPoll_m3DB97B45CA2F918AE0E5B46EC462A6B1109DD495,
	NullSocket_SendTo_m306C91215DCACC394DA73282D7A90935EA3EDCD7,
};
static const int32_t s_InvokerIndices[19] = 
{
	6841,
	4819,
	6687,
	6715,
	6818,
	6616,
	5435,
	5534,
	6616,
	5340,
	6841,
	6821,
	6715,
	6616,
	6715,
	1433,
	3895,
	6616,
	1438,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_udpkit_platform_null_CodeGenModule;
const Il2CppCodeGenModule g_udpkit_platform_null_CodeGenModule = 
{
	"udpkit.platform.null.dll",
	19,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

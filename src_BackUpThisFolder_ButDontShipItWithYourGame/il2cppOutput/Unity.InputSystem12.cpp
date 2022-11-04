#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>
struct InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588;
// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>
struct InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputBindingComposite
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0;
// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.String
struct String_t;
// UnityEngine.InputSystem.Composites.TwoModifiersComposite
struct TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Composites.Vector2Composite
struct Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908;
// UnityEngine.InputSystem.Composites.Vector3Composite
struct Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral54458377977B39746D8739B34B60A49EA898EDAE;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputBindingCompositeContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext::m_BindingIndex
	int32_t ___m_BindingIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_BindingIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_BindingIndex_1;
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

// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=100
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D100_t31353965748512750AD1146F898DF113F5863D58 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D100_t31353965748512750AD1146F898DF113F5863D58__padding[100];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_t1449E635E32A89423960AEA56E4EDFF525C3EEDE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t1449E635E32A89423960AEA56E4EDFF525C3EEDE__padding[20];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141__padding[24];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=460
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394__padding[460];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=928
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D928_t45F2AF81CEF7FEE66F2B125F3B3A10AF7C990C44 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D928_t45F2AF81CEF7FEE66F2B125F3B3A10AF7C990C44__padding[928];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF62B85DD2C59D87BA6C8DA02965E1F3203A64E53  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tF62B85DD2C59D87BA6C8DA02965E1F3203A64E53_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::7BD1B2B340030CA32C0F7873A8B4949D42124F6206A455BA2860B27C103E8261
	__StaticArrayInitTypeSizeU3D20_t1449E635E32A89423960AEA56E4EDFF525C3EEDE ___7BD1B2B340030CA32C0F7873A8B4949D42124F6206A455BA2860B27C103E8261_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=100 <PrivateImplementationDetails>::82305DB2F44AAEADD2B0201DA206586EB13C2500F24553B6BBEB6816E41D20B4
	__StaticArrayInitTypeSizeU3D100_t31353965748512750AD1146F898DF113F5863D58 ___82305DB2F44AAEADD2B0201DA206586EB13C2500F24553B6BBEB6816E41D20B4_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=928 <PrivateImplementationDetails>::92C7758EA63714F7EE2DC9CD144CCAC9C880D649B70EDD78F2B9C28FC6FBE67A
	__StaticArrayInitTypeSizeU3D928_t45F2AF81CEF7FEE66F2B125F3B3A10AF7C990C44 ___92C7758EA63714F7EE2DC9CD144CCAC9C880D649B70EDD78F2B9C28FC6FBE67A_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=460 <PrivateImplementationDetails>::A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66
	__StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394 ___A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::EEAB0A49E323B940CB01CCD3E80D47F1566617F04466CD5D6190ACDBC495CB2A
	__StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141 ___EEAB0A49E323B940CB01CCD3E80D47F1566617F04466CD5D6190ACDBC495CB2A_4;
};

// UnityEngine.InputSystem.InputBindingComposite
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0  : public RuntimeObject
{
};

struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0_StaticFields
{
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputBindingComposite::s_Composites
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Composites_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>
struct InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>
struct InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
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

// UnityEngine.InputSystem.Composites.TwoModifiersComposite
struct TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::modifier1
	int32_t ___modifier1_1;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::modifier2
	int32_t ___modifier2_2;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::binding
	int32_t ___binding_3;
	// System.Boolean UnityEngine.InputSystem.Composites.TwoModifiersComposite::overrideModifiersNeedToBePressedFirst
	bool ___overrideModifiersNeedToBePressedFirst_4;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::m_ValueSizeInBytes
	int32_t ___m_ValueSizeInBytes_5;
	// System.Type UnityEngine.InputSystem.Composites.TwoModifiersComposite::m_ValueType
	Type_t* ___m_ValueType_6;
	// System.Boolean UnityEngine.InputSystem.Composites.TwoModifiersComposite::m_BindingIsButton
	bool ___m_BindingIsButton_7;
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

// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String[] UnityEngine.InputSystem.InputSettings::m_SupportedDevices
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_SupportedDevices_4;
	// UnityEngine.InputSystem.InputSettings/UpdateMode UnityEngine.InputSystem.InputSettings::m_UpdateMode
	int32_t ___m_UpdateMode_5;
	// System.Int32 UnityEngine.InputSystem.InputSettings::m_MaxEventBytesPerUpdate
	int32_t ___m_MaxEventBytesPerUpdate_6;
	// System.Int32 UnityEngine.InputSystem.InputSettings::m_MaxQueuedEventsPerUpdate
	int32_t ___m_MaxQueuedEventsPerUpdate_7;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_CompensateForScreenOrientation
	bool ___m_CompensateForScreenOrientation_8;
	// UnityEngine.InputSystem.InputSettings/BackgroundBehavior UnityEngine.InputSystem.InputSettings::m_BackgroundBehavior
	int32_t ___m_BackgroundBehavior_9;
	// UnityEngine.InputSystem.InputSettings/EditorInputBehaviorInPlayMode UnityEngine.InputSystem.InputSettings::m_EditorInputBehaviorInPlayMode
	int32_t ___m_EditorInputBehaviorInPlayMode_10;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMin
	float ___m_DefaultDeadzoneMin_11;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMax
	float ___m_DefaultDeadzoneMax_12;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultButtonPressPoint
	float ___m_DefaultButtonPressPoint_13;
	// System.Single UnityEngine.InputSystem.InputSettings::m_ButtonReleaseThreshold
	float ___m_ButtonReleaseThreshold_14;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultTapTime
	float ___m_DefaultTapTime_15;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultSlowTapTime
	float ___m_DefaultSlowTapTime_16;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultHoldTime
	float ___m_DefaultHoldTime_17;
	// System.Single UnityEngine.InputSystem.InputSettings::m_TapRadius
	float ___m_TapRadius_18;
	// System.Single UnityEngine.InputSystem.InputSettings::m_MultiTapDelayTime
	float ___m_MultiTapDelayTime_19;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_DisableRedundantEventsMerging
	bool ___m_DisableRedundantEventsMerging_20;
	// System.Collections.Generic.HashSet`1<System.String> UnityEngine.InputSystem.InputSettings::m_FeatureFlags
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___m_FeatureFlags_21;
};

// UnityEngine.InputSystem.Composites.Vector2Composite
struct Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908  : public InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588
{
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::up
	int32_t ___up_1;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::down
	int32_t ___down_2;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::left
	int32_t ___left_3;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::right
	int32_t ___right_4;
	// System.Boolean UnityEngine.InputSystem.Composites.Vector2Composite::normalize
	bool ___normalize_5;
	// UnityEngine.InputSystem.Composites.Vector2Composite/Mode UnityEngine.InputSystem.Composites.Vector2Composite::mode
	int32_t ___mode_6;
};

// UnityEngine.InputSystem.Composites.Vector3Composite
struct Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0  : public InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306
{
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::up
	int32_t ___up_1;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::down
	int32_t ___down_2;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::left
	int32_t ___left_3;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::right
	int32_t ___right_4;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::forward
	int32_t ___forward_5;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::backward
	int32_t ___backward_6;
	// UnityEngine.InputSystem.Composites.Vector3Composite/Mode UnityEngine.InputSystem.Composites.Vector3Composite::mode
	int32_t ___mode_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// TValue UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue<System.Single>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_gshared (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_gshared (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_gshared (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.InputSystem.Composites.TwoModifiersComposite::ModifiersArePressed(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwoModifiersComposite_ModifiersArePressed_m0D7D12C3139BE7B2CDB1DBDB3C2A59AE584F49C8 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) ;
// System.Single UnityEngine.InputSystem.InputBindingCompositeContext::EvaluateMagnitude(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue(System.Int32,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingCompositeContext_ReadValue_mC797CA9EDA827FF511B0771EEF21F1B271CF16D8 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, void* ___buffer1, int32_t ___bufferSize2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1 (void* ___destination0, int64_t ___size1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputBindingCompositeContext::ReadValueAsButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// System.Double UnityEngine.InputSystem.InputBindingCompositeContext::GetPressTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::DetermineValueTypeAndSize(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Int32,System.Type&,System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_DetermineValueTypeAndSize_m872B0A8E5DEA6864048B0D08DE31FFBA40C442AA (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, int32_t ___part1, Type_t** ___valueType2, int32_t* ___valueSizeInBytes3, bool* ___isButton4, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputSettings UnityEngine.InputSystem.InputSystem::get_settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputSettings::IsFeatureEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputSettings_IsFeatureEnabled_mA9209A0E45A1FECA302CD2F39965735CC4897E68 (InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* __this, String_t* ___featureName0, const RuntimeMethod* method) ;
// System.Object UnityEngine.InputSystem.InputBindingCompositeContext::ReadValueAsObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputBindingCompositeContext_ReadValueAsObject_mB707A8B03313DBFE4A3DF4867FE6A20AAAFB1882 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A (InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue<System.Single>(System.Int32)
inline float InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method)
{
	return ((  float (*) (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390*, int32_t, const RuntimeMethod*))InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_gshared)(__this, ___partNumber0, method);
}
// UnityEngine.Vector2 UnityEngine.InputSystem.Controls.DpadControl::MakeDpadVector(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DpadControl_MakeDpadVector_m5F53CF11B80175D8FF9856B2E126978C65C82CE6 (float ___up0, float ___down1, float ___left2, float ___right3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.InputSystem.Controls.DpadControl::MakeDpadVector(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DpadControl_MakeDpadVector_mAA0FB9313820797F8F1DCB006A8F2341604CB7F5 (bool ___up0, bool ___down1, bool ___left2, bool ___right3, bool ___normalize4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::.ctor()
inline void InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545 (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588* __this, const RuntimeMethod* method)
{
	((  void (*) (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588*, const RuntimeMethod*))InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>::.ctor()
inline void InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789 (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306* __this, const RuntimeMethod* method)
{
	((  void (*) (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306*, const RuntimeMethod*))InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type UnityEngine.InputSystem.Composites.TwoModifiersComposite::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TwoModifiersComposite_get_valueType_mD7C59304C3F9F7C9A49C29F705E500781CAE6125 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	{
		// public override Type valueType => m_ValueType;
		Type_t* L_0 = __this->___m_ValueType_6;
		return L_0;
	}
}
// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::get_valueSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwoModifiersComposite_get_valueSizeInBytes_m534C8107DAC6BC8F0DCCE80128D5BDB13F4F662A (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	{
		// public override int valueSizeInBytes => m_ValueSizeInBytes;
		int32_t L_0 = __this->___m_ValueSizeInBytes_5;
		return L_0;
	}
}
// System.Single UnityEngine.InputSystem.Composites.TwoModifiersComposite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TwoModifiersComposite_EvaluateMagnitude_mBAC0B38247A658D8487B23A3BBD54CC8DFD37314 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// if (ModifiersArePressed(ref context))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		bool L_1;
		L_1 = TwoModifiersComposite_ModifiersArePressed_m0D7D12C3139BE7B2CDB1DBDB3C2A59AE584F49C8(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return context.EvaluateMagnitude(binding);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___binding_3;
		float L_5;
		L_5 = InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A(L_3, L_4, NULL);
		V_1 = L_5;
		goto IL_0023;
	}

IL_001b:
	{
		// return default;
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		// }
		float L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite_ReadValue_mD57B7904321CE14F2796449A3A7E832FE27459B4 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, void* ___buffer1, int32_t ___bufferSize2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (ModifiersArePressed(ref context))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		bool L_1;
		L_1 = TwoModifiersComposite_ModifiersArePressed_m0D7D12C3139BE7B2CDB1DBDB3C2A59AE584F49C8(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// context.ReadValue(binding, buffer, bufferSize);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___binding_3;
		void* L_5 = ___buffer1;
		int32_t L_6 = ___bufferSize2;
		InputBindingCompositeContext_ReadValue_mC797CA9EDA827FF511B0771EEF21F1B271CF16D8(L_3, L_4, L_5, L_6, NULL);
		goto IL_002b;
	}

IL_001d:
	{
		// UnsafeUtility.MemClear(buffer, m_ValueSizeInBytes);
		void* L_7 = ___buffer1;
		int32_t L_8 = __this->___m_ValueSizeInBytes_5;
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_7, ((int64_t)L_8), NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.InputSystem.Composites.TwoModifiersComposite::ModifiersArePressed(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwoModifiersComposite_ModifiersArePressed_m0D7D12C3139BE7B2CDB1DBDB3C2A59AE584F49C8 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// var modifiersDown = context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier1_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___modifier2_2;
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		// if (modifiersDown && m_BindingIsButton && !overrideModifiersNeedToBePressedFirst)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		bool L_7 = __this->___m_BindingIsButton_7;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		bool L_8 = __this->___overrideModifiersNeedToBePressedFirst_4;
		G_B7_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B7_0 = 0;
	}

IL_0036:
	{
		V_1 = (bool)G_B7_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		// var timestamp = context.GetPressTime(binding);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_10 = ___context0;
		int32_t L_11 = __this->___binding_3;
		double L_12;
		L_12 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_10, L_11, NULL);
		V_2 = L_12;
		// var timestamp1 = context.GetPressTime(modifier1);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_13 = ___context0;
		int32_t L_14 = __this->___modifier1_1;
		double L_15;
		L_15 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_13, L_14, NULL);
		V_3 = L_15;
		// var timestamp2 = context.GetPressTime(modifier2);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_16 = ___context0;
		int32_t L_17 = __this->___modifier2_2;
		double L_18;
		L_18 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_16, L_17, NULL);
		V_4 = L_18;
		// return timestamp1 <= timestamp && timestamp2 <= timestamp;
		double L_19 = V_3;
		double L_20 = V_2;
		if ((!(((double)L_19) <= ((double)L_20))))
		{
			goto IL_0071;
		}
	}
	{
		double L_21 = V_4;
		double L_22 = V_2;
		G_B11_0 = ((((int32_t)((!(((double)L_21) <= ((double)L_22)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0072;
	}

IL_0071:
	{
		G_B11_0 = 0;
	}

IL_0072:
	{
		V_5 = (bool)G_B11_0;
		goto IL_007b;
	}

IL_0076:
	{
		// return modifiersDown;
		bool L_23 = V_0;
		V_5 = L_23;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		bool L_24 = V_5;
		return L_24;
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::FinishSetup(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite_FinishSetup_mE13073D787D428DF4B1DD76A525F543D266CBF38 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54458377977B39746D8739B34B60A49EA898EDAE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// OneModifierComposite.DetermineValueTypeAndSize(ref context, binding, out m_ValueType, out m_ValueSizeInBytes, out m_BindingIsButton);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___binding_3;
		Type_t** L_2 = (&__this->___m_ValueType_6);
		int32_t* L_3 = (&__this->___m_ValueSizeInBytes_5);
		bool* L_4 = (&__this->___m_BindingIsButton_7);
		OneModifierComposite_DetermineValueTypeAndSize_m872B0A8E5DEA6864048B0D08DE31FFBA40C442AA(L_0, L_1, L_2, L_3, L_4, NULL);
		// if (!overrideModifiersNeedToBePressedFirst)
		bool L_5 = __this->___overrideModifiersNeedToBePressedFirst_4;
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// overrideModifiersNeedToBePressedFirst =
		//     InputSystem.settings.IsFeatureEnabled(InputFeatureNames.kDisableShortcutSupport);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_7;
		L_7 = InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74(NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = InputSettings_IsFeatureEnabled_mA9209A0E45A1FECA302CD2F39965735CC4897E68(L_7, _stringLiteral54458377977B39746D8739B34B60A49EA898EDAE, NULL);
		__this->___overrideModifiersNeedToBePressedFirst_4 = L_8;
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Object UnityEngine.InputSystem.Composites.TwoModifiersComposite::ReadValueAsObject(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TwoModifiersComposite_ReadValueAsObject_m167D7477D6B669FF931EF962102B39F44305BFAE (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier1_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___modifier2_2;
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return context.ReadValueAsObject(binding);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_7 = ___context0;
		int32_t L_8 = __this->___binding_3;
		RuntimeObject* L_9;
		L_9 = InputBindingCompositeContext_ReadValueAsObject_mB707A8B03313DBFE4A3DF4867FE6A20AAAFB1882(L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_0035;
	}

IL_0031:
	{
		// return null;
		V_1 = NULL;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		RuntimeObject* L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite__ctor_m46086F35D8EE4E52A60DB087F8C7D5E5AA3CB880 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	{
		InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A(__this, NULL);
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
// UnityEngine.Vector2 UnityEngine.InputSystem.Composites.Vector2Composite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Composite_ReadValue_m32E400A5EEBEDD51B029B08B7E35777A91A85439 (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	{
		// var mode = this.mode;
		int32_t L_0 = __this->___mode_6;
		V_0 = L_0;
		// if (mode == Mode.Analog)
		int32_t L_1 = V_0;
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		// var upValue = context.ReadValue<float>(up);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___up_1;
		float L_5;
		L_5 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_3, L_4, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_6 = L_5;
		// var downValue = context.ReadValue<float>(down);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_6 = ___context0;
		int32_t L_7 = __this->___down_2;
		float L_8;
		L_8 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_6, L_7, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_7 = L_8;
		// var leftValue = context.ReadValue<float>(left);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_9 = ___context0;
		int32_t L_10 = __this->___left_3;
		float L_11;
		L_11 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_9, L_10, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_8 = L_11;
		// var rightValue = context.ReadValue<float>(right);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_12 = ___context0;
		int32_t L_13 = __this->___right_4;
		float L_14;
		L_14 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_12, L_13, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_9 = L_14;
		// return DpadControl.MakeDpadVector(upValue, downValue, leftValue, rightValue);
		float L_15 = V_6;
		float L_16 = V_7;
		float L_17 = V_8;
		float L_18 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = DpadControl_MakeDpadVector_m5F53CF11B80175D8FF9856B2E126978C65C82CE6(L_15, L_16, L_17, L_18, NULL);
		V_10 = L_19;
		goto IL_00b4;
	}

IL_005c:
	{
		// var upIsPressed = context.ReadValueAsButton(up);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_20 = ___context0;
		int32_t L_21 = __this->___up_1;
		bool L_22;
		L_22 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_20, L_21, NULL);
		V_1 = L_22;
		// var downIsPressed = context.ReadValueAsButton(down);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_23 = ___context0;
		int32_t L_24 = __this->___down_2;
		bool L_25;
		L_25 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_23, L_24, NULL);
		V_2 = L_25;
		// var leftIsPressed = context.ReadValueAsButton(left);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_26 = ___context0;
		int32_t L_27 = __this->___left_3;
		bool L_28;
		L_28 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_26, L_27, NULL);
		V_3 = L_28;
		// var rightIsPressed = context.ReadValueAsButton(right);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_29 = ___context0;
		int32_t L_30 = __this->___right_4;
		bool L_31;
		L_31 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_29, L_30, NULL);
		V_4 = L_31;
		// if (!normalize) // Was on by default.
		bool L_32 = __this->___normalize_5;
		V_11 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_00a2;
		}
	}
	{
		// mode = Mode.Digital;
		V_0 = 1;
	}

IL_00a2:
	{
		// return DpadControl.MakeDpadVector(upIsPressed, downIsPressed, leftIsPressed, rightIsPressed, mode == Mode.DigitalNormalized);
		bool L_34 = V_1;
		bool L_35 = V_2;
		bool L_36 = V_3;
		bool L_37 = V_4;
		int32_t L_38 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = DpadControl_MakeDpadVector_mAA0FB9313820797F8F1DCB006A8F2341604CB7F5(L_34, L_35, L_36, L_37, (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0), NULL);
		V_10 = L_39;
		goto IL_00b4;
	}

IL_00b4:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_10;
		return L_40;
	}
}
// System.Single UnityEngine.InputSystem.Composites.Vector2Composite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Composite_EvaluateMagnitude_m019D431241F2FA113EB0CF79D0092315AA5942CE (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var value = ReadValue(ref context);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = VirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		V_0 = L_1;
		// return value.magnitude;
		float L_2;
		L_2 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		V_1 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.InputSystem.Composites.Vector2Composite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Composite__ctor_m1625F6C3829296D1C12B55EF496E38EDC8D05006 (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [InputControl(layout = "Axis")] public int up = 0;
		__this->___up_1 = 0;
		// [InputControl(layout = "Axis")] public int down = 0;
		__this->___down_2 = 0;
		// [InputControl(layout = "Axis")] public int left = 0;
		__this->___left_3 = 0;
		// [InputControl(layout = "Axis")] public int right = 0;
		__this->___right_4 = 0;
		// public bool normalize = true;
		__this->___normalize_5 = (bool)1;
		InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545(__this, InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var);
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
// UnityEngine.Vector3 UnityEngine.InputSystem.Composites.Vector3Composite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Composite_ReadValue_m6D1BA73F518C68CDF4AEDAF1A48BA2F7ABF59AE1 (Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	float G_B5_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B17_0 = 0.0f;
	float G_B20_0 = 0.0f;
	{
		// if (mode == Mode.Analog)
		int32_t L_0 = __this->___mode_7;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0078;
		}
	}
	{
		// var upValue = context.ReadValue<float>(up);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_2 = ___context0;
		int32_t L_3 = __this->___up_1;
		float L_4;
		L_4 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_2, L_3, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_1 = L_4;
		// var downValue = context.ReadValue<float>(down);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_5 = ___context0;
		int32_t L_6 = __this->___down_2;
		float L_7;
		L_7 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_5, L_6, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_2 = L_7;
		// var leftValue = context.ReadValue<float>(left);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_8 = ___context0;
		int32_t L_9 = __this->___left_3;
		float L_10;
		L_10 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_8, L_9, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_3 = L_10;
		// var rightValue = context.ReadValue<float>(right);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_11 = ___context0;
		int32_t L_12 = __this->___right_4;
		float L_13;
		L_13 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_11, L_12, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_4 = L_13;
		// var forwardValue = context.ReadValue<float>(forward);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_14 = ___context0;
		int32_t L_15 = __this->___forward_5;
		float L_16;
		L_16 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_14, L_15, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_5 = L_16;
		// var backwardValue = context.ReadValue<float>(backward);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_17 = ___context0;
		int32_t L_18 = __this->___backward_6;
		float L_19;
		L_19 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_17, L_18, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_6 = L_19;
		// return new Vector3(rightValue - leftValue, upValue - downValue, forwardValue - backwardValue);
		float L_20 = V_4;
		float L_21 = V_3;
		float L_22 = V_1;
		float L_23 = V_2;
		float L_24 = V_5;
		float L_25 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), ((float)il2cpp_codegen_subtract(L_20, L_21)), ((float)il2cpp_codegen_subtract(L_22, L_23)), ((float)il2cpp_codegen_subtract(L_24, L_25)), /*hidden argument*/NULL);
		V_7 = L_26;
		goto IL_0155;
	}

IL_0078:
	{
		// var upValue = context.ReadValueAsButton(up) ? 1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_27 = ___context0;
		int32_t L_28 = __this->___up_1;
		bool L_29;
		L_29 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_27, L_28, NULL);
		if (L_29)
		{
			goto IL_008e;
		}
	}
	{
		G_B5_0 = (0.0f);
		goto IL_0093;
	}

IL_008e:
	{
		G_B5_0 = (1.0f);
	}

IL_0093:
	{
		V_8 = G_B5_0;
		// var downValue = context.ReadValueAsButton(down) ? -1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_30 = ___context0;
		int32_t L_31 = __this->___down_2;
		bool L_32;
		L_32 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_00aa;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_00af;
	}

IL_00aa:
	{
		G_B8_0 = (-1.0f);
	}

IL_00af:
	{
		V_9 = G_B8_0;
		// var leftValue = context.ReadValueAsButton(left) ? -1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_33 = ___context0;
		int32_t L_34 = __this->___left_3;
		bool L_35;
		L_35 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_33, L_34, NULL);
		if (L_35)
		{
			goto IL_00c6;
		}
	}
	{
		G_B11_0 = (0.0f);
		goto IL_00cb;
	}

IL_00c6:
	{
		G_B11_0 = (-1.0f);
	}

IL_00cb:
	{
		V_10 = G_B11_0;
		// var rightValue = context.ReadValueAsButton(right) ? 1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_36 = ___context0;
		int32_t L_37 = __this->___right_4;
		bool L_38;
		L_38 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_36, L_37, NULL);
		if (L_38)
		{
			goto IL_00e2;
		}
	}
	{
		G_B14_0 = (0.0f);
		goto IL_00e7;
	}

IL_00e2:
	{
		G_B14_0 = (1.0f);
	}

IL_00e7:
	{
		V_11 = G_B14_0;
		// var forwardValue = context.ReadValueAsButton(forward) ? 1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_39 = ___context0;
		int32_t L_40 = __this->___forward_5;
		bool L_41;
		L_41 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_39, L_40, NULL);
		if (L_41)
		{
			goto IL_00fe;
		}
	}
	{
		G_B17_0 = (0.0f);
		goto IL_0103;
	}

IL_00fe:
	{
		G_B17_0 = (1.0f);
	}

IL_0103:
	{
		V_12 = G_B17_0;
		// var backwardValue = context.ReadValueAsButton(backward) ? -1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_42 = ___context0;
		int32_t L_43 = __this->___backward_6;
		bool L_44;
		L_44 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_42, L_43, NULL);
		if (L_44)
		{
			goto IL_011a;
		}
	}
	{
		G_B20_0 = (0.0f);
		goto IL_011f;
	}

IL_011a:
	{
		G_B20_0 = (-1.0f);
	}

IL_011f:
	{
		V_13 = G_B20_0;
		// var vector = new Vector3(leftValue + rightValue, upValue + downValue, forwardValue + backwardValue);
		float L_45 = V_10;
		float L_46 = V_11;
		float L_47 = V_8;
		float L_48 = V_9;
		float L_49 = V_12;
		float L_50 = V_13;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_14), ((float)il2cpp_codegen_add(L_45, L_46)), ((float)il2cpp_codegen_add(L_47, L_48)), ((float)il2cpp_codegen_add(L_49, L_50)), NULL);
		// if (mode == Mode.DigitalNormalized)
		int32_t L_51 = __this->___mode_7;
		V_15 = (bool)((((int32_t)L_51) == ((int32_t)1))? 1 : 0);
		bool L_52 = V_15;
		if (!L_52)
		{
			goto IL_014f;
		}
	}
	{
		// vector = vector.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_14), NULL);
		V_14 = L_53;
	}

IL_014f:
	{
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_14;
		V_7 = L_54;
		goto IL_0155;
	}

IL_0155:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_7;
		return L_55;
	}
}
// System.Void UnityEngine.InputSystem.Composites.Vector3Composite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Composite__ctor_m7411C64277DE74720952DC246F08B6970AB6F5DD (Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Mode mode = Mode.Analog;
		__this->___mode_7 = 0;
		InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789(__this, InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// Board
struct Board_t2083606692;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Random
struct Random_t1044426839;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Component
struct Component_t3819376471;
// CameraMovement
struct CameraMovement_t3913171250;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Void
struct Void_t1841601450;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

extern RuntimeClass* Random_t1044426839_il2cpp_TypeInfo_var;
extern const uint32_t Board_Start_m4214420969_MetadataUsageId;
extern RuntimeClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1756533147_m924818194_RuntimeMethod_var;
extern const uint32_t Board_GenerateBoard_m4105467426_MetadataUsageId;
extern RuntimeClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern const uint32_t CameraMovement_Update_m4017771220_MetadataUsageId;

struct GameObjectU5BU5D_t3057952154;


#ifndef U3CMODULEU3E_T3783534224_H
#define U3CMODULEU3E_T3783534224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534224 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534224_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1328083999* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1328083999* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1328083999** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1328083999* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef RANDOM_T1044426839_H
#define RANDOM_T1044426839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t1044426839  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t3030399641* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t1044426839, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t1044426839, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t1044426839, ___SeedArray_2)); }
	inline Int32U5BU5D_t3030399641* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t3030399641** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t3030399641* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T1044426839_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_3)); }
	inline Vector3_t2243707580  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t2243707580  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_4)); }
	inline Vector3_t2243707580  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t2243707580 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t2243707580  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_5)); }
	inline Vector3_t2243707580  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t2243707580 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t2243707580  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_6)); }
	inline Vector3_t2243707580  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t2243707580 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t2243707580  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_7)); }
	inline Vector3_t2243707580  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t2243707580 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t2243707580  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_8)); }
	inline Vector3_t2243707580  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t2243707580 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t2243707580  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_9)); }
	inline Vector3_t2243707580  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t2243707580  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_10)); }
	inline Vector3_t2243707580  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t2243707580 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t2243707580  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef GAMEOBJECT_T1756533147_H
#define GAMEOBJECT_T1756533147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1756533147  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1756533147_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef TRANSFORM_T3275118058_H
#define TRANSFORM_T3275118058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3275118058  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3275118058_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef BOARD_T2083606692_H
#define BOARD_T2083606692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Board
struct  Board_t2083606692  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] Board::tiles
	GameObjectU5BU5D_t3057952154* ___tiles_2;
	// System.Int32 Board::width
	int32_t ___width_3;
	// System.Int32 Board::height
	int32_t ___height_4;
	// System.Single Board::tileSize
	float ___tileSize_5;

public:
	inline static int32_t get_offset_of_tiles_2() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___tiles_2)); }
	inline GameObjectU5BU5D_t3057952154* get_tiles_2() const { return ___tiles_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_tiles_2() { return &___tiles_2; }
	inline void set_tiles_2(GameObjectU5BU5D_t3057952154* value)
	{
		___tiles_2 = value;
		Il2CppCodeGenWriteBarrier((&___tiles_2), value);
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___width_3)); }
	inline int32_t get_width_3() const { return ___width_3; }
	inline int32_t* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(int32_t value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___height_4)); }
	inline int32_t get_height_4() const { return ___height_4; }
	inline int32_t* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(int32_t value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_tileSize_5() { return static_cast<int32_t>(offsetof(Board_t2083606692, ___tileSize_5)); }
	inline float get_tileSize_5() const { return ___tileSize_5; }
	inline float* get_address_of_tileSize_5() { return &___tileSize_5; }
	inline void set_tileSize_5(float value)
	{
		___tileSize_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOARD_T2083606692_H
#ifndef CAMERAMOVEMENT_T3913171250_H
#define CAMERAMOVEMENT_T3913171250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMovement
struct  CameraMovement_t3913171250  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CameraMovement::speed
	float ___speed_2;
	// System.Single CameraMovement::maxX
	float ___maxX_3;
	// System.Single CameraMovement::maxY
	float ___maxY_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CameraMovement_t3913171250, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_maxX_3() { return static_cast<int32_t>(offsetof(CameraMovement_t3913171250, ___maxX_3)); }
	inline float get_maxX_3() const { return ___maxX_3; }
	inline float* get_address_of_maxX_3() { return &___maxX_3; }
	inline void set_maxX_3(float value)
	{
		___maxX_3 = value;
	}

	inline static int32_t get_offset_of_maxY_4() { return static_cast<int32_t>(offsetof(CameraMovement_t3913171250, ___maxY_4)); }
	inline float get_maxY_4() const { return ___maxY_4; }
	inline float* get_address_of_maxY_4() { return &___maxY_4; }
	inline void set_maxY_4(float value)
	{
		___maxY_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAMOVEMENT_T3913171250_H
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1756533147 * m_Items[1];

public:
	inline GameObject_t1756533147 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1756533147 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1756533147 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1756533147 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m3295167080_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1825328214 (MonoBehaviour_t1158329972 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor()
extern "C"  void Random__ctor_m1561335652 (Random_t1044426839 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Board::GenerateBoard(System.Random)
extern "C"  void Board_GenerateBoard_m4105467426 (Board_t2083606692 * __this, Random_t1044426839 * ___random0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1756533147_m924818194(__this /* static, unused */, p0, method) ((  GameObject_t1756533147 * (*) (RuntimeObject * /* static, unused */, GameObject_t1756533147 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m3295167080_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m3490276752 (GameObject_t1756533147 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m2159020946 (Component_t3819376471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m3178143156 (Transform_t3275118058 * __this, Transform_t3275118058 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Board::IndexToPosition(System.Int32,System.Int32)
extern "C"  Vector3_t2243707580  Board_IndexToPosition_m2493080723 (Board_t2083606692 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m1073050816 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m1555724485 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m948504553 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m2923680153 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m2304215762 (Transform_t3275118058 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m3925508629 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m1779415170 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2942701431 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Board::.ctor()
extern "C"  void Board__ctor_m1771146417 (Board_t2083606692 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Board::Start()
extern "C"  void Board_Start_m4214420969 (Board_t2083606692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_Start_m4214420969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t1044426839 * V_0 = NULL;
	{
		Random_t1044426839 * L_0 = (Random_t1044426839 *)il2cpp_codegen_object_new(Random_t1044426839_il2cpp_TypeInfo_var);
		Random__ctor_m1561335652(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Random_t1044426839 * L_1 = V_0;
		Board_GenerateBoard_m4105467426(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Board::GenerateBoard(System.Random)
extern "C"  void Board_GenerateBoard_m4105467426 (Board_t2083606692 * __this, Random_t1044426839 * ___random0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Board_GenerateBoard_m4105467426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GameObject_t1756533147 * V_3 = NULL;
	{
		V_0 = 0;
		goto IL_0068;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0058;
	}

IL_000e:
	{
		Random_t1044426839 * L_0 = ___random0;
		GameObjectU5BU5D_t3057952154* L_1 = __this->get_tiles_2();
		int32_t L_2 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32) */, L_0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))));
		V_2 = L_2;
		GameObjectU5BU5D_t3057952154* L_3 = __this->get_tiles_2();
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		GameObject_t1756533147 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_7 = Object_Instantiate_TisGameObject_t1756533147_m924818194(NULL /*static, unused*/, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m924818194_RuntimeMethod_var);
		V_3 = L_7;
		GameObject_t1756533147 * L_8 = V_3;
		Transform_t3275118058 * L_9 = GameObject_get_transform_m3490276752(L_8, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_10 = Component_get_gameObject_m2159020946(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_11 = GameObject_get_transform_m3490276752(L_10, /*hidden argument*/NULL);
		Transform_set_parent_m3178143156(L_9, L_11, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_12 = V_3;
		Transform_t3275118058 * L_13 = GameObject_get_transform_m3490276752(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		Vector3_t2243707580  L_16 = Board_IndexToPosition_m2493080723(__this, L_14, L_15, /*hidden argument*/NULL);
		Transform_set_localPosition_m1073050816(L_13, L_16, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = __this->get_height_4();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0068:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = __this->get_width_3();
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Vector3 Board::IndexToPosition(System.Int32,System.Int32)
extern "C"  Vector3_t2243707580  Board_IndexToPosition_m2493080723 (Board_t2083606692 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->get_height_4();
		float L_1 = __this->get_tileSize_5();
		V_0 = ((float)((float)((float)((float)(((float)((float)((-L_0)))))*(float)L_1))/(float)(2.0f)));
		int32_t L_2 = __this->get_width_3();
		float L_3 = __this->get_tileSize_5();
		V_1 = ((float)((float)((float)((float)(((float)((float)((-L_2)))))*(float)L_3))/(float)(2.0f)));
		float L_4 = V_1;
		float L_5 = __this->get_tileSize_5();
		int32_t L_6 = ___i0;
		float L_7 = V_0;
		float L_8 = __this->get_tileSize_5();
		int32_t L_9 = ___j1;
		Vector3_t2243707580  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector3__ctor_m1555724485((&L_10), ((float)((float)L_4+(float)((float)((float)L_5*(float)(((float)((float)L_6))))))), ((float)((float)L_7+(float)((float)((float)L_8*(float)(((float)((float)L_9))))))), (0.0f), /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void CameraMovement::.ctor()
extern "C"  void CameraMovement__ctor_m1084742637 (CameraMovement_t3913171250 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_2((1.0f));
		__this->set_maxX_3((10.0f));
		__this->set_maxY_4((10.0f));
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMovement::Update()
extern "C"  void CameraMovement_Update_m4017771220 (CameraMovement_t3913171250 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMovement_Update_m4017771220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m948504553(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m2923680153(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m2159020946(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_4 = GameObject_get_transform_m3490276752(L_3, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m2159020946(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_6 = GameObject_get_transform_m3490276752(L_5, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = Transform_get_position_m2304215762(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8 = (&V_0)->get_x_0();
		float L_9 = Input_GetAxis_m948504553(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		float L_10 = Time_get_deltaTime_m3925508629(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = __this->get_speed_2();
		float L_12 = __this->get_maxX_3();
		float L_13 = __this->get_maxX_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_14 = Mathf_Clamp_m1779415170(NULL /*static, unused*/, ((float)((float)L_8+(float)((float)((float)((float)((float)L_9*(float)L_10))*(float)L_11)))), ((-L_12)), L_13, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_15 = Component_get_gameObject_m2159020946(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_16 = GameObject_get_transform_m3490276752(L_15, /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = Transform_get_position_m2304215762(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		float L_18 = (&V_1)->get_y_1();
		float L_19 = Input_GetAxis_m948504553(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		float L_20 = Time_get_deltaTime_m3925508629(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_21 = __this->get_speed_2();
		float L_22 = __this->get_maxY_4();
		float L_23 = __this->get_maxY_4();
		float L_24 = Mathf_Clamp_m1779415170(NULL /*static, unused*/, ((float)((float)L_18+(float)((float)((float)((float)((float)L_19*(float)L_20))*(float)L_21)))), ((-L_22)), L_23, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_25 = Component_get_gameObject_m2159020946(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_26 = GameObject_get_transform_m3490276752(L_25, /*hidden argument*/NULL);
		Vector3_t2243707580  L_27 = Transform_get_position_m2304215762(L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		float L_28 = (&V_2)->get_z_2();
		Vector3_t2243707580  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Vector3__ctor_m1555724485((&L_29), L_14, L_24, L_28, /*hidden argument*/NULL);
		Transform_set_position_m2942701431(L_4, L_29, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

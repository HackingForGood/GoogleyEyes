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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_Login3555589017.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Coroutine2299508840.h"
#include "AssemblyU2DCSharp_Login_U3CLoginMeU3Ec__Iterator02996399230.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_Login_U3CErrorMeU3Ec__Iterator14079153944.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_UInt322149682021.h"
#include "UnityEngine_UnityEngine_WaitForSeconds3839502067.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_NotSupportedException1793819818.h"

// Login
struct Login_t3555589017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// Login/<LoginMe>c__Iterator0
struct U3CLoginMeU3Ec__Iterator0_t2996399230;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Login/<ErrorMe>c__Iterator1
struct U3CErrorMeU3Ec__Iterator1_t4079153944;
// System.Object
struct Il2CppObject;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;
// System.NotSupportedException
struct NotSupportedException_t1793819818;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3561732527;
extern const uint32_t Login_TryLogin_m959745324_MetadataUsageId;
extern Il2CppClass* U3CLoginMeU3Ec__Iterator0_t2996399230_il2cpp_TypeInfo_var;
extern const uint32_t Login_LoginMe_m1551488825_MetadataUsageId;
extern Il2CppClass* U3CErrorMeU3Ec__Iterator1_t4079153944_il2cpp_TypeInfo_var;
extern const uint32_t Login_ErrorMe_m4195111504_MetadataUsageId;
extern Il2CppClass* WaitForSeconds_t3839502067_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1034300389;
extern const uint32_t U3CErrorMeU3Ec__Iterator1_MoveNext_m685666191_MetadataUsageId;
extern Il2CppClass* NotSupportedException_t1793819818_il2cpp_TypeInfo_var;
extern const uint32_t U3CErrorMeU3Ec__Iterator1_Reset_m78764440_MetadataUsageId;
extern const uint32_t U3CLoginMeU3Ec__Iterator0_MoveNext_m4152563809_MetadataUsageId;
extern const uint32_t U3CLoginMeU3Ec__Iterator0_Reset_m217789570_MetadataUsageId;

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154  : public Il2CppArray
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



// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Login::DoLogin()
extern "C"  void Login_DoLogin_m3279394130 (Login_t3555589017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Login::ErrorMessage()
extern "C"  void Login_ErrorMessage_m2409930495 (Login_t3555589017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Login::LoginMe()
extern "C"  Il2CppObject * Login_LoginMe_m1551488825 (Login_t3555589017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t2299508840 * MonoBehaviour_StartCoroutine_m2470621050 (MonoBehaviour_t1158329972 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Login/<LoginMe>c__Iterator0::.ctor()
extern "C"  void U3CLoginMeU3Ec__Iterator0__ctor_m2339693279 (U3CLoginMeU3Ec__Iterator0_t2996399230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Login::ErrorMe()
extern "C"  Il2CppObject * Login_ErrorMe_m4195111504 (Login_t3555589017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m2887581199 (GameObject_t1756533147 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Login/<ErrorMe>c__Iterator1::.ctor()
extern "C"  void U3CErrorMeU3Ec__Iterator1__ctor_m3915966757 (U3CErrorMeU3Ec__Iterator1_t4079153944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m1990515539 (WaitForSeconds_t3839502067 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m3232764727 (NotSupportedException_t1793819818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Login::SetScreen(System.Int32)
extern "C"  void Login_SetScreen_m1027275811 (Login_t3555589017 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Login::.ctor()
extern "C"  void Login__ctor_m4139325776 (Login_t3555589017 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Login::TryLogin()
extern "C"  void Login_TryLogin_m959745324 (Login_t3555589017 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Login_TryLogin_m959745324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_password_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_0, _stringLiteral3561732527, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Login_DoLogin_m3279394130(__this, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0020:
	{
		Login_ErrorMessage_m2409930495(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void Login::DoLogin()
extern "C"  void Login_DoLogin_m3279394130 (Login_t3555589017 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = Login_LoginMe_m1551488825(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2470621050(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Login::LoginMe()
extern "C"  Il2CppObject * Login_LoginMe_m1551488825 (Login_t3555589017 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Login_LoginMe_m1551488825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoginMeU3Ec__Iterator0_t2996399230 * V_0 = NULL;
	{
		U3CLoginMeU3Ec__Iterator0_t2996399230 * L_0 = (U3CLoginMeU3Ec__Iterator0_t2996399230 *)il2cpp_codegen_object_new(U3CLoginMeU3Ec__Iterator0_t2996399230_il2cpp_TypeInfo_var);
		U3CLoginMeU3Ec__Iterator0__ctor_m2339693279(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLoginMeU3Ec__Iterator0_t2996399230 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CLoginMeU3Ec__Iterator0_t2996399230 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Login::ErrorMessage()
extern "C"  void Login_ErrorMessage_m2409930495 (Login_t3555589017 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = Login_ErrorMe_m4195111504(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2470621050(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Login::SetScreen(System.Int32)
extern "C"  void Login_SetScreen_m1027275811 (Login_t3555589017 * __this, int32_t ___index0, const MethodInfo* method)
{
	GameObject_t1756533147 * V_0 = NULL;
	GameObjectU5BU5D_t3057952154* V_1 = NULL;
	int32_t V_2 = 0;
	{
		GameObjectU5BU5D_t3057952154* L_0 = __this->get_screens_5();
		V_1 = L_0;
		V_2 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		GameObjectU5BU5D_t3057952154* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t1756533147 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1756533147 * L_5 = V_0;
		NullCheck(L_5);
		GameObject_SetActive_m2887581199(L_5, (bool)0, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_7 = V_2;
		GameObjectU5BU5D_t3057952154* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		GameObjectU5BU5D_t3057952154* L_9 = __this->get_screens_5();
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t1756533147 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		GameObject_SetActive_m2887581199(L_12, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Login::ErrorMe()
extern "C"  Il2CppObject * Login_ErrorMe_m4195111504 (Login_t3555589017 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Login_ErrorMe_m4195111504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CErrorMeU3Ec__Iterator1_t4079153944 * V_0 = NULL;
	{
		U3CErrorMeU3Ec__Iterator1_t4079153944 * L_0 = (U3CErrorMeU3Ec__Iterator1_t4079153944 *)il2cpp_codegen_object_new(U3CErrorMeU3Ec__Iterator1_t4079153944_il2cpp_TypeInfo_var);
		U3CErrorMeU3Ec__Iterator1__ctor_m3915966757(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CErrorMeU3Ec__Iterator1_t4079153944 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CErrorMeU3Ec__Iterator1_t4079153944 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Login::Update()
extern "C"  void Login_Update_m3071805693 (Login_t3555589017 * __this, const MethodInfo* method)
{
	{
		Text_t356221433 * L_0 = __this->get_emailText_2();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		__this->set_email_6(L_1);
		Text_t356221433 * L_2 = __this->get_passwordText_3();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		__this->set_password_7(L_3);
		return;
	}
}
// System.Void Login/<ErrorMe>c__Iterator1::.ctor()
extern "C"  void U3CErrorMeU3Ec__Iterator1__ctor_m3915966757 (U3CErrorMeU3Ec__Iterator1_t4079153944 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Login/<ErrorMe>c__Iterator1::MoveNext()
extern "C"  bool U3CErrorMeU3Ec__Iterator1_MoveNext_m685666191 (U3CErrorMeU3Ec__Iterator1_t4079153944 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CErrorMeU3Ec__Iterator1_MoveNext_m685666191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_0076;
	}

IL_0021:
	{
		Login_t3555589017 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		Text_t356221433 * L_3 = L_2->get_errorText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral1034300389);
		WaitForSeconds_t3839502067 * L_4 = (WaitForSeconds_t3839502067 *)il2cpp_codegen_object_new(WaitForSeconds_t3839502067_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m1990515539(L_4, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_4);
		bool L_5 = __this->get_U24disposing_2();
		if (L_5)
		{
			goto IL_0055;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0055:
	{
		goto IL_0078;
	}

IL_005a:
	{
		Login_t3555589017 * L_6 = __this->get_U24this_0();
		NullCheck(L_6);
		Text_t356221433 * L_7 = L_6->get_errorText_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_8);
		__this->set_U24PC_3((-1));
	}

IL_0076:
	{
		return (bool)0;
	}

IL_0078:
	{
		return (bool)1;
	}
}
// System.Object Login/<ErrorMe>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CErrorMeU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3165140467 (U3CErrorMeU3Ec__Iterator1_t4079153944 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Login/<ErrorMe>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CErrorMeU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3587398683 (U3CErrorMeU3Ec__Iterator1_t4079153944 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void Login/<ErrorMe>c__Iterator1::Dispose()
extern "C"  void U3CErrorMeU3Ec__Iterator1_Dispose_m1700802074 (U3CErrorMeU3Ec__Iterator1_t4079153944 * __this, const MethodInfo* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void Login/<ErrorMe>c__Iterator1::Reset()
extern "C"  void U3CErrorMeU3Ec__Iterator1_Reset_m78764440 (U3CErrorMeU3Ec__Iterator1_t4079153944 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CErrorMeU3Ec__Iterator1_Reset_m78764440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void Login/<LoginMe>c__Iterator0::.ctor()
extern "C"  void U3CLoginMeU3Ec__Iterator0__ctor_m2339693279 (U3CLoginMeU3Ec__Iterator0_t2996399230 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Login/<LoginMe>c__Iterator0::MoveNext()
extern "C"  bool U3CLoginMeU3Ec__Iterator0_MoveNext_m4152563809 (U3CLoginMeU3Ec__Iterator0_t2996399230 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoginMeU3Ec__Iterator0_MoveNext_m4152563809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0058;
	}

IL_0021:
	{
		WaitForSeconds_t3839502067 * L_2 = (WaitForSeconds_t3839502067 *)il2cpp_codegen_object_new(WaitForSeconds_t3839502067_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m1990515539(L_2, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0040:
	{
		goto IL_005a;
	}

IL_0045:
	{
		Login_t3555589017 * L_4 = __this->get_U24this_0();
		NullCheck(L_4);
		Login_SetScreen_m1027275811(L_4, 2, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0058:
	{
		return (bool)0;
	}

IL_005a:
	{
		return (bool)1;
	}
}
// System.Object Login/<LoginMe>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CLoginMeU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m395326137 (U3CLoginMeU3Ec__Iterator0_t2996399230 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Login/<LoginMe>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CLoginMeU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m337214241 (U3CLoginMeU3Ec__Iterator0_t2996399230 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void Login/<LoginMe>c__Iterator0::Dispose()
extern "C"  void U3CLoginMeU3Ec__Iterator0_Dispose_m3438251856 (U3CLoginMeU3Ec__Iterator0_t2996399230 * __this, const MethodInfo* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void Login/<LoginMe>c__Iterator0::Reset()
extern "C"  void U3CLoginMeU3Ec__Iterator0_Reset_m217789570 (U3CLoginMeU3Ec__Iterator0_t2996399230 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoginMeU3Ec__Iterator0_Reset_m217789570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Login
struct  Login_t3555589017  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Login::emailText
	Text_t356221433 * ___emailText_2;
	// UnityEngine.UI.Text Login::passwordText
	Text_t356221433 * ___passwordText_3;
	// UnityEngine.UI.Text Login::errorText
	Text_t356221433 * ___errorText_4;
	// UnityEngine.GameObject[] Login::screens
	GameObjectU5BU5D_t3057952154* ___screens_5;
	// System.String Login::email
	String_t* ___email_6;
	// System.String Login::password
	String_t* ___password_7;

public:
	inline static int32_t get_offset_of_emailText_2() { return static_cast<int32_t>(offsetof(Login_t3555589017, ___emailText_2)); }
	inline Text_t356221433 * get_emailText_2() const { return ___emailText_2; }
	inline Text_t356221433 ** get_address_of_emailText_2() { return &___emailText_2; }
	inline void set_emailText_2(Text_t356221433 * value)
	{
		___emailText_2 = value;
		Il2CppCodeGenWriteBarrier(&___emailText_2, value);
	}

	inline static int32_t get_offset_of_passwordText_3() { return static_cast<int32_t>(offsetof(Login_t3555589017, ___passwordText_3)); }
	inline Text_t356221433 * get_passwordText_3() const { return ___passwordText_3; }
	inline Text_t356221433 ** get_address_of_passwordText_3() { return &___passwordText_3; }
	inline void set_passwordText_3(Text_t356221433 * value)
	{
		___passwordText_3 = value;
		Il2CppCodeGenWriteBarrier(&___passwordText_3, value);
	}

	inline static int32_t get_offset_of_errorText_4() { return static_cast<int32_t>(offsetof(Login_t3555589017, ___errorText_4)); }
	inline Text_t356221433 * get_errorText_4() const { return ___errorText_4; }
	inline Text_t356221433 ** get_address_of_errorText_4() { return &___errorText_4; }
	inline void set_errorText_4(Text_t356221433 * value)
	{
		___errorText_4 = value;
		Il2CppCodeGenWriteBarrier(&___errorText_4, value);
	}

	inline static int32_t get_offset_of_screens_5() { return static_cast<int32_t>(offsetof(Login_t3555589017, ___screens_5)); }
	inline GameObjectU5BU5D_t3057952154* get_screens_5() const { return ___screens_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_screens_5() { return &___screens_5; }
	inline void set_screens_5(GameObjectU5BU5D_t3057952154* value)
	{
		___screens_5 = value;
		Il2CppCodeGenWriteBarrier(&___screens_5, value);
	}

	inline static int32_t get_offset_of_email_6() { return static_cast<int32_t>(offsetof(Login_t3555589017, ___email_6)); }
	inline String_t* get_email_6() const { return ___email_6; }
	inline String_t** get_address_of_email_6() { return &___email_6; }
	inline void set_email_6(String_t* value)
	{
		___email_6 = value;
		Il2CppCodeGenWriteBarrier(&___email_6, value);
	}

	inline static int32_t get_offset_of_password_7() { return static_cast<int32_t>(offsetof(Login_t3555589017, ___password_7)); }
	inline String_t* get_password_7() const { return ___password_7; }
	inline String_t** get_address_of_password_7() { return &___password_7; }
	inline void set_password_7(String_t* value)
	{
		___password_7 = value;
		Il2CppCodeGenWriteBarrier(&___password_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

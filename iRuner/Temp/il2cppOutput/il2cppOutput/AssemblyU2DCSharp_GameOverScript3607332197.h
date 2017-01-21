#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOverScript
struct  GameOverScript_t3607332197  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text GameOverScript::uiText
	Text_t356221433 * ___uiText_2;

public:
	inline static int32_t get_offset_of_uiText_2() { return static_cast<int32_t>(offsetof(GameOverScript_t3607332197, ___uiText_2)); }
	inline Text_t356221433 * get_uiText_2() const { return ___uiText_2; }
	inline Text_t356221433 ** get_address_of_uiText_2() { return &___uiText_2; }
	inline void set_uiText_2(Text_t356221433 * value)
	{
		___uiText_2 = value;
		Il2CppCodeGenWriteBarrier(&___uiText_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

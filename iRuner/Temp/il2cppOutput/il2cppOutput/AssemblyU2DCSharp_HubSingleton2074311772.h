#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HubSingleton
struct HubSingleton_t2074311772;
// HubScripts
struct HubScripts_t3375301493;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HubSingleton
struct  HubSingleton_t2074311772  : public Il2CppObject
{
public:
	// HubScripts HubSingleton::hub
	HubScripts_t3375301493 * ___hub_1;

public:
	inline static int32_t get_offset_of_hub_1() { return static_cast<int32_t>(offsetof(HubSingleton_t2074311772, ___hub_1)); }
	inline HubScripts_t3375301493 * get_hub_1() const { return ___hub_1; }
	inline HubScripts_t3375301493 ** get_address_of_hub_1() { return &___hub_1; }
	inline void set_hub_1(HubScripts_t3375301493 * value)
	{
		___hub_1 = value;
		Il2CppCodeGenWriteBarrier(&___hub_1, value);
	}
};

struct HubSingleton_t2074311772_StaticFields
{
public:
	// HubSingleton HubSingleton::instance
	HubSingleton_t2074311772 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(HubSingleton_t2074311772_StaticFields, ___instance_0)); }
	inline HubSingleton_t2074311772 * get_instance_0() const { return ___instance_0; }
	inline HubSingleton_t2074311772 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(HubSingleton_t2074311772 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

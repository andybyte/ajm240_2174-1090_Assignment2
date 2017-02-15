#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombieGenerator
struct  ZombieGenerator_t2165348767  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D ZombieGenerator::zombie
	Rigidbody2D_t502193897 * ___zombie_2;
	// System.Int32 ZombieGenerator::frameDelta
	int32_t ___frameDelta_3;
	// System.Int32 ZombieGenerator::counter
	int32_t ___counter_4;

public:
	inline static int32_t get_offset_of_zombie_2() { return static_cast<int32_t>(offsetof(ZombieGenerator_t2165348767, ___zombie_2)); }
	inline Rigidbody2D_t502193897 * get_zombie_2() const { return ___zombie_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_zombie_2() { return &___zombie_2; }
	inline void set_zombie_2(Rigidbody2D_t502193897 * value)
	{
		___zombie_2 = value;
		Il2CppCodeGenWriteBarrier(&___zombie_2, value);
	}

	inline static int32_t get_offset_of_frameDelta_3() { return static_cast<int32_t>(offsetof(ZombieGenerator_t2165348767, ___frameDelta_3)); }
	inline int32_t get_frameDelta_3() const { return ___frameDelta_3; }
	inline int32_t* get_address_of_frameDelta_3() { return &___frameDelta_3; }
	inline void set_frameDelta_3(int32_t value)
	{
		___frameDelta_3 = value;
	}

	inline static int32_t get_offset_of_counter_4() { return static_cast<int32_t>(offsetof(ZombieGenerator_t2165348767, ___counter_4)); }
	inline int32_t get_counter_4() const { return ___counter_4; }
	inline int32_t* get_address_of_counter_4() { return &___counter_4; }
	inline void set_counter_4(int32_t value)
	{
		___counter_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

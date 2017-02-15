#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombieBehavior
struct  ZombieBehavior_t811949068  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ZombieBehavior::speed
	float ___speed_2;
	// System.Single ZombieBehavior::posY
	float ___posY_3;
	// System.Single ZombieBehavior::posX
	float ___posX_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(ZombieBehavior_t811949068, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_posY_3() { return static_cast<int32_t>(offsetof(ZombieBehavior_t811949068, ___posY_3)); }
	inline float get_posY_3() const { return ___posY_3; }
	inline float* get_address_of_posY_3() { return &___posY_3; }
	inline void set_posY_3(float value)
	{
		___posY_3 = value;
	}

	inline static int32_t get_offset_of_posX_4() { return static_cast<int32_t>(offsetof(ZombieBehavior_t811949068, ___posX_4)); }
	inline float get_posX_4() const { return ___posX_4; }
	inline float* get_address_of_posX_4() { return &___posX_4; }
	inline void set_posX_4(float value)
	{
		___posX_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

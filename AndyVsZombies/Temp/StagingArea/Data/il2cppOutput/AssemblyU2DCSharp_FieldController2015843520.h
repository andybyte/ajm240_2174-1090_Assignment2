#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FieldController
struct  FieldController_t2015843520  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource FieldController::zombieLeft
	AudioSource_t1135106623 * ___zombieLeft_2;
	// UnityEngine.AudioSource FieldController::youLose
	AudioSource_t1135106623 * ___youLose_3;
	// UnityEngine.UI.Text FieldController::loser
	Text_t356221433 * ___loser_4;
	// UnityEngine.UI.Text FieldController::misses
	Text_t356221433 * ___misses_5;
	// System.Int32 FieldController::intMiss
	int32_t ___intMiss_6;

public:
	inline static int32_t get_offset_of_zombieLeft_2() { return static_cast<int32_t>(offsetof(FieldController_t2015843520, ___zombieLeft_2)); }
	inline AudioSource_t1135106623 * get_zombieLeft_2() const { return ___zombieLeft_2; }
	inline AudioSource_t1135106623 ** get_address_of_zombieLeft_2() { return &___zombieLeft_2; }
	inline void set_zombieLeft_2(AudioSource_t1135106623 * value)
	{
		___zombieLeft_2 = value;
		Il2CppCodeGenWriteBarrier(&___zombieLeft_2, value);
	}

	inline static int32_t get_offset_of_youLose_3() { return static_cast<int32_t>(offsetof(FieldController_t2015843520, ___youLose_3)); }
	inline AudioSource_t1135106623 * get_youLose_3() const { return ___youLose_3; }
	inline AudioSource_t1135106623 ** get_address_of_youLose_3() { return &___youLose_3; }
	inline void set_youLose_3(AudioSource_t1135106623 * value)
	{
		___youLose_3 = value;
		Il2CppCodeGenWriteBarrier(&___youLose_3, value);
	}

	inline static int32_t get_offset_of_loser_4() { return static_cast<int32_t>(offsetof(FieldController_t2015843520, ___loser_4)); }
	inline Text_t356221433 * get_loser_4() const { return ___loser_4; }
	inline Text_t356221433 ** get_address_of_loser_4() { return &___loser_4; }
	inline void set_loser_4(Text_t356221433 * value)
	{
		___loser_4 = value;
		Il2CppCodeGenWriteBarrier(&___loser_4, value);
	}

	inline static int32_t get_offset_of_misses_5() { return static_cast<int32_t>(offsetof(FieldController_t2015843520, ___misses_5)); }
	inline Text_t356221433 * get_misses_5() const { return ___misses_5; }
	inline Text_t356221433 ** get_address_of_misses_5() { return &___misses_5; }
	inline void set_misses_5(Text_t356221433 * value)
	{
		___misses_5 = value;
		Il2CppCodeGenWriteBarrier(&___misses_5, value);
	}

	inline static int32_t get_offset_of_intMiss_6() { return static_cast<int32_t>(offsetof(FieldController_t2015843520, ___intMiss_6)); }
	inline int32_t get_intMiss_6() const { return ___intMiss_6; }
	inline int32_t* get_address_of_intMiss_6() { return &___intMiss_6; }
	inline void set_intMiss_6(int32_t value)
	{
		___intMiss_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

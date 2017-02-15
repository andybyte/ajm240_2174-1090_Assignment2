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
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VinylGenerator
struct  VinylGenerator_t4220107441  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D VinylGenerator::vinyl
	Rigidbody2D_t502193897 * ___vinyl_2;
	// UnityEngine.Rigidbody2D VinylGenerator::vinylClone
	Rigidbody2D_t502193897 * ___vinylClone_3;
	// UnityEngine.AudioSource VinylGenerator::soundFX
	AudioSource_t1135106623 * ___soundFX_4;
	// UnityEngine.AudioSource VinylGenerator::smash
	AudioSource_t1135106623 * ___smash_5;
	// UnityEngine.Rigidbody2D VinylGenerator::spinner
	Rigidbody2D_t502193897 * ___spinner_6;

public:
	inline static int32_t get_offset_of_vinyl_2() { return static_cast<int32_t>(offsetof(VinylGenerator_t4220107441, ___vinyl_2)); }
	inline Rigidbody2D_t502193897 * get_vinyl_2() const { return ___vinyl_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_vinyl_2() { return &___vinyl_2; }
	inline void set_vinyl_2(Rigidbody2D_t502193897 * value)
	{
		___vinyl_2 = value;
		Il2CppCodeGenWriteBarrier(&___vinyl_2, value);
	}

	inline static int32_t get_offset_of_vinylClone_3() { return static_cast<int32_t>(offsetof(VinylGenerator_t4220107441, ___vinylClone_3)); }
	inline Rigidbody2D_t502193897 * get_vinylClone_3() const { return ___vinylClone_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_vinylClone_3() { return &___vinylClone_3; }
	inline void set_vinylClone_3(Rigidbody2D_t502193897 * value)
	{
		___vinylClone_3 = value;
		Il2CppCodeGenWriteBarrier(&___vinylClone_3, value);
	}

	inline static int32_t get_offset_of_soundFX_4() { return static_cast<int32_t>(offsetof(VinylGenerator_t4220107441, ___soundFX_4)); }
	inline AudioSource_t1135106623 * get_soundFX_4() const { return ___soundFX_4; }
	inline AudioSource_t1135106623 ** get_address_of_soundFX_4() { return &___soundFX_4; }
	inline void set_soundFX_4(AudioSource_t1135106623 * value)
	{
		___soundFX_4 = value;
		Il2CppCodeGenWriteBarrier(&___soundFX_4, value);
	}

	inline static int32_t get_offset_of_smash_5() { return static_cast<int32_t>(offsetof(VinylGenerator_t4220107441, ___smash_5)); }
	inline AudioSource_t1135106623 * get_smash_5() const { return ___smash_5; }
	inline AudioSource_t1135106623 ** get_address_of_smash_5() { return &___smash_5; }
	inline void set_smash_5(AudioSource_t1135106623 * value)
	{
		___smash_5 = value;
		Il2CppCodeGenWriteBarrier(&___smash_5, value);
	}

	inline static int32_t get_offset_of_spinner_6() { return static_cast<int32_t>(offsetof(VinylGenerator_t4220107441, ___spinner_6)); }
	inline Rigidbody2D_t502193897 * get_spinner_6() const { return ___spinner_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_spinner_6() { return &___spinner_6; }
	inline void set_spinner_6(Rigidbody2D_t502193897 * value)
	{
		___spinner_6 = value;
		Il2CppCodeGenWriteBarrier(&___spinner_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VinylBehavior
struct  VinylBehavior_t1426074070  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VinylBehavior::speed
	float ___speed_2;
	// UnityEngine.Vector3 VinylBehavior::target
	Vector3_t2243707580  ___target_3;
	// System.Int32 VinylBehavior::state
	int32_t ___state_4;
	// UnityEngine.Rigidbody2D VinylBehavior::self
	Rigidbody2D_t502193897 * ___self_5;
	// UnityEngine.Rigidbody2D VinylBehavior::player
	Rigidbody2D_t502193897 * ___player_6;
	// UnityEngine.AudioSource VinylBehavior::soundFX
	AudioSource_t1135106623 * ___soundFX_7;
	// UnityEngine.AudioSource VinylBehavior::smash
	AudioSource_t1135106623 * ___smash_8;
	// UnityEngine.Sprite[] VinylBehavior::arrayVinyls
	SpriteU5BU5D_t3359083662* ___arrayVinyls_9;
	// UnityEngine.Rigidbody2D VinylBehavior::spinner
	Rigidbody2D_t502193897 * ___spinner_10;
	// UnityEngine.Vector3 VinylBehavior::moveDirection
	Vector3_t2243707580  ___moveDirection_11;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(VinylBehavior_t1426074070, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(VinylBehavior_t1426074070, ___target_3)); }
	inline Vector3_t2243707580  get_target_3() const { return ___target_3; }
	inline Vector3_t2243707580 * get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Vector3_t2243707580  value)
	{
		___target_3 = value;
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(VinylBehavior_t1426074070, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_self_5() { return static_cast<int32_t>(offsetof(VinylBehavior_t1426074070, ___self_5)); }
	inline Rigidbody2D_t502193897 * get_self_5() const { return ___self_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_self_5() { return &___self_5; }
	inline void set_self_5(Rigidbody2D_t502193897 * value)
	{
		___self_5 = value;
		Il2CppCodeGenWriteBarrier(&___self_5, value);
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(VinylBehavior_t1426074070, ___player_6)); }
	inline Rigidbody2D_t502193897 * get_player_6() const { return ___player_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(Rigidbody2D_t502193897 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier(&___player_6, value);
	}

	inline static int32_t get_offset_of_soundFX_7() { return static_cast<int32_t>(offsetof(VinylBehavior_t1426074070, ___soundFX_7)); }
	inline AudioSource_t1135106623 * get_soundFX_7() const { return ___soundFX_7; }
	inline AudioSource_t1135106623 ** get_address_of_soundFX_7() { return &___soundFX_7; }
	inline void set_soundFX_7(AudioSource_t1135106623 * value)
	{
		___soundFX_7 = value;
		Il2CppCodeGenWriteBarrier(&___soundFX_7, value);
	}

	inline static int32_t get_offset_of_smash_8() { return static_cast<int32_t>(offsetof(VinylBehavior_t1426074070, ___smash_8)); }
	inline AudioSource_t1135106623 * get_smash_8() const { return ___smash_8; }
	inline AudioSource_t1135106623 ** get_address_of_smash_8() { return &___smash_8; }
	inline void set_smash_8(AudioSource_t1135106623 * value)
	{
		___smash_8 = value;
		Il2CppCodeGenWriteBarrier(&___smash_8, value);
	}

	inline static int32_t get_offset_of_arrayVinyls_9() { return static_cast<int32_t>(offsetof(VinylBehavior_t1426074070, ___arrayVinyls_9)); }
	inline SpriteU5BU5D_t3359083662* get_arrayVinyls_9() const { return ___arrayVinyls_9; }
	inline SpriteU5BU5D_t3359083662** get_address_of_arrayVinyls_9() { return &___arrayVinyls_9; }
	inline void set_arrayVinyls_9(SpriteU5BU5D_t3359083662* value)
	{
		___arrayVinyls_9 = value;
		Il2CppCodeGenWriteBarrier(&___arrayVinyls_9, value);
	}

	inline static int32_t get_offset_of_spinner_10() { return static_cast<int32_t>(offsetof(VinylBehavior_t1426074070, ___spinner_10)); }
	inline Rigidbody2D_t502193897 * get_spinner_10() const { return ___spinner_10; }
	inline Rigidbody2D_t502193897 ** get_address_of_spinner_10() { return &___spinner_10; }
	inline void set_spinner_10(Rigidbody2D_t502193897 * value)
	{
		___spinner_10 = value;
		Il2CppCodeGenWriteBarrier(&___spinner_10, value);
	}

	inline static int32_t get_offset_of_moveDirection_11() { return static_cast<int32_t>(offsetof(VinylBehavior_t1426074070, ___moveDirection_11)); }
	inline Vector3_t2243707580  get_moveDirection_11() const { return ___moveDirection_11; }
	inline Vector3_t2243707580 * get_address_of_moveDirection_11() { return &___moveDirection_11; }
	inline void set_moveDirection_11(Vector3_t2243707580  value)
	{
		___moveDirection_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// VinylBehavior
struct VinylBehavior_t1426074070;
// UnityEngine.Camera
struct Camera_t189460977;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text PlayerController::winner
	Text_t356221433 * ___winner_2;
	// UnityEngine.UI.Text PlayerController::dinner
	Text_t356221433 * ___dinner_3;
	// UnityEngine.Rigidbody2D PlayerController::player
	Rigidbody2D_t502193897 * ___player_4;
	// UnityEngine.UI.Text PlayerController::lives
	Text_t356221433 * ___lives_5;
	// System.Int32 PlayerController::intLives
	int32_t ___intLives_6;
	// UnityEngine.UI.Text PlayerController::kills
	Text_t356221433 * ___kills_7;
	// System.Int32 PlayerController::intKills
	int32_t ___intKills_8;
	// System.Int32 PlayerController::speed
	int32_t ___speed_9;
	// UnityEngine.AudioSource PlayerController::collisionSound
	AudioSource_t1135106623 * ___collisionSound_10;
	// UnityEngine.AudioSource PlayerController::zombieBite
	AudioSource_t1135106623 * ___zombieBite_11;
	// UnityEngine.AudioSource PlayerController::youWin
	AudioSource_t1135106623 * ___youWin_12;
	// UnityEngine.AudioSource PlayerController::youLose
	AudioSource_t1135106623 * ___youLose_13;
	// UnityEngine.SpriteRenderer PlayerController::playerSprite
	SpriteRenderer_t1209076198 * ___playerSprite_14;
	// VinylBehavior PlayerController::script
	VinylBehavior_t1426074070 * ___script_15;
	// System.Boolean PlayerController::keypress
	bool ___keypress_16;
	// System.Boolean PlayerController::contact
	bool ___contact_17;
	// UnityEngine.Camera PlayerController::camera
	Camera_t189460977 * ___camera_18;
	// UnityEngine.Rigidbody2D PlayerController::vinyl
	Rigidbody2D_t502193897 * ___vinyl_19;
	// System.String PlayerController::spriteDirection
	String_t* ___spriteDirection_20;

public:
	inline static int32_t get_offset_of_winner_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___winner_2)); }
	inline Text_t356221433 * get_winner_2() const { return ___winner_2; }
	inline Text_t356221433 ** get_address_of_winner_2() { return &___winner_2; }
	inline void set_winner_2(Text_t356221433 * value)
	{
		___winner_2 = value;
		Il2CppCodeGenWriteBarrier(&___winner_2, value);
	}

	inline static int32_t get_offset_of_dinner_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___dinner_3)); }
	inline Text_t356221433 * get_dinner_3() const { return ___dinner_3; }
	inline Text_t356221433 ** get_address_of_dinner_3() { return &___dinner_3; }
	inline void set_dinner_3(Text_t356221433 * value)
	{
		___dinner_3 = value;
		Il2CppCodeGenWriteBarrier(&___dinner_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___player_4)); }
	inline Rigidbody2D_t502193897 * get_player_4() const { return ___player_4; }
	inline Rigidbody2D_t502193897 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Rigidbody2D_t502193897 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_lives_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___lives_5)); }
	inline Text_t356221433 * get_lives_5() const { return ___lives_5; }
	inline Text_t356221433 ** get_address_of_lives_5() { return &___lives_5; }
	inline void set_lives_5(Text_t356221433 * value)
	{
		___lives_5 = value;
		Il2CppCodeGenWriteBarrier(&___lives_5, value);
	}

	inline static int32_t get_offset_of_intLives_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___intLives_6)); }
	inline int32_t get_intLives_6() const { return ___intLives_6; }
	inline int32_t* get_address_of_intLives_6() { return &___intLives_6; }
	inline void set_intLives_6(int32_t value)
	{
		___intLives_6 = value;
	}

	inline static int32_t get_offset_of_kills_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___kills_7)); }
	inline Text_t356221433 * get_kills_7() const { return ___kills_7; }
	inline Text_t356221433 ** get_address_of_kills_7() { return &___kills_7; }
	inline void set_kills_7(Text_t356221433 * value)
	{
		___kills_7 = value;
		Il2CppCodeGenWriteBarrier(&___kills_7, value);
	}

	inline static int32_t get_offset_of_intKills_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___intKills_8)); }
	inline int32_t get_intKills_8() const { return ___intKills_8; }
	inline int32_t* get_address_of_intKills_8() { return &___intKills_8; }
	inline void set_intKills_8(int32_t value)
	{
		___intKills_8 = value;
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___speed_9)); }
	inline int32_t get_speed_9() const { return ___speed_9; }
	inline int32_t* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(int32_t value)
	{
		___speed_9 = value;
	}

	inline static int32_t get_offset_of_collisionSound_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___collisionSound_10)); }
	inline AudioSource_t1135106623 * get_collisionSound_10() const { return ___collisionSound_10; }
	inline AudioSource_t1135106623 ** get_address_of_collisionSound_10() { return &___collisionSound_10; }
	inline void set_collisionSound_10(AudioSource_t1135106623 * value)
	{
		___collisionSound_10 = value;
		Il2CppCodeGenWriteBarrier(&___collisionSound_10, value);
	}

	inline static int32_t get_offset_of_zombieBite_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___zombieBite_11)); }
	inline AudioSource_t1135106623 * get_zombieBite_11() const { return ___zombieBite_11; }
	inline AudioSource_t1135106623 ** get_address_of_zombieBite_11() { return &___zombieBite_11; }
	inline void set_zombieBite_11(AudioSource_t1135106623 * value)
	{
		___zombieBite_11 = value;
		Il2CppCodeGenWriteBarrier(&___zombieBite_11, value);
	}

	inline static int32_t get_offset_of_youWin_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___youWin_12)); }
	inline AudioSource_t1135106623 * get_youWin_12() const { return ___youWin_12; }
	inline AudioSource_t1135106623 ** get_address_of_youWin_12() { return &___youWin_12; }
	inline void set_youWin_12(AudioSource_t1135106623 * value)
	{
		___youWin_12 = value;
		Il2CppCodeGenWriteBarrier(&___youWin_12, value);
	}

	inline static int32_t get_offset_of_youLose_13() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___youLose_13)); }
	inline AudioSource_t1135106623 * get_youLose_13() const { return ___youLose_13; }
	inline AudioSource_t1135106623 ** get_address_of_youLose_13() { return &___youLose_13; }
	inline void set_youLose_13(AudioSource_t1135106623 * value)
	{
		___youLose_13 = value;
		Il2CppCodeGenWriteBarrier(&___youLose_13, value);
	}

	inline static int32_t get_offset_of_playerSprite_14() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___playerSprite_14)); }
	inline SpriteRenderer_t1209076198 * get_playerSprite_14() const { return ___playerSprite_14; }
	inline SpriteRenderer_t1209076198 ** get_address_of_playerSprite_14() { return &___playerSprite_14; }
	inline void set_playerSprite_14(SpriteRenderer_t1209076198 * value)
	{
		___playerSprite_14 = value;
		Il2CppCodeGenWriteBarrier(&___playerSprite_14, value);
	}

	inline static int32_t get_offset_of_script_15() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___script_15)); }
	inline VinylBehavior_t1426074070 * get_script_15() const { return ___script_15; }
	inline VinylBehavior_t1426074070 ** get_address_of_script_15() { return &___script_15; }
	inline void set_script_15(VinylBehavior_t1426074070 * value)
	{
		___script_15 = value;
		Il2CppCodeGenWriteBarrier(&___script_15, value);
	}

	inline static int32_t get_offset_of_keypress_16() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___keypress_16)); }
	inline bool get_keypress_16() const { return ___keypress_16; }
	inline bool* get_address_of_keypress_16() { return &___keypress_16; }
	inline void set_keypress_16(bool value)
	{
		___keypress_16 = value;
	}

	inline static int32_t get_offset_of_contact_17() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___contact_17)); }
	inline bool get_contact_17() const { return ___contact_17; }
	inline bool* get_address_of_contact_17() { return &___contact_17; }
	inline void set_contact_17(bool value)
	{
		___contact_17 = value;
	}

	inline static int32_t get_offset_of_camera_18() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___camera_18)); }
	inline Camera_t189460977 * get_camera_18() const { return ___camera_18; }
	inline Camera_t189460977 ** get_address_of_camera_18() { return &___camera_18; }
	inline void set_camera_18(Camera_t189460977 * value)
	{
		___camera_18 = value;
		Il2CppCodeGenWriteBarrier(&___camera_18, value);
	}

	inline static int32_t get_offset_of_vinyl_19() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___vinyl_19)); }
	inline Rigidbody2D_t502193897 * get_vinyl_19() const { return ___vinyl_19; }
	inline Rigidbody2D_t502193897 ** get_address_of_vinyl_19() { return &___vinyl_19; }
	inline void set_vinyl_19(Rigidbody2D_t502193897 * value)
	{
		___vinyl_19 = value;
		Il2CppCodeGenWriteBarrier(&___vinyl_19, value);
	}

	inline static int32_t get_offset_of_spriteDirection_20() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___spriteDirection_20)); }
	inline String_t* get_spriteDirection_20() const { return ___spriteDirection_20; }
	inline String_t** get_address_of_spriteDirection_20() { return &___spriteDirection_20; }
	inline void set_spriteDirection_20(String_t* value)
	{
		___spriteDirection_20 = value;
		Il2CppCodeGenWriteBarrier(&___spriteDirection_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

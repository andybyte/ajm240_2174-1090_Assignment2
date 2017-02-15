#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m3606284888 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m4228472513 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerController_OnTriggerEnter2D_m429568576 (PlayerController_t4148409433 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C"  void PlayerController_OnTriggerExit2D_m1507677490 (PlayerController_t4148409433 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateLives(System.Int32)
extern "C"  void PlayerController_UpdateLives_m1904474465 (PlayerController_t4148409433 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateKills(System.Int32)
extern "C"  void PlayerController_UpdateKills_m1671389057 (PlayerController_t4148409433 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

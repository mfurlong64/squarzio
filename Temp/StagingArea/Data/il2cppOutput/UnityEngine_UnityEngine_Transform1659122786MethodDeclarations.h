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

// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Space4209342076.h"

// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t1553702882  Transform_get_rotation_m11483428 (Transform_t1659122786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m1525803229 (Transform_t1659122786 * __this, Quaternion_t1553702882  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_get_rotation_m2389720173 (Transform_t1659122786 * __this, Quaternion_t1553702882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_set_rotation_m2051942009 (Transform_t1659122786 * __this, Quaternion_t1553702882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C"  Quaternion_t1553702882  Transform_get_localRotation_m3343229381 (Transform_t1659122786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_localRotation_m3719981474 (Transform_t1659122786 * __this, Quaternion_t1553702882  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_get_localRotation_m1409235788 (Transform_t1659122786 * __this, Quaternion_t1553702882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_set_localRotation_m2898114752 (Transform_t1659122786 * __this, Quaternion_t1553702882 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C"  void Transform_Rotate_m3141515812 (Transform_t1659122786 * __this, Vector3_t4282066566  ___eulerAngles0, int32_t ___relativeTo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Rotate_m3498734243 (Transform_t1659122786 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C"  void Transform_Rotate_m569346304 (Transform_t1659122786 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m2107810675 (Transform_t1659122786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  Il2CppObject * Transform_GetEnumerator_m688365631 (Transform_t1659122786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t1659122786 * Transform_GetChild_m4040462992 (Transform_t1659122786 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

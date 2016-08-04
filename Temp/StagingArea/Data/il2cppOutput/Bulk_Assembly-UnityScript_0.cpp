#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// rotate_mini
struct rotate_mini_t1864245435;
// transform
struct transform_t1052666732;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_rotate_mini1864245435.h"
#include "AssemblyU2DUnityScript_rotate_mini1864245435MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "mscorlib_System_Single4291918972.h"
#include "AssemblyU2DUnityScript_transform1052666732.h"
#include "AssemblyU2DUnityScript_transform1052666732MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void rotate_mini::.ctor()
extern "C"  void rotate_mini__ctor_m4010650235 (rotate_mini_t1864245435 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void rotate_mini::Start()
extern "C"  void rotate_mini_Start_m2957788027 (rotate_mini_t1864245435 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void rotate_mini::Update()
extern "C"  void rotate_mini_Update_m1502967794 (rotate_mini_t1864245435 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_1 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_Rotate_m3498734243(L_0, L_1, (((float)((float)0))), (((float)((float)(-1)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void rotate_mini::Main()
extern "C"  void rotate_mini_Main_m2400174818 (rotate_mini_t1864245435 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void transform::.ctor()
extern "C"  void transform__ctor_m3169439658 (transform_t1052666732 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void transform::Start()
extern "C"  void transform_Start_m2116577450 (transform_t1052666732 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void transform::Update()
extern "C"  void transform_Update_m1195243683 (transform_t1052666732 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_1 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_Rotate_m3498734243(L_0, L_1, (((float)((float)0))), (((float)((float)1))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void transform::Main()
extern "C"  void transform_Main_m294829011 (transform_t1052666732 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

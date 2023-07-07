#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

struct List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535;
struct IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF;
struct CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172;
struct CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D;
struct CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC;
struct CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255;
struct DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04;
struct EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA;
struct FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6;
struct FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2;
struct HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335;
struct IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042;
struct INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D;
struct MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7;
struct PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170;
struct PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55;
struct PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F;
struct PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850;
struct PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739;
struct PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A;
struct PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F;
struct PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2;
struct PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663;
struct SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0;
struct SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910;
struct SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674;
struct SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221;
struct SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700;
struct SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0;
struct SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D;

IL2CPP_EXTERN_C RuntimeClass* DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_5;
	float ___temp_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___GRAN02SND_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	float ___temp_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_19;
	float ___temp_20;
	RuntimeObject* ___TWO_PI_21;
	float ___TWO_PI_21_val;
	RuntimeObject* ___MY_24;
	float ___temp_25;
	RuntimeObject* ___MY_28;
	RuntimeObject* ___MY_30;
	RuntimeObject* ___MY_32;
	float ___temp_33;
	RuntimeObject* ___PI_34;
	float ___PI_34_val;
	RuntimeObject* ___MY_37;
	float ___temp_38;
	RuntimeObject* ___MY_41;
};
struct CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___BLOOD1ACT_2;
	float ___temp_3;
	RuntimeObject* ___BLOOD1ACT_4;
	RuntimeObject* ___BLOOD2ACT_8;
	float ___temp_9;
	RuntimeObject* ___BLOOD2ACT_10;
	RuntimeObject* ___BLOOD3ACT_14;
	float ___temp_15;
	RuntimeObject* ___BLOOD3ACT_16;
	RuntimeObject* ___BLOOD4ACT_20;
	float ___temp_21;
	RuntimeObject* ___BLOOD4ACT_22;
	RuntimeObject* ___HIT_DIST_26;
	float ___HIT_DIST_26_val;
	RuntimeObject* ___BLOOD_28;
	RuntimeObject* ___BLOOD_30;
	RuntimeObject* ___BLOOD_32;
	float ___temp_33;
	RuntimeObject* ___PLAYER_Z_34;
	float ___PLAYER_Z_34_val;
	RuntimeObject* ___HIT_DIST_38;
	float ___HIT_DIST_38_val;
	RuntimeObject* ___PLAYER_TILT_40;
	float ___PLAYER_TILT_40_val;
	RuntimeObject* ___BLOOD_43;
	RuntimeObject* ___dropped_44;
	RuntimeObject* ___BLOOD_47;
};
struct CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___GRAN1ACT_2;
	float ___temp_3;
	RuntimeObject* ___GRAN1ACT_4;
	RuntimeObject* ___GRAN11ACT_8;
	float ___temp_9;
	RuntimeObject* ___GRAN11ACT_10;
	RuntimeObject* ___GRAN12ACT_14;
	float ___temp_15;
	RuntimeObject* ___GRAN12ACT_16;
	RuntimeObject* ___GRAN13ACT_20;
	float ___temp_21;
	RuntimeObject* ___GRAN13ACT_22;
	RuntimeObject* ___GRAN14ACT_26;
	float ___temp_27;
	RuntimeObject* ___GRAN14ACT_28;
};
struct CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MISS1ACT_2;
	float ___temp_3;
	RuntimeObject* ___MISS1ACT_4;
	RuntimeObject* ___MISS11ACT_8;
	float ___temp_9;
	RuntimeObject* ___MISS11ACT_10;
	RuntimeObject* ___MISS12ACT_14;
	float ___temp_15;
	RuntimeObject* ___MISS12ACT_16;
	RuntimeObject* ___MISS13ACT_20;
	float ___temp_21;
	RuntimeObject* ___MISS13ACT_22;
	RuntimeObject* ___MISS14ACT_26;
	float ___temp_27;
	RuntimeObject* ___MISS14ACT_28;
};
struct CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PARTICLEACT_2;
	float ___temp_3;
	RuntimeObject* ___PARTICLEACT_4;
	RuntimeObject* ___PARTICLE1ACT_8;
	float ___temp_9;
	RuntimeObject* ___PARTICLE1ACT_10;
	RuntimeObject* ___PARTICLE2ACT_14;
	float ___temp_15;
	RuntimeObject* ___PARTICLE2ACT_16;
	RuntimeObject* ___PARTICLE3ACT_20;
	float ___temp_21;
	RuntimeObject* ___PARTICLE3ACT_22;
	RuntimeObject* ___PARTICLE4ACT_26;
	float ___temp_27;
	RuntimeObject* ___PARTICLE4ACT_28;
};
struct DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MESSAGE_TEXT_0;
	RuntimeObject* ___PANELTEXT_2;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___PANELTEXT_2_array;
	int32_t ___PANELTEXT_2_index;
	RuntimeObject* ___PANELTEXT_3;
	RuntimeObject* ___MSGSECCOUNT_7;
};
struct EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	float ___temp_9;
	RuntimeObject* ___MY_12;
	RuntimeObject* ___EXPLODEMISSILE_13;
	RuntimeObject* ___MY_15;
};
struct FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___LUP_1;
	float ___LUP_1_val;
	RuntimeObject* ___MY_3;
	RuntimeObject* ___temp_4;
	RuntimeObject* ___IMPL_REGION_7;
	float ___temp_8;
	RuntimeObject* ___NAMBIENT_9;
	RuntimeObject* ___LAMBIENT_10;
	RuntimeObject* ___LAMBIENT_11;
	float ___LAMBIENT_11_val;
	RuntimeObject* ___NAMBIENT_12;
	float ___NAMBIENT_12_val;
	RuntimeObject* ___LUP_16;
	RuntimeObject* ___LUP1_18;
	float ___LUP1_18_val;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___temp_21;
	RuntimeObject* ___IMPL_REGION1_24;
	float ___temp_25;
	RuntimeObject* ___NAMBIENT1_26;
	RuntimeObject* ___LAMBIENT1_27;
	RuntimeObject* ___LAMBIENT1_28;
	float ___LAMBIENT1_28_val;
	RuntimeObject* ___NAMBIENT1_29;
	float ___NAMBIENT1_29_val;
	RuntimeObject* ___LUP1_33;
	RuntimeObject* ___LUP2_35;
	float ___LUP2_35_val;
	RuntimeObject* ___MY_37;
	RuntimeObject* ___temp_38;
	RuntimeObject* ___IMPL_REGION2_41;
	float ___temp_42;
	RuntimeObject* ___NAMBIENT2_43;
	RuntimeObject* ___LAMBIENT2_44;
	RuntimeObject* ___LAMBIENT2_45;
	float ___LAMBIENT2_45_val;
	RuntimeObject* ___NAMBIENT2_46;
	float ___NAMBIENT2_46_val;
	RuntimeObject* ___LUP2_50;
	RuntimeObject* ___LUP3_52;
	float ___LUP3_52_val;
	RuntimeObject* ___MY_54;
	RuntimeObject* ___temp_55;
	RuntimeObject* ___IMPL_REGION3_58;
	float ___temp_59;
	RuntimeObject* ___NAMBIENT3_60;
	RuntimeObject* ___LAMBIENT3_61;
	RuntimeObject* ___LAMBIENT3_62;
	float ___LAMBIENT3_62_val;
	RuntimeObject* ___NAMBIENT3_63;
	float ___NAMBIENT3_63_val;
	RuntimeObject* ___LUP3_67;
	RuntimeObject* ___LUP4_69;
	float ___LUP4_69_val;
	RuntimeObject* ___MY_71;
	RuntimeObject* ___temp_72;
	RuntimeObject* ___IMPL_REGION4_75;
	float ___temp_76;
	RuntimeObject* ___NAMBIENT4_77;
	RuntimeObject* ___LAMBIENT4_78;
	RuntimeObject* ___LAMBIENT4_79;
	float ___LAMBIENT4_79_val;
	RuntimeObject* ___NAMBIENT4_80;
	float ___NAMBIENT4_80_val;
	RuntimeObject* ___LUP4_84;
	RuntimeObject* ___temp_88;
	RuntimeObject* ___IMPLODELIGHT_89;
};
struct FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_7;
	float ___temp_8;
	RuntimeObject* ___MY_10;
	float ___temp_11;
	RuntimeObject* ___TWO_PI_13;
	float ___TWO_PI_13_val;
	RuntimeObject* ___MY_16;
	float ___temp_17;
	RuntimeObject* ___MY_20;
	float ___temp_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_25;
	float ___temp_26;
	RuntimeObject* ___MY_28;
	float ___temp_29;
	RuntimeObject* ___MY_31;
	RuntimeObject* ___temp_32;
	RuntimeObject* ___WATER_REGION_36;
	RuntimeObject* ___temp_37;
	RuntimeObject* ___WATER_REGION_39;
	RuntimeObject* ___temp_40;
	RuntimeObject* ___MY_42;
	RuntimeObject* ___MY_45;
	float ___temp_46;
	RuntimeObject* ___GRAN02SND_47;
	RuntimeObject* ___MY_49;
	RuntimeObject* ___MY_51;
	RuntimeObject* ___MY_53;
	float ___temp_54;
	RuntimeObject* ___MY_56;
	float ___temp_57;
	RuntimeObject* ___MY_63;
	RuntimeObject* ___MY_66;
	RuntimeObject* ___MY_69;
	RuntimeObject* ___MY_71;
	RuntimeObject* ___MY_73;
	float ___temp_74;
	RuntimeObject* ___MY_76;
	float ___temp_77;
	RuntimeObject* ___MY_82;
	float ___temp_83;
	RuntimeObject* ___GRAN0TEX_84;
	RuntimeObject* ___MY_86;
	RuntimeObject* ___MY_89;
	RuntimeObject* ___MY_92;
	RuntimeObject* ___MY_95;
	RuntimeObject* ___EXPLOSIONTIMER_96;
	RuntimeObject* ___MY_98;
};
struct HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MODE_DEATH_0;
	float ___MODE_DEATH_0_val;
	RuntimeObject* ___MOVING_1;
	float ___MOVING_1_val;
	RuntimeObject* ___GOD_MODE_3;
	float ___GOD_MODE_3_val;
	RuntimeObject* ___HITSERIOUSNESS_4;
	RuntimeObject* ___HITSERIOUSNESS_5;
	float ___HITSERIOUSNESS_5_val;
	RuntimeObject* ___PLAYER_RESULT_6;
	float ___PLAYER_RESULT_6_val;
	RuntimeObject* ___TOUGHNESS_11;
	float ___TOUGHNESS_11_val;
	RuntimeObject* ___PLAYER_ARMOUR_13;
	float ___PLAYER_ARMOUR_13_val;
	RuntimeObject* ___HITSERIOUSNESS_14;
	float ___HITSERIOUSNESS_14_val;
	RuntimeObject* ___PLAYER_ARMOUR_15;
	float ___PLAYER_ARMOUR_15_val;
	RuntimeObject* ___PLAYER_ARMOUR_16;
	RuntimeObject* ___HITSERIOUSNESS_17;
	RuntimeObject* ___HITSERIOUSNESS_18;
	float ___HITSERIOUSNESS_18_val;
	RuntimeObject* ___HITSERIOUSNESS_19;
	float ___HITSERIOUSNESS_19_val;
	RuntimeObject* ___PLAYER_ANGLE_22;
	RuntimeObject* ___PLAYER_ANGLE_23;
	float ___PLAYER_ANGLE_23_val;
	RuntimeObject* ___PLAYER_ANGLE_24;
	float ___PLAYER_ANGLE_24_val;
	RuntimeObject* ___TOUGHNESS_34;
	float ___TOUGHNESS_34_val;
	RuntimeObject* ___PLAYER_TILT_35;
	RuntimeObject* ___PLAYER_TILT_36;
	float ___PLAYER_TILT_36_val;
	RuntimeObject* ___PLAYER_TILT_37;
	float ___PLAYER_TILT_37_val;
	RuntimeObject* ___TOUGHNESS_47;
	float ___TOUGHNESS_47_val;
	RuntimeObject* ___HITSERIOUSNESS_48;
	float ___HITSERIOUSNESS_48_val;
	RuntimeObject* ___PLAYER_HEALTH_49;
	float ___PLAYER_HEALTH_49_val;
	RuntimeObject* ___PLAYER_HEALTH_50;
	RuntimeObject* ___PLAYER_HIT_52;
	float ___PLAYER_HIT_52_val;
	RuntimeObject* ___PLAYER_HIT_54;
	RuntimeObject* ___HITVALUE_55;
	RuntimeObject* ___HITVALUE_56;
	float ___HITVALUE_56_val;
	RuntimeObject* ___HITSERIOUSNESS_59;
	float ___HITSERIOUSNESS_59_val;
	RuntimeObject* ___PLAYER_HEALTH_67;
	float ___PLAYER_HEALTH_67_val;
	RuntimeObject* ___UNDERWATER_72;
	float ___UNDERWATER_72_val;
	RuntimeObject* ___PLAYER_HEALTH_74;
	float ___PLAYER_HEALTH_74_val;
	RuntimeObject* ___HIT03SND_79;
	RuntimeObject* ___HIT01SND_81;
	RuntimeObject* ___HIT02SND_83;
	RuntimeObject* ___HIT04SND_85;
	RuntimeObject* ___KILLPLAYER_87;
	RuntimeObject* ___temp_90;
	RuntimeObject* ___REDOUT_91;
};
struct IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___LUP_1;
	float ___LUP_1_val;
	RuntimeObject* ___LUP_2;
	float ___LUP_2_val;
	RuntimeObject* ___IMPL_REGION_4;
	float ___temp_5;
	RuntimeObject* ___IMPL_REGION_7;
	RuntimeObject* ___LAMBIENT_8;
	float ___LAMBIENT_8_val;
	RuntimeObject* ___IMPL_REGION_10;
	float ___temp_11;
	RuntimeObject* ___NAMBIENT_12;
	float ___NAMBIENT_12_val;
	RuntimeObject* ___IMPL_REGION_14;
	float ___temp_15;
	RuntimeObject* ___LUP_17;
	RuntimeObject* ___NAMBIENT_18;
	float ___NAMBIENT_18_val;
	RuntimeObject* ___IMPL_REGION_20;
	RuntimeObject* ___LUP_22;
	RuntimeObject* ___LUP1_24;
	float ___LUP1_24_val;
	RuntimeObject* ___LUP1_25;
	float ___LUP1_25_val;
	RuntimeObject* ___IMPL_REGION1_27;
	float ___temp_28;
	RuntimeObject* ___IMPL_REGION1_30;
	RuntimeObject* ___LAMBIENT1_31;
	float ___LAMBIENT1_31_val;
	RuntimeObject* ___IMPL_REGION1_33;
	float ___temp_34;
	RuntimeObject* ___NAMBIENT1_35;
	float ___NAMBIENT1_35_val;
	RuntimeObject* ___IMPL_REGION1_37;
	float ___temp_38;
	RuntimeObject* ___LUP1_40;
	RuntimeObject* ___NAMBIENT1_41;
	float ___NAMBIENT1_41_val;
	RuntimeObject* ___IMPL_REGION1_43;
	RuntimeObject* ___LUP1_45;
	RuntimeObject* ___LUP2_47;
	float ___LUP2_47_val;
	RuntimeObject* ___LUP2_48;
	float ___LUP2_48_val;
	RuntimeObject* ___IMPL_REGION2_50;
	float ___temp_51;
	RuntimeObject* ___IMPL_REGION2_53;
	RuntimeObject* ___LAMBIENT2_54;
	float ___LAMBIENT2_54_val;
	RuntimeObject* ___IMPL_REGION2_56;
	float ___temp_57;
	RuntimeObject* ___NAMBIENT2_58;
	float ___NAMBIENT2_58_val;
	RuntimeObject* ___IMPL_REGION2_60;
	float ___temp_61;
	RuntimeObject* ___LUP2_63;
	RuntimeObject* ___NAMBIENT2_64;
	float ___NAMBIENT2_64_val;
	RuntimeObject* ___IMPL_REGION2_66;
	RuntimeObject* ___LUP2_68;
	RuntimeObject* ___LUP3_70;
	float ___LUP3_70_val;
	RuntimeObject* ___LUP3_71;
	float ___LUP3_71_val;
	RuntimeObject* ___IMPL_REGION3_73;
	float ___temp_74;
	RuntimeObject* ___IMPL_REGION3_76;
	RuntimeObject* ___LAMBIENT3_77;
	float ___LAMBIENT3_77_val;
	RuntimeObject* ___IMPL_REGION3_79;
	float ___temp_80;
	RuntimeObject* ___NAMBIENT3_81;
	float ___NAMBIENT3_81_val;
	RuntimeObject* ___IMPL_REGION3_83;
	float ___temp_84;
	RuntimeObject* ___LUP3_86;
	RuntimeObject* ___NAMBIENT3_87;
	float ___NAMBIENT3_87_val;
	RuntimeObject* ___IMPL_REGION3_89;
	RuntimeObject* ___LUP3_91;
	RuntimeObject* ___LUP4_93;
	float ___LUP4_93_val;
	RuntimeObject* ___LUP4_94;
	float ___LUP4_94_val;
	RuntimeObject* ___IMPL_REGION4_96;
	float ___temp_97;
	RuntimeObject* ___IMPL_REGION4_99;
	RuntimeObject* ___LAMBIENT4_100;
	float ___LAMBIENT4_100_val;
	RuntimeObject* ___IMPL_REGION4_102;
	float ___temp_103;
	RuntimeObject* ___NAMBIENT4_104;
	float ___NAMBIENT4_104_val;
	RuntimeObject* ___IMPL_REGION4_106;
	float ___temp_107;
	RuntimeObject* ___LUP4_109;
	RuntimeObject* ___NAMBIENT4_110;
	float ___NAMBIENT4_110_val;
	RuntimeObject* ___IMPL_REGION4_112;
	RuntimeObject* ___LUP4_114;
	RuntimeObject* ___CHECKENDFLAG_116;
	RuntimeObject* ___LUP_118;
	float ___LUP_118_val;
	RuntimeObject* ___CHECKENDFLAG_120;
	float ___CHECKENDFLAG_120_val;
	RuntimeObject* ___CHECKENDFLAG_121;
	RuntimeObject* ___LUP1_123;
	float ___LUP1_123_val;
	RuntimeObject* ___CHECKENDFLAG_125;
	float ___CHECKENDFLAG_125_val;
	RuntimeObject* ___CHECKENDFLAG_126;
	RuntimeObject* ___LUP2_128;
	float ___LUP2_128_val;
	RuntimeObject* ___CHECKENDFLAG_130;
	float ___CHECKENDFLAG_130_val;
	RuntimeObject* ___CHECKENDFLAG_131;
	RuntimeObject* ___LUP3_133;
	float ___LUP3_133_val;
	RuntimeObject* ___CHECKENDFLAG_135;
	float ___CHECKENDFLAG_135_val;
	RuntimeObject* ___CHECKENDFLAG_136;
	RuntimeObject* ___LUP4_138;
	float ___LUP4_138_val;
	RuntimeObject* ___CHECKENDFLAG_140;
	float ___CHECKENDFLAG_140_val;
	RuntimeObject* ___CHECKENDFLAG_141;
	RuntimeObject* ___CHECKENDFLAG_143;
	float ___CHECKENDFLAG_143_val;
};
struct INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MODE_GEHEN_0;
	float ___MODE_GEHEN_0_val;
	RuntimeObject* ___MOVING_1;
};
struct MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MODE_GEHEN_0;
	float ___MODE_GEHEN_0_val;
	RuntimeObject* ___MOVING_1;
	float ___MOVING_1_val;
	RuntimeObject* ___PLAYER_SIZE_2;
	RuntimeObject* ___PLAYER_SIZE_3;
	float ___PLAYER_SIZE_3_val;
	RuntimeObject* ___MY_SIZE_4;
	float ___MY_SIZE_4_val;
	RuntimeObject* ___WALK_8;
	float ___WALK_8_val;
	RuntimeObject* ___MODE_SCHWIMMEN_9;
	float ___MODE_SCHWIMMEN_9_val;
	RuntimeObject* ___MOVING_10;
	float ___MOVING_10_val;
	RuntimeObject* ___PLAYER_SIZE_11;
	RuntimeObject* ___PLAYER_SIZE_12;
	float ___PLAYER_SIZE_12_val;
	RuntimeObject* ___WAVE_17;
	float ___WAVE_17_val;
	RuntimeObject* ___MODE_TAUCHEN_18;
	float ___MODE_TAUCHEN_18_val;
	RuntimeObject* ___MOVING_19;
	float ___MOVING_19_val;
	RuntimeObject* ___PLAYER_SIZE_20;
	RuntimeObject* ___PLAYER_SIZE_21;
	float ___PLAYER_SIZE_21_val;
	RuntimeObject* ___MODE_DEATH_23;
	float ___MODE_DEATH_23_val;
	RuntimeObject* ___MOVING_24;
	float ___MOVING_24_val;
	RuntimeObject* ___PLAYER_SIZE_25;
	RuntimeObject* ___PLAYER_SIZE_26;
	float ___PLAYER_SIZE_26_val;
	RuntimeObject* ___PLAYER_SIZE_27;
	float ___PLAYER_SIZE_27_val;
	RuntimeObject* ___MODE_GEHEN_30;
	float ___MODE_GEHEN_30_val;
	RuntimeObject* ___MOVING_31;
	float ___MOVING_31_val;
	RuntimeObject* ___PLAYER_SIZE_32;
	RuntimeObject* ___PLAYER_SIZE_33;
	float ___PLAYER_SIZE_33_val;
	RuntimeObject* ___PLAYER_SIZE_34;
	float ___PLAYER_SIZE_34_val;
	RuntimeObject* ___PLAYER_DEPTH_36;
	float ___PLAYER_DEPTH_36_val;
	RuntimeObject* ___MODE_SCHWIMMEN_37;
	float ___MODE_SCHWIMMEN_37_val;
	RuntimeObject* ___MOVING_38;
	float ___MOVING_38_val;
	RuntimeObject* ___PLAYER_DEPTH_40;
	float ___PLAYER_DEPTH_40_val;
	RuntimeObject* ___MODE_GEHEN_41;
	float ___MODE_GEHEN_41_val;
	RuntimeObject* ___MOVING_42;
	float ___MOVING_42_val;
	RuntimeObject* ___PLAYER_DEPTH_44;
	float ___PLAYER_DEPTH_44_val;
	RuntimeObject* ___MOUSE_MIDDLE_46;
	float ___MOUSE_MIDDLE_46_val;
	RuntimeObject* ___KEY_SENSE_47;
	float ___KEY_SENSE_47_val;
	RuntimeObject* ___FORCE_AHEAD_48;
	RuntimeObject* ___FORCE_AHEAD_49;
	float ___FORCE_AHEAD_49_val;
	RuntimeObject* ___FORCEFORWARD_50;
	RuntimeObject* ___KEY_SHIFT_52;
	float ___KEY_SHIFT_52_val;
	RuntimeObject* ___FORCE_AHEAD_53;
	RuntimeObject* ___FORCE_AHEAD_54;
	float ___FORCE_AHEAD_54_val;
	RuntimeObject* ___FORCE_AHEAD_55;
	float ___FORCE_AHEAD_55_val;
	RuntimeObject* ___SHIFT_SENSE_57;
	float ___SHIFT_SENSE_57_val;
	RuntimeObject* ___FORCE_AHEAD_58;
	float ___FORCE_AHEAD_58_val;
	RuntimeObject* ___FORCEFORWARD_59;
	RuntimeObject* ___FORCE_STRAFE_60;
	float ___FORCE_STRAFE_60_val;
	RuntimeObject* ___FORCESIDEWARD_61;
	RuntimeObject* ___FORCE_ROT_62;
	float ___FORCE_ROT_62_val;
	RuntimeObject* ___FORCEROTATION_63;
	RuntimeObject* ___MOUSE_RIGHT_65;
	float ___MOUSE_RIGHT_65_val;
	RuntimeObject* ___FORCEFORWARD_67;
	RuntimeObject* ___KEY_ALT_69;
	float ___KEY_ALT_69_val;
	RuntimeObject* ___FORCE_STRAFE_70;
	float ___FORCE_STRAFE_70_val;
	RuntimeObject* ___FORCEROTATION_71;
	RuntimeObject* ___FORCESIDEWARD_73;
	RuntimeObject* ___FORCEFORWARD_75;
	RuntimeObject* ___BOOSTER_77;
	RuntimeObject* ___MASS_78;
	float ___MASS_78_val;
	RuntimeObject* ___INERTIA_79;
	RuntimeObject* ___FRICTION_80;
	RuntimeObject* ___FRICTION_81;
	float ___FRICTION_81_val;
	RuntimeObject* ___FRIC_82;
	float ___FRIC_82_val;
	RuntimeObject* ___DEPTH_86;
	float ___DEPTH_86_val;
	RuntimeObject* ___FORCE_87;
	RuntimeObject* ___FORCE_88;
	float ___FORCE_88_val;
	RuntimeObject* ___STRENGTH_90;
	float ___STRENGTH_90_val;
	RuntimeObject* ___WAVE_STR_92;
	float ___WAVE_STR_92_val;
	RuntimeObject* ___WAVE_94;
	float ___WAVE_94_val;
	RuntimeObject* ___BOOSTER_97;
	float ___BOOSTER_97_val;
	RuntimeObject* ___FORCEFORWARD_100;
	float ___FORCEFORWARD_100_val;
	RuntimeObject* ___PLAYER_COS_102;
	float ___PLAYER_COS_102_val;
	RuntimeObject* ___FORCESIDEWARD_106;
	float ___FORCESIDEWARD_106_val;
	RuntimeObject* ___PLAYER_SIN_108;
	float ___PLAYER_SIN_108_val;
	RuntimeObject* ___DRIFT_X_111;
	float ___DRIFT_X_111_val;
	RuntimeObject* ___FORCE_112;
	float ___FORCE_112_val;
	RuntimeObject* ___PLAYER_VX_113;
	float ___PLAYER_VX_113_val;
	RuntimeObject* ___PLAYER_VX_114;
	RuntimeObject* ___FORCE_115;
	RuntimeObject* ___FORCE_116;
	float ___FORCE_116_val;
	RuntimeObject* ___STRENGTH_118;
	float ___STRENGTH_118_val;
	RuntimeObject* ___WAVE_STR_120;
	float ___WAVE_STR_120_val;
	RuntimeObject* ___WAVE_122;
	float ___WAVE_122_val;
	RuntimeObject* ___BOOSTER_125;
	float ___BOOSTER_125_val;
	RuntimeObject* ___FORCEFORWARD_128;
	float ___FORCEFORWARD_128_val;
	RuntimeObject* ___PLAYER_SIN_130;
	float ___PLAYER_SIN_130_val;
	RuntimeObject* ___FORCESIDEWARD_134;
	float ___FORCESIDEWARD_134_val;
	RuntimeObject* ___PLAYER_COS_136;
	float ___PLAYER_COS_136_val;
	RuntimeObject* ___DRIFT_Y_139;
	float ___DRIFT_Y_139_val;
	RuntimeObject* ___FORCE_140;
	float ___FORCE_140_val;
	RuntimeObject* ___PLAYER_VY_141;
	float ___PLAYER_VY_141_val;
	RuntimeObject* ___PLAYER_VY_142;
	RuntimeObject* ___FRICTION_144;
	RuntimeObject* ___MODE_GEHEN_145;
	float ___MODE_GEHEN_145_val;
	RuntimeObject* ___MOVING_146;
	float ___MOVING_146_val;
	RuntimeObject* ___FRICTION_148;
	RuntimeObject* ___FORCE_149;
	RuntimeObject* ___FORCE_150;
	float ___FORCE_150_val;
	RuntimeObject* ___FORCEROTATION_153;
	float ___FORCEROTATION_153_val;
	RuntimeObject* ___FORCE_154;
	float ___FORCE_154_val;
	RuntimeObject* ___PLAYER_VROT_155;
	float ___PLAYER_VROT_155_val;
	RuntimeObject* ___PLAYER_VROT_156;
	RuntimeObject* ___WEAPONWAVE_157;
	RuntimeObject* ___WEAPONWAVE_158;
	float ___WEAPONWAVE_158_val;
	RuntimeObject* ___WAVE_159;
	float ___WAVE_159_val;
	RuntimeObject* ___PLAYER_SPEED_161;
	float ___PLAYER_SPEED_161_val;
	RuntimeObject* ___MP5_01OVL_163;
	RuntimeObject* ___MP5_01OVL_165;
	float ___temp_166;
	RuntimeObject* ___WEAPONWAVE_171;
	float ___WEAPONWAVE_171_val;
	RuntimeObject* ___QGUN00OVL_173;
	RuntimeObject* ___QGUN00OVL_175;
	float ___temp_176;
	RuntimeObject* ___WEAPONWAVE_181;
	float ___WEAPONWAVE_181_val;
	RuntimeObject* ___GRAN00OVL_183;
	RuntimeObject* ___GRAN00OVL_185;
	float ___temp_186;
	RuntimeObject* ___WEAPONWAVE_191;
	float ___WEAPONWAVE_191_val;
	RuntimeObject* ___FORCE_192;
	RuntimeObject* ___FORCE_193;
	float ___FORCE_193_val;
	RuntimeObject* ___GRAVITY_194;
	float ___GRAVITY_194_val;
	RuntimeObject* ___FLOAT_STR_196;
	float ___FLOAT_STR_196_val;
	RuntimeObject* ___FORCE_UP_198;
	float ___FORCE_UP_198_val;
	RuntimeObject* ___FRIC_AIR_199;
	float ___FRIC_AIR_199_val;
	RuntimeObject* ___FRICTION_200;
	RuntimeObject* ___PLAYER_HGT_202;
	float ___PLAYER_HGT_202_val;
	RuntimeObject* ___FRICTION_204;
	RuntimeObject* ___FORCE_205;
	RuntimeObject* ___FORCE_206;
	float ___FORCE_206_val;
	RuntimeObject* ___FORCE_207;
	float ___FORCE_207_val;
	RuntimeObject* ___PLAYER_HGT_211;
	float ___PLAYER_HGT_211_val;
	RuntimeObject* ___FALLING_HEIGHT_213;
	float ___FALLING_HEIGHT_213_val;
	RuntimeObject* ___HERE_216;
	RuntimeObject* ___temp_217;
	RuntimeObject* ___FALLING_HEIGHT_219;
	RuntimeObject* ___FWT01SND_220;
	RuntimeObject* ___FALLING_FLOOR_222;
	float ___FALLING_FLOOR_222_val;
	RuntimeObject* ___HERE_224;
	float ___temp_225;
	RuntimeObject* ___FALLING_HEIGHT_226;
	RuntimeObject* ___FALLING_HEIGHT_227;
	float ___FALLING_HEIGHT_227_val;
	RuntimeObject* ___FALLING_HEIGHT_228;
	float ___FALLING_HEIGHT_228_val;
	RuntimeObject* ___HERE_231;
	float ___temp_232;
	RuntimeObject* ___FALLING_FLOOR_234;
	float ___FALLING_FLOOR_234_val;
	RuntimeObject* ___FCT01SND_235;
	RuntimeObject* ___PLAYER_RESULT_237;
	RuntimeObject* ___PLAYER_RESULT_238;
	float ___PLAYER_RESULT_238_val;
	RuntimeObject* ___FALLING_HEIGHT_240;
	float ___FALLING_HEIGHT_240_val;
	RuntimeObject* ___PLAYER_RESULT_247;
	float ___PLAYER_RESULT_247_val;
	RuntimeObject* ___FALLING_HEIGHT_249;
	RuntimeObject* ___FORCE_250;
	float ___FORCE_250_val;
	RuntimeObject* ___PLAYER_VZ_251;
	float ___PLAYER_VZ_251_val;
	RuntimeObject* ___PLAYER_VZ_252;
	RuntimeObject* ___PLAYER_HGT_254;
	float ___PLAYER_HGT_254_val;
	RuntimeObject* ___HERE_257;
	RuntimeObject* ___temp_258;
	RuntimeObject* ___HERE_261;
	RuntimeObject* ___temp_262;
	RuntimeObject* ___FALLING_HEIGHT_263;
	float ___FALLING_HEIGHT_263_val;
	RuntimeObject* ___PLAYER_HGT_264;
	float ___PLAYER_HGT_264_val;
	RuntimeObject* ___HERE_266;
	float ___temp_267;
	RuntimeObject* ___FALLING_FLOOR_268;
	RuntimeObject* ___PLAYER_HGT_269;
	float ___PLAYER_HGT_269_val;
	RuntimeObject* ___FALLING_HEIGHT_270;
	RuntimeObject* ___DUCK_VAL_271;
	RuntimeObject* ___DUCK_VAL_272;
	float ___DUCK_VAL_272_val;
	RuntimeObject* ___DUCK_VAL_275;
	float ___DUCK_VAL_275_val;
	RuntimeObject* ___MODE_SCHWIMMEN_276;
	float ___MODE_SCHWIMMEN_276_val;
	RuntimeObject* ___MOVING_277;
	float ___MOVING_277_val;
	RuntimeObject* ___FORCE_UP_279;
	float ___FORCE_UP_279_val;
	RuntimeObject* ___DUCK_VAL_280;
	RuntimeObject* ___DUCK_VAL_281;
	float ___DUCK_VAL_281_val;
	RuntimeObject* ___DUCK_VAL_282;
	float ___DUCK_VAL_282_val;
	RuntimeObject* ___DUCK_STR_284;
	float ___DUCK_STR_284_val;
	RuntimeObject* ___FORCE_UP_286;
	float ___FORCE_UP_286_val;
	RuntimeObject* ___PLAYER_SIZE_287;
	RuntimeObject* ___PLAYER_SIZE_288;
	float ___PLAYER_SIZE_288_val;
	RuntimeObject* ___PLAYER_SIZE_289;
	float ___PLAYER_SIZE_289_val;
	RuntimeObject* ___DUCK_VAL_291;
	float ___DUCK_VAL_291_val;
	RuntimeObject* ___MODE_GEHEN_292;
	float ___MODE_GEHEN_292_val;
	RuntimeObject* ___MOVING_293;
	float ___MOVING_293_val;
	RuntimeObject* ___JUMP_PHASE_295;
	float ___JUMP_PHASE_295_val;
	RuntimeObject* ___FORCE_UP_297;
	float ___FORCE_UP_297_val;
	RuntimeObject* ___JUMP_PHASE_299;
	RuntimeObject* ___JUMP_PHASE_301;
	float ___JUMP_PHASE_301_val;
	RuntimeObject* ___DUCK_VAL_302;
	RuntimeObject* ___DUCK_VAL_303;
	float ___DUCK_VAL_303_val;
	RuntimeObject* ___DUCK_VAL_304;
	float ___DUCK_VAL_304_val;
	RuntimeObject* ___DUCK_VAL_308;
	float ___DUCK_VAL_308_val;
	RuntimeObject* ___JUMP_PHASE_310;
	RuntimeObject* ___JUMP_PHASE_312;
	float ___JUMP_PHASE_312_val;
	RuntimeObject* ___DUCK_VAL_314;
	RuntimeObject* ___PLAYER_Z_315;
	RuntimeObject* ___PLAYER_Z_316;
	float ___PLAYER_Z_316_val;
	RuntimeObject* ___FLOOR_HGT_317;
	float ___FLOOR_HGT_317_val;
	RuntimeObject* ___MY_SIZE_319;
	float ___MY_SIZE_319_val;
	RuntimeObject* ___PLAYER_VZ_321;
	RuntimeObject* ___JUMP_PHASE_323;
	RuntimeObject* ___PLAYER_VZ_325;
	float ___PLAYER_VZ_325_val;
	RuntimeObject* ___PLAYER_HGT_327;
	float ___PLAYER_HGT_327_val;
	RuntimeObject* ___JUMP_PHASE_329;
	RuntimeObject* ___PLAYER_SPEED_SQR_330;
	RuntimeObject* ___PLAYER_SPEED_SQR_331;
	float ___PLAYER_SPEED_SQR_331_val;
	RuntimeObject* ___PLAYER_VX_332;
	float ___PLAYER_VX_332_val;
	RuntimeObject* ___PLAYER_VX_334;
	float ___PLAYER_VX_334_val;
	RuntimeObject* ___PLAYER_VY_336;
	float ___PLAYER_VY_336_val;
	RuntimeObject* ___PLAYER_VY_338;
	float ___PLAYER_VY_338_val;
	RuntimeObject* ___TILT_DECREASE_340;
	float ___TILT_DECREASE_340_val;
	RuntimeObject* ___MAX_PLAYER_TILT_P_341;
	float ___MAX_PLAYER_TILT_P_341_val;
	RuntimeObject* ___PLAYER_TILT_342;
	float ___PLAYER_TILT_342_val;
	RuntimeObject* ___MAX_PLAYER_TILT_N_343;
	float ___MAX_PLAYER_TILT_N_343_val;
	RuntimeObject* ___PLAYER_TILT_344;
	float ___PLAYER_TILT_344_val;
	RuntimeObject* ___PLAYER_SPEED_SQR_346;
	float ___PLAYER_SPEED_SQR_346_val;
	RuntimeObject* ___PLAYER_VZ_348;
	float ___PLAYER_VZ_348_val;
	RuntimeObject* ___TILT_DECREASE_350;
	RuntimeObject* ___PLAYER_TILT_351;
	RuntimeObject* ___PLAYER_TILT_352;
	float ___PLAYER_TILT_352_val;
	RuntimeObject* ___TILT_DECREASE_353;
	float ___TILT_DECREASE_353_val;
	RuntimeObject* ___PLAYER_TILT_355;
	float ___PLAYER_TILT_355_val;
	RuntimeObject* ___FORCE_TILT_359;
	float ___FORCE_TILT_359_val;
	RuntimeObject* ___FLOAT_STR_363;
	float ___FLOAT_STR_363_val;
	RuntimeObject* ___FORCE_UP_365;
	float ___FORCE_UP_365_val;
	RuntimeObject* ___TIME_CORR_367;
	float ___TIME_CORR_367_val;
	RuntimeObject* ___FLY_MODE_372;
	float ___FLY_MODE_372_val;
	RuntimeObject* ___PLAYER_SPEED_SQR_375;
	float ___PLAYER_SPEED_SQR_375_val;
	RuntimeObject* ___MAX_PLAYER_TILT_P_377;
	float ___MAX_PLAYER_TILT_P_377_val;
	RuntimeObject* ___PLAYER_TILT_378;
	float ___PLAYER_TILT_378_val;
	RuntimeObject* ___TILT_DECREASE_380;
	RuntimeObject* ___MAX_PLAYER_TILT_N_381;
	float ___MAX_PLAYER_TILT_N_381_val;
	RuntimeObject* ___PLAYER_TILT_382;
	float ___PLAYER_TILT_382_val;
	RuntimeObject* ___TILT_DECREASE_384;
	RuntimeObject* ___MODE_SCHWIMMEN_385;
	float ___MODE_SCHWIMMEN_385_val;
	RuntimeObject* ___MOVING_386;
	float ___MOVING_386_val;
	RuntimeObject* ___PLAYER_TILT_387;
	RuntimeObject* ___PLAYER_TILT_388;
	float ___PLAYER_TILT_388_val;
	RuntimeObject* ___PLAYER_TILT_389;
	float ___PLAYER_TILT_389_val;
	RuntimeObject* ___WAVE_393;
	float ___WAVE_393_val;
	RuntimeObject* ___MODE_TAUCHEN_394;
	float ___MODE_TAUCHEN_394_val;
	RuntimeObject* ___MOVING_395;
	float ___MOVING_395_val;
	RuntimeObject* ___JUMP_PHASE_397;
	float ___JUMP_PHASE_397_val;
	RuntimeObject* ___TILT_DECREASE_399;
	float ___TILT_DECREASE_399_val;
	RuntimeObject* ___PLAYER_HGT_401;
	float ___PLAYER_HGT_401_val;
	RuntimeObject* ___PLAYER_TILT_402;
	RuntimeObject* ___PLAYER_TILT_403;
	float ___PLAYER_TILT_403_val;
	RuntimeObject* ___PLAYER_TILT_404;
	float ___PLAYER_TILT_404_val;
	RuntimeObject* ___PLAYER_HGT_409;
	float ___PLAYER_HGT_409_val;
	RuntimeObject* ___RICHTER_414;
	float ___RICHTER_414_val;
	RuntimeObject* ___PLAYER_X_415;
	RuntimeObject* ___PLAYER_X_416;
	float ___PLAYER_X_416_val;
	RuntimeObject* ___PLAYER_X_417;
	float ___PLAYER_X_417_val;
	RuntimeObject* ___RICHTER_419;
	float ___RICHTER_419_val;
	RuntimeObject* ___PLAYER_Y_426;
	RuntimeObject* ___PLAYER_Y_427;
	float ___PLAYER_Y_427_val;
	RuntimeObject* ___PLAYER_Y_428;
	float ___PLAYER_Y_428_val;
	RuntimeObject* ___RICHTER_430;
	float ___RICHTER_430_val;
	RuntimeObject* ___RANDOM_1_433;
	float ___RANDOM_1_433_val;
	RuntimeObject* ___PLAYER_VX_437;
	RuntimeObject* ___PLAYER_VX_438;
	float ___PLAYER_VX_438_val;
	RuntimeObject* ___PLAYER_VX_439;
	float ___PLAYER_VX_439_val;
	RuntimeObject* ___RICHTER_443;
	float ___RICHTER_443_val;
	RuntimeObject* ___PLAYER_VY_450;
	RuntimeObject* ___PLAYER_VY_451;
	float ___PLAYER_VY_451_val;
	RuntimeObject* ___PLAYER_VY_452;
	float ___PLAYER_VY_452_val;
	RuntimeObject* ___RICHTER_456;
	float ___RICHTER_456_val;
	RuntimeObject* ___RANDOM_1_459;
	float ___RANDOM_1_459_val;
	RuntimeObject* ___PLAYER_Z_463;
	RuntimeObject* ___PLAYER_Z_464;
	float ___PLAYER_Z_464_val;
	RuntimeObject* ___PLAYER_Z_465;
	float ___PLAYER_Z_465_val;
	RuntimeObject* ___RICHTER_467;
	float ___RICHTER_467_val;
	RuntimeObject* ___RANDOM_2_470;
	float ___RANDOM_2_470_val;
	RuntimeObject* ___RANDOM_1_474;
	float ___RANDOM_1_474_val;
	RuntimeObject* ___RANDOM_2_475;
	RuntimeObject* ___RANDOM_1_477;
	RuntimeObject* ___KEY_INS_479;
	float ___KEY_INS_479_val;
	RuntimeObject* ___PLAYER_ARC_480;
	RuntimeObject* ___PLAYER_ARC_481;
	float ___PLAYER_ARC_481_val;
	RuntimeObject* ___PLAYER_ARC_482;
	float ___PLAYER_ARC_482_val;
	RuntimeObject* ___KEY_DEL_486;
	float ___KEY_DEL_486_val;
	RuntimeObject* ___PLAYER_ARC_487;
	RuntimeObject* ___PLAYER_ARC_488;
	float ___PLAYER_ARC_488_val;
	RuntimeObject* ___PLAYER_ARC_489;
	float ___PLAYER_ARC_489_val;
};
struct PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___AMMO_MP5_1;
	float ___AMMO_MP5_1_val;
	RuntimeObject* ___AMMO_MP5_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___AMMO01SND_6;
	RuntimeObject* ___GET01STR_8;
};
struct PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___HAS_GRANADE_1;
	RuntimeObject* ___AMMO_GRANADE_3;
	float ___AMMO_GRANADE_3_val;
	RuntimeObject* ___AMMO_GRANADE_4;
	RuntimeObject* ___MY_7;
	RuntimeObject* ___GRAN01SND_8;
	RuntimeObject* ___GET05STR_10;
};
struct PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___AMMO_QUANTUM_1;
	float ___AMMO_QUANTUM_1_val;
	RuntimeObject* ___AMMO_QUANTUM_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___QGUN01SND_6;
	RuntimeObject* ___GET07STR_8;
};
struct PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___AMMO_STINGER_1;
	float ___AMMO_STINGER_1_val;
	RuntimeObject* ___AMMO_STINGER_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___AMMO01SND_6;
	RuntimeObject* ___GET06STR_8;
};
struct PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PLAYER_ARMOUR_1;
	float ___PLAYER_ARMOUR_1_val;
	RuntimeObject* ___PLAYER_ARMOUR_3;
	float ___PLAYER_ARMOUR_3_val;
	RuntimeObject* ___PLAYER_ARMOUR_4;
	RuntimeObject* ___MY_7;
	RuntimeObject* ___ARMO01SND_8;
	RuntimeObject* ___GET10STR_10;
};
struct PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PLAYER_HEALTH_1;
	float ___PLAYER_HEALTH_1_val;
	RuntimeObject* ___PLAYER_HEALTH_3;
	float ___PLAYER_HEALTH_3_val;
	RuntimeObject* ___PLAYER_HEALTH_4;
	RuntimeObject* ___MY_7;
	RuntimeObject* ___MP_501SND_8;
	RuntimeObject* ___GET11STR_10;
};
struct PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___HAS_MP5_1;
	RuntimeObject* ___AMMO_MP5_3;
	float ___AMMO_MP5_3_val;
	RuntimeObject* ___AMMO_MP5_4;
	RuntimeObject* ___WEAPONSEL_6;
	float ___WEAPONSEL_6_val;
	RuntimeObject* ___WEAPONSEL_8;
	float ___WEAPONSEL_8_val;
	RuntimeObject* ___AMMO01SND_9;
	RuntimeObject* ___MY_13;
	RuntimeObject* ___GET02STR_14;
};
struct PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___HAS_QUANTUM_1;
	RuntimeObject* ___AMMO_QUANTUM_3;
	float ___AMMO_QUANTUM_3_val;
	RuntimeObject* ___AMMO_QUANTUM_4;
	RuntimeObject* ___WEAPONSEL_6;
	float ___WEAPONSEL_6_val;
	RuntimeObject* ___MY_9;
	RuntimeObject* ___GET09STR_10;
};
struct PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___HAS_STINGER_1;
	RuntimeObject* ___AMMO_STINGER_3;
	float ___AMMO_STINGER_3_val;
	RuntimeObject* ___AMMO_STINGER_4;
	RuntimeObject* ___WEAPONSEL_6;
	float ___WEAPONSEL_6_val;
	RuntimeObject* ___MY_9;
	RuntimeObject* ___GET08STR_10;
};
struct SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PLAYER_HEALTH_1;
	float ___PLAYER_HEALTH_1_val;
	RuntimeObject* ___WEAPONSEL_3;
	float ___WEAPONSEL_3_val;
	RuntimeObject* ___HAS_MP5_5;
	float ___HAS_MP5_5_val;
	RuntimeObject* ___WRN03STR_6;
	RuntimeObject* ___WEAPONSEL_9;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___GUNFIRING_28;
	float ___GUNFIRING_28_val;
	RuntimeObject* ___MY_GUN_30;
	RuntimeObject* ___MY_GUN_33;
	float ___temp_34;
	RuntimeObject* ___MAP_MODE_36;
	RuntimeObject* ___MY_GUN_41;
	RuntimeObject* ___MY_GUN_44;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MY_GUN_48;
	float ___temp_49;
	RuntimeObject* ___MP5ACT_50;
	RuntimeObject* ___MY_GUN_54;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___MY_GUN_58;
	float ___temp_59;
	RuntimeObject* ___MP5_01OVL_60;
	RuntimeObject* ___RENDER_MODE_64;
	RuntimeObject* ___FIRE_65;
	RuntimeObject* ___FIRE_67;
	RuntimeObject* ___GUN_ON_70;
	RuntimeObject* ___MP_501SND_71;
	RuntimeObject* ___SELECTTRICORDER_73;
	RuntimeObject* ___SELECTNONE_75;
	RuntimeObject* ___SELECTNONE_77;
	RuntimeObject* ___SELECTMP5_79;
	RuntimeObject* ___SELECTMP5BURST_81;
	RuntimeObject* ___SELECTGRANADE_83;
	RuntimeObject* ___SELECTSTINGER_85;
	RuntimeObject* ___SELECTQUANTUM_87;
};
struct SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PLAYER_HEALTH_1;
	float ___PLAYER_HEALTH_1_val;
	RuntimeObject* ___WEAPONSEL_3;
	float ___WEAPONSEL_3_val;
	RuntimeObject* ___HAS_QUANTUM_5;
	float ___HAS_QUANTUM_5_val;
	RuntimeObject* ___WRN03STR_6;
	RuntimeObject* ___WEAPONSEL_9;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___GUNFIRING_32;
	float ___GUNFIRING_32_val;
	RuntimeObject* ___MY_GUN_34;
	RuntimeObject* ___MY_GUN_37;
	float ___temp_38;
	RuntimeObject* ___WEAPONSEL_40;
	RuntimeObject* ___MAP_MODE_42;
	RuntimeObject* ___MY_GUN_47;
	RuntimeObject* ___MY_GUN_50;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MY_GUN_54;
	float ___temp_55;
	RuntimeObject* ___QGUNACT_56;
	RuntimeObject* ___MY_GUN_60;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___MY_GUN_64;
	float ___temp_65;
	RuntimeObject* ___QGUN00OVL_66;
	RuntimeObject* ___BEAM_69;
	RuntimeObject* ___BEAM_71;
	RuntimeObject* ___GUN_ON_74;
	RuntimeObject* ___RENDER_MODE_76;
	RuntimeObject* ___QGUN01SND_77;
	RuntimeObject* ___SELECTTRICORDER_79;
	RuntimeObject* ___SELECTNONE_81;
	RuntimeObject* ___SELECTNONE_83;
	RuntimeObject* ___SELECTMP5_85;
	RuntimeObject* ___SELECTMP5BURST_87;
	RuntimeObject* ___SELECTGRANADE_89;
	RuntimeObject* ___SELECTSTINGER_91;
	RuntimeObject* ___SELECTQUANTUM_93;
};
struct SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PLAYER_HEALTH_1;
	float ___PLAYER_HEALTH_1_val;
	RuntimeObject* ___WEAPONSEL_3;
	float ___WEAPONSEL_3_val;
	RuntimeObject* ___HAS_STINGER_5;
	float ___HAS_STINGER_5_val;
	RuntimeObject* ___WRN03STR_6;
	RuntimeObject* ___WEAPONSEL_9;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___GUNFIRING_32;
	float ___GUNFIRING_32_val;
	RuntimeObject* ___MY_GUN_34;
	RuntimeObject* ___MY_GUN_37;
	float ___temp_38;
	RuntimeObject* ___WEAPONSEL_40;
	RuntimeObject* ___MAP_MODE_42;
	RuntimeObject* ___MY_GUN_47;
	RuntimeObject* ___MY_GUN_50;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MY_GUN_54;
	float ___temp_55;
	RuntimeObject* ___STNGACT_56;
	RuntimeObject* ___MY_GUN_60;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___MY_GUN_64;
	float ___temp_65;
	RuntimeObject* ___STNG00OVL_66;
	RuntimeObject* ___LAUNCH_69;
	RuntimeObject* ___LAUNCH_71;
	RuntimeObject* ___GUN_ON_74;
	RuntimeObject* ___RENDER_MODE_76;
	RuntimeObject* ___STNG01SND_77;
	RuntimeObject* ___SELECTTRICORDER_79;
	RuntimeObject* ___SELECTNONE_81;
	RuntimeObject* ___SELECTNONE_83;
	RuntimeObject* ___SELECTMP5_85;
	RuntimeObject* ___SELECTMP5BURST_87;
	RuntimeObject* ___SELECTGRANADE_89;
	RuntimeObject* ___SELECTSTINGER_91;
	RuntimeObject* ___SELECTQUANTUM_93;
};
struct SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MOVING_1;
	float ___MOVING_1_val;
	RuntimeObject* ___MODE_GEHEN_2;
	float ___MODE_GEHEN_2_val;
	RuntimeObject* ___MOVING_3;
	float ___MOVING_3_val;
	RuntimeObject* ___MODE_SCHWIMMEN_4;
	float ___MODE_SCHWIMMEN_4_val;
	RuntimeObject* ___MOVING_5;
	float ___MOVING_5_val;
	RuntimeObject* ___MODE_TAUCHEN_6;
	float ___MODE_TAUCHEN_6_val;
	RuntimeObject* ___MOVING_7;
	float ___MOVING_7_val;
};
struct SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___FRIC_1;
	RuntimeObject* ___MODE_SCHWIMMEN_2;
	float ___MODE_SCHWIMMEN_2_val;
	RuntimeObject* ___MOVING_3;
	RuntimeObject* ___STRENGTH_5;
	RuntimeObject* ___WAVE_STR_7;
	RuntimeObject* ___FLOAT_STR_9;
	RuntimeObject* ___DUCK_STR_11;
	RuntimeObject* ___FRIC_AIR_13;
	RuntimeObject* ___GRAVITY_15;
	RuntimeObject* ___MOVE_ME_16;
};
struct SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MODE_GEHEN_0;
	float ___MODE_GEHEN_0_val;
	RuntimeObject* ___MOVING_1;
	RuntimeObject* ___FRIC_3;
	RuntimeObject* ___STRENGTH_5;
	RuntimeObject* ___WAVE_STR_7;
	RuntimeObject* ___FLOAT_STR_9;
	RuntimeObject* ___DUCK_STR_11;
	RuntimeObject* ___FRIC_AIR_13;
	RuntimeObject* ___GRAVITY_15;
	RuntimeObject* ___MOVE_ME_16;
};
struct SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___WEAPONSEL_1;
	float ___WEAPONSEL_1_val;
	RuntimeObject* ___AMMO_3;
	RuntimeObject* ___WEAPONSEL_5;
	float ___WEAPONSEL_5_val;
	RuntimeObject* ___AMMO_MP5_6;
	float ___AMMO_MP5_6_val;
	RuntimeObject* ___AMMO_7;
	RuntimeObject* ___WEAPONSEL_9;
	float ___WEAPONSEL_9_val;
	RuntimeObject* ___AMMO_GRANADE_10;
	float ___AMMO_GRANADE_10_val;
	RuntimeObject* ___AMMO_11;
	RuntimeObject* ___WEAPONSEL_13;
	float ___WEAPONSEL_13_val;
	RuntimeObject* ___AMMO_STINGER_14;
	float ___AMMO_STINGER_14_val;
	RuntimeObject* ___AMMO_15;
	RuntimeObject* ___WEAPONSEL_17;
	float ___WEAPONSEL_17_val;
	RuntimeObject* ___AMMO_QUANTUM_18;
	float ___AMMO_QUANTUM_18_val;
	RuntimeObject* ___AMMO_19;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGRANADE_set_MY_m929E9051FA3DCAD964A69FBE5497AD7CC0E968CF_inline (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGRANADE_set_THERE_mD7AF75809E65E305A73F62622C056EB6F98440B7_inline (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGRANADE_set__world_m4C337824ACD35E7575CAB9A547B21F0B9F66D4CE_inline (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEMISSILE_set_MY_m5313D538273E9A5A113A740DEE31DE1803A10935_inline (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEMISSILE_set_THERE_m5D169522C123656C593820B4D94ABE5766464EF7_inline (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEMISSILE_set__world_mAA7D85AED69EA06C51ABB1BC5AFA206921EAA6C8_inline (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEPARTICLE_set_MY_m618FA001642E9BE4EBDB7158106FFCD0CA384CF6_inline (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEPARTICLE_set_THERE_m040C59DF24EA17A37B725A22204C6D1E4BAA2478_inline (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEPARTICLE_set__world_m7EFB8D37D20E4ADAF0C97E090532F2C6015AD38D_inline (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CASTBLOOD_set_MY_m5BA0E35483FE38D43F0D8E08B07782DFF477D865_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CASTBLOOD_set_THERE_mD8B181B0189B61286A7878AE635E5B73EBD69AB1_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CASTBLOOD_set__world_m43CE6909ACD0F542E20FD56E3CB274FBBD8F6158_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CASTBLOOD_get_MY_m234EA8A9C4CA683929EFAB5B8E787C9FDBA15F7A_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CASTBLOOD_get_THERE_m4837477AE7A87136F9F8E9BCA9401ACA25BDC5CC_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMEDKIT_set_MY_mD3EE5D6269CBABF1C9888052D102955727634861_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMEDKIT_set_THERE_m7E905C21CC19D3D0259D8CA5F468989445D1ACAC_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMEDKIT_set__world_m16A16AADDBFF4AD4EBB63BEDCCF801515F5718E6_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMEDKIT_get_MY_mDA43FEA1AC6ADA893A4F7D4E49D3B8E345C16B7E_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9 (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMEDKIT_get_THERE_m592BF2611F36FA1CB66806F5C131F147D41C2501_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPARMOUR_set_MY_m8661A6A5B4A7BA85F4248D535BC8418C8FEA2E89_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPARMOUR_set_THERE_m8E9EFC9468464BCCE94FFCEBA5E99172BD545C74_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPARMOUR_set__world_m58A7292EE0B1528AF9FF8B2FD56834971A73CC4C_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPARMOUR_get_MY_m5FE9A99C5F520317824E5BEC530D509E0061C2A8_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPARMOUR_get_THERE_mAFD0FFBD223F02A1F249AB3ADE3A924D2467B4E5_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMP5_set_MY_m10E23E84D897D258B8D878B278A4958CFA70C321_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMP5_set_THERE_m9C701EAFCE129E0805A22BD2080C55C072CEF996_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMP5_set__world_m5619459E48646538ACB4A3C789478FD2B3FA2F08_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5__ctor_m1388168523BC50D9479F152A3096612F887E5F46 (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMP5_get_MY_mAE536D815D459368FBFF6FE67718C63024B2DFED_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMP5_get_THERE_mE73DBA28D4ABA65F63DD9D1C243BCDD8784DF47C_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4 (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPSTINGER_set_MY_mBDF7F37636F6E9387989F40E361A66DC5E169198_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPSTINGER_set_THERE_m485C835C49D349D9D4F0B03122684A3386A27717_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPSTINGER_set__world_m026FB1291AE2D39143CB54E5E4A8F0D7CAA04A72_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTSTINGER__ctor_m49968978A40DC25E5587097774FAFAD9F8A6ED15 (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPSTINGER_get_MY_m225B6738E3D59288FDB9028687F2AC77D6C73496_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPSTINGER_get_THERE_m9080D4759A3E595BEA895995677D6CE4F4AC6C9F_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPQUANTUM_set_MY_m070455F8DADF322EABDFF7FA603E9FA6EDEFCD05_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPQUANTUM_set_THERE_m05F1FAA12F4D98BAC4EC860C08A162B67516FBE6_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPQUANTUM_set__world_m30E560F18162FC8048CD4C0FB94F332653D6CD01_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTQUANTUM__ctor_m3DA061CD2F6830B261DAE3FE177BF104D341C699 (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPQUANTUM_get_MY_mDDE7E330FE1680B7D423AF3528F6DC397B41C9C9_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPQUANTUM_get_THERE_m0CA16C24C3B977DAA45E0185C5C77B143BE5E290_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKAMMO_set_MY_m3973FEDAB226960451C01FAAF77D4464179216A8_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKAMMO_set_THERE_m7B52FE3B41A65481C13EC097E60D599EFDFE0345_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKAMMO_set__world_m597B59E5A1865FACDF76E94431F8E541D5A07D11_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKAMMO_get_MY_m23C509E26C998329C9CE9A29C2BF46D691D54636_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKAMMO_get_THERE_m807FB78308C644EB9BFCE3C83D789C5E98F8866F_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKGRANADE_set_MY_m9CD8F3F2F0C8BB51FF8B736CF0A58F2A405CAB8B_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKGRANADE_set_THERE_m5701BFC66A7B27B37B0F023009DC6A1936CC7C36_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKGRANADE_set__world_m9F06B6EAB500082A5313E7AF2C0593285D508B4B_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKGRANADE_get_MY_m994F82B86B90D8FE103CB7BDA25C0F6F08A74F35_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKGRANADE_get_THERE_mF0908F04F717B89F365CBE25937EC061283AA751_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKSTINGERAMMO_set_MY_m73DB0B9837CBFB55C81121623D6C1F31815BA911_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKSTINGERAMMO_set_THERE_m410D2291A9A0ABDA0D1E02801585D0BE5324E336_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKSTINGERAMMO_set__world_m7D628F560137FC1BE5774B10275F569F8A277F59_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKSTINGERAMMO_get_MY_m02296A7C662E9C170A642571F4FFC2DCD0BC825C_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKSTINGERAMMO_get_THERE_mB69401871FBAEC7A4AAA2A44632C9136F8339675_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO_set_MY_m7514FD2F1DBAEF62156D78AD55B093353CE3F249_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO_set_THERE_mEC157C32526B15E91B1A497FDDCBAAFD95C10AAB_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO_set__world_m7F8AFBFE47C78AECADBEDAF824F2D503323707B7_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKQUANTUMAMMO_get_MY_mE850CF9D07546D39E21C3A819F98423CC7B7CD4B_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKQUANTUMAMMO_get_THERE_m1D119C7273059AF6DB096B49B86C32F11FEC65DD_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHREGION_set_MY_mAAE5919329E43439E4164AD053F0FE1729EEE566_inline (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHREGION_set_THERE_m009A6DDAE23982F3474E59A4A1BCA4BCE06D557F_inline (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHREGION_set__world_m49CAE1BE53AD233B4A195166323A3F88AC49CCFA_inline (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHREGION_get_MY_m73ED410FC08F78CDD46DE62B24846FCC118149BF_inline (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15 (RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODELIGHT_set_MY_m852FAA683412B7D553E920A8414B4EBFFD403E01_inline (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODELIGHT_set_THERE_mCCE7D08AF5758560DEE96A8BFC71FA68841E55E7_inline (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODELIGHT_set__world_m97F52BF864A90779FEB9154EEFC71BCAA45C4C8B_inline (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BOUNCE_set_MY_mEBB68FAC18D22350383C3AB7F05FF9986A09E651_inline (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BOUNCE_set_THERE_mBF2645AF9CD5F5662FFF716C263FEECBB62B21CD_inline (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BOUNCE_set__world_m6709DA2AC28D0356A872BEBE4B98D302836128C5_inline (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BOUNCE_get__world_mE11E649CEB9B5ED59CD7D160FD832C5BB733438D_inline (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FREEFALL_set_MY_m91019143B833AB45D80CFA4AE8BFA66483B1CD0B_inline (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FREEFALL_set_THERE_mD5E32B9FBE72EB7BD9DEF1DCA289DDDB2DAED685_inline (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FREEFALL_set__world_m6C3CDDDE6A19ABEC8D095C03735019B57F66F9C7_inline (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21_inline (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONTIMER_set_MY_m9B0130BBA0EB8D221FB9DB31F491AD0C88D8B64B_inline (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONTIMER_set_THERE_m65E49EEB268D940CDB82EE9DD8467F0747032108_inline (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONTIMER_set__world_m728B2E7FD65DE6A3F5F5FF0D2FD84A0AF0759183_inline (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONTIMER_get_MY_m7B94AB843F9BB6EB1FBEFACE9C8034C2DC4888B8_inline (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONTIMER_get__world_m791CAB2FE5CDB230AD69C94CB561273F1123CC3B_inline (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void INIT_MOVE_set_MY_m45C49690AE5B2741679D0E92DB80F7AEC4E480D6_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void INIT_MOVE_set_THERE_m20B5497093084A6CC17B6DB8EFA2BE104C860CE0_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void INIT_MOVE_set__world_m6D0503719AA9A7A3711BB31D12050DF2D228C6C4_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* INIT_MOVE_get__world_mCA619BB1318F3A4A6391B137CABF39F0CE9DCCFF_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_MOVING__ctor_m514B80647FB350BFB8AEDE9DF857BB701A7DF0C4 (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* INIT_MOVE_get_MY_m503B017D4817455D214D985150216BFBBC051D5C_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* INIT_MOVE_get_THERE_m30B7EED392AE7A6B2968D1FEEE1F094C0595AE2B_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOVE_ME_set_MY_m3A9EE516584DE20C2D8A3AB64C26ECE4121272B7_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOVE_ME_set_THERE_mCBD1EAF696B2EF19E240FA12EB696E58A3E9B262_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOVE_ME_set__world_mD0D95E6CCE339020B64F749B00AAC78BC8C76D16_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_WALKING__ctor_m6077994146222E0B4630F32AA4DD0F910A7B9B86 (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MOVE_ME_get_MY_m0053EF71C5738AF3A512F406578B3FC59349A529_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MOVE_ME_get_THERE_mCE93708E1D1E4BC77FD49C157F1002DDA5621FFD_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_SWIMMING__ctor_m4A4036B39AE23004B3529E4A872D3CA7C526E7E7 (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYER__ctor_mB8D5F81CBF89B5D337064FAB0E5DB88B0109CB9D (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGRANADE_get_MY_m0FF255979C431AF1A6EF8696A104C5BE397D7EC5 (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGRANADE_set_MY_m929E9051FA3DCAD964A69FBE5497AD7CC0E968CF (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGRANADE_get_THERE_m1742D0504EA0AC7E29725C4C963198FECDD6EA28 (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGRANADE_set_THERE_mD7AF75809E65E305A73F62622C056EB6F98440B7 (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80 (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGRANADE_set__world_m4C337824ACD35E7575CAB9A547B21F0B9F66D4CE (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGRANADE_get_Current_m2BBFC9E5F06AA7201DEA9D214E2D38B4B73CE332 (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGRANADE_set_Current_m40F703B0D8D29C742571498CF1C5D1728C83CE8B (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGRANADE_Reset_m3AA273EB1895C8A414DB2EDCD283D214267DA91A (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGRANADE__ctor_m0EFDF65AB32658238F02EB0ED4E4DF4268484CFC (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGRANADE__ctor_m725C1BBED48495F3DC0EC20EB257CB7F418D144C (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CHOOSEGRANADE_set_MY_m929E9051FA3DCAD964A69FBE5497AD7CC0E968CF_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CHOOSEGRANADE_set_THERE_mD7AF75809E65E305A73F62622C056EB6F98440B7_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CHOOSEGRANADE_set__world_m4C337824ACD35E7575CAB9A547B21F0B9F66D4CE_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHOOSEGRANADE_MoveNext_m8D89CD42F52BE771364F4D9CB279DD361CE6E8CC (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)1197183582), (bool)1, (bool)1);
		__this->___GRAN1ACT_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN1ACT_2), (void*)L_3);
		RuntimeObject* L_4 = __this->___GRAN1ACT_2;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)204), (bool)1);
		__this->___temp_3 = L_5;
		float L_6 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_6, (1.0f), NULL);
		if (!L_7)
		{
			goto IL_0082;
		}
	}
	{
		RuntimeObject* L_8;
		L_8 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)1197183582), (bool)1, (bool)1);
		__this->___GRAN1ACT_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN1ACT_4), (void*)L_10);
		RuntimeObject* L_11;
		L_11 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		RuntimeObject* L_12 = __this->___GRAN1ACT_4;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, ((int32_t)556898879), L_12);
		return (bool)0;
	}

IL_0082:
	{
		RuntimeObject* L_13;
		L_13 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)851742895), (bool)1, (bool)1);
		__this->___GRAN11ACT_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN11ACT_8), (void*)L_15);
		RuntimeObject* L_16 = __this->___GRAN11ACT_8;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)204), (bool)1);
		__this->___temp_9 = L_17;
		float L_18 = __this->___temp_9;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_18, (1.0f), NULL);
		if (!L_19)
		{
			goto IL_00fd;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)851742895), (bool)1, (bool)1);
		__this->___GRAN11ACT_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN11ACT_10), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		RuntimeObject* L_24 = __this->___GRAN11ACT_10;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, ((int32_t)556898879), L_24);
		return (bool)0;
	}

IL_00fd:
	{
		RuntimeObject* L_25;
		L_25 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)851778832), (bool)1, (bool)1);
		__this->___GRAN12ACT_14 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN12ACT_14), (void*)L_27);
		RuntimeObject* L_28 = __this->___GRAN12ACT_14;
		NullCheck(L_28);
		float L_29;
		L_29 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)204), (bool)1);
		__this->___temp_15 = L_29;
		float L_30 = __this->___temp_15;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_30, (1.0f), NULL);
		if (!L_31)
		{
			goto IL_0178;
		}
	}
	{
		RuntimeObject* L_32;
		L_32 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)851778832), (bool)1, (bool)1);
		__this->___GRAN12ACT_16 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN12ACT_16), (void*)L_34);
		RuntimeObject* L_35;
		L_35 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		RuntimeObject* L_36 = __this->___GRAN12ACT_16;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, ((int32_t)556898879), L_36);
		return (bool)0;
	}

IL_0178:
	{
		RuntimeObject* L_37;
		L_37 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)851814769), (bool)1, (bool)1);
		__this->___GRAN13ACT_20 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN13ACT_20), (void*)L_39);
		RuntimeObject* L_40 = __this->___GRAN13ACT_20;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)204), (bool)1);
		__this->___temp_21 = L_41;
		float L_42 = __this->___temp_21;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_42, (1.0f), NULL);
		if (!L_43)
		{
			goto IL_01f3;
		}
	}
	{
		RuntimeObject* L_44;
		L_44 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)851814769), (bool)1, (bool)1);
		__this->___GRAN13ACT_22 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN13ACT_22), (void*)L_46);
		RuntimeObject* L_47;
		L_47 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		RuntimeObject* L_48 = __this->___GRAN13ACT_22;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, ((int32_t)556898879), L_48);
		return (bool)0;
	}

IL_01f3:
	{
		RuntimeObject* L_49;
		L_49 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_49);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)851850706), (bool)1, (bool)1);
		__this->___GRAN14ACT_26 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN14ACT_26), (void*)L_51);
		RuntimeObject* L_52 = __this->___GRAN14ACT_26;
		NullCheck(L_52);
		float L_53;
		L_53 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)204), (bool)1);
		__this->___temp_27 = L_53;
		float L_54 = __this->___temp_27;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_54, (1.0f), NULL);
		if (!L_55)
		{
			goto IL_026e;
		}
	}
	{
		RuntimeObject* L_56;
		L_56 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)851850706), (bool)1, (bool)1);
		__this->___GRAN14ACT_28 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN14ACT_28), (void*)L_58);
		RuntimeObject* L_59;
		L_59 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		RuntimeObject* L_60 = __this->___GRAN14ACT_28;
		NullCheck(L_59);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, ((int32_t)556898879), L_60);
		return (bool)0;
	}

IL_026e:
	{
		RuntimeObject* L_61;
		L_61 = CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_61, ((int32_t)556898879), (RuntimeObject*)NULL);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEMISSILE_get_MY_mF22F2E72657C54627D79EE38CC353DB6CC2EC986 (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEMISSILE_set_MY_m5313D538273E9A5A113A740DEE31DE1803A10935 (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEMISSILE_get_THERE_m77E565B23176709C42439AC548271604C13DD306 (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEMISSILE_set_THERE_m5D169522C123656C593820B4D94ABE5766464EF7 (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788 (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEMISSILE_set__world_mAA7D85AED69EA06C51ABB1BC5AFA206921EAA6C8 (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEMISSILE_get_Current_mA24BDA642536222D10AA753A18497283E754E3C0 (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEMISSILE_set_Current_m8A5A29BCA9EE88AF10EC8EC0E0FEB64F9557E090 (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEMISSILE_Reset_m723C2AAC4997C16BBC9071F507DFEFC5BFCE20CB (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEMISSILE__ctor_mBD8DA1CB945C24768E365325E3B95DCD5C03A11D (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEMISSILE__ctor_m73B2ACB64BDF71F5904670BFC64D5FF7B84EB39C (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CHOOSEMISSILE_set_MY_m5313D538273E9A5A113A740DEE31DE1803A10935_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CHOOSEMISSILE_set_THERE_m5D169522C123656C593820B4D94ABE5766464EF7_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CHOOSEMISSILE_set__world_mAA7D85AED69EA06C51ABB1BC5AFA206921EAA6C8_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHOOSEMISSILE_MoveNext_m5F164AB96B1CA430E11A999CB11E06B0C30F290F (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)1181860530), (bool)1, (bool)1);
		__this->___MISS1ACT_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS1ACT_2), (void*)L_3);
		RuntimeObject* L_4 = __this->___MISS1ACT_2;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)204), (bool)1);
		__this->___temp_3 = L_5;
		float L_6 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_6, (1.0f), NULL);
		if (!L_7)
		{
			goto IL_0082;
		}
	}
	{
		RuntimeObject* L_8;
		L_8 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)1181860530), (bool)1, (bool)1);
		__this->___MISS1ACT_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS1ACT_4), (void*)L_10);
		RuntimeObject* L_11;
		L_11 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		RuntimeObject* L_12 = __this->___MISS1ACT_4;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, ((int32_t)-614911197), L_12);
		return (bool)0;
	}

IL_0082:
	{
		RuntimeObject* L_13;
		L_13 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)346082179), (bool)1, (bool)1);
		__this->___MISS11ACT_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS11ACT_8), (void*)L_15);
		RuntimeObject* L_16 = __this->___MISS11ACT_8;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)204), (bool)1);
		__this->___temp_9 = L_17;
		float L_18 = __this->___temp_9;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_18, (1.0f), NULL);
		if (!L_19)
		{
			goto IL_00fd;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)346082179), (bool)1, (bool)1);
		__this->___MISS11ACT_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS11ACT_10), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		RuntimeObject* L_24 = __this->___MISS11ACT_10;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, ((int32_t)-614911197), L_24);
		return (bool)0;
	}

IL_00fd:
	{
		RuntimeObject* L_25;
		L_25 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)346118116), (bool)1, (bool)1);
		__this->___MISS12ACT_14 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS12ACT_14), (void*)L_27);
		RuntimeObject* L_28 = __this->___MISS12ACT_14;
		NullCheck(L_28);
		float L_29;
		L_29 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)204), (bool)1);
		__this->___temp_15 = L_29;
		float L_30 = __this->___temp_15;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_30, (1.0f), NULL);
		if (!L_31)
		{
			goto IL_0178;
		}
	}
	{
		RuntimeObject* L_32;
		L_32 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)346118116), (bool)1, (bool)1);
		__this->___MISS12ACT_16 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS12ACT_16), (void*)L_34);
		RuntimeObject* L_35;
		L_35 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		RuntimeObject* L_36 = __this->___MISS12ACT_16;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, ((int32_t)-614911197), L_36);
		return (bool)0;
	}

IL_0178:
	{
		RuntimeObject* L_37;
		L_37 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)346154053), (bool)1, (bool)1);
		__this->___MISS13ACT_20 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS13ACT_20), (void*)L_39);
		RuntimeObject* L_40 = __this->___MISS13ACT_20;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)204), (bool)1);
		__this->___temp_21 = L_41;
		float L_42 = __this->___temp_21;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_42, (1.0f), NULL);
		if (!L_43)
		{
			goto IL_01f3;
		}
	}
	{
		RuntimeObject* L_44;
		L_44 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)346154053), (bool)1, (bool)1);
		__this->___MISS13ACT_22 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS13ACT_22), (void*)L_46);
		RuntimeObject* L_47;
		L_47 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		RuntimeObject* L_48 = __this->___MISS13ACT_22;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, ((int32_t)-614911197), L_48);
		return (bool)0;
	}

IL_01f3:
	{
		RuntimeObject* L_49;
		L_49 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_49);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)346189990), (bool)1, (bool)1);
		__this->___MISS14ACT_26 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS14ACT_26), (void*)L_51);
		RuntimeObject* L_52 = __this->___MISS14ACT_26;
		NullCheck(L_52);
		float L_53;
		L_53 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)204), (bool)1);
		__this->___temp_27 = L_53;
		float L_54 = __this->___temp_27;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_54, (1.0f), NULL);
		if (!L_55)
		{
			goto IL_026e;
		}
	}
	{
		RuntimeObject* L_56;
		L_56 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)346189990), (bool)1, (bool)1);
		__this->___MISS14ACT_28 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS14ACT_28), (void*)L_58);
		RuntimeObject* L_59;
		L_59 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		RuntimeObject* L_60 = __this->___MISS14ACT_28;
		NullCheck(L_59);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, ((int32_t)-614911197), L_60);
		return (bool)0;
	}

IL_026e:
	{
		RuntimeObject* L_61;
		L_61 = CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_61, ((int32_t)-614911197), (RuntimeObject*)NULL);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEPARTICLE_get_MY_mE7940AD97C25B3C123761686D7D97BBCDC0EFD5B (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEPARTICLE_set_MY_m618FA001642E9BE4EBDB7158106FFCD0CA384CF6 (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEPARTICLE_get_THERE_m587DBA7BFC270499EED22A968B400B22350333C0 (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEPARTICLE_set_THERE_m040C59DF24EA17A37B725A22204C6D1E4BAA2478 (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3 (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEPARTICLE_set__world_m7EFB8D37D20E4ADAF0C97E090532F2C6015AD38D (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEPARTICLE_get_Current_m1AA0D4279B846433A1B5688453BCA32E19394A85 (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEPARTICLE_set_Current_m0E361D18D9286513F4A11F9C7E6CBEF900147CF8 (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEPARTICLE_Reset_mA377C21DF9014EA2C29530794ED4A85C8773E288 (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEPARTICLE__ctor_m7ED1B9A37FC131618164D6259BA23BBC833BA65E (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEPARTICLE__ctor_mB2DDA5927EADFCFC286D0CEC6989E97EF319FDF0 (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CHOOSEPARTICLE_set_MY_m618FA001642E9BE4EBDB7158106FFCD0CA384CF6_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CHOOSEPARTICLE_set_THERE_m040C59DF24EA17A37B725A22204C6D1E4BAA2478_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CHOOSEPARTICLE_set__world_m7EFB8D37D20E4ADAF0C97E090532F2C6015AD38D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHOOSEPARTICLE_MoveNext_m561F0CDAA18A11EFB3D696FCAECD7B49CA754A08 (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)162694329), (bool)1, (bool)1);
		__this->___PARTICLEACT_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLEACT_2), (void*)L_3);
		RuntimeObject* L_4 = __this->___PARTICLEACT_2;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)204), (bool)1);
		__this->___temp_3 = L_5;
		float L_6 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_6, (1.0f), NULL);
		if (!L_7)
		{
			goto IL_0082;
		}
	}
	{
		RuntimeObject* L_8;
		L_8 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)162694329), (bool)1, (bool)1);
		__this->___PARTICLEACT_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLEACT_4), (void*)L_10);
		RuntimeObject* L_11;
		L_11 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		RuntimeObject* L_12 = __this->___PARTICLEACT_4;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, ((int32_t)-1590723103), L_12);
		return (bool)0;
	}

IL_0082:
	{
		RuntimeObject* L_13;
		L_13 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)1073335914), (bool)1, (bool)1);
		__this->___PARTICLE1ACT_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE1ACT_8), (void*)L_15);
		RuntimeObject* L_16 = __this->___PARTICLE1ACT_8;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)204), (bool)1);
		__this->___temp_9 = L_17;
		float L_18 = __this->___temp_9;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_18, (1.0f), NULL);
		if (!L_19)
		{
			goto IL_00fd;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)1073335914), (bool)1, (bool)1);
		__this->___PARTICLE1ACT_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE1ACT_10), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		RuntimeObject* L_24 = __this->___PARTICLE1ACT_10;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, ((int32_t)-1590723103), L_24);
		return (bool)0;
	}

IL_00fd:
	{
		RuntimeObject* L_25;
		L_25 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)1073371851), (bool)1, (bool)1);
		__this->___PARTICLE2ACT_14 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE2ACT_14), (void*)L_27);
		RuntimeObject* L_28 = __this->___PARTICLE2ACT_14;
		NullCheck(L_28);
		float L_29;
		L_29 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)204), (bool)1);
		__this->___temp_15 = L_29;
		float L_30 = __this->___temp_15;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_30, (1.0f), NULL);
		if (!L_31)
		{
			goto IL_0178;
		}
	}
	{
		RuntimeObject* L_32;
		L_32 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)1073371851), (bool)1, (bool)1);
		__this->___PARTICLE2ACT_16 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE2ACT_16), (void*)L_34);
		RuntimeObject* L_35;
		L_35 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		RuntimeObject* L_36 = __this->___PARTICLE2ACT_16;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, ((int32_t)-1590723103), L_36);
		return (bool)0;
	}

IL_0178:
	{
		RuntimeObject* L_37;
		L_37 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)1073407788), (bool)1, (bool)1);
		__this->___PARTICLE3ACT_20 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE3ACT_20), (void*)L_39);
		RuntimeObject* L_40 = __this->___PARTICLE3ACT_20;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)204), (bool)1);
		__this->___temp_21 = L_41;
		float L_42 = __this->___temp_21;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_42, (1.0f), NULL);
		if (!L_43)
		{
			goto IL_01f3;
		}
	}
	{
		RuntimeObject* L_44;
		L_44 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)1073407788), (bool)1, (bool)1);
		__this->___PARTICLE3ACT_22 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE3ACT_22), (void*)L_46);
		RuntimeObject* L_47;
		L_47 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		RuntimeObject* L_48 = __this->___PARTICLE3ACT_22;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, ((int32_t)-1590723103), L_48);
		return (bool)0;
	}

IL_01f3:
	{
		RuntimeObject* L_49;
		L_49 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_49);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)1073443725), (bool)1, (bool)1);
		__this->___PARTICLE4ACT_26 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE4ACT_26), (void*)L_51);
		RuntimeObject* L_52 = __this->___PARTICLE4ACT_26;
		NullCheck(L_52);
		float L_53;
		L_53 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)204), (bool)1);
		__this->___temp_27 = L_53;
		float L_54 = __this->___temp_27;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_54, (1.0f), NULL);
		if (!L_55)
		{
			goto IL_026e;
		}
	}
	{
		RuntimeObject* L_56;
		L_56 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)1073443725), (bool)1, (bool)1);
		__this->___PARTICLE4ACT_28 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE4ACT_28), (void*)L_58);
		RuntimeObject* L_59;
		L_59 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		RuntimeObject* L_60 = __this->___PARTICLE4ACT_28;
		NullCheck(L_59);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, ((int32_t)-1590723103), L_60);
		return (bool)0;
	}

IL_026e:
	{
		RuntimeObject* L_61;
		L_61 = CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_61, ((int32_t)-1590723103), (RuntimeObject*)NULL);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CASTBLOOD_get_MY_m234EA8A9C4CA683929EFAB5B8E787C9FDBA15F7A (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CASTBLOOD_set_MY_m5BA0E35483FE38D43F0D8E08B07782DFF477D865 (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CASTBLOOD_get_THERE_m4837477AE7A87136F9F8E9BCA9401ACA25BDC5CC (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CASTBLOOD_set_THERE_mD8B181B0189B61286A7878AE635E5B73EBD69AB1 (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CASTBLOOD_set__world_m43CE6909ACD0F542E20FD56E3CB274FBBD8F6158 (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CASTBLOOD_get_Current_mE8641B4951EC70F928CF6B6CDECCC59FFD3D2A51 (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CASTBLOOD_set_Current_mE5F406A2421F7BA36E3E8F2B799DC3B1CF86B66A (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CASTBLOOD_Reset_m9D8047308A05D4C8732F4F7715843A6D83D9470A (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CASTBLOOD__ctor_mF6470343C4D54F10A5A822D1AA690665436AA434 (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CASTBLOOD__ctor_mD66AF7726F079674D4C576F5B75AC30CF8F40F1E (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CASTBLOOD_set_MY_m5BA0E35483FE38D43F0D8E08B07782DFF477D865_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CASTBLOOD_set_THERE_mD8B181B0189B61286A7878AE635E5B73EBD69AB1_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CASTBLOOD_set__world_m43CE6909ACD0F542E20FD56E3CB274FBBD8F6158_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CASTBLOOD_MoveNext_m180C7247C005329A52D5A8030B00582625382BEF (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-1675121882), (bool)1, (bool)1);
		__this->___BLOOD1ACT_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD1ACT_2), (void*)L_3);
		RuntimeObject* L_4 = __this->___BLOOD1ACT_2;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)204), (bool)1);
		__this->___temp_3 = L_5;
		float L_6 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_6, (1.0f), NULL);
		if (!L_7)
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject* L_8;
		L_8 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)-1675121882), (bool)1, (bool)1);
		__this->___BLOOD1ACT_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD1ACT_4), (void*)L_10);
		RuntimeObject* L_11;
		L_11 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		RuntimeObject* L_12 = __this->___BLOOD1ACT_4;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, ((int32_t)215243933), L_12);
		goto IL_020f;
	}

IL_0085:
	{
		RuntimeObject* L_13;
		L_13 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1675085945), (bool)1, (bool)1);
		__this->___BLOOD2ACT_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD2ACT_8), (void*)L_15);
		RuntimeObject* L_16 = __this->___BLOOD2ACT_8;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)204), (bool)1);
		__this->___temp_9 = L_17;
		float L_18 = __this->___temp_9;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_18, (1.0f), NULL);
		if (!L_19)
		{
			goto IL_0103;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)-1675085945), (bool)1, (bool)1);
		__this->___BLOOD2ACT_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD2ACT_10), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		RuntimeObject* L_24 = __this->___BLOOD2ACT_10;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, ((int32_t)215243933), L_24);
		goto IL_020f;
	}

IL_0103:
	{
		RuntimeObject* L_25;
		L_25 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)-1675050008), (bool)1, (bool)1);
		__this->___BLOOD3ACT_14 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD3ACT_14), (void*)L_27);
		RuntimeObject* L_28 = __this->___BLOOD3ACT_14;
		NullCheck(L_28);
		float L_29;
		L_29 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)204), (bool)1);
		__this->___temp_15 = L_29;
		float L_30 = __this->___temp_15;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_30, (1.0f), NULL);
		if (!L_31)
		{
			goto IL_0181;
		}
	}
	{
		RuntimeObject* L_32;
		L_32 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)-1675050008), (bool)1, (bool)1);
		__this->___BLOOD3ACT_16 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD3ACT_16), (void*)L_34);
		RuntimeObject* L_35;
		L_35 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		RuntimeObject* L_36 = __this->___BLOOD3ACT_16;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, ((int32_t)215243933), L_36);
		goto IL_020f;
	}

IL_0181:
	{
		RuntimeObject* L_37;
		L_37 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)-1675014071), (bool)1, (bool)1);
		__this->___BLOOD4ACT_20 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD4ACT_20), (void*)L_39);
		RuntimeObject* L_40 = __this->___BLOOD4ACT_20;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)204), (bool)1);
		__this->___temp_21 = L_41;
		float L_42 = __this->___temp_21;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_42, (1.0f), NULL);
		if (!L_43)
		{
			goto IL_01fc;
		}
	}
	{
		RuntimeObject* L_44;
		L_44 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)-1675014071), (bool)1, (bool)1);
		__this->___BLOOD4ACT_22 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD4ACT_22), (void*)L_46);
		RuntimeObject* L_47;
		L_47 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		RuntimeObject* L_48 = __this->___BLOOD4ACT_22;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, ((int32_t)215243933), L_48);
		goto IL_020f;
	}

IL_01fc:
	{
		RuntimeObject* L_49;
		L_49 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_49, ((int32_t)215243933), (RuntimeObject*)NULL);
		return (bool)0;
	}

IL_020f:
	{
		RuntimeObject* L_50;
		L_50 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_50, 5, ((int32_t)444));
		__this->___HIT_DIST_26 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_26), (void*)L_51);
		RuntimeObject* L_52 = __this->___HIT_DIST_26;
		NullCheck(L_52);
		float L_53;
		L_53 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_26_val = L_53;
		RuntimeObject* L_54;
		L_54 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_54, ((int32_t)215243933), (bool)0);
		__this->___BLOOD_28 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD_28), (void*)L_55);
		RuntimeObject* L_56 = __this->___BLOOD_28;
		float L_57 = __this->___HIT_DIST_26_val;
		NullCheck(L_56);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_56, ((int32_t)172), L_57);
		RuntimeObject* L_58;
		L_58 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_58, ((int32_t)215243933), (bool)0);
		__this->___BLOOD_30 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD_30), (void*)L_59);
		RuntimeObject* L_60;
		L_60 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_60, ((int32_t)215243933), (bool)0);
		__this->___BLOOD_32 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD_32), (void*)L_61);
		RuntimeObject* L_62 = __this->___BLOOD_32;
		NullCheck(L_62);
		float L_63;
		L_63 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)165), (bool)1);
		__this->___temp_33 = L_63;
		RuntimeObject* L_64;
		L_64 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_64, 5, ((int32_t)461));
		__this->___PLAYER_Z_34 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_34), (void*)L_65);
		RuntimeObject* L_66 = __this->___PLAYER_Z_34;
		NullCheck(L_66);
		float L_67;
		L_67 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_34_val = L_67;
		RuntimeObject* L_68;
		L_68 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_68, 5, ((int32_t)444));
		__this->___HIT_DIST_38 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_38), (void*)L_69);
		RuntimeObject* L_70 = __this->___HIT_DIST_38;
		NullCheck(L_70);
		float L_71;
		L_71 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_70, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_38_val = L_71;
		RuntimeObject* L_72;
		L_72 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_72, 5, ((int32_t)435));
		__this->___PLAYER_TILT_40 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_40), (void*)L_73);
		RuntimeObject* L_74 = __this->___PLAYER_TILT_40;
		NullCheck(L_74);
		float L_75;
		L_75 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_74, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_40_val = L_75;
		RuntimeObject* L_76 = __this->___BLOOD_30;
		float L_77 = __this->___PLAYER_Z_34_val;
		float L_78 = __this->___HIT_DIST_38_val;
		float L_79 = __this->___PLAYER_TILT_40_val;
		NullCheck(L_76);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)165), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_77, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.727999985f), L_78)), L_79)))), (0.5f))));
		RuntimeObject* L_80;
		L_80 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_80, ((int32_t)215243933), (bool)0);
		__this->___BLOOD_43 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD_43), (void*)L_81);
		RuntimeObject* L_82;
		L_82 = CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline(__this, NULL);
		RuntimeObject* L_83 = __this->___BLOOD_43;
		RuntimeObject* L_84;
		L_84 = CASTBLOOD_get_MY_m234EA8A9C4CA683929EFAB5B8E787C9FDBA15F7A_inline(__this, NULL);
		RuntimeObject* L_85;
		L_85 = CASTBLOOD_get_THERE_m4837477AE7A87136F9F8E9BCA9401ACA25BDC5CC_inline(__this, NULL);
		NullCheck(L_82);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(37, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_82, L_83, L_84, L_85);
		__this->___dropped_44 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dropped_44), (void*)L_86);
		RuntimeObject* L_87 = __this->___dropped_44;
		__this->___BLOOD_47 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLOOD_47), (void*)L_87);
		RuntimeObject* L_88 = __this->___BLOOD_47;
		NullCheck(L_88);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)204), (0.0f));
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMEDKIT_get_MY_mDA43FEA1AC6ADA893A4F7D4E49D3B8E345C16B7E (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMEDKIT_set_MY_mD3EE5D6269CBABF1C9888052D102955727634861 (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMEDKIT_get_THERE_m592BF2611F36FA1CB66806F5C131F147D41C2501 (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMEDKIT_set_THERE_m7E905C21CC19D3D0259D8CA5F468989445D1ACAC (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMEDKIT_set__world_m16A16AADDBFF4AD4EBB63BEDCCF801515F5718E6 (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMEDKIT_get_Current_mCFCD77C4AF4964D0F92C6DE5EC9752B64864FACD (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMEDKIT_set_Current_m3747DCA59F59620EB362A74661347E3C13BC43BF (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMEDKIT_Reset_m7C4988B545D01B8B372FAA460BB1E83E0C0A5859 (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMEDKIT__ctor_m3CD16FF59A4FF3CAA7DE4991E8C588EACC855E52 (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMEDKIT__ctor_mF86A67EAEE16B4191B5DC818C54B2ABD5A142D9A (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKUPMEDKIT_set_MY_mD3EE5D6269CBABF1C9888052D102955727634861_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKUPMEDKIT_set_THERE_m7E905C21CC19D3D0259D8CA5F468989445D1ACAC_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKUPMEDKIT_set__world_m16A16AADDBFF4AD4EBB63BEDCCF801515F5718E6_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKUPMEDKIT_MoveNext_mD140EFC2DAD3A0E1C0E92268D5D2CA3B0AA702A2 (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___PLAYER_HEALTH_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_1_val = L_4;
		float L_5 = __this->___PLAYER_HEALTH_1_val;
		bool L_6;
		L_6 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_5, (98.0f), NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		RuntimeObject* L_7;
		L_7 = PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___PLAYER_HEALTH_3;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_3_val = L_10;
		RuntimeObject* L_11;
		L_11 = PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_4), (void*)L_12);
		RuntimeObject* L_13 = __this->___PLAYER_HEALTH_4;
		float L_14 = __this->___PLAYER_HEALTH_3_val;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)231), ((float)il2cpp_codegen_add(L_14, (25.0f))));
		RuntimeObject* L_15;
		L_15 = PICKUPMEDKIT_get_MY_mDA43FEA1AC6ADA893A4F7D4E49D3B8E345C16B7E_inline(__this, NULL);
		__this->___MY_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_7), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_7;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)204), (1.0f));
		RuntimeObject* L_17;
		L_17 = PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)-535041724), (bool)1, (bool)1);
		__this->___MP_501SND_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP_501SND_8), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB_inline(__this, NULL);
		RuntimeObject* L_21 = __this->___MP_501SND_8;
		NullCheck(L_20);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, L_21, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_22;
		L_22 = PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)-1997797208), (bool)1, (bool)1);
		__this->___GET11STR_10 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET11STR_10), (void*)L_24);
		RuntimeObject* L_25;
		L_25 = PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB_inline(__this, NULL);
		RuntimeObject* L_26 = __this->___GET11STR_10;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, ((int32_t)361798934), L_26);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_27 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_27, NULL);
		V_0 = L_27;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_28 = V_0;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_29 = L_28;
		RuntimeObject* L_30;
		L_30 = PICKUPMEDKIT_get_MY_mDA43FEA1AC6ADA893A4F7D4E49D3B8E345C16B7E_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_31 = L_29;
		RuntimeObject* L_32;
		L_32 = PICKUPMEDKIT_get_THERE_m592BF2611F36FA1CB66806F5C131F147D41C2501_inline(__this, NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_31, L_32);
		RuntimeObject* L_33;
		L_33 = PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB_inline(__this, NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_31, L_33);
		RuntimeObject* L_34;
		L_34 = PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_35 = V_0;
		NullCheck(L_34);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_34, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_35);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPARMOUR_get_MY_m5FE9A99C5F520317824E5BEC530D509E0061C2A8 (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPARMOUR_set_MY_m8661A6A5B4A7BA85F4248D535BC8418C8FEA2E89 (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPARMOUR_get_THERE_mAFD0FFBD223F02A1F249AB3ADE3A924D2467B4E5 (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPARMOUR_set_THERE_m8E9EFC9468464BCCE94FFCEBA5E99172BD545C74 (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPARMOUR_set__world_m58A7292EE0B1528AF9FF8B2FD56834971A73CC4C (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPARMOUR_get_Current_m4D2CFA4AA70E3484F3D26F3431F740A87C9B75BC (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPARMOUR_set_Current_mA929295247AD62CB929824A893CA389B332BCDD5 (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPARMOUR_Reset_m754322A8CB22A2A0B1CB9D4D7064E931F6BEDA70 (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPARMOUR__ctor_m4D3BBA5066D89D448AEE969F78240E2AC1F0F588 (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPARMOUR__ctor_mC9DCD519D8039DEF7D5ED7112782401ACC660E13 (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKUPARMOUR_set_MY_m8661A6A5B4A7BA85F4248D535BC8418C8FEA2E89_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKUPARMOUR_set_THERE_m8E9EFC9468464BCCE94FFCEBA5E99172BD545C74_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKUPARMOUR_set__world_m58A7292EE0B1528AF9FF8B2FD56834971A73CC4C_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKUPARMOUR_MoveNext_m5895F3C688FFBD44B76886E64A934BFC3F2D9FD1 (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___PLAYER_ARMOUR_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARMOUR_1_val = L_4;
		float L_5 = __this->___PLAYER_ARMOUR_1_val;
		bool L_6;
		L_6 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_5, (190.0f), NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		RuntimeObject* L_7;
		L_7 = PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___PLAYER_ARMOUR_3;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARMOUR_3_val = L_10;
		RuntimeObject* L_11;
		L_11 = PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_4), (void*)L_12);
		RuntimeObject* L_13 = __this->___PLAYER_ARMOUR_4;
		float L_14 = __this->___PLAYER_ARMOUR_3_val;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)231), ((float)il2cpp_codegen_add(L_14, (50.0f))));
		RuntimeObject* L_15;
		L_15 = PICKUPARMOUR_get_MY_m5FE9A99C5F520317824E5BEC530D509E0061C2A8_inline(__this, NULL);
		__this->___MY_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_7), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_7;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)204), (1.0f));
		RuntimeObject* L_17;
		L_17 = PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)366485954), (bool)1, (bool)1);
		__this->___ARMO01SND_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ARMO01SND_8), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A_inline(__this, NULL);
		RuntimeObject* L_21 = __this->___ARMO01SND_8;
		NullCheck(L_20);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, L_21, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_22;
		L_22 = PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)-1997833145), (bool)1, (bool)1);
		__this->___GET10STR_10 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET10STR_10), (void*)L_24);
		RuntimeObject* L_25;
		L_25 = PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A_inline(__this, NULL);
		RuntimeObject* L_26 = __this->___GET10STR_10;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, ((int32_t)361798934), L_26);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_27 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_27, NULL);
		V_0 = L_27;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_28 = V_0;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_29 = L_28;
		RuntimeObject* L_30;
		L_30 = PICKUPARMOUR_get_MY_m5FE9A99C5F520317824E5BEC530D509E0061C2A8_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_31 = L_29;
		RuntimeObject* L_32;
		L_32 = PICKUPARMOUR_get_THERE_mAFD0FFBD223F02A1F249AB3ADE3A924D2467B4E5_inline(__this, NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_31, L_32);
		RuntimeObject* L_33;
		L_33 = PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A_inline(__this, NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_31, L_33);
		RuntimeObject* L_34;
		L_34 = PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_35 = V_0;
		NullCheck(L_34);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_34, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_35);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMP5_get_MY_mAE536D815D459368FBFF6FE67718C63024B2DFED (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMP5_set_MY_m10E23E84D897D258B8D878B278A4958CFA70C321 (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMP5_get_THERE_mE73DBA28D4ABA65F63DD9D1C243BCDD8784DF47C (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMP5_set_THERE_m9C701EAFCE129E0805A22BD2080C55C072CEF996 (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053 (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMP5_set__world_m5619459E48646538ACB4A3C789478FD2B3FA2F08 (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMP5_get_Current_m6898C63BB16F5A95A00B17EDC9A449A036DC0C13 (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMP5_set_Current_m5885374A74AF89E086C4397C46B9482EEBFB81CA (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMP5_Reset_m8F37FAD4B973BD97C12792C95C73D0B6B0B0200D (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMP5__ctor_m2E2DB8B07BB588612F5378E57F6E5D0FDFED2E8E (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMP5__ctor_mCE56650730812B12F4E0099B0B62A42E98517A8E (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKUPMP5_set_MY_m10E23E84D897D258B8D878B278A4958CFA70C321_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKUPMP5_set_THERE_m9C701EAFCE129E0805A22BD2080C55C072CEF996_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKUPMP5_set__world_m5619459E48646538ACB4A3C789478FD2B3FA2F08_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKUPMP5_MoveNext_m799529F9ACCC592A104946C8FC83739C17E2C331 (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* V_0 = NULL;
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_1 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)1205036122));
		__this->___HAS_MP5_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_MP5_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___HAS_MP5_1;
		NullCheck(L_3);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (1.0f));
		RuntimeObject* L_4;
		L_4 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, 5, ((int32_t)1494668136));
		__this->___AMMO_MP5_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_MP5_3), (void*)L_5);
		RuntimeObject* L_6 = __this->___AMMO_MP5_3;
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)231), (bool)1);
		__this->___AMMO_MP5_3_val = L_7;
		RuntimeObject* L_8;
		L_8 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)1494668136));
		__this->___AMMO_MP5_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_MP5_4), (void*)L_9);
		RuntimeObject* L_10 = __this->___AMMO_MP5_4;
		float L_11 = __this->___AMMO_MP5_3_val;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), ((float)il2cpp_codegen_add(L_11, (60.0f))));
		RuntimeObject* L_12;
		L_12 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_6), (void*)L_13);
		RuntimeObject* L_14 = __this->___WEAPONSEL_6;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (bool)1);
		__this->___WEAPONSEL_6_val = L_15;
		float L_16 = __this->___WEAPONSEL_6_val;
		bool L_17;
		L_17 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_16, (2.0f), NULL);
		if (!L_17)
		{
			goto IL_010c;
		}
	}
	{
		SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* L_18 = (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0*)il2cpp_codegen_object_new(SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0_il2cpp_TypeInfo_var);
		SELECTMP5__ctor_m1388168523BC50D9479F152A3096612F887E5F46(L_18, NULL);
		V_0 = L_18;
		SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* L_19 = V_0;
		SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* L_20 = L_19;
		RuntimeObject* L_21;
		L_21 = PICKUPMP5_get_MY_mAE536D815D459368FBFF6FE67718C63024B2DFED_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* L_22 = L_20;
		RuntimeObject* L_23;
		L_23 = PICKUPMP5_get_THERE_mE73DBA28D4ABA65F63DD9D1C243BCDD8784DF47C_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_23);
		RuntimeObject* L_24;
		L_24 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_24);
		RuntimeObject* L_25;
		L_25 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* L_26 = V_0;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_26);
	}

IL_010c:
	{
		RuntimeObject* L_28;
		L_28 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_8 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_8), (void*)L_29);
		RuntimeObject* L_30 = __this->___WEAPONSEL_8;
		NullCheck(L_30);
		float L_31;
		L_31 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)231), (bool)1);
		__this->___WEAPONSEL_8_val = L_31;
		float L_32 = __this->___WEAPONSEL_8_val;
		bool L_33;
		L_33 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_32, (1.0f), NULL);
		if (!L_33)
		{
			goto IL_018a;
		}
	}
	{
		RuntimeObject* L_34;
		L_34 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)2022635869), (bool)1, (bool)1);
		__this->___AMMO01SND_9 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO01SND_9), (void*)L_36);
		RuntimeObject* L_37;
		L_37 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		RuntimeObject* L_38 = __this->___AMMO01SND_9;
		NullCheck(L_37);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_37, L_38, (0.300000012f), (RuntimeObject*)NULL, (100.0f), (100.0f));
	}

IL_018a:
	{
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_39 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_39, NULL);
		V_1 = L_39;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_40 = V_1;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_41 = L_40;
		RuntimeObject* L_42;
		L_42 = PICKUPMP5_get_MY_mAE536D815D459368FBFF6FE67718C63024B2DFED_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_43 = L_41;
		RuntimeObject* L_44;
		L_44 = PICKUPMP5_get_THERE_mE73DBA28D4ABA65F63DD9D1C243BCDD8784DF47C_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_44);
		RuntimeObject* L_45;
		L_45 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_45);
		RuntimeObject* L_46;
		L_46 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_47 = V_1;
		NullCheck(L_46);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_47);
		RuntimeObject* L_49;
		L_49 = PICKUPMP5_get_MY_mAE536D815D459368FBFF6FE67718C63024B2DFED_inline(__this, NULL);
		__this->___MY_13 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_13), (void*)L_49);
		RuntimeObject* L_50 = __this->___MY_13;
		NullCheck(L_50);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)204), (1.0f));
		RuntimeObject* L_51;
		L_51 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_51);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)-1998947192), (bool)1, (bool)1);
		__this->___GET02STR_14 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET02STR_14), (void*)L_53);
		RuntimeObject* L_54;
		L_54 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		RuntimeObject* L_55 = __this->___GET02STR_14;
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_54, ((int32_t)361798934), L_55);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_56 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_56, NULL);
		V_2 = L_56;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_57 = V_2;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_58 = L_57;
		RuntimeObject* L_59;
		L_59 = PICKUPMP5_get_MY_mAE536D815D459368FBFF6FE67718C63024B2DFED_inline(__this, NULL);
		NullCheck(L_58);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_58, L_59);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_60 = L_58;
		RuntimeObject* L_61;
		L_61 = PICKUPMP5_get_THERE_mE73DBA28D4ABA65F63DD9D1C243BCDD8784DF47C_inline(__this, NULL);
		NullCheck(L_60);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_60, L_61);
		RuntimeObject* L_62;
		L_62 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		NullCheck(L_60);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_60, L_62);
		RuntimeObject* L_63;
		L_63 = PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_64 = V_2;
		NullCheck(L_63);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_64);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPSTINGER_get_MY_m225B6738E3D59288FDB9028687F2AC77D6C73496 (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPSTINGER_set_MY_mBDF7F37636F6E9387989F40E361A66DC5E169198 (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPSTINGER_get_THERE_m9080D4759A3E595BEA895995677D6CE4F4AC6C9F (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPSTINGER_set_THERE_m485C835C49D349D9D4F0B03122684A3386A27717 (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPSTINGER_set__world_m026FB1291AE2D39143CB54E5E4A8F0D7CAA04A72 (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPSTINGER_get_Current_m23C57C0562A05D7EC8C0FFBBC049D2AB094966AE (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPSTINGER_set_Current_m3B8B5810C84863057EE77CE02A304F46EEA2B029 (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPSTINGER_Reset_mDD6526A92BC8EC1009D06BE528F6EBB8D89BBED3 (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPSTINGER__ctor_m2A4EF8FF7E629B7C156CEBB06B10913865266BFA (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPSTINGER__ctor_m6C811B92D63397F0C390876FD344563E28005FA9 (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKUPSTINGER_set_MY_mBDF7F37636F6E9387989F40E361A66DC5E169198_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKUPSTINGER_set_THERE_m485C835C49D349D9D4F0B03122684A3386A27717_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKUPSTINGER_set__world_m026FB1291AE2D39143CB54E5E4A8F0D7CAA04A72_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKUPSTINGER_MoveNext_m9DD85B9D53D7852AEFFF4CDD453FFBB36268F607 (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* V_0 = NULL;
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_1 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-1554365628));
		__this->___HAS_STINGER_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_STINGER_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___HAS_STINGER_1;
		NullCheck(L_3);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (1.0f));
		RuntimeObject* L_4;
		L_4 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, 5, ((int32_t)2008713554));
		__this->___AMMO_STINGER_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_STINGER_3), (void*)L_5);
		RuntimeObject* L_6 = __this->___AMMO_STINGER_3;
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)231), (bool)1);
		__this->___AMMO_STINGER_3_val = L_7;
		RuntimeObject* L_8;
		L_8 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)2008713554));
		__this->___AMMO_STINGER_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_STINGER_4), (void*)L_9);
		RuntimeObject* L_10 = __this->___AMMO_STINGER_4;
		float L_11 = __this->___AMMO_STINGER_3_val;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), ((float)il2cpp_codegen_add(L_11, (2.0f))));
		RuntimeObject* L_12;
		L_12 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_6), (void*)L_13);
		RuntimeObject* L_14 = __this->___WEAPONSEL_6;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (bool)1);
		__this->___WEAPONSEL_6_val = L_15;
		float L_16 = __this->___WEAPONSEL_6_val;
		bool L_17;
		L_17 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_16, (4.0f), NULL);
		if (!L_17)
		{
			goto IL_010c;
		}
	}
	{
		SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* L_18 = (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674*)il2cpp_codegen_object_new(SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674_il2cpp_TypeInfo_var);
		SELECTSTINGER__ctor_m49968978A40DC25E5587097774FAFAD9F8A6ED15(L_18, NULL);
		V_0 = L_18;
		SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* L_19 = V_0;
		SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* L_20 = L_19;
		RuntimeObject* L_21;
		L_21 = PICKUPSTINGER_get_MY_m225B6738E3D59288FDB9028687F2AC77D6C73496_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* L_22 = L_20;
		RuntimeObject* L_23;
		L_23 = PICKUPSTINGER_get_THERE_m9080D4759A3E595BEA895995677D6CE4F4AC6C9F_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_23);
		RuntimeObject* L_24;
		L_24 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_24);
		RuntimeObject* L_25;
		L_25 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* L_26 = V_0;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_26);
	}

IL_010c:
	{
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_28 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_28, NULL);
		V_1 = L_28;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_29 = V_1;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_30 = L_29;
		RuntimeObject* L_31;
		L_31 = PICKUPSTINGER_get_MY_m225B6738E3D59288FDB9028687F2AC77D6C73496_inline(__this, NULL);
		NullCheck(L_30);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_30, L_31);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_32 = L_30;
		RuntimeObject* L_33;
		L_33 = PICKUPSTINGER_get_THERE_m9080D4759A3E595BEA895995677D6CE4F4AC6C9F_inline(__this, NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_32, L_33);
		RuntimeObject* L_34;
		L_34 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_32, L_34);
		RuntimeObject* L_35;
		L_35 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_36 = V_1;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_36);
		RuntimeObject* L_38;
		L_38 = PICKUPSTINGER_get_MY_m225B6738E3D59288FDB9028687F2AC77D6C73496_inline(__this, NULL);
		__this->___MY_9 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_9), (void*)L_38);
		RuntimeObject* L_39 = __this->___MY_9;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)204), (1.0f));
		RuntimeObject* L_40;
		L_40 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)-1998731570), (bool)1, (bool)1);
		__this->___GET08STR_10 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET08STR_10), (void*)L_42);
		RuntimeObject* L_43;
		L_43 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		RuntimeObject* L_44 = __this->___GET08STR_10;
		NullCheck(L_43);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, ((int32_t)361798934), L_44);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_45 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_45, NULL);
		V_2 = L_45;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_46 = V_2;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_47 = L_46;
		RuntimeObject* L_48;
		L_48 = PICKUPSTINGER_get_MY_m225B6738E3D59288FDB9028687F2AC77D6C73496_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_49 = L_47;
		RuntimeObject* L_50;
		L_50 = PICKUPSTINGER_get_THERE_m9080D4759A3E595BEA895995677D6CE4F4AC6C9F_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		RuntimeObject* L_51;
		L_51 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_51);
		RuntimeObject* L_52;
		L_52 = PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_53 = V_2;
		NullCheck(L_52);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_53);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPQUANTUM_get_MY_mDDE7E330FE1680B7D423AF3528F6DC397B41C9C9 (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPQUANTUM_set_MY_m070455F8DADF322EABDFF7FA603E9FA6EDEFCD05 (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPQUANTUM_get_THERE_m0CA16C24C3B977DAA45E0185C5C77B143BE5E290 (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPQUANTUM_set_THERE_m05F1FAA12F4D98BAC4EC860C08A162B67516FBE6 (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665 (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPQUANTUM_set__world_m30E560F18162FC8048CD4C0FB94F332653D6CD01 (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPQUANTUM_get_Current_mCAF9C912F98665D07D09E81123747022D5F2E25B (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPQUANTUM_set_Current_m204C6670BFEC9D945990CAB5CD8987B199739E6A (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPQUANTUM_Reset_mD505382C7193C110F1A3401EAD80757382C6159F (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPQUANTUM__ctor_mACBD9AB3582B525B95A5383553613B33CD586209 (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPQUANTUM__ctor_m6AE8F6311CB0A0BCA4A5130734A90820074971A0 (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKUPQUANTUM_set_MY_m070455F8DADF322EABDFF7FA603E9FA6EDEFCD05_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKUPQUANTUM_set_THERE_m05F1FAA12F4D98BAC4EC860C08A162B67516FBE6_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKUPQUANTUM_set__world_m30E560F18162FC8048CD4C0FB94F332653D6CD01_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKUPQUANTUM_MoveNext_mD6C2A76CD53D983203BD67715A86170EC7CBA567 (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* V_0 = NULL;
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_1 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)187328435));
		__this->___HAS_QUANTUM_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_QUANTUM_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___HAS_QUANTUM_1;
		NullCheck(L_3);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (1.0f));
		RuntimeObject* L_4;
		L_4 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, 5, ((int32_t)-544559679));
		__this->___AMMO_QUANTUM_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_QUANTUM_3), (void*)L_5);
		RuntimeObject* L_6 = __this->___AMMO_QUANTUM_3;
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)231), (bool)1);
		__this->___AMMO_QUANTUM_3_val = L_7;
		RuntimeObject* L_8;
		L_8 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)-544559679));
		__this->___AMMO_QUANTUM_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_QUANTUM_4), (void*)L_9);
		RuntimeObject* L_10 = __this->___AMMO_QUANTUM_4;
		float L_11 = __this->___AMMO_QUANTUM_3_val;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), ((float)il2cpp_codegen_add(L_11, (5.0f))));
		RuntimeObject* L_12;
		L_12 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_6), (void*)L_13);
		RuntimeObject* L_14 = __this->___WEAPONSEL_6;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (bool)1);
		__this->___WEAPONSEL_6_val = L_15;
		float L_16 = __this->___WEAPONSEL_6_val;
		bool L_17;
		L_17 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_16, (5.0f), NULL);
		if (!L_17)
		{
			goto IL_010c;
		}
	}
	{
		SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* L_18 = (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910*)il2cpp_codegen_object_new(SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910_il2cpp_TypeInfo_var);
		SELECTQUANTUM__ctor_m3DA061CD2F6830B261DAE3FE177BF104D341C699(L_18, NULL);
		V_0 = L_18;
		SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* L_19 = V_0;
		SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* L_20 = L_19;
		RuntimeObject* L_21;
		L_21 = PICKUPQUANTUM_get_MY_mDDE7E330FE1680B7D423AF3528F6DC397B41C9C9_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* L_22 = L_20;
		RuntimeObject* L_23;
		L_23 = PICKUPQUANTUM_get_THERE_m0CA16C24C3B977DAA45E0185C5C77B143BE5E290_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_23);
		RuntimeObject* L_24;
		L_24 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_24);
		RuntimeObject* L_25;
		L_25 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* L_26 = V_0;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_26);
	}

IL_010c:
	{
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_28 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_28, NULL);
		V_1 = L_28;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_29 = V_1;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_30 = L_29;
		RuntimeObject* L_31;
		L_31 = PICKUPQUANTUM_get_MY_mDDE7E330FE1680B7D423AF3528F6DC397B41C9C9_inline(__this, NULL);
		NullCheck(L_30);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_30, L_31);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_32 = L_30;
		RuntimeObject* L_33;
		L_33 = PICKUPQUANTUM_get_THERE_m0CA16C24C3B977DAA45E0185C5C77B143BE5E290_inline(__this, NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_32, L_33);
		RuntimeObject* L_34;
		L_34 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_32, L_34);
		RuntimeObject* L_35;
		L_35 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_36 = V_1;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_36);
		RuntimeObject* L_38;
		L_38 = PICKUPQUANTUM_get_MY_mDDE7E330FE1680B7D423AF3528F6DC397B41C9C9_inline(__this, NULL);
		__this->___MY_9 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_9), (void*)L_38);
		RuntimeObject* L_39 = __this->___MY_9;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)204), (1.0f));
		RuntimeObject* L_40;
		L_40 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)-1998695633), (bool)1, (bool)1);
		__this->___GET09STR_10 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET09STR_10), (void*)L_42);
		RuntimeObject* L_43;
		L_43 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		RuntimeObject* L_44 = __this->___GET09STR_10;
		NullCheck(L_43);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, ((int32_t)361798934), L_44);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_45 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_45, NULL);
		V_2 = L_45;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_46 = V_2;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_47 = L_46;
		RuntimeObject* L_48;
		L_48 = PICKUPQUANTUM_get_MY_mDDE7E330FE1680B7D423AF3528F6DC397B41C9C9_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_49 = L_47;
		RuntimeObject* L_50;
		L_50 = PICKUPQUANTUM_get_THERE_m0CA16C24C3B977DAA45E0185C5C77B143BE5E290_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		RuntimeObject* L_51;
		L_51 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_51);
		RuntimeObject* L_52;
		L_52 = PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_53 = V_2;
		NullCheck(L_52);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_53);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKAMMO_get_MY_m23C509E26C998329C9CE9A29C2BF46D691D54636 (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKAMMO_set_MY_m3973FEDAB226960451C01FAAF77D4464179216A8 (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKAMMO_get_THERE_m807FB78308C644EB9BFCE3C83D789C5E98F8866F (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKAMMO_set_THERE_m7B52FE3B41A65481C13EC097E60D599EFDFE0345 (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKAMMO_set__world_m597B59E5A1865FACDF76E94431F8E541D5A07D11 (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKAMMO_get_Current_mAB9F21161697EF56796D1E42D05BE1540D72AA64 (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKAMMO_set_Current_m01F0EA12C1BCFD4CFF01E7FE4A280FC011BE4FDD (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKAMMO_Reset_m2EFA23E3AF21A180F023AF8CCACA74709F3F8E30 (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKAMMO__ctor_m23A5854D7B8EA8949DD1FE16433E83D547E997F5 (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKAMMO__ctor_mA1680A80F7E4319DB88A963B015756E138B8EAED (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKAMMO_set_MY_m3973FEDAB226960451C01FAAF77D4464179216A8_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKAMMO_set_THERE_m7B52FE3B41A65481C13EC097E60D599EFDFE0345_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKAMMO_set__world_m597B59E5A1865FACDF76E94431F8E541D5A07D11_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKAMMO_MoveNext_m6C56E0A842DFBBFE390786BF6BBFCD0BE7655973 (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_0 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)1494668136));
		__this->___AMMO_MP5_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_MP5_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___AMMO_MP5_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___AMMO_MP5_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)1494668136));
		__this->___AMMO_MP5_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_MP5_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___AMMO_MP5_2;
		float L_8 = __this->___AMMO_MP5_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (30.0f))));
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_9 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_9, NULL);
		V_0 = L_9;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_10 = V_0;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_11 = L_10;
		RuntimeObject* L_12;
		L_12 = PICKAMMO_get_MY_m23C509E26C998329C9CE9A29C2BF46D691D54636_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_11, L_12);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_13 = L_11;
		RuntimeObject* L_14;
		L_14 = PICKAMMO_get_THERE_m807FB78308C644EB9BFCE3C83D789C5E98F8866F_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_14);
		RuntimeObject* L_15;
		L_15 = PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_15);
		RuntimeObject* L_16;
		L_16 = PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_17 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_17);
		RuntimeObject* L_19;
		L_19 = PICKAMMO_get_MY_m23C509E26C998329C9CE9A29C2BF46D691D54636_inline(__this, NULL);
		__this->___MY_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_5;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)204), (1.0f));
		RuntimeObject* L_21;
		L_21 = PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)2022635869), (bool)1, (bool)1);
		__this->___AMMO01SND_6 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO01SND_6), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline(__this, NULL);
		RuntimeObject* L_25 = __this->___AMMO01SND_6;
		NullCheck(L_24);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, L_25, (0.300000012f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_26;
		L_26 = PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)-1998983129), (bool)1, (bool)1);
		__this->___GET01STR_8 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET01STR_8), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline(__this, NULL);
		RuntimeObject* L_30 = __this->___GET01STR_8;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, ((int32_t)361798934), L_30);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_31 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_31, NULL);
		V_1 = L_31;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_32 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_33 = L_32;
		RuntimeObject* L_34;
		L_34 = PICKAMMO_get_MY_m23C509E26C998329C9CE9A29C2BF46D691D54636_inline(__this, NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_33, L_34);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_35 = L_33;
		RuntimeObject* L_36;
		L_36 = PICKAMMO_get_THERE_m807FB78308C644EB9BFCE3C83D789C5E98F8866F_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_36);
		RuntimeObject* L_37;
		L_37 = PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_37);
		RuntimeObject* L_38;
		L_38 = PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_39 = V_1;
		NullCheck(L_38);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_39);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKGRANADE_get_MY_m994F82B86B90D8FE103CB7BDA25C0F6F08A74F35 (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKGRANADE_set_MY_m9CD8F3F2F0C8BB51FF8B736CF0A58F2A405CAB8B (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKGRANADE_get_THERE_mF0908F04F717B89F365CBE25937EC061283AA751 (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKGRANADE_set_THERE_m5701BFC66A7B27B37B0F023009DC6A1936CC7C36 (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0 (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKGRANADE_set__world_m9F06B6EAB500082A5313E7AF2C0593285D508B4B (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKGRANADE_get_Current_mF9149A5CF7834851F44043DF607C76A100D1F633 (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKGRANADE_set_Current_m5B92188DCBE09AB31AED119B152D463E89D4A6AD (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKGRANADE_Reset_m7D798906D778D8F41BB743E597342CACA3EA5335 (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKGRANADE__ctor_mB4B5FB9F862186A97F3FFF618BC81B19FBAC00F9 (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKGRANADE__ctor_m1BAF5A4BF00C2B5378AB388AFB144BBBBCF2581D (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKGRANADE_set_MY_m9CD8F3F2F0C8BB51FF8B736CF0A58F2A405CAB8B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKGRANADE_set_THERE_m5701BFC66A7B27B37B0F023009DC6A1936CC7C36_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKGRANADE_set__world_m9F06B6EAB500082A5313E7AF2C0593285D508B4B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKGRANADE_MoveNext_m743E14725955A5D062D0A0B850672D811A4E4A8C (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_0 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)40123194));
		__this->___HAS_GRANADE_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_GRANADE_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___HAS_GRANADE_1;
		NullCheck(L_3);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (1.0f));
		RuntimeObject* L_4;
		L_4 = PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, 5, ((int32_t)-691764920));
		__this->___AMMO_GRANADE_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_GRANADE_3), (void*)L_5);
		RuntimeObject* L_6 = __this->___AMMO_GRANADE_3;
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)231), (bool)1);
		__this->___AMMO_GRANADE_3_val = L_7;
		RuntimeObject* L_8;
		L_8 = PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)-691764920));
		__this->___AMMO_GRANADE_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_GRANADE_4), (void*)L_9);
		RuntimeObject* L_10 = __this->___AMMO_GRANADE_4;
		float L_11 = __this->___AMMO_GRANADE_3_val;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), ((float)il2cpp_codegen_add(L_11, (1.0f))));
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_12 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_12, NULL);
		V_0 = L_12;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_13 = V_0;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_14 = L_13;
		RuntimeObject* L_15;
		L_15 = PICKGRANADE_get_MY_m994F82B86B90D8FE103CB7BDA25C0F6F08A74F35_inline(__this, NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_14, L_15);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_16 = L_14;
		RuntimeObject* L_17;
		L_17 = PICKGRANADE_get_THERE_mF0908F04F717B89F365CBE25937EC061283AA751_inline(__this, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_16, L_17);
		RuntimeObject* L_18;
		L_18 = PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline(__this, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_16, L_18);
		RuntimeObject* L_19;
		L_19 = PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_20 = V_0;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_20);
		RuntimeObject* L_22;
		L_22 = PICKGRANADE_get_MY_m994F82B86B90D8FE103CB7BDA25C0F6F08A74F35_inline(__this, NULL);
		__this->___MY_7 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_7), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_7;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)204), (1.0f));
		RuntimeObject* L_24;
		L_24 = PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)850576923), (bool)1, (bool)1);
		__this->___GRAN01SND_8 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN01SND_8), (void*)L_26);
		RuntimeObject* L_27;
		L_27 = PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline(__this, NULL);
		RuntimeObject* L_28 = __this->___GRAN01SND_8;
		NullCheck(L_27);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, L_28, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_29;
		L_29 = PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)-1998839381), (bool)1, (bool)1);
		__this->___GET05STR_10 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET05STR_10), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline(__this, NULL);
		RuntimeObject* L_33 = __this->___GET05STR_10;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, ((int32_t)361798934), L_33);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_34 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_34, NULL);
		V_1 = L_34;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_35 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_36 = L_35;
		RuntimeObject* L_37;
		L_37 = PICKGRANADE_get_MY_m994F82B86B90D8FE103CB7BDA25C0F6F08A74F35_inline(__this, NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_36, L_37);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_38 = L_36;
		RuntimeObject* L_39;
		L_39 = PICKGRANADE_get_THERE_mF0908F04F717B89F365CBE25937EC061283AA751_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_39);
		RuntimeObject* L_40;
		L_40 = PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_40);
		RuntimeObject* L_41;
		L_41 = PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_42 = V_1;
		NullCheck(L_41);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_42);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKSTINGERAMMO_get_MY_m02296A7C662E9C170A642571F4FFC2DCD0BC825C (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKSTINGERAMMO_set_MY_m73DB0B9837CBFB55C81121623D6C1F31815BA911 (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKSTINGERAMMO_get_THERE_mB69401871FBAEC7A4AAA2A44632C9136F8339675 (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKSTINGERAMMO_set_THERE_m410D2291A9A0ABDA0D1E02801585D0BE5324E336 (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKSTINGERAMMO_set__world_m7D628F560137FC1BE5774B10275F569F8A277F59 (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKSTINGERAMMO_get_Current_m3F744E268A95A8A30DE314CAC0B8D61ACDE15369 (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKSTINGERAMMO_set_Current_m41BC44C774AD296799E5DB47D7BEDCF380CEA4A7 (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKSTINGERAMMO_Reset_m8F69ADF9D1FAEA15ED33099A9D3D787EA975DCDA (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKSTINGERAMMO__ctor_mB78B5215DB733D36C4A7E9CB3F8F2CDD13F93158 (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKSTINGERAMMO__ctor_m43FDFC251943FD89FD9BE681F5941D56CB97B653 (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKSTINGERAMMO_set_MY_m73DB0B9837CBFB55C81121623D6C1F31815BA911_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKSTINGERAMMO_set_THERE_m410D2291A9A0ABDA0D1E02801585D0BE5324E336_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKSTINGERAMMO_set__world_m7D628F560137FC1BE5774B10275F569F8A277F59_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKSTINGERAMMO_MoveNext_mD6FBBF45DD1DA6E46A6363BF418B3B436E0F34F7 (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_0 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)2008713554));
		__this->___AMMO_STINGER_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_STINGER_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___AMMO_STINGER_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___AMMO_STINGER_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)2008713554));
		__this->___AMMO_STINGER_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_STINGER_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___AMMO_STINGER_2;
		float L_8 = __this->___AMMO_STINGER_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (10.0f))));
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_9 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_9, NULL);
		V_0 = L_9;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_10 = V_0;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_11 = L_10;
		RuntimeObject* L_12;
		L_12 = PICKSTINGERAMMO_get_MY_m02296A7C662E9C170A642571F4FFC2DCD0BC825C_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_11, L_12);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_13 = L_11;
		RuntimeObject* L_14;
		L_14 = PICKSTINGERAMMO_get_THERE_mB69401871FBAEC7A4AAA2A44632C9136F8339675_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_14);
		RuntimeObject* L_15;
		L_15 = PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_15);
		RuntimeObject* L_16;
		L_16 = PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_17 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_17);
		RuntimeObject* L_19;
		L_19 = PICKSTINGERAMMO_get_MY_m02296A7C662E9C170A642571F4FFC2DCD0BC825C_inline(__this, NULL);
		__this->___MY_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_5;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)204), (1.0f));
		RuntimeObject* L_21;
		L_21 = PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)2022635869), (bool)1, (bool)1);
		__this->___AMMO01SND_6 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO01SND_6), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline(__this, NULL);
		RuntimeObject* L_25 = __this->___AMMO01SND_6;
		NullCheck(L_24);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, L_25, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_26;
		L_26 = PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)-1998803444), (bool)1, (bool)1);
		__this->___GET06STR_8 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET06STR_8), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline(__this, NULL);
		RuntimeObject* L_30 = __this->___GET06STR_8;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, ((int32_t)361798934), L_30);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_31 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_31, NULL);
		V_1 = L_31;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_32 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_33 = L_32;
		RuntimeObject* L_34;
		L_34 = PICKSTINGERAMMO_get_MY_m02296A7C662E9C170A642571F4FFC2DCD0BC825C_inline(__this, NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_33, L_34);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_35 = L_33;
		RuntimeObject* L_36;
		L_36 = PICKSTINGERAMMO_get_THERE_mB69401871FBAEC7A4AAA2A44632C9136F8339675_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_36);
		RuntimeObject* L_37;
		L_37 = PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_37);
		RuntimeObject* L_38;
		L_38 = PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_39 = V_1;
		NullCheck(L_38);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_39);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKQUANTUMAMMO_get_MY_mE850CF9D07546D39E21C3A819F98423CC7B7CD4B (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO_set_MY_m7514FD2F1DBAEF62156D78AD55B093353CE3F249 (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKQUANTUMAMMO_get_THERE_m1D119C7273059AF6DB096B49B86C32F11FEC65DD (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO_set_THERE_mEC157C32526B15E91B1A497FDDCBAAFD95C10AAB (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8 (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO_set__world_m7F8AFBFE47C78AECADBEDAF824F2D503323707B7 (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKQUANTUMAMMO_get_Current_m0EC68B218ADCE34543F523A7FE358022D371CB79 (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO_set_Current_m73579FFEFF14654FEEF6954C194137FD9B4094FA (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO_Reset_m9FE233FE7409735155E64AA02F1129AF99BDDB80 (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO__ctor_mB56FAC54928E60D65DAE2BAD18FCC936183615FC (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO__ctor_mFD470FD433C7CF1D0E41901DDD9BFFB1155E1A26 (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKQUANTUMAMMO_set_MY_m7514FD2F1DBAEF62156D78AD55B093353CE3F249_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKQUANTUMAMMO_set_THERE_mEC157C32526B15E91B1A497FDDCBAAFD95C10AAB_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKQUANTUMAMMO_set__world_m7F8AFBFE47C78AECADBEDAF824F2D503323707B7_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKQUANTUMAMMO_MoveNext_m0DF598324573AA1F9996E0F29C9EE2B7A3320D89 (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_0 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-544559679));
		__this->___AMMO_QUANTUM_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_QUANTUM_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___AMMO_QUANTUM_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___AMMO_QUANTUM_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)-544559679));
		__this->___AMMO_QUANTUM_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_QUANTUM_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___AMMO_QUANTUM_2;
		float L_8 = __this->___AMMO_QUANTUM_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (1.0f))));
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_9 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_9, NULL);
		V_0 = L_9;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_10 = V_0;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_11 = L_10;
		RuntimeObject* L_12;
		L_12 = PICKQUANTUMAMMO_get_MY_mE850CF9D07546D39E21C3A819F98423CC7B7CD4B_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_11, L_12);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_13 = L_11;
		RuntimeObject* L_14;
		L_14 = PICKQUANTUMAMMO_get_THERE_m1D119C7273059AF6DB096B49B86C32F11FEC65DD_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_14);
		RuntimeObject* L_15;
		L_15 = PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_15);
		RuntimeObject* L_16;
		L_16 = PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_17 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_17);
		RuntimeObject* L_19;
		L_19 = PICKQUANTUMAMMO_get_MY_mE850CF9D07546D39E21C3A819F98423CC7B7CD4B_inline(__this, NULL);
		__this->___MY_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_5;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)204), (1.0f));
		RuntimeObject* L_21;
		L_21 = PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)-1673016946), (bool)1, (bool)1);
		__this->___QGUN01SND_6 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN01SND_6), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline(__this, NULL);
		RuntimeObject* L_25 = __this->___QGUN01SND_6;
		NullCheck(L_24);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, L_25, (0.200000003f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_26;
		L_26 = PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)-1998767507), (bool)1, (bool)1);
		__this->___GET07STR_8 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET07STR_8), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline(__this, NULL);
		RuntimeObject* L_30 = __this->___GET07STR_8;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, ((int32_t)361798934), L_30);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_31 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_31, NULL);
		V_1 = L_31;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_32 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_33 = L_32;
		RuntimeObject* L_34;
		L_34 = PICKQUANTUMAMMO_get_MY_mE850CF9D07546D39E21C3A819F98423CC7B7CD4B_inline(__this, NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_33, L_34);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_35 = L_33;
		RuntimeObject* L_36;
		L_36 = PICKQUANTUMAMMO_get_THERE_m1D119C7273059AF6DB096B49B86C32F11FEC65DD_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_36);
		RuntimeObject* L_37;
		L_37 = PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_37);
		RuntimeObject* L_38;
		L_38 = PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_39 = V_1;
		NullCheck(L_38);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_39);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHREGION_get_MY_m73ED410FC08F78CDD46DE62B24846FCC118149BF (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHREGION_set_MY_mAAE5919329E43439E4164AD053F0FE1729EEE566 (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHREGION_get_THERE_mC9259C374A8AD68064A70CE65395C03C9769082B (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHREGION_set_THERE_m009A6DDAE23982F3474E59A4A1BCA4BCE06D557F (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43 (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHREGION_set__world_m49CAE1BE53AD233B4A195166323A3F88AC49CCFA (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHREGION_get_Current_m3EBB676A026936200A5D7B209F87941EF8CBC493 (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHREGION_set_Current_mE9D811C18391BF42E87635753500299654E5D6F0 (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHREGION_Reset_m01E771D60F0394160982A0C0517360012725A12A (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHREGION__ctor_m0F7AECCE826CDDBE2B9C873B5123CF3EEE577CCF (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHREGION__ctor_m5127DE636E46030DCB7B0A3766D98103FCA6A242 (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		FLASHREGION_set_MY_mAAE5919329E43439E4164AD053F0FE1729EEE566_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		FLASHREGION_set_THERE_m009A6DDAE23982F3474E59A4A1BCA4BCE06D557F_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		FLASHREGION_set__world_m49CAE1BE53AD233B4A195166323A3F88AC49CCFA_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FLASHREGION_MoveNext_mBE4641B2158F9E794F7D4A895C2DDB7019D0AEB7 (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B2_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B4_1 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B8_1 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B7_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B9_1 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B13_1 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B12_1 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B14_1 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B18_1 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B17_1 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B19_1 = NULL;
	RuntimeObject* G_B24_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B24_1 = NULL;
	RuntimeObject* G_B23_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B23_1 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B25_1 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B28_1 = NULL;
	RuntimeObject* G_B27_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B27_1 = NULL;
	RuntimeObject* G_B29_0 = NULL;
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* G_B29_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)193463646));
		__this->___LUP_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___LUP_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___LUP_1_val = L_4;
		float L_5 = __this->___LUP_1_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_5, (0.0f), NULL);
		if (!L_6)
		{
			goto IL_01a3;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = FLASHREGION_get_MY_m73ED410FC08F78CDD46DE62B24846FCC118149BF_inline(__this, NULL);
		__this->___MY_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_3), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_3;
		RuntimeObject* L_9 = L_8;
		if (L_9)
		{
			G_B3_0 = L_9;
			G_B3_1 = __this;
			goto IL_0064;
		}
		G_B2_0 = L_9;
		G_B2_1 = __this;
	}
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_0070;
	}

IL_0064:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B3_0, ((int32_t)198), (bool)1, (bool)1);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_0070:
	{
		NullCheck(G_B4_1);
		G_B4_1->___temp_4 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___temp_4), (void*)G_B4_0);
		RuntimeObject* L_11;
		L_11 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		RuntimeObject* L_12 = __this->___temp_4;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, ((int32_t)161611586), L_12);
		RuntimeObject* L_13;
		L_13 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, ((int32_t)161611586), (bool)0);
		__this->___IMPL_REGION_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION_7), (void*)L_14);
		RuntimeObject* L_15 = __this->___IMPL_REGION_7;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)112), (bool)1);
		__this->___temp_8 = L_16;
		RuntimeObject* L_17;
		L_17 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_17, 5, ((int32_t)-1145284421));
		__this->___NAMBIENT_9 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT_9), (void*)L_18);
		RuntimeObject* L_19 = __this->___NAMBIENT_9;
		float L_20 = __this->___temp_8;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)231), L_20);
		RuntimeObject* L_21;
		L_21 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)-482824455));
		__this->___LAMBIENT_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT_10), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, 5, ((int32_t)-482824455));
		__this->___LAMBIENT_11 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT_11), (void*)L_24);
		RuntimeObject* L_25 = __this->___LAMBIENT_11;
		NullCheck(L_25);
		float L_26;
		L_26 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)231), (bool)1);
		__this->___LAMBIENT_11_val = L_26;
		RuntimeObject* L_27;
		L_27 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, 5, ((int32_t)-1145284421));
		__this->___NAMBIENT_12 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT_12), (void*)L_28);
		RuntimeObject* L_29 = __this->___NAMBIENT_12;
		NullCheck(L_29);
		float L_30;
		L_30 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)231), (bool)1);
		__this->___NAMBIENT_12_val = L_30;
		RuntimeObject* L_31 = __this->___LAMBIENT_10;
		float L_32 = __this->___NAMBIENT_12_val;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), ((float)il2cpp_codegen_add(L_32, (1.0f))));
		RuntimeObject* L_33;
		L_33 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)193463646));
		__this->___LUP_16 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP_16), (void*)L_34);
		RuntimeObject* L_35 = __this->___LUP_16;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), (0.0399999991f));
		goto IL_080d;
	}

IL_01a3:
	{
		RuntimeObject* L_36;
		L_36 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_36, 5, ((int32_t)2089301071));
		__this->___LUP1_18 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP1_18), (void*)L_37);
		RuntimeObject* L_38 = __this->___LUP1_18;
		NullCheck(L_38);
		float L_39;
		L_39 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)231), (bool)1);
		__this->___LUP1_18_val = L_39;
		float L_40 = __this->___LUP1_18_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_40, (0.0f), NULL);
		if (!L_41)
		{
			goto IL_033f;
		}
	}
	{
		RuntimeObject* L_42;
		L_42 = FLASHREGION_get_MY_m73ED410FC08F78CDD46DE62B24846FCC118149BF_inline(__this, NULL);
		__this->___MY_20 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_42);
		RuntimeObject* L_43 = __this->___MY_20;
		RuntimeObject* L_44 = L_43;
		if (L_44)
		{
			G_B8_0 = L_44;
			G_B8_1 = __this;
			goto IL_0200;
		}
		G_B7_0 = L_44;
		G_B7_1 = __this;
	}
	{
		G_B9_0 = ((RuntimeObject*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_020c;
	}

IL_0200:
	{
		NullCheck(G_B8_0);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B8_0, ((int32_t)198), (bool)1, (bool)1);
		G_B9_0 = L_45;
		G_B9_1 = G_B8_1;
	}

IL_020c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___temp_21 = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___temp_21), (void*)G_B9_0);
		RuntimeObject* L_46;
		L_46 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		RuntimeObject* L_47 = __this->___temp_21;
		NullCheck(L_46);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, ((int32_t)1038183091), L_47);
		RuntimeObject* L_48;
		L_48 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, ((int32_t)1038183091), (bool)0);
		__this->___IMPL_REGION1_24 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION1_24), (void*)L_49);
		RuntimeObject* L_50 = __this->___IMPL_REGION1_24;
		NullCheck(L_50);
		float L_51;
		L_51 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)112), (bool)1);
		__this->___temp_25 = L_51;
		RuntimeObject* L_52;
		L_52 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, 5, ((int32_t)860287820));
		__this->___NAMBIENT1_26 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT1_26), (void*)L_53);
		RuntimeObject* L_54 = __this->___NAMBIENT1_26;
		float L_55 = __this->___temp_25;
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)231), L_55);
		RuntimeObject* L_56;
		L_56 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, 5, ((int32_t)1246630218));
		__this->___LAMBIENT1_27 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT1_27), (void*)L_57);
		RuntimeObject* L_58;
		L_58 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_58, 5, ((int32_t)1246630218));
		__this->___LAMBIENT1_28 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT1_28), (void*)L_59);
		RuntimeObject* L_60 = __this->___LAMBIENT1_28;
		NullCheck(L_60);
		float L_61;
		L_61 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)231), (bool)1);
		__this->___LAMBIENT1_28_val = L_61;
		RuntimeObject* L_62;
		L_62 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, 5, ((int32_t)860287820));
		__this->___NAMBIENT1_29 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT1_29), (void*)L_63);
		RuntimeObject* L_64 = __this->___NAMBIENT1_29;
		NullCheck(L_64);
		float L_65;
		L_65 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)231), (bool)1);
		__this->___NAMBIENT1_29_val = L_65;
		RuntimeObject* L_66 = __this->___LAMBIENT1_27;
		float L_67 = __this->___NAMBIENT1_29_val;
		NullCheck(L_66);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)231), ((float)il2cpp_codegen_add(L_67, (1.0f))));
		RuntimeObject* L_68;
		L_68 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_68, 5, ((int32_t)2089301071));
		__this->___LUP1_33 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP1_33), (void*)L_69);
		RuntimeObject* L_70 = __this->___LUP1_33;
		NullCheck(L_70);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_70, ((int32_t)231), (0.0399999991f));
		goto IL_080d;
	}

IL_033f:
	{
		RuntimeObject* L_71;
		L_71 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, 5, ((int32_t)2089301072));
		__this->___LUP2_35 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP2_35), (void*)L_72);
		RuntimeObject* L_73 = __this->___LUP2_35;
		NullCheck(L_73);
		float L_74;
		L_74 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)231), (bool)1);
		__this->___LUP2_35_val = L_74;
		float L_75 = __this->___LUP2_35_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_76;
		L_76 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_75, (0.0f), NULL);
		if (!L_76)
		{
			goto IL_04db;
		}
	}
	{
		RuntimeObject* L_77;
		L_77 = FLASHREGION_get_MY_m73ED410FC08F78CDD46DE62B24846FCC118149BF_inline(__this, NULL);
		__this->___MY_37 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_37), (void*)L_77);
		RuntimeObject* L_78 = __this->___MY_37;
		RuntimeObject* L_79 = L_78;
		if (L_79)
		{
			G_B13_0 = L_79;
			G_B13_1 = __this;
			goto IL_039c;
		}
		G_B12_0 = L_79;
		G_B12_1 = __this;
	}
	{
		G_B14_0 = ((RuntimeObject*)(NULL));
		G_B14_1 = G_B12_1;
		goto IL_03a8;
	}

IL_039c:
	{
		NullCheck(G_B13_0);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B13_0, ((int32_t)198), (bool)1, (bool)1);
		G_B14_0 = L_80;
		G_B14_1 = G_B13_1;
	}

IL_03a8:
	{
		NullCheck(G_B14_1);
		G_B14_1->___temp_38 = G_B14_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B14_1->___temp_38), (void*)G_B14_0);
		RuntimeObject* L_81;
		L_81 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		RuntimeObject* L_82 = __this->___temp_38;
		NullCheck(L_81);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_81, ((int32_t)1038183092), L_82);
		RuntimeObject* L_83;
		L_83 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_83, ((int32_t)1038183092), (bool)0);
		__this->___IMPL_REGION2_41 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION2_41), (void*)L_84);
		RuntimeObject* L_85 = __this->___IMPL_REGION2_41;
		NullCheck(L_85);
		float L_86;
		L_86 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_85, ((int32_t)112), (bool)1);
		__this->___temp_42 = L_86;
		RuntimeObject* L_87;
		L_87 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_87);
		RuntimeObject* L_88;
		L_88 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_87, 5, ((int32_t)860287821));
		__this->___NAMBIENT2_43 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT2_43), (void*)L_88);
		RuntimeObject* L_89 = __this->___NAMBIENT2_43;
		float L_90 = __this->___temp_42;
		NullCheck(L_89);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)231), L_90);
		RuntimeObject* L_91;
		L_91 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_91);
		RuntimeObject* L_92;
		L_92 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_91, 5, ((int32_t)1246630219));
		__this->___LAMBIENT2_44 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT2_44), (void*)L_92);
		RuntimeObject* L_93;
		L_93 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_93);
		RuntimeObject* L_94;
		L_94 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_93, 5, ((int32_t)1246630219));
		__this->___LAMBIENT2_45 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT2_45), (void*)L_94);
		RuntimeObject* L_95 = __this->___LAMBIENT2_45;
		NullCheck(L_95);
		float L_96;
		L_96 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_95, ((int32_t)231), (bool)1);
		__this->___LAMBIENT2_45_val = L_96;
		RuntimeObject* L_97;
		L_97 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_97, 5, ((int32_t)860287821));
		__this->___NAMBIENT2_46 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT2_46), (void*)L_98);
		RuntimeObject* L_99 = __this->___NAMBIENT2_46;
		NullCheck(L_99);
		float L_100;
		L_100 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)231), (bool)1);
		__this->___NAMBIENT2_46_val = L_100;
		RuntimeObject* L_101 = __this->___LAMBIENT2_44;
		float L_102 = __this->___NAMBIENT2_46_val;
		NullCheck(L_101);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_101, ((int32_t)231), ((float)il2cpp_codegen_add(L_102, (1.0f))));
		RuntimeObject* L_103;
		L_103 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_103, 5, ((int32_t)2089301072));
		__this->___LUP2_50 = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP2_50), (void*)L_104);
		RuntimeObject* L_105 = __this->___LUP2_50;
		NullCheck(L_105);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_105, ((int32_t)231), (0.0399999991f));
		goto IL_080d;
	}

IL_04db:
	{
		RuntimeObject* L_106;
		L_106 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_106, 5, ((int32_t)2089301073));
		__this->___LUP3_52 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP3_52), (void*)L_107);
		RuntimeObject* L_108 = __this->___LUP3_52;
		NullCheck(L_108);
		float L_109;
		L_109 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_108, ((int32_t)231), (bool)1);
		__this->___LUP3_52_val = L_109;
		float L_110 = __this->___LUP3_52_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_110, (0.0f), NULL);
		if (!L_111)
		{
			goto IL_0677;
		}
	}
	{
		RuntimeObject* L_112;
		L_112 = FLASHREGION_get_MY_m73ED410FC08F78CDD46DE62B24846FCC118149BF_inline(__this, NULL);
		__this->___MY_54 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_54), (void*)L_112);
		RuntimeObject* L_113 = __this->___MY_54;
		RuntimeObject* L_114 = L_113;
		if (L_114)
		{
			G_B18_0 = L_114;
			G_B18_1 = __this;
			goto IL_0538;
		}
		G_B17_0 = L_114;
		G_B17_1 = __this;
	}
	{
		G_B19_0 = ((RuntimeObject*)(NULL));
		G_B19_1 = G_B17_1;
		goto IL_0544;
	}

IL_0538:
	{
		NullCheck(G_B18_0);
		RuntimeObject* L_115;
		L_115 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B18_0, ((int32_t)198), (bool)1, (bool)1);
		G_B19_0 = L_115;
		G_B19_1 = G_B18_1;
	}

IL_0544:
	{
		NullCheck(G_B19_1);
		G_B19_1->___temp_55 = G_B19_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B19_1->___temp_55), (void*)G_B19_0);
		RuntimeObject* L_116;
		L_116 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		RuntimeObject* L_117 = __this->___temp_55;
		NullCheck(L_116);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_116, ((int32_t)1038183093), L_117);
		RuntimeObject* L_118;
		L_118 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_118);
		RuntimeObject* L_119;
		L_119 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_118, ((int32_t)1038183093), (bool)0);
		__this->___IMPL_REGION3_58 = L_119;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION3_58), (void*)L_119);
		RuntimeObject* L_120 = __this->___IMPL_REGION3_58;
		NullCheck(L_120);
		float L_121;
		L_121 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_120, ((int32_t)112), (bool)1);
		__this->___temp_59 = L_121;
		RuntimeObject* L_122;
		L_122 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_122, 5, ((int32_t)860287822));
		__this->___NAMBIENT3_60 = L_123;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT3_60), (void*)L_123);
		RuntimeObject* L_124 = __this->___NAMBIENT3_60;
		float L_125 = __this->___temp_59;
		NullCheck(L_124);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_124, ((int32_t)231), L_125);
		RuntimeObject* L_126;
		L_126 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_126);
		RuntimeObject* L_127;
		L_127 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_126, 5, ((int32_t)1246630220));
		__this->___LAMBIENT3_61 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT3_61), (void*)L_127);
		RuntimeObject* L_128;
		L_128 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_128);
		RuntimeObject* L_129;
		L_129 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_128, 5, ((int32_t)1246630220));
		__this->___LAMBIENT3_62 = L_129;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT3_62), (void*)L_129);
		RuntimeObject* L_130 = __this->___LAMBIENT3_62;
		NullCheck(L_130);
		float L_131;
		L_131 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_130, ((int32_t)231), (bool)1);
		__this->___LAMBIENT3_62_val = L_131;
		RuntimeObject* L_132;
		L_132 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_132);
		RuntimeObject* L_133;
		L_133 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_132, 5, ((int32_t)860287822));
		__this->___NAMBIENT3_63 = L_133;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT3_63), (void*)L_133);
		RuntimeObject* L_134 = __this->___NAMBIENT3_63;
		NullCheck(L_134);
		float L_135;
		L_135 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_134, ((int32_t)231), (bool)1);
		__this->___NAMBIENT3_63_val = L_135;
		RuntimeObject* L_136 = __this->___LAMBIENT3_61;
		float L_137 = __this->___NAMBIENT3_63_val;
		NullCheck(L_136);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_136, ((int32_t)231), ((float)il2cpp_codegen_add(L_137, (1.0f))));
		RuntimeObject* L_138;
		L_138 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_138);
		RuntimeObject* L_139;
		L_139 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_138, 5, ((int32_t)2089301073));
		__this->___LUP3_67 = L_139;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP3_67), (void*)L_139);
		RuntimeObject* L_140 = __this->___LUP3_67;
		NullCheck(L_140);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_140, ((int32_t)231), (0.0399999991f));
		goto IL_080d;
	}

IL_0677:
	{
		RuntimeObject* L_141;
		L_141 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_141);
		RuntimeObject* L_142;
		L_142 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_141, 5, ((int32_t)2089301074));
		__this->___LUP4_69 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP4_69), (void*)L_142);
		RuntimeObject* L_143 = __this->___LUP4_69;
		NullCheck(L_143);
		float L_144;
		L_144 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_143, ((int32_t)231), (bool)1);
		__this->___LUP4_69_val = L_144;
		float L_145 = __this->___LUP4_69_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_146;
		L_146 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_145, (0.0f), NULL);
		if (L_146)
		{
			goto IL_06b9;
		}
	}
	{
		return (bool)0;
	}

IL_06b9:
	{
		RuntimeObject* L_147;
		L_147 = FLASHREGION_get_MY_m73ED410FC08F78CDD46DE62B24846FCC118149BF_inline(__this, NULL);
		__this->___MY_71 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_71), (void*)L_147);
		RuntimeObject* L_148 = __this->___MY_71;
		RuntimeObject* L_149 = L_148;
		if (L_149)
		{
			G_B24_0 = L_149;
			G_B24_1 = __this;
			goto IL_06d3;
		}
		G_B23_0 = L_149;
		G_B23_1 = __this;
	}
	{
		G_B25_0 = ((RuntimeObject*)(NULL));
		G_B25_1 = G_B23_1;
		goto IL_06df;
	}

IL_06d3:
	{
		NullCheck(G_B24_0);
		RuntimeObject* L_150;
		L_150 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B24_0, ((int32_t)198), (bool)1, (bool)1);
		G_B25_0 = L_150;
		G_B25_1 = G_B24_1;
	}

IL_06df:
	{
		NullCheck(G_B25_1);
		G_B25_1->___temp_72 = G_B25_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B25_1->___temp_72), (void*)G_B25_0);
		RuntimeObject* L_151;
		L_151 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		RuntimeObject* L_152 = __this->___temp_72;
		NullCheck(L_151);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_151, ((int32_t)1038183094), L_152);
		RuntimeObject* L_153;
		L_153 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_153);
		RuntimeObject* L_154;
		L_154 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_153, ((int32_t)1038183094), (bool)0);
		__this->___IMPL_REGION4_75 = L_154;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION4_75), (void*)L_154);
		RuntimeObject* L_155 = __this->___IMPL_REGION4_75;
		NullCheck(L_155);
		float L_156;
		L_156 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_155, ((int32_t)112), (bool)1);
		__this->___temp_76 = L_156;
		RuntimeObject* L_157;
		L_157 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_157);
		RuntimeObject* L_158;
		L_158 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_157, 5, ((int32_t)860287823));
		__this->___NAMBIENT4_77 = L_158;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT4_77), (void*)L_158);
		RuntimeObject* L_159 = __this->___NAMBIENT4_77;
		float L_160 = __this->___temp_76;
		NullCheck(L_159);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_159, ((int32_t)231), L_160);
		RuntimeObject* L_161;
		L_161 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_161);
		RuntimeObject* L_162;
		L_162 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_161, 5, ((int32_t)1246630221));
		__this->___LAMBIENT4_78 = L_162;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT4_78), (void*)L_162);
		RuntimeObject* L_163;
		L_163 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_163);
		RuntimeObject* L_164;
		L_164 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_163, 5, ((int32_t)1246630221));
		__this->___LAMBIENT4_79 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT4_79), (void*)L_164);
		RuntimeObject* L_165 = __this->___LAMBIENT4_79;
		NullCheck(L_165);
		float L_166;
		L_166 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_165, ((int32_t)231), (bool)1);
		__this->___LAMBIENT4_79_val = L_166;
		RuntimeObject* L_167;
		L_167 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_167);
		RuntimeObject* L_168;
		L_168 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_167, 5, ((int32_t)860287823));
		__this->___NAMBIENT4_80 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT4_80), (void*)L_168);
		RuntimeObject* L_169 = __this->___NAMBIENT4_80;
		NullCheck(L_169);
		float L_170;
		L_170 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_169, ((int32_t)231), (bool)1);
		__this->___NAMBIENT4_80_val = L_170;
		RuntimeObject* L_171 = __this->___LAMBIENT4_78;
		float L_172 = __this->___NAMBIENT4_80_val;
		NullCheck(L_171);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_171, ((int32_t)231), ((float)il2cpp_codegen_add(L_172, (1.0f))));
		RuntimeObject* L_173;
		L_173 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_173);
		RuntimeObject* L_174;
		L_174 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_173, 5, ((int32_t)2089301074));
		__this->___LUP4_84 = L_174;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP4_84), (void*)L_174);
		RuntimeObject* L_175 = __this->___LUP4_84;
		NullCheck(L_175);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_175, ((int32_t)231), (0.0399999991f));
	}

IL_080d:
	{
		RuntimeObject* L_176;
		L_176 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_176);
		RuntimeObject* L_177;
		L_177 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_176);
		RuntimeObject* L_178 = L_177;
		if (L_178)
		{
			G_B28_0 = L_178;
			G_B28_1 = __this;
			goto IL_0820;
		}
		G_B27_0 = L_178;
		G_B27_1 = __this;
	}
	{
		G_B29_0 = ((RuntimeObject*)(NULL));
		G_B29_1 = G_B27_1;
		goto IL_0829;
	}

IL_0820:
	{
		NullCheck(G_B28_0);
		RuntimeObject* L_179;
		L_179 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B28_0, ((int32_t)12), (bool)1, (bool)1);
		G_B29_0 = L_179;
		G_B29_1 = G_B28_1;
	}

IL_0829:
	{
		NullCheck(G_B29_1);
		G_B29_1->___temp_88 = G_B29_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B29_1->___temp_88), (void*)G_B29_0);
		RuntimeObject* L_180 = __this->___temp_88;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_181;
		L_181 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_180, (RuntimeObject*)NULL, NULL);
		if (!L_181)
		{
			goto IL_0871;
		}
	}
	{
		RuntimeObject* L_182;
		L_182 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_182);
		RuntimeObject* L_183;
		L_183 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_182);
		NullCheck(L_183);
		RuntimeObject* L_184;
		L_184 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_183, ((int32_t)1148133871), (bool)1, (bool)1);
		__this->___IMPLODELIGHT_89 = L_184;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPLODELIGHT_89), (void*)L_184);
		RuntimeObject* L_185;
		L_185 = FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_185);
		RuntimeObject* L_187 = __this->___IMPLODELIGHT_89;
		NullCheck(L_186);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_186, ((int32_t)12), L_187);
	}

IL_0871:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLODELIGHT_get_MY_m88227EC44CE3E3F749592F5FFEF228FDCF91F4B5 (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODELIGHT_set_MY_m852FAA683412B7D553E920A8414B4EBFFD403E01 (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLODELIGHT_get_THERE_mCCD18FD9A7D01F4459C0C208175C0399FDC5EA43 (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODELIGHT_set_THERE_mCCE7D08AF5758560DEE96A8BFC71FA68841E55E7 (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68 (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODELIGHT_set__world_m97F52BF864A90779FEB9154EEFC71BCAA45C4C8B (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLODELIGHT_get_Current_m043CB82869A5D82506EE4A4E0B5B441B92083418 (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODELIGHT_set_Current_mB6F1D7FBEA1633795F9315FAA706E5CAE13FB2BA (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODELIGHT_Reset_mE33C180D06C9A032C1FA35FBBD50E4DE570529BD (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODELIGHT__ctor_mE319D8701112A5BA2271C1E2210C0BFEE8651164 (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODELIGHT__ctor_mFD87C7D90A9CF21B827BA4FF28F15077959A53F4 (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		IMPLODELIGHT_set_MY_m852FAA683412B7D553E920A8414B4EBFFD403E01_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		IMPLODELIGHT_set_THERE_mCCE7D08AF5758560DEE96A8BFC71FA68841E55E7_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		IMPLODELIGHT_set__world_m97F52BF864A90779FEB9154EEFC71BCAA45C4C8B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMPLODELIGHT_MoveNext_m9184FC906260F1A999D986FD3169A980DF7ED192 (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)193463646));
		__this->___LUP_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___LUP_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___LUP_1_val = L_4;
		float L_5 = __this->___LUP_1_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_5, (0.0f), NULL);
		if (L_6)
		{
			goto IL_0266;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)193463646));
		__this->___LUP_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP_2), (void*)L_8);
		RuntimeObject* L_9 = __this->___LUP_2;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___LUP_2_val = L_10;
		RuntimeObject* L_11;
		L_11 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, ((int32_t)161611586), (bool)0);
		__this->___IMPL_REGION_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION_4), (void*)L_12);
		RuntimeObject* L_13 = __this->___IMPL_REGION_4;
		NullCheck(L_13);
		float L_14;
		L_14 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)112), (bool)1);
		__this->___temp_5 = L_14;
		RuntimeObject* L_15;
		L_15 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, ((int32_t)161611586), (bool)0);
		__this->___IMPL_REGION_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION_7), (void*)L_16);
		RuntimeObject* L_17 = __this->___IMPL_REGION_7;
		float L_18 = __this->___temp_5;
		float L_19 = __this->___LUP_2_val;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)112), ((float)il2cpp_codegen_add(L_18, L_19)));
		RuntimeObject* L_20;
		L_20 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, 5, ((int32_t)-482824455));
		__this->___LAMBIENT_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT_8), (void*)L_21);
		RuntimeObject* L_22 = __this->___LAMBIENT_8;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)231), (bool)1);
		__this->___LAMBIENT_8_val = L_23;
		RuntimeObject* L_24;
		L_24 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, ((int32_t)161611586), (bool)0);
		__this->___IMPL_REGION_10 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION_10), (void*)L_25);
		RuntimeObject* L_26 = __this->___IMPL_REGION_10;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)112), (bool)1);
		__this->___temp_11 = L_27;
		float L_28 = __this->___temp_11;
		float L_29 = __this->___LAMBIENT_8_val;
		bool L_30;
		L_30 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_28, L_29, NULL);
		if (L_30)
		{
			goto IL_01b1;
		}
	}
	{
		RuntimeObject* L_31;
		L_31 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, 5, ((int32_t)-1145284421));
		__this->___NAMBIENT_12 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT_12), (void*)L_32);
		RuntimeObject* L_33 = __this->___NAMBIENT_12;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)231), (bool)1);
		__this->___NAMBIENT_12_val = L_34;
		RuntimeObject* L_35;
		L_35 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, ((int32_t)161611586), (bool)0);
		__this->___IMPL_REGION_14 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION_14), (void*)L_36);
		RuntimeObject* L_37 = __this->___IMPL_REGION_14;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)112), (bool)1);
		__this->___temp_15 = L_38;
		float L_39 = __this->___temp_15;
		float L_40 = __this->___NAMBIENT_12_val;
		bool L_41;
		L_41 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_39, L_40, NULL);
		if (!L_41)
		{
			goto IL_0266;
		}
	}
	{
		goto IL_01e2;
	}

IL_01b1:
	{
		RuntimeObject* L_42;
		L_42 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_42, 5, ((int32_t)193463646));
		__this->___LUP_17 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP_17), (void*)L_43);
		RuntimeObject* L_44 = __this->___LUP_17;
		NullCheck(L_44);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)231), (-0.100000001f));
		goto IL_0266;
	}

IL_01e2:
	{
		RuntimeObject* L_45;
		L_45 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, 5, ((int32_t)-1145284421));
		__this->___NAMBIENT_18 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT_18), (void*)L_46);
		RuntimeObject* L_47 = __this->___NAMBIENT_18;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)231), (bool)1);
		__this->___NAMBIENT_18_val = L_48;
		RuntimeObject* L_49;
		L_49 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_49, ((int32_t)161611586), (bool)0);
		__this->___IMPL_REGION_20 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION_20), (void*)L_50);
		RuntimeObject* L_51 = __this->___IMPL_REGION_20;
		float L_52 = __this->___NAMBIENT_18_val;
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)112), L_52);
		RuntimeObject* L_53;
		L_53 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)193463646));
		__this->___LUP_22 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP_22), (void*)L_54);
		RuntimeObject* L_55 = __this->___LUP_22;
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)231), (0.0f));
	}

IL_0266:
	{
		RuntimeObject* L_56;
		L_56 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, 5, ((int32_t)2089301071));
		__this->___LUP1_24 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP1_24), (void*)L_57);
		RuntimeObject* L_58 = __this->___LUP1_24;
		NullCheck(L_58);
		float L_59;
		L_59 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)231), (bool)1);
		__this->___LUP1_24_val = L_59;
		float L_60 = __this->___LUP1_24_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_60, (0.0f), NULL);
		if (L_61)
		{
			goto IL_04c5;
		}
	}
	{
		RuntimeObject* L_62;
		L_62 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, 5, ((int32_t)2089301071));
		__this->___LUP1_25 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP1_25), (void*)L_63);
		RuntimeObject* L_64 = __this->___LUP1_25;
		NullCheck(L_64);
		float L_65;
		L_65 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)231), (bool)1);
		__this->___LUP1_25_val = L_65;
		RuntimeObject* L_66;
		L_66 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, ((int32_t)1038183091), (bool)0);
		__this->___IMPL_REGION1_27 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION1_27), (void*)L_67);
		RuntimeObject* L_68 = __this->___IMPL_REGION1_27;
		NullCheck(L_68);
		float L_69;
		L_69 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)112), (bool)1);
		__this->___temp_28 = L_69;
		RuntimeObject* L_70;
		L_70 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_70, ((int32_t)1038183091), (bool)0);
		__this->___IMPL_REGION1_30 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION1_30), (void*)L_71);
		RuntimeObject* L_72 = __this->___IMPL_REGION1_30;
		float L_73 = __this->___temp_28;
		float L_74 = __this->___LUP1_25_val;
		NullCheck(L_72);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)112), ((float)il2cpp_codegen_add(L_73, L_74)));
		RuntimeObject* L_75;
		L_75 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_75);
		RuntimeObject* L_76;
		L_76 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_75, 5, ((int32_t)1246630218));
		__this->___LAMBIENT1_31 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT1_31), (void*)L_76);
		RuntimeObject* L_77 = __this->___LAMBIENT1_31;
		NullCheck(L_77);
		float L_78;
		L_78 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_77, ((int32_t)231), (bool)1);
		__this->___LAMBIENT1_31_val = L_78;
		RuntimeObject* L_79;
		L_79 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_79, ((int32_t)1038183091), (bool)0);
		__this->___IMPL_REGION1_33 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION1_33), (void*)L_80);
		RuntimeObject* L_81 = __this->___IMPL_REGION1_33;
		NullCheck(L_81);
		float L_82;
		L_82 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_81, ((int32_t)112), (bool)1);
		__this->___temp_34 = L_82;
		float L_83 = __this->___temp_34;
		float L_84 = __this->___LAMBIENT1_31_val;
		bool L_85;
		L_85 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_83, L_84, NULL);
		if (L_85)
		{
			goto IL_0410;
		}
	}
	{
		RuntimeObject* L_86;
		L_86 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_86);
		RuntimeObject* L_87;
		L_87 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_86, 5, ((int32_t)860287820));
		__this->___NAMBIENT1_35 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT1_35), (void*)L_87);
		RuntimeObject* L_88 = __this->___NAMBIENT1_35;
		NullCheck(L_88);
		float L_89;
		L_89 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)231), (bool)1);
		__this->___NAMBIENT1_35_val = L_89;
		RuntimeObject* L_90;
		L_90 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_90);
		RuntimeObject* L_91;
		L_91 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_90, ((int32_t)1038183091), (bool)0);
		__this->___IMPL_REGION1_37 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION1_37), (void*)L_91);
		RuntimeObject* L_92 = __this->___IMPL_REGION1_37;
		NullCheck(L_92);
		float L_93;
		L_93 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)112), (bool)1);
		__this->___temp_38 = L_93;
		float L_94 = __this->___temp_38;
		float L_95 = __this->___NAMBIENT1_35_val;
		bool L_96;
		L_96 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_94, L_95, NULL);
		if (!L_96)
		{
			goto IL_04c5;
		}
	}
	{
		goto IL_0441;
	}

IL_0410:
	{
		RuntimeObject* L_97;
		L_97 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_97, 5, ((int32_t)2089301071));
		__this->___LUP1_40 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP1_40), (void*)L_98);
		RuntimeObject* L_99 = __this->___LUP1_40;
		NullCheck(L_99);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)231), (-0.100000001f));
		goto IL_04c5;
	}

IL_0441:
	{
		RuntimeObject* L_100;
		L_100 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_100, 5, ((int32_t)860287820));
		__this->___NAMBIENT1_41 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT1_41), (void*)L_101);
		RuntimeObject* L_102 = __this->___NAMBIENT1_41;
		NullCheck(L_102);
		float L_103;
		L_103 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)231), (bool)1);
		__this->___NAMBIENT1_41_val = L_103;
		RuntimeObject* L_104;
		L_104 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_104, ((int32_t)1038183091), (bool)0);
		__this->___IMPL_REGION1_43 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION1_43), (void*)L_105);
		RuntimeObject* L_106 = __this->___IMPL_REGION1_43;
		float L_107 = __this->___NAMBIENT1_41_val;
		NullCheck(L_106);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_106, ((int32_t)112), L_107);
		RuntimeObject* L_108;
		L_108 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_108);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_108, 5, ((int32_t)2089301071));
		__this->___LUP1_45 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP1_45), (void*)L_109);
		RuntimeObject* L_110 = __this->___LUP1_45;
		NullCheck(L_110);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)231), (0.0f));
	}

IL_04c5:
	{
		RuntimeObject* L_111;
		L_111 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_111);
		RuntimeObject* L_112;
		L_112 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_111, 5, ((int32_t)2089301072));
		__this->___LUP2_47 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP2_47), (void*)L_112);
		RuntimeObject* L_113 = __this->___LUP2_47;
		NullCheck(L_113);
		float L_114;
		L_114 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_113, ((int32_t)231), (bool)1);
		__this->___LUP2_47_val = L_114;
		float L_115 = __this->___LUP2_47_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_116;
		L_116 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_115, (0.0f), NULL);
		if (L_116)
		{
			goto IL_0724;
		}
	}
	{
		RuntimeObject* L_117;
		L_117 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_117);
		RuntimeObject* L_118;
		L_118 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_117, 5, ((int32_t)2089301072));
		__this->___LUP2_48 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP2_48), (void*)L_118);
		RuntimeObject* L_119 = __this->___LUP2_48;
		NullCheck(L_119);
		float L_120;
		L_120 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_119, ((int32_t)231), (bool)1);
		__this->___LUP2_48_val = L_120;
		RuntimeObject* L_121;
		L_121 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_121);
		RuntimeObject* L_122;
		L_122 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_121, ((int32_t)1038183092), (bool)0);
		__this->___IMPL_REGION2_50 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION2_50), (void*)L_122);
		RuntimeObject* L_123 = __this->___IMPL_REGION2_50;
		NullCheck(L_123);
		float L_124;
		L_124 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)112), (bool)1);
		__this->___temp_51 = L_124;
		RuntimeObject* L_125;
		L_125 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_125);
		RuntimeObject* L_126;
		L_126 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_125, ((int32_t)1038183092), (bool)0);
		__this->___IMPL_REGION2_53 = L_126;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION2_53), (void*)L_126);
		RuntimeObject* L_127 = __this->___IMPL_REGION2_53;
		float L_128 = __this->___temp_51;
		float L_129 = __this->___LUP2_48_val;
		NullCheck(L_127);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_127, ((int32_t)112), ((float)il2cpp_codegen_add(L_128, L_129)));
		RuntimeObject* L_130;
		L_130 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_130);
		RuntimeObject* L_131;
		L_131 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_130, 5, ((int32_t)1246630219));
		__this->___LAMBIENT2_54 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT2_54), (void*)L_131);
		RuntimeObject* L_132 = __this->___LAMBIENT2_54;
		NullCheck(L_132);
		float L_133;
		L_133 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_132, ((int32_t)231), (bool)1);
		__this->___LAMBIENT2_54_val = L_133;
		RuntimeObject* L_134;
		L_134 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_134);
		RuntimeObject* L_135;
		L_135 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_134, ((int32_t)1038183092), (bool)0);
		__this->___IMPL_REGION2_56 = L_135;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION2_56), (void*)L_135);
		RuntimeObject* L_136 = __this->___IMPL_REGION2_56;
		NullCheck(L_136);
		float L_137;
		L_137 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_136, ((int32_t)112), (bool)1);
		__this->___temp_57 = L_137;
		float L_138 = __this->___temp_57;
		float L_139 = __this->___LAMBIENT2_54_val;
		bool L_140;
		L_140 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_138, L_139, NULL);
		if (L_140)
		{
			goto IL_066f;
		}
	}
	{
		RuntimeObject* L_141;
		L_141 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_141);
		RuntimeObject* L_142;
		L_142 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_141, 5, ((int32_t)860287821));
		__this->___NAMBIENT2_58 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT2_58), (void*)L_142);
		RuntimeObject* L_143 = __this->___NAMBIENT2_58;
		NullCheck(L_143);
		float L_144;
		L_144 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_143, ((int32_t)231), (bool)1);
		__this->___NAMBIENT2_58_val = L_144;
		RuntimeObject* L_145;
		L_145 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_145);
		RuntimeObject* L_146;
		L_146 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_145, ((int32_t)1038183092), (bool)0);
		__this->___IMPL_REGION2_60 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION2_60), (void*)L_146);
		RuntimeObject* L_147 = __this->___IMPL_REGION2_60;
		NullCheck(L_147);
		float L_148;
		L_148 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_147, ((int32_t)112), (bool)1);
		__this->___temp_61 = L_148;
		float L_149 = __this->___temp_61;
		float L_150 = __this->___NAMBIENT2_58_val;
		bool L_151;
		L_151 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_149, L_150, NULL);
		if (!L_151)
		{
			goto IL_0724;
		}
	}
	{
		goto IL_06a0;
	}

IL_066f:
	{
		RuntimeObject* L_152;
		L_152 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_152);
		RuntimeObject* L_153;
		L_153 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_152, 5, ((int32_t)2089301072));
		__this->___LUP2_63 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP2_63), (void*)L_153);
		RuntimeObject* L_154 = __this->___LUP2_63;
		NullCheck(L_154);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_154, ((int32_t)231), (-0.100000001f));
		goto IL_0724;
	}

IL_06a0:
	{
		RuntimeObject* L_155;
		L_155 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_155);
		RuntimeObject* L_156;
		L_156 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_155, 5, ((int32_t)860287821));
		__this->___NAMBIENT2_64 = L_156;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT2_64), (void*)L_156);
		RuntimeObject* L_157 = __this->___NAMBIENT2_64;
		NullCheck(L_157);
		float L_158;
		L_158 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_157, ((int32_t)231), (bool)1);
		__this->___NAMBIENT2_64_val = L_158;
		RuntimeObject* L_159;
		L_159 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_159);
		RuntimeObject* L_160;
		L_160 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_159, ((int32_t)1038183092), (bool)0);
		__this->___IMPL_REGION2_66 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION2_66), (void*)L_160);
		RuntimeObject* L_161 = __this->___IMPL_REGION2_66;
		float L_162 = __this->___NAMBIENT2_64_val;
		NullCheck(L_161);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_161, ((int32_t)112), L_162);
		RuntimeObject* L_163;
		L_163 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_163);
		RuntimeObject* L_164;
		L_164 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_163, 5, ((int32_t)2089301072));
		__this->___LUP2_68 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP2_68), (void*)L_164);
		RuntimeObject* L_165 = __this->___LUP2_68;
		NullCheck(L_165);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_165, ((int32_t)231), (0.0f));
	}

IL_0724:
	{
		RuntimeObject* L_166;
		L_166 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_166);
		RuntimeObject* L_167;
		L_167 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_166, 5, ((int32_t)2089301073));
		__this->___LUP3_70 = L_167;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP3_70), (void*)L_167);
		RuntimeObject* L_168 = __this->___LUP3_70;
		NullCheck(L_168);
		float L_169;
		L_169 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_168, ((int32_t)231), (bool)1);
		__this->___LUP3_70_val = L_169;
		float L_170 = __this->___LUP3_70_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_171;
		L_171 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_170, (0.0f), NULL);
		if (L_171)
		{
			goto IL_0983;
		}
	}
	{
		RuntimeObject* L_172;
		L_172 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_172);
		RuntimeObject* L_173;
		L_173 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_172, 5, ((int32_t)2089301073));
		__this->___LUP3_71 = L_173;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP3_71), (void*)L_173);
		RuntimeObject* L_174 = __this->___LUP3_71;
		NullCheck(L_174);
		float L_175;
		L_175 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_174, ((int32_t)231), (bool)1);
		__this->___LUP3_71_val = L_175;
		RuntimeObject* L_176;
		L_176 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_176);
		RuntimeObject* L_177;
		L_177 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_176, ((int32_t)1038183093), (bool)0);
		__this->___IMPL_REGION3_73 = L_177;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION3_73), (void*)L_177);
		RuntimeObject* L_178 = __this->___IMPL_REGION3_73;
		NullCheck(L_178);
		float L_179;
		L_179 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_178, ((int32_t)112), (bool)1);
		__this->___temp_74 = L_179;
		RuntimeObject* L_180;
		L_180 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_180);
		RuntimeObject* L_181;
		L_181 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_180, ((int32_t)1038183093), (bool)0);
		__this->___IMPL_REGION3_76 = L_181;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION3_76), (void*)L_181);
		RuntimeObject* L_182 = __this->___IMPL_REGION3_76;
		float L_183 = __this->___temp_74;
		float L_184 = __this->___LUP3_71_val;
		NullCheck(L_182);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_182, ((int32_t)112), ((float)il2cpp_codegen_add(L_183, L_184)));
		RuntimeObject* L_185;
		L_185 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_185, 5, ((int32_t)1246630220));
		__this->___LAMBIENT3_77 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT3_77), (void*)L_186);
		RuntimeObject* L_187 = __this->___LAMBIENT3_77;
		NullCheck(L_187);
		float L_188;
		L_188 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_187, ((int32_t)231), (bool)1);
		__this->___LAMBIENT3_77_val = L_188;
		RuntimeObject* L_189;
		L_189 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_189);
		RuntimeObject* L_190;
		L_190 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_189, ((int32_t)1038183093), (bool)0);
		__this->___IMPL_REGION3_79 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION3_79), (void*)L_190);
		RuntimeObject* L_191 = __this->___IMPL_REGION3_79;
		NullCheck(L_191);
		float L_192;
		L_192 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_191, ((int32_t)112), (bool)1);
		__this->___temp_80 = L_192;
		float L_193 = __this->___temp_80;
		float L_194 = __this->___LAMBIENT3_77_val;
		bool L_195;
		L_195 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_193, L_194, NULL);
		if (L_195)
		{
			goto IL_08ce;
		}
	}
	{
		RuntimeObject* L_196;
		L_196 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_196);
		RuntimeObject* L_197;
		L_197 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_196, 5, ((int32_t)860287822));
		__this->___NAMBIENT3_81 = L_197;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT3_81), (void*)L_197);
		RuntimeObject* L_198 = __this->___NAMBIENT3_81;
		NullCheck(L_198);
		float L_199;
		L_199 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_198, ((int32_t)231), (bool)1);
		__this->___NAMBIENT3_81_val = L_199;
		RuntimeObject* L_200;
		L_200 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_200);
		RuntimeObject* L_201;
		L_201 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_200, ((int32_t)1038183093), (bool)0);
		__this->___IMPL_REGION3_83 = L_201;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION3_83), (void*)L_201);
		RuntimeObject* L_202 = __this->___IMPL_REGION3_83;
		NullCheck(L_202);
		float L_203;
		L_203 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_202, ((int32_t)112), (bool)1);
		__this->___temp_84 = L_203;
		float L_204 = __this->___temp_84;
		float L_205 = __this->___NAMBIENT3_81_val;
		bool L_206;
		L_206 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_204, L_205, NULL);
		if (!L_206)
		{
			goto IL_0983;
		}
	}
	{
		goto IL_08ff;
	}

IL_08ce:
	{
		RuntimeObject* L_207;
		L_207 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_207);
		RuntimeObject* L_208;
		L_208 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_207, 5, ((int32_t)2089301073));
		__this->___LUP3_86 = L_208;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP3_86), (void*)L_208);
		RuntimeObject* L_209 = __this->___LUP3_86;
		NullCheck(L_209);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_209, ((int32_t)231), (-0.100000001f));
		goto IL_0983;
	}

IL_08ff:
	{
		RuntimeObject* L_210;
		L_210 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_210);
		RuntimeObject* L_211;
		L_211 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_210, 5, ((int32_t)860287822));
		__this->___NAMBIENT3_87 = L_211;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT3_87), (void*)L_211);
		RuntimeObject* L_212 = __this->___NAMBIENT3_87;
		NullCheck(L_212);
		float L_213;
		L_213 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_212, ((int32_t)231), (bool)1);
		__this->___NAMBIENT3_87_val = L_213;
		RuntimeObject* L_214;
		L_214 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_214);
		RuntimeObject* L_215;
		L_215 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_214, ((int32_t)1038183093), (bool)0);
		__this->___IMPL_REGION3_89 = L_215;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION3_89), (void*)L_215);
		RuntimeObject* L_216 = __this->___IMPL_REGION3_89;
		float L_217 = __this->___NAMBIENT3_87_val;
		NullCheck(L_216);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_216, ((int32_t)112), L_217);
		RuntimeObject* L_218;
		L_218 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_218);
		RuntimeObject* L_219;
		L_219 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_218, 5, ((int32_t)2089301073));
		__this->___LUP3_91 = L_219;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP3_91), (void*)L_219);
		RuntimeObject* L_220 = __this->___LUP3_91;
		NullCheck(L_220);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_220, ((int32_t)231), (0.0f));
	}

IL_0983:
	{
		RuntimeObject* L_221;
		L_221 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_221);
		RuntimeObject* L_222;
		L_222 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_221, 5, ((int32_t)2089301074));
		__this->___LUP4_93 = L_222;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP4_93), (void*)L_222);
		RuntimeObject* L_223 = __this->___LUP4_93;
		NullCheck(L_223);
		float L_224;
		L_224 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_223, ((int32_t)231), (bool)1);
		__this->___LUP4_93_val = L_224;
		float L_225 = __this->___LUP4_93_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_226;
		L_226 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_225, (0.0f), NULL);
		if (L_226)
		{
			goto IL_0be2;
		}
	}
	{
		RuntimeObject* L_227;
		L_227 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_227);
		RuntimeObject* L_228;
		L_228 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_227, 5, ((int32_t)2089301074));
		__this->___LUP4_94 = L_228;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP4_94), (void*)L_228);
		RuntimeObject* L_229 = __this->___LUP4_94;
		NullCheck(L_229);
		float L_230;
		L_230 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_229, ((int32_t)231), (bool)1);
		__this->___LUP4_94_val = L_230;
		RuntimeObject* L_231;
		L_231 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_231);
		RuntimeObject* L_232;
		L_232 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_231, ((int32_t)1038183094), (bool)0);
		__this->___IMPL_REGION4_96 = L_232;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION4_96), (void*)L_232);
		RuntimeObject* L_233 = __this->___IMPL_REGION4_96;
		NullCheck(L_233);
		float L_234;
		L_234 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_233, ((int32_t)112), (bool)1);
		__this->___temp_97 = L_234;
		RuntimeObject* L_235;
		L_235 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_235);
		RuntimeObject* L_236;
		L_236 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_235, ((int32_t)1038183094), (bool)0);
		__this->___IMPL_REGION4_99 = L_236;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION4_99), (void*)L_236);
		RuntimeObject* L_237 = __this->___IMPL_REGION4_99;
		float L_238 = __this->___temp_97;
		float L_239 = __this->___LUP4_94_val;
		NullCheck(L_237);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_237, ((int32_t)112), ((float)il2cpp_codegen_add(L_238, L_239)));
		RuntimeObject* L_240;
		L_240 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_240);
		RuntimeObject* L_241;
		L_241 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_240, 5, ((int32_t)1246630221));
		__this->___LAMBIENT4_100 = L_241;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAMBIENT4_100), (void*)L_241);
		RuntimeObject* L_242 = __this->___LAMBIENT4_100;
		NullCheck(L_242);
		float L_243;
		L_243 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_242, ((int32_t)231), (bool)1);
		__this->___LAMBIENT4_100_val = L_243;
		RuntimeObject* L_244;
		L_244 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_244);
		RuntimeObject* L_245;
		L_245 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_244, ((int32_t)1038183094), (bool)0);
		__this->___IMPL_REGION4_102 = L_245;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION4_102), (void*)L_245);
		RuntimeObject* L_246 = __this->___IMPL_REGION4_102;
		NullCheck(L_246);
		float L_247;
		L_247 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_246, ((int32_t)112), (bool)1);
		__this->___temp_103 = L_247;
		float L_248 = __this->___temp_103;
		float L_249 = __this->___LAMBIENT4_100_val;
		bool L_250;
		L_250 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_248, L_249, NULL);
		if (L_250)
		{
			goto IL_0b2d;
		}
	}
	{
		RuntimeObject* L_251;
		L_251 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_251);
		RuntimeObject* L_252;
		L_252 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_251, 5, ((int32_t)860287823));
		__this->___NAMBIENT4_104 = L_252;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT4_104), (void*)L_252);
		RuntimeObject* L_253 = __this->___NAMBIENT4_104;
		NullCheck(L_253);
		float L_254;
		L_254 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_253, ((int32_t)231), (bool)1);
		__this->___NAMBIENT4_104_val = L_254;
		RuntimeObject* L_255;
		L_255 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_255);
		RuntimeObject* L_256;
		L_256 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_255, ((int32_t)1038183094), (bool)0);
		__this->___IMPL_REGION4_106 = L_256;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION4_106), (void*)L_256);
		RuntimeObject* L_257 = __this->___IMPL_REGION4_106;
		NullCheck(L_257);
		float L_258;
		L_258 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_257, ((int32_t)112), (bool)1);
		__this->___temp_107 = L_258;
		float L_259 = __this->___temp_107;
		float L_260 = __this->___NAMBIENT4_104_val;
		bool L_261;
		L_261 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_259, L_260, NULL);
		if (!L_261)
		{
			goto IL_0be2;
		}
	}
	{
		goto IL_0b5e;
	}

IL_0b2d:
	{
		RuntimeObject* L_262;
		L_262 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_262);
		RuntimeObject* L_263;
		L_263 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_262, 5, ((int32_t)2089301074));
		__this->___LUP4_109 = L_263;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP4_109), (void*)L_263);
		RuntimeObject* L_264 = __this->___LUP4_109;
		NullCheck(L_264);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_264, ((int32_t)231), (-0.100000001f));
		goto IL_0be2;
	}

IL_0b5e:
	{
		RuntimeObject* L_265;
		L_265 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_265);
		RuntimeObject* L_266;
		L_266 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_265, 5, ((int32_t)860287823));
		__this->___NAMBIENT4_110 = L_266;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NAMBIENT4_110), (void*)L_266);
		RuntimeObject* L_267 = __this->___NAMBIENT4_110;
		NullCheck(L_267);
		float L_268;
		L_268 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_267, ((int32_t)231), (bool)1);
		__this->___NAMBIENT4_110_val = L_268;
		RuntimeObject* L_269;
		L_269 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_269);
		RuntimeObject* L_270;
		L_270 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_269, ((int32_t)1038183094), (bool)0);
		__this->___IMPL_REGION4_112 = L_270;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL_REGION4_112), (void*)L_270);
		RuntimeObject* L_271 = __this->___IMPL_REGION4_112;
		float L_272 = __this->___NAMBIENT4_110_val;
		NullCheck(L_271);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_271, ((int32_t)112), L_272);
		RuntimeObject* L_273;
		L_273 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_273);
		RuntimeObject* L_274;
		L_274 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_273, 5, ((int32_t)2089301074));
		__this->___LUP4_114 = L_274;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP4_114), (void*)L_274);
		RuntimeObject* L_275 = __this->___LUP4_114;
		NullCheck(L_275);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_275, ((int32_t)231), (0.0f));
	}

IL_0be2:
	{
		RuntimeObject* L_276;
		L_276 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_276);
		RuntimeObject* L_277;
		L_277 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_276, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_116 = L_277;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_116), (void*)L_277);
		RuntimeObject* L_278 = __this->___CHECKENDFLAG_116;
		NullCheck(L_278);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_278, ((int32_t)231), (0.0f));
		RuntimeObject* L_279;
		L_279 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_279);
		RuntimeObject* L_280;
		L_280 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_279, 5, ((int32_t)193463646));
		__this->___LUP_118 = L_280;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP_118), (void*)L_280);
		RuntimeObject* L_281 = __this->___LUP_118;
		NullCheck(L_281);
		float L_282;
		L_282 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_281, ((int32_t)231), (bool)1);
		__this->___LUP_118_val = L_282;
		float L_283 = __this->___LUP_118_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_284;
		L_284 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_283, (0.0f), NULL);
		if (L_284)
		{
			goto IL_0caf;
		}
	}
	{
		RuntimeObject* L_285;
		L_285 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_285);
		RuntimeObject* L_286;
		L_286 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_285, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_120 = L_286;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_120), (void*)L_286);
		RuntimeObject* L_287 = __this->___CHECKENDFLAG_120;
		NullCheck(L_287);
		float L_288;
		L_288 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_287, ((int32_t)231), (bool)1);
		__this->___CHECKENDFLAG_120_val = L_288;
		RuntimeObject* L_289;
		L_289 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_289);
		RuntimeObject* L_290;
		L_290 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_289, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_121 = L_290;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_121), (void*)L_290);
		RuntimeObject* L_291 = __this->___CHECKENDFLAG_121;
		float L_292 = __this->___CHECKENDFLAG_120_val;
		NullCheck(L_291);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_291, ((int32_t)231), ((float)il2cpp_codegen_add(L_292, (1.0f))));
	}

IL_0caf:
	{
		RuntimeObject* L_293;
		L_293 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_293);
		RuntimeObject* L_294;
		L_294 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_293, 5, ((int32_t)2089301071));
		__this->___LUP1_123 = L_294;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP1_123), (void*)L_294);
		RuntimeObject* L_295 = __this->___LUP1_123;
		NullCheck(L_295);
		float L_296;
		L_296 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_295, ((int32_t)231), (bool)1);
		__this->___LUP1_123_val = L_296;
		float L_297 = __this->___LUP1_123_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_298;
		L_298 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_297, (0.0f), NULL);
		if (L_298)
		{
			goto IL_0d50;
		}
	}
	{
		RuntimeObject* L_299;
		L_299 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_299);
		RuntimeObject* L_300;
		L_300 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_299, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_125 = L_300;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_125), (void*)L_300);
		RuntimeObject* L_301 = __this->___CHECKENDFLAG_125;
		NullCheck(L_301);
		float L_302;
		L_302 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_301, ((int32_t)231), (bool)1);
		__this->___CHECKENDFLAG_125_val = L_302;
		RuntimeObject* L_303;
		L_303 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_303);
		RuntimeObject* L_304;
		L_304 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_303, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_126 = L_304;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_126), (void*)L_304);
		RuntimeObject* L_305 = __this->___CHECKENDFLAG_126;
		float L_306 = __this->___CHECKENDFLAG_125_val;
		NullCheck(L_305);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_305, ((int32_t)231), ((float)il2cpp_codegen_add(L_306, (1.0f))));
	}

IL_0d50:
	{
		RuntimeObject* L_307;
		L_307 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_307);
		RuntimeObject* L_308;
		L_308 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_307, 5, ((int32_t)2089301072));
		__this->___LUP2_128 = L_308;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP2_128), (void*)L_308);
		RuntimeObject* L_309 = __this->___LUP2_128;
		NullCheck(L_309);
		float L_310;
		L_310 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_309, ((int32_t)231), (bool)1);
		__this->___LUP2_128_val = L_310;
		float L_311 = __this->___LUP2_128_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_312;
		L_312 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_311, (0.0f), NULL);
		if (L_312)
		{
			goto IL_0df1;
		}
	}
	{
		RuntimeObject* L_313;
		L_313 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_313);
		RuntimeObject* L_314;
		L_314 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_313, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_130 = L_314;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_130), (void*)L_314);
		RuntimeObject* L_315 = __this->___CHECKENDFLAG_130;
		NullCheck(L_315);
		float L_316;
		L_316 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_315, ((int32_t)231), (bool)1);
		__this->___CHECKENDFLAG_130_val = L_316;
		RuntimeObject* L_317;
		L_317 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_317);
		RuntimeObject* L_318;
		L_318 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_317, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_131 = L_318;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_131), (void*)L_318);
		RuntimeObject* L_319 = __this->___CHECKENDFLAG_131;
		float L_320 = __this->___CHECKENDFLAG_130_val;
		NullCheck(L_319);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_319, ((int32_t)231), ((float)il2cpp_codegen_add(L_320, (1.0f))));
	}

IL_0df1:
	{
		RuntimeObject* L_321;
		L_321 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_321);
		RuntimeObject* L_322;
		L_322 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_321, 5, ((int32_t)2089301073));
		__this->___LUP3_133 = L_322;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP3_133), (void*)L_322);
		RuntimeObject* L_323 = __this->___LUP3_133;
		NullCheck(L_323);
		float L_324;
		L_324 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_323, ((int32_t)231), (bool)1);
		__this->___LUP3_133_val = L_324;
		float L_325 = __this->___LUP3_133_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_326;
		L_326 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_325, (0.0f), NULL);
		if (L_326)
		{
			goto IL_0e92;
		}
	}
	{
		RuntimeObject* L_327;
		L_327 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_327);
		RuntimeObject* L_328;
		L_328 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_327, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_135 = L_328;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_135), (void*)L_328);
		RuntimeObject* L_329 = __this->___CHECKENDFLAG_135;
		NullCheck(L_329);
		float L_330;
		L_330 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_329, ((int32_t)231), (bool)1);
		__this->___CHECKENDFLAG_135_val = L_330;
		RuntimeObject* L_331;
		L_331 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_331);
		RuntimeObject* L_332;
		L_332 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_331, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_136 = L_332;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_136), (void*)L_332);
		RuntimeObject* L_333 = __this->___CHECKENDFLAG_136;
		float L_334 = __this->___CHECKENDFLAG_135_val;
		NullCheck(L_333);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_333, ((int32_t)231), ((float)il2cpp_codegen_add(L_334, (1.0f))));
	}

IL_0e92:
	{
		RuntimeObject* L_335;
		L_335 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_335);
		RuntimeObject* L_336;
		L_336 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_335, 5, ((int32_t)2089301074));
		__this->___LUP4_138 = L_336;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LUP4_138), (void*)L_336);
		RuntimeObject* L_337 = __this->___LUP4_138;
		NullCheck(L_337);
		float L_338;
		L_338 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_337, ((int32_t)231), (bool)1);
		__this->___LUP4_138_val = L_338;
		float L_339 = __this->___LUP4_138_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_340;
		L_340 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_339, (0.0f), NULL);
		if (L_340)
		{
			goto IL_0f33;
		}
	}
	{
		RuntimeObject* L_341;
		L_341 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_341);
		RuntimeObject* L_342;
		L_342 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_341, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_140 = L_342;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_140), (void*)L_342);
		RuntimeObject* L_343 = __this->___CHECKENDFLAG_140;
		NullCheck(L_343);
		float L_344;
		L_344 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_343, ((int32_t)231), (bool)1);
		__this->___CHECKENDFLAG_140_val = L_344;
		RuntimeObject* L_345;
		L_345 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_345);
		RuntimeObject* L_346;
		L_346 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_345, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_141 = L_346;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_141), (void*)L_346);
		RuntimeObject* L_347 = __this->___CHECKENDFLAG_141;
		float L_348 = __this->___CHECKENDFLAG_140_val;
		NullCheck(L_347);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_347, ((int32_t)231), ((float)il2cpp_codegen_add(L_348, (1.0f))));
	}

IL_0f33:
	{
		RuntimeObject* L_349;
		L_349 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_349);
		RuntimeObject* L_350;
		L_350 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_349, 5, ((int32_t)-277466116));
		__this->___CHECKENDFLAG_143 = L_350;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHECKENDFLAG_143), (void*)L_350);
		RuntimeObject* L_351 = __this->___CHECKENDFLAG_143;
		NullCheck(L_351);
		float L_352;
		L_352 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_351, ((int32_t)231), (bool)1);
		__this->___CHECKENDFLAG_143_val = L_352;
		float L_353 = __this->___CHECKENDFLAG_143_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_354;
		L_354 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_353, (0.0f), NULL);
		if (!L_354)
		{
			goto IL_0f86;
		}
	}
	{
		RuntimeObject* L_355;
		L_355 = IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline(__this, NULL);
		NullCheck(L_355);
		RuntimeObject* L_356;
		L_356 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_355);
		NullCheck(L_356);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_356, ((int32_t)12), (RuntimeObject*)NULL);
	}

IL_0f86:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BOUNCE_set_MY_mEBB68FAC18D22350383C3AB7F05FF9986A09E651 (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BOUNCE_get_THERE_mC57D345F70729A4CE49B8D692B5F84E7B6AF022C (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BOUNCE_set_THERE_mBF2645AF9CD5F5662FFF716C263FEECBB62B21CD (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BOUNCE_get__world_mE11E649CEB9B5ED59CD7D160FD832C5BB733438D (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BOUNCE_set__world_m6709DA2AC28D0356A872BEBE4B98D302836128C5 (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BOUNCE_get_Current_mF083D3C4D959276EDFA04B814155A61CB4FB006A (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BOUNCE_set_Current_m66CEC9999F8266C3AA10F4D622E9340F75E95D61 (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BOUNCE_Reset_m573276EAAFB505C36C2D6C0956C8C9D065388817 (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BOUNCE__ctor_m92682BE20830A2A49381A5BA576120CA6516BD90 (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BOUNCE__ctor_m3DA041F1E43C02774A2A62713D8F3E9357BD09BC (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		BOUNCE_set_MY_mEBB68FAC18D22350383C3AB7F05FF9986A09E651_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		BOUNCE_set_THERE_mBF2645AF9CD5F5662FFF716C263FEECBB62B21CD_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		BOUNCE_set__world_m6709DA2AC28D0356A872BEBE4B98D302836128C5_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BOUNCE_MoveNext_m665C4523E59F6A6CD28544CB6BA0DBE65587F8D0 (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)174), (bool)1);
		__this->___temp_3 = L_3;
		float L_4 = __this->___temp_3;
		bool L_5;
		L_5 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_4, (-15.0f), NULL);
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	{
		RuntimeObject* L_6;
		L_6 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)194), (bool)1);
		__this->___temp_6 = L_8;
		RuntimeObject* L_9;
		L_9 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_8;
		float L_11 = __this->___temp_6;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)174), L_11);
	}

IL_0081:
	{
		RuntimeObject* L_12;
		L_12 = BOUNCE_get__world_mE11E649CEB9B5ED59CD7D160FD832C5BB733438D_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)850612860), (bool)1, (bool)1);
		__this->___GRAN02SND_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN02SND_9), (void*)L_14);
		RuntimeObject* L_15;
		L_15 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_11 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = BOUNCE_get__world_mE11E649CEB9B5ED59CD7D160FD832C5BB733438D_inline(__this, NULL);
		RuntimeObject* L_17 = __this->___GRAN02SND_9;
		RuntimeObject* L_18 = __this->___MY_11;
		NullCheck(L_16);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, L_17, (0.699999988f), L_18, (100.0f), (100.0f));
		RuntimeObject* L_19;
		L_19 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_14 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_14;
		NullCheck(L_20);
		float L_21;
		L_21 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)173), (bool)1);
		__this->___temp_15 = L_21;
		float L_22 = __this->___temp_15;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_22, (0.0f), NULL);
		if (L_23)
		{
			goto IL_01c8;
		}
	}
	{
		RuntimeObject* L_24;
		L_24 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_17 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_24);
		RuntimeObject* L_25;
		L_25 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_19 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_19), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_19;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)194), (bool)1);
		__this->___temp_20 = L_27;
		RuntimeObject* L_28;
		L_28 = BOUNCE_get__world_mE11E649CEB9B5ED59CD7D160FD832C5BB733438D_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, 5, ((int32_t)578));
		__this->___TWO_PI_21 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TWO_PI_21), (void*)L_29);
		RuntimeObject* L_30 = __this->___TWO_PI_21;
		NullCheck(L_30);
		float L_31;
		L_31 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)231), (bool)1);
		__this->___TWO_PI_21_val = L_31;
		RuntimeObject* L_32;
		L_32 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_24 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_24;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)174), (bool)1);
		__this->___temp_25 = L_34;
		RuntimeObject* L_35 = __this->___MY_17;
		float L_36 = __this->___TWO_PI_21_val;
		float L_37 = __this->___temp_25;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)194), ((float)il2cpp_codegen_subtract(L_36, L_37)));
		RuntimeObject* L_38;
		L_38 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_28 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_28), (void*)L_38);
		RuntimeObject* L_39 = __this->___MY_28;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)173), (0.0f));
		return (bool)0;
	}

IL_01c8:
	{
		RuntimeObject* L_40;
		L_40 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_30 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_40);
		RuntimeObject* L_41;
		L_41 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_32 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_41);
		RuntimeObject* L_42 = __this->___MY_32;
		NullCheck(L_42);
		float L_43;
		L_43 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)194), (bool)1);
		__this->___temp_33 = L_43;
		RuntimeObject* L_44;
		L_44 = BOUNCE_get__world_mE11E649CEB9B5ED59CD7D160FD832C5BB733438D_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, 5, ((int32_t)577));
		__this->___PI_34 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PI_34), (void*)L_45);
		RuntimeObject* L_46 = __this->___PI_34;
		NullCheck(L_46);
		float L_47;
		L_47 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)231), (bool)1);
		__this->___PI_34_val = L_47;
		RuntimeObject* L_48;
		L_48 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_37 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_37), (void*)L_48);
		RuntimeObject* L_49 = __this->___MY_37;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)174), (bool)1);
		__this->___temp_38 = L_50;
		RuntimeObject* L_51 = __this->___MY_30;
		float L_52 = __this->___PI_34_val;
		float L_53 = __this->___temp_38;
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)194), ((float)il2cpp_codegen_subtract(L_52, L_53)));
		RuntimeObject* L_54;
		L_54 = BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline(__this, NULL);
		__this->___MY_41 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_41), (void*)L_54);
		RuntimeObject* L_55 = __this->___MY_41;
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)173), (1.0f));
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550 (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FREEFALL_set_MY_m91019143B833AB45D80CFA4AE8BFA66483B1CD0B (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FREEFALL_get_THERE_mC3C97C7E8AFAA4A05009333C8E698627CC86CD64 (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FREEFALL_set_THERE_mD5E32B9FBE72EB7BD9DEF1DCA289DDDB2DAED685 (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21 (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FREEFALL_set__world_m6C3CDDDE6A19ABEC8D095C03735019B57F66F9C7 (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FREEFALL_get_Current_m03BE3AF6B5037F2E34C8A99DDA1C823636E04B32 (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FREEFALL_set_Current_m30EDA32519FB8773655BDADCFC8493155345C4E9 (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FREEFALL_Reset_mA1A8BFCCD484C3B4E1F11ED6FC2F4DCF7C0A62B5 (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FREEFALL__ctor_mB349CF601208FE9C2596868EFAEEBEFC941FD26C (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FREEFALL__ctor_m3D130FAD9A7F637D88722C04B88484B6F044192A (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		FREEFALL_set_MY_m91019143B833AB45D80CFA4AE8BFA66483B1CD0B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		FREEFALL_set_THERE_mD5E32B9FBE72EB7BD9DEF1DCA289DDDB2DAED685_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		FREEFALL_set__world_m6C3CDDDE6A19ABEC8D095C03735019B57F66F9C7_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FREEFALL_MoveNext_mE12E1E0ABE5865721DB080D615CF550BA5F9EA54 (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B7_0 = NULL;
	FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* G_B7_1 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* G_B6_1 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* G_B8_1 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* G_B10_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* G_B9_1 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* G_B11_1 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* G_B14_1 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* G_B13_1 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* G_B15_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)174), (bool)1);
		__this->___temp_3 = L_3;
		float L_4 = __this->___temp_3;
		bool L_5;
		L_5 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_4, (-15.0f), NULL);
		if (L_5)
		{
			goto IL_00dc;
		}
	}
	{
		RuntimeObject* L_6;
		L_6 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7;
		L_7 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_7), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_7;
		NullCheck(L_8);
		float L_9;
		L_9 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)174), (bool)1);
		__this->___temp_8 = L_9;
		RuntimeObject* L_10;
		L_10 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_10;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)174), (bool)1);
		__this->___temp_11 = L_12;
		RuntimeObject* L_13;
		L_13 = FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)578));
		__this->___TWO_PI_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TWO_PI_13), (void*)L_14);
		RuntimeObject* L_15 = __this->___TWO_PI_13;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)231), (bool)1);
		__this->___TWO_PI_13_val = L_16;
		RuntimeObject* L_17 = __this->___MY_5;
		float L_18 = __this->___temp_11;
		float L_19 = __this->___TWO_PI_13_val;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)174), ((float)il2cpp_codegen_subtract(L_18, L_19)));
	}

IL_00dc:
	{
		RuntimeObject* L_20;
		L_20 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_16 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_16), (void*)L_20);
		RuntimeObject* L_21 = __this->___MY_16;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)213), (bool)1);
		__this->___temp_17 = L_22;
		float L_23 = __this->___temp_17;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_23, (0.0f), NULL);
		if (L_24)
		{
			goto IL_0404;
		}
	}
	{
		RuntimeObject* L_25;
		L_25 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_20;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)169), (bool)1);
		__this->___temp_21 = L_27;
		RuntimeObject* L_28;
		L_28 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_23 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_23;
		float L_30 = __this->___temp_21;
		RuntimeObject* L_31;
		L_31 = FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21_inline(__this, NULL);
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker1< float, int32_t >::Invoke(14, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, ((int32_t)569));
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)169), ((float)il2cpp_codegen_add(L_30, ((float)il2cpp_codegen_multiply((-0.150000006f), L_32)))));
		RuntimeObject* L_33;
		L_33 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_25 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_33);
		RuntimeObject* L_34 = __this->___MY_25;
		NullCheck(L_34);
		float L_35;
		L_35 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)200), (bool)1);
		__this->___temp_26 = L_35;
		RuntimeObject* L_36;
		L_36 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_28 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_28), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_28;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)165), (bool)1);
		__this->___temp_29 = L_38;
		float L_39 = __this->___temp_29;
		float L_40 = __this->___temp_26;
		bool L_41;
		L_41 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_39, L_40, NULL);
		if (!L_41)
		{
			goto IL_01cb;
		}
	}
	{
		return (bool)0;
	}

IL_01cb:
	{
		RuntimeObject* L_42;
		L_42 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_31 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_42);
		RuntimeObject* L_43 = __this->___MY_31;
		RuntimeObject* L_44 = L_43;
		if (L_44)
		{
			G_B7_0 = L_44;
			G_B7_1 = __this;
			goto IL_01e5;
		}
		G_B6_0 = L_44;
		G_B6_1 = __this;
	}
	{
		G_B8_0 = ((RuntimeObject*)(NULL));
		G_B8_1 = G_B6_1;
		goto IL_01f1;
	}

IL_01e5:
	{
		NullCheck(G_B7_0);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B7_0, ((int32_t)198), (bool)1, (bool)1);
		G_B8_0 = L_45;
		G_B8_1 = G_B7_1;
	}

IL_01f1:
	{
		NullCheck(G_B8_1);
		G_B8_1->___temp_32 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___temp_32), (void*)G_B8_0);
		RuntimeObject* L_46;
		L_46 = FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21_inline(__this, NULL);
		RuntimeObject* L_47 = __this->___temp_32;
		NullCheck(L_46);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, ((int32_t)-1826215949), L_47);
		RuntimeObject* L_48;
		L_48 = FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, ((int32_t)-1826215949), (bool)0);
		__this->___WATER_REGION_36 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WATER_REGION_36), (void*)L_49);
		RuntimeObject* L_50 = __this->___WATER_REGION_36;
		RuntimeObject* L_51 = L_50;
		if (L_51)
		{
			G_B10_0 = L_51;
			G_B10_1 = __this;
			goto IL_0231;
		}
		G_B9_0 = L_51;
		G_B9_1 = __this;
	}
	{
		G_B11_0 = ((RuntimeObject*)(NULL));
		G_B11_1 = G_B9_1;
		goto IL_023d;
	}

IL_0231:
	{
		NullCheck(G_B10_0);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B10_0, ((int32_t)242), (bool)1, (bool)1);
		G_B11_0 = L_52;
		G_B11_1 = G_B10_1;
	}

IL_023d:
	{
		NullCheck(G_B11_1);
		G_B11_1->___temp_37 = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->___temp_37), (void*)G_B11_0);
		RuntimeObject* L_53 = __this->___temp_37;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_53, (RuntimeObject*)NULL, NULL);
		if (L_54)
		{
			goto IL_02aa;
		}
	}
	{
		RuntimeObject* L_55;
		L_55 = FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21_inline(__this, NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, ((int32_t)-1826215949), (bool)0);
		__this->___WATER_REGION_39 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WATER_REGION_39), (void*)L_56);
		RuntimeObject* L_57 = __this->___WATER_REGION_39;
		RuntimeObject* L_58 = L_57;
		if (L_58)
		{
			G_B14_0 = L_58;
			G_B14_1 = __this;
			goto IL_0275;
		}
		G_B13_0 = L_58;
		G_B13_1 = __this;
	}
	{
		G_B15_0 = ((RuntimeObject*)(NULL));
		G_B15_1 = G_B13_1;
		goto IL_0281;
	}

IL_0275:
	{
		NullCheck(G_B14_0);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B14_0, ((int32_t)234), (bool)1, (bool)1);
		G_B15_0 = L_59;
		G_B15_1 = G_B14_1;
	}

IL_0281:
	{
		NullCheck(G_B15_1);
		G_B15_1->___temp_40 = G_B15_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B15_1->___temp_40), (void*)G_B15_0);
		RuntimeObject* L_60;
		L_60 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_42 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_42), (void*)L_60);
		RuntimeObject* L_61 = __this->___MY_42;
		RuntimeObject* L_62 = __this->___temp_40;
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)198), L_62);
		return (bool)0;
	}

IL_02aa:
	{
		RuntimeObject* L_63;
		L_63 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_45 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_45), (void*)L_63);
		RuntimeObject* L_64 = __this->___MY_45;
		NullCheck(L_64);
		float L_65;
		L_65 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)169), (bool)1);
		__this->___temp_46 = L_65;
		float L_66 = __this->___temp_46;
		bool L_67;
		L_67 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_66, (-0.5f), NULL);
		if (L_67)
		{
			goto IL_03a1;
		}
	}
	{
		RuntimeObject* L_68;
		L_68 = FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21_inline(__this, NULL);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_68);
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)850612860), (bool)1, (bool)1);
		__this->___GRAN02SND_47 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN02SND_47), (void*)L_70);
		RuntimeObject* L_71;
		L_71 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_49 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_49), (void*)L_71);
		RuntimeObject* L_72;
		L_72 = FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21_inline(__this, NULL);
		RuntimeObject* L_73 = __this->___GRAN02SND_47;
		RuntimeObject* L_74 = __this->___MY_49;
		NullCheck(L_72);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_72, L_73, (0.699999988f), L_74, (100.0f), (100.0f));
		RuntimeObject* L_75;
		L_75 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_51 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_51), (void*)L_75);
		RuntimeObject* L_76;
		L_76 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_53 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_53), (void*)L_76);
		RuntimeObject* L_77 = __this->___MY_53;
		NullCheck(L_77);
		float L_78;
		L_78 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_77, ((int32_t)169), (bool)1);
		__this->___temp_54 = L_78;
		RuntimeObject* L_79;
		L_79 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_56 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_56), (void*)L_79);
		RuntimeObject* L_80 = __this->___MY_56;
		NullCheck(L_80);
		float L_81;
		L_81 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_80, ((int32_t)169), (bool)1);
		__this->___temp_57 = L_81;
		RuntimeObject* L_82 = __this->___MY_51;
		float L_83 = __this->___temp_57;
		NullCheck(L_82);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_82, ((int32_t)169), ((float)il2cpp_codegen_multiply(L_83, (-0.200000003f))));
		return (bool)0;
	}

IL_03a1:
	{
		RuntimeObject* L_84;
		L_84 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_63 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_63), (void*)L_84);
		RuntimeObject* L_85 = __this->___MY_63;
		NullCheck(L_85);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_85, ((int32_t)213), (0.0f));
		RuntimeObject* L_86;
		L_86 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_66 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_66), (void*)L_86);
		RuntimeObject* L_87 = __this->___MY_66;
		NullCheck(L_87);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_87, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_88;
		L_88 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_69 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_69), (void*)L_88);
		RuntimeObject* L_89 = __this->___MY_69;
		NullCheck(L_89);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)169), (0.0f));
	}

IL_0404:
	{
		RuntimeObject* L_90;
		L_90 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_71 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_71), (void*)L_90);
		RuntimeObject* L_91;
		L_91 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_73 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_73), (void*)L_91);
		RuntimeObject* L_92 = __this->___MY_73;
		NullCheck(L_92);
		float L_93;
		L_93 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)168), (bool)1);
		__this->___temp_74 = L_93;
		RuntimeObject* L_94;
		L_94 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_76 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_76), (void*)L_94);
		RuntimeObject* L_95 = __this->___MY_76;
		NullCheck(L_95);
		float L_96;
		L_96 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_95, ((int32_t)168), (bool)1);
		__this->___temp_77 = L_96;
		RuntimeObject* L_97 = __this->___MY_71;
		float L_98 = __this->___temp_77;
		NullCheck(L_97);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_97, ((int32_t)168), ((float)il2cpp_codegen_multiply(L_98, (0.699999988f))));
		RuntimeObject* L_99;
		L_99 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_82 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_82), (void*)L_99);
		RuntimeObject* L_100 = __this->___MY_82;
		NullCheck(L_100);
		float L_101;
		L_101 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)168), (bool)1);
		__this->___temp_83 = L_101;
		float L_102 = __this->___temp_83;
		bool L_103;
		L_103 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_102, (0.100000001f), NULL);
		if (L_103)
		{
			goto IL_04a9;
		}
	}
	{
		return (bool)0;
	}

IL_04a9:
	{
		RuntimeObject* L_104;
		L_104 = FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21_inline(__this, NULL);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_104);
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_105, ((int32_t)1197168406), (bool)1, (bool)1);
		__this->___GRAN0TEX_84 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN0TEX_84), (void*)L_106);
		RuntimeObject* L_107;
		L_107 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_86 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_86), (void*)L_107);
		RuntimeObject* L_108 = __this->___MY_86;
		RuntimeObject* L_109 = __this->___GRAN0TEX_84;
		NullCheck(L_108);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_108, ((int32_t)164), L_109);
		RuntimeObject* L_110;
		L_110 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_89 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_89), (void*)L_110);
		RuntimeObject* L_111 = __this->___MY_89;
		NullCheck(L_111);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_111, ((int32_t)168), (0.0f));
		RuntimeObject* L_112;
		L_112 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_92 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_92), (void*)L_112);
		RuntimeObject* L_113 = __this->___MY_92;
		NullCheck(L_113);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_113, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_114;
		L_114 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_95 = L_114;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_95), (void*)L_114);
		RuntimeObject* L_115 = __this->___MY_95;
		NullCheck(L_115);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_115, ((int32_t)177), (32.0f));
		RuntimeObject* L_116;
		L_116 = FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21_inline(__this, NULL);
		NullCheck(L_116);
		RuntimeObject* L_117;
		L_117 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_116);
		NullCheck(L_117);
		RuntimeObject* L_118;
		L_118 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_117, ((int32_t)278490127), (bool)1, (bool)1);
		__this->___EXPLOSIONTIMER_96 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSIONTIMER_96), (void*)L_118);
		RuntimeObject* L_119;
		L_119 = FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline(__this, NULL);
		__this->___MY_98 = L_119;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_98), (void*)L_119);
		RuntimeObject* L_120 = __this->___MY_98;
		RuntimeObject* L_121 = __this->___EXPLOSIONTIMER_96;
		NullCheck(L_120);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_120, ((int32_t)189), L_121);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONTIMER_get_MY_m7B94AB843F9BB6EB1FBEFACE9C8034C2DC4888B8 (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONTIMER_set_MY_m9B0130BBA0EB8D221FB9DB31F491AD0C88D8B64B (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONTIMER_get_THERE_m2260EC3D1178643A2C17C06CDAEDC079F7023E65 (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONTIMER_set_THERE_m65E49EEB268D940CDB82EE9DD8467F0747032108 (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONTIMER_get__world_m791CAB2FE5CDB230AD69C94CB561273F1123CC3B (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONTIMER_set__world_m728B2E7FD65DE6A3F5F5FF0D2FD84A0AF0759183 (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONTIMER_get_Current_m12EDB7A3DC995E3B4E260DE45A635B8693FB43AD (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONTIMER_set_Current_m49C8C30234E7D99BD90E2F5220CDC1A1C7937E01 (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONTIMER_Reset_m61F5F6157E6908B55B99052825ED870D1E282F69 (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONTIMER__ctor_mC71FA6EC565C8C0F2858A3A9BC2A7BF92F214CAB (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONTIMER__ctor_m998E2E475A94B7DCA20933A46034D07B131D204A (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		EXPLOSIONTIMER_set_MY_m9B0130BBA0EB8D221FB9DB31F491AD0C88D8B64B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		EXPLOSIONTIMER_set_THERE_m65E49EEB268D940CDB82EE9DD8467F0747032108_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		EXPLOSIONTIMER_set__world_m728B2E7FD65DE6A3F5F5FF0D2FD84A0AF0759183_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EXPLOSIONTIMER_MoveNext_m5D735177A975131816B62B36657DB41C943EEB94 (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = EXPLOSIONTIMER_get_MY_m7B94AB843F9BB6EB1FBEFACE9C8034C2DC4888B8_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)177), (bool)1);
		__this->___temp_3 = L_3;
		RuntimeObject* L_4;
		L_4 = EXPLOSIONTIMER_get_MY_m7B94AB843F9BB6EB1FBEFACE9C8034C2DC4888B8_inline(__this, NULL);
		__this->___MY_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_4);
		RuntimeObject* L_5 = __this->___MY_5;
		float L_6 = __this->___temp_3;
		RuntimeObject* L_7;
		L_7 = EXPLOSIONTIMER_get__world_m791CAB2FE5CDB230AD69C94CB561273F1123CC3B_inline(__this, NULL);
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker1< float, int32_t >::Invoke(14, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, ((int32_t)569));
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)177), ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply((-1.0f), L_8)))));
		RuntimeObject* L_9;
		L_9 = EXPLOSIONTIMER_get_MY_m7B94AB843F9BB6EB1FBEFACE9C8034C2DC4888B8_inline(__this, NULL);
		__this->___MY_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_8;
		NullCheck(L_10);
		float L_11;
		L_11 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)177), (bool)1);
		__this->___temp_9 = L_11;
		float L_12 = __this->___temp_9;
		bool L_13;
		L_13 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_12, (0.0f), NULL);
		if (!L_13)
		{
			goto IL_009a;
		}
	}
	{
		return (bool)0;
	}

IL_009a:
	{
		RuntimeObject* L_14;
		L_14 = EXPLOSIONTIMER_get_MY_m7B94AB843F9BB6EB1FBEFACE9C8034C2DC4888B8_inline(__this, NULL);
		__this->___MY_12 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_12), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_12;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_16;
		L_16 = EXPLOSIONTIMER_get__world_m791CAB2FE5CDB230AD69C94CB561273F1123CC3B_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)-425949196), (bool)1, (bool)1);
		__this->___EXPLODEMISSILE_13 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLODEMISSILE_13), (void*)L_18);
		RuntimeObject* L_19;
		L_19 = EXPLOSIONTIMER_get_MY_m7B94AB843F9BB6EB1FBEFACE9C8034C2DC4888B8_inline(__this, NULL);
		__this->___MY_15 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_15), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_15;
		RuntimeObject* L_21 = __this->___EXPLODEMISSILE_13;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)190), L_21);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* INIT_MOVE_get_MY_m503B017D4817455D214D985150216BFBBC051D5C (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void INIT_MOVE_set_MY_m45C49690AE5B2741679D0E92DB80F7AEC4E480D6 (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* INIT_MOVE_get_THERE_m30B7EED392AE7A6B2968D1FEEE1F094C0595AE2B (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void INIT_MOVE_set_THERE_m20B5497093084A6CC17B6DB8EFA2BE104C860CE0 (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* INIT_MOVE_get__world_mCA619BB1318F3A4A6391B137CABF39F0CE9DCCFF (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void INIT_MOVE_set__world_m6D0503719AA9A7A3711BB31D12050DF2D228C6C4 (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* INIT_MOVE_get_Current_m9BF02D02BCD2765C03D74229C4AE9BB2A342CD93 (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void INIT_MOVE_set_Current_m94E539F97E298450ED0ADF02E686A513DB536F3B (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void INIT_MOVE_Reset_mD6991854EF5D8143204563760F76E8244B64D462 (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void INIT_MOVE__ctor_mBD431557B6BE601ED5EDA4C6D31B97668673879C (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void INIT_MOVE__ctor_mD091E61528BD88181E028960F189DA2325FD3863 (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		INIT_MOVE_set_MY_m45C49690AE5B2741679D0E92DB80F7AEC4E480D6_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		INIT_MOVE_set_THERE_m20B5497093084A6CC17B6DB8EFA2BE104C860CE0_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		INIT_MOVE_set__world_m6D0503719AA9A7A3711BB31D12050DF2D228C6C4_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool INIT_MOVE_MoveNext_m204BBE48CCD7FECC8796A245AD87CB02AFB58D0A (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = INIT_MOVE_get__world_mCA619BB1318F3A4A6391B137CABF39F0CE9DCCFF_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-1023981992));
		__this->___MODE_GEHEN_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_GEHEN_0), (void*)L_2);
		RuntimeObject* L_3 = __this->___MODE_GEHEN_0;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___MODE_GEHEN_0_val = L_4;
		RuntimeObject* L_5;
		L_5 = INIT_MOVE_get__world_mCA619BB1318F3A4A6391B137CABF39F0CE9DCCFF_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)-1052624291));
		__this->___MOVING_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_1), (void*)L_6);
		RuntimeObject* L_7 = __this->___MOVING_1;
		float L_8 = __this->___MODE_GEHEN_0_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), L_8);
		SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* L_9 = (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221*)il2cpp_codegen_object_new(SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221_il2cpp_TypeInfo_var);
		SET_MOVING__ctor_m514B80647FB350BFB8AEDE9DF857BB701A7DF0C4(L_9, NULL);
		V_0 = L_9;
		SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* L_10 = V_0;
		SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* L_11 = L_10;
		RuntimeObject* L_12;
		L_12 = INIT_MOVE_get_MY_m503B017D4817455D214D985150216BFBBC051D5C_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_11, L_12);
		SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* L_13 = L_11;
		RuntimeObject* L_14;
		L_14 = INIT_MOVE_get_THERE_m30B7EED392AE7A6B2968D1FEEE1F094C0595AE2B_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_14);
		RuntimeObject* L_15;
		L_15 = INIT_MOVE_get__world_mCA619BB1318F3A4A6391B137CABF39F0CE9DCCFF_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_15);
		RuntimeObject* L_16;
		L_16 = INIT_MOVE_get__world_mCA619BB1318F3A4A6391B137CABF39F0CE9DCCFF_inline(__this, NULL);
		SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* L_17 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_17);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MOVE_ME_get_MY_m0053EF71C5738AF3A512F406578B3FC59349A529 (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOVE_ME_set_MY_m3A9EE516584DE20C2D8A3AB64C26ECE4121272B7 (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MOVE_ME_get_THERE_mCE93708E1D1E4BC77FD49C157F1002DDA5621FFD (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOVE_ME_set_THERE_mCBD1EAF696B2EF19E240FA12EB696E58A3E9B262 (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65 (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOVE_ME_set__world_mD0D95E6CCE339020B64F749B00AAC78BC8C76D16 (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MOVE_ME_get_Current_mBAC62E9F0A4C1D0C620D1788A9D695DC8416C135 (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOVE_ME_set_Current_m71BA9E77507AC15AE2245798F8067E4318E2554D (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOVE_ME_Reset_m3E1B6C03DAB725C49BBDF3A1E6FF7D29879BFF41 (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOVE_ME__ctor_m45A8514B39CFB9553B7677E145315848E20E1076 (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOVE_ME__ctor_mDE4C46EE443B23606F61297B23DCF1601D3BE1F6 (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		MOVE_ME_set_MY_m3A9EE516584DE20C2D8A3AB64C26ECE4121272B7_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		MOVE_ME_set_THERE_mCBD1EAF696B2EF19E240FA12EB696E58A3E9B262_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		MOVE_ME_set__world_mD0D95E6CCE339020B64F749B00AAC78BC8C76D16_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MOVE_ME_MoveNext_mB1DC5A6BA08EB10F63056219E6C7B3CD2A11E0CC (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* V_0 = NULL;
	SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* V_1 = NULL;
	HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* V_2 = NULL;
	RuntimeObject* G_B30_0 = NULL;
	MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* G_B30_1 = NULL;
	RuntimeObject* G_B29_0 = NULL;
	MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* G_B29_1 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* G_B31_1 = NULL;
	RuntimeObject* G_B41_0 = NULL;
	MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* G_B41_1 = NULL;
	RuntimeObject* G_B40_0 = NULL;
	MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* G_B40_1 = NULL;
	RuntimeObject* G_B42_0 = NULL;
	MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* G_B42_1 = NULL;
	RuntimeObject* G_B45_0 = NULL;
	MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* G_B45_1 = NULL;
	RuntimeObject* G_B44_0 = NULL;
	MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* G_B44_1 = NULL;
	RuntimeObject* G_B46_0 = NULL;
	MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* G_B46_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
	}

IL_0007:
	{
		RuntimeObject* L_1;
		L_1 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-1023981992));
		__this->___MODE_GEHEN_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_GEHEN_0), (void*)L_2);
		RuntimeObject* L_3 = __this->___MODE_GEHEN_0;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___MODE_GEHEN_0_val = L_4;
		RuntimeObject* L_5;
		L_5 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)-1052624291));
		__this->___MOVING_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_1), (void*)L_6);
		RuntimeObject* L_7 = __this->___MOVING_1;
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), (bool)1);
		__this->___MOVING_1_val = L_8;
		float L_9 = __this->___MOVING_1_val;
		float L_10 = __this->___MODE_GEHEN_0_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_013d;
		}
	}
	{
		RuntimeObject* L_12;
		L_12 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_2), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_3), (void*)L_15);
		RuntimeObject* L_16 = __this->___PLAYER_SIZE_3;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_3_val = L_17;
		RuntimeObject* L_18;
		L_18 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, 5, ((int32_t)25486605));
		__this->___MY_SIZE_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_SIZE_4), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_SIZE_4;
		NullCheck(L_20);
		float L_21;
		L_21 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)231), (bool)1);
		__this->___MY_SIZE_4_val = L_21;
		RuntimeObject* L_22;
		L_22 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_22, 5, ((int32_t)427));
		__this->___WALK_8 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WALK_8), (void*)L_23);
		RuntimeObject* L_24 = __this->___WALK_8;
		NullCheck(L_24);
		float L_25;
		L_25 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)231), (bool)1);
		__this->___WALK_8_val = L_25;
		RuntimeObject* L_26 = __this->___PLAYER_SIZE_2;
		float L_27 = __this->___MY_SIZE_4_val;
		float L_28 = __this->___WALK_8_val;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply((0.150000006f), L_28)))));
	}

IL_013d:
	{
		RuntimeObject* L_29;
		L_29 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, 5, ((int32_t)-539849892));
		__this->___MODE_SCHWIMMEN_9 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_SCHWIMMEN_9), (void*)L_30);
		RuntimeObject* L_31 = __this->___MODE_SCHWIMMEN_9;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), (bool)1);
		__this->___MODE_SCHWIMMEN_9_val = L_32;
		RuntimeObject* L_33;
		L_33 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)-1052624291));
		__this->___MOVING_10 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_10), (void*)L_34);
		RuntimeObject* L_35 = __this->___MOVING_10;
		NullCheck(L_35);
		float L_36;
		L_36 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), (bool)1);
		__this->___MOVING_10_val = L_36;
		float L_37 = __this->___MOVING_10_val;
		float L_38 = __this->___MODE_SCHWIMMEN_9_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_37, L_38, NULL);
		if (!L_39)
		{
			goto IL_0244;
		}
	}
	{
		RuntimeObject* L_40;
		L_40 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_40, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_11 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_11), (void*)L_41);
		RuntimeObject* L_42;
		L_42 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_42, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_12 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_12), (void*)L_43);
		RuntimeObject* L_44 = __this->___PLAYER_SIZE_12;
		NullCheck(L_44);
		float L_45;
		L_45 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_12_val = L_45;
		RuntimeObject* L_46;
		L_46 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, 5, ((int32_t)428));
		__this->___WAVE_17 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAVE_17), (void*)L_47);
		RuntimeObject* L_48 = __this->___WAVE_17;
		NullCheck(L_48);
		float L_49;
		L_49 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)231), (bool)1);
		__this->___WAVE_17_val = L_49;
		RuntimeObject* L_50 = __this->___PLAYER_SIZE_11;
		float L_51 = __this->___WAVE_17_val;
		NullCheck(L_50);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)231), ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply((0.119999997f), L_51)))));
	}

IL_0244:
	{
		RuntimeObject* L_52;
		L_52 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, 5, ((int32_t)1042033433));
		__this->___MODE_TAUCHEN_18 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_TAUCHEN_18), (void*)L_53);
		RuntimeObject* L_54 = __this->___MODE_TAUCHEN_18;
		NullCheck(L_54);
		float L_55;
		L_55 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)231), (bool)1);
		__this->___MODE_TAUCHEN_18_val = L_55;
		RuntimeObject* L_56;
		L_56 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, 5, ((int32_t)-1052624291));
		__this->___MOVING_19 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_19), (void*)L_57);
		RuntimeObject* L_58 = __this->___MOVING_19;
		NullCheck(L_58);
		float L_59;
		L_59 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)231), (bool)1);
		__this->___MOVING_19_val = L_59;
		float L_60 = __this->___MOVING_19_val;
		float L_61 = __this->___MODE_TAUCHEN_18_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_60, L_61, NULL);
		if (!L_62)
		{
			goto IL_030d;
		}
	}
	{
		RuntimeObject* L_63;
		L_63 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_20 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_20), (void*)L_64);
		RuntimeObject* L_65;
		L_65 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_65, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_21 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_21), (void*)L_66);
		RuntimeObject* L_67 = __this->___PLAYER_SIZE_21;
		NullCheck(L_67);
		float L_68;
		L_68 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_67, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_21_val = L_68;
		RuntimeObject* L_69 = __this->___PLAYER_SIZE_20;
		NullCheck(L_69);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)231), (1.0f));
	}

IL_030d:
	{
		RuntimeObject* L_70;
		L_70 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_70, 5, ((int32_t)-1027546889));
		__this->___MODE_DEATH_23 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_DEATH_23), (void*)L_71);
		RuntimeObject* L_72 = __this->___MODE_DEATH_23;
		NullCheck(L_72);
		float L_73;
		L_73 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)231), (bool)1);
		__this->___MODE_DEATH_23_val = L_73;
		RuntimeObject* L_74;
		L_74 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_74, 5, ((int32_t)-1052624291));
		__this->___MOVING_24 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_24), (void*)L_75);
		RuntimeObject* L_76 = __this->___MOVING_24;
		NullCheck(L_76);
		float L_77;
		L_77 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)231), (bool)1);
		__this->___MOVING_24_val = L_77;
		float L_78 = __this->___MOVING_24_val;
		float L_79 = __this->___MODE_DEATH_23_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_78, L_79, NULL);
		if (!L_80)
		{
			goto IL_040e;
		}
	}
	{
		RuntimeObject* L_81;
		L_81 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_81);
		RuntimeObject* L_82;
		L_82 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_81, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_25 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_25), (void*)L_82);
		RuntimeObject* L_83;
		L_83 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_83, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_26 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_26), (void*)L_84);
		RuntimeObject* L_85 = __this->___PLAYER_SIZE_26;
		NullCheck(L_85);
		float L_86;
		L_86 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_85, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_26_val = L_86;
		RuntimeObject* L_87;
		L_87 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_87);
		RuntimeObject* L_88;
		L_88 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_87, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_27 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_27), (void*)L_88);
		RuntimeObject* L_89 = __this->___PLAYER_SIZE_27;
		NullCheck(L_89);
		float L_90;
		L_90 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_27_val = L_90;
		RuntimeObject* L_91 = __this->___PLAYER_SIZE_25;
		float L_92 = __this->___PLAYER_SIZE_27_val;
		NullCheck(L_91);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_91, ((int32_t)231), ((float)il2cpp_codegen_multiply(L_92, (0.899999976f))));
	}

IL_040e:
	{
		RuntimeObject* L_93;
		L_93 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_93);
		RuntimeObject* L_94;
		L_94 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_93, 5, ((int32_t)-1023981992));
		__this->___MODE_GEHEN_30 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_GEHEN_30), (void*)L_94);
		RuntimeObject* L_95 = __this->___MODE_GEHEN_30;
		NullCheck(L_95);
		float L_96;
		L_96 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_95, ((int32_t)231), (bool)1);
		__this->___MODE_GEHEN_30_val = L_96;
		RuntimeObject* L_97;
		L_97 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_97, 5, ((int32_t)-1052624291));
		__this->___MOVING_31 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_31), (void*)L_98);
		RuntimeObject* L_99 = __this->___MOVING_31;
		NullCheck(L_99);
		float L_100;
		L_100 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)231), (bool)1);
		__this->___MOVING_31_val = L_100;
		float L_101 = __this->___MOVING_31_val;
		float L_102 = __this->___MODE_GEHEN_30_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_101, L_102, NULL);
		if (!L_103)
		{
			goto IL_053e;
		}
	}
	{
		RuntimeObject* L_104;
		L_104 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_104, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_32 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_32), (void*)L_105);
		RuntimeObject* L_106;
		L_106 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_106, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_33 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_33), (void*)L_107);
		RuntimeObject* L_108 = __this->___PLAYER_SIZE_33;
		NullCheck(L_108);
		float L_109;
		L_109 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_108, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_33_val = L_109;
		RuntimeObject* L_110;
		L_110 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_110, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_34 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_34), (void*)L_111);
		RuntimeObject* L_112 = __this->___PLAYER_SIZE_34;
		NullCheck(L_112);
		float L_113;
		L_113 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_112, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_34_val = L_113;
		RuntimeObject* L_114;
		L_114 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_114);
		RuntimeObject* L_115;
		L_115 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_114, 5, ((int32_t)466));
		__this->___PLAYER_DEPTH_36 = L_115;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_DEPTH_36), (void*)L_115);
		RuntimeObject* L_116 = __this->___PLAYER_DEPTH_36;
		NullCheck(L_116);
		float L_117;
		L_117 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_116, ((int32_t)231), (bool)1);
		__this->___PLAYER_DEPTH_36_val = L_117;
		RuntimeObject* L_118 = __this->___PLAYER_SIZE_32;
		float L_119 = __this->___PLAYER_SIZE_34_val;
		float L_120 = __this->___PLAYER_DEPTH_36_val;
		NullCheck(L_118);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_118, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_119, L_120)));
	}

IL_053e:
	{
		RuntimeObject* L_121;
		L_121 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_121);
		RuntimeObject* L_122;
		L_122 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_121, 5, ((int32_t)-539849892));
		__this->___MODE_SCHWIMMEN_37 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_SCHWIMMEN_37), (void*)L_122);
		RuntimeObject* L_123 = __this->___MODE_SCHWIMMEN_37;
		NullCheck(L_123);
		float L_124;
		L_124 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)231), (bool)1);
		__this->___MODE_SCHWIMMEN_37_val = L_124;
		RuntimeObject* L_125;
		L_125 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_125);
		RuntimeObject* L_126;
		L_126 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_125, 5, ((int32_t)-1052624291));
		__this->___MOVING_38 = L_126;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_38), (void*)L_126);
		RuntimeObject* L_127 = __this->___MOVING_38;
		NullCheck(L_127);
		float L_128;
		L_128 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_127, ((int32_t)231), (bool)1);
		__this->___MOVING_38_val = L_128;
		float L_129 = __this->___MOVING_38_val;
		float L_130 = __this->___MODE_SCHWIMMEN_37_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_131;
		L_131 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_129, L_130, NULL);
		if (!L_131)
		{
			goto IL_0630;
		}
	}
	{
		RuntimeObject* L_132;
		L_132 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_132);
		RuntimeObject* L_133;
		L_133 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_132, 5, ((int32_t)466));
		__this->___PLAYER_DEPTH_40 = L_133;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_DEPTH_40), (void*)L_133);
		RuntimeObject* L_134 = __this->___PLAYER_DEPTH_40;
		NullCheck(L_134);
		float L_135;
		L_135 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_134, ((int32_t)231), (bool)1);
		__this->___PLAYER_DEPTH_40_val = L_135;
		float L_136 = __this->___PLAYER_DEPTH_40_val;
		bool L_137;
		L_137 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_136, (1.5f), NULL);
		if (L_137)
		{
			goto IL_071c;
		}
	}
	{
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_138 = (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0*)il2cpp_codegen_object_new(SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0_il2cpp_TypeInfo_var);
		SET_WALKING__ctor_m6077994146222E0B4630F32AA4DD0F910A7B9B86(L_138, NULL);
		V_0 = L_138;
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_139 = V_0;
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_140 = L_139;
		RuntimeObject* L_141;
		L_141 = MOVE_ME_get_MY_m0053EF71C5738AF3A512F406578B3FC59349A529_inline(__this, NULL);
		NullCheck(L_140);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_140, L_141);
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_142 = L_140;
		RuntimeObject* L_143;
		L_143 = MOVE_ME_get_THERE_mCE93708E1D1E4BC77FD49C157F1002DDA5621FFD_inline(__this, NULL);
		NullCheck(L_142);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_142, L_143);
		RuntimeObject* L_144;
		L_144 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_142);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_142, L_144);
		RuntimeObject* L_145;
		L_145 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_146 = V_0;
		NullCheck(L_145);
		RuntimeObject* L_147;
		L_147 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_145, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_146);
		goto IL_0007;
	}

IL_0630:
	{
		RuntimeObject* L_148;
		L_148 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_148);
		RuntimeObject* L_149;
		L_149 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_148, 5, ((int32_t)-1023981992));
		__this->___MODE_GEHEN_41 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_GEHEN_41), (void*)L_149);
		RuntimeObject* L_150 = __this->___MODE_GEHEN_41;
		NullCheck(L_150);
		float L_151;
		L_151 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_150, ((int32_t)231), (bool)1);
		__this->___MODE_GEHEN_41_val = L_151;
		RuntimeObject* L_152;
		L_152 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_152);
		RuntimeObject* L_153;
		L_153 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_152, 5, ((int32_t)-1052624291));
		__this->___MOVING_42 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_42), (void*)L_153);
		RuntimeObject* L_154 = __this->___MOVING_42;
		NullCheck(L_154);
		float L_155;
		L_155 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_154, ((int32_t)231), (bool)1);
		__this->___MOVING_42_val = L_155;
		float L_156 = __this->___MOVING_42_val;
		float L_157 = __this->___MODE_GEHEN_41_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_158;
		L_158 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_156, L_157, NULL);
		if (!L_158)
		{
			goto IL_071c;
		}
	}
	{
		RuntimeObject* L_159;
		L_159 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_159);
		RuntimeObject* L_160;
		L_160 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_159, 5, ((int32_t)466));
		__this->___PLAYER_DEPTH_44 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_DEPTH_44), (void*)L_160);
		RuntimeObject* L_161 = __this->___PLAYER_DEPTH_44;
		NullCheck(L_161);
		float L_162;
		L_162 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_161, ((int32_t)231), (bool)1);
		__this->___PLAYER_DEPTH_44_val = L_162;
		float L_163 = __this->___PLAYER_DEPTH_44_val;
		bool L_164;
		L_164 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_163, (2.5f), NULL);
		if (L_164)
		{
			goto IL_071c;
		}
	}
	{
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_165 = (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700*)il2cpp_codegen_object_new(SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700_il2cpp_TypeInfo_var);
		SET_SWIMMING__ctor_m4A4036B39AE23004B3529E4A872D3CA7C526E7E7(L_165, NULL);
		V_1 = L_165;
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_166 = V_1;
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_167 = L_166;
		RuntimeObject* L_168;
		L_168 = MOVE_ME_get_MY_m0053EF71C5738AF3A512F406578B3FC59349A529_inline(__this, NULL);
		NullCheck(L_167);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_167, L_168);
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_169 = L_167;
		RuntimeObject* L_170;
		L_170 = MOVE_ME_get_THERE_mCE93708E1D1E4BC77FD49C157F1002DDA5621FFD_inline(__this, NULL);
		NullCheck(L_169);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_169, L_170);
		RuntimeObject* L_171;
		L_171 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_169);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_169, L_171);
		RuntimeObject* L_172;
		L_172 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_173 = V_1;
		NullCheck(L_172);
		RuntimeObject* L_174;
		L_174 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_172, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_173);
		goto IL_0007;
	}

IL_071c:
	{
		RuntimeObject* L_175;
		L_175 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_175);
		RuntimeObject* L_176;
		L_176 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_175, 5, ((int32_t)472));
		__this->___MOUSE_MIDDLE_46 = L_176;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOUSE_MIDDLE_46), (void*)L_176);
		RuntimeObject* L_177 = __this->___MOUSE_MIDDLE_46;
		NullCheck(L_177);
		float L_178;
		L_178 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_177, ((int32_t)231), (bool)1);
		__this->___MOUSE_MIDDLE_46_val = L_178;
		float L_179 = __this->___MOUSE_MIDDLE_46_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_180;
		L_180 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_179, (0.0f), NULL);
		if (L_180)
		{
			goto IL_0916;
		}
	}
	{
		RuntimeObject* L_181;
		L_181 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_181);
		RuntimeObject* L_182;
		L_182 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_181, 5, ((int32_t)475));
		__this->___KEY_SENSE_47 = L_182;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_SENSE_47), (void*)L_182);
		RuntimeObject* L_183 = __this->___KEY_SENSE_47;
		NullCheck(L_183);
		float L_184;
		L_184 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_183, ((int32_t)231), (bool)1);
		__this->___KEY_SENSE_47_val = L_184;
		RuntimeObject* L_185;
		L_185 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_185, 5, ((int32_t)480));
		__this->___FORCE_AHEAD_48 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_AHEAD_48), (void*)L_186);
		RuntimeObject* L_187 = __this->___FORCE_AHEAD_48;
		float L_188 = __this->___KEY_SENSE_47_val;
		NullCheck(L_187);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_187, ((int32_t)231), L_188);
		RuntimeObject* L_189;
		L_189 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_189);
		RuntimeObject* L_190;
		L_190 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_189, 5, ((int32_t)480));
		__this->___FORCE_AHEAD_49 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_AHEAD_49), (void*)L_190);
		RuntimeObject* L_191 = __this->___FORCE_AHEAD_49;
		NullCheck(L_191);
		float L_192;
		L_192 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_191, ((int32_t)231), (bool)1);
		__this->___FORCE_AHEAD_49_val = L_192;
		RuntimeObject* L_193;
		L_193 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_193);
		RuntimeObject* L_194;
		L_194 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_193, 5, ((int32_t)590185617));
		__this->___FORCEFORWARD_50 = L_194;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCEFORWARD_50), (void*)L_194);
		RuntimeObject* L_195 = __this->___FORCEFORWARD_50;
		float L_196 = __this->___FORCE_AHEAD_49_val;
		NullCheck(L_195);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_195, ((int32_t)231), L_196);
		RuntimeObject* L_197;
		L_197 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_197);
		RuntimeObject* L_198;
		L_198 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_197, 5, ((int32_t)554));
		__this->___KEY_SHIFT_52 = L_198;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_SHIFT_52), (void*)L_198);
		RuntimeObject* L_199 = __this->___KEY_SHIFT_52;
		NullCheck(L_199);
		float L_200;
		L_200 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_199, ((int32_t)231), (bool)1);
		__this->___KEY_SHIFT_52_val = L_200;
		float L_201 = __this->___KEY_SHIFT_52_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_202;
		L_202 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_201, (1.0f), NULL);
		if (!L_202)
		{
			goto IL_0916;
		}
	}
	{
		RuntimeObject* L_203;
		L_203 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_203);
		RuntimeObject* L_204;
		L_204 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_203, 5, ((int32_t)480));
		__this->___FORCE_AHEAD_53 = L_204;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_AHEAD_53), (void*)L_204);
		RuntimeObject* L_205;
		L_205 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_205);
		RuntimeObject* L_206;
		L_206 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_205, 5, ((int32_t)480));
		__this->___FORCE_AHEAD_54 = L_206;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_AHEAD_54), (void*)L_206);
		RuntimeObject* L_207 = __this->___FORCE_AHEAD_54;
		NullCheck(L_207);
		float L_208;
		L_208 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_207, ((int32_t)231), (bool)1);
		__this->___FORCE_AHEAD_54_val = L_208;
		RuntimeObject* L_209;
		L_209 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_209);
		RuntimeObject* L_210;
		L_210 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_209, 5, ((int32_t)480));
		__this->___FORCE_AHEAD_55 = L_210;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_AHEAD_55), (void*)L_210);
		RuntimeObject* L_211 = __this->___FORCE_AHEAD_55;
		NullCheck(L_211);
		float L_212;
		L_212 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_211, ((int32_t)231), (bool)1);
		__this->___FORCE_AHEAD_55_val = L_212;
		RuntimeObject* L_213;
		L_213 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_213);
		RuntimeObject* L_214;
		L_214 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_213, 5, ((int32_t)476));
		__this->___SHIFT_SENSE_57 = L_214;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHIFT_SENSE_57), (void*)L_214);
		RuntimeObject* L_215 = __this->___SHIFT_SENSE_57;
		NullCheck(L_215);
		float L_216;
		L_216 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_215, ((int32_t)231), (bool)1);
		__this->___SHIFT_SENSE_57_val = L_216;
		RuntimeObject* L_217 = __this->___FORCE_AHEAD_53;
		float L_218 = __this->___FORCE_AHEAD_55_val;
		float L_219 = __this->___SHIFT_SENSE_57_val;
		NullCheck(L_217);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_217, ((int32_t)231), ((float)il2cpp_codegen_multiply(L_218, L_219)));
	}

IL_0916:
	{
		RuntimeObject* L_220;
		L_220 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_220);
		RuntimeObject* L_221;
		L_221 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_220, 5, ((int32_t)480));
		__this->___FORCE_AHEAD_58 = L_221;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_AHEAD_58), (void*)L_221);
		RuntimeObject* L_222 = __this->___FORCE_AHEAD_58;
		NullCheck(L_222);
		float L_223;
		L_223 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_222, ((int32_t)231), (bool)1);
		__this->___FORCE_AHEAD_58_val = L_223;
		RuntimeObject* L_224;
		L_224 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_224);
		RuntimeObject* L_225;
		L_225 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_224, 5, ((int32_t)590185617));
		__this->___FORCEFORWARD_59 = L_225;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCEFORWARD_59), (void*)L_225);
		RuntimeObject* L_226 = __this->___FORCEFORWARD_59;
		float L_227 = __this->___FORCE_AHEAD_58_val;
		NullCheck(L_226);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_226, ((int32_t)231), L_227);
		RuntimeObject* L_228;
		L_228 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_228);
		RuntimeObject* L_229;
		L_229 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_228, 5, ((int32_t)481));
		__this->___FORCE_STRAFE_60 = L_229;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_STRAFE_60), (void*)L_229);
		RuntimeObject* L_230 = __this->___FORCE_STRAFE_60;
		NullCheck(L_230);
		float L_231;
		L_231 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_230, ((int32_t)231), (bool)1);
		__this->___FORCE_STRAFE_60_val = L_231;
		RuntimeObject* L_232;
		L_232 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_232);
		RuntimeObject* L_233;
		L_233 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_232, 5, ((int32_t)-1737108273));
		__this->___FORCESIDEWARD_61 = L_233;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCESIDEWARD_61), (void*)L_233);
		RuntimeObject* L_234 = __this->___FORCESIDEWARD_61;
		float L_235 = __this->___FORCE_STRAFE_60_val;
		NullCheck(L_234);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_234, ((int32_t)231), L_235);
		RuntimeObject* L_236;
		L_236 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_236);
		RuntimeObject* L_237;
		L_237 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_236, 5, ((int32_t)482));
		__this->___FORCE_ROT_62 = L_237;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_ROT_62), (void*)L_237);
		RuntimeObject* L_238 = __this->___FORCE_ROT_62;
		NullCheck(L_238);
		float L_239;
		L_239 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_238, ((int32_t)231), (bool)1);
		__this->___FORCE_ROT_62_val = L_239;
		RuntimeObject* L_240;
		L_240 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_240);
		RuntimeObject* L_241;
		L_241 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_240, 5, ((int32_t)-1625681652));
		__this->___FORCEROTATION_63 = L_241;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCEROTATION_63), (void*)L_241);
		RuntimeObject* L_242 = __this->___FORCEROTATION_63;
		float L_243 = __this->___FORCE_ROT_62_val;
		NullCheck(L_242);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_242, ((int32_t)231), L_243);
		RuntimeObject* L_244;
		L_244 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_244);
		RuntimeObject* L_245;
		L_245 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_244, 5, ((int32_t)473));
		__this->___MOUSE_RIGHT_65 = L_245;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOUSE_RIGHT_65), (void*)L_245);
		RuntimeObject* L_246 = __this->___MOUSE_RIGHT_65;
		NullCheck(L_246);
		float L_247;
		L_247 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_246, ((int32_t)231), (bool)1);
		__this->___MOUSE_RIGHT_65_val = L_247;
		float L_248 = __this->___MOUSE_RIGHT_65_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_249;
		L_249 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_248, (1.0f), NULL);
		if (!L_249)
		{
			goto IL_0a93;
		}
	}
	{
		RuntimeObject* L_250;
		L_250 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_250);
		RuntimeObject* L_251;
		L_251 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_250, 5, ((int32_t)590185617));
		__this->___FORCEFORWARD_67 = L_251;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCEFORWARD_67), (void*)L_251);
		RuntimeObject* L_252 = __this->___FORCEFORWARD_67;
		NullCheck(L_252);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_252, ((int32_t)231), (2.0f));
	}

IL_0a93:
	{
		RuntimeObject* L_253;
		L_253 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_253);
		RuntimeObject* L_254;
		L_254 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_253, 5, ((int32_t)522));
		__this->___KEY_ALT_69 = L_254;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_ALT_69), (void*)L_254);
		RuntimeObject* L_255 = __this->___KEY_ALT_69;
		NullCheck(L_255);
		float L_256;
		L_256 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_255, ((int32_t)231), (bool)1);
		__this->___KEY_ALT_69_val = L_256;
		float L_257 = __this->___KEY_ALT_69_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_258;
		L_258 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_257, (1.0f), NULL);
		if (!L_258)
		{
			goto IL_0b89;
		}
	}
	{
		RuntimeObject* L_259;
		L_259 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_259);
		RuntimeObject* L_260;
		L_260 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_259, 5, ((int32_t)481));
		__this->___FORCE_STRAFE_70 = L_260;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_STRAFE_70), (void*)L_260);
		RuntimeObject* L_261 = __this->___FORCE_STRAFE_70;
		NullCheck(L_261);
		float L_262;
		L_262 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_261, ((int32_t)231), (bool)1);
		__this->___FORCE_STRAFE_70_val = L_262;
		RuntimeObject* L_263;
		L_263 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_263);
		RuntimeObject* L_264;
		L_264 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_263, 5, ((int32_t)-1625681652));
		__this->___FORCEROTATION_71 = L_264;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCEROTATION_71), (void*)L_264);
		RuntimeObject* L_265 = __this->___FORCEROTATION_71;
		float L_266 = __this->___FORCE_STRAFE_70_val;
		NullCheck(L_265);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_265, ((int32_t)231), L_266);
		RuntimeObject* L_267;
		L_267 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_267);
		RuntimeObject* L_268;
		L_268 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_267, 5, ((int32_t)-1737108273));
		__this->___FORCESIDEWARD_73 = L_268;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCESIDEWARD_73), (void*)L_268);
		RuntimeObject* L_269 = __this->___FORCESIDEWARD_73;
		NullCheck(L_269);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_269, ((int32_t)231), (0.0f));
		RuntimeObject* L_270;
		L_270 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_270);
		RuntimeObject* L_271;
		L_271 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_270, 5, ((int32_t)590185617));
		__this->___FORCEFORWARD_75 = L_271;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCEFORWARD_75), (void*)L_271);
		RuntimeObject* L_272 = __this->___FORCEFORWARD_75;
		NullCheck(L_272);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_272, ((int32_t)231), (0.0f));
	}

IL_0b89:
	{
		RuntimeObject* L_273;
		L_273 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_273);
		RuntimeObject* L_274;
		L_274 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_273, 5, ((int32_t)-1706076533));
		__this->___BOOSTER_77 = L_274;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BOOSTER_77), (void*)L_274);
		RuntimeObject* L_275 = __this->___BOOSTER_77;
		NullCheck(L_275);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_275, ((int32_t)231), (1.0f));
		RuntimeObject* L_276;
		L_276 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_276);
		RuntimeObject* L_277;
		L_277 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_276, 5, ((int32_t)2089315361));
		__this->___MASS_78 = L_277;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MASS_78), (void*)L_277);
		RuntimeObject* L_278 = __this->___MASS_78;
		NullCheck(L_278);
		float L_279;
		L_279 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_278, ((int32_t)231), (bool)1);
		__this->___MASS_78_val = L_279;
		RuntimeObject* L_280;
		L_280 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_280);
		RuntimeObject* L_281;
		L_281 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_280, 5, ((int32_t)438));
		__this->___INERTIA_79 = L_281;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___INERTIA_79), (void*)L_281);
		RuntimeObject* L_282 = __this->___INERTIA_79;
		float L_283 = __this->___MASS_78_val;
		NullCheck(L_282);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_282, ((int32_t)231), L_283);
		RuntimeObject* L_284;
		L_284 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_284);
		RuntimeObject* L_285;
		L_285 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_284, 5, ((int32_t)437));
		__this->___FRICTION_80 = L_285;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRICTION_80), (void*)L_285);
		RuntimeObject* L_286;
		L_286 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_286);
		RuntimeObject* L_287;
		L_287 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_286, 5, ((int32_t)437));
		__this->___FRICTION_81 = L_287;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRICTION_81), (void*)L_287);
		RuntimeObject* L_288 = __this->___FRICTION_81;
		NullCheck(L_288);
		float L_289;
		L_289 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_288, ((int32_t)231), (bool)1);
		__this->___FRICTION_81_val = L_289;
		RuntimeObject* L_290;
		L_290 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_290);
		RuntimeObject* L_291;
		L_291 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_290, 5, ((int32_t)2089081969));
		__this->___FRIC_82 = L_291;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRIC_82), (void*)L_291);
		RuntimeObject* L_292 = __this->___FRIC_82;
		NullCheck(L_292);
		float L_293;
		L_293 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_292, ((int32_t)231), (bool)1);
		__this->___FRIC_82_val = L_293;
		RuntimeObject* L_294;
		L_294 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_294);
		RuntimeObject* L_295;
		L_295 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_294, 5, ((int32_t)217365474));
		__this->___DEPTH_86 = L_295;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DEPTH_86), (void*)L_295);
		RuntimeObject* L_296 = __this->___DEPTH_86;
		NullCheck(L_296);
		float L_297;
		L_297 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_296, ((int32_t)231), (bool)1);
		__this->___DEPTH_86_val = L_297;
		RuntimeObject* L_298 = __this->___FRICTION_80;
		float L_299 = __this->___FRIC_82_val;
		float L_300 = __this->___DEPTH_86_val;
		NullCheck(L_298);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_298, ((int32_t)231), ((float)il2cpp_codegen_add(L_299, ((float)il2cpp_codegen_multiply((0.100000001f), L_300)))));
		RuntimeObject* L_301;
		L_301 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_301);
		RuntimeObject* L_302;
		L_302 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_301, 5, ((int32_t)220098300));
		__this->___FORCE_87 = L_302;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_87), (void*)L_302);
		RuntimeObject* L_303;
		L_303 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_303);
		RuntimeObject* L_304;
		L_304 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_303, 5, ((int32_t)220098300));
		__this->___FORCE_88 = L_304;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_88), (void*)L_304);
		RuntimeObject* L_305 = __this->___FORCE_88;
		NullCheck(L_305);
		float L_306;
		L_306 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_305, ((int32_t)231), (bool)1);
		__this->___FORCE_88_val = L_306;
		RuntimeObject* L_307;
		L_307 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_307);
		RuntimeObject* L_308;
		L_308 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_307, 5, ((int32_t)461037372));
		__this->___STRENGTH_90 = L_308;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STRENGTH_90), (void*)L_308);
		RuntimeObject* L_309 = __this->___STRENGTH_90;
		NullCheck(L_309);
		float L_310;
		L_310 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_309, ((int32_t)231), (bool)1);
		__this->___STRENGTH_90_val = L_310;
		RuntimeObject* L_311;
		L_311 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_311);
		RuntimeObject* L_312;
		L_312 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_311, 5, ((int32_t)525195384));
		__this->___WAVE_STR_92 = L_312;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAVE_STR_92), (void*)L_312);
		RuntimeObject* L_313 = __this->___WAVE_STR_92;
		NullCheck(L_313);
		float L_314;
		L_314 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_313, ((int32_t)231), (bool)1);
		__this->___WAVE_STR_92_val = L_314;
		RuntimeObject* L_315;
		L_315 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_315);
		RuntimeObject* L_316;
		L_316 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_315, 5, ((int32_t)428));
		__this->___WAVE_94 = L_316;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAVE_94), (void*)L_316);
		RuntimeObject* L_317 = __this->___WAVE_94;
		NullCheck(L_317);
		float L_318;
		L_318 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_317, ((int32_t)231), (bool)1);
		__this->___WAVE_94_val = L_318;
		RuntimeObject* L_319;
		L_319 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_319);
		RuntimeObject* L_320;
		L_320 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_319, 5, ((int32_t)-1706076533));
		__this->___BOOSTER_97 = L_320;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BOOSTER_97), (void*)L_320);
		RuntimeObject* L_321 = __this->___BOOSTER_97;
		NullCheck(L_321);
		float L_322;
		L_322 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_321, ((int32_t)231), (bool)1);
		__this->___BOOSTER_97_val = L_322;
		RuntimeObject* L_323;
		L_323 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_323);
		RuntimeObject* L_324;
		L_324 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_323, 5, ((int32_t)590185617));
		__this->___FORCEFORWARD_100 = L_324;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCEFORWARD_100), (void*)L_324);
		RuntimeObject* L_325 = __this->___FORCEFORWARD_100;
		NullCheck(L_325);
		float L_326;
		L_326 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_325, ((int32_t)231), (bool)1);
		__this->___FORCEFORWARD_100_val = L_326;
		RuntimeObject* L_327;
		L_327 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_327);
		RuntimeObject* L_328;
		L_328 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_327, 5, ((int32_t)464));
		__this->___PLAYER_COS_102 = L_328;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_102), (void*)L_328);
		RuntimeObject* L_329 = __this->___PLAYER_COS_102;
		NullCheck(L_329);
		float L_330;
		L_330 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_329, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_102_val = L_330;
		RuntimeObject* L_331;
		L_331 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_331);
		RuntimeObject* L_332;
		L_332 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_331, 5, ((int32_t)-1737108273));
		__this->___FORCESIDEWARD_106 = L_332;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCESIDEWARD_106), (void*)L_332);
		RuntimeObject* L_333 = __this->___FORCESIDEWARD_106;
		NullCheck(L_333);
		float L_334;
		L_334 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_333, ((int32_t)231), (bool)1);
		__this->___FORCESIDEWARD_106_val = L_334;
		RuntimeObject* L_335;
		L_335 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_335);
		RuntimeObject* L_336;
		L_336 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_335, 5, ((int32_t)463));
		__this->___PLAYER_SIN_108 = L_336;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_108), (void*)L_336);
		RuntimeObject* L_337 = __this->___PLAYER_SIN_108;
		NullCheck(L_337);
		float L_338;
		L_338 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_337, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_108_val = L_338;
		RuntimeObject* L_339;
		L_339 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_339);
		RuntimeObject* L_340;
		L_340 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_339, 5, ((int32_t)986683741));
		__this->___DRIFT_X_111 = L_340;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRIFT_X_111), (void*)L_340);
		RuntimeObject* L_341 = __this->___DRIFT_X_111;
		NullCheck(L_341);
		float L_342;
		L_342 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_341, ((int32_t)231), (bool)1);
		__this->___DRIFT_X_111_val = L_342;
		RuntimeObject* L_343 = __this->___FORCE_87;
		float L_344 = __this->___STRENGTH_90_val;
		float L_345 = __this->___WAVE_STR_92_val;
		float L_346 = __this->___WAVE_94_val;
		float L_347 = __this->___BOOSTER_97_val;
		float L_348 = __this->___FORCEFORWARD_100_val;
		float L_349 = __this->___PLAYER_COS_102_val;
		float L_350 = __this->___FORCESIDEWARD_106_val;
		float L_351 = __this->___PLAYER_SIN_108_val;
		float L_352 = __this->___DRIFT_X_111_val;
		NullCheck(L_343);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_343, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_344, ((float)il2cpp_codegen_multiply(L_345, L_346)))), L_347)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_348, L_349)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.5f), L_350)), L_351)))))), L_352)));
		RuntimeObject* L_353;
		L_353 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_353);
		RuntimeObject* L_354;
		L_354 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_353, 5, ((int32_t)220098300));
		__this->___FORCE_112 = L_354;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_112), (void*)L_354);
		RuntimeObject* L_355 = __this->___FORCE_112;
		NullCheck(L_355);
		float L_356;
		L_356 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_355, ((int32_t)231), (bool)1);
		__this->___FORCE_112_val = L_356;
		RuntimeObject* L_357;
		L_357 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_357);
		RuntimeObject* L_358;
		L_358 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_357, 5, ((int32_t)431));
		__this->___PLAYER_VX_113 = L_358;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_113), (void*)L_358);
		RuntimeObject* L_359 = __this->___PLAYER_VX_113;
		NullCheck(L_359);
		float L_360;
		L_360 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_359, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_113_val = L_360;
		RuntimeObject* L_361;
		L_361 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_361);
		RuntimeObject* L_362;
		L_362 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_361, 5, ((int32_t)431));
		__this->___PLAYER_VX_114 = L_362;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_114), (void*)L_362);
		RuntimeObject* L_363 = __this->___PLAYER_VX_114;
		RuntimeObject* L_364;
		L_364 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		float L_365 = __this->___PLAYER_VX_113_val;
		float L_366 = __this->___FORCE_112_val;
		NullCheck(L_364);
		float L_367;
		L_367 = InterfaceFuncInvoker2< float, float, float >::Invoke(33, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_364, L_365, L_366);
		NullCheck(L_363);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_363, ((int32_t)231), L_367);
		RuntimeObject* L_368;
		L_368 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_368);
		RuntimeObject* L_369;
		L_369 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_368, 5, ((int32_t)220098300));
		__this->___FORCE_115 = L_369;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_115), (void*)L_369);
		RuntimeObject* L_370;
		L_370 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_370);
		RuntimeObject* L_371;
		L_371 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_370, 5, ((int32_t)220098300));
		__this->___FORCE_116 = L_371;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_116), (void*)L_371);
		RuntimeObject* L_372 = __this->___FORCE_116;
		NullCheck(L_372);
		float L_373;
		L_373 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_372, ((int32_t)231), (bool)1);
		__this->___FORCE_116_val = L_373;
		RuntimeObject* L_374;
		L_374 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_374);
		RuntimeObject* L_375;
		L_375 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_374, 5, ((int32_t)461037372));
		__this->___STRENGTH_118 = L_375;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STRENGTH_118), (void*)L_375);
		RuntimeObject* L_376 = __this->___STRENGTH_118;
		NullCheck(L_376);
		float L_377;
		L_377 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_376, ((int32_t)231), (bool)1);
		__this->___STRENGTH_118_val = L_377;
		RuntimeObject* L_378;
		L_378 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_378);
		RuntimeObject* L_379;
		L_379 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_378, 5, ((int32_t)525195384));
		__this->___WAVE_STR_120 = L_379;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAVE_STR_120), (void*)L_379);
		RuntimeObject* L_380 = __this->___WAVE_STR_120;
		NullCheck(L_380);
		float L_381;
		L_381 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_380, ((int32_t)231), (bool)1);
		__this->___WAVE_STR_120_val = L_381;
		RuntimeObject* L_382;
		L_382 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_382);
		RuntimeObject* L_383;
		L_383 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_382, 5, ((int32_t)428));
		__this->___WAVE_122 = L_383;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAVE_122), (void*)L_383);
		RuntimeObject* L_384 = __this->___WAVE_122;
		NullCheck(L_384);
		float L_385;
		L_385 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_384, ((int32_t)231), (bool)1);
		__this->___WAVE_122_val = L_385;
		RuntimeObject* L_386;
		L_386 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_386);
		RuntimeObject* L_387;
		L_387 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_386, 5, ((int32_t)-1706076533));
		__this->___BOOSTER_125 = L_387;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BOOSTER_125), (void*)L_387);
		RuntimeObject* L_388 = __this->___BOOSTER_125;
		NullCheck(L_388);
		float L_389;
		L_389 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_388, ((int32_t)231), (bool)1);
		__this->___BOOSTER_125_val = L_389;
		RuntimeObject* L_390;
		L_390 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_390);
		RuntimeObject* L_391;
		L_391 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_390, 5, ((int32_t)590185617));
		__this->___FORCEFORWARD_128 = L_391;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCEFORWARD_128), (void*)L_391);
		RuntimeObject* L_392 = __this->___FORCEFORWARD_128;
		NullCheck(L_392);
		float L_393;
		L_393 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_392, ((int32_t)231), (bool)1);
		__this->___FORCEFORWARD_128_val = L_393;
		RuntimeObject* L_394;
		L_394 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_394);
		RuntimeObject* L_395;
		L_395 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_394, 5, ((int32_t)463));
		__this->___PLAYER_SIN_130 = L_395;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_130), (void*)L_395);
		RuntimeObject* L_396 = __this->___PLAYER_SIN_130;
		NullCheck(L_396);
		float L_397;
		L_397 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_396, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_130_val = L_397;
		RuntimeObject* L_398;
		L_398 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_398);
		RuntimeObject* L_399;
		L_399 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_398, 5, ((int32_t)-1737108273));
		__this->___FORCESIDEWARD_134 = L_399;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCESIDEWARD_134), (void*)L_399);
		RuntimeObject* L_400 = __this->___FORCESIDEWARD_134;
		NullCheck(L_400);
		float L_401;
		L_401 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_400, ((int32_t)231), (bool)1);
		__this->___FORCESIDEWARD_134_val = L_401;
		RuntimeObject* L_402;
		L_402 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_402);
		RuntimeObject* L_403;
		L_403 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_402, 5, ((int32_t)464));
		__this->___PLAYER_COS_136 = L_403;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_136), (void*)L_403);
		RuntimeObject* L_404 = __this->___PLAYER_COS_136;
		NullCheck(L_404);
		float L_405;
		L_405 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_404, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_136_val = L_405;
		RuntimeObject* L_406;
		L_406 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_406);
		RuntimeObject* L_407;
		L_407 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_406, 5, ((int32_t)986683742));
		__this->___DRIFT_Y_139 = L_407;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRIFT_Y_139), (void*)L_407);
		RuntimeObject* L_408 = __this->___DRIFT_Y_139;
		NullCheck(L_408);
		float L_409;
		L_409 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_408, ((int32_t)231), (bool)1);
		__this->___DRIFT_Y_139_val = L_409;
		RuntimeObject* L_410 = __this->___FORCE_115;
		float L_411 = __this->___STRENGTH_118_val;
		float L_412 = __this->___WAVE_STR_120_val;
		float L_413 = __this->___WAVE_122_val;
		float L_414 = __this->___BOOSTER_125_val;
		float L_415 = __this->___FORCEFORWARD_128_val;
		float L_416 = __this->___PLAYER_SIN_130_val;
		float L_417 = __this->___FORCESIDEWARD_134_val;
		float L_418 = __this->___PLAYER_COS_136_val;
		float L_419 = __this->___DRIFT_Y_139_val;
		NullCheck(L_410);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_410, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_411, ((float)il2cpp_codegen_multiply(L_412, L_413)))), L_414)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_415, L_416)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.5f), L_417)), L_418)))))), L_419)));
		RuntimeObject* L_420;
		L_420 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_420);
		RuntimeObject* L_421;
		L_421 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_420, 5, ((int32_t)220098300));
		__this->___FORCE_140 = L_421;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_140), (void*)L_421);
		RuntimeObject* L_422 = __this->___FORCE_140;
		NullCheck(L_422);
		float L_423;
		L_423 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_422, ((int32_t)231), (bool)1);
		__this->___FORCE_140_val = L_423;
		RuntimeObject* L_424;
		L_424 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_424);
		RuntimeObject* L_425;
		L_425 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_424, 5, ((int32_t)432));
		__this->___PLAYER_VY_141 = L_425;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_141), (void*)L_425);
		RuntimeObject* L_426 = __this->___PLAYER_VY_141;
		NullCheck(L_426);
		float L_427;
		L_427 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_426, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_141_val = L_427;
		RuntimeObject* L_428;
		L_428 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_428);
		RuntimeObject* L_429;
		L_429 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_428, 5, ((int32_t)432));
		__this->___PLAYER_VY_142 = L_429;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_142), (void*)L_429);
		RuntimeObject* L_430 = __this->___PLAYER_VY_142;
		RuntimeObject* L_431;
		L_431 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		float L_432 = __this->___PLAYER_VY_141_val;
		float L_433 = __this->___FORCE_140_val;
		NullCheck(L_431);
		float L_434;
		L_434 = InterfaceFuncInvoker2< float, float, float >::Invoke(33, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_431, L_432, L_433);
		NullCheck(L_430);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_430, ((int32_t)231), L_434);
		RuntimeObject* L_435;
		L_435 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_435);
		RuntimeObject* L_436;
		L_436 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_435, 5, ((int32_t)437));
		__this->___FRICTION_144 = L_436;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRICTION_144), (void*)L_436);
		RuntimeObject* L_437 = __this->___FRICTION_144;
		NullCheck(L_437);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_437, ((int32_t)231), (0.5f));
		RuntimeObject* L_438;
		L_438 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_438);
		RuntimeObject* L_439;
		L_439 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_438, 5, ((int32_t)-1023981992));
		__this->___MODE_GEHEN_145 = L_439;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_GEHEN_145), (void*)L_439);
		RuntimeObject* L_440 = __this->___MODE_GEHEN_145;
		NullCheck(L_440);
		float L_441;
		L_441 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_440, ((int32_t)231), (bool)1);
		__this->___MODE_GEHEN_145_val = L_441;
		RuntimeObject* L_442;
		L_442 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_442);
		RuntimeObject* L_443;
		L_443 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_442, 5, ((int32_t)-1052624291));
		__this->___MOVING_146 = L_443;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_146), (void*)L_443);
		RuntimeObject* L_444 = __this->___MOVING_146;
		NullCheck(L_444);
		float L_445;
		L_445 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_444, ((int32_t)231), (bool)1);
		__this->___MOVING_146_val = L_445;
		float L_446 = __this->___MOVING_146_val;
		float L_447 = __this->___MODE_GEHEN_145_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_448;
		L_448 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_446, L_447, NULL);
		if (L_448)
		{
			goto IL_133d;
		}
	}
	{
		RuntimeObject* L_449;
		L_449 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_449);
		RuntimeObject* L_450;
		L_450 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_449, 5, ((int32_t)437));
		__this->___FRICTION_148 = L_450;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRICTION_148), (void*)L_450);
		RuntimeObject* L_451 = __this->___FRICTION_148;
		NullCheck(L_451);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_451, ((int32_t)231), (0.850000024f));
	}

IL_133d:
	{
		RuntimeObject* L_452;
		L_452 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_452);
		RuntimeObject* L_453;
		L_453 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_452, 5, ((int32_t)220098300));
		__this->___FORCE_149 = L_453;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_149), (void*)L_453);
		RuntimeObject* L_454;
		L_454 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_454);
		RuntimeObject* L_455;
		L_455 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_454, 5, ((int32_t)220098300));
		__this->___FORCE_150 = L_455;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_150), (void*)L_455);
		RuntimeObject* L_456 = __this->___FORCE_150;
		NullCheck(L_456);
		float L_457;
		L_457 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_456, ((int32_t)231), (bool)1);
		__this->___FORCE_150_val = L_457;
		RuntimeObject* L_458;
		L_458 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_458);
		RuntimeObject* L_459;
		L_459 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_458, 5, ((int32_t)-1625681652));
		__this->___FORCEROTATION_153 = L_459;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCEROTATION_153), (void*)L_459);
		RuntimeObject* L_460 = __this->___FORCEROTATION_153;
		NullCheck(L_460);
		float L_461;
		L_461 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_460, ((int32_t)231), (bool)1);
		__this->___FORCEROTATION_153_val = L_461;
		RuntimeObject* L_462 = __this->___FORCE_149;
		float L_463 = __this->___FORCEROTATION_153_val;
		NullCheck(L_462);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_462, ((int32_t)231), ((float)il2cpp_codegen_multiply((0.0500000007f), L_463)));
		RuntimeObject* L_464;
		L_464 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_464);
		RuntimeObject* L_465;
		L_465 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_464, 5, ((int32_t)220098300));
		__this->___FORCE_154 = L_465;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_154), (void*)L_465);
		RuntimeObject* L_466 = __this->___FORCE_154;
		NullCheck(L_466);
		float L_467;
		L_467 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_466, ((int32_t)231), (bool)1);
		__this->___FORCE_154_val = L_467;
		RuntimeObject* L_468;
		L_468 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_468);
		RuntimeObject* L_469;
		L_469 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_468, 5, ((int32_t)434));
		__this->___PLAYER_VROT_155 = L_469;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VROT_155), (void*)L_469);
		RuntimeObject* L_470 = __this->___PLAYER_VROT_155;
		NullCheck(L_470);
		float L_471;
		L_471 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_470, ((int32_t)231), (bool)1);
		__this->___PLAYER_VROT_155_val = L_471;
		RuntimeObject* L_472;
		L_472 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_472);
		RuntimeObject* L_473;
		L_473 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_472, 5, ((int32_t)434));
		__this->___PLAYER_VROT_156 = L_473;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VROT_156), (void*)L_473);
		RuntimeObject* L_474 = __this->___PLAYER_VROT_156;
		RuntimeObject* L_475;
		L_475 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		float L_476 = __this->___PLAYER_VROT_155_val;
		float L_477 = __this->___FORCE_154_val;
		NullCheck(L_475);
		float L_478;
		L_478 = InterfaceFuncInvoker2< float, float, float >::Invoke(33, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_475, L_476, L_477);
		NullCheck(L_474);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_474, ((int32_t)231), L_478);
		RuntimeObject* L_479;
		L_479 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_479);
		RuntimeObject* L_480;
		L_480 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_479, 5, ((int32_t)-1011512854));
		__this->___WEAPONWAVE_157 = L_480;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONWAVE_157), (void*)L_480);
		RuntimeObject* L_481;
		L_481 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_481);
		RuntimeObject* L_482;
		L_482 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_481, 5, ((int32_t)-1011512854));
		__this->___WEAPONWAVE_158 = L_482;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONWAVE_158), (void*)L_482);
		RuntimeObject* L_483 = __this->___WEAPONWAVE_158;
		NullCheck(L_483);
		float L_484;
		L_484 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_483, ((int32_t)231), (bool)1);
		__this->___WEAPONWAVE_158_val = L_484;
		RuntimeObject* L_485;
		L_485 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_485);
		RuntimeObject* L_486;
		L_486 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_485, 5, ((int32_t)428));
		__this->___WAVE_159 = L_486;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAVE_159), (void*)L_486);
		RuntimeObject* L_487 = __this->___WAVE_159;
		NullCheck(L_487);
		float L_488;
		L_488 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_487, ((int32_t)231), (bool)1);
		__this->___WAVE_159_val = L_488;
		RuntimeObject* L_489;
		L_489 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_489);
		RuntimeObject* L_490;
		L_490 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_489, 5, ((int32_t)465));
		__this->___PLAYER_SPEED_161 = L_490;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SPEED_161), (void*)L_490);
		RuntimeObject* L_491 = __this->___PLAYER_SPEED_161;
		NullCheck(L_491);
		float L_492;
		L_492 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_491, ((int32_t)231), (bool)1);
		__this->___PLAYER_SPEED_161_val = L_492;
		RuntimeObject* L_493 = __this->___WEAPONWAVE_157;
		float L_494 = __this->___WAVE_159_val;
		float L_495 = __this->___PLAYER_SPEED_161_val;
		NullCheck(L_493);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_493, ((int32_t)231), ((float)il2cpp_codegen_multiply(L_494, L_495)));
		RuntimeObject* L_496;
		L_496 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_496);
		RuntimeObject* L_497;
		L_497 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_496);
		NullCheck(L_497);
		RuntimeObject* L_498;
		L_498 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_497, ((int32_t)-1593406448), (bool)1, (bool)1);
		__this->___MP5_01OVL_163 = L_498;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_01OVL_163), (void*)L_498);
		RuntimeObject* L_499;
		L_499 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_499);
		RuntimeObject* L_500;
		L_500 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_499);
		NullCheck(L_500);
		RuntimeObject* L_501;
		L_501 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_500, ((int32_t)-1593406448), (bool)1, (bool)1);
		__this->___MP5_01OVL_165 = L_501;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_01OVL_165), (void*)L_501);
		RuntimeObject* L_502 = __this->___MP5_01OVL_165;
		NullCheck(L_502);
		float L_503;
		L_503 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_502, ((int32_t)225), (bool)1);
		__this->___temp_166 = L_503;
		RuntimeObject* L_504;
		L_504 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_504);
		RuntimeObject* L_505;
		L_505 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_504, 5, ((int32_t)-1011512854));
		__this->___WEAPONWAVE_171 = L_505;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONWAVE_171), (void*)L_505);
		RuntimeObject* L_506 = __this->___WEAPONWAVE_171;
		NullCheck(L_506);
		float L_507;
		L_507 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_506, ((int32_t)231), (bool)1);
		__this->___WEAPONWAVE_171_val = L_507;
		RuntimeObject* L_508 = __this->___MP5_01OVL_163;
		float L_509 = __this->___WEAPONWAVE_171_val;
		NullCheck(L_508);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_508, ((int32_t)225), ((float)il2cpp_codegen_add((100.0f), ((float)il2cpp_codegen_multiply((12.0f), L_509)))));
		RuntimeObject* L_510;
		L_510 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_510);
		RuntimeObject* L_511;
		L_511 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_510);
		NullCheck(L_511);
		RuntimeObject* L_512;
		L_512 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_511, ((int32_t)-1673056967), (bool)1, (bool)1);
		__this->___QGUN00OVL_173 = L_512;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN00OVL_173), (void*)L_512);
		RuntimeObject* L_513;
		L_513 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_513);
		RuntimeObject* L_514;
		L_514 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_513);
		NullCheck(L_514);
		RuntimeObject* L_515;
		L_515 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_514, ((int32_t)-1673056967), (bool)1, (bool)1);
		__this->___QGUN00OVL_175 = L_515;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN00OVL_175), (void*)L_515);
		RuntimeObject* L_516 = __this->___QGUN00OVL_175;
		NullCheck(L_516);
		float L_517;
		L_517 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_516, ((int32_t)225), (bool)1);
		__this->___temp_176 = L_517;
		RuntimeObject* L_518;
		L_518 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_518);
		RuntimeObject* L_519;
		L_519 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_518, 5, ((int32_t)-1011512854));
		__this->___WEAPONWAVE_181 = L_519;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONWAVE_181), (void*)L_519);
		RuntimeObject* L_520 = __this->___WEAPONWAVE_181;
		NullCheck(L_520);
		float L_521;
		L_521 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_520, ((int32_t)231), (bool)1);
		__this->___WEAPONWAVE_181_val = L_521;
		RuntimeObject* L_522 = __this->___QGUN00OVL_173;
		float L_523 = __this->___WEAPONWAVE_181_val;
		NullCheck(L_522);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_522, ((int32_t)225), ((float)il2cpp_codegen_add((190.0f), ((float)il2cpp_codegen_multiply((6.0f), L_523)))));
		RuntimeObject* L_524;
		L_524 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_524);
		RuntimeObject* L_525;
		L_525 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_524);
		NullCheck(L_525);
		RuntimeObject* L_526;
		L_526 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_525, ((int32_t)850536902), (bool)1, (bool)1);
		__this->___GRAN00OVL_183 = L_526;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN00OVL_183), (void*)L_526);
		RuntimeObject* L_527;
		L_527 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_527);
		RuntimeObject* L_528;
		L_528 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_527);
		NullCheck(L_528);
		RuntimeObject* L_529;
		L_529 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_528, ((int32_t)850536902), (bool)1, (bool)1);
		__this->___GRAN00OVL_185 = L_529;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN00OVL_185), (void*)L_529);
		RuntimeObject* L_530 = __this->___GRAN00OVL_185;
		NullCheck(L_530);
		float L_531;
		L_531 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_530, ((int32_t)225), (bool)1);
		__this->___temp_186 = L_531;
		RuntimeObject* L_532;
		L_532 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_532);
		RuntimeObject* L_533;
		L_533 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_532, 5, ((int32_t)-1011512854));
		__this->___WEAPONWAVE_191 = L_533;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONWAVE_191), (void*)L_533);
		RuntimeObject* L_534 = __this->___WEAPONWAVE_191;
		NullCheck(L_534);
		float L_535;
		L_535 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_534, ((int32_t)231), (bool)1);
		__this->___WEAPONWAVE_191_val = L_535;
		RuntimeObject* L_536 = __this->___GRAN00OVL_183;
		float L_537 = __this->___WEAPONWAVE_191_val;
		NullCheck(L_536);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_536, ((int32_t)225), ((float)il2cpp_codegen_add((184.0f), ((float)il2cpp_codegen_multiply((6.0f), L_537)))));
		RuntimeObject* L_538;
		L_538 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_538);
		RuntimeObject* L_539;
		L_539 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_538, 5, ((int32_t)220098300));
		__this->___FORCE_192 = L_539;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_192), (void*)L_539);
		RuntimeObject* L_540;
		L_540 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_540);
		RuntimeObject* L_541;
		L_541 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_540, 5, ((int32_t)220098300));
		__this->___FORCE_193 = L_541;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_193), (void*)L_541);
		RuntimeObject* L_542 = __this->___FORCE_193;
		NullCheck(L_542);
		float L_543;
		L_543 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_542, ((int32_t)231), (bool)1);
		__this->___FORCE_193_val = L_543;
		RuntimeObject* L_544;
		L_544 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_544);
		RuntimeObject* L_545;
		L_545 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_544, 5, ((int32_t)557195635));
		__this->___GRAVITY_194 = L_545;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAVITY_194), (void*)L_545);
		RuntimeObject* L_546 = __this->___GRAVITY_194;
		NullCheck(L_546);
		float L_547;
		L_547 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_546, ((int32_t)231), (bool)1);
		__this->___GRAVITY_194_val = L_547;
		RuntimeObject* L_548;
		L_548 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_548);
		RuntimeObject* L_549;
		L_549 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_548, 5, ((int32_t)1319913115));
		__this->___FLOAT_STR_196 = L_549;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOAT_STR_196), (void*)L_549);
		RuntimeObject* L_550 = __this->___FLOAT_STR_196;
		NullCheck(L_550);
		float L_551;
		L_551 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_550, ((int32_t)231), (bool)1);
		__this->___FLOAT_STR_196_val = L_551;
		RuntimeObject* L_552;
		L_552 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_552);
		RuntimeObject* L_553;
		L_553 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_552, 5, ((int32_t)484));
		__this->___FORCE_UP_198 = L_553;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_UP_198), (void*)L_553);
		RuntimeObject* L_554 = __this->___FORCE_UP_198;
		NullCheck(L_554);
		float L_555;
		L_555 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_554, ((int32_t)231), (bool)1);
		__this->___FORCE_UP_198_val = L_555;
		RuntimeObject* L_556 = __this->___FORCE_192;
		float L_557 = __this->___GRAVITY_194_val;
		float L_558 = __this->___FLOAT_STR_196_val;
		float L_559 = __this->___FORCE_UP_198_val;
		NullCheck(L_556);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_556, ((int32_t)231), ((float)il2cpp_codegen_add(L_557, ((float)il2cpp_codegen_multiply(L_558, L_559)))));
		RuntimeObject* L_560;
		L_560 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_560);
		RuntimeObject* L_561;
		L_561 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_560, 5, ((int32_t)1830104876));
		__this->___FRIC_AIR_199 = L_561;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRIC_AIR_199), (void*)L_561);
		RuntimeObject* L_562 = __this->___FRIC_AIR_199;
		NullCheck(L_562);
		float L_563;
		L_563 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_562, ((int32_t)231), (bool)1);
		__this->___FRIC_AIR_199_val = L_563;
		RuntimeObject* L_564;
		L_564 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_564);
		RuntimeObject* L_565;
		L_565 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_564, 5, ((int32_t)437));
		__this->___FRICTION_200 = L_565;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRICTION_200), (void*)L_565);
		RuntimeObject* L_566 = __this->___FRICTION_200;
		float L_567 = __this->___FRIC_AIR_199_val;
		NullCheck(L_566);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_566, ((int32_t)231), L_567);
		RuntimeObject* L_568;
		L_568 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_568);
		RuntimeObject* L_569;
		L_569 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_568, 5, ((int32_t)479));
		__this->___PLAYER_HGT_202 = L_569;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HGT_202), (void*)L_569);
		RuntimeObject* L_570 = __this->___PLAYER_HGT_202;
		NullCheck(L_570);
		float L_571;
		L_571 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_570, ((int32_t)231), (bool)1);
		__this->___PLAYER_HGT_202_val = L_571;
		float L_572 = __this->___PLAYER_HGT_202_val;
		bool L_573;
		L_573 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_572, (0.0f), NULL);
		if (L_573)
		{
			goto IL_1d5a;
		}
	}
	{
		RuntimeObject* L_574;
		L_574 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_574);
		RuntimeObject* L_575;
		L_575 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_574, 5, ((int32_t)437));
		__this->___FRICTION_204 = L_575;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRICTION_204), (void*)L_575);
		RuntimeObject* L_576 = __this->___FRICTION_204;
		NullCheck(L_576);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_576, ((int32_t)231), (0.980000019f));
		RuntimeObject* L_577;
		L_577 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_577);
		RuntimeObject* L_578;
		L_578 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_577, 5, ((int32_t)220098300));
		__this->___FORCE_205 = L_578;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_205), (void*)L_578);
		RuntimeObject* L_579;
		L_579 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_579);
		RuntimeObject* L_580;
		L_580 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_579, 5, ((int32_t)220098300));
		__this->___FORCE_206 = L_580;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_206), (void*)L_580);
		RuntimeObject* L_581 = __this->___FORCE_206;
		NullCheck(L_581);
		float L_582;
		L_582 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_581, ((int32_t)231), (bool)1);
		__this->___FORCE_206_val = L_582;
		RuntimeObject* L_583;
		L_583 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_583);
		RuntimeObject* L_584;
		L_584 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_583, 5, ((int32_t)220098300));
		__this->___FORCE_207 = L_584;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_207), (void*)L_584);
		RuntimeObject* L_585 = __this->___FORCE_207;
		NullCheck(L_585);
		float L_586;
		L_586 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_585, ((int32_t)231), (bool)1);
		__this->___FORCE_207_val = L_586;
		RuntimeObject* L_587;
		L_587 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_587);
		RuntimeObject* L_588;
		L_588 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_587, 5, ((int32_t)479));
		__this->___PLAYER_HGT_211 = L_588;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HGT_211), (void*)L_588);
		RuntimeObject* L_589 = __this->___PLAYER_HGT_211;
		NullCheck(L_589);
		float L_590;
		L_590 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_589, ((int32_t)231), (bool)1);
		__this->___PLAYER_HGT_211_val = L_590;
		RuntimeObject* L_591 = __this->___FORCE_205;
		float L_592 = __this->___FORCE_207_val;
		float L_593 = __this->___PLAYER_HGT_211_val;
		NullCheck(L_591);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_591, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_592, ((float)il2cpp_codegen_multiply((0.200000003f), L_593)))));
		RuntimeObject* L_594;
		L_594 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_594);
		RuntimeObject* L_595;
		L_595 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_594, 5, ((int32_t)-270114910));
		__this->___FALLING_HEIGHT_213 = L_595;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_HEIGHT_213), (void*)L_595);
		RuntimeObject* L_596 = __this->___FALLING_HEIGHT_213;
		NullCheck(L_596);
		float L_597;
		L_597 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_596, ((int32_t)231), (bool)1);
		__this->___FALLING_HEIGHT_213_val = L_597;
		float L_598 = __this->___FALLING_HEIGHT_213_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_599;
		L_599 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_598, (0.0f), NULL);
		if (L_599)
		{
			goto IL_1d5a;
		}
	}
	{
		RuntimeObject* L_600;
		L_600 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_600);
		RuntimeObject* L_601;
		L_601 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_600, ((int32_t)703), (bool)0);
		__this->___HERE_216 = L_601;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HERE_216), (void*)L_601);
		RuntimeObject* L_602 = __this->___HERE_216;
		RuntimeObject* L_603 = L_602;
		if (L_603)
		{
			G_B30_0 = L_603;
			G_B30_1 = __this;
			goto IL_19f0;
		}
		G_B29_0 = L_603;
		G_B29_1 = __this;
	}
	{
		G_B31_0 = ((RuntimeObject*)(NULL));
		G_B31_1 = G_B29_1;
		goto IL_19fc;
	}

IL_19f0:
	{
		NullCheck(G_B30_0);
		RuntimeObject* L_604;
		L_604 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B30_0, ((int32_t)242), (bool)1, (bool)1);
		G_B31_0 = L_604;
		G_B31_1 = G_B30_1;
	}

IL_19fc:
	{
		NullCheck(G_B31_1);
		G_B31_1->___temp_217 = G_B31_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B31_1->___temp_217), (void*)G_B31_0);
		RuntimeObject* L_605 = __this->___temp_217;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_606;
		L_606 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_605, (RuntimeObject*)NULL, NULL);
		if (L_606)
		{
			goto IL_1a7e;
		}
	}
	{
		RuntimeObject* L_607;
		L_607 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_607);
		RuntimeObject* L_608;
		L_608 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_607, 5, ((int32_t)-270114910));
		__this->___FALLING_HEIGHT_219 = L_608;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_HEIGHT_219), (void*)L_608);
		RuntimeObject* L_609 = __this->___FALLING_HEIGHT_219;
		NullCheck(L_609);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_609, ((int32_t)231), (0.0f));
		RuntimeObject* L_610;
		L_610 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_610);
		RuntimeObject* L_611;
		L_611 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_610);
		NullCheck(L_611);
		RuntimeObject* L_612;
		L_612 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_611, ((int32_t)103833604), (bool)1, (bool)1);
		__this->___FWT01SND_220 = L_612;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FWT01SND_220), (void*)L_612);
		RuntimeObject* L_613;
		L_613 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		RuntimeObject* L_614 = __this->___FWT01SND_220;
		NullCheck(L_613);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_613, L_614, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		goto IL_1d5a;
	}

IL_1a7e:
	{
		RuntimeObject* L_615;
		L_615 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_615);
		RuntimeObject* L_616;
		L_616 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_615, 5, ((int32_t)-921351477));
		__this->___FALLING_FLOOR_222 = L_616;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_FLOOR_222), (void*)L_616);
		RuntimeObject* L_617 = __this->___FALLING_FLOOR_222;
		NullCheck(L_617);
		float L_618;
		L_618 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_617, ((int32_t)231), (bool)1);
		__this->___FALLING_FLOOR_222_val = L_618;
		RuntimeObject* L_619;
		L_619 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_619);
		RuntimeObject* L_620;
		L_620 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_619, ((int32_t)703), (bool)0);
		__this->___HERE_224 = L_620;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HERE_224), (void*)L_620);
		RuntimeObject* L_621 = __this->___HERE_224;
		NullCheck(L_621);
		float L_622;
		L_622 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_621, ((int32_t)200), (bool)1);
		__this->___temp_225 = L_622;
		float L_623 = __this->___temp_225;
		float L_624 = __this->___FALLING_FLOOR_222_val;
		bool L_625;
		L_625 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_623, L_624, NULL);
		if (!L_625)
		{
			goto IL_1be3;
		}
	}
	{
		RuntimeObject* L_626;
		L_626 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_626);
		RuntimeObject* L_627;
		L_627 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_626, 5, ((int32_t)-270114910));
		__this->___FALLING_HEIGHT_226 = L_627;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_HEIGHT_226), (void*)L_627);
		RuntimeObject* L_628;
		L_628 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_628);
		RuntimeObject* L_629;
		L_629 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_628, 5, ((int32_t)-270114910));
		__this->___FALLING_HEIGHT_227 = L_629;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_HEIGHT_227), (void*)L_629);
		RuntimeObject* L_630 = __this->___FALLING_HEIGHT_227;
		NullCheck(L_630);
		float L_631;
		L_631 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_630, ((int32_t)231), (bool)1);
		__this->___FALLING_HEIGHT_227_val = L_631;
		RuntimeObject* L_632;
		L_632 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_632);
		RuntimeObject* L_633;
		L_633 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_632, 5, ((int32_t)-270114910));
		__this->___FALLING_HEIGHT_228 = L_633;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_HEIGHT_228), (void*)L_633);
		RuntimeObject* L_634 = __this->___FALLING_HEIGHT_228;
		NullCheck(L_634);
		float L_635;
		L_635 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_634, ((int32_t)231), (bool)1);
		__this->___FALLING_HEIGHT_228_val = L_635;
		RuntimeObject* L_636;
		L_636 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_636);
		RuntimeObject* L_637;
		L_637 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_636, ((int32_t)703), (bool)0);
		__this->___HERE_231 = L_637;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HERE_231), (void*)L_637);
		RuntimeObject* L_638 = __this->___HERE_231;
		NullCheck(L_638);
		float L_639;
		L_639 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_638, ((int32_t)200), (bool)1);
		__this->___temp_232 = L_639;
		RuntimeObject* L_640;
		L_640 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_640);
		RuntimeObject* L_641;
		L_641 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_640, 5, ((int32_t)-921351477));
		__this->___FALLING_FLOOR_234 = L_641;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_FLOOR_234), (void*)L_641);
		RuntimeObject* L_642 = __this->___FALLING_FLOOR_234;
		NullCheck(L_642);
		float L_643;
		L_643 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_642, ((int32_t)231), (bool)1);
		__this->___FALLING_FLOOR_234_val = L_643;
		RuntimeObject* L_644 = __this->___FALLING_HEIGHT_226;
		float L_645 = __this->___FALLING_HEIGHT_228_val;
		float L_646 = __this->___temp_232;
		float L_647 = __this->___FALLING_FLOOR_234_val;
		NullCheck(L_644);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_644, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_645, L_646)), L_647)));
	}

IL_1be3:
	{
		RuntimeObject* L_648;
		L_648 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_648);
		RuntimeObject* L_649;
		L_649 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_648);
		NullCheck(L_649);
		RuntimeObject* L_650;
		L_650 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_649, ((int32_t)44278000), (bool)1, (bool)1);
		__this->___FCT01SND_235 = L_650;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FCT01SND_235), (void*)L_650);
		RuntimeObject* L_651;
		L_651 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		RuntimeObject* L_652 = __this->___FCT01SND_235;
		NullCheck(L_651);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_651, L_652, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_653;
		L_653 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_653);
		RuntimeObject* L_654;
		L_654 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_653, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_237 = L_654;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_237), (void*)L_654);
		RuntimeObject* L_655;
		L_655 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_655);
		RuntimeObject* L_656;
		L_656 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_655, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_238 = L_656;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_238), (void*)L_656);
		RuntimeObject* L_657 = __this->___PLAYER_RESULT_238;
		NullCheck(L_657);
		float L_658;
		L_658 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_657, ((int32_t)231), (bool)1);
		__this->___PLAYER_RESULT_238_val = L_658;
		RuntimeObject* L_659;
		L_659 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_659);
		RuntimeObject* L_660;
		L_660 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_659, 5, ((int32_t)-270114910));
		__this->___FALLING_HEIGHT_240 = L_660;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_HEIGHT_240), (void*)L_660);
		RuntimeObject* L_661 = __this->___FALLING_HEIGHT_240;
		NullCheck(L_661);
		float L_662;
		L_662 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_661, ((int32_t)231), (bool)1);
		__this->___FALLING_HEIGHT_240_val = L_662;
		RuntimeObject* L_663 = __this->___PLAYER_RESULT_237;
		float L_664 = __this->___FALLING_HEIGHT_240_val;
		NullCheck(L_663);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_663, ((int32_t)231), ((float)(((float)il2cpp_codegen_subtract(L_664, (6.0f)))/(2.0f))));
		RuntimeObject* L_665;
		L_665 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_665);
		RuntimeObject* L_666;
		L_666 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_665, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_247 = L_666;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_247), (void*)L_666);
		RuntimeObject* L_667 = __this->___PLAYER_RESULT_247;
		NullCheck(L_667);
		float L_668;
		L_668 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_667, ((int32_t)231), (bool)1);
		__this->___PLAYER_RESULT_247_val = L_668;
		float L_669 = __this->___PLAYER_RESULT_247_val;
		bool L_670;
		L_670 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_669, (0.0f), NULL);
		if (!L_670)
		{
			goto IL_1d2e;
		}
	}
	{
		HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* L_671 = (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335*)il2cpp_codegen_object_new(HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335_il2cpp_TypeInfo_var);
		HITPLAYER__ctor_mB8D5F81CBF89B5D337064FAB0E5DB88B0109CB9D(L_671, NULL);
		V_2 = L_671;
		HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* L_672 = V_2;
		HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* L_673 = L_672;
		RuntimeObject* L_674;
		L_674 = MOVE_ME_get_MY_m0053EF71C5738AF3A512F406578B3FC59349A529_inline(__this, NULL);
		NullCheck(L_673);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_673, L_674);
		HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* L_675 = L_673;
		RuntimeObject* L_676;
		L_676 = MOVE_ME_get_THERE_mCE93708E1D1E4BC77FD49C157F1002DDA5621FFD_inline(__this, NULL);
		NullCheck(L_675);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_675, L_676);
		RuntimeObject* L_677;
		L_677 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_675);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_675, L_677);
		RuntimeObject* L_678;
		L_678 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* L_679 = V_2;
		NullCheck(L_678);
		RuntimeObject* L_680;
		L_680 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_678, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_679);
	}

IL_1d2e:
	{
		RuntimeObject* L_681;
		L_681 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_681);
		RuntimeObject* L_682;
		L_682 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_681, 5, ((int32_t)-270114910));
		__this->___FALLING_HEIGHT_249 = L_682;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_HEIGHT_249), (void*)L_682);
		RuntimeObject* L_683 = __this->___FALLING_HEIGHT_249;
		NullCheck(L_683);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_683, ((int32_t)231), (0.0f));
	}

IL_1d5a:
	{
		RuntimeObject* L_684;
		L_684 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_684);
		RuntimeObject* L_685;
		L_685 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_684, 5, ((int32_t)220098300));
		__this->___FORCE_250 = L_685;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_250), (void*)L_685);
		RuntimeObject* L_686 = __this->___FORCE_250;
		NullCheck(L_686);
		float L_687;
		L_687 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_686, ((int32_t)231), (bool)1);
		__this->___FORCE_250_val = L_687;
		RuntimeObject* L_688;
		L_688 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_688);
		RuntimeObject* L_689;
		L_689 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_688, 5, ((int32_t)433));
		__this->___PLAYER_VZ_251 = L_689;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VZ_251), (void*)L_689);
		RuntimeObject* L_690 = __this->___PLAYER_VZ_251;
		NullCheck(L_690);
		float L_691;
		L_691 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_690, ((int32_t)231), (bool)1);
		__this->___PLAYER_VZ_251_val = L_691;
		RuntimeObject* L_692;
		L_692 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_692);
		RuntimeObject* L_693;
		L_693 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_692, 5, ((int32_t)433));
		__this->___PLAYER_VZ_252 = L_693;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VZ_252), (void*)L_693);
		RuntimeObject* L_694 = __this->___PLAYER_VZ_252;
		RuntimeObject* L_695;
		L_695 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		float L_696 = __this->___PLAYER_VZ_251_val;
		float L_697 = __this->___FORCE_250_val;
		NullCheck(L_695);
		float L_698;
		L_698 = InterfaceFuncInvoker2< float, float, float >::Invoke(33, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_695, L_696, L_697);
		NullCheck(L_694);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_694, ((int32_t)231), L_698);
		RuntimeObject* L_699;
		L_699 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_699);
		RuntimeObject* L_700;
		L_700 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_699, 5, ((int32_t)479));
		__this->___PLAYER_HGT_254 = L_700;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HGT_254), (void*)L_700);
		RuntimeObject* L_701 = __this->___PLAYER_HGT_254;
		NullCheck(L_701);
		float L_702;
		L_702 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_701, ((int32_t)231), (bool)1);
		__this->___PLAYER_HGT_254_val = L_702;
		float L_703 = __this->___PLAYER_HGT_254_val;
		bool L_704;
		L_704 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_703, (2.0f), NULL);
		if (L_704)
		{
			goto IL_1fed;
		}
	}
	{
		RuntimeObject* L_705;
		L_705 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_705);
		RuntimeObject* L_706;
		L_706 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_705, ((int32_t)703), (bool)0);
		__this->___HERE_257 = L_706;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HERE_257), (void*)L_706);
		RuntimeObject* L_707 = __this->___HERE_257;
		RuntimeObject* L_708 = L_707;
		if (L_708)
		{
			G_B41_0 = L_708;
			G_B41_1 = __this;
			goto IL_1e5c;
		}
		G_B40_0 = L_708;
		G_B40_1 = __this;
	}
	{
		G_B42_0 = ((RuntimeObject*)(NULL));
		G_B42_1 = G_B40_1;
		goto IL_1e68;
	}

IL_1e5c:
	{
		NullCheck(G_B41_0);
		RuntimeObject* L_709;
		L_709 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B41_0, ((int32_t)243), (bool)1, (bool)1);
		G_B42_0 = L_709;
		G_B42_1 = G_B41_1;
	}

IL_1e68:
	{
		NullCheck(G_B42_1);
		G_B42_1->___temp_258 = G_B42_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B42_1->___temp_258), (void*)G_B42_0);
		RuntimeObject* L_710 = __this->___temp_258;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_711;
		L_711 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_710, (RuntimeObject*)NULL, NULL);
		if (!L_711)
		{
			goto IL_1fed;
		}
	}
	{
		RuntimeObject* L_712;
		L_712 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_712);
		RuntimeObject* L_713;
		L_713 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_712, ((int32_t)703), (bool)0);
		__this->___HERE_261 = L_713;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HERE_261), (void*)L_713);
		RuntimeObject* L_714 = __this->___HERE_261;
		RuntimeObject* L_715 = L_714;
		if (L_715)
		{
			G_B45_0 = L_715;
			G_B45_1 = __this;
			goto IL_1ea3;
		}
		G_B44_0 = L_715;
		G_B44_1 = __this;
	}
	{
		G_B46_0 = ((RuntimeObject*)(NULL));
		G_B46_1 = G_B44_1;
		goto IL_1eaf;
	}

IL_1ea3:
	{
		NullCheck(G_B45_0);
		RuntimeObject* L_716;
		L_716 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B45_0, ((int32_t)242), (bool)1, (bool)1);
		G_B46_0 = L_716;
		G_B46_1 = G_B45_1;
	}

IL_1eaf:
	{
		NullCheck(G_B46_1);
		G_B46_1->___temp_262 = G_B46_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B46_1->___temp_262), (void*)G_B46_0);
		RuntimeObject* L_717 = __this->___temp_262;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_718;
		L_718 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_717, (RuntimeObject*)NULL, NULL);
		if (!L_718)
		{
			goto IL_1fed;
		}
	}
	{
		RuntimeObject* L_719;
		L_719 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_719);
		RuntimeObject* L_720;
		L_720 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_719, 5, ((int32_t)-270114910));
		__this->___FALLING_HEIGHT_263 = L_720;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_HEIGHT_263), (void*)L_720);
		RuntimeObject* L_721 = __this->___FALLING_HEIGHT_263;
		NullCheck(L_721);
		float L_722;
		L_722 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_721, ((int32_t)231), (bool)1);
		__this->___FALLING_HEIGHT_263_val = L_722;
		RuntimeObject* L_723;
		L_723 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_723);
		RuntimeObject* L_724;
		L_724 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_723, 5, ((int32_t)479));
		__this->___PLAYER_HGT_264 = L_724;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HGT_264), (void*)L_724);
		RuntimeObject* L_725 = __this->___PLAYER_HGT_264;
		NullCheck(L_725);
		float L_726;
		L_726 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_725, ((int32_t)231), (bool)1);
		__this->___PLAYER_HGT_264_val = L_726;
		float L_727 = __this->___PLAYER_HGT_264_val;
		float L_728 = __this->___FALLING_HEIGHT_263_val;
		bool L_729;
		L_729 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_727, L_728, NULL);
		if (!L_729)
		{
			goto IL_1fed;
		}
	}
	{
		RuntimeObject* L_730;
		L_730 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_730);
		RuntimeObject* L_731;
		L_731 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_730, ((int32_t)703), (bool)0);
		__this->___HERE_266 = L_731;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HERE_266), (void*)L_731);
		RuntimeObject* L_732 = __this->___HERE_266;
		NullCheck(L_732);
		float L_733;
		L_733 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_732, ((int32_t)200), (bool)1);
		__this->___temp_267 = L_733;
		RuntimeObject* L_734;
		L_734 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_734);
		RuntimeObject* L_735;
		L_735 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_734, 5, ((int32_t)-921351477));
		__this->___FALLING_FLOOR_268 = L_735;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_FLOOR_268), (void*)L_735);
		RuntimeObject* L_736 = __this->___FALLING_FLOOR_268;
		float L_737 = __this->___temp_267;
		NullCheck(L_736);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_736, ((int32_t)231), L_737);
		RuntimeObject* L_738;
		L_738 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_738);
		RuntimeObject* L_739;
		L_739 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_738, 5, ((int32_t)479));
		__this->___PLAYER_HGT_269 = L_739;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HGT_269), (void*)L_739);
		RuntimeObject* L_740 = __this->___PLAYER_HGT_269;
		NullCheck(L_740);
		float L_741;
		L_741 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_740, ((int32_t)231), (bool)1);
		__this->___PLAYER_HGT_269_val = L_741;
		RuntimeObject* L_742;
		L_742 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_742);
		RuntimeObject* L_743;
		L_743 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_742, 5, ((int32_t)-270114910));
		__this->___FALLING_HEIGHT_270 = L_743;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FALLING_HEIGHT_270), (void*)L_743);
		RuntimeObject* L_744 = __this->___FALLING_HEIGHT_270;
		float L_745 = __this->___PLAYER_HGT_269_val;
		NullCheck(L_744);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_744, ((int32_t)231), L_745);
	}

IL_1fed:
	{
		RuntimeObject* L_746;
		L_746 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_746);
		RuntimeObject* L_747;
		L_747 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_746, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_271 = L_747;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_271), (void*)L_747);
		RuntimeObject* L_748;
		L_748 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_748);
		RuntimeObject* L_749;
		L_749 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_748, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_272 = L_749;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_272), (void*)L_749);
		RuntimeObject* L_750 = __this->___DUCK_VAL_272;
		NullCheck(L_750);
		float L_751;
		L_751 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_750, ((int32_t)231), (bool)1);
		__this->___DUCK_VAL_272_val = L_751;
		RuntimeObject* L_752;
		L_752 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_752);
		RuntimeObject* L_753;
		L_753 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_752, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_275 = L_753;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_275), (void*)L_753);
		RuntimeObject* L_754 = __this->___DUCK_VAL_275;
		NullCheck(L_754);
		float L_755;
		L_755 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_754, ((int32_t)231), (bool)1);
		__this->___DUCK_VAL_275_val = L_755;
		RuntimeObject* L_756 = __this->___DUCK_VAL_271;
		float L_757 = __this->___DUCK_VAL_275_val;
		NullCheck(L_756);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_756, ((int32_t)231), ((float)il2cpp_codegen_multiply((0.800000012f), L_757)));
		RuntimeObject* L_758;
		L_758 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_758);
		RuntimeObject* L_759;
		L_759 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_758, 5, ((int32_t)-539849892));
		__this->___MODE_SCHWIMMEN_276 = L_759;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_SCHWIMMEN_276), (void*)L_759);
		RuntimeObject* L_760 = __this->___MODE_SCHWIMMEN_276;
		NullCheck(L_760);
		float L_761;
		L_761 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_760, ((int32_t)231), (bool)1);
		__this->___MODE_SCHWIMMEN_276_val = L_761;
		RuntimeObject* L_762;
		L_762 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_762);
		RuntimeObject* L_763;
		L_763 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_762, 5, ((int32_t)-1052624291));
		__this->___MOVING_277 = L_763;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_277), (void*)L_763);
		RuntimeObject* L_764 = __this->___MOVING_277;
		NullCheck(L_764);
		float L_765;
		L_765 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_764, ((int32_t)231), (bool)1);
		__this->___MOVING_277_val = L_765;
		float L_766 = __this->___MOVING_277_val;
		float L_767 = __this->___MODE_SCHWIMMEN_276_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_768;
		L_768 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_766, L_767, NULL);
		if (L_768)
		{
			goto IL_212e;
		}
	}
	{
		RuntimeObject* L_769;
		L_769 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_769);
		RuntimeObject* L_770;
		L_770 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_769, 5, ((int32_t)484));
		__this->___FORCE_UP_279 = L_770;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_UP_279), (void*)L_770);
		RuntimeObject* L_771 = __this->___FORCE_UP_279;
		NullCheck(L_771);
		float L_772;
		L_772 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_771, ((int32_t)231), (bool)1);
		__this->___FORCE_UP_279_val = L_772;
		float L_773 = __this->___FORCE_UP_279_val;
		bool L_774;
		L_774 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_773, (0.0f), NULL);
		if (L_774)
		{
			goto IL_2221;
		}
	}

IL_212e:
	{
		RuntimeObject* L_775;
		L_775 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_775);
		RuntimeObject* L_776;
		L_776 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_775, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_280 = L_776;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_280), (void*)L_776);
		RuntimeObject* L_777;
		L_777 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_777);
		RuntimeObject* L_778;
		L_778 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_777, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_281 = L_778;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_281), (void*)L_778);
		RuntimeObject* L_779 = __this->___DUCK_VAL_281;
		NullCheck(L_779);
		float L_780;
		L_780 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_779, ((int32_t)231), (bool)1);
		__this->___DUCK_VAL_281_val = L_780;
		RuntimeObject* L_781;
		L_781 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_781);
		RuntimeObject* L_782;
		L_782 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_781, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_282 = L_782;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_282), (void*)L_782);
		RuntimeObject* L_783 = __this->___DUCK_VAL_282;
		NullCheck(L_783);
		float L_784;
		L_784 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_783, ((int32_t)231), (bool)1);
		__this->___DUCK_VAL_282_val = L_784;
		RuntimeObject* L_785;
		L_785 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_785);
		RuntimeObject* L_786;
		L_786 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_785, 5, ((int32_t)1846696428));
		__this->___DUCK_STR_284 = L_786;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_STR_284), (void*)L_786);
		RuntimeObject* L_787 = __this->___DUCK_STR_284;
		NullCheck(L_787);
		float L_788;
		L_788 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_787, ((int32_t)231), (bool)1);
		__this->___DUCK_STR_284_val = L_788;
		RuntimeObject* L_789;
		L_789 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_789);
		RuntimeObject* L_790;
		L_790 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_789, 5, ((int32_t)484));
		__this->___FORCE_UP_286 = L_790;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_UP_286), (void*)L_790);
		RuntimeObject* L_791 = __this->___FORCE_UP_286;
		NullCheck(L_791);
		float L_792;
		L_792 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_791, ((int32_t)231), (bool)1);
		__this->___FORCE_UP_286_val = L_792;
		RuntimeObject* L_793 = __this->___DUCK_VAL_280;
		float L_794 = __this->___DUCK_VAL_282_val;
		float L_795 = __this->___DUCK_STR_284_val;
		float L_796 = __this->___FORCE_UP_286_val;
		NullCheck(L_793);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_793, ((int32_t)231), ((float)il2cpp_codegen_add(L_794, ((float)il2cpp_codegen_multiply(L_795, L_796)))));
	}

IL_2221:
	{
		RuntimeObject* L_797;
		L_797 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_797);
		RuntimeObject* L_798;
		L_798 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_797, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_287 = L_798;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_287), (void*)L_798);
		RuntimeObject* L_799;
		L_799 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_799);
		RuntimeObject* L_800;
		L_800 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_799, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_288 = L_800;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_288), (void*)L_800);
		RuntimeObject* L_801 = __this->___PLAYER_SIZE_288;
		NullCheck(L_801);
		float L_802;
		L_802 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_801, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_288_val = L_802;
		RuntimeObject* L_803;
		L_803 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_803);
		RuntimeObject* L_804;
		L_804 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_803, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_289 = L_804;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_289), (void*)L_804);
		RuntimeObject* L_805 = __this->___PLAYER_SIZE_289;
		NullCheck(L_805);
		float L_806;
		L_806 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_805, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_289_val = L_806;
		RuntimeObject* L_807;
		L_807 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_807);
		RuntimeObject* L_808;
		L_808 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_807, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_291 = L_808;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_291), (void*)L_808);
		RuntimeObject* L_809 = __this->___DUCK_VAL_291;
		NullCheck(L_809);
		float L_810;
		L_810 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_809, ((int32_t)231), (bool)1);
		__this->___DUCK_VAL_291_val = L_810;
		RuntimeObject* L_811 = __this->___PLAYER_SIZE_287;
		float L_812 = __this->___PLAYER_SIZE_289_val;
		float L_813 = __this->___DUCK_VAL_291_val;
		NullCheck(L_811);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_811, ((int32_t)231), ((float)il2cpp_codegen_add(L_812, L_813)));
		RuntimeObject* L_814;
		L_814 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_814);
		RuntimeObject* L_815;
		L_815 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_814, 5, ((int32_t)-1023981992));
		__this->___MODE_GEHEN_292 = L_815;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_GEHEN_292), (void*)L_815);
		RuntimeObject* L_816 = __this->___MODE_GEHEN_292;
		NullCheck(L_816);
		float L_817;
		L_817 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_816, ((int32_t)231), (bool)1);
		__this->___MODE_GEHEN_292_val = L_817;
		RuntimeObject* L_818;
		L_818 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_818);
		RuntimeObject* L_819;
		L_819 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_818, 5, ((int32_t)-1052624291));
		__this->___MOVING_293 = L_819;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_293), (void*)L_819);
		RuntimeObject* L_820 = __this->___MOVING_293;
		NullCheck(L_820);
		float L_821;
		L_821 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_820, ((int32_t)231), (bool)1);
		__this->___MOVING_293_val = L_821;
		float L_822 = __this->___MOVING_293_val;
		float L_823 = __this->___MODE_GEHEN_292_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_824;
		L_824 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_822, L_823, NULL);
		if (!L_824)
		{
			goto IL_277c;
		}
	}
	{
		RuntimeObject* L_825;
		L_825 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_825);
		RuntimeObject* L_826;
		L_826 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_825, 5, ((int32_t)259503833));
		__this->___JUMP_PHASE_295 = L_826;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JUMP_PHASE_295), (void*)L_826);
		RuntimeObject* L_827 = __this->___JUMP_PHASE_295;
		NullCheck(L_827);
		float L_828;
		L_828 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_827, ((int32_t)231), (bool)1);
		__this->___JUMP_PHASE_295_val = L_828;
		float L_829 = __this->___JUMP_PHASE_295_val;
		bool L_830;
		L_830 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_829, (0.0f), NULL);
		if (L_830)
		{
			goto IL_2400;
		}
	}
	{
		RuntimeObject* L_831;
		L_831 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_831);
		RuntimeObject* L_832;
		L_832 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_831, 5, ((int32_t)484));
		__this->___FORCE_UP_297 = L_832;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_UP_297), (void*)L_832);
		RuntimeObject* L_833 = __this->___FORCE_UP_297;
		NullCheck(L_833);
		float L_834;
		L_834 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_833, ((int32_t)231), (bool)1);
		__this->___FORCE_UP_297_val = L_834;
		float L_835 = __this->___FORCE_UP_297_val;
		bool L_836;
		L_836 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_835, (0.100000001f), NULL);
		if (L_836)
		{
			goto IL_277c;
		}
	}
	{
		RuntimeObject* L_837;
		L_837 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_837);
		RuntimeObject* L_838;
		L_838 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_837, 5, ((int32_t)259503833));
		__this->___JUMP_PHASE_299 = L_838;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JUMP_PHASE_299), (void*)L_838);
		RuntimeObject* L_839 = __this->___JUMP_PHASE_299;
		NullCheck(L_839);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_839, ((int32_t)231), (1.0f));
	}

IL_2400:
	{
		RuntimeObject* L_840;
		L_840 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_840);
		RuntimeObject* L_841;
		L_841 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_840, 5, ((int32_t)259503833));
		__this->___JUMP_PHASE_301 = L_841;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JUMP_PHASE_301), (void*)L_841);
		RuntimeObject* L_842 = __this->___JUMP_PHASE_301;
		NullCheck(L_842);
		float L_843;
		L_843 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_842, ((int32_t)231), (bool)1);
		__this->___JUMP_PHASE_301_val = L_843;
		float L_844 = __this->___JUMP_PHASE_301_val;
		bool L_845;
		L_845 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_844, (1.0f), NULL);
		if (L_845)
		{
			goto IL_2546;
		}
	}
	{
		RuntimeObject* L_846;
		L_846 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_846);
		RuntimeObject* L_847;
		L_847 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_846, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_302 = L_847;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_302), (void*)L_847);
		RuntimeObject* L_848;
		L_848 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_848);
		RuntimeObject* L_849;
		L_849 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_848, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_303 = L_849;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_303), (void*)L_849);
		RuntimeObject* L_850 = __this->___DUCK_VAL_303;
		NullCheck(L_850);
		float L_851;
		L_851 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_850, ((int32_t)231), (bool)1);
		__this->___DUCK_VAL_303_val = L_851;
		RuntimeObject* L_852;
		L_852 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_852);
		RuntimeObject* L_853;
		L_853 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_852, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_304 = L_853;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_304), (void*)L_853);
		RuntimeObject* L_854 = __this->___DUCK_VAL_304;
		NullCheck(L_854);
		float L_855;
		L_855 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_854, ((int32_t)231), (bool)1);
		__this->___DUCK_VAL_304_val = L_855;
		RuntimeObject* L_856 = __this->___DUCK_VAL_302;
		float L_857 = __this->___DUCK_VAL_304_val;
		NullCheck(L_856);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_856, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_857, (0.5f))));
		RuntimeObject* L_858;
		L_858 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_858);
		RuntimeObject* L_859;
		L_859 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_858, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_308 = L_859;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_308), (void*)L_859);
		RuntimeObject* L_860 = __this->___DUCK_VAL_308;
		NullCheck(L_860);
		float L_861;
		L_861 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_860, ((int32_t)231), (bool)1);
		__this->___DUCK_VAL_308_val = L_861;
		float L_862 = __this->___DUCK_VAL_308_val;
		bool L_863;
		L_863 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_862, (-0.699999988f), NULL);
		if (!L_863)
		{
			goto IL_277c;
		}
	}
	{
		RuntimeObject* L_864;
		L_864 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_864);
		RuntimeObject* L_865;
		L_865 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_864, 5, ((int32_t)259503833));
		__this->___JUMP_PHASE_310 = L_865;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JUMP_PHASE_310), (void*)L_865);
		RuntimeObject* L_866 = __this->___JUMP_PHASE_310;
		NullCheck(L_866);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_866, ((int32_t)231), (2.0f));
		goto IL_277c;
	}

IL_2546:
	{
		RuntimeObject* L_867;
		L_867 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_867);
		RuntimeObject* L_868;
		L_868 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_867, 5, ((int32_t)259503833));
		__this->___JUMP_PHASE_312 = L_868;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JUMP_PHASE_312), (void*)L_868);
		RuntimeObject* L_869 = __this->___JUMP_PHASE_312;
		NullCheck(L_869);
		float L_870;
		L_870 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_869, ((int32_t)231), (bool)1);
		__this->___JUMP_PHASE_312_val = L_870;
		float L_871 = __this->___JUMP_PHASE_312_val;
		bool L_872;
		L_872 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_871, (2.0f), NULL);
		if (L_872)
		{
			goto IL_26d0;
		}
	}
	{
		RuntimeObject* L_873;
		L_873 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_873);
		RuntimeObject* L_874;
		L_874 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_873, 5, ((int32_t)1846699062));
		__this->___DUCK_VAL_314 = L_874;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_VAL_314), (void*)L_874);
		RuntimeObject* L_875 = __this->___DUCK_VAL_314;
		NullCheck(L_875);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_875, ((int32_t)231), (0.0f));
		RuntimeObject* L_876;
		L_876 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_876);
		RuntimeObject* L_877;
		L_877 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_876, 5, ((int32_t)461));
		__this->___PLAYER_Z_315 = L_877;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_315), (void*)L_877);
		RuntimeObject* L_878;
		L_878 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_878);
		RuntimeObject* L_879;
		L_879 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_878, 5, ((int32_t)461));
		__this->___PLAYER_Z_316 = L_879;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_316), (void*)L_879);
		RuntimeObject* L_880 = __this->___PLAYER_Z_316;
		NullCheck(L_880);
		float L_881;
		L_881 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_880, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_316_val = L_881;
		RuntimeObject* L_882;
		L_882 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_882);
		RuntimeObject* L_883;
		L_883 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_882, 5, ((int32_t)567));
		__this->___FLOOR_HGT_317 = L_883;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOOR_HGT_317), (void*)L_883);
		RuntimeObject* L_884 = __this->___FLOOR_HGT_317;
		NullCheck(L_884);
		float L_885;
		L_885 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_884, ((int32_t)231), (bool)1);
		__this->___FLOOR_HGT_317_val = L_885;
		RuntimeObject* L_886;
		L_886 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_886);
		RuntimeObject* L_887;
		L_887 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_886, 5, ((int32_t)25486605));
		__this->___MY_SIZE_319 = L_887;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_SIZE_319), (void*)L_887);
		RuntimeObject* L_888 = __this->___MY_SIZE_319;
		NullCheck(L_888);
		float L_889;
		L_889 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_888, ((int32_t)231), (bool)1);
		__this->___MY_SIZE_319_val = L_889;
		RuntimeObject* L_890 = __this->___PLAYER_Z_315;
		float L_891 = __this->___FLOOR_HGT_317_val;
		float L_892 = __this->___MY_SIZE_319_val;
		NullCheck(L_890);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_890, ((int32_t)231), ((float)il2cpp_codegen_add(L_891, L_892)));
		RuntimeObject* L_893;
		L_893 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_893);
		RuntimeObject* L_894;
		L_894 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_893, 5, ((int32_t)433));
		__this->___PLAYER_VZ_321 = L_894;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VZ_321), (void*)L_894);
		RuntimeObject* L_895 = __this->___PLAYER_VZ_321;
		NullCheck(L_895);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_895, ((int32_t)231), (0.349999994f));
		RuntimeObject* L_896;
		L_896 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_896);
		RuntimeObject* L_897;
		L_897 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_896, 5, ((int32_t)259503833));
		__this->___JUMP_PHASE_323 = L_897;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JUMP_PHASE_323), (void*)L_897);
		RuntimeObject* L_898 = __this->___JUMP_PHASE_323;
		NullCheck(L_898);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_898, ((int32_t)231), (3.0f));
		goto IL_277c;
	}

IL_26d0:
	{
		RuntimeObject* L_899;
		L_899 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_899);
		RuntimeObject* L_900;
		L_900 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_899, 5, ((int32_t)433));
		__this->___PLAYER_VZ_325 = L_900;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VZ_325), (void*)L_900);
		RuntimeObject* L_901 = __this->___PLAYER_VZ_325;
		NullCheck(L_901);
		float L_902;
		L_902 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_901, ((int32_t)231), (bool)1);
		__this->___PLAYER_VZ_325_val = L_902;
		float L_903 = __this->___PLAYER_VZ_325_val;
		bool L_904;
		L_904 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_903, (0.0f), NULL);
		if (L_904)
		{
			goto IL_277c;
		}
	}
	{
		RuntimeObject* L_905;
		L_905 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_905);
		RuntimeObject* L_906;
		L_906 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_905, 5, ((int32_t)479));
		__this->___PLAYER_HGT_327 = L_906;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HGT_327), (void*)L_906);
		RuntimeObject* L_907 = __this->___PLAYER_HGT_327;
		NullCheck(L_907);
		float L_908;
		L_908 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_907, ((int32_t)231), (bool)1);
		__this->___PLAYER_HGT_327_val = L_908;
		float L_909 = __this->___PLAYER_HGT_327_val;
		bool L_910;
		L_910 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_909, (0.0f), NULL);
		if (L_910)
		{
			goto IL_277c;
		}
	}
	{
		RuntimeObject* L_911;
		L_911 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_911);
		RuntimeObject* L_912;
		L_912 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_911, 5, ((int32_t)259503833));
		__this->___JUMP_PHASE_329 = L_912;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JUMP_PHASE_329), (void*)L_912);
		RuntimeObject* L_913 = __this->___JUMP_PHASE_329;
		NullCheck(L_913);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_913, ((int32_t)231), (0.0f));
	}

IL_277c:
	{
		RuntimeObject* L_914;
		L_914 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_914);
		RuntimeObject* L_915;
		L_915 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_914, 5, ((int32_t)310408863));
		__this->___PLAYER_SPEED_SQR_330 = L_915;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SPEED_SQR_330), (void*)L_915);
		RuntimeObject* L_916;
		L_916 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_916);
		RuntimeObject* L_917;
		L_917 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_916, 5, ((int32_t)310408863));
		__this->___PLAYER_SPEED_SQR_331 = L_917;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SPEED_SQR_331), (void*)L_917);
		RuntimeObject* L_918 = __this->___PLAYER_SPEED_SQR_331;
		NullCheck(L_918);
		float L_919;
		L_919 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_918, ((int32_t)231), (bool)1);
		__this->___PLAYER_SPEED_SQR_331_val = L_919;
		RuntimeObject* L_920;
		L_920 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_920);
		RuntimeObject* L_921;
		L_921 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_920, 5, ((int32_t)431));
		__this->___PLAYER_VX_332 = L_921;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_332), (void*)L_921);
		RuntimeObject* L_922 = __this->___PLAYER_VX_332;
		NullCheck(L_922);
		float L_923;
		L_923 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_922, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_332_val = L_923;
		RuntimeObject* L_924;
		L_924 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_924);
		RuntimeObject* L_925;
		L_925 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_924, 5, ((int32_t)431));
		__this->___PLAYER_VX_334 = L_925;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_334), (void*)L_925);
		RuntimeObject* L_926 = __this->___PLAYER_VX_334;
		NullCheck(L_926);
		float L_927;
		L_927 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_926, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_334_val = L_927;
		RuntimeObject* L_928;
		L_928 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_928);
		RuntimeObject* L_929;
		L_929 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_928, 5, ((int32_t)432));
		__this->___PLAYER_VY_336 = L_929;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_336), (void*)L_929);
		RuntimeObject* L_930 = __this->___PLAYER_VY_336;
		NullCheck(L_930);
		float L_931;
		L_931 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_930, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_336_val = L_931;
		RuntimeObject* L_932;
		L_932 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_932);
		RuntimeObject* L_933;
		L_933 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_932, 5, ((int32_t)432));
		__this->___PLAYER_VY_338 = L_933;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_338), (void*)L_933);
		RuntimeObject* L_934 = __this->___PLAYER_VY_338;
		NullCheck(L_934);
		float L_935;
		L_935 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_934, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_338_val = L_935;
		RuntimeObject* L_936 = __this->___PLAYER_SPEED_SQR_330;
		float L_937 = __this->___PLAYER_VX_332_val;
		float L_938 = __this->___PLAYER_VX_334_val;
		float L_939 = __this->___PLAYER_VY_336_val;
		float L_940 = __this->___PLAYER_VY_338_val;
		NullCheck(L_936);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_936, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_937, L_938)), ((float)il2cpp_codegen_multiply(L_939, L_940)))));
		RuntimeObject* L_941;
		L_941 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_941);
		RuntimeObject* L_942;
		L_942 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_941, 5, ((int32_t)-1243164059));
		__this->___TILT_DECREASE_340 = L_942;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TILT_DECREASE_340), (void*)L_942);
		RuntimeObject* L_943 = __this->___TILT_DECREASE_340;
		NullCheck(L_943);
		float L_944;
		L_944 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_943, ((int32_t)231), (bool)1);
		__this->___TILT_DECREASE_340_val = L_944;
		float L_945 = __this->___TILT_DECREASE_340_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_946;
		L_946 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_945, (1.0f), NULL);
		if (!L_946)
		{
			goto IL_2a74;
		}
	}
	{
		RuntimeObject* L_947;
		L_947 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_947);
		RuntimeObject* L_948;
		L_948 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_947, 5, ((int32_t)-527309462));
		__this->___MAX_PLAYER_TILT_P_341 = L_948;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAX_PLAYER_TILT_P_341), (void*)L_948);
		RuntimeObject* L_949 = __this->___MAX_PLAYER_TILT_P_341;
		NullCheck(L_949);
		float L_950;
		L_950 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_949, ((int32_t)231), (bool)1);
		__this->___MAX_PLAYER_TILT_P_341_val = L_950;
		RuntimeObject* L_951;
		L_951 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_951);
		RuntimeObject* L_952;
		L_952 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_951, 5, ((int32_t)435));
		__this->___PLAYER_TILT_342 = L_952;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_342), (void*)L_952);
		RuntimeObject* L_953 = __this->___PLAYER_TILT_342;
		NullCheck(L_953);
		float L_954;
		L_954 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_953, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_342_val = L_954;
		float L_955 = __this->___PLAYER_TILT_342_val;
		float L_956 = __this->___MAX_PLAYER_TILT_P_341_val;
		bool L_957;
		L_957 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_955, L_956, NULL);
		if (L_957)
		{
			goto IL_29c8;
		}
	}
	{
		RuntimeObject* L_958;
		L_958 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_958);
		RuntimeObject* L_959;
		L_959 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_958, 5, ((int32_t)-527309464));
		__this->___MAX_PLAYER_TILT_N_343 = L_959;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAX_PLAYER_TILT_N_343), (void*)L_959);
		RuntimeObject* L_960 = __this->___MAX_PLAYER_TILT_N_343;
		NullCheck(L_960);
		float L_961;
		L_961 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_960, ((int32_t)231), (bool)1);
		__this->___MAX_PLAYER_TILT_N_343_val = L_961;
		RuntimeObject* L_962;
		L_962 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_962);
		RuntimeObject* L_963;
		L_963 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_962, 5, ((int32_t)435));
		__this->___PLAYER_TILT_344 = L_963;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_344), (void*)L_963);
		RuntimeObject* L_964 = __this->___PLAYER_TILT_344;
		NullCheck(L_964);
		float L_965;
		L_965 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_964, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_344_val = L_965;
		float L_966 = __this->___PLAYER_TILT_344_val;
		float L_967 = __this->___MAX_PLAYER_TILT_N_343_val;
		bool L_968;
		L_968 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_966, L_967, NULL);
		if (L_968)
		{
			goto IL_2a48;
		}
	}

IL_29c8:
	{
		RuntimeObject* L_969;
		L_969 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_969);
		RuntimeObject* L_970;
		L_970 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_969, 5, ((int32_t)310408863));
		__this->___PLAYER_SPEED_SQR_346 = L_970;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SPEED_SQR_346), (void*)L_970);
		RuntimeObject* L_971 = __this->___PLAYER_SPEED_SQR_346;
		NullCheck(L_971);
		float L_972;
		L_972 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_971, ((int32_t)231), (bool)1);
		__this->___PLAYER_SPEED_SQR_346_val = L_972;
		float L_973 = __this->___PLAYER_SPEED_SQR_346_val;
		bool L_974;
		L_974 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_973, (0.400000006f), NULL);
		if (L_974)
		{
			goto IL_2a48;
		}
	}
	{
		RuntimeObject* L_975;
		L_975 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_975);
		RuntimeObject* L_976;
		L_976 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_975, 5, ((int32_t)433));
		__this->___PLAYER_VZ_348 = L_976;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VZ_348), (void*)L_976);
		RuntimeObject* L_977 = __this->___PLAYER_VZ_348;
		NullCheck(L_977);
		float L_978;
		L_978 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_977, ((int32_t)231), (bool)1);
		__this->___PLAYER_VZ_348_val = L_978;
		float L_979 = __this->___PLAYER_VZ_348_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_980;
		L_980 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_979, (0.0f), NULL);
		if (L_980)
		{
			goto IL_2a74;
		}
	}

IL_2a48:
	{
		RuntimeObject* L_981;
		L_981 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_981);
		RuntimeObject* L_982;
		L_982 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_981, 5, ((int32_t)-1243164059));
		__this->___TILT_DECREASE_350 = L_982;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TILT_DECREASE_350), (void*)L_982);
		RuntimeObject* L_983 = __this->___TILT_DECREASE_350;
		NullCheck(L_983);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_983, ((int32_t)231), (0.800000012f));
	}

IL_2a74:
	{
		RuntimeObject* L_984;
		L_984 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_984);
		RuntimeObject* L_985;
		L_985 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_984, 5, ((int32_t)435));
		__this->___PLAYER_TILT_351 = L_985;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_351), (void*)L_985);
		RuntimeObject* L_986;
		L_986 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_986);
		RuntimeObject* L_987;
		L_987 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_986, 5, ((int32_t)435));
		__this->___PLAYER_TILT_352 = L_987;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_352), (void*)L_987);
		RuntimeObject* L_988 = __this->___PLAYER_TILT_352;
		NullCheck(L_988);
		float L_989;
		L_989 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_988, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_352_val = L_989;
		RuntimeObject* L_990;
		L_990 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_990);
		RuntimeObject* L_991;
		L_991 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_990, 5, ((int32_t)-1243164059));
		__this->___TILT_DECREASE_353 = L_991;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TILT_DECREASE_353), (void*)L_991);
		RuntimeObject* L_992 = __this->___TILT_DECREASE_353;
		NullCheck(L_992);
		float L_993;
		L_993 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_992, ((int32_t)231), (bool)1);
		__this->___TILT_DECREASE_353_val = L_993;
		RuntimeObject* L_994;
		L_994 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_994);
		RuntimeObject* L_995;
		L_995 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_994, 5, ((int32_t)435));
		__this->___PLAYER_TILT_355 = L_995;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_355), (void*)L_995);
		RuntimeObject* L_996 = __this->___PLAYER_TILT_355;
		NullCheck(L_996);
		float L_997;
		L_997 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_996, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_355_val = L_997;
		RuntimeObject* L_998;
		L_998 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_998);
		RuntimeObject* L_999;
		L_999 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_998, 5, ((int32_t)483));
		__this->___FORCE_TILT_359 = L_999;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_TILT_359), (void*)L_999);
		RuntimeObject* L_1000 = __this->___FORCE_TILT_359;
		NullCheck(L_1000);
		float L_1001;
		L_1001 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1000, ((int32_t)231), (bool)1);
		__this->___FORCE_TILT_359_val = L_1001;
		RuntimeObject* L_1002;
		L_1002 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1002);
		RuntimeObject* L_1003;
		L_1003 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1002, 5, ((int32_t)1319913115));
		__this->___FLOAT_STR_363 = L_1003;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOAT_STR_363), (void*)L_1003);
		RuntimeObject* L_1004 = __this->___FLOAT_STR_363;
		NullCheck(L_1004);
		float L_1005;
		L_1005 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1004, ((int32_t)231), (bool)1);
		__this->___FLOAT_STR_363_val = L_1005;
		RuntimeObject* L_1006;
		L_1006 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1006);
		RuntimeObject* L_1007;
		L_1007 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1006, 5, ((int32_t)484));
		__this->___FORCE_UP_365 = L_1007;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FORCE_UP_365), (void*)L_1007);
		RuntimeObject* L_1008 = __this->___FORCE_UP_365;
		NullCheck(L_1008);
		float L_1009;
		L_1009 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1008, ((int32_t)231), (bool)1);
		__this->___FORCE_UP_365_val = L_1009;
		RuntimeObject* L_1010;
		L_1010 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1010);
		RuntimeObject* L_1011;
		L_1011 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1010, 5, ((int32_t)569));
		__this->___TIME_CORR_367 = L_1011;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_367), (void*)L_1011);
		RuntimeObject* L_1012 = __this->___TIME_CORR_367;
		NullCheck(L_1012);
		float L_1013;
		L_1013 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1012, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_367_val = L_1013;
		RuntimeObject* L_1014;
		L_1014 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1014);
		RuntimeObject* L_1015;
		L_1015 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1014, 5, ((int32_t)-964995364));
		__this->___FLY_MODE_372 = L_1015;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLY_MODE_372), (void*)L_1015);
		RuntimeObject* L_1016 = __this->___FLY_MODE_372;
		NullCheck(L_1016);
		float L_1017;
		L_1017 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1016, ((int32_t)231), (bool)1);
		__this->___FLY_MODE_372_val = L_1017;
		RuntimeObject* L_1018 = __this->___PLAYER_TILT_351;
		float L_1019 = __this->___TILT_DECREASE_353_val;
		float L_1020 = __this->___PLAYER_TILT_355_val;
		float L_1021 = __this->___FORCE_TILT_359_val;
		float L_1022 = __this->___FLOAT_STR_363_val;
		float L_1023 = __this->___FORCE_UP_365_val;
		float L_1024 = __this->___TIME_CORR_367_val;
		float L_1025 = __this->___FLY_MODE_372_val;
		NullCheck(L_1018);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1018, ((int32_t)231), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1019, L_1020)), ((float)il2cpp_codegen_multiply((0.300000012f), L_1021)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.300000012f), L_1022)), L_1023)), L_1024)), ((float)il2cpp_codegen_subtract((1.0f), L_1025)))))));
		RuntimeObject* L_1026;
		L_1026 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1026);
		RuntimeObject* L_1027;
		L_1027 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1026, 5, ((int32_t)310408863));
		__this->___PLAYER_SPEED_SQR_375 = L_1027;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SPEED_SQR_375), (void*)L_1027);
		RuntimeObject* L_1028 = __this->___PLAYER_SPEED_SQR_375;
		NullCheck(L_1028);
		float L_1029;
		L_1029 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1028, ((int32_t)231), (bool)1);
		__this->___PLAYER_SPEED_SQR_375_val = L_1029;
		float L_1030 = __this->___PLAYER_SPEED_SQR_375_val;
		bool L_1031;
		L_1031 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_1030, (0.0f), NULL);
		if (L_1031)
		{
			goto IL_2dc6;
		}
	}
	{
		RuntimeObject* L_1032;
		L_1032 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1032);
		RuntimeObject* L_1033;
		L_1033 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1032, 5, ((int32_t)-527309462));
		__this->___MAX_PLAYER_TILT_P_377 = L_1033;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAX_PLAYER_TILT_P_377), (void*)L_1033);
		RuntimeObject* L_1034 = __this->___MAX_PLAYER_TILT_P_377;
		NullCheck(L_1034);
		float L_1035;
		L_1035 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1034, ((int32_t)231), (bool)1);
		__this->___MAX_PLAYER_TILT_P_377_val = L_1035;
		RuntimeObject* L_1036;
		L_1036 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1036);
		RuntimeObject* L_1037;
		L_1037 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1036, 5, ((int32_t)435));
		__this->___PLAYER_TILT_378 = L_1037;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_378), (void*)L_1037);
		RuntimeObject* L_1038 = __this->___PLAYER_TILT_378;
		NullCheck(L_1038);
		float L_1039;
		L_1039 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1038, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_378_val = L_1039;
		float L_1040 = __this->___PLAYER_TILT_378_val;
		float L_1041 = __this->___MAX_PLAYER_TILT_P_377_val;
		bool L_1042;
		L_1042 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_1040, L_1041, NULL);
		if (!L_1042)
		{
			goto IL_2d2b;
		}
	}
	{
		RuntimeObject* L_1043;
		L_1043 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1043);
		RuntimeObject* L_1044;
		L_1044 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1043, 5, ((int32_t)-1243164059));
		__this->___TILT_DECREASE_380 = L_1044;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TILT_DECREASE_380), (void*)L_1044);
		RuntimeObject* L_1045 = __this->___TILT_DECREASE_380;
		NullCheck(L_1045);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1045, ((int32_t)231), (1.0f));
	}

IL_2d2b:
	{
		RuntimeObject* L_1046;
		L_1046 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1046);
		RuntimeObject* L_1047;
		L_1047 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1046, 5, ((int32_t)-527309464));
		__this->___MAX_PLAYER_TILT_N_381 = L_1047;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAX_PLAYER_TILT_N_381), (void*)L_1047);
		RuntimeObject* L_1048 = __this->___MAX_PLAYER_TILT_N_381;
		NullCheck(L_1048);
		float L_1049;
		L_1049 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1048, ((int32_t)231), (bool)1);
		__this->___MAX_PLAYER_TILT_N_381_val = L_1049;
		RuntimeObject* L_1050;
		L_1050 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1050);
		RuntimeObject* L_1051;
		L_1051 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1050, 5, ((int32_t)435));
		__this->___PLAYER_TILT_382 = L_1051;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_382), (void*)L_1051);
		RuntimeObject* L_1052 = __this->___PLAYER_TILT_382;
		NullCheck(L_1052);
		float L_1053;
		L_1053 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1052, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_382_val = L_1053;
		float L_1054 = __this->___PLAYER_TILT_382_val;
		float L_1055 = __this->___MAX_PLAYER_TILT_N_381_val;
		bool L_1056;
		L_1056 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_1054, L_1055, NULL);
		if (!L_1056)
		{
			goto IL_2dc6;
		}
	}
	{
		RuntimeObject* L_1057;
		L_1057 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1057);
		RuntimeObject* L_1058;
		L_1058 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1057, 5, ((int32_t)-1243164059));
		__this->___TILT_DECREASE_384 = L_1058;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TILT_DECREASE_384), (void*)L_1058);
		RuntimeObject* L_1059 = __this->___TILT_DECREASE_384;
		NullCheck(L_1059);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1059, ((int32_t)231), (1.0f));
	}

IL_2dc6:
	{
		RuntimeObject* L_1060;
		L_1060 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1060);
		RuntimeObject* L_1061;
		L_1061 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1060, 5, ((int32_t)-539849892));
		__this->___MODE_SCHWIMMEN_385 = L_1061;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_SCHWIMMEN_385), (void*)L_1061);
		RuntimeObject* L_1062 = __this->___MODE_SCHWIMMEN_385;
		NullCheck(L_1062);
		float L_1063;
		L_1063 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1062, ((int32_t)231), (bool)1);
		__this->___MODE_SCHWIMMEN_385_val = L_1063;
		RuntimeObject* L_1064;
		L_1064 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1064);
		RuntimeObject* L_1065;
		L_1065 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1064, 5, ((int32_t)-1052624291));
		__this->___MOVING_386 = L_1065;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_386), (void*)L_1065);
		RuntimeObject* L_1066 = __this->___MOVING_386;
		NullCheck(L_1066);
		float L_1067;
		L_1067 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1066, ((int32_t)231), (bool)1);
		__this->___MOVING_386_val = L_1067;
		float L_1068 = __this->___MOVING_386_val;
		float L_1069 = __this->___MODE_SCHWIMMEN_385_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_1070;
		L_1070 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_1068, L_1069, NULL);
		if (!L_1070)
		{
			goto IL_2efc;
		}
	}
	{
		RuntimeObject* L_1071;
		L_1071 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1071);
		RuntimeObject* L_1072;
		L_1072 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1071, 5, ((int32_t)435));
		__this->___PLAYER_TILT_387 = L_1072;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_387), (void*)L_1072);
		RuntimeObject* L_1073;
		L_1073 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1073);
		RuntimeObject* L_1074;
		L_1074 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1073, 5, ((int32_t)435));
		__this->___PLAYER_TILT_388 = L_1074;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_388), (void*)L_1074);
		RuntimeObject* L_1075 = __this->___PLAYER_TILT_388;
		NullCheck(L_1075);
		float L_1076;
		L_1076 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1075, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_388_val = L_1076;
		RuntimeObject* L_1077;
		L_1077 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1077);
		RuntimeObject* L_1078;
		L_1078 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1077, 5, ((int32_t)435));
		__this->___PLAYER_TILT_389 = L_1078;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_389), (void*)L_1078);
		RuntimeObject* L_1079 = __this->___PLAYER_TILT_389;
		NullCheck(L_1079);
		float L_1080;
		L_1080 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1079, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_389_val = L_1080;
		RuntimeObject* L_1081;
		L_1081 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1081);
		RuntimeObject* L_1082;
		L_1082 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1081, 5, ((int32_t)428));
		__this->___WAVE_393 = L_1082;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAVE_393), (void*)L_1082);
		RuntimeObject* L_1083 = __this->___WAVE_393;
		NullCheck(L_1083);
		float L_1084;
		L_1084 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1083, ((int32_t)231), (bool)1);
		__this->___WAVE_393_val = L_1084;
		RuntimeObject* L_1085 = __this->___PLAYER_TILT_387;
		float L_1086 = __this->___PLAYER_TILT_389_val;
		float L_1087 = __this->___WAVE_393_val;
		NullCheck(L_1085);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1085, ((int32_t)231), ((float)il2cpp_codegen_add(L_1086, ((float)il2cpp_codegen_multiply((0.00999999978f), L_1087)))));
	}

IL_2efc:
	{
		RuntimeObject* L_1088;
		L_1088 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1088);
		RuntimeObject* L_1089;
		L_1089 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1088, 5, ((int32_t)1042033433));
		__this->___MODE_TAUCHEN_394 = L_1089;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_TAUCHEN_394), (void*)L_1089);
		RuntimeObject* L_1090 = __this->___MODE_TAUCHEN_394;
		NullCheck(L_1090);
		float L_1091;
		L_1091 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1090, ((int32_t)231), (bool)1);
		__this->___MODE_TAUCHEN_394_val = L_1091;
		RuntimeObject* L_1092;
		L_1092 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1092);
		RuntimeObject* L_1093;
		L_1093 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1092, 5, ((int32_t)-1052624291));
		__this->___MOVING_395 = L_1093;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_395), (void*)L_1093);
		RuntimeObject* L_1094 = __this->___MOVING_395;
		NullCheck(L_1094);
		float L_1095;
		L_1095 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1094, ((int32_t)231), (bool)1);
		__this->___MOVING_395_val = L_1095;
		float L_1096 = __this->___MOVING_395_val;
		float L_1097 = __this->___MODE_TAUCHEN_394_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_1098;
		L_1098 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_1096, L_1097, NULL);
		if (L_1098)
		{
			goto IL_3101;
		}
	}
	{
		RuntimeObject* L_1099;
		L_1099 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1099);
		RuntimeObject* L_1100;
		L_1100 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1099, 5, ((int32_t)259503833));
		__this->___JUMP_PHASE_397 = L_1100;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JUMP_PHASE_397), (void*)L_1100);
		RuntimeObject* L_1101 = __this->___JUMP_PHASE_397;
		NullCheck(L_1101);
		float L_1102;
		L_1102 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1101, ((int32_t)231), (bool)1);
		__this->___JUMP_PHASE_397_val = L_1102;
		float L_1103 = __this->___JUMP_PHASE_397_val;
		bool L_1104;
		L_1104 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_1103, (0.0f), NULL);
		if (L_1104)
		{
			goto IL_3101;
		}
	}
	{
		RuntimeObject* L_1105;
		L_1105 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1105);
		RuntimeObject* L_1106;
		L_1106 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1105, 5, ((int32_t)-1243164059));
		__this->___TILT_DECREASE_399 = L_1106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TILT_DECREASE_399), (void*)L_1106);
		RuntimeObject* L_1107 = __this->___TILT_DECREASE_399;
		NullCheck(L_1107);
		float L_1108;
		L_1108 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1107, ((int32_t)231), (bool)1);
		__this->___TILT_DECREASE_399_val = L_1108;
		float L_1109 = __this->___TILT_DECREASE_399_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_1110;
		L_1110 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_1109, (1.0f), NULL);
		if (L_1110)
		{
			goto IL_3101;
		}
	}
	{
		RuntimeObject* L_1111;
		L_1111 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1111);
		RuntimeObject* L_1112;
		L_1112 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1111, 5, ((int32_t)479));
		__this->___PLAYER_HGT_401 = L_1112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HGT_401), (void*)L_1112);
		RuntimeObject* L_1113 = __this->___PLAYER_HGT_401;
		NullCheck(L_1113);
		float L_1114;
		L_1114 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1113, ((int32_t)231), (bool)1);
		__this->___PLAYER_HGT_401_val = L_1114;
		float L_1115 = __this->___PLAYER_HGT_401_val;
		bool L_1116;
		L_1116 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_1115, (0.0f), NULL);
		if (!L_1116)
		{
			goto IL_3101;
		}
	}
	{
		RuntimeObject* L_1117;
		L_1117 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1117);
		RuntimeObject* L_1118;
		L_1118 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1117, 5, ((int32_t)435));
		__this->___PLAYER_TILT_402 = L_1118;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_402), (void*)L_1118);
		RuntimeObject* L_1119;
		L_1119 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1119);
		RuntimeObject* L_1120;
		L_1120 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1119, 5, ((int32_t)435));
		__this->___PLAYER_TILT_403 = L_1120;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_403), (void*)L_1120);
		RuntimeObject* L_1121 = __this->___PLAYER_TILT_403;
		NullCheck(L_1121);
		float L_1122;
		L_1122 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1121, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_403_val = L_1122;
		RuntimeObject* L_1123;
		L_1123 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1123);
		RuntimeObject* L_1124;
		L_1124 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1123, 5, ((int32_t)435));
		__this->___PLAYER_TILT_404 = L_1124;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_404), (void*)L_1124);
		RuntimeObject* L_1125 = __this->___PLAYER_TILT_404;
		NullCheck(L_1125);
		float L_1126;
		L_1126 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1125, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_404_val = L_1126;
		RuntimeObject* L_1127;
		L_1127 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1127);
		RuntimeObject* L_1128;
		L_1128 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1127, 5, ((int32_t)479));
		__this->___PLAYER_HGT_409 = L_1128;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HGT_409), (void*)L_1128);
		RuntimeObject* L_1129 = __this->___PLAYER_HGT_409;
		NullCheck(L_1129);
		float L_1130;
		L_1130 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1129, ((int32_t)231), (bool)1);
		__this->___PLAYER_HGT_409_val = L_1130;
		RuntimeObject* L_1131 = __this->___PLAYER_TILT_402;
		float L_1132 = __this->___PLAYER_TILT_404_val;
		float L_1133 = __this->___PLAYER_HGT_409_val;
		NullCheck(L_1131);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1131, ((int32_t)231), ((float)il2cpp_codegen_add(L_1132, ((float)il2cpp_codegen_multiply((0.0299999993f), ((float)il2cpp_codegen_add(L_1133, (0.300000012f))))))));
	}

IL_3101:
	{
		RuntimeObject* L_1134;
		L_1134 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1134);
		RuntimeObject* L_1135;
		L_1135 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1134, 5, ((int32_t)1528103070));
		__this->___RICHTER_414 = L_1135;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RICHTER_414), (void*)L_1135);
		RuntimeObject* L_1136 = __this->___RICHTER_414;
		NullCheck(L_1136);
		float L_1137;
		L_1137 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1136, ((int32_t)231), (bool)1);
		__this->___RICHTER_414_val = L_1137;
		float L_1138 = __this->___RICHTER_414_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_1139;
		L_1139 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_1138, (0.0f), NULL);
		if (L_1139)
		{
			goto IL_3656;
		}
	}
	{
		RuntimeObject* L_1140;
		L_1140 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1140);
		RuntimeObject* L_1141;
		L_1141 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1140, 5, ((int32_t)459));
		__this->___PLAYER_X_415 = L_1141;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_415), (void*)L_1141);
		RuntimeObject* L_1142;
		L_1142 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1142);
		RuntimeObject* L_1143;
		L_1143 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1142, 5, ((int32_t)459));
		__this->___PLAYER_X_416 = L_1143;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_416), (void*)L_1143);
		RuntimeObject* L_1144 = __this->___PLAYER_X_416;
		NullCheck(L_1144);
		float L_1145;
		L_1145 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1144, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_416_val = L_1145;
		RuntimeObject* L_1146;
		L_1146 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1146);
		RuntimeObject* L_1147;
		L_1147 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1146, 5, ((int32_t)459));
		__this->___PLAYER_X_417 = L_1147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_417), (void*)L_1147);
		RuntimeObject* L_1148 = __this->___PLAYER_X_417;
		NullCheck(L_1148);
		float L_1149;
		L_1149 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1148, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_417_val = L_1149;
		RuntimeObject* L_1150;
		L_1150 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1150);
		RuntimeObject* L_1151;
		L_1151 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1150, 5, ((int32_t)1528103070));
		__this->___RICHTER_419 = L_1151;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RICHTER_419), (void*)L_1151);
		RuntimeObject* L_1152 = __this->___RICHTER_419;
		NullCheck(L_1152);
		float L_1153;
		L_1153 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1152, ((int32_t)231), (bool)1);
		__this->___RICHTER_419_val = L_1153;
		RuntimeObject* L_1154 = __this->___PLAYER_X_415;
		float L_1155 = __this->___PLAYER_X_417_val;
		float L_1156 = __this->___RICHTER_419_val;
		float L_1157;
		L_1157 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_1154);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1154, ((int32_t)231), ((float)il2cpp_codegen_add(L_1155, ((float)il2cpp_codegen_multiply(L_1156, ((float)il2cpp_codegen_subtract(L_1157, (0.5f))))))));
		RuntimeObject* L_1158;
		L_1158 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1158);
		RuntimeObject* L_1159;
		L_1159 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1158, 5, ((int32_t)460));
		__this->___PLAYER_Y_426 = L_1159;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_426), (void*)L_1159);
		RuntimeObject* L_1160;
		L_1160 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1160);
		RuntimeObject* L_1161;
		L_1161 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1160, 5, ((int32_t)460));
		__this->___PLAYER_Y_427 = L_1161;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_427), (void*)L_1161);
		RuntimeObject* L_1162 = __this->___PLAYER_Y_427;
		NullCheck(L_1162);
		float L_1163;
		L_1163 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1162, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_427_val = L_1163;
		RuntimeObject* L_1164;
		L_1164 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1164);
		RuntimeObject* L_1165;
		L_1165 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1164, 5, ((int32_t)460));
		__this->___PLAYER_Y_428 = L_1165;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_428), (void*)L_1165);
		RuntimeObject* L_1166 = __this->___PLAYER_Y_428;
		NullCheck(L_1166);
		float L_1167;
		L_1167 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1166, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_428_val = L_1167;
		RuntimeObject* L_1168;
		L_1168 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1168);
		RuntimeObject* L_1169;
		L_1169 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1168, 5, ((int32_t)1528103070));
		__this->___RICHTER_430 = L_1169;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RICHTER_430), (void*)L_1169);
		RuntimeObject* L_1170 = __this->___RICHTER_430;
		NullCheck(L_1170);
		float L_1171;
		L_1171 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1170, ((int32_t)231), (bool)1);
		__this->___RICHTER_430_val = L_1171;
		RuntimeObject* L_1172;
		L_1172 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1172);
		RuntimeObject* L_1173;
		L_1173 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1172, 5, ((int32_t)1866495038));
		__this->___RANDOM_1_433 = L_1173;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOM_1_433), (void*)L_1173);
		RuntimeObject* L_1174 = __this->___RANDOM_1_433;
		NullCheck(L_1174);
		float L_1175;
		L_1175 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1174, ((int32_t)231), (bool)1);
		__this->___RANDOM_1_433_val = L_1175;
		RuntimeObject* L_1176 = __this->___PLAYER_Y_426;
		float L_1177 = __this->___PLAYER_Y_428_val;
		float L_1178 = __this->___RICHTER_430_val;
		float L_1179 = __this->___RANDOM_1_433_val;
		NullCheck(L_1176);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1176, ((int32_t)231), ((float)il2cpp_codegen_add(L_1177, ((float)il2cpp_codegen_multiply(L_1178, ((float)il2cpp_codegen_subtract(L_1179, (0.5f))))))));
		RuntimeObject* L_1180;
		L_1180 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1180);
		RuntimeObject* L_1181;
		L_1181 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1180, 5, ((int32_t)431));
		__this->___PLAYER_VX_437 = L_1181;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_437), (void*)L_1181);
		RuntimeObject* L_1182;
		L_1182 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1182);
		RuntimeObject* L_1183;
		L_1183 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1182, 5, ((int32_t)431));
		__this->___PLAYER_VX_438 = L_1183;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_438), (void*)L_1183);
		RuntimeObject* L_1184 = __this->___PLAYER_VX_438;
		NullCheck(L_1184);
		float L_1185;
		L_1185 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1184, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_438_val = L_1185;
		RuntimeObject* L_1186;
		L_1186 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1186);
		RuntimeObject* L_1187;
		L_1187 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1186, 5, ((int32_t)431));
		__this->___PLAYER_VX_439 = L_1187;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_439), (void*)L_1187);
		RuntimeObject* L_1188 = __this->___PLAYER_VX_439;
		NullCheck(L_1188);
		float L_1189;
		L_1189 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1188, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_439_val = L_1189;
		RuntimeObject* L_1190;
		L_1190 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1190);
		RuntimeObject* L_1191;
		L_1191 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1190, 5, ((int32_t)1528103070));
		__this->___RICHTER_443 = L_1191;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RICHTER_443), (void*)L_1191);
		RuntimeObject* L_1192 = __this->___RICHTER_443;
		NullCheck(L_1192);
		float L_1193;
		L_1193 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1192, ((int32_t)231), (bool)1);
		__this->___RICHTER_443_val = L_1193;
		RuntimeObject* L_1194 = __this->___PLAYER_VX_437;
		float L_1195 = __this->___PLAYER_VX_439_val;
		float L_1196 = __this->___RICHTER_443_val;
		float L_1197;
		L_1197 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_1194);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1194, ((int32_t)231), ((float)il2cpp_codegen_add(L_1195, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.200000003f), L_1196)), ((float)il2cpp_codegen_subtract(L_1197, (0.5f))))))));
		RuntimeObject* L_1198;
		L_1198 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1198);
		RuntimeObject* L_1199;
		L_1199 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1198, 5, ((int32_t)432));
		__this->___PLAYER_VY_450 = L_1199;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_450), (void*)L_1199);
		RuntimeObject* L_1200;
		L_1200 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1200);
		RuntimeObject* L_1201;
		L_1201 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1200, 5, ((int32_t)432));
		__this->___PLAYER_VY_451 = L_1201;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_451), (void*)L_1201);
		RuntimeObject* L_1202 = __this->___PLAYER_VY_451;
		NullCheck(L_1202);
		float L_1203;
		L_1203 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1202, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_451_val = L_1203;
		RuntimeObject* L_1204;
		L_1204 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1204);
		RuntimeObject* L_1205;
		L_1205 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1204, 5, ((int32_t)432));
		__this->___PLAYER_VY_452 = L_1205;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_452), (void*)L_1205);
		RuntimeObject* L_1206 = __this->___PLAYER_VY_452;
		NullCheck(L_1206);
		float L_1207;
		L_1207 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1206, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_452_val = L_1207;
		RuntimeObject* L_1208;
		L_1208 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1208);
		RuntimeObject* L_1209;
		L_1209 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1208, 5, ((int32_t)1528103070));
		__this->___RICHTER_456 = L_1209;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RICHTER_456), (void*)L_1209);
		RuntimeObject* L_1210 = __this->___RICHTER_456;
		NullCheck(L_1210);
		float L_1211;
		L_1211 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1210, ((int32_t)231), (bool)1);
		__this->___RICHTER_456_val = L_1211;
		RuntimeObject* L_1212;
		L_1212 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1212);
		RuntimeObject* L_1213;
		L_1213 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1212, 5, ((int32_t)1866495038));
		__this->___RANDOM_1_459 = L_1213;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOM_1_459), (void*)L_1213);
		RuntimeObject* L_1214 = __this->___RANDOM_1_459;
		NullCheck(L_1214);
		float L_1215;
		L_1215 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1214, ((int32_t)231), (bool)1);
		__this->___RANDOM_1_459_val = L_1215;
		RuntimeObject* L_1216 = __this->___PLAYER_VY_450;
		float L_1217 = __this->___PLAYER_VY_452_val;
		float L_1218 = __this->___RICHTER_456_val;
		float L_1219 = __this->___RANDOM_1_459_val;
		NullCheck(L_1216);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1216, ((int32_t)231), ((float)il2cpp_codegen_add(L_1217, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.200000003f), L_1218)), ((float)il2cpp_codegen_subtract(L_1219, (0.5f))))))));
		RuntimeObject* L_1220;
		L_1220 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1220);
		RuntimeObject* L_1221;
		L_1221 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1220, 5, ((int32_t)461));
		__this->___PLAYER_Z_463 = L_1221;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_463), (void*)L_1221);
		RuntimeObject* L_1222;
		L_1222 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1222);
		RuntimeObject* L_1223;
		L_1223 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1222, 5, ((int32_t)461));
		__this->___PLAYER_Z_464 = L_1223;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_464), (void*)L_1223);
		RuntimeObject* L_1224 = __this->___PLAYER_Z_464;
		NullCheck(L_1224);
		float L_1225;
		L_1225 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1224, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_464_val = L_1225;
		RuntimeObject* L_1226;
		L_1226 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1226);
		RuntimeObject* L_1227;
		L_1227 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1226, 5, ((int32_t)461));
		__this->___PLAYER_Z_465 = L_1227;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_465), (void*)L_1227);
		RuntimeObject* L_1228 = __this->___PLAYER_Z_465;
		NullCheck(L_1228);
		float L_1229;
		L_1229 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1228, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_465_val = L_1229;
		RuntimeObject* L_1230;
		L_1230 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1230);
		RuntimeObject* L_1231;
		L_1231 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1230, 5, ((int32_t)1528103070));
		__this->___RICHTER_467 = L_1231;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RICHTER_467), (void*)L_1231);
		RuntimeObject* L_1232 = __this->___RICHTER_467;
		NullCheck(L_1232);
		float L_1233;
		L_1233 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1232, ((int32_t)231), (bool)1);
		__this->___RICHTER_467_val = L_1233;
		RuntimeObject* L_1234;
		L_1234 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1234);
		RuntimeObject* L_1235;
		L_1235 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1234, 5, ((int32_t)1866495039));
		__this->___RANDOM_2_470 = L_1235;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOM_2_470), (void*)L_1235);
		RuntimeObject* L_1236 = __this->___RANDOM_2_470;
		NullCheck(L_1236);
		float L_1237;
		L_1237 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1236, ((int32_t)231), (bool)1);
		__this->___RANDOM_2_470_val = L_1237;
		RuntimeObject* L_1238 = __this->___PLAYER_Z_463;
		float L_1239 = __this->___PLAYER_Z_465_val;
		float L_1240 = __this->___RICHTER_467_val;
		float L_1241 = __this->___RANDOM_2_470_val;
		NullCheck(L_1238);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1238, ((int32_t)231), ((float)il2cpp_codegen_add(L_1239, ((float)il2cpp_codegen_multiply(L_1240, ((float)il2cpp_codegen_subtract(L_1241, (0.5f))))))));
		RuntimeObject* L_1242;
		L_1242 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1242);
		RuntimeObject* L_1243;
		L_1243 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1242, 5, ((int32_t)1866495038));
		__this->___RANDOM_1_474 = L_1243;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOM_1_474), (void*)L_1243);
		RuntimeObject* L_1244 = __this->___RANDOM_1_474;
		NullCheck(L_1244);
		float L_1245;
		L_1245 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1244, ((int32_t)231), (bool)1);
		__this->___RANDOM_1_474_val = L_1245;
		RuntimeObject* L_1246;
		L_1246 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1246);
		RuntimeObject* L_1247;
		L_1247 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1246, 5, ((int32_t)1866495039));
		__this->___RANDOM_2_475 = L_1247;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOM_2_475), (void*)L_1247);
		RuntimeObject* L_1248 = __this->___RANDOM_2_475;
		float L_1249 = __this->___RANDOM_1_474_val;
		NullCheck(L_1248);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1248, ((int32_t)231), L_1249);
		RuntimeObject* L_1250;
		L_1250 = MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline(__this, NULL);
		NullCheck(L_1250);
		RuntimeObject* L_1251;
		L_1251 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1250, 5, ((int32_t)1866495038));
		__this->___RANDOM_1_477 = L_1251;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOM_1_477), (void*)L_1251);
		RuntimeObject* L_1252 = __this->___RANDOM_1_477;
		float L_1253;
		L_1253 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_1252);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_1252, ((int32_t)231), L_1253);
	}

IL_3656:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGRANADE_set_MY_m929E9051FA3DCAD964A69FBE5497AD7CC0E968CF_inline (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGRANADE_set_THERE_mD7AF75809E65E305A73F62622C056EB6F98440B7_inline (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGRANADE_set__world_m4C337824ACD35E7575CAB9A547B21F0B9F66D4CE_inline (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGRANADE_get__world_m249967F8E2E17F7184AD3322E434FD5541BC2F80_inline (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEMISSILE_set_MY_m5313D538273E9A5A113A740DEE31DE1803A10935_inline (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEMISSILE_set_THERE_m5D169522C123656C593820B4D94ABE5766464EF7_inline (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEMISSILE_set__world_mAA7D85AED69EA06C51ABB1BC5AFA206921EAA6C8_inline (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEMISSILE_get__world_mC3298720CE4EC02D9E0E57ED5892E97D210F2788_inline (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEPARTICLE_set_MY_m618FA001642E9BE4EBDB7158106FFCD0CA384CF6_inline (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEPARTICLE_set_THERE_m040C59DF24EA17A37B725A22204C6D1E4BAA2478_inline (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEPARTICLE_set__world_m7EFB8D37D20E4ADAF0C97E090532F2C6015AD38D_inline (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEPARTICLE_get__world_m1C1A27AF4FA40DEC55F675843DD075F2B7916CB3_inline (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CASTBLOOD_set_MY_m5BA0E35483FE38D43F0D8E08B07782DFF477D865_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CASTBLOOD_set_THERE_mD8B181B0189B61286A7878AE635E5B73EBD69AB1_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CASTBLOOD_set__world_m43CE6909ACD0F542E20FD56E3CB274FBBD8F6158_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CASTBLOOD_get__world_mDC9DFBE100C836672858157D3946C600B651AC2B_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CASTBLOOD_get_MY_m234EA8A9C4CA683929EFAB5B8E787C9FDBA15F7A_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CASTBLOOD_get_THERE_m4837477AE7A87136F9F8E9BCA9401ACA25BDC5CC_inline (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMEDKIT_set_MY_mD3EE5D6269CBABF1C9888052D102955727634861_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMEDKIT_set_THERE_m7E905C21CC19D3D0259D8CA5F468989445D1ACAC_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMEDKIT_set__world_m16A16AADDBFF4AD4EBB63BEDCCF801515F5718E6_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMEDKIT_get__world_m5F75CEAAC5307CCC5FBD03A1045B098E5FC6F8DB_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMEDKIT_get_MY_mDA43FEA1AC6ADA893A4F7D4E49D3B8E345C16B7E_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMEDKIT_get_THERE_m592BF2611F36FA1CB66806F5C131F147D41C2501_inline (PICKUPMEDKIT_t545B0D9161C19BE3BD71C6D544629F666A89CA2A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPARMOUR_set_MY_m8661A6A5B4A7BA85F4248D535BC8418C8FEA2E89_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPARMOUR_set_THERE_m8E9EFC9468464BCCE94FFCEBA5E99172BD545C74_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPARMOUR_set__world_m58A7292EE0B1528AF9FF8B2FD56834971A73CC4C_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPARMOUR_get__world_m4CA2690A92268830D4A37524FCD7F672C52ED28A_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPARMOUR_get_MY_m5FE9A99C5F520317824E5BEC530D509E0061C2A8_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPARMOUR_get_THERE_mAFD0FFBD223F02A1F249AB3ADE3A924D2467B4E5_inline (PICKUPARMOUR_t6437C462A7C45848F1168A30F6DCEB8955D74739* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMP5_set_MY_m10E23E84D897D258B8D878B278A4958CFA70C321_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMP5_set_THERE_m9C701EAFCE129E0805A22BD2080C55C072CEF996_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPMP5_set__world_m5619459E48646538ACB4A3C789478FD2B3FA2F08_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMP5_get__world_mE90D96F780AC9B76FB884BF2DD999507FEF76053_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMP5_get_MY_mAE536D815D459368FBFF6FE67718C63024B2DFED_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPMP5_get_THERE_mE73DBA28D4ABA65F63DD9D1C243BCDD8784DF47C_inline (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPSTINGER_set_MY_mBDF7F37636F6E9387989F40E361A66DC5E169198_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPSTINGER_set_THERE_m485C835C49D349D9D4F0B03122684A3386A27717_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPSTINGER_set__world_m026FB1291AE2D39143CB54E5E4A8F0D7CAA04A72_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPSTINGER_get__world_mD53F13EE694DE219F934E17BA43A935B867FFAEF_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPSTINGER_get_MY_m225B6738E3D59288FDB9028687F2AC77D6C73496_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPSTINGER_get_THERE_m9080D4759A3E595BEA895995677D6CE4F4AC6C9F_inline (PICKUPSTINGER_t10C81AF91D98B303CE2C7649BF662DBB2B8C7663* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPQUANTUM_set_MY_m070455F8DADF322EABDFF7FA603E9FA6EDEFCD05_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPQUANTUM_set_THERE_m05F1FAA12F4D98BAC4EC860C08A162B67516FBE6_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPQUANTUM_set__world_m30E560F18162FC8048CD4C0FB94F332653D6CD01_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPQUANTUM_get__world_mDACCEC3B5D8A349C1428298576B997A7AEAAE665_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPQUANTUM_get_MY_mDDE7E330FE1680B7D423AF3528F6DC397B41C9C9_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPQUANTUM_get_THERE_m0CA16C24C3B977DAA45E0185C5C77B143BE5E290_inline (PICKUPQUANTUM_t3D33790BF3613E6DC180BA1E744F1AA013D662A2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKAMMO_set_MY_m3973FEDAB226960451C01FAAF77D4464179216A8_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKAMMO_set_THERE_m7B52FE3B41A65481C13EC097E60D599EFDFE0345_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKAMMO_set__world_m597B59E5A1865FACDF76E94431F8E541D5A07D11_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKAMMO_get__world_m06FDEB18194C3EC57014D93996821EED432A2B9E_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKAMMO_get_MY_m23C509E26C998329C9CE9A29C2BF46D691D54636_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKAMMO_get_THERE_m807FB78308C644EB9BFCE3C83D789C5E98F8866F_inline (PICKAMMO_t213448F634EDA61CE987CFDE566E89A154988170* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKGRANADE_set_MY_m9CD8F3F2F0C8BB51FF8B736CF0A58F2A405CAB8B_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKGRANADE_set_THERE_m5701BFC66A7B27B37B0F023009DC6A1936CC7C36_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKGRANADE_set__world_m9F06B6EAB500082A5313E7AF2C0593285D508B4B_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKGRANADE_get__world_m6ABCEBE95A780E7124814271C8E9C32E060053F0_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKGRANADE_get_MY_m994F82B86B90D8FE103CB7BDA25C0F6F08A74F35_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKGRANADE_get_THERE_mF0908F04F717B89F365CBE25937EC061283AA751_inline (PICKGRANADE_t5A01089372CAE5B302727B40AEB1D75AC3AB5C55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKSTINGERAMMO_set_MY_m73DB0B9837CBFB55C81121623D6C1F31815BA911_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKSTINGERAMMO_set_THERE_m410D2291A9A0ABDA0D1E02801585D0BE5324E336_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKSTINGERAMMO_set__world_m7D628F560137FC1BE5774B10275F569F8A277F59_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKSTINGERAMMO_get__world_m77A2AD522DA05D3EBD4452EEC179C9BB009B87DA_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKSTINGERAMMO_get_MY_m02296A7C662E9C170A642571F4FFC2DCD0BC825C_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKSTINGERAMMO_get_THERE_mB69401871FBAEC7A4AAA2A44632C9136F8339675_inline (PICKSTINGERAMMO_tC311F81F3CAF5F451D81183EB4A7342BEACC3850* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO_set_MY_m7514FD2F1DBAEF62156D78AD55B093353CE3F249_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO_set_THERE_mEC157C32526B15E91B1A497FDDCBAAFD95C10AAB_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKQUANTUMAMMO_set__world_m7F8AFBFE47C78AECADBEDAF824F2D503323707B7_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKQUANTUMAMMO_get__world_mAE698812B68EB4C7E108AFF5A63584AB5B4917B8_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKQUANTUMAMMO_get_MY_mE850CF9D07546D39E21C3A819F98423CC7B7CD4B_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKQUANTUMAMMO_get_THERE_m1D119C7273059AF6DB096B49B86C32F11FEC65DD_inline (PICKQUANTUMAMMO_tAA69EB7F4FAEB359F3AB3B04CC4FC663C814B91F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHREGION_set_MY_mAAE5919329E43439E4164AD053F0FE1729EEE566_inline (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHREGION_set_THERE_m009A6DDAE23982F3474E59A4A1BCA4BCE06D557F_inline (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHREGION_set__world_m49CAE1BE53AD233B4A195166323A3F88AC49CCFA_inline (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHREGION_get__world_m19753552ECF663D6D0835E6ADF24778ACB9A8D43_inline (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHREGION_get_MY_m73ED410FC08F78CDD46DE62B24846FCC118149BF_inline (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODELIGHT_set_MY_m852FAA683412B7D553E920A8414B4EBFFD403E01_inline (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODELIGHT_set_THERE_mCCE7D08AF5758560DEE96A8BFC71FA68841E55E7_inline (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODELIGHT_set__world_m97F52BF864A90779FEB9154EEFC71BCAA45C4C8B_inline (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLODELIGHT_get__world_mFF30FC0D88E5D98EB1AFC06881A6204EDF694F68_inline (IMPLODELIGHT_t9479AA8A5E8230B558BB49CF37ABA434153FA042* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BOUNCE_set_MY_mEBB68FAC18D22350383C3AB7F05FF9986A09E651_inline (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BOUNCE_set_THERE_mBF2645AF9CD5F5662FFF716C263FEECBB62B21CD_inline (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BOUNCE_set__world_m6709DA2AC28D0356A872BEBE4B98D302836128C5_inline (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BOUNCE_get_MY_mABE269AD0308680D4C9CDE729EBBA136022795BD_inline (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BOUNCE_get__world_mE11E649CEB9B5ED59CD7D160FD832C5BB733438D_inline (BOUNCE_t0DB704BA259106844D33DF2C8569D2F70C9723DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FREEFALL_set_MY_m91019143B833AB45D80CFA4AE8BFA66483B1CD0B_inline (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FREEFALL_set_THERE_mD5E32B9FBE72EB7BD9DEF1DCA289DDDB2DAED685_inline (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FREEFALL_set__world_m6C3CDDDE6A19ABEC8D095C03735019B57F66F9C7_inline (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FREEFALL_get_MY_m9C09C83637E92222E05D3B555A80989F10CA1550_inline (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FREEFALL_get__world_m5A2AD0B8CD639F6FDDDE3DF83D17EC2A5DFF1B21_inline (FREEFALL_tA1CD0B7BCB444DA6528C3AAC607B4C595A3890E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONTIMER_set_MY_m9B0130BBA0EB8D221FB9DB31F491AD0C88D8B64B_inline (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONTIMER_set_THERE_m65E49EEB268D940CDB82EE9DD8467F0747032108_inline (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONTIMER_set__world_m728B2E7FD65DE6A3F5F5FF0D2FD84A0AF0759183_inline (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONTIMER_get_MY_m7B94AB843F9BB6EB1FBEFACE9C8034C2DC4888B8_inline (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONTIMER_get__world_m791CAB2FE5CDB230AD69C94CB561273F1123CC3B_inline (EXPLOSIONTIMER_t26171750E805FC93346F797700F9EE65222163AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void INIT_MOVE_set_MY_m45C49690AE5B2741679D0E92DB80F7AEC4E480D6_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void INIT_MOVE_set_THERE_m20B5497093084A6CC17B6DB8EFA2BE104C860CE0_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void INIT_MOVE_set__world_m6D0503719AA9A7A3711BB31D12050DF2D228C6C4_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* INIT_MOVE_get__world_mCA619BB1318F3A4A6391B137CABF39F0CE9DCCFF_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* INIT_MOVE_get_MY_m503B017D4817455D214D985150216BFBBC051D5C_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* INIT_MOVE_get_THERE_m30B7EED392AE7A6B2968D1FEEE1F094C0595AE2B_inline (INIT_MOVE_t15CB926426DC45767102A2F465FC6C83CCA3030D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOVE_ME_set_MY_m3A9EE516584DE20C2D8A3AB64C26ECE4121272B7_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOVE_ME_set_THERE_mCBD1EAF696B2EF19E240FA12EB696E58A3E9B262_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOVE_ME_set__world_mD0D95E6CCE339020B64F749B00AAC78BC8C76D16_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MOVE_ME_get__world_m6C4F5699EB5841AEAEF8758B23F6B3FB74074B65_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MOVE_ME_get_MY_m0053EF71C5738AF3A512F406578B3FC59349A529_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MOVE_ME_get_THERE_mCE93708E1D1E4BC77FD49C157F1002DDA5621FFD_inline (MOVE_ME_t97CE783BAD531D4209EEBD156CF07A89A1286EB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}

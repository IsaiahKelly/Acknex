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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct Dictionary_2_t6CF2F1ABBDC653D0C5CC02EA9D12C5FBD70D513C;
struct List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct IAcknexObjectU5BU5D_tD5763965E4C76CDCD6E08BA3A902D9B0D813A563;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535;
struct IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
struct BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5;
struct CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC;
struct CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255;
struct DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D;
struct DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04;
struct LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595;
struct LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2;
struct RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8;
struct SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0;
struct SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1;
struct SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF;
struct SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439;
struct SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D;
struct TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A;
struct TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33;

IL2CPP_EXTERN_C RuntimeClass* CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE  : public RuntimeObject
{
	IAcknexObjectU5BU5D_tD5763965E4C76CDCD6E08BA3A902D9B0D813A563* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Game_tECFD6919151788B21AB73A836592F3EE1A13E897  : public RuntimeObject
{
	RuntimeObject* ____world;
	Dictionary_2_t6CF2F1ABBDC653D0C5CC02EA9D12C5FBD70D513C* ____callbacks;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PARTICLE_1;
	RuntimeObject* ___GUNFIRING_3;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___QGUN01OVL_9;
	RuntimeObject* ___AMMO_13;
	float ___AMMO_13_val;
	RuntimeObject* ___AMMO_15;
	float ___AMMO_15_val;
	RuntimeObject* ___AMMO_16;
	RuntimeObject* ___AMMO_18;
	float ___AMMO_18_val;
	RuntimeObject* ___WRN01STR_19;
	RuntimeObject* ___PANELTEXT_21;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___PANELTEXT_21_array;
	int32_t ___PANELTEXT_21_index;
	RuntimeObject* ___PANELTEXT_22;
	RuntimeObject* ___MSGSECCOUNT_26;
	RuntimeObject* ___PLAYER_LIGHT_28;
	float ___PLAYER_LIGHT_28_val;
	RuntimeObject* ___PLAYER_LIGHT_29;
	RuntimeObject* ___QGUN02SND_30;
	RuntimeObject* ___SHOT_SOUND_ON_33;
	RuntimeObject* ___SHOTSECCOUNT_35;
	RuntimeObject* ___QGUN02OVL_36;
	RuntimeObject* ___PARTICLE_41;
	RuntimeObject* ___PARTICLE_44;
	RuntimeObject* ___PARTICLE_46;
	RuntimeObject* ___PARTICLE_48;
	float ___temp_49;
	RuntimeObject* ___PLAYER_X_50;
	float ___PLAYER_X_50_val;
	RuntimeObject* ___PLAYER_COS_52;
	float ___PLAYER_COS_52_val;
	RuntimeObject* ___PLAYER_VX_56;
	float ___PLAYER_VX_56_val;
	RuntimeObject* ___TIME_CORR_58;
	float ___TIME_CORR_58_val;
	RuntimeObject* ___PARTICLE_60;
	RuntimeObject* ___PARTICLE_62;
	float ___temp_63;
	RuntimeObject* ___PLAYER_Y_64;
	float ___PLAYER_Y_64_val;
	RuntimeObject* ___PLAYER_SIN_66;
	float ___PLAYER_SIN_66_val;
	RuntimeObject* ___PLAYER_VY_70;
	float ___PLAYER_VY_70_val;
	RuntimeObject* ___TIME_CORR_72;
	float ___TIME_CORR_72_val;
	RuntimeObject* ___PARTICLE_74;
	RuntimeObject* ___PARTICLE_76;
	float ___temp_77;
	RuntimeObject* ___PLAYER_SIZE_78;
	float ___PLAYER_SIZE_78_val;
	RuntimeObject* ___PLAYER_TILT_81;
	float ___PLAYER_TILT_81_val;
	RuntimeObject* ___PLAYER_HGT_88;
	float ___PLAYER_HGT_88_val;
	RuntimeObject* ___FLOOR_HGT_90;
	float ___FLOOR_HGT_90_val;
	RuntimeObject* ___PRTCTEX_91;
	RuntimeObject* ___PARTICLE_93;
	RuntimeObject* ___IMPLODEPARTICLE_94;
	RuntimeObject* ___PARTICLE_96;
	RuntimeObject* ___LOCATEPARTICLE_97;
	RuntimeObject* ___PARTICLE_99;
	RuntimeObject* ___PARTICLE_102;
	RuntimeObject* ___PLAYER_ANGLE_103;
	float ___PLAYER_ANGLE_103_val;
	RuntimeObject* ___PARTICLE_105;
	RuntimeObject* ___BULLET_106;
	RuntimeObject* ___PARTICLE_108;
	RuntimeObject* ___PARTICLE_111;
	RuntimeObject* ___SHOOT_SECTOR_113;
	RuntimeObject* ___SHOOT_RANGE_115;
	RuntimeObject* ___SHOOT_FAC_117;
	RuntimeObject* ___SHOOT_X_119;
	RuntimeObject* ___SHOOT_Y_121;
	RuntimeObject* ___HIT_DIST_123;
	float ___HIT_DIST_123_val;
	RuntimeObject* ___HIT_124;
	RuntimeObject* ___PARTICLE_126;
	RuntimeObject* ___HIT_129;
	float ___temp_130;
	RuntimeObject* ___PARTICLE_132;
	RuntimeObject* ___PARTICLE_134;
	float ___temp_135;
	RuntimeObject* ___HIT_138;
	float ___temp_139;
	RuntimeObject* ___FLOOR_HGT_141;
	float ___FLOOR_HGT_141_val;
	RuntimeObject* ___HIT_145;
	float ___temp_146;
	RuntimeObject* ___PARTICLE_149;
	float ___temp_150;
	RuntimeObject* ___PARTICLE_152;
	RuntimeObject* ___PARTICLE_154;
	float ___temp_155;
	RuntimeObject* ___PARTICLE_158;
	float ___temp_159;
	RuntimeObject* ___BULLET_160;
	RuntimeObject* ___PARTICLE_162;
	RuntimeObject* ___PARTICLE_164;
	RuntimeObject* ___PARTICLE_166;
	float ___temp_167;
	RuntimeObject* ___PLAYER_TILT_169;
	float ___PLAYER_TILT_169_val;
	RuntimeObject* ___PLAYER_LIGHT_173;
	float ___PLAYER_LIGHT_173_val;
	RuntimeObject* ___PLAYER_LIGHT_174;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___QGUN01OVL_176;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___QGUN00OVL_180;
	RuntimeObject* ___WRN02STR_183;
	RuntimeObject* ___PANELTEXT_185;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___PANELTEXT_185_array;
	int32_t ___PANELTEXT_185_index;
	RuntimeObject* ___PANELTEXT_186;
	RuntimeObject* ___MSGSECCOUNT_190;
	RuntimeObject* ___GUN_ON_192;
	RuntimeObject* ___QGUN03SND_193;
	float ___startTime4;
	float ___endTime4;
	RuntimeObject* ___QGUN00OVL_196;
	RuntimeObject* ___WEAPONSEL_200;
	float ___WEAPONSEL_200_val;
	RuntimeObject* ___BEAM_201;
	RuntimeObject* ___BEAM_203;
	RuntimeObject* ___GUNFIRING_206;
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
struct DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D  : public RuntimeObject
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
	RuntimeObject* ___AMMO_6;
	float ___AMMO_6_val;
	RuntimeObject* ___AMMO_MP5_7;
	RuntimeObject* ___WEAPONSEL_9;
	float ___WEAPONSEL_9_val;
	RuntimeObject* ___AMMO_10;
	float ___AMMO_10_val;
	RuntimeObject* ___AMMO_GRANADE_11;
	RuntimeObject* ___WEAPONSEL_13;
	float ___WEAPONSEL_13_val;
	RuntimeObject* ___AMMO_14;
	float ___AMMO_14_val;
	RuntimeObject* ___AMMO_STINGER_15;
	RuntimeObject* ___WEAPONSEL_17;
	float ___WEAPONSEL_17_val;
	RuntimeObject* ___AMMO_18;
	float ___AMMO_18_val;
	RuntimeObject* ___AMMO_QUANTUM_19;
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
struct LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MISSILE_1;
	RuntimeObject* ___GUNFIRING_3;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___STNG01OVL_9;
	RuntimeObject* ___AMMO_13;
	float ___AMMO_13_val;
	RuntimeObject* ___AMMO_15;
	float ___AMMO_15_val;
	RuntimeObject* ___AMMO_16;
	RuntimeObject* ___AMMO_18;
	float ___AMMO_18_val;
	RuntimeObject* ___WRN01STR_19;
	RuntimeObject* ___PANELTEXT_21;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___PANELTEXT_21_array;
	int32_t ___PANELTEXT_21_index;
	RuntimeObject* ___PANELTEXT_22;
	RuntimeObject* ___MSGSECCOUNT_26;
	RuntimeObject* ___PLAYER_LIGHT_28;
	float ___PLAYER_LIGHT_28_val;
	RuntimeObject* ___PLAYER_LIGHT_29;
	RuntimeObject* ___STNG02SND_30;
	RuntimeObject* ___SHOT_SOUND_ON_33;
	RuntimeObject* ___SHOTSECCOUNT_35;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___STNG02OVL_37;
	RuntimeObject* ___MISSILE_42;
	RuntimeObject* ___MISSILE_45;
	RuntimeObject* ___MISSILE_47;
	RuntimeObject* ___MISSILE_49;
	float ___temp_50;
	RuntimeObject* ___PLAYER_X_51;
	float ___PLAYER_X_51_val;
	RuntimeObject* ___PLAYER_COS_53;
	float ___PLAYER_COS_53_val;
	RuntimeObject* ___PLAYER_VX_57;
	float ___PLAYER_VX_57_val;
	RuntimeObject* ___TIME_CORR_59;
	float ___TIME_CORR_59_val;
	RuntimeObject* ___MISSILE_61;
	RuntimeObject* ___MISSILE_63;
	float ___temp_64;
	RuntimeObject* ___PLAYER_Y_65;
	float ___PLAYER_Y_65_val;
	RuntimeObject* ___PLAYER_SIN_67;
	float ___PLAYER_SIN_67_val;
	RuntimeObject* ___PLAYER_VY_71;
	float ___PLAYER_VY_71_val;
	RuntimeObject* ___TIME_CORR_73;
	float ___TIME_CORR_73_val;
	RuntimeObject* ___MISSILE_75;
	RuntimeObject* ___MISSILE_77;
	float ___temp_78;
	RuntimeObject* ___PLAYER_SIZE_79;
	float ___PLAYER_SIZE_79_val;
	RuntimeObject* ___PLAYER_TILT_82;
	float ___PLAYER_TILT_82_val;
	RuntimeObject* ___PLAYER_HGT_89;
	float ___PLAYER_HGT_89_val;
	RuntimeObject* ___FLOOR_HGT_91;
	float ___FLOOR_HGT_91_val;
	RuntimeObject* ___EXPLODEMISSILE_92;
	RuntimeObject* ___MISSILE_94;
	RuntimeObject* ___EXPLODETARGET_95;
	RuntimeObject* ___MISSILE_97;
	RuntimeObject* ___MISS2TEX_98;
	RuntimeObject* ___MISSILE_100;
	RuntimeObject* ___PLAYER_ANGLE_101;
	float ___PLAYER_ANGLE_101_val;
	RuntimeObject* ___MISSILE_103;
	RuntimeObject* ___MISSILE_105;
	RuntimeObject* ___MISSILE_107;
	float ___temp_108;
	RuntimeObject* ___PLAYER_TILT_110;
	float ___PLAYER_TILT_110_val;
	RuntimeObject* ___BULLET_111;
	RuntimeObject* ___MISSILE_113;
	RuntimeObject* ___MISSILE_116;
	RuntimeObject* ___MISSILE_119;
	RuntimeObject* ___MISSILE_122;
	RuntimeObject* ___SHOOT_SECTOR_124;
	RuntimeObject* ___SHOOT_RANGE_126;
	RuntimeObject* ___SHOOT_FAC_128;
	RuntimeObject* ___SHOOT_X_130;
	RuntimeObject* ___SVANGLE_131;
	float ___SVANGLE_131_val;
	RuntimeObject* ___SHOOT_Y_132;
	RuntimeObject* ___HIT_DIST_134;
	float ___HIT_DIST_134_val;
	RuntimeObject* ___HIT_135;
	RuntimeObject* ___HIT_139;
	float ___temp_140;
	RuntimeObject* ___HIT_143;
	float ___temp_144;
	RuntimeObject* ___MISSILE_146;
	RuntimeObject* ___MISSILE_148;
	float ___temp_149;
	RuntimeObject* ___HIT_152;
	float ___temp_153;
	RuntimeObject* ___FLOOR_HGT_155;
	float ___FLOOR_HGT_155_val;
	RuntimeObject* ___HIT_159;
	float ___temp_160;
	RuntimeObject* ___MISSILE_163;
	float ___temp_164;
	RuntimeObject* ___MISSILE_166;
	RuntimeObject* ___MISSILE_168;
	float ___temp_169;
	RuntimeObject* ___MISSILE_172;
	float ___temp_173;
	RuntimeObject* ___MISSILE_175;
	RuntimeObject* ___MISSILE_177;
	float ___temp_178;
	RuntimeObject* ___PLAYER_TILT_180;
	float ___PLAYER_TILT_180_val;
	RuntimeObject* ___PLAYER_LIGHT_184;
	float ___PLAYER_LIGHT_184_val;
	RuntimeObject* ___PLAYER_LIGHT_185;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___MISS2TEX_187;
	RuntimeObject* ___MISSILE_189;
	RuntimeObject* ___temp_190;
	RuntimeObject* ___MISS1TEX_191;
	RuntimeObject* ___MISSILE_193;
	float ___startTime4;
	float ___endTime4;
	RuntimeObject* ___STNG01OVL_195;
	float ___startTime5;
	float ___endTime5;
	RuntimeObject* ___STNG00OVL_199;
	RuntimeObject* ___WRN02STR_202;
	RuntimeObject* ___PANELTEXT_204;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___PANELTEXT_204_array;
	int32_t ___PANELTEXT_204_index;
	RuntimeObject* ___PANELTEXT_205;
	RuntimeObject* ___MSGSECCOUNT_209;
	RuntimeObject* ___STNG03SND_210;
	RuntimeObject* ___GUN_ON_213;
	float ___startTime6;
	float ___endTime6;
	RuntimeObject* ___STNG00OVL_215;
	RuntimeObject* ___WEAPONSEL_219;
	float ___WEAPONSEL_219_val;
	RuntimeObject* ___LAUNCH_220;
	RuntimeObject* ___LAUNCH_222;
	RuntimeObject* ___GUNFIRING_225;
};
struct LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_GUN_1;
	RuntimeObject* ___MY_GUN_3;
	float ___temp_4;
	RuntimeObject* ___PLAYER_X_5;
	float ___PLAYER_X_5_val;
	RuntimeObject* ___PLAYER_COS_7;
	float ___PLAYER_COS_7_val;
	RuntimeObject* ___PLAYER_VX_11;
	float ___PLAYER_VX_11_val;
	RuntimeObject* ___TIME_CORR_13;
	float ___TIME_CORR_13_val;
	RuntimeObject* ___MY_GUN_15;
	RuntimeObject* ___MY_GUN_17;
	float ___temp_18;
	RuntimeObject* ___PLAYER_Y_19;
	float ___PLAYER_Y_19_val;
	RuntimeObject* ___PLAYER_SIN_21;
	float ___PLAYER_SIN_21_val;
	RuntimeObject* ___PLAYER_VY_25;
	float ___PLAYER_VY_25_val;
	RuntimeObject* ___TIME_CORR_27;
	float ___TIME_CORR_27_val;
	RuntimeObject* ___MY_GUN_29;
	RuntimeObject* ___MY_GUN_31;
	float ___temp_32;
	RuntimeObject* ___PLAYER_Z_33;
	float ___PLAYER_Z_33_val;
	RuntimeObject* ___PLAYER_TILT_36;
	float ___PLAYER_TILT_36_val;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_GUN_46;
	RuntimeObject* ___MY_GUN_48;
	float ___temp_49;
	RuntimeObject* ___PLAYER_X_50;
	float ___PLAYER_X_50_val;
	RuntimeObject* ___PLAYER_COS_52;
	float ___PLAYER_COS_52_val;
	RuntimeObject* ___PLAYER_VX_56;
	float ___PLAYER_VX_56_val;
	RuntimeObject* ___TIME_CORR_58;
	float ___TIME_CORR_58_val;
	RuntimeObject* ___MY_GUN_60;
	RuntimeObject* ___MY_GUN_62;
	float ___temp_63;
	RuntimeObject* ___PLAYER_Y_64;
	float ___PLAYER_Y_64_val;
	RuntimeObject* ___PLAYER_SIN_66;
	float ___PLAYER_SIN_66_val;
	RuntimeObject* ___PLAYER_VY_70;
	float ___PLAYER_VY_70_val;
	RuntimeObject* ___TIME_CORR_72;
	float ___TIME_CORR_72_val;
	RuntimeObject* ___MY_GUN_74;
	RuntimeObject* ___MY_GUN_76;
	float ___temp_77;
	RuntimeObject* ___PLAYER_Z_78;
	float ___PLAYER_Z_78_val;
	RuntimeObject* ___PLAYER_TILT_81;
	float ___PLAYER_TILT_81_val;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MY_GUN_91;
	RuntimeObject* ___MY_GUN_93;
	float ___temp_94;
	RuntimeObject* ___PLAYER_X_95;
	float ___PLAYER_X_95_val;
	RuntimeObject* ___PLAYER_COS_97;
	float ___PLAYER_COS_97_val;
	RuntimeObject* ___PLAYER_VX_101;
	float ___PLAYER_VX_101_val;
	RuntimeObject* ___TIME_CORR_103;
	float ___TIME_CORR_103_val;
	RuntimeObject* ___MY_GUN_105;
	RuntimeObject* ___MY_GUN_107;
	float ___temp_108;
	RuntimeObject* ___PLAYER_Y_109;
	float ___PLAYER_Y_109_val;
	RuntimeObject* ___PLAYER_SIN_111;
	float ___PLAYER_SIN_111_val;
	RuntimeObject* ___PLAYER_VY_115;
	float ___PLAYER_VY_115_val;
	RuntimeObject* ___TIME_CORR_117;
	float ___TIME_CORR_117_val;
	RuntimeObject* ___MY_GUN_119;
	RuntimeObject* ___MY_GUN_121;
	float ___temp_122;
	RuntimeObject* ___PLAYER_Z_123;
	float ___PLAYER_Z_123_val;
	RuntimeObject* ___PLAYER_TILT_126;
	float ___PLAYER_TILT_126_val;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___MY_GUN_136;
	RuntimeObject* ___MY_GUN_138;
	float ___temp_139;
	RuntimeObject* ___PLAYER_X_140;
	float ___PLAYER_X_140_val;
	RuntimeObject* ___PLAYER_COS_142;
	float ___PLAYER_COS_142_val;
	RuntimeObject* ___PLAYER_VX_146;
	float ___PLAYER_VX_146_val;
	RuntimeObject* ___TIME_CORR_148;
	float ___TIME_CORR_148_val;
	RuntimeObject* ___MY_GUN_150;
	RuntimeObject* ___MY_GUN_152;
	float ___temp_153;
	RuntimeObject* ___PLAYER_Y_154;
	float ___PLAYER_Y_154_val;
	RuntimeObject* ___PLAYER_SIN_156;
	float ___PLAYER_SIN_156_val;
	RuntimeObject* ___PLAYER_VY_160;
	float ___PLAYER_VY_160_val;
	RuntimeObject* ___TIME_CORR_162;
	float ___TIME_CORR_162_val;
	RuntimeObject* ___MY_GUN_164;
	RuntimeObject* ___MY_GUN_166;
	float ___temp_167;
	RuntimeObject* ___PLAYER_Z_168;
	float ___PLAYER_Z_168_val;
	RuntimeObject* ___PLAYER_TILT_171;
	float ___PLAYER_TILT_171_val;
	float ___startTime4;
	float ___endTime4;
	RuntimeObject* ___MY_GUN_182;
	RuntimeObject* ___MY_GUN_185;
	float ___startTime5;
	float ___endTime5;
};
struct RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_GUN_1;
	RuntimeObject* ___MY_GUN_3;
	float ___temp_4;
	RuntimeObject* ___PLAYER_X_5;
	float ___PLAYER_X_5_val;
	RuntimeObject* ___PLAYER_COS_7;
	float ___PLAYER_COS_7_val;
	RuntimeObject* ___PLAYER_VX_11;
	float ___PLAYER_VX_11_val;
	RuntimeObject* ___TIME_CORR_13;
	float ___TIME_CORR_13_val;
	RuntimeObject* ___MY_GUN_15;
	RuntimeObject* ___MY_GUN_17;
	float ___temp_18;
	RuntimeObject* ___PLAYER_Y_19;
	float ___PLAYER_Y_19_val;
	RuntimeObject* ___PLAYER_SIN_21;
	float ___PLAYER_SIN_21_val;
	RuntimeObject* ___PLAYER_VY_25;
	float ___PLAYER_VY_25_val;
	RuntimeObject* ___TIME_CORR_27;
	float ___TIME_CORR_27_val;
	RuntimeObject* ___MY_GUN_29;
	RuntimeObject* ___MY_GUN_31;
	float ___temp_32;
	RuntimeObject* ___PLAYER_Z_33;
	float ___PLAYER_Z_33_val;
	RuntimeObject* ___PLAYER_TILT_36;
	float ___PLAYER_TILT_36_val;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_GUN_46;
	RuntimeObject* ___MY_GUN_48;
	float ___temp_49;
	RuntimeObject* ___PLAYER_X_50;
	float ___PLAYER_X_50_val;
	RuntimeObject* ___PLAYER_COS_52;
	float ___PLAYER_COS_52_val;
	RuntimeObject* ___PLAYER_VX_56;
	float ___PLAYER_VX_56_val;
	RuntimeObject* ___TIME_CORR_58;
	float ___TIME_CORR_58_val;
	RuntimeObject* ___MY_GUN_60;
	RuntimeObject* ___MY_GUN_62;
	float ___temp_63;
	RuntimeObject* ___PLAYER_Y_64;
	float ___PLAYER_Y_64_val;
	RuntimeObject* ___PLAYER_SIN_66;
	float ___PLAYER_SIN_66_val;
	RuntimeObject* ___PLAYER_VY_70;
	float ___PLAYER_VY_70_val;
	RuntimeObject* ___TIME_CORR_72;
	float ___TIME_CORR_72_val;
	RuntimeObject* ___MY_GUN_74;
	RuntimeObject* ___MY_GUN_76;
	float ___temp_77;
	RuntimeObject* ___PLAYER_Z_78;
	float ___PLAYER_Z_78_val;
	RuntimeObject* ___PLAYER_TILT_81;
	float ___PLAYER_TILT_81_val;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MY_GUN_91;
	RuntimeObject* ___MY_GUN_93;
	float ___temp_94;
	RuntimeObject* ___PLAYER_X_95;
	float ___PLAYER_X_95_val;
	RuntimeObject* ___PLAYER_COS_97;
	float ___PLAYER_COS_97_val;
	RuntimeObject* ___PLAYER_VX_101;
	float ___PLAYER_VX_101_val;
	RuntimeObject* ___TIME_CORR_103;
	float ___TIME_CORR_103_val;
	RuntimeObject* ___MY_GUN_105;
	RuntimeObject* ___MY_GUN_107;
	float ___temp_108;
	RuntimeObject* ___PLAYER_Y_109;
	float ___PLAYER_Y_109_val;
	RuntimeObject* ___PLAYER_SIN_111;
	float ___PLAYER_SIN_111_val;
	RuntimeObject* ___PLAYER_VY_115;
	float ___PLAYER_VY_115_val;
	RuntimeObject* ___TIME_CORR_117;
	float ___TIME_CORR_117_val;
	RuntimeObject* ___MY_GUN_119;
	RuntimeObject* ___MY_GUN_121;
	float ___temp_122;
	RuntimeObject* ___PLAYER_Z_123;
	float ___PLAYER_Z_123_val;
	RuntimeObject* ___PLAYER_TILT_126;
	float ___PLAYER_TILT_126_val;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___MY_GUN_136;
	RuntimeObject* ___MY_GUN_138;
	float ___temp_139;
	RuntimeObject* ___PLAYER_X_140;
	float ___PLAYER_X_140_val;
	RuntimeObject* ___PLAYER_COS_142;
	float ___PLAYER_COS_142_val;
	RuntimeObject* ___PLAYER_VX_146;
	float ___PLAYER_VX_146_val;
	RuntimeObject* ___TIME_CORR_148;
	float ___TIME_CORR_148_val;
	RuntimeObject* ___MY_GUN_150;
	RuntimeObject* ___MY_GUN_152;
	float ___temp_153;
	RuntimeObject* ___PLAYER_Y_154;
	float ___PLAYER_Y_154_val;
	RuntimeObject* ___PLAYER_SIN_156;
	float ___PLAYER_SIN_156_val;
	RuntimeObject* ___PLAYER_VY_160;
	float ___PLAYER_VY_160_val;
	RuntimeObject* ___TIME_CORR_162;
	float ___TIME_CORR_162_val;
	RuntimeObject* ___MY_GUN_164;
	RuntimeObject* ___MY_GUN_166;
	float ___temp_167;
	RuntimeObject* ___PLAYER_Z_168;
	float ___PLAYER_Z_168_val;
	RuntimeObject* ___PLAYER_TILT_171;
	float ___PLAYER_TILT_171_val;
	float ___startTime4;
	float ___endTime4;
	RuntimeObject* ___MY_GUN_182;
	RuntimeObject* ___MY_GUN_185;
	float ___startTime5;
	float ___endTime5;
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
struct SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1  : public RuntimeObject
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
	RuntimeObject* ___GUNFIRING_32;
	float ___GUNFIRING_32_val;
	RuntimeObject* ___MY_GUN_34;
	RuntimeObject* ___MY_GUN_37;
	float ___temp_38;
	RuntimeObject* ___MAP_MODE_40;
	RuntimeObject* ___MY_GUN_45;
	RuntimeObject* ___MY_GUN_48;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MY_GUN_52;
	float ___temp_53;
	RuntimeObject* ___MP5ACT_54;
	RuntimeObject* ___MY_GUN_58;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___MY_GUN_62;
	float ___temp_63;
	RuntimeObject* ___MP5_01OVL_64;
	RuntimeObject* ___BURST_67;
	RuntimeObject* ___BURST_69;
	RuntimeObject* ___GUN_ON_72;
	RuntimeObject* ___RENDER_MODE_74;
	RuntimeObject* ___MP_501SND_75;
	RuntimeObject* ___SELECTTRICORDER_77;
	RuntimeObject* ___SELECTNONE_79;
	RuntimeObject* ___SELECTNONE_81;
	RuntimeObject* ___SELECTMP5_83;
	RuntimeObject* ___SELECTMP5BURST_85;
	RuntimeObject* ___SELECTGRANADE_87;
	RuntimeObject* ___SELECTSTINGER_89;
	RuntimeObject* ___SELECTQUANTUM_91;
};
struct SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___WEAPONSEL_1;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___GUNFIRING_24;
	float ___GUNFIRING_24_val;
	RuntimeObject* ___MY_GUN_26;
	RuntimeObject* ___MY_GUN_29;
	float ___temp_30;
	RuntimeObject* ___MAP_MODE_32;
	RuntimeObject* ___PDATEXT_35;
	RuntimeObject* ___MY_GUN_40;
	RuntimeObject* ___MY_GUN_43;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MY_GUN_47;
	float ___temp_48;
	RuntimeObject* ___RENDER_MODE_52;
	RuntimeObject* ___SELECTTRICORDER_53;
	RuntimeObject* ___SELECTNONE_55;
	RuntimeObject* ___SELECTNONE_57;
	RuntimeObject* ___SELECTMP5_59;
	RuntimeObject* ___SELECTMP5BURST_61;
	RuntimeObject* ___SELECTGRANADE_63;
	RuntimeObject* ___SELECTSTINGER_65;
	RuntimeObject* ___SELECTQUANTUM_67;
	RuntimeObject* ___GUN_ON_70;
	RuntimeObject* ___PLAYER_RESULT_72;
};
struct SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PLAYER_HEALTH_1;
	float ___PLAYER_HEALTH_1_val;
	RuntimeObject* ___MAP_MODE_3;
	float ___MAP_MODE_3_val;
	RuntimeObject* ___HAS_PDA_5;
	float ___HAS_PDA_5_val;
	RuntimeObject* ___WRN04STR_6;
	RuntimeObject* ___WEAPONSEL_9;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___GUNFIRING_32;
	float ___GUNFIRING_32_val;
	RuntimeObject* ___MY_GUN_34;
	RuntimeObject* ___MY_GUN_37;
	float ___temp_38;
	RuntimeObject* ___MAP_MODE_40;
	RuntimeObject* ___MY_GUN_49;
	RuntimeObject* ___MY_GUN_52;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MY_GUN_56;
	float ___temp_57;
	RuntimeObject* ___TRICACT_58;
	RuntimeObject* ___MY_GUN_62;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___MY_GUN_66;
	float ___temp_67;
	RuntimeObject* ___TRIC01SND_68;
	RuntimeObject* ___MAP_LAYER_71;
	RuntimeObject* ___MAP_EDGE_X1_73;
	RuntimeObject* ___MAP_EDGE_X2_75;
	RuntimeObject* ___MAP_EDGE_Y1_77;
	RuntimeObject* ___MAP_EDGE_Y2_79;
	RuntimeObject* ___RENDER_MODE_81;
	RuntimeObject* ___MAP_MODE_83;
	RuntimeObject* ___TRIC01OVL_84;
	RuntimeObject* ___SELECTTRICORDER_87;
	RuntimeObject* ___SELECTNONE_89;
	RuntimeObject* ___SELECTNONE_91;
	RuntimeObject* ___SELECTMP5_93;
	RuntimeObject* ___SELECTMP5BURST_95;
	RuntimeObject* ___SELECTGRANADE_97;
	RuntimeObject* ___SELECTSTINGER_99;
	RuntimeObject* ___SELECTQUANTUM_101;
	RuntimeObject* ___GUN_ON_104;
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
struct TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___TARGETOVL_0;
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
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
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
struct List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_StaticFields
{
	IAcknexObjectU5BU5D_tD5763965E4C76CDCD6E08BA3A902D9B0D813A563* ___s_emptyArray;
};
struct Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields
{
	WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___WaitForEndOfFrame;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LAUNCH_set_MY_m917319790A02D3F639D9B2C6FF401B2B540F3718_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LAUNCH_set_THERE_mFB1DCF148D3B0D50501E573D6BA3B33B219C2E25_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LAUNCH_set__world_m154DFAB41CA6D6A9B400ABCAB6B016B520D9A760_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEMISSILE__ctor_mBD8DA1CB945C24768E365325E3B95DCD5C03A11D (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LAUNCH_get_MY_mD3DC4151794F0861A7378060DF0393A5E38BB340_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LAUNCH_get_THERE_mCA8B12821071A55AF68096466AE1165A939F107E_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15 (RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F (int32_t ___0_ticks, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DECAMMO__ctor_mF631B0417F3BD5DBA5E40DB19E2F3843AE8D87D4 (DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
inline void List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213 (List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAM_set_MY_m4F2D6E1B566EBF322F11B6F36519E0921C982192_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAM_set_THERE_mBE884D4A58DECF7FF6B29110EBA9F147677D92E4_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAM_set__world_m46909893FEE9715D60C92A8B6037FAA4F3EDDBA9_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEPARTICLE__ctor_m7ED1B9A37FC131618164D6259BA23BBC833BA65E (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAM_get_MY_m19DAB8D2893E225A00A77C7B1A42CD5ED44757CD_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAM_get_THERE_m0E5D0F289CFF43B9631F6A1678437E052CC7D0F0_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAM_set_Current_mAD635360E035A43019CE3E953C7D32FE4A62D1ED_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RAISE_set_MY_m59B60EAD784135C7996D4628488AB25556FD1B7B_inline (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RAISE_set_THERE_m2E6E84D40CF4698AD2E56CDEAEA220E8A42FCD37_inline (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RAISE_set__world_mCB63C7AA6C340E159144FD4B7F0A156711EF670A_inline (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3 (int32_t ___0_frames, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOWER_set_MY_mD0FC8B9A73926CAA8C68B9AD1CD57D721D4E29AB_inline (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOWER_set_THERE_m18CE8E68F58CAE1CAB3FD65FED53C4BE65663672_inline (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOWER_set__world_mC5293D1929E205789B9D4C8F2231E0EDBEE9C400_inline (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETON_set_MY_m8E0A20F4BCBDF0BFCA7716D15DCA93B6FECEA525_inline (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETON_set_THERE_mCADD131FFC4C22552EAC0BB09ED8957C1C432A44_inline (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETON_set__world_mBEFDDD99FE73110D87D9A9709B903077192E8FC9_inline (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TARGETON_get__world_m0EE475075B3119A4AAE3C6EF43D32AD9D082FFCA_inline (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETOFF_set_MY_m7766B234E2E5F644F1FEF3DCA04063EF217FBC53_inline (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETOFF_set_THERE_m4C88A5FEFBB5817923BF867E6845AA1A272A7FE9_inline (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETOFF_set__world_mF4890B0153DE1C1D6FE1CD2498E04F649AEBB65C_inline (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TARGETOFF_get__world_m263F3E9925E07F693A186917F457160A70A111C0_inline (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTNONE_set_MY_m308BEF1FB734331939FAE26B125498D3518B705A_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTNONE_set_THERE_m8FEBCBEDF2ECEF6B12F886DA59AF42F03ECEE784_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTNONE_set__world_m237ABAB84B3B5652935539BFE7563910C9A8DDF4_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTNONE_set_Current_m4F85C958534959E44C7A7BED40DC2AF78E8348ED_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETOFF__ctor_mADB3318ADA9DFCAC4F053B73F0CE4BE26016FFC7 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTNONE_get_MY_m7346D05EAA5B0F4CD84AF32B22EB82210DFD4E9B_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTNONE_get_THERE_m7B159965CE908129BAB477B4B3F35E20E55E2FA9_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4 (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOWER__ctor_m2CCAB60402636B5DDB62FD9BD5FF9D7F3EEBBE55 (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTTRICORDER_set_MY_m25ADC6359586091EE2237B96A812F9A400A0BC39_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTTRICORDER_set_THERE_m0E85CC812520512092EB3C03E8FD5457475BF025_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTTRICORDER_set__world_m02E42A82000231BB26D9C9DE4CDBCAFF22ECEB70_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTNONE__ctor_mFF1135D9058921B26DEC652619B7A667380D5451 (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTTRICORDER_get_MY_m061D3D6D71D899BA76DBD4AE0048744643B0A9F0_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTTRICORDER_get_THERE_m4FFB4F854C49329342CB972A2CFA009932845881_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9 (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTTRICORDER_set_Current_mF36A2B7EF562217134BEA6C3345700E6D7200316_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RAISE__ctor_mC9CDF6F146498172B72D6E63718BA1D065CC3E95 (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5_set_MY_mDADE4F36B543CEE54AA51BC938EB0A2D3FA88ACE_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5_set_THERE_mF6C3438B048701EEE0358F4D4359836ACC926761_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5_set__world_m0F6CF39E3F7D4C97232CBE58E9EC8415653429DF_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5_get_MY_mF9E049B68DBCBE24FC4B43B51D215D1839B76379_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5_get_THERE_m15454977AD7D506A483B27228D4A10DE9C2A3306_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5_set_Current_mB7F1042D6A117F1125AC9AE5007D6BD56EA11AFC_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETON__ctor_m515D11DEBB4E550106AF681B3007629ABBCD5FAA (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5BURST_set_MY_m128526268F2C855C27EE79F6A11326FA5BB9DC6D_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5BURST_set_THERE_mAD1CE7DD91A57AD7484FAB3C28FBBD44FEC305F1_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5BURST_set__world_m8C45F43CE319C1B891B4D9759901B4E75BF7A546_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5BURST_get_MY_m48AA4A18FCD5E7EC078F51B11DCE90C3D61DD83C_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5BURST_get_THERE_m1E2B18950A2CE5423E77A6F78FB64F737D91F830_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5BURST_set_Current_mD64555B0A2996349A0EC218B6C50FC9B453E1958_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LAUNCH_get_MY_mD3DC4151794F0861A7378060DF0393A5E38BB340 (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LAUNCH_set_MY_m917319790A02D3F639D9B2C6FF401B2B540F3718 (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LAUNCH_get_THERE_mCA8B12821071A55AF68096466AE1165A939F107E (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LAUNCH_set_THERE_mFB1DCF148D3B0D50501E573D6BA3B33B219C2E25 (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622 (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LAUNCH_set__world_m154DFAB41CA6D6A9B400ABCAB6B016B520D9A760 (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LAUNCH_get_Current_m368DDC37C8B6D12E2393D41099FA9B2AA4538631 (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LAUNCH_Reset_m75B4ED7330792A7D3AE57EDFB41C9BEE13A0B26F (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LAUNCH__ctor_mBCEBEFBC5A3D2CCBF67CF6AF0F54AAF9C68ECEAD (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LAUNCH__ctor_mF42B7B9DA460C9D53F5F87753EFD343EF38CA89C (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LAUNCH_set_MY_m917319790A02D3F639D9B2C6FF401B2B540F3718_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LAUNCH_set_THERE_mFB1DCF148D3B0D50501E573D6BA3B33B219C2E25_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LAUNCH_set__world_m154DFAB41CA6D6A9B400ABCAB6B016B520D9A760_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LAUNCH_MoveNext_m8681F7FF7BD56146A835B115CD2C2D8957AA326A (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* V_1 = NULL;
	DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* V_2 = NULL;
	RuntimeObject* G_B24_0 = NULL;
	LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* G_B24_1 = NULL;
	RuntimeObject* G_B23_0 = NULL;
	LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* G_B23_1 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* G_B25_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_010c;
			}
			case 1:
			{
				goto IL_0490;
			}
			case 2:
			{
				goto IL_1058;
			}
			case 3:
			{
				goto IL_1150;
			}
			case 4:
			{
				goto IL_11d0;
			}
			case 5:
			{
				goto IL_13ad;
			}
		}
	}
	{
		CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* L_2 = (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC*)il2cpp_codegen_object_new(CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC_il2cpp_TypeInfo_var);
		CHOOSEMISSILE__ctor_mBD8DA1CB945C24768E365325E3B95DCD5C03A11D(L_2, NULL);
		V_1 = L_2;
		CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* L_3 = V_1;
		CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* L_4 = L_3;
		RuntimeObject* L_5;
		L_5 = LAUNCH_get_MY_mD3DC4151794F0861A7378060DF0393A5E38BB340_inline(__this, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_4, L_5);
		CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* L_6 = L_4;
		RuntimeObject* L_7;
		L_7 = LAUNCH_get_THERE_mCA8B12821071A55AF68096466AE1165A939F107E_inline(__this, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8;
		L_8 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_6, L_8);
		RuntimeObject* L_9;
		L_9 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* L_10 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_10);
		RuntimeObject* L_12;
		L_12 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_1), (void*)L_13);
		RuntimeObject* L_14 = __this->___MISSILE_1;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_14, (RuntimeObject*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0086:
	{
		RuntimeObject* L_16;
		L_16 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_3), (void*)L_17);
		RuntimeObject* L_18 = __this->___GUNFIRING_3;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)231), (1.0f));
		RuntimeObject* L_19;
		L_19 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_21;
		L_21 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)97), (RuntimeObject*)NULL);
		float L_23;
		L_23 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_23;
		float L_24 = __this->___startTime1;
		float L_25;
		L_25 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(1, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_24, L_25));
		__this->____cursor = 1;
		goto IL_010c;
	}

IL_00ff:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_26 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, L_26, NULL);
		return (bool)1;
	}

IL_010c:
	{
		float L_27;
		L_27 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_28 = __this->___endTime1;
		if ((((float)L_27) < ((float)L_28)))
		{
			goto IL_00ff;
		}
	}
	{
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, NULL, NULL);
		RuntimeObject* L_29;
		L_29 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)1500292443), (bool)1, (bool)1);
		__this->___STNG01OVL_9 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STNG01OVL_9), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		RuntimeObject* L_34 = __this->___STNG01OVL_9;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)158), L_34);
		RuntimeObject* L_35;
		L_35 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)2088896983));
		__this->___AMMO_13 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_13), (void*)L_36);
		RuntimeObject* L_37 = __this->___AMMO_13;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (bool)1);
		__this->___AMMO_13_val = L_38;
		float L_39 = __this->___AMMO_13_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_39, (0.0f), NULL);
		if (L_40)
		{
			goto IL_1221;
		}
	}
	{
		RuntimeObject* L_41;
		L_41 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, 5, ((int32_t)2088896983));
		__this->___AMMO_15 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_15), (void*)L_42);
		RuntimeObject* L_43 = __this->___AMMO_15;
		NullCheck(L_43);
		float L_44;
		L_44 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)231), (bool)1);
		__this->___AMMO_15_val = L_44;
		RuntimeObject* L_45;
		L_45 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, 5, ((int32_t)2088896983));
		__this->___AMMO_16 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_16), (void*)L_46);
		RuntimeObject* L_47 = __this->___AMMO_16;
		float L_48 = __this->___AMMO_15_val;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)231), ((float)il2cpp_codegen_add(L_48, (-1.0f))));
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_49 = (DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D*)il2cpp_codegen_object_new(DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D_il2cpp_TypeInfo_var);
		DECAMMO__ctor_mF631B0417F3BD5DBA5E40DB19E2F3843AE8D87D4(L_49, NULL);
		V_2 = L_49;
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_50 = V_2;
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_51 = L_50;
		RuntimeObject* L_52;
		L_52 = LAUNCH_get_MY_mD3DC4151794F0861A7378060DF0393A5E38BB340_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_52);
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_53 = L_51;
		RuntimeObject* L_54;
		L_54 = LAUNCH_get_THERE_mCA8B12821071A55AF68096466AE1165A939F107E_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_54);
		RuntimeObject* L_55;
		L_55 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_55);
		RuntimeObject* L_56;
		L_56 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_57 = V_2;
		NullCheck(L_56);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_57);
		RuntimeObject* L_59;
		L_59 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, 5, ((int32_t)2088896983));
		__this->___AMMO_18 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_18), (void*)L_60);
		RuntimeObject* L_61 = __this->___AMMO_18;
		NullCheck(L_61);
		float L_62;
		L_62 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)231), (bool)1);
		__this->___AMMO_18_val = L_62;
		float L_63 = __this->___AMMO_18_val;
		bool L_64;
		L_64 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_63, (5.0f), NULL);
		if (L_64)
		{
			goto IL_0365;
		}
	}
	{
		RuntimeObject* L_65;
		L_65 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_65);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)665673790), (bool)1, (bool)1);
		__this->___WRN01STR_19 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN01STR_19), (void*)L_67);
		RuntimeObject* L_68;
		L_68 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_68);
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_21 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_21), (void*)L_70);
		RuntimeObject* L_71 = __this->___PANELTEXT_21;
		NullCheck(L_71);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_72;
		L_72 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_71, ((int32_t)293), (bool)1);
		__this->___PANELTEXT_21_array = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_21_array), (void*)L_72);
		RuntimeObject* L_73 = __this->___PANELTEXT_21;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)295), (bool)1);
		__this->___PANELTEXT_21_index = L_74;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_75 = __this->___PANELTEXT_21_array;
		int32_t L_76 = __this->___PANELTEXT_21_index;
		RuntimeObject* L_77 = __this->___WRN01STR_19;
		NullCheck(L_75);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_75, ((int32_t)il2cpp_codegen_subtract(L_76, 1)), L_77, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_78 = __this->___PANELTEXT_21;
		NullCheck(L_78);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_78, (bool)1);
		RuntimeObject* L_79;
		L_79 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_79);
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_80, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_22 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_22), (void*)L_81);
		RuntimeObject* L_82;
		L_82 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_82);
		RuntimeObject* L_84 = __this->___PANELTEXT_22;
		NullCheck(L_83);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)127), L_84);
		RuntimeObject* L_85;
		L_85 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_85, 5, ((int32_t)-1606816744));
		__this->___MSGSECCOUNT_26 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MSGSECCOUNT_26), (void*)L_86);
		RuntimeObject* L_87 = __this->___MSGSECCOUNT_26;
		NullCheck(L_87);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_87, ((int32_t)231), (0.0f));
	}

IL_0365:
	{
		RuntimeObject* L_88;
		L_88 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_88);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_88, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_28 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_28), (void*)L_89);
		RuntimeObject* L_90 = __this->___PLAYER_LIGHT_28;
		NullCheck(L_90);
		float L_91;
		L_91 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_90, ((int32_t)231), (bool)1);
		__this->___PLAYER_LIGHT_28_val = L_91;
		RuntimeObject* L_92;
		L_92 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_92);
		RuntimeObject* L_93;
		L_93 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_92, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_29 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_29), (void*)L_93);
		RuntimeObject* L_94 = __this->___PLAYER_LIGHT_29;
		float L_95 = __this->___PLAYER_LIGHT_28_val;
		NullCheck(L_94);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)231), ((float)il2cpp_codegen_add(L_95, (0.699999988f))));
		RuntimeObject* L_96;
		L_96 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_96);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_97, ((int32_t)1500332464), (bool)1, (bool)1);
		__this->___STNG02SND_30 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STNG02SND_30), (void*)L_98);
		RuntimeObject* L_99;
		L_99 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		RuntimeObject* L_100 = __this->___STNG02SND_30;
		NullCheck(L_99);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_99, L_100, (0.800000012f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_101;
		L_101 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_101);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_101, 5, ((int32_t)-922693617));
		__this->___SHOT_SOUND_ON_33 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOT_SOUND_ON_33), (void*)L_102);
		RuntimeObject* L_103 = __this->___SHOT_SOUND_ON_33;
		NullCheck(L_103);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_103, ((int32_t)231), (1.0f));
		RuntimeObject* L_104;
		L_104 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_104, 5, ((int32_t)733093231));
		__this->___SHOTSECCOUNT_35 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOTSECCOUNT_35), (void*)L_105);
		RuntimeObject* L_106 = __this->___SHOTSECCOUNT_35;
		NullCheck(L_106);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_106, ((int32_t)231), (0.0f));
		float L_107;
		L_107 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_107;
		float L_108 = __this->___startTime2;
		float L_109;
		L_109 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(3, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_108, L_109));
		__this->____cursor = 2;
		goto IL_0490;
	}

IL_0483:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_110 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, L_110, NULL);
		return (bool)1;
	}

IL_0490:
	{
		float L_111;
		L_111 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_112 = __this->___endTime2;
		if ((((float)L_111) < ((float)L_112)))
		{
			goto IL_0483;
		}
	}
	{
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, NULL, NULL);
		RuntimeObject* L_113;
		L_113 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_113);
		RuntimeObject* L_114;
		L_114 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_113);
		NullCheck(L_114);
		RuntimeObject* L_115;
		L_115 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)1500328380), (bool)1, (bool)1);
		__this->___STNG02OVL_37 = L_115;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STNG02OVL_37), (void*)L_115);
		RuntimeObject* L_116;
		L_116 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_116);
		RuntimeObject* L_117;
		L_117 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_116);
		RuntimeObject* L_118 = __this->___STNG02OVL_37;
		NullCheck(L_117);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_117, ((int32_t)158), L_118);
		RuntimeObject* L_119;
		L_119 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_119);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_119, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_42 = L_120;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_42), (void*)L_120);
		RuntimeObject* L_121 = __this->___MISSILE_42;
		NullCheck(L_121);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_121, ((int32_t)213), (1.0f));
		RuntimeObject* L_122;
		L_122 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_122, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_45 = L_123;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_45), (void*)L_123);
		RuntimeObject* L_124 = __this->___MISSILE_45;
		NullCheck(L_124);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_124, ((int32_t)168), (3.0f));
		RuntimeObject* L_125;
		L_125 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_125);
		RuntimeObject* L_126;
		L_126 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_125, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_47 = L_126;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_47), (void*)L_126);
		RuntimeObject* L_127;
		L_127 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_127);
		RuntimeObject* L_128;
		L_128 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_127, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_49 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_49), (void*)L_128);
		RuntimeObject* L_129 = __this->___MISSILE_49;
		NullCheck(L_129);
		float L_130;
		L_130 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_129, ((int32_t)195), (bool)1);
		__this->___temp_50 = L_130;
		RuntimeObject* L_131;
		L_131 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_131);
		RuntimeObject* L_132;
		L_132 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_131, 5, ((int32_t)459));
		__this->___PLAYER_X_51 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_51), (void*)L_132);
		RuntimeObject* L_133 = __this->___PLAYER_X_51;
		NullCheck(L_133);
		float L_134;
		L_134 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_51_val = L_134;
		RuntimeObject* L_135;
		L_135 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_135);
		RuntimeObject* L_136;
		L_136 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_135, 5, ((int32_t)464));
		__this->___PLAYER_COS_53 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_53), (void*)L_136);
		RuntimeObject* L_137 = __this->___PLAYER_COS_53;
		NullCheck(L_137);
		float L_138;
		L_138 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_137, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_53_val = L_138;
		RuntimeObject* L_139;
		L_139 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_139);
		RuntimeObject* L_140;
		L_140 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_139, 5, ((int32_t)431));
		__this->___PLAYER_VX_57 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_57), (void*)L_140);
		RuntimeObject* L_141 = __this->___PLAYER_VX_57;
		NullCheck(L_141);
		float L_142;
		L_142 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_57_val = L_142;
		RuntimeObject* L_143;
		L_143 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_143);
		RuntimeObject* L_144;
		L_144 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_143, 5, ((int32_t)569));
		__this->___TIME_CORR_59 = L_144;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_59), (void*)L_144);
		RuntimeObject* L_145 = __this->___TIME_CORR_59;
		NullCheck(L_145);
		float L_146;
		L_146 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_145, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_59_val = L_146;
		RuntimeObject* L_147 = __this->___MISSILE_47;
		float L_148 = __this->___PLAYER_X_51_val;
		float L_149 = __this->___PLAYER_COS_53_val;
		float L_150 = __this->___PLAYER_VX_57_val;
		float L_151 = __this->___TIME_CORR_59_val;
		NullCheck(L_147);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_147, ((int32_t)195), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_148, ((float)il2cpp_codegen_multiply(L_149, (1.20000005f))))), ((float)il2cpp_codegen_multiply(L_150, L_151)))));
		RuntimeObject* L_152;
		L_152 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_152);
		RuntimeObject* L_153;
		L_153 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_152, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_61 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_61), (void*)L_153);
		RuntimeObject* L_154;
		L_154 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_154);
		RuntimeObject* L_155;
		L_155 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_154, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_63 = L_155;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_63), (void*)L_155);
		RuntimeObject* L_156 = __this->___MISSILE_63;
		NullCheck(L_156);
		float L_157;
		L_157 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_156, ((int32_t)196), (bool)1);
		__this->___temp_64 = L_157;
		RuntimeObject* L_158;
		L_158 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_158);
		RuntimeObject* L_159;
		L_159 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_158, 5, ((int32_t)460));
		__this->___PLAYER_Y_65 = L_159;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_65), (void*)L_159);
		RuntimeObject* L_160 = __this->___PLAYER_Y_65;
		NullCheck(L_160);
		float L_161;
		L_161 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_160, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_65_val = L_161;
		RuntimeObject* L_162;
		L_162 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_162);
		RuntimeObject* L_163;
		L_163 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_162, 5, ((int32_t)463));
		__this->___PLAYER_SIN_67 = L_163;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_67), (void*)L_163);
		RuntimeObject* L_164 = __this->___PLAYER_SIN_67;
		NullCheck(L_164);
		float L_165;
		L_165 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_164, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_67_val = L_165;
		RuntimeObject* L_166;
		L_166 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_166);
		RuntimeObject* L_167;
		L_167 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_166, 5, ((int32_t)432));
		__this->___PLAYER_VY_71 = L_167;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_71), (void*)L_167);
		RuntimeObject* L_168 = __this->___PLAYER_VY_71;
		NullCheck(L_168);
		float L_169;
		L_169 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_168, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_71_val = L_169;
		RuntimeObject* L_170;
		L_170 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_170);
		RuntimeObject* L_171;
		L_171 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_170, 5, ((int32_t)569));
		__this->___TIME_CORR_73 = L_171;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_73), (void*)L_171);
		RuntimeObject* L_172 = __this->___TIME_CORR_73;
		NullCheck(L_172);
		float L_173;
		L_173 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_172, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_73_val = L_173;
		RuntimeObject* L_174 = __this->___MISSILE_61;
		float L_175 = __this->___PLAYER_Y_65_val;
		float L_176 = __this->___PLAYER_SIN_67_val;
		float L_177 = __this->___PLAYER_VY_71_val;
		float L_178 = __this->___TIME_CORR_73_val;
		NullCheck(L_174);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_174, ((int32_t)196), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_175, ((float)il2cpp_codegen_multiply(L_176, (1.20000005f))))), ((float)il2cpp_codegen_multiply(L_177, L_178)))));
		RuntimeObject* L_179;
		L_179 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_179);
		RuntimeObject* L_180;
		L_180 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_179, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_75 = L_180;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_75), (void*)L_180);
		RuntimeObject* L_181;
		L_181 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_181);
		RuntimeObject* L_182;
		L_182 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_181, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_77 = L_182;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_77), (void*)L_182);
		RuntimeObject* L_183 = __this->___MISSILE_77;
		NullCheck(L_183);
		float L_184;
		L_184 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_183, ((int32_t)165), (bool)1);
		__this->___temp_78 = L_184;
		RuntimeObject* L_185;
		L_185 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_185, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_79 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_79), (void*)L_186);
		RuntimeObject* L_187 = __this->___PLAYER_SIZE_79;
		NullCheck(L_187);
		float L_188;
		L_188 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_187, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_79_val = L_188;
		RuntimeObject* L_189;
		L_189 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_189);
		RuntimeObject* L_190;
		L_190 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_189, 5, ((int32_t)435));
		__this->___PLAYER_TILT_82 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_82), (void*)L_190);
		RuntimeObject* L_191 = __this->___PLAYER_TILT_82;
		NullCheck(L_191);
		float L_192;
		L_192 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_191, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_82_val = L_192;
		RuntimeObject* L_193;
		L_193 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_193);
		RuntimeObject* L_194;
		L_194 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_193, 5, ((int32_t)479));
		__this->___PLAYER_HGT_89 = L_194;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HGT_89), (void*)L_194);
		RuntimeObject* L_195 = __this->___PLAYER_HGT_89;
		NullCheck(L_195);
		float L_196;
		L_196 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_195, ((int32_t)231), (bool)1);
		__this->___PLAYER_HGT_89_val = L_196;
		RuntimeObject* L_197;
		L_197 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_197);
		RuntimeObject* L_198;
		L_198 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_197, 5, ((int32_t)567));
		__this->___FLOOR_HGT_91 = L_198;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOOR_HGT_91), (void*)L_198);
		RuntimeObject* L_199 = __this->___FLOOR_HGT_91;
		NullCheck(L_199);
		float L_200;
		L_200 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_199, ((int32_t)231), (bool)1);
		__this->___FLOOR_HGT_91_val = L_200;
		RuntimeObject* L_201 = __this->___MISSILE_75;
		float L_202 = __this->___PLAYER_SIZE_79_val;
		float L_203 = __this->___PLAYER_TILT_82_val;
		float L_204 = __this->___PLAYER_HGT_89_val;
		float L_205 = __this->___FLOOR_HGT_91_val;
		NullCheck(L_201);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_201, ((int32_t)165), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_202, ((float)il2cpp_codegen_multiply(L_203, (0.649999976f))))), (0.0500000007f))), L_204)), L_205)));
		RuntimeObject* L_206;
		L_206 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_206);
		RuntimeObject* L_207;
		L_207 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_206);
		NullCheck(L_207);
		RuntimeObject* L_208;
		L_208 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_207, ((int32_t)-425949196), (bool)1, (bool)1);
		__this->___EXPLODEMISSILE_92 = L_208;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLODEMISSILE_92), (void*)L_208);
		RuntimeObject* L_209;
		L_209 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_209);
		RuntimeObject* L_210;
		L_210 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_209, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_94 = L_210;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_94), (void*)L_210);
		RuntimeObject* L_211 = __this->___MISSILE_94;
		RuntimeObject* L_212 = __this->___EXPLODEMISSILE_92;
		NullCheck(L_211);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_211, ((int32_t)209), L_212);
		RuntimeObject* L_213;
		L_213 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_213);
		RuntimeObject* L_214;
		L_214 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_213);
		NullCheck(L_214);
		RuntimeObject* L_215;
		L_215 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_214, ((int32_t)-1050000571), (bool)1, (bool)1);
		__this->___EXPLODETARGET_95 = L_215;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLODETARGET_95), (void*)L_215);
		RuntimeObject* L_216;
		L_216 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_216);
		RuntimeObject* L_217;
		L_217 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_216, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_97 = L_217;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_97), (void*)L_217);
		RuntimeObject* L_218 = __this->___MISSILE_97;
		RuntimeObject* L_219 = __this->___EXPLODETARGET_95;
		NullCheck(L_218);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_218, ((int32_t)191), L_219);
		RuntimeObject* L_220;
		L_220 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_220);
		RuntimeObject* L_221;
		L_221 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_220);
		NullCheck(L_221);
		RuntimeObject* L_222;
		L_222 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_221, ((int32_t)1181917228), (bool)1, (bool)1);
		__this->___MISS2TEX_98 = L_222;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS2TEX_98), (void*)L_222);
		RuntimeObject* L_223;
		L_223 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_223);
		RuntimeObject* L_224;
		L_224 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_223, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_100 = L_224;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_100), (void*)L_224);
		RuntimeObject* L_225 = __this->___MISSILE_100;
		RuntimeObject* L_226 = __this->___MISS2TEX_98;
		NullCheck(L_225);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_225, ((int32_t)164), L_226);
		RuntimeObject* L_227;
		L_227 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_227);
		RuntimeObject* L_228;
		L_228 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_227, 5, ((int32_t)462));
		__this->___PLAYER_ANGLE_101 = L_228;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ANGLE_101), (void*)L_228);
		RuntimeObject* L_229 = __this->___PLAYER_ANGLE_101;
		NullCheck(L_229);
		float L_230;
		L_230 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_229, ((int32_t)231), (bool)1);
		__this->___PLAYER_ANGLE_101_val = L_230;
		RuntimeObject* L_231;
		L_231 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_231);
		RuntimeObject* L_232;
		L_232 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_231, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_103 = L_232;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_103), (void*)L_232);
		RuntimeObject* L_233 = __this->___MISSILE_103;
		float L_234 = __this->___PLAYER_ANGLE_101_val;
		NullCheck(L_233);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_233, ((int32_t)194), L_234);
		RuntimeObject* L_235;
		L_235 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_235);
		RuntimeObject* L_236;
		L_236 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_235, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_105 = L_236;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_105), (void*)L_236);
		RuntimeObject* L_237;
		L_237 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_237);
		RuntimeObject* L_238;
		L_238 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_237, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_107 = L_238;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_107), (void*)L_238);
		RuntimeObject* L_239 = __this->___MISSILE_107;
		NullCheck(L_239);
		float L_240;
		L_240 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_239, ((int32_t)169), (bool)1);
		__this->___temp_108 = L_240;
		RuntimeObject* L_241;
		L_241 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_241);
		RuntimeObject* L_242;
		L_242 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_241, 5, ((int32_t)435));
		__this->___PLAYER_TILT_110 = L_242;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_110), (void*)L_242);
		RuntimeObject* L_243 = __this->___PLAYER_TILT_110;
		NullCheck(L_243);
		float L_244;
		L_244 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_243, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_110_val = L_244;
		RuntimeObject* L_245 = __this->___MISSILE_105;
		float L_246 = __this->___PLAYER_TILT_110_val;
		NullCheck(L_245);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_245, ((int32_t)169), ((-L_246)));
		RuntimeObject* L_247;
		L_247 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_247);
		RuntimeObject* L_248;
		L_248 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_247);
		NullCheck(L_248);
		RuntimeObject* L_249;
		L_249 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_248, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_111 = L_249;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_111), (void*)L_249);
		RuntimeObject* L_250;
		L_250 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_250);
		RuntimeObject* L_251;
		L_251 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_250, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_113 = L_251;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_113), (void*)L_251);
		RuntimeObject* L_252 = __this->___MISSILE_113;
		RuntimeObject* L_253 = __this->___BULLET_111;
		NullCheck(L_252);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_252, ((int32_t)199), L_253);
		RuntimeObject* L_254;
		L_254 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_254);
		RuntimeObject* L_255;
		L_255 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_254, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_116 = L_255;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_116), (void*)L_255);
		RuntimeObject* L_256 = __this->___MISSILE_116;
		NullCheck(L_256);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_256, ((int32_t)207), (1.0f));
		RuntimeObject* L_257;
		L_257 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_257);
		RuntimeObject* L_258;
		L_258 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_257, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_119 = L_258;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_119), (void*)L_258);
		RuntimeObject* L_259 = __this->___MISSILE_119;
		NullCheck(L_259);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_259, ((int32_t)214), (1.0f));
		RuntimeObject* L_260;
		L_260 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_260);
		RuntimeObject* L_261;
		L_261 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_260, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_122 = L_261;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_122), (void*)L_261);
		RuntimeObject* L_262 = __this->___MISSILE_122;
		NullCheck(L_262);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_262, ((int32_t)204), (0.0f));
		RuntimeObject* L_263;
		L_263 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_263);
		RuntimeObject* L_264;
		L_264 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_263, 5, ((int32_t)440));
		__this->___SHOOT_SECTOR_124 = L_264;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_SECTOR_124), (void*)L_264);
		RuntimeObject* L_265 = __this->___SHOOT_SECTOR_124;
		NullCheck(L_265);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_265, ((int32_t)231), (6.28299999f));
		RuntimeObject* L_266;
		L_266 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_266);
		RuntimeObject* L_267;
		L_267 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_266, 5, ((int32_t)439));
		__this->___SHOOT_RANGE_126 = L_267;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_RANGE_126), (void*)L_267);
		RuntimeObject* L_268 = __this->___SHOOT_RANGE_126;
		NullCheck(L_268);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_268, ((int32_t)231), (200.0f));
		RuntimeObject* L_269;
		L_269 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_269);
		RuntimeObject* L_270;
		L_270 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_269, 5, ((int32_t)441));
		__this->___SHOOT_FAC_128 = L_270;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_128), (void*)L_270);
		RuntimeObject* L_271 = __this->___SHOOT_FAC_128;
		NullCheck(L_271);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_271, ((int32_t)231), (0.0f));
		RuntimeObject* L_272;
		L_272 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_272);
		RuntimeObject* L_273;
		L_273 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_272, 5, ((int32_t)442));
		__this->___SHOOT_X_130 = L_273;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_X_130), (void*)L_273);
		RuntimeObject* L_274 = __this->___SHOOT_X_130;
		NullCheck(L_274);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_274, ((int32_t)231), (0.0f));
		RuntimeObject* L_275;
		L_275 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_275);
		RuntimeObject* L_276;
		L_276 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_275, 5, ((int32_t)-968806307));
		__this->___SVANGLE_131 = L_276;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SVANGLE_131), (void*)L_276);
		RuntimeObject* L_277 = __this->___SVANGLE_131;
		NullCheck(L_277);
		float L_278;
		L_278 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_277, ((int32_t)231), (bool)1);
		__this->___SVANGLE_131_val = L_278;
		RuntimeObject* L_279;
		L_279 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_279);
		RuntimeObject* L_280;
		L_280 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_279, 5, ((int32_t)443));
		__this->___SHOOT_Y_132 = L_280;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_Y_132), (void*)L_280);
		RuntimeObject* L_281 = __this->___SHOOT_Y_132;
		float L_282 = __this->___SVANGLE_131_val;
		NullCheck(L_281);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_281, ((int32_t)231), L_282);
		RuntimeObject* L_283;
		L_283 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		RuntimeObject* L_284;
		L_284 = LAUNCH_get_MY_mD3DC4151794F0861A7378060DF0393A5E38BB340_inline(__this, NULL);
		RuntimeObject* L_285;
		L_285 = LAUNCH_get_THERE_mCA8B12821071A55AF68096466AE1165A939F107E_inline(__this, NULL);
		NullCheck(L_283);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_283, (RuntimeObject*)NULL, L_284, L_285);
		RuntimeObject* L_286;
		L_286 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_286);
		RuntimeObject* L_287;
		L_287 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_286, 5, ((int32_t)444));
		__this->___HIT_DIST_134 = L_287;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_134), (void*)L_287);
		RuntimeObject* L_288 = __this->___HIT_DIST_134;
		NullCheck(L_288);
		float L_289;
		L_289 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_288, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_134_val = L_289;
		float L_290 = __this->___HIT_DIST_134_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_291;
		L_291 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_290, (0.0f), NULL);
		if (L_291)
		{
			goto IL_0f33;
		}
	}
	{
		RuntimeObject* L_292;
		L_292 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_292);
		RuntimeObject* L_293;
		L_293 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_292, ((int32_t)704), (bool)0);
		__this->___HIT_135 = L_293;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_135), (void*)L_293);
		RuntimeObject* L_294;
		L_294 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		RuntimeObject* L_295 = __this->___HIT_135;
		NullCheck(L_294);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_294, ((int32_t)2013386137), L_295);
		RuntimeObject* L_296;
		L_296 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_296);
		RuntimeObject* L_297;
		L_297 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_296, ((int32_t)704), (bool)0);
		__this->___HIT_139 = L_297;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_139), (void*)L_297);
		RuntimeObject* L_298 = __this->___HIT_139;
		NullCheck(L_298);
		float L_299;
		L_299 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_298, ((int32_t)208), (bool)1);
		__this->___temp_140 = L_299;
		float L_300 = __this->___temp_140;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_301;
		L_301 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_300, (1.0f), NULL);
		if (!L_301)
		{
			goto IL_0f33;
		}
	}
	{
		RuntimeObject* L_302;
		L_302 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_302);
		RuntimeObject* L_303;
		L_303 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_302, ((int32_t)704), (bool)0);
		__this->___HIT_143 = L_303;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_143), (void*)L_303);
		RuntimeObject* L_304 = __this->___HIT_143;
		NullCheck(L_304);
		float L_305;
		L_305 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_304, ((int32_t)202), (bool)1);
		__this->___temp_144 = L_305;
		float L_306 = __this->___temp_144;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_307;
		L_307 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_306, (0.0f), NULL);
		if (L_307)
		{
			goto IL_0e61;
		}
	}
	{
		RuntimeObject* L_308;
		L_308 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_308);
		RuntimeObject* L_309;
		L_309 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_308, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_146 = L_309;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_146), (void*)L_309);
		RuntimeObject* L_310;
		L_310 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_310);
		RuntimeObject* L_311;
		L_311 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_310, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_148 = L_311;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_148), (void*)L_311);
		RuntimeObject* L_312 = __this->___MISSILE_148;
		NullCheck(L_312);
		float L_313;
		L_313 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_312, ((int32_t)169), (bool)1);
		__this->___temp_149 = L_313;
		RuntimeObject* L_314;
		L_314 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_314);
		RuntimeObject* L_315;
		L_315 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_314, ((int32_t)704), (bool)0);
		__this->___HIT_152 = L_315;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_152), (void*)L_315);
		RuntimeObject* L_316 = __this->___HIT_152;
		NullCheck(L_316);
		float L_317;
		L_317 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_316, ((int32_t)200), (bool)1);
		__this->___temp_153 = L_317;
		RuntimeObject* L_318;
		L_318 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_318);
		RuntimeObject* L_319;
		L_319 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_318, 5, ((int32_t)567));
		__this->___FLOOR_HGT_155 = L_319;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOOR_HGT_155), (void*)L_319);
		RuntimeObject* L_320 = __this->___FLOOR_HGT_155;
		NullCheck(L_320);
		float L_321;
		L_321 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_320, ((int32_t)231), (bool)1);
		__this->___FLOOR_HGT_155_val = L_321;
		RuntimeObject* L_322;
		L_322 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_322);
		RuntimeObject* L_323;
		L_323 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_322, ((int32_t)704), (bool)0);
		__this->___HIT_159 = L_323;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_159), (void*)L_323);
		RuntimeObject* L_324 = __this->___HIT_159;
		NullCheck(L_324);
		float L_325;
		L_325 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_324, ((int32_t)202), (bool)1);
		__this->___temp_160 = L_325;
		RuntimeObject* L_326 = __this->___MISSILE_146;
		float L_327 = __this->___temp_153;
		float L_328 = __this->___FLOOR_HGT_155_val;
		float L_329 = __this->___temp_160;
		NullCheck(L_326);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_326, ((int32_t)169), ((float)(((float)il2cpp_codegen_subtract(L_327, L_328))/L_329)));
	}

IL_0e61:
	{
		RuntimeObject* L_330;
		L_330 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_330);
		RuntimeObject* L_331;
		L_331 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_330, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_163 = L_331;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_163), (void*)L_331);
		RuntimeObject* L_332 = __this->___MISSILE_163;
		NullCheck(L_332);
		float L_333;
		L_333 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_332, ((int32_t)169), (bool)1);
		__this->___temp_164 = L_333;
		float L_334 = __this->___temp_164;
		bool L_335;
		L_335 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_334, (0.0f), NULL);
		if (!L_335)
		{
			goto IL_0fc3;
		}
	}
	{
		RuntimeObject* L_336;
		L_336 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_336);
		RuntimeObject* L_337;
		L_337 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_336, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_166 = L_337;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_166), (void*)L_337);
		RuntimeObject* L_338;
		L_338 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_338);
		RuntimeObject* L_339;
		L_339 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_338, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_168 = L_339;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_168), (void*)L_339);
		RuntimeObject* L_340 = __this->___MISSILE_168;
		NullCheck(L_340);
		float L_341;
		L_341 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_340, ((int32_t)169), (bool)1);
		__this->___temp_169 = L_341;
		RuntimeObject* L_342;
		L_342 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_342);
		RuntimeObject* L_343;
		L_343 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_342, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_172 = L_343;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_172), (void*)L_343);
		RuntimeObject* L_344 = __this->___MISSILE_172;
		NullCheck(L_344);
		float L_345;
		L_345 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_344, ((int32_t)169), (bool)1);
		__this->___temp_173 = L_345;
		RuntimeObject* L_346 = __this->___MISSILE_166;
		float L_347 = __this->___temp_173;
		NullCheck(L_346);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_346, ((int32_t)169), ((-L_347)));
		goto IL_0fc3;
	}

IL_0f33:
	{
		RuntimeObject* L_348;
		L_348 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_348);
		RuntimeObject* L_349;
		L_349 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_348, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_175 = L_349;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_175), (void*)L_349);
		RuntimeObject* L_350;
		L_350 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_350);
		RuntimeObject* L_351;
		L_351 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_350, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_177 = L_351;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_177), (void*)L_351);
		RuntimeObject* L_352 = __this->___MISSILE_177;
		NullCheck(L_352);
		float L_353;
		L_353 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_352, ((int32_t)169), (bool)1);
		__this->___temp_178 = L_353;
		RuntimeObject* L_354;
		L_354 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_354);
		RuntimeObject* L_355;
		L_355 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_354, 5, ((int32_t)435));
		__this->___PLAYER_TILT_180 = L_355;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_180), (void*)L_355);
		RuntimeObject* L_356 = __this->___PLAYER_TILT_180;
		NullCheck(L_356);
		float L_357;
		L_357 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_356, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_180_val = L_357;
		RuntimeObject* L_358 = __this->___MISSILE_175;
		float L_359 = __this->___PLAYER_TILT_180_val;
		NullCheck(L_358);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_358, ((int32_t)169), ((float)(((-L_359))/(1.39999998f))));
	}

IL_0fc3:
	{
		RuntimeObject* L_360;
		L_360 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_360);
		RuntimeObject* L_361;
		L_361 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_360, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_184 = L_361;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_184), (void*)L_361);
		RuntimeObject* L_362 = __this->___PLAYER_LIGHT_184;
		NullCheck(L_362);
		float L_363;
		L_363 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_362, ((int32_t)231), (bool)1);
		__this->___PLAYER_LIGHT_184_val = L_363;
		RuntimeObject* L_364;
		L_364 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_364);
		RuntimeObject* L_365;
		L_365 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_364, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_185 = L_365;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_185), (void*)L_365);
		RuntimeObject* L_366 = __this->___PLAYER_LIGHT_185;
		float L_367 = __this->___PLAYER_LIGHT_184_val;
		NullCheck(L_366);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_366, ((int32_t)231), ((float)il2cpp_codegen_add(L_367, (-0.699999988f))));
		float L_368;
		L_368 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_368;
		float L_369 = __this->___startTime3;
		float L_370;
		L_370 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_369, L_370));
		__this->____cursor = 3;
		goto IL_1058;
	}

IL_104b:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_371 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, L_371, NULL);
		return (bool)1;
	}

IL_1058:
	{
		float L_372;
		L_372 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_373 = __this->___endTime3;
		if ((((float)L_372) < ((float)L_373)))
		{
			goto IL_104b;
		}
	}
	{
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, NULL, NULL);
		RuntimeObject* L_374;
		L_374 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_374);
		RuntimeObject* L_375;
		L_375 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_374);
		NullCheck(L_375);
		RuntimeObject* L_376;
		L_376 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_375, ((int32_t)1181917228), (bool)1, (bool)1);
		__this->___MISS2TEX_187 = L_376;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS2TEX_187), (void*)L_376);
		RuntimeObject* L_377;
		L_377 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_377);
		RuntimeObject* L_378;
		L_378 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_377, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_189 = L_378;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_189), (void*)L_378);
		RuntimeObject* L_379 = __this->___MISSILE_189;
		RuntimeObject* L_380 = L_379;
		if (L_380)
		{
			G_B24_0 = L_380;
			G_B24_1 = __this;
			goto IL_10ae;
		}
		G_B23_0 = L_380;
		G_B23_1 = __this;
	}
	{
		G_B25_0 = ((RuntimeObject*)(NULL));
		G_B25_1 = G_B23_1;
		goto IL_10ba;
	}

IL_10ae:
	{
		NullCheck(G_B24_0);
		RuntimeObject* L_381;
		L_381 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B24_0, ((int32_t)164), (bool)1, (bool)1);
		G_B25_0 = L_381;
		G_B25_1 = G_B24_1;
	}

IL_10ba:
	{
		NullCheck(G_B25_1);
		G_B25_1->___temp_190 = G_B25_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B25_1->___temp_190), (void*)G_B25_0);
		RuntimeObject* L_382 = __this->___temp_190;
		RuntimeObject* L_383 = __this->___MISS2TEX_187;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_384;
		L_384 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_382, L_383, NULL);
		if (!L_384)
		{
			goto IL_111c;
		}
	}
	{
		RuntimeObject* L_385;
		L_385 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_385);
		RuntimeObject* L_386;
		L_386 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_385);
		NullCheck(L_386);
		RuntimeObject* L_387;
		L_387 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_386, ((int32_t)1181881291), (bool)1, (bool)1);
		__this->___MISS1TEX_191 = L_387;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS1TEX_191), (void*)L_387);
		RuntimeObject* L_388;
		L_388 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_388);
		RuntimeObject* L_389;
		L_389 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_388, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_193 = L_389;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_193), (void*)L_389);
		RuntimeObject* L_390 = __this->___MISSILE_193;
		RuntimeObject* L_391 = __this->___MISS1TEX_191;
		NullCheck(L_390);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_390, ((int32_t)164), L_391);
	}

IL_111c:
	{
		float L_392;
		L_392 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime4 = L_392;
		float L_393 = __this->___startTime4;
		float L_394;
		L_394 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime4 = ((float)il2cpp_codegen_add(L_393, L_394));
		__this->____cursor = 4;
		goto IL_1150;
	}

IL_1143:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_395 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, L_395, NULL);
		return (bool)1;
	}

IL_1150:
	{
		float L_396;
		L_396 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_397 = __this->___endTime4;
		if ((((float)L_396) < ((float)L_397)))
		{
			goto IL_1143;
		}
	}
	{
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, NULL, NULL);
		RuntimeObject* L_398;
		L_398 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_398);
		RuntimeObject* L_399;
		L_399 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_398);
		NullCheck(L_399);
		RuntimeObject* L_400;
		L_400 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_399, ((int32_t)1500292443), (bool)1, (bool)1);
		__this->___STNG01OVL_195 = L_400;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STNG01OVL_195), (void*)L_400);
		RuntimeObject* L_401;
		L_401 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_401);
		RuntimeObject* L_402;
		L_402 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_401);
		RuntimeObject* L_403 = __this->___STNG01OVL_195;
		NullCheck(L_402);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_402, ((int32_t)158), L_403);
		float L_404;
		L_404 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime5 = L_404;
		float L_405 = __this->___startTime5;
		float L_406;
		L_406 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime5 = ((float)il2cpp_codegen_add(L_405, L_406));
		__this->____cursor = 5;
		goto IL_11d0;
	}

IL_11c3:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_407 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, L_407, NULL);
		return (bool)1;
	}

IL_11d0:
	{
		float L_408;
		L_408 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_409 = __this->___endTime5;
		if ((((float)L_408) < ((float)L_409)))
		{
			goto IL_11c3;
		}
	}
	{
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, NULL, NULL);
		RuntimeObject* L_410;
		L_410 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_410);
		RuntimeObject* L_411;
		L_411 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_410);
		NullCheck(L_411);
		RuntimeObject* L_412;
		L_412 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_411, ((int32_t)1500256506), (bool)1, (bool)1);
		__this->___STNG00OVL_199 = L_412;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STNG00OVL_199), (void*)L_412);
		RuntimeObject* L_413;
		L_413 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_413);
		RuntimeObject* L_414;
		L_414 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_413);
		RuntimeObject* L_415 = __this->___STNG00OVL_199;
		NullCheck(L_414);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_414, ((int32_t)158), L_415);
		goto IL_13f9;
	}

IL_1221:
	{
		RuntimeObject* L_416;
		L_416 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_416);
		RuntimeObject* L_417;
		L_417 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_416);
		NullCheck(L_417);
		RuntimeObject* L_418;
		L_418 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_417, ((int32_t)665709727), (bool)1, (bool)1);
		__this->___WRN02STR_202 = L_418;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN02STR_202), (void*)L_418);
		RuntimeObject* L_419;
		L_419 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_419);
		RuntimeObject* L_420;
		L_420 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_419);
		NullCheck(L_420);
		RuntimeObject* L_421;
		L_421 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_420, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_204 = L_421;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_204), (void*)L_421);
		RuntimeObject* L_422 = __this->___PANELTEXT_204;
		NullCheck(L_422);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_423;
		L_423 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_422, ((int32_t)293), (bool)1);
		__this->___PANELTEXT_204_array = L_423;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_204_array), (void*)L_423);
		RuntimeObject* L_424 = __this->___PANELTEXT_204;
		NullCheck(L_424);
		int32_t L_425;
		L_425 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_424, ((int32_t)295), (bool)1);
		__this->___PANELTEXT_204_index = L_425;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_426 = __this->___PANELTEXT_204_array;
		int32_t L_427 = __this->___PANELTEXT_204_index;
		RuntimeObject* L_428 = __this->___WRN02STR_202;
		NullCheck(L_426);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_426, ((int32_t)il2cpp_codegen_subtract(L_427, 1)), L_428, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_429 = __this->___PANELTEXT_204;
		NullCheck(L_429);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_429, (bool)1);
		RuntimeObject* L_430;
		L_430 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_430);
		RuntimeObject* L_431;
		L_431 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_430);
		NullCheck(L_431);
		RuntimeObject* L_432;
		L_432 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_431, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_205 = L_432;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_205), (void*)L_432);
		RuntimeObject* L_433;
		L_433 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_433);
		RuntimeObject* L_434;
		L_434 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_433);
		RuntimeObject* L_435 = __this->___PANELTEXT_205;
		NullCheck(L_434);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_434, ((int32_t)127), L_435);
		RuntimeObject* L_436;
		L_436 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_436);
		RuntimeObject* L_437;
		L_437 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_436, 5, ((int32_t)-1606816744));
		__this->___MSGSECCOUNT_209 = L_437;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MSGSECCOUNT_209), (void*)L_437);
		RuntimeObject* L_438 = __this->___MSGSECCOUNT_209;
		NullCheck(L_438);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_438, ((int32_t)231), (0.0f));
		RuntimeObject* L_439;
		L_439 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_439);
		RuntimeObject* L_440;
		L_440 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_439);
		NullCheck(L_440);
		RuntimeObject* L_441;
		L_441 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_440, ((int32_t)1500368401), (bool)1, (bool)1);
		__this->___STNG03SND_210 = L_441;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STNG03SND_210), (void*)L_441);
		RuntimeObject* L_442;
		L_442 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		RuntimeObject* L_443 = __this->___STNG03SND_210;
		NullCheck(L_442);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_442, L_443, (1.0f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_444;
		L_444 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_444);
		RuntimeObject* L_445;
		L_445 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_444, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_213 = L_445;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_213), (void*)L_445);
		RuntimeObject* L_446 = __this->___GUN_ON_213;
		NullCheck(L_446);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_446, ((int32_t)231), (0.0f));
		float L_447;
		L_447 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime6 = L_447;
		float L_448 = __this->___startTime6;
		float L_449;
		L_449 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime6 = ((float)il2cpp_codegen_add(L_448, L_449));
		__this->____cursor = 6;
		goto IL_13ad;
	}

IL_13a0:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_450 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, L_450, NULL);
		return (bool)1;
	}

IL_13ad:
	{
		float L_451;
		L_451 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_452 = __this->___endTime6;
		if ((((float)L_451) < ((float)L_452)))
		{
			goto IL_13a0;
		}
	}
	{
		LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline(__this, NULL, NULL);
		RuntimeObject* L_453;
		L_453 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_453);
		RuntimeObject* L_454;
		L_454 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_453);
		NullCheck(L_454);
		RuntimeObject* L_455;
		L_455 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_454, ((int32_t)1500256506), (bool)1, (bool)1);
		__this->___STNG00OVL_215 = L_455;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STNG00OVL_215), (void*)L_455);
		RuntimeObject* L_456;
		L_456 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_456);
		RuntimeObject* L_457;
		L_457 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_456);
		RuntimeObject* L_458 = __this->___STNG00OVL_215;
		NullCheck(L_457);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_457, ((int32_t)158), L_458);
	}

IL_13f9:
	{
		RuntimeObject* L_459;
		L_459 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_459);
		RuntimeObject* L_460;
		L_460 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_459, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_219 = L_460;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_219), (void*)L_460);
		RuntimeObject* L_461 = __this->___WEAPONSEL_219;
		NullCheck(L_461);
		float L_462;
		L_462 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_461, ((int32_t)231), (bool)1);
		__this->___WEAPONSEL_219_val = L_462;
		float L_463 = __this->___WEAPONSEL_219_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_464;
		L_464 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_463, (4.0f), NULL);
		if (!L_464)
		{
			goto IL_14a3;
		}
	}
	{
		RuntimeObject* L_465;
		L_465 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_465);
		RuntimeObject* L_466;
		L_466 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_465);
		NullCheck(L_466);
		RuntimeObject* L_467;
		L_467 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_466, ((int32_t)-1108393432), (bool)1, (bool)1);
		__this->___LAUNCH_220 = L_467;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAUNCH_220), (void*)L_467);
		RuntimeObject* L_468;
		L_468 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_468);
		RuntimeObject* L_469;
		L_469 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_468);
		RuntimeObject* L_470 = __this->___LAUNCH_220;
		NullCheck(L_469);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_469, ((int32_t)78), L_470);
		RuntimeObject* L_471;
		L_471 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_471);
		RuntimeObject* L_472;
		L_472 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_471);
		NullCheck(L_472);
		RuntimeObject* L_473;
		L_473 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_472, ((int32_t)-1108393432), (bool)1, (bool)1);
		__this->___LAUNCH_222 = L_473;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAUNCH_222), (void*)L_473);
		RuntimeObject* L_474;
		L_474 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_474);
		RuntimeObject* L_475;
		L_475 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_474);
		RuntimeObject* L_476 = __this->___LAUNCH_222;
		NullCheck(L_475);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_475, ((int32_t)97), L_476);
	}

IL_14a3:
	{
		RuntimeObject* L_477;
		L_477 = LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline(__this, NULL);
		NullCheck(L_477);
		RuntimeObject* L_478;
		L_478 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_477, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_225 = L_478;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_225), (void*)L_478);
		RuntimeObject* L_479 = __this->___GUNFIRING_225;
		NullCheck(L_479);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_479, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BEAM_get_MY_m19DAB8D2893E225A00A77C7B1A42CD5ED44757CD (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAM_set_MY_m4F2D6E1B566EBF322F11B6F36519E0921C982192 (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BEAM_get_THERE_m0E5D0F289CFF43B9631F6A1678437E052CC7D0F0 (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAM_set_THERE_mBE884D4A58DECF7FF6B29110EBA9F147677D92E4 (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801 (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAM_set__world_m46909893FEE9715D60C92A8B6037FAA4F3EDDBA9 (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BEAM_get_Current_mAAF6B82BC0C752FAF427A661DB895961AA2B4209 (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAM_set_Current_mAD635360E035A43019CE3E953C7D32FE4A62D1ED (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAM_Reset_m703C84879A5FD7589971E1D87163E8AE6434CFCE (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAM__ctor_m37B97F628454ECDCAACC1B3BC6CACB96BC1F48C8 (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAM__ctor_mEC9A4EC9A433462B4098E83B52F2FB3EB77A4FCA (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		BEAM_set_MY_m4F2D6E1B566EBF322F11B6F36519E0921C982192_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		BEAM_set_THERE_mBE884D4A58DECF7FF6B29110EBA9F147677D92E4_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		BEAM_set__world_m46909893FEE9715D60C92A8B6037FAA4F3EDDBA9_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BEAM_MoveNext_mFD72F6487595627D5CA5241608005131F9BB60AE (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* V_1 = NULL;
	DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_0104;
			}
			case 1:
			{
				goto IL_0f3d;
			}
			case 2:
			{
				goto IL_0fbd;
			}
			case 3:
			{
				goto IL_119a;
			}
		}
	}
	{
		CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* L_2 = (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255*)il2cpp_codegen_object_new(CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255_il2cpp_TypeInfo_var);
		CHOOSEPARTICLE__ctor_m7ED1B9A37FC131618164D6259BA23BBC833BA65E(L_2, NULL);
		V_1 = L_2;
		CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* L_3 = V_1;
		CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* L_4 = L_3;
		RuntimeObject* L_5;
		L_5 = BEAM_get_MY_m19DAB8D2893E225A00A77C7B1A42CD5ED44757CD_inline(__this, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_4, L_5);
		CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* L_6 = L_4;
		RuntimeObject* L_7;
		L_7 = BEAM_get_THERE_m0E5D0F289CFF43B9631F6A1678437E052CC7D0F0_inline(__this, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8;
		L_8 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_6, L_8);
		RuntimeObject* L_9;
		L_9 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* L_10 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_10);
		RuntimeObject* L_12;
		L_12 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_1), (void*)L_13);
		RuntimeObject* L_14 = __this->___PARTICLE_1;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_14, (RuntimeObject*)NULL, NULL);
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		return (bool)0;
	}

IL_007e:
	{
		RuntimeObject* L_16;
		L_16 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_3), (void*)L_17);
		RuntimeObject* L_18 = __this->___GUNFIRING_3;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)231), (1.0f));
		RuntimeObject* L_19;
		L_19 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_21;
		L_21 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)97), (RuntimeObject*)NULL);
		float L_23;
		L_23 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_23;
		float L_24 = __this->___startTime1;
		float L_25;
		L_25 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(1, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_24, L_25));
		__this->____cursor = 1;
		goto IL_0104;
	}

IL_00f7:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_26 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		BEAM_set_Current_mAD635360E035A43019CE3E953C7D32FE4A62D1ED_inline(__this, L_26, NULL);
		return (bool)1;
	}

IL_0104:
	{
		float L_27;
		L_27 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_28 = __this->___endTime1;
		if ((((float)L_27) < ((float)L_28)))
		{
			goto IL_00f7;
		}
	}
	{
		BEAM_set_Current_mAD635360E035A43019CE3E953C7D32FE4A62D1ED_inline(__this, NULL, NULL);
		RuntimeObject* L_29;
		L_29 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)-1673021030), (bool)1, (bool)1);
		__this->___QGUN01OVL_9 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN01OVL_9), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		RuntimeObject* L_34 = __this->___QGUN01OVL_9;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)158), L_34);
		RuntimeObject* L_35;
		L_35 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)2088896983));
		__this->___AMMO_13 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_13), (void*)L_36);
		RuntimeObject* L_37 = __this->___AMMO_13;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (bool)1);
		__this->___AMMO_13_val = L_38;
		float L_39 = __this->___AMMO_13_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_39, (0.0f), NULL);
		if (L_40)
		{
			goto IL_100e;
		}
	}
	{
		RuntimeObject* L_41;
		L_41 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, 5, ((int32_t)2088896983));
		__this->___AMMO_15 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_15), (void*)L_42);
		RuntimeObject* L_43 = __this->___AMMO_15;
		NullCheck(L_43);
		float L_44;
		L_44 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)231), (bool)1);
		__this->___AMMO_15_val = L_44;
		RuntimeObject* L_45;
		L_45 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, 5, ((int32_t)2088896983));
		__this->___AMMO_16 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_16), (void*)L_46);
		RuntimeObject* L_47 = __this->___AMMO_16;
		float L_48 = __this->___AMMO_15_val;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)231), ((float)il2cpp_codegen_add(L_48, (-1.0f))));
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_49 = (DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D*)il2cpp_codegen_object_new(DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D_il2cpp_TypeInfo_var);
		DECAMMO__ctor_mF631B0417F3BD5DBA5E40DB19E2F3843AE8D87D4(L_49, NULL);
		V_2 = L_49;
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_50 = V_2;
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_51 = L_50;
		RuntimeObject* L_52;
		L_52 = BEAM_get_MY_m19DAB8D2893E225A00A77C7B1A42CD5ED44757CD_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_52);
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_53 = L_51;
		RuntimeObject* L_54;
		L_54 = BEAM_get_THERE_m0E5D0F289CFF43B9631F6A1678437E052CC7D0F0_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_54);
		RuntimeObject* L_55;
		L_55 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_55);
		RuntimeObject* L_56;
		L_56 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_57 = V_2;
		NullCheck(L_56);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_57);
		RuntimeObject* L_59;
		L_59 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, 5, ((int32_t)2088896983));
		__this->___AMMO_18 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_18), (void*)L_60);
		RuntimeObject* L_61 = __this->___AMMO_18;
		NullCheck(L_61);
		float L_62;
		L_62 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)231), (bool)1);
		__this->___AMMO_18_val = L_62;
		float L_63 = __this->___AMMO_18_val;
		bool L_64;
		L_64 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_63, (20.0f), NULL);
		if (L_64)
		{
			goto IL_035d;
		}
	}
	{
		RuntimeObject* L_65;
		L_65 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_65);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)665673790), (bool)1, (bool)1);
		__this->___WRN01STR_19 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN01STR_19), (void*)L_67);
		RuntimeObject* L_68;
		L_68 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_68);
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_21 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_21), (void*)L_70);
		RuntimeObject* L_71 = __this->___PANELTEXT_21;
		NullCheck(L_71);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_72;
		L_72 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_71, ((int32_t)293), (bool)1);
		__this->___PANELTEXT_21_array = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_21_array), (void*)L_72);
		RuntimeObject* L_73 = __this->___PANELTEXT_21;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)295), (bool)1);
		__this->___PANELTEXT_21_index = L_74;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_75 = __this->___PANELTEXT_21_array;
		int32_t L_76 = __this->___PANELTEXT_21_index;
		RuntimeObject* L_77 = __this->___WRN01STR_19;
		NullCheck(L_75);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_75, ((int32_t)il2cpp_codegen_subtract(L_76, 1)), L_77, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_78 = __this->___PANELTEXT_21;
		NullCheck(L_78);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_78, (bool)1);
		RuntimeObject* L_79;
		L_79 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_79);
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_80, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_22 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_22), (void*)L_81);
		RuntimeObject* L_82;
		L_82 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_82);
		RuntimeObject* L_84 = __this->___PANELTEXT_22;
		NullCheck(L_83);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)127), L_84);
		RuntimeObject* L_85;
		L_85 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_85, 5, ((int32_t)-1606816744));
		__this->___MSGSECCOUNT_26 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MSGSECCOUNT_26), (void*)L_86);
		RuntimeObject* L_87 = __this->___MSGSECCOUNT_26;
		NullCheck(L_87);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_87, ((int32_t)231), (0.0f));
	}

IL_035d:
	{
		RuntimeObject* L_88;
		L_88 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_88);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_88, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_28 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_28), (void*)L_89);
		RuntimeObject* L_90 = __this->___PLAYER_LIGHT_28;
		NullCheck(L_90);
		float L_91;
		L_91 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_90, ((int32_t)231), (bool)1);
		__this->___PLAYER_LIGHT_28_val = L_91;
		RuntimeObject* L_92;
		L_92 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_92);
		RuntimeObject* L_93;
		L_93 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_92, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_29 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_29), (void*)L_93);
		RuntimeObject* L_94 = __this->___PLAYER_LIGHT_29;
		float L_95 = __this->___PLAYER_LIGHT_28_val;
		NullCheck(L_94);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)231), ((float)il2cpp_codegen_add(L_95, (0.899999976f))));
		RuntimeObject* L_96;
		L_96 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_96);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_97, ((int32_t)-1672981009), (bool)1, (bool)1);
		__this->___QGUN02SND_30 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN02SND_30), (void*)L_98);
		RuntimeObject* L_99;
		L_99 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		RuntimeObject* L_100 = __this->___QGUN02SND_30;
		NullCheck(L_99);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_99, L_100, (0.800000012f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_101;
		L_101 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_101);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_101, 5, ((int32_t)-922693617));
		__this->___SHOT_SOUND_ON_33 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOT_SOUND_ON_33), (void*)L_102);
		RuntimeObject* L_103 = __this->___SHOT_SOUND_ON_33;
		NullCheck(L_103);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_103, ((int32_t)231), (1.0f));
		RuntimeObject* L_104;
		L_104 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_104, 5, ((int32_t)733093231));
		__this->___SHOTSECCOUNT_35 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOTSECCOUNT_35), (void*)L_105);
		RuntimeObject* L_106 = __this->___SHOTSECCOUNT_35;
		NullCheck(L_106);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_106, ((int32_t)231), (0.0f));
		RuntimeObject* L_107;
		L_107 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_107);
		RuntimeObject* L_108;
		L_108 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_107);
		NullCheck(L_108);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_108, ((int32_t)-1672985093), (bool)1, (bool)1);
		__this->___QGUN02OVL_36 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN02OVL_36), (void*)L_109);
		RuntimeObject* L_110;
		L_110 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_110);
		RuntimeObject* L_112 = __this->___QGUN02OVL_36;
		NullCheck(L_111);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_111, ((int32_t)158), L_112);
		RuntimeObject* L_113;
		L_113 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_113);
		RuntimeObject* L_114;
		L_114 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_113, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_41 = L_114;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_41), (void*)L_114);
		RuntimeObject* L_115 = __this->___PARTICLE_41;
		NullCheck(L_115);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_115, ((int32_t)213), (1.0f));
		RuntimeObject* L_116;
		L_116 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_116);
		RuntimeObject* L_117;
		L_117 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_116, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_44 = L_117;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_44), (void*)L_117);
		RuntimeObject* L_118 = __this->___PARTICLE_44;
		NullCheck(L_118);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_118, ((int32_t)168), (2.0f));
		RuntimeObject* L_119;
		L_119 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_119);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_119, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_46 = L_120;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_46), (void*)L_120);
		RuntimeObject* L_121;
		L_121 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_121);
		RuntimeObject* L_122;
		L_122 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_121, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_48 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_48), (void*)L_122);
		RuntimeObject* L_123 = __this->___PARTICLE_48;
		NullCheck(L_123);
		float L_124;
		L_124 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)195), (bool)1);
		__this->___temp_49 = L_124;
		RuntimeObject* L_125;
		L_125 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_125);
		RuntimeObject* L_126;
		L_126 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_125, 5, ((int32_t)459));
		__this->___PLAYER_X_50 = L_126;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_50), (void*)L_126);
		RuntimeObject* L_127 = __this->___PLAYER_X_50;
		NullCheck(L_127);
		float L_128;
		L_128 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_127, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_50_val = L_128;
		RuntimeObject* L_129;
		L_129 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_129);
		RuntimeObject* L_130;
		L_130 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_129, 5, ((int32_t)464));
		__this->___PLAYER_COS_52 = L_130;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_52), (void*)L_130);
		RuntimeObject* L_131 = __this->___PLAYER_COS_52;
		NullCheck(L_131);
		float L_132;
		L_132 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_131, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_52_val = L_132;
		RuntimeObject* L_133;
		L_133 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_133);
		RuntimeObject* L_134;
		L_134 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_133, 5, ((int32_t)431));
		__this->___PLAYER_VX_56 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_56), (void*)L_134);
		RuntimeObject* L_135 = __this->___PLAYER_VX_56;
		NullCheck(L_135);
		float L_136;
		L_136 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_135, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_56_val = L_136;
		RuntimeObject* L_137;
		L_137 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_137);
		RuntimeObject* L_138;
		L_138 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_137, 5, ((int32_t)569));
		__this->___TIME_CORR_58 = L_138;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_58), (void*)L_138);
		RuntimeObject* L_139 = __this->___TIME_CORR_58;
		NullCheck(L_139);
		float L_140;
		L_140 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_139, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_58_val = L_140;
		RuntimeObject* L_141 = __this->___PARTICLE_46;
		float L_142 = __this->___PLAYER_X_50_val;
		float L_143 = __this->___PLAYER_COS_52_val;
		float L_144 = __this->___PLAYER_VX_56_val;
		float L_145 = __this->___TIME_CORR_58_val;
		NullCheck(L_141);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)195), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_142, ((float)il2cpp_codegen_multiply(L_143, (2.0f))))), ((float)il2cpp_codegen_multiply(L_144, L_145)))));
		RuntimeObject* L_146;
		L_146 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_146);
		RuntimeObject* L_147;
		L_147 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_146, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_60 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_60), (void*)L_147);
		RuntimeObject* L_148;
		L_148 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_148);
		RuntimeObject* L_149;
		L_149 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_148, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_62 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_62), (void*)L_149);
		RuntimeObject* L_150 = __this->___PARTICLE_62;
		NullCheck(L_150);
		float L_151;
		L_151 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_150, ((int32_t)196), (bool)1);
		__this->___temp_63 = L_151;
		RuntimeObject* L_152;
		L_152 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_152);
		RuntimeObject* L_153;
		L_153 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_152, 5, ((int32_t)460));
		__this->___PLAYER_Y_64 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_64), (void*)L_153);
		RuntimeObject* L_154 = __this->___PLAYER_Y_64;
		NullCheck(L_154);
		float L_155;
		L_155 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_154, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_64_val = L_155;
		RuntimeObject* L_156;
		L_156 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_156);
		RuntimeObject* L_157;
		L_157 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_156, 5, ((int32_t)463));
		__this->___PLAYER_SIN_66 = L_157;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_66), (void*)L_157);
		RuntimeObject* L_158 = __this->___PLAYER_SIN_66;
		NullCheck(L_158);
		float L_159;
		L_159 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_158, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_66_val = L_159;
		RuntimeObject* L_160;
		L_160 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_160);
		RuntimeObject* L_161;
		L_161 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_160, 5, ((int32_t)432));
		__this->___PLAYER_VY_70 = L_161;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_70), (void*)L_161);
		RuntimeObject* L_162 = __this->___PLAYER_VY_70;
		NullCheck(L_162);
		float L_163;
		L_163 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_162, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_70_val = L_163;
		RuntimeObject* L_164;
		L_164 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_164);
		RuntimeObject* L_165;
		L_165 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_164, 5, ((int32_t)569));
		__this->___TIME_CORR_72 = L_165;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_72), (void*)L_165);
		RuntimeObject* L_166 = __this->___TIME_CORR_72;
		NullCheck(L_166);
		float L_167;
		L_167 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_166, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_72_val = L_167;
		RuntimeObject* L_168 = __this->___PARTICLE_60;
		float L_169 = __this->___PLAYER_Y_64_val;
		float L_170 = __this->___PLAYER_SIN_66_val;
		float L_171 = __this->___PLAYER_VY_70_val;
		float L_172 = __this->___TIME_CORR_72_val;
		NullCheck(L_168);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_168, ((int32_t)196), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_169, ((float)il2cpp_codegen_multiply(L_170, (2.0f))))), ((float)il2cpp_codegen_multiply(L_171, L_172)))));
		RuntimeObject* L_173;
		L_173 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_173);
		RuntimeObject* L_174;
		L_174 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_173, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_74 = L_174;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_74), (void*)L_174);
		RuntimeObject* L_175;
		L_175 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_175);
		RuntimeObject* L_176;
		L_176 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_175, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_76 = L_176;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_76), (void*)L_176);
		RuntimeObject* L_177 = __this->___PARTICLE_76;
		NullCheck(L_177);
		float L_178;
		L_178 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_177, ((int32_t)165), (bool)1);
		__this->___temp_77 = L_178;
		RuntimeObject* L_179;
		L_179 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_179);
		RuntimeObject* L_180;
		L_180 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_179, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_78 = L_180;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_78), (void*)L_180);
		RuntimeObject* L_181 = __this->___PLAYER_SIZE_78;
		NullCheck(L_181);
		float L_182;
		L_182 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_181, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_78_val = L_182;
		RuntimeObject* L_183;
		L_183 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_183);
		RuntimeObject* L_184;
		L_184 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_183, 5, ((int32_t)435));
		__this->___PLAYER_TILT_81 = L_184;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_81), (void*)L_184);
		RuntimeObject* L_185 = __this->___PLAYER_TILT_81;
		NullCheck(L_185);
		float L_186;
		L_186 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_185, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_81_val = L_186;
		RuntimeObject* L_187;
		L_187 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_187);
		RuntimeObject* L_188;
		L_188 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_187, 5, ((int32_t)479));
		__this->___PLAYER_HGT_88 = L_188;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HGT_88), (void*)L_188);
		RuntimeObject* L_189 = __this->___PLAYER_HGT_88;
		NullCheck(L_189);
		float L_190;
		L_190 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_189, ((int32_t)231), (bool)1);
		__this->___PLAYER_HGT_88_val = L_190;
		RuntimeObject* L_191;
		L_191 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_191);
		RuntimeObject* L_192;
		L_192 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_191, 5, ((int32_t)567));
		__this->___FLOOR_HGT_90 = L_192;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOOR_HGT_90), (void*)L_192);
		RuntimeObject* L_193 = __this->___FLOOR_HGT_90;
		NullCheck(L_193);
		float L_194;
		L_194 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_193, ((int32_t)231), (bool)1);
		__this->___FLOOR_HGT_90_val = L_194;
		RuntimeObject* L_195 = __this->___PARTICLE_74;
		float L_196 = __this->___PLAYER_SIZE_78_val;
		float L_197 = __this->___PLAYER_TILT_81_val;
		float L_198 = __this->___PLAYER_HGT_88_val;
		float L_199 = __this->___FLOOR_HGT_90_val;
		NullCheck(L_195);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_195, ((int32_t)165), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_196, ((float)il2cpp_codegen_multiply(L_197, (1.29999995f))))), (0.300000012f))), L_198)), L_199)));
		RuntimeObject* L_200;
		L_200 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_200);
		RuntimeObject* L_201;
		L_201 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_200);
		NullCheck(L_201);
		RuntimeObject* L_202;
		L_202 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_201, ((int32_t)-682633353), (bool)1, (bool)1);
		__this->___PRTCTEX_91 = L_202;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PRTCTEX_91), (void*)L_202);
		RuntimeObject* L_203;
		L_203 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_203);
		RuntimeObject* L_204;
		L_204 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_203, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_93 = L_204;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_93), (void*)L_204);
		RuntimeObject* L_205 = __this->___PARTICLE_93;
		RuntimeObject* L_206 = __this->___PRTCTEX_91;
		NullCheck(L_205);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_205, ((int32_t)164), L_206);
		RuntimeObject* L_207;
		L_207 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_207);
		RuntimeObject* L_208;
		L_208 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_207);
		NullCheck(L_208);
		RuntimeObject* L_209;
		L_209 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_208, ((int32_t)372812267), (bool)1, (bool)1);
		__this->___IMPLODEPARTICLE_94 = L_209;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPLODEPARTICLE_94), (void*)L_209);
		RuntimeObject* L_210;
		L_210 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_210);
		RuntimeObject* L_211;
		L_211 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_210, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_96 = L_211;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_96), (void*)L_211);
		RuntimeObject* L_212 = __this->___PARTICLE_96;
		RuntimeObject* L_213 = __this->___IMPLODEPARTICLE_94;
		NullCheck(L_212);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_212, ((int32_t)191), L_213);
		RuntimeObject* L_214;
		L_214 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_214);
		RuntimeObject* L_215;
		L_215 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_214);
		NullCheck(L_215);
		RuntimeObject* L_216;
		L_216 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_215, ((int32_t)-1400585671), (bool)1, (bool)1);
		__this->___LOCATEPARTICLE_97 = L_216;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOCATEPARTICLE_97), (void*)L_216);
		RuntimeObject* L_217;
		L_217 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_217);
		RuntimeObject* L_218;
		L_218 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_217, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_99 = L_218;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_99), (void*)L_218);
		RuntimeObject* L_219 = __this->___PARTICLE_99;
		RuntimeObject* L_220 = __this->___LOCATEPARTICLE_97;
		NullCheck(L_219);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_219, ((int32_t)190), L_220);
		RuntimeObject* L_221;
		L_221 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_221);
		RuntimeObject* L_222;
		L_222 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_221, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_102 = L_222;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_102), (void*)L_222);
		RuntimeObject* L_223 = __this->___PARTICLE_102;
		NullCheck(L_223);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_223, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_224;
		L_224 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_224);
		RuntimeObject* L_225;
		L_225 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_224, 5, ((int32_t)462));
		__this->___PLAYER_ANGLE_103 = L_225;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ANGLE_103), (void*)L_225);
		RuntimeObject* L_226 = __this->___PLAYER_ANGLE_103;
		NullCheck(L_226);
		float L_227;
		L_227 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_226, ((int32_t)231), (bool)1);
		__this->___PLAYER_ANGLE_103_val = L_227;
		RuntimeObject* L_228;
		L_228 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_228);
		RuntimeObject* L_229;
		L_229 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_228, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_105 = L_229;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_105), (void*)L_229);
		RuntimeObject* L_230 = __this->___PARTICLE_105;
		float L_231 = __this->___PLAYER_ANGLE_103_val;
		NullCheck(L_230);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_230, ((int32_t)194), L_231);
		RuntimeObject* L_232;
		L_232 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_232);
		RuntimeObject* L_233;
		L_233 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_232);
		NullCheck(L_233);
		RuntimeObject* L_234;
		L_234 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_233, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_106 = L_234;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_106), (void*)L_234);
		RuntimeObject* L_235;
		L_235 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_235);
		RuntimeObject* L_236;
		L_236 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_235, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_108 = L_236;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_108), (void*)L_236);
		RuntimeObject* L_237 = __this->___PARTICLE_108;
		RuntimeObject* L_238 = __this->___BULLET_106;
		NullCheck(L_237);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_237, ((int32_t)199), L_238);
		RuntimeObject* L_239;
		L_239 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_239);
		RuntimeObject* L_240;
		L_240 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_239, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_111 = L_240;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_111), (void*)L_240);
		RuntimeObject* L_241 = __this->___PARTICLE_111;
		NullCheck(L_241);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_241, ((int32_t)204), (0.0f));
		RuntimeObject* L_242;
		L_242 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_242);
		RuntimeObject* L_243;
		L_243 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_242, 5, ((int32_t)440));
		__this->___SHOOT_SECTOR_113 = L_243;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_SECTOR_113), (void*)L_243);
		RuntimeObject* L_244 = __this->___SHOOT_SECTOR_113;
		NullCheck(L_244);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_244, ((int32_t)231), (6.28299999f));
		RuntimeObject* L_245;
		L_245 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_245);
		RuntimeObject* L_246;
		L_246 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_245, 5, ((int32_t)439));
		__this->___SHOOT_RANGE_115 = L_246;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_RANGE_115), (void*)L_246);
		RuntimeObject* L_247 = __this->___SHOOT_RANGE_115;
		NullCheck(L_247);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_247, ((int32_t)231), (200.0f));
		RuntimeObject* L_248;
		L_248 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_248);
		RuntimeObject* L_249;
		L_249 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_248, 5, ((int32_t)441));
		__this->___SHOOT_FAC_117 = L_249;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_117), (void*)L_249);
		RuntimeObject* L_250 = __this->___SHOOT_FAC_117;
		NullCheck(L_250);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_250, ((int32_t)231), (0.0f));
		RuntimeObject* L_251;
		L_251 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_251);
		RuntimeObject* L_252;
		L_252 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_251, 5, ((int32_t)442));
		__this->___SHOOT_X_119 = L_252;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_X_119), (void*)L_252);
		RuntimeObject* L_253 = __this->___SHOOT_X_119;
		NullCheck(L_253);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_253, ((int32_t)231), (0.0f));
		RuntimeObject* L_254;
		L_254 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_254);
		RuntimeObject* L_255;
		L_255 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_254, 5, ((int32_t)443));
		__this->___SHOOT_Y_121 = L_255;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_Y_121), (void*)L_255);
		RuntimeObject* L_256 = __this->___SHOOT_Y_121;
		NullCheck(L_256);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_256, ((int32_t)231), (0.0f));
		RuntimeObject* L_257;
		L_257 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		RuntimeObject* L_258;
		L_258 = BEAM_get_MY_m19DAB8D2893E225A00A77C7B1A42CD5ED44757CD_inline(__this, NULL);
		RuntimeObject* L_259;
		L_259 = BEAM_get_THERE_m0E5D0F289CFF43B9631F6A1678437E052CC7D0F0_inline(__this, NULL);
		NullCheck(L_257);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_257, (RuntimeObject*)NULL, L_258, L_259);
		RuntimeObject* L_260;
		L_260 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_260);
		RuntimeObject* L_261;
		L_261 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_260, 5, ((int32_t)444));
		__this->___HIT_DIST_123 = L_261;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_123), (void*)L_261);
		RuntimeObject* L_262 = __this->___HIT_DIST_123;
		NullCheck(L_262);
		float L_263;
		L_263 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_262, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_123_val = L_263;
		float L_264 = __this->___HIT_DIST_123_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_265;
		L_265 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_264, (0.0f), NULL);
		if (L_265)
		{
			goto IL_0dce;
		}
	}
	{
		RuntimeObject* L_266;
		L_266 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_266);
		RuntimeObject* L_267;
		L_267 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_266, ((int32_t)704), (bool)0);
		__this->___HIT_124 = L_267;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_124), (void*)L_267);
		RuntimeObject* L_268;
		L_268 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_268);
		RuntimeObject* L_269;
		L_269 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_268, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_126 = L_269;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_126), (void*)L_269);
		RuntimeObject* L_270 = __this->___PARTICLE_126;
		RuntimeObject* L_271 = __this->___HIT_124;
		NullCheck(L_270);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_270, ((int32_t)199), L_271);
		RuntimeObject* L_272;
		L_272 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_272);
		RuntimeObject* L_273;
		L_273 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_272, ((int32_t)704), (bool)0);
		__this->___HIT_129 = L_273;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_129), (void*)L_273);
		RuntimeObject* L_274 = __this->___HIT_129;
		NullCheck(L_274);
		float L_275;
		L_275 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_274, ((int32_t)202), (bool)1);
		__this->___temp_130 = L_275;
		float L_276 = __this->___temp_130;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_277;
		L_277 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_276, (0.0f), NULL);
		if (L_277)
		{
			goto IL_0cfc;
		}
	}
	{
		RuntimeObject* L_278;
		L_278 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_278);
		RuntimeObject* L_279;
		L_279 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_278, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_132 = L_279;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_132), (void*)L_279);
		RuntimeObject* L_280;
		L_280 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_280);
		RuntimeObject* L_281;
		L_281 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_280, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_134 = L_281;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_134), (void*)L_281);
		RuntimeObject* L_282 = __this->___PARTICLE_134;
		NullCheck(L_282);
		float L_283;
		L_283 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_282, ((int32_t)169), (bool)1);
		__this->___temp_135 = L_283;
		RuntimeObject* L_284;
		L_284 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_284);
		RuntimeObject* L_285;
		L_285 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_284, ((int32_t)704), (bool)0);
		__this->___HIT_138 = L_285;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_138), (void*)L_285);
		RuntimeObject* L_286 = __this->___HIT_138;
		NullCheck(L_286);
		float L_287;
		L_287 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_286, ((int32_t)200), (bool)1);
		__this->___temp_139 = L_287;
		RuntimeObject* L_288;
		L_288 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_288);
		RuntimeObject* L_289;
		L_289 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_288, 5, ((int32_t)567));
		__this->___FLOOR_HGT_141 = L_289;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOOR_HGT_141), (void*)L_289);
		RuntimeObject* L_290 = __this->___FLOOR_HGT_141;
		NullCheck(L_290);
		float L_291;
		L_291 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_290, ((int32_t)231), (bool)1);
		__this->___FLOOR_HGT_141_val = L_291;
		RuntimeObject* L_292;
		L_292 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_292);
		RuntimeObject* L_293;
		L_293 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_292, ((int32_t)704), (bool)0);
		__this->___HIT_145 = L_293;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_145), (void*)L_293);
		RuntimeObject* L_294 = __this->___HIT_145;
		NullCheck(L_294);
		float L_295;
		L_295 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_294, ((int32_t)202), (bool)1);
		__this->___temp_146 = L_295;
		RuntimeObject* L_296 = __this->___PARTICLE_132;
		float L_297 = __this->___temp_139;
		float L_298 = __this->___FLOOR_HGT_141_val;
		float L_299 = __this->___temp_146;
		NullCheck(L_296);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_296, ((int32_t)169), ((float)(((float)il2cpp_codegen_subtract(L_297, L_298))/L_299)));
	}

IL_0cfc:
	{
		RuntimeObject* L_300;
		L_300 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_300);
		RuntimeObject* L_301;
		L_301 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_300, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_149 = L_301;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_149), (void*)L_301);
		RuntimeObject* L_302 = __this->___PARTICLE_149;
		NullCheck(L_302);
		float L_303;
		L_303 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_302, ((int32_t)169), (bool)1);
		__this->___temp_150 = L_303;
		float L_304 = __this->___temp_150;
		bool L_305;
		L_305 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_304, (0.0f), NULL);
		if (!L_305)
		{
			goto IL_0ea8;
		}
	}
	{
		RuntimeObject* L_306;
		L_306 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_306);
		RuntimeObject* L_307;
		L_307 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_306, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_152 = L_307;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_152), (void*)L_307);
		RuntimeObject* L_308;
		L_308 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_308);
		RuntimeObject* L_309;
		L_309 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_308, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_154 = L_309;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_154), (void*)L_309);
		RuntimeObject* L_310 = __this->___PARTICLE_154;
		NullCheck(L_310);
		float L_311;
		L_311 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_310, ((int32_t)169), (bool)1);
		__this->___temp_155 = L_311;
		RuntimeObject* L_312;
		L_312 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_312);
		RuntimeObject* L_313;
		L_313 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_312, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_158 = L_313;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_158), (void*)L_313);
		RuntimeObject* L_314 = __this->___PARTICLE_158;
		NullCheck(L_314);
		float L_315;
		L_315 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_314, ((int32_t)169), (bool)1);
		__this->___temp_159 = L_315;
		RuntimeObject* L_316 = __this->___PARTICLE_152;
		float L_317 = __this->___temp_159;
		NullCheck(L_316);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_316, ((int32_t)169), ((-L_317)));
		goto IL_0ea8;
	}

IL_0dce:
	{
		RuntimeObject* L_318;
		L_318 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_318);
		RuntimeObject* L_319;
		L_319 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_318);
		NullCheck(L_319);
		RuntimeObject* L_320;
		L_320 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_319, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_160 = L_320;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_160), (void*)L_320);
		RuntimeObject* L_321;
		L_321 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_321);
		RuntimeObject* L_322;
		L_322 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_321, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_162 = L_322;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_162), (void*)L_322);
		RuntimeObject* L_323 = __this->___PARTICLE_162;
		RuntimeObject* L_324 = __this->___BULLET_160;
		NullCheck(L_323);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_323, ((int32_t)199), L_324);
		RuntimeObject* L_325;
		L_325 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_325);
		RuntimeObject* L_326;
		L_326 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_325, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_164 = L_326;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_164), (void*)L_326);
		RuntimeObject* L_327;
		L_327 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_327);
		RuntimeObject* L_328;
		L_328 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_327, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_166 = L_328;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_166), (void*)L_328);
		RuntimeObject* L_329 = __this->___PARTICLE_166;
		NullCheck(L_329);
		float L_330;
		L_330 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_329, ((int32_t)169), (bool)1);
		__this->___temp_167 = L_330;
		RuntimeObject* L_331;
		L_331 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_331);
		RuntimeObject* L_332;
		L_332 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_331, 5, ((int32_t)435));
		__this->___PLAYER_TILT_169 = L_332;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_169), (void*)L_332);
		RuntimeObject* L_333 = __this->___PLAYER_TILT_169;
		NullCheck(L_333);
		float L_334;
		L_334 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_333, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_169_val = L_334;
		RuntimeObject* L_335 = __this->___PARTICLE_164;
		float L_336 = __this->___PLAYER_TILT_169_val;
		NullCheck(L_335);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_335, ((int32_t)169), ((float)(((-L_336))/(1.39999998f))));
	}

IL_0ea8:
	{
		RuntimeObject* L_337;
		L_337 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_337);
		RuntimeObject* L_338;
		L_338 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_337, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_173 = L_338;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_173), (void*)L_338);
		RuntimeObject* L_339 = __this->___PLAYER_LIGHT_173;
		NullCheck(L_339);
		float L_340;
		L_340 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_339, ((int32_t)231), (bool)1);
		__this->___PLAYER_LIGHT_173_val = L_340;
		RuntimeObject* L_341;
		L_341 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_341);
		RuntimeObject* L_342;
		L_342 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_341, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_174 = L_342;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_174), (void*)L_342);
		RuntimeObject* L_343 = __this->___PLAYER_LIGHT_174;
		float L_344 = __this->___PLAYER_LIGHT_173_val;
		NullCheck(L_343);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_343, ((int32_t)231), ((float)il2cpp_codegen_add(L_344, (-0.899999976f))));
		float L_345;
		L_345 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_345;
		float L_346 = __this->___startTime2;
		float L_347;
		L_347 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(4, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_346, L_347));
		__this->____cursor = 2;
		goto IL_0f3d;
	}

IL_0f30:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_348 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		BEAM_set_Current_mAD635360E035A43019CE3E953C7D32FE4A62D1ED_inline(__this, L_348, NULL);
		return (bool)1;
	}

IL_0f3d:
	{
		float L_349;
		L_349 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_350 = __this->___endTime2;
		if ((((float)L_349) < ((float)L_350)))
		{
			goto IL_0f30;
		}
	}
	{
		BEAM_set_Current_mAD635360E035A43019CE3E953C7D32FE4A62D1ED_inline(__this, NULL, NULL);
		RuntimeObject* L_351;
		L_351 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_351);
		RuntimeObject* L_352;
		L_352 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_351);
		NullCheck(L_352);
		RuntimeObject* L_353;
		L_353 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_352, ((int32_t)-1673021030), (bool)1, (bool)1);
		__this->___QGUN01OVL_176 = L_353;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN01OVL_176), (void*)L_353);
		RuntimeObject* L_354;
		L_354 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_354);
		RuntimeObject* L_355;
		L_355 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_354);
		RuntimeObject* L_356 = __this->___QGUN01OVL_176;
		NullCheck(L_355);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_355, ((int32_t)158), L_356);
		float L_357;
		L_357 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_357;
		float L_358 = __this->___startTime3;
		float L_359;
		L_359 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_358, L_359));
		__this->____cursor = 3;
		goto IL_0fbd;
	}

IL_0fb0:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_360 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		BEAM_set_Current_mAD635360E035A43019CE3E953C7D32FE4A62D1ED_inline(__this, L_360, NULL);
		return (bool)1;
	}

IL_0fbd:
	{
		float L_361;
		L_361 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_362 = __this->___endTime3;
		if ((((float)L_361) < ((float)L_362)))
		{
			goto IL_0fb0;
		}
	}
	{
		BEAM_set_Current_mAD635360E035A43019CE3E953C7D32FE4A62D1ED_inline(__this, NULL, NULL);
		RuntimeObject* L_363;
		L_363 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_363);
		RuntimeObject* L_364;
		L_364 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_363);
		NullCheck(L_364);
		RuntimeObject* L_365;
		L_365 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_364, ((int32_t)-1673056967), (bool)1, (bool)1);
		__this->___QGUN00OVL_180 = L_365;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN00OVL_180), (void*)L_365);
		RuntimeObject* L_366;
		L_366 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_366);
		RuntimeObject* L_367;
		L_367 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_366);
		RuntimeObject* L_368 = __this->___QGUN00OVL_180;
		NullCheck(L_367);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_367, ((int32_t)158), L_368);
		goto IL_11e6;
	}

IL_100e:
	{
		RuntimeObject* L_369;
		L_369 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_369);
		RuntimeObject* L_370;
		L_370 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_369);
		NullCheck(L_370);
		RuntimeObject* L_371;
		L_371 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_370, ((int32_t)665709727), (bool)1, (bool)1);
		__this->___WRN02STR_183 = L_371;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN02STR_183), (void*)L_371);
		RuntimeObject* L_372;
		L_372 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_372);
		RuntimeObject* L_373;
		L_373 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_372);
		NullCheck(L_373);
		RuntimeObject* L_374;
		L_374 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_373, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_185 = L_374;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_185), (void*)L_374);
		RuntimeObject* L_375 = __this->___PANELTEXT_185;
		NullCheck(L_375);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_376;
		L_376 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_375, ((int32_t)293), (bool)1);
		__this->___PANELTEXT_185_array = L_376;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_185_array), (void*)L_376);
		RuntimeObject* L_377 = __this->___PANELTEXT_185;
		NullCheck(L_377);
		int32_t L_378;
		L_378 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_377, ((int32_t)295), (bool)1);
		__this->___PANELTEXT_185_index = L_378;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_379 = __this->___PANELTEXT_185_array;
		int32_t L_380 = __this->___PANELTEXT_185_index;
		RuntimeObject* L_381 = __this->___WRN02STR_183;
		NullCheck(L_379);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_379, ((int32_t)il2cpp_codegen_subtract(L_380, 1)), L_381, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_382 = __this->___PANELTEXT_185;
		NullCheck(L_382);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_382, (bool)1);
		RuntimeObject* L_383;
		L_383 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_383);
		RuntimeObject* L_384;
		L_384 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_383);
		NullCheck(L_384);
		RuntimeObject* L_385;
		L_385 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_384, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_186 = L_385;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_186), (void*)L_385);
		RuntimeObject* L_386;
		L_386 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_386);
		RuntimeObject* L_387;
		L_387 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_386);
		RuntimeObject* L_388 = __this->___PANELTEXT_186;
		NullCheck(L_387);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_387, ((int32_t)127), L_388);
		RuntimeObject* L_389;
		L_389 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_389);
		RuntimeObject* L_390;
		L_390 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_389, 5, ((int32_t)-1606816744));
		__this->___MSGSECCOUNT_190 = L_390;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MSGSECCOUNT_190), (void*)L_390);
		RuntimeObject* L_391 = __this->___MSGSECCOUNT_190;
		NullCheck(L_391);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_391, ((int32_t)231), (0.0f));
		RuntimeObject* L_392;
		L_392 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_392);
		RuntimeObject* L_393;
		L_393 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_392, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_192 = L_393;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_192), (void*)L_393);
		RuntimeObject* L_394 = __this->___GUN_ON_192;
		NullCheck(L_394);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_394, ((int32_t)231), (0.0f));
		RuntimeObject* L_395;
		L_395 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_395);
		RuntimeObject* L_396;
		L_396 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_395);
		NullCheck(L_396);
		RuntimeObject* L_397;
		L_397 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_396, ((int32_t)-1672945072), (bool)1, (bool)1);
		__this->___QGUN03SND_193 = L_397;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN03SND_193), (void*)L_397);
		RuntimeObject* L_398;
		L_398 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		RuntimeObject* L_399 = __this->___QGUN03SND_193;
		NullCheck(L_398);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_398, L_399, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		float L_400;
		L_400 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime4 = L_400;
		float L_401 = __this->___startTime4;
		float L_402;
		L_402 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime4 = ((float)il2cpp_codegen_add(L_401, L_402));
		__this->____cursor = 4;
		goto IL_119a;
	}

IL_118d:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_403 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		BEAM_set_Current_mAD635360E035A43019CE3E953C7D32FE4A62D1ED_inline(__this, L_403, NULL);
		return (bool)1;
	}

IL_119a:
	{
		float L_404;
		L_404 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_405 = __this->___endTime4;
		if ((((float)L_404) < ((float)L_405)))
		{
			goto IL_118d;
		}
	}
	{
		BEAM_set_Current_mAD635360E035A43019CE3E953C7D32FE4A62D1ED_inline(__this, NULL, NULL);
		RuntimeObject* L_406;
		L_406 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_406);
		RuntimeObject* L_407;
		L_407 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_406);
		NullCheck(L_407);
		RuntimeObject* L_408;
		L_408 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_407, ((int32_t)-1673056967), (bool)1, (bool)1);
		__this->___QGUN00OVL_196 = L_408;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN00OVL_196), (void*)L_408);
		RuntimeObject* L_409;
		L_409 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_409);
		RuntimeObject* L_410;
		L_410 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_409);
		RuntimeObject* L_411 = __this->___QGUN00OVL_196;
		NullCheck(L_410);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_410, ((int32_t)158), L_411);
	}

IL_11e6:
	{
		RuntimeObject* L_412;
		L_412 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_412);
		RuntimeObject* L_413;
		L_413 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_412, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_200 = L_413;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_200), (void*)L_413);
		RuntimeObject* L_414 = __this->___WEAPONSEL_200;
		NullCheck(L_414);
		float L_415;
		L_415 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_414, ((int32_t)231), (bool)1);
		__this->___WEAPONSEL_200_val = L_415;
		float L_416 = __this->___WEAPONSEL_200_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_417;
		L_417 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_416, (5.0f), NULL);
		if (!L_417)
		{
			goto IL_1290;
		}
	}
	{
		RuntimeObject* L_418;
		L_418 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_418);
		RuntimeObject* L_419;
		L_419 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_418);
		NullCheck(L_419);
		RuntimeObject* L_420;
		L_420 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_419, ((int32_t)2088923810), (bool)1, (bool)1);
		__this->___BEAM_201 = L_420;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BEAM_201), (void*)L_420);
		RuntimeObject* L_421;
		L_421 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_421);
		RuntimeObject* L_422;
		L_422 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_421);
		RuntimeObject* L_423 = __this->___BEAM_201;
		NullCheck(L_422);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_422, ((int32_t)78), L_423);
		RuntimeObject* L_424;
		L_424 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_424);
		RuntimeObject* L_425;
		L_425 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_424);
		NullCheck(L_425);
		RuntimeObject* L_426;
		L_426 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_425, ((int32_t)2088923810), (bool)1, (bool)1);
		__this->___BEAM_203 = L_426;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BEAM_203), (void*)L_426);
		RuntimeObject* L_427;
		L_427 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_427);
		RuntimeObject* L_428;
		L_428 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_427);
		RuntimeObject* L_429 = __this->___BEAM_203;
		NullCheck(L_428);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_428, ((int32_t)97), L_429);
	}

IL_1290:
	{
		RuntimeObject* L_430;
		L_430 = BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline(__this, NULL);
		NullCheck(L_430);
		RuntimeObject* L_431;
		L_431 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_430, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_206 = L_431;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_206), (void*)L_431);
		RuntimeObject* L_432 = __this->___GUNFIRING_206;
		NullCheck(L_432);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_432, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RAISE_get_MY_mC35E32E7A7DCFA5D549138D9B3C9806CE97CF7B9 (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RAISE_set_MY_m59B60EAD784135C7996D4628488AB25556FD1B7B (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RAISE_get_THERE_m9E5E191D3532A631B3C2618A5F1508D8FF950336 (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RAISE_set_THERE_m2E6E84D40CF4698AD2E56CDEAEA220E8A42FCD37 (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RAISE_set__world_mCB63C7AA6C340E159144FD4B7F0A156711EF670A (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RAISE_get_Current_m10DECB22EF8358E2194E796EB0DFAB18F7FE9818 (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90 (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RAISE_Reset_m6378A4326D0FE4C70D0359F7DE69B8D34E850CCA (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RAISE__ctor_mC9CDF6F146498172B72D6E63718BA1D065CC3E95 (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RAISE__ctor_m8041A5E02825E0E8E1A570CFE1806AE328F9B218 (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		RAISE_set_MY_m59B60EAD784135C7996D4628488AB25556FD1B7B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		RAISE_set_THERE_m2E6E84D40CF4698AD2E56CDEAEA220E8A42FCD37_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		RAISE_set__world_mCB63C7AA6C340E159144FD4B7F0A156711EF670A_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RAISE_MoveNext_mF6F31BE499E0A2C0D388280101B7C0792E45AABB (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_0383;
			}
			case 1:
			{
				goto IL_06f7;
			}
			case 2:
			{
				goto IL_0a6b;
			}
			case 3:
			{
				goto IL_0ddf;
			}
			case 4:
			{
				goto IL_0e7f;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_2, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_1), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_3), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_GUN_3;
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)195), (bool)1);
		__this->___temp_4 = L_7;
		RuntimeObject* L_8;
		L_8 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)459));
		__this->___PLAYER_X_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_5), (void*)L_9);
		RuntimeObject* L_10 = __this->___PLAYER_X_5;
		NullCheck(L_10);
		float L_11;
		L_11 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_5_val = L_11;
		RuntimeObject* L_12;
		L_12 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)464));
		__this->___PLAYER_COS_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_7), (void*)L_13);
		RuntimeObject* L_14 = __this->___PLAYER_COS_7;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_7_val = L_15;
		RuntimeObject* L_16;
		L_16 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, 5, ((int32_t)431));
		__this->___PLAYER_VX_11 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_11), (void*)L_17);
		RuntimeObject* L_18 = __this->___PLAYER_VX_11;
		NullCheck(L_18);
		float L_19;
		L_19 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_11_val = L_19;
		RuntimeObject* L_20;
		L_20 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, 5, ((int32_t)569));
		__this->___TIME_CORR_13 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_13), (void*)L_21);
		RuntimeObject* L_22 = __this->___TIME_CORR_13;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_13_val = L_23;
		RuntimeObject* L_24 = __this->___MY_GUN_1;
		float L_25 = __this->___PLAYER_X_5_val;
		float L_26 = __this->___PLAYER_COS_7_val;
		float L_27 = __this->___PLAYER_VX_11_val;
		float L_28 = __this->___TIME_CORR_13_val;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)195), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_multiply(L_26, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_27, L_28)))));
		RuntimeObject* L_29;
		L_29 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_15 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_15), (void*)L_30);
		RuntimeObject* L_31;
		L_31 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_17 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_17), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_GUN_17;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)196), (bool)1);
		__this->___temp_18 = L_34;
		RuntimeObject* L_35;
		L_35 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)460));
		__this->___PLAYER_Y_19 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_19), (void*)L_36);
		RuntimeObject* L_37 = __this->___PLAYER_Y_19;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_19_val = L_38;
		RuntimeObject* L_39;
		L_39 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_39, 5, ((int32_t)463));
		__this->___PLAYER_SIN_21 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_21), (void*)L_40);
		RuntimeObject* L_41 = __this->___PLAYER_SIN_21;
		NullCheck(L_41);
		float L_42;
		L_42 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_21_val = L_42;
		RuntimeObject* L_43;
		L_43 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, 5, ((int32_t)432));
		__this->___PLAYER_VY_25 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_25), (void*)L_44);
		RuntimeObject* L_45 = __this->___PLAYER_VY_25;
		NullCheck(L_45);
		float L_46;
		L_46 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_25_val = L_46;
		RuntimeObject* L_47;
		L_47 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, 5, ((int32_t)569));
		__this->___TIME_CORR_27 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_27), (void*)L_48);
		RuntimeObject* L_49 = __this->___TIME_CORR_27;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_27_val = L_50;
		RuntimeObject* L_51 = __this->___MY_GUN_15;
		float L_52 = __this->___PLAYER_Y_19_val;
		float L_53 = __this->___PLAYER_SIN_21_val;
		float L_54 = __this->___PLAYER_VY_25_val;
		float L_55 = __this->___TIME_CORR_27_val;
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)196), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_52, ((float)il2cpp_codegen_multiply(L_53, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_54, L_55)))));
		RuntimeObject* L_56;
		L_56 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_29 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_29), (void*)L_57);
		RuntimeObject* L_58;
		L_58 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_58, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_31 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_31), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_GUN_31;
		NullCheck(L_60);
		float L_61;
		L_61 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)165), (bool)1);
		__this->___temp_32 = L_61;
		RuntimeObject* L_62;
		L_62 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, 5, ((int32_t)461));
		__this->___PLAYER_Z_33 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_33), (void*)L_63);
		RuntimeObject* L_64 = __this->___PLAYER_Z_33;
		NullCheck(L_64);
		float L_65;
		L_65 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_33_val = L_65;
		RuntimeObject* L_66;
		L_66 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, 5, ((int32_t)435));
		__this->___PLAYER_TILT_36 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_36), (void*)L_67);
		RuntimeObject* L_68 = __this->___PLAYER_TILT_36;
		NullCheck(L_68);
		float L_69;
		L_69 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_36_val = L_69;
		RuntimeObject* L_70 = __this->___MY_GUN_29;
		float L_71 = __this->___PLAYER_Z_33_val;
		float L_72 = __this->___PLAYER_TILT_36_val;
		NullCheck(L_70);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_70, ((int32_t)165), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_71, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_72, (1.0f))), (0.843999982f))))), (1.89999998f))));
		float L_73;
		L_73 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_73;
		float L_74 = __this->___startTime1;
		float L_75;
		L_75 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_74, L_75));
		__this->____cursor = 1;
		goto IL_0383;
	}

IL_0376:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_76 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline(__this, L_76, NULL);
		return (bool)1;
	}

IL_0383:
	{
		float L_77;
		L_77 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_78 = __this->___endTime1;
		if ((((float)L_77) < ((float)L_78)))
		{
			goto IL_0376;
		}
	}
	{
		RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline(__this, NULL, NULL);
		RuntimeObject* L_79;
		L_79 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_79, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_46 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_46), (void*)L_80);
		RuntimeObject* L_81;
		L_81 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_81);
		RuntimeObject* L_82;
		L_82 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_81, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_48 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_48), (void*)L_82);
		RuntimeObject* L_83 = __this->___MY_GUN_48;
		NullCheck(L_83);
		float L_84;
		L_84 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)195), (bool)1);
		__this->___temp_49 = L_84;
		RuntimeObject* L_85;
		L_85 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_85, 5, ((int32_t)459));
		__this->___PLAYER_X_50 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_50), (void*)L_86);
		RuntimeObject* L_87 = __this->___PLAYER_X_50;
		NullCheck(L_87);
		float L_88;
		L_88 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_87, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_50_val = L_88;
		RuntimeObject* L_89;
		L_89 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_89);
		RuntimeObject* L_90;
		L_90 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_89, 5, ((int32_t)464));
		__this->___PLAYER_COS_52 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_52), (void*)L_90);
		RuntimeObject* L_91 = __this->___PLAYER_COS_52;
		NullCheck(L_91);
		float L_92;
		L_92 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_91, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_52_val = L_92;
		RuntimeObject* L_93;
		L_93 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_93);
		RuntimeObject* L_94;
		L_94 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_93, 5, ((int32_t)431));
		__this->___PLAYER_VX_56 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_56), (void*)L_94);
		RuntimeObject* L_95 = __this->___PLAYER_VX_56;
		NullCheck(L_95);
		float L_96;
		L_96 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_95, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_56_val = L_96;
		RuntimeObject* L_97;
		L_97 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_97, 5, ((int32_t)569));
		__this->___TIME_CORR_58 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_58), (void*)L_98);
		RuntimeObject* L_99 = __this->___TIME_CORR_58;
		NullCheck(L_99);
		float L_100;
		L_100 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_58_val = L_100;
		RuntimeObject* L_101 = __this->___MY_GUN_46;
		float L_102 = __this->___PLAYER_X_50_val;
		float L_103 = __this->___PLAYER_COS_52_val;
		float L_104 = __this->___PLAYER_VX_56_val;
		float L_105 = __this->___TIME_CORR_58_val;
		NullCheck(L_101);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_101, ((int32_t)195), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_102, ((float)il2cpp_codegen_multiply(L_103, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_104, L_105)))));
		RuntimeObject* L_106;
		L_106 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_106, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_60 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_60), (void*)L_107);
		RuntimeObject* L_108;
		L_108 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_108);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_108, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_62 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_62), (void*)L_109);
		RuntimeObject* L_110 = __this->___MY_GUN_62;
		NullCheck(L_110);
		float L_111;
		L_111 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)196), (bool)1);
		__this->___temp_63 = L_111;
		RuntimeObject* L_112;
		L_112 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_112);
		RuntimeObject* L_113;
		L_113 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_112, 5, ((int32_t)460));
		__this->___PLAYER_Y_64 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_64), (void*)L_113);
		RuntimeObject* L_114 = __this->___PLAYER_Y_64;
		NullCheck(L_114);
		float L_115;
		L_115 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_64_val = L_115;
		RuntimeObject* L_116;
		L_116 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_116);
		RuntimeObject* L_117;
		L_117 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_116, 5, ((int32_t)463));
		__this->___PLAYER_SIN_66 = L_117;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_66), (void*)L_117);
		RuntimeObject* L_118 = __this->___PLAYER_SIN_66;
		NullCheck(L_118);
		float L_119;
		L_119 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_118, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_66_val = L_119;
		RuntimeObject* L_120;
		L_120 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_120);
		RuntimeObject* L_121;
		L_121 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_120, 5, ((int32_t)432));
		__this->___PLAYER_VY_70 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_70), (void*)L_121);
		RuntimeObject* L_122 = __this->___PLAYER_VY_70;
		NullCheck(L_122);
		float L_123;
		L_123 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_122, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_70_val = L_123;
		RuntimeObject* L_124;
		L_124 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_124);
		RuntimeObject* L_125;
		L_125 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_124, 5, ((int32_t)569));
		__this->___TIME_CORR_72 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_72), (void*)L_125);
		RuntimeObject* L_126 = __this->___TIME_CORR_72;
		NullCheck(L_126);
		float L_127;
		L_127 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_126, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_72_val = L_127;
		RuntimeObject* L_128 = __this->___MY_GUN_60;
		float L_129 = __this->___PLAYER_Y_64_val;
		float L_130 = __this->___PLAYER_SIN_66_val;
		float L_131 = __this->___PLAYER_VY_70_val;
		float L_132 = __this->___TIME_CORR_72_val;
		NullCheck(L_128);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_128, ((int32_t)196), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_129, ((float)il2cpp_codegen_multiply(L_130, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_131, L_132)))));
		RuntimeObject* L_133;
		L_133 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_133);
		RuntimeObject* L_134;
		L_134 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_133, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_74 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_74), (void*)L_134);
		RuntimeObject* L_135;
		L_135 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_135);
		RuntimeObject* L_136;
		L_136 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_135, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_76 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_76), (void*)L_136);
		RuntimeObject* L_137 = __this->___MY_GUN_76;
		NullCheck(L_137);
		float L_138;
		L_138 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_137, ((int32_t)165), (bool)1);
		__this->___temp_77 = L_138;
		RuntimeObject* L_139;
		L_139 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_139);
		RuntimeObject* L_140;
		L_140 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_139, 5, ((int32_t)461));
		__this->___PLAYER_Z_78 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_78), (void*)L_140);
		RuntimeObject* L_141 = __this->___PLAYER_Z_78;
		NullCheck(L_141);
		float L_142;
		L_142 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_78_val = L_142;
		RuntimeObject* L_143;
		L_143 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_143);
		RuntimeObject* L_144;
		L_144 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_143, 5, ((int32_t)435));
		__this->___PLAYER_TILT_81 = L_144;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_81), (void*)L_144);
		RuntimeObject* L_145 = __this->___PLAYER_TILT_81;
		NullCheck(L_145);
		float L_146;
		L_146 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_145, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_81_val = L_146;
		RuntimeObject* L_147 = __this->___MY_GUN_74;
		float L_148 = __this->___PLAYER_Z_78_val;
		float L_149 = __this->___PLAYER_TILT_81_val;
		NullCheck(L_147);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_147, ((int32_t)165), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_148, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_149, (1.0f))), (0.843999982f))))), (1.60000002f))));
		float L_150;
		L_150 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_150;
		float L_151 = __this->___startTime2;
		float L_152;
		L_152 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_151, L_152));
		__this->____cursor = 2;
		goto IL_06f7;
	}

IL_06ea:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_153 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline(__this, L_153, NULL);
		return (bool)1;
	}

IL_06f7:
	{
		float L_154;
		L_154 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_155 = __this->___endTime2;
		if ((((float)L_154) < ((float)L_155)))
		{
			goto IL_06ea;
		}
	}
	{
		RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline(__this, NULL, NULL);
		RuntimeObject* L_156;
		L_156 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_156);
		RuntimeObject* L_157;
		L_157 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_156, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_91 = L_157;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_91), (void*)L_157);
		RuntimeObject* L_158;
		L_158 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_158);
		RuntimeObject* L_159;
		L_159 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_158, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_93 = L_159;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_93), (void*)L_159);
		RuntimeObject* L_160 = __this->___MY_GUN_93;
		NullCheck(L_160);
		float L_161;
		L_161 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_160, ((int32_t)195), (bool)1);
		__this->___temp_94 = L_161;
		RuntimeObject* L_162;
		L_162 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_162);
		RuntimeObject* L_163;
		L_163 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_162, 5, ((int32_t)459));
		__this->___PLAYER_X_95 = L_163;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_95), (void*)L_163);
		RuntimeObject* L_164 = __this->___PLAYER_X_95;
		NullCheck(L_164);
		float L_165;
		L_165 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_164, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_95_val = L_165;
		RuntimeObject* L_166;
		L_166 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_166);
		RuntimeObject* L_167;
		L_167 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_166, 5, ((int32_t)464));
		__this->___PLAYER_COS_97 = L_167;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_97), (void*)L_167);
		RuntimeObject* L_168 = __this->___PLAYER_COS_97;
		NullCheck(L_168);
		float L_169;
		L_169 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_168, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_97_val = L_169;
		RuntimeObject* L_170;
		L_170 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_170);
		RuntimeObject* L_171;
		L_171 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_170, 5, ((int32_t)431));
		__this->___PLAYER_VX_101 = L_171;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_101), (void*)L_171);
		RuntimeObject* L_172 = __this->___PLAYER_VX_101;
		NullCheck(L_172);
		float L_173;
		L_173 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_172, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_101_val = L_173;
		RuntimeObject* L_174;
		L_174 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_174);
		RuntimeObject* L_175;
		L_175 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_174, 5, ((int32_t)569));
		__this->___TIME_CORR_103 = L_175;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_103), (void*)L_175);
		RuntimeObject* L_176 = __this->___TIME_CORR_103;
		NullCheck(L_176);
		float L_177;
		L_177 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_176, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_103_val = L_177;
		RuntimeObject* L_178 = __this->___MY_GUN_91;
		float L_179 = __this->___PLAYER_X_95_val;
		float L_180 = __this->___PLAYER_COS_97_val;
		float L_181 = __this->___PLAYER_VX_101_val;
		float L_182 = __this->___TIME_CORR_103_val;
		NullCheck(L_178);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_178, ((int32_t)195), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_179, ((float)il2cpp_codegen_multiply(L_180, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_181, L_182)))));
		RuntimeObject* L_183;
		L_183 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_183);
		RuntimeObject* L_184;
		L_184 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_183, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_105 = L_184;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_105), (void*)L_184);
		RuntimeObject* L_185;
		L_185 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_185, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_107 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_107), (void*)L_186);
		RuntimeObject* L_187 = __this->___MY_GUN_107;
		NullCheck(L_187);
		float L_188;
		L_188 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_187, ((int32_t)196), (bool)1);
		__this->___temp_108 = L_188;
		RuntimeObject* L_189;
		L_189 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_189);
		RuntimeObject* L_190;
		L_190 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_189, 5, ((int32_t)460));
		__this->___PLAYER_Y_109 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_109), (void*)L_190);
		RuntimeObject* L_191 = __this->___PLAYER_Y_109;
		NullCheck(L_191);
		float L_192;
		L_192 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_191, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_109_val = L_192;
		RuntimeObject* L_193;
		L_193 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_193);
		RuntimeObject* L_194;
		L_194 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_193, 5, ((int32_t)463));
		__this->___PLAYER_SIN_111 = L_194;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_111), (void*)L_194);
		RuntimeObject* L_195 = __this->___PLAYER_SIN_111;
		NullCheck(L_195);
		float L_196;
		L_196 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_195, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_111_val = L_196;
		RuntimeObject* L_197;
		L_197 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_197);
		RuntimeObject* L_198;
		L_198 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_197, 5, ((int32_t)432));
		__this->___PLAYER_VY_115 = L_198;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_115), (void*)L_198);
		RuntimeObject* L_199 = __this->___PLAYER_VY_115;
		NullCheck(L_199);
		float L_200;
		L_200 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_199, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_115_val = L_200;
		RuntimeObject* L_201;
		L_201 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_201);
		RuntimeObject* L_202;
		L_202 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_201, 5, ((int32_t)569));
		__this->___TIME_CORR_117 = L_202;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_117), (void*)L_202);
		RuntimeObject* L_203 = __this->___TIME_CORR_117;
		NullCheck(L_203);
		float L_204;
		L_204 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_203, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_117_val = L_204;
		RuntimeObject* L_205 = __this->___MY_GUN_105;
		float L_206 = __this->___PLAYER_Y_109_val;
		float L_207 = __this->___PLAYER_SIN_111_val;
		float L_208 = __this->___PLAYER_VY_115_val;
		float L_209 = __this->___TIME_CORR_117_val;
		NullCheck(L_205);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_205, ((int32_t)196), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_206, ((float)il2cpp_codegen_multiply(L_207, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_208, L_209)))));
		RuntimeObject* L_210;
		L_210 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_210);
		RuntimeObject* L_211;
		L_211 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_210, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_119 = L_211;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_119), (void*)L_211);
		RuntimeObject* L_212;
		L_212 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_212);
		RuntimeObject* L_213;
		L_213 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_212, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_121 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_121), (void*)L_213);
		RuntimeObject* L_214 = __this->___MY_GUN_121;
		NullCheck(L_214);
		float L_215;
		L_215 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_214, ((int32_t)165), (bool)1);
		__this->___temp_122 = L_215;
		RuntimeObject* L_216;
		L_216 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_216);
		RuntimeObject* L_217;
		L_217 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_216, 5, ((int32_t)461));
		__this->___PLAYER_Z_123 = L_217;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_123), (void*)L_217);
		RuntimeObject* L_218 = __this->___PLAYER_Z_123;
		NullCheck(L_218);
		float L_219;
		L_219 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_218, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_123_val = L_219;
		RuntimeObject* L_220;
		L_220 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_220);
		RuntimeObject* L_221;
		L_221 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_220, 5, ((int32_t)435));
		__this->___PLAYER_TILT_126 = L_221;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_126), (void*)L_221);
		RuntimeObject* L_222 = __this->___PLAYER_TILT_126;
		NullCheck(L_222);
		float L_223;
		L_223 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_222, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_126_val = L_223;
		RuntimeObject* L_224 = __this->___MY_GUN_119;
		float L_225 = __this->___PLAYER_Z_123_val;
		float L_226 = __this->___PLAYER_TILT_126_val;
		NullCheck(L_224);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_224, ((int32_t)165), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_225, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_226, (1.0f))), (0.843999982f))))), (1.45000005f))));
		float L_227;
		L_227 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_227;
		float L_228 = __this->___startTime3;
		float L_229;
		L_229 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_228, L_229));
		__this->____cursor = 3;
		goto IL_0a6b;
	}

IL_0a5e:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_230 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline(__this, L_230, NULL);
		return (bool)1;
	}

IL_0a6b:
	{
		float L_231;
		L_231 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_232 = __this->___endTime3;
		if ((((float)L_231) < ((float)L_232)))
		{
			goto IL_0a5e;
		}
	}
	{
		RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline(__this, NULL, NULL);
		RuntimeObject* L_233;
		L_233 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_233);
		RuntimeObject* L_234;
		L_234 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_233, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_136 = L_234;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_136), (void*)L_234);
		RuntimeObject* L_235;
		L_235 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_235);
		RuntimeObject* L_236;
		L_236 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_235, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_138 = L_236;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_138), (void*)L_236);
		RuntimeObject* L_237 = __this->___MY_GUN_138;
		NullCheck(L_237);
		float L_238;
		L_238 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_237, ((int32_t)195), (bool)1);
		__this->___temp_139 = L_238;
		RuntimeObject* L_239;
		L_239 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_239);
		RuntimeObject* L_240;
		L_240 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_239, 5, ((int32_t)459));
		__this->___PLAYER_X_140 = L_240;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_140), (void*)L_240);
		RuntimeObject* L_241 = __this->___PLAYER_X_140;
		NullCheck(L_241);
		float L_242;
		L_242 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_241, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_140_val = L_242;
		RuntimeObject* L_243;
		L_243 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_243);
		RuntimeObject* L_244;
		L_244 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_243, 5, ((int32_t)464));
		__this->___PLAYER_COS_142 = L_244;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_142), (void*)L_244);
		RuntimeObject* L_245 = __this->___PLAYER_COS_142;
		NullCheck(L_245);
		float L_246;
		L_246 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_245, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_142_val = L_246;
		RuntimeObject* L_247;
		L_247 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_247);
		RuntimeObject* L_248;
		L_248 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_247, 5, ((int32_t)431));
		__this->___PLAYER_VX_146 = L_248;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_146), (void*)L_248);
		RuntimeObject* L_249 = __this->___PLAYER_VX_146;
		NullCheck(L_249);
		float L_250;
		L_250 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_249, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_146_val = L_250;
		RuntimeObject* L_251;
		L_251 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_251);
		RuntimeObject* L_252;
		L_252 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_251, 5, ((int32_t)569));
		__this->___TIME_CORR_148 = L_252;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_148), (void*)L_252);
		RuntimeObject* L_253 = __this->___TIME_CORR_148;
		NullCheck(L_253);
		float L_254;
		L_254 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_253, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_148_val = L_254;
		RuntimeObject* L_255 = __this->___MY_GUN_136;
		float L_256 = __this->___PLAYER_X_140_val;
		float L_257 = __this->___PLAYER_COS_142_val;
		float L_258 = __this->___PLAYER_VX_146_val;
		float L_259 = __this->___TIME_CORR_148_val;
		NullCheck(L_255);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_255, ((int32_t)195), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_256, ((float)il2cpp_codegen_multiply(L_257, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_258, L_259)))));
		RuntimeObject* L_260;
		L_260 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_260);
		RuntimeObject* L_261;
		L_261 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_260, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_150 = L_261;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_150), (void*)L_261);
		RuntimeObject* L_262;
		L_262 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_262);
		RuntimeObject* L_263;
		L_263 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_262, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_152 = L_263;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_152), (void*)L_263);
		RuntimeObject* L_264 = __this->___MY_GUN_152;
		NullCheck(L_264);
		float L_265;
		L_265 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_264, ((int32_t)196), (bool)1);
		__this->___temp_153 = L_265;
		RuntimeObject* L_266;
		L_266 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_266);
		RuntimeObject* L_267;
		L_267 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_266, 5, ((int32_t)460));
		__this->___PLAYER_Y_154 = L_267;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_154), (void*)L_267);
		RuntimeObject* L_268 = __this->___PLAYER_Y_154;
		NullCheck(L_268);
		float L_269;
		L_269 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_268, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_154_val = L_269;
		RuntimeObject* L_270;
		L_270 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_270);
		RuntimeObject* L_271;
		L_271 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_270, 5, ((int32_t)463));
		__this->___PLAYER_SIN_156 = L_271;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_156), (void*)L_271);
		RuntimeObject* L_272 = __this->___PLAYER_SIN_156;
		NullCheck(L_272);
		float L_273;
		L_273 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_272, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_156_val = L_273;
		RuntimeObject* L_274;
		L_274 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_274);
		RuntimeObject* L_275;
		L_275 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_274, 5, ((int32_t)432));
		__this->___PLAYER_VY_160 = L_275;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_160), (void*)L_275);
		RuntimeObject* L_276 = __this->___PLAYER_VY_160;
		NullCheck(L_276);
		float L_277;
		L_277 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_276, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_160_val = L_277;
		RuntimeObject* L_278;
		L_278 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_278);
		RuntimeObject* L_279;
		L_279 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_278, 5, ((int32_t)569));
		__this->___TIME_CORR_162 = L_279;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_162), (void*)L_279);
		RuntimeObject* L_280 = __this->___TIME_CORR_162;
		NullCheck(L_280);
		float L_281;
		L_281 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_280, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_162_val = L_281;
		RuntimeObject* L_282 = __this->___MY_GUN_150;
		float L_283 = __this->___PLAYER_Y_154_val;
		float L_284 = __this->___PLAYER_SIN_156_val;
		float L_285 = __this->___PLAYER_VY_160_val;
		float L_286 = __this->___TIME_CORR_162_val;
		NullCheck(L_282);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_282, ((int32_t)196), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_283, ((float)il2cpp_codegen_multiply(L_284, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_285, L_286)))));
		RuntimeObject* L_287;
		L_287 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_287);
		RuntimeObject* L_288;
		L_288 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_287, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_164 = L_288;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_164), (void*)L_288);
		RuntimeObject* L_289;
		L_289 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_289);
		RuntimeObject* L_290;
		L_290 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_289, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_166 = L_290;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_166), (void*)L_290);
		RuntimeObject* L_291 = __this->___MY_GUN_166;
		NullCheck(L_291);
		float L_292;
		L_292 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_291, ((int32_t)165), (bool)1);
		__this->___temp_167 = L_292;
		RuntimeObject* L_293;
		L_293 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_293);
		RuntimeObject* L_294;
		L_294 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_293, 5, ((int32_t)461));
		__this->___PLAYER_Z_168 = L_294;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_168), (void*)L_294);
		RuntimeObject* L_295 = __this->___PLAYER_Z_168;
		NullCheck(L_295);
		float L_296;
		L_296 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_295, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_168_val = L_296;
		RuntimeObject* L_297;
		L_297 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_297);
		RuntimeObject* L_298;
		L_298 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_297, 5, ((int32_t)435));
		__this->___PLAYER_TILT_171 = L_298;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_171), (void*)L_298);
		RuntimeObject* L_299 = __this->___PLAYER_TILT_171;
		NullCheck(L_299);
		float L_300;
		L_300 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_299, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_171_val = L_300;
		RuntimeObject* L_301 = __this->___MY_GUN_164;
		float L_302 = __this->___PLAYER_Z_168_val;
		float L_303 = __this->___PLAYER_TILT_171_val;
		NullCheck(L_301);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_301, ((int32_t)165), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_302, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_303, (1.0f))), (0.843999982f))))), (1.35000002f))));
		float L_304;
		L_304 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime4 = L_304;
		float L_305 = __this->___startTime4;
		float L_306;
		L_306 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime4 = ((float)il2cpp_codegen_add(L_305, L_306));
		__this->____cursor = 4;
		goto IL_0ddf;
	}

IL_0dd2:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_307 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline(__this, L_307, NULL);
		return (bool)1;
	}

IL_0ddf:
	{
		float L_308;
		L_308 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_309 = __this->___endTime4;
		if ((((float)L_308) < ((float)L_309)))
		{
			goto IL_0dd2;
		}
	}
	{
		RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline(__this, NULL, NULL);
		RuntimeObject* L_310;
		L_310 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_310);
		RuntimeObject* L_311;
		L_311 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_310, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_182 = L_311;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_182), (void*)L_311);
		RuntimeObject* L_312 = __this->___MY_GUN_182;
		NullCheck(L_312);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_312, ((int32_t)165), (-20.0f));
		RuntimeObject* L_313;
		L_313 = RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline(__this, NULL);
		NullCheck(L_313);
		RuntimeObject* L_314;
		L_314 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_313, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_185 = L_314;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_185), (void*)L_314);
		RuntimeObject* L_315 = __this->___MY_GUN_185;
		NullCheck(L_315);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_315, ((int32_t)204), (1.0f));
		float L_316;
		L_316 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime5 = L_316;
		float L_317 = __this->___startTime5;
		float L_318;
		L_318 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime5 = ((float)il2cpp_codegen_add(L_317, L_318));
		__this->____cursor = 5;
		goto IL_0e7f;
	}

IL_0e72:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_319 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline(__this, L_319, NULL);
		return (bool)1;
	}

IL_0e7f:
	{
		float L_320;
		L_320 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_321 = __this->___endTime5;
		if ((((float)L_320) < ((float)L_321)))
		{
			goto IL_0e72;
		}
	}
	{
		RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline(__this, NULL, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOWER_get_MY_mEDEF1209290E9D35A9A766AC0D4677CC6B355EB7 (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOWER_set_MY_mD0FC8B9A73926CAA8C68B9AD1CD57D721D4E29AB (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOWER_get_THERE_m2725C80B6E7F3FE9FF45F421972B4829134E3C2A (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOWER_set_THERE_m18CE8E68F58CAE1CAB3FD65FED53C4BE65663672 (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOWER_set__world_mC5293D1929E205789B9D4C8F2231E0EDBEE9C400 (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOWER_get_Current_mB645684163DCCBB4DE006CFFA683BA7211B0A144 (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0 (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOWER_Reset_mD5DE0EAE3F27DE745578C127E479F784226C8225 (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOWER__ctor_m2CCAB60402636B5DDB62FD9BD5FF9D7F3EEBBE55 (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOWER__ctor_mBEEE60289AB2F012D077854D4EEE1FF08882A624 (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LOWER_set_MY_mD0FC8B9A73926CAA8C68B9AD1CD57D721D4E29AB_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LOWER_set_THERE_m18CE8E68F58CAE1CAB3FD65FED53C4BE65663672_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LOWER_set__world_mC5293D1929E205789B9D4C8F2231E0EDBEE9C400_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LOWER_MoveNext_mE9F3B59DBFC69B8A2C02B259307E1508B0EFDF9B (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_0383;
			}
			case 1:
			{
				goto IL_06f7;
			}
			case 2:
			{
				goto IL_0a6b;
			}
			case 3:
			{
				goto IL_0ddf;
			}
			case 4:
			{
				goto IL_0e7f;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_2, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_1), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_3), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_GUN_3;
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)195), (bool)1);
		__this->___temp_4 = L_7;
		RuntimeObject* L_8;
		L_8 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)459));
		__this->___PLAYER_X_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_5), (void*)L_9);
		RuntimeObject* L_10 = __this->___PLAYER_X_5;
		NullCheck(L_10);
		float L_11;
		L_11 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_5_val = L_11;
		RuntimeObject* L_12;
		L_12 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)464));
		__this->___PLAYER_COS_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_7), (void*)L_13);
		RuntimeObject* L_14 = __this->___PLAYER_COS_7;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_7_val = L_15;
		RuntimeObject* L_16;
		L_16 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, 5, ((int32_t)431));
		__this->___PLAYER_VX_11 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_11), (void*)L_17);
		RuntimeObject* L_18 = __this->___PLAYER_VX_11;
		NullCheck(L_18);
		float L_19;
		L_19 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_11_val = L_19;
		RuntimeObject* L_20;
		L_20 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, 5, ((int32_t)569));
		__this->___TIME_CORR_13 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_13), (void*)L_21);
		RuntimeObject* L_22 = __this->___TIME_CORR_13;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_13_val = L_23;
		RuntimeObject* L_24 = __this->___MY_GUN_1;
		float L_25 = __this->___PLAYER_X_5_val;
		float L_26 = __this->___PLAYER_COS_7_val;
		float L_27 = __this->___PLAYER_VX_11_val;
		float L_28 = __this->___TIME_CORR_13_val;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)195), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_multiply(L_26, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_27, L_28)))));
		RuntimeObject* L_29;
		L_29 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_15 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_15), (void*)L_30);
		RuntimeObject* L_31;
		L_31 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_17 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_17), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_GUN_17;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)196), (bool)1);
		__this->___temp_18 = L_34;
		RuntimeObject* L_35;
		L_35 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)460));
		__this->___PLAYER_Y_19 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_19), (void*)L_36);
		RuntimeObject* L_37 = __this->___PLAYER_Y_19;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_19_val = L_38;
		RuntimeObject* L_39;
		L_39 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_39, 5, ((int32_t)463));
		__this->___PLAYER_SIN_21 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_21), (void*)L_40);
		RuntimeObject* L_41 = __this->___PLAYER_SIN_21;
		NullCheck(L_41);
		float L_42;
		L_42 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_21_val = L_42;
		RuntimeObject* L_43;
		L_43 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, 5, ((int32_t)432));
		__this->___PLAYER_VY_25 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_25), (void*)L_44);
		RuntimeObject* L_45 = __this->___PLAYER_VY_25;
		NullCheck(L_45);
		float L_46;
		L_46 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_25_val = L_46;
		RuntimeObject* L_47;
		L_47 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, 5, ((int32_t)569));
		__this->___TIME_CORR_27 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_27), (void*)L_48);
		RuntimeObject* L_49 = __this->___TIME_CORR_27;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_27_val = L_50;
		RuntimeObject* L_51 = __this->___MY_GUN_15;
		float L_52 = __this->___PLAYER_Y_19_val;
		float L_53 = __this->___PLAYER_SIN_21_val;
		float L_54 = __this->___PLAYER_VY_25_val;
		float L_55 = __this->___TIME_CORR_27_val;
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)196), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_52, ((float)il2cpp_codegen_multiply(L_53, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_54, L_55)))));
		RuntimeObject* L_56;
		L_56 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_29 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_29), (void*)L_57);
		RuntimeObject* L_58;
		L_58 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_58, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_31 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_31), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_GUN_31;
		NullCheck(L_60);
		float L_61;
		L_61 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)165), (bool)1);
		__this->___temp_32 = L_61;
		RuntimeObject* L_62;
		L_62 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, 5, ((int32_t)461));
		__this->___PLAYER_Z_33 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_33), (void*)L_63);
		RuntimeObject* L_64 = __this->___PLAYER_Z_33;
		NullCheck(L_64);
		float L_65;
		L_65 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_33_val = L_65;
		RuntimeObject* L_66;
		L_66 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, 5, ((int32_t)435));
		__this->___PLAYER_TILT_36 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_36), (void*)L_67);
		RuntimeObject* L_68 = __this->___PLAYER_TILT_36;
		NullCheck(L_68);
		float L_69;
		L_69 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_36_val = L_69;
		RuntimeObject* L_70 = __this->___MY_GUN_29;
		float L_71 = __this->___PLAYER_Z_33_val;
		float L_72 = __this->___PLAYER_TILT_36_val;
		NullCheck(L_70);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_70, ((int32_t)165), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_71, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_72, (1.0f))), (0.843999982f))))), (1.35000002f))));
		float L_73;
		L_73 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_73;
		float L_74 = __this->___startTime1;
		float L_75;
		L_75 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_74, L_75));
		__this->____cursor = 1;
		goto IL_0383;
	}

IL_0376:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_76 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline(__this, L_76, NULL);
		return (bool)1;
	}

IL_0383:
	{
		float L_77;
		L_77 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_78 = __this->___endTime1;
		if ((((float)L_77) < ((float)L_78)))
		{
			goto IL_0376;
		}
	}
	{
		LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline(__this, NULL, NULL);
		RuntimeObject* L_79;
		L_79 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_79, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_46 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_46), (void*)L_80);
		RuntimeObject* L_81;
		L_81 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_81);
		RuntimeObject* L_82;
		L_82 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_81, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_48 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_48), (void*)L_82);
		RuntimeObject* L_83 = __this->___MY_GUN_48;
		NullCheck(L_83);
		float L_84;
		L_84 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)195), (bool)1);
		__this->___temp_49 = L_84;
		RuntimeObject* L_85;
		L_85 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_85, 5, ((int32_t)459));
		__this->___PLAYER_X_50 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_50), (void*)L_86);
		RuntimeObject* L_87 = __this->___PLAYER_X_50;
		NullCheck(L_87);
		float L_88;
		L_88 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_87, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_50_val = L_88;
		RuntimeObject* L_89;
		L_89 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_89);
		RuntimeObject* L_90;
		L_90 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_89, 5, ((int32_t)464));
		__this->___PLAYER_COS_52 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_52), (void*)L_90);
		RuntimeObject* L_91 = __this->___PLAYER_COS_52;
		NullCheck(L_91);
		float L_92;
		L_92 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_91, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_52_val = L_92;
		RuntimeObject* L_93;
		L_93 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_93);
		RuntimeObject* L_94;
		L_94 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_93, 5, ((int32_t)431));
		__this->___PLAYER_VX_56 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_56), (void*)L_94);
		RuntimeObject* L_95 = __this->___PLAYER_VX_56;
		NullCheck(L_95);
		float L_96;
		L_96 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_95, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_56_val = L_96;
		RuntimeObject* L_97;
		L_97 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_97, 5, ((int32_t)569));
		__this->___TIME_CORR_58 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_58), (void*)L_98);
		RuntimeObject* L_99 = __this->___TIME_CORR_58;
		NullCheck(L_99);
		float L_100;
		L_100 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_58_val = L_100;
		RuntimeObject* L_101 = __this->___MY_GUN_46;
		float L_102 = __this->___PLAYER_X_50_val;
		float L_103 = __this->___PLAYER_COS_52_val;
		float L_104 = __this->___PLAYER_VX_56_val;
		float L_105 = __this->___TIME_CORR_58_val;
		NullCheck(L_101);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_101, ((int32_t)195), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_102, ((float)il2cpp_codegen_multiply(L_103, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_104, L_105)))));
		RuntimeObject* L_106;
		L_106 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_106, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_60 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_60), (void*)L_107);
		RuntimeObject* L_108;
		L_108 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_108);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_108, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_62 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_62), (void*)L_109);
		RuntimeObject* L_110 = __this->___MY_GUN_62;
		NullCheck(L_110);
		float L_111;
		L_111 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)196), (bool)1);
		__this->___temp_63 = L_111;
		RuntimeObject* L_112;
		L_112 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_112);
		RuntimeObject* L_113;
		L_113 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_112, 5, ((int32_t)460));
		__this->___PLAYER_Y_64 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_64), (void*)L_113);
		RuntimeObject* L_114 = __this->___PLAYER_Y_64;
		NullCheck(L_114);
		float L_115;
		L_115 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_64_val = L_115;
		RuntimeObject* L_116;
		L_116 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_116);
		RuntimeObject* L_117;
		L_117 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_116, 5, ((int32_t)463));
		__this->___PLAYER_SIN_66 = L_117;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_66), (void*)L_117);
		RuntimeObject* L_118 = __this->___PLAYER_SIN_66;
		NullCheck(L_118);
		float L_119;
		L_119 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_118, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_66_val = L_119;
		RuntimeObject* L_120;
		L_120 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_120);
		RuntimeObject* L_121;
		L_121 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_120, 5, ((int32_t)432));
		__this->___PLAYER_VY_70 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_70), (void*)L_121);
		RuntimeObject* L_122 = __this->___PLAYER_VY_70;
		NullCheck(L_122);
		float L_123;
		L_123 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_122, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_70_val = L_123;
		RuntimeObject* L_124;
		L_124 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_124);
		RuntimeObject* L_125;
		L_125 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_124, 5, ((int32_t)569));
		__this->___TIME_CORR_72 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_72), (void*)L_125);
		RuntimeObject* L_126 = __this->___TIME_CORR_72;
		NullCheck(L_126);
		float L_127;
		L_127 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_126, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_72_val = L_127;
		RuntimeObject* L_128 = __this->___MY_GUN_60;
		float L_129 = __this->___PLAYER_Y_64_val;
		float L_130 = __this->___PLAYER_SIN_66_val;
		float L_131 = __this->___PLAYER_VY_70_val;
		float L_132 = __this->___TIME_CORR_72_val;
		NullCheck(L_128);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_128, ((int32_t)196), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_129, ((float)il2cpp_codegen_multiply(L_130, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_131, L_132)))));
		RuntimeObject* L_133;
		L_133 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_133);
		RuntimeObject* L_134;
		L_134 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_133, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_74 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_74), (void*)L_134);
		RuntimeObject* L_135;
		L_135 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_135);
		RuntimeObject* L_136;
		L_136 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_135, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_76 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_76), (void*)L_136);
		RuntimeObject* L_137 = __this->___MY_GUN_76;
		NullCheck(L_137);
		float L_138;
		L_138 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_137, ((int32_t)165), (bool)1);
		__this->___temp_77 = L_138;
		RuntimeObject* L_139;
		L_139 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_139);
		RuntimeObject* L_140;
		L_140 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_139, 5, ((int32_t)461));
		__this->___PLAYER_Z_78 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_78), (void*)L_140);
		RuntimeObject* L_141 = __this->___PLAYER_Z_78;
		NullCheck(L_141);
		float L_142;
		L_142 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_78_val = L_142;
		RuntimeObject* L_143;
		L_143 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_143);
		RuntimeObject* L_144;
		L_144 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_143, 5, ((int32_t)435));
		__this->___PLAYER_TILT_81 = L_144;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_81), (void*)L_144);
		RuntimeObject* L_145 = __this->___PLAYER_TILT_81;
		NullCheck(L_145);
		float L_146;
		L_146 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_145, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_81_val = L_146;
		RuntimeObject* L_147 = __this->___MY_GUN_74;
		float L_148 = __this->___PLAYER_Z_78_val;
		float L_149 = __this->___PLAYER_TILT_81_val;
		NullCheck(L_147);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_147, ((int32_t)165), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_148, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_149, (1.0f))), (0.843999982f))))), (1.45000005f))));
		float L_150;
		L_150 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_150;
		float L_151 = __this->___startTime2;
		float L_152;
		L_152 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_151, L_152));
		__this->____cursor = 2;
		goto IL_06f7;
	}

IL_06ea:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_153 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline(__this, L_153, NULL);
		return (bool)1;
	}

IL_06f7:
	{
		float L_154;
		L_154 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_155 = __this->___endTime2;
		if ((((float)L_154) < ((float)L_155)))
		{
			goto IL_06ea;
		}
	}
	{
		LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline(__this, NULL, NULL);
		RuntimeObject* L_156;
		L_156 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_156);
		RuntimeObject* L_157;
		L_157 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_156, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_91 = L_157;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_91), (void*)L_157);
		RuntimeObject* L_158;
		L_158 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_158);
		RuntimeObject* L_159;
		L_159 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_158, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_93 = L_159;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_93), (void*)L_159);
		RuntimeObject* L_160 = __this->___MY_GUN_93;
		NullCheck(L_160);
		float L_161;
		L_161 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_160, ((int32_t)195), (bool)1);
		__this->___temp_94 = L_161;
		RuntimeObject* L_162;
		L_162 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_162);
		RuntimeObject* L_163;
		L_163 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_162, 5, ((int32_t)459));
		__this->___PLAYER_X_95 = L_163;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_95), (void*)L_163);
		RuntimeObject* L_164 = __this->___PLAYER_X_95;
		NullCheck(L_164);
		float L_165;
		L_165 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_164, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_95_val = L_165;
		RuntimeObject* L_166;
		L_166 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_166);
		RuntimeObject* L_167;
		L_167 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_166, 5, ((int32_t)464));
		__this->___PLAYER_COS_97 = L_167;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_97), (void*)L_167);
		RuntimeObject* L_168 = __this->___PLAYER_COS_97;
		NullCheck(L_168);
		float L_169;
		L_169 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_168, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_97_val = L_169;
		RuntimeObject* L_170;
		L_170 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_170);
		RuntimeObject* L_171;
		L_171 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_170, 5, ((int32_t)431));
		__this->___PLAYER_VX_101 = L_171;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_101), (void*)L_171);
		RuntimeObject* L_172 = __this->___PLAYER_VX_101;
		NullCheck(L_172);
		float L_173;
		L_173 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_172, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_101_val = L_173;
		RuntimeObject* L_174;
		L_174 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_174);
		RuntimeObject* L_175;
		L_175 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_174, 5, ((int32_t)569));
		__this->___TIME_CORR_103 = L_175;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_103), (void*)L_175);
		RuntimeObject* L_176 = __this->___TIME_CORR_103;
		NullCheck(L_176);
		float L_177;
		L_177 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_176, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_103_val = L_177;
		RuntimeObject* L_178 = __this->___MY_GUN_91;
		float L_179 = __this->___PLAYER_X_95_val;
		float L_180 = __this->___PLAYER_COS_97_val;
		float L_181 = __this->___PLAYER_VX_101_val;
		float L_182 = __this->___TIME_CORR_103_val;
		NullCheck(L_178);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_178, ((int32_t)195), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_179, ((float)il2cpp_codegen_multiply(L_180, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_181, L_182)))));
		RuntimeObject* L_183;
		L_183 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_183);
		RuntimeObject* L_184;
		L_184 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_183, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_105 = L_184;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_105), (void*)L_184);
		RuntimeObject* L_185;
		L_185 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_185, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_107 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_107), (void*)L_186);
		RuntimeObject* L_187 = __this->___MY_GUN_107;
		NullCheck(L_187);
		float L_188;
		L_188 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_187, ((int32_t)196), (bool)1);
		__this->___temp_108 = L_188;
		RuntimeObject* L_189;
		L_189 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_189);
		RuntimeObject* L_190;
		L_190 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_189, 5, ((int32_t)460));
		__this->___PLAYER_Y_109 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_109), (void*)L_190);
		RuntimeObject* L_191 = __this->___PLAYER_Y_109;
		NullCheck(L_191);
		float L_192;
		L_192 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_191, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_109_val = L_192;
		RuntimeObject* L_193;
		L_193 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_193);
		RuntimeObject* L_194;
		L_194 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_193, 5, ((int32_t)463));
		__this->___PLAYER_SIN_111 = L_194;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_111), (void*)L_194);
		RuntimeObject* L_195 = __this->___PLAYER_SIN_111;
		NullCheck(L_195);
		float L_196;
		L_196 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_195, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_111_val = L_196;
		RuntimeObject* L_197;
		L_197 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_197);
		RuntimeObject* L_198;
		L_198 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_197, 5, ((int32_t)432));
		__this->___PLAYER_VY_115 = L_198;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_115), (void*)L_198);
		RuntimeObject* L_199 = __this->___PLAYER_VY_115;
		NullCheck(L_199);
		float L_200;
		L_200 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_199, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_115_val = L_200;
		RuntimeObject* L_201;
		L_201 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_201);
		RuntimeObject* L_202;
		L_202 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_201, 5, ((int32_t)569));
		__this->___TIME_CORR_117 = L_202;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_117), (void*)L_202);
		RuntimeObject* L_203 = __this->___TIME_CORR_117;
		NullCheck(L_203);
		float L_204;
		L_204 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_203, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_117_val = L_204;
		RuntimeObject* L_205 = __this->___MY_GUN_105;
		float L_206 = __this->___PLAYER_Y_109_val;
		float L_207 = __this->___PLAYER_SIN_111_val;
		float L_208 = __this->___PLAYER_VY_115_val;
		float L_209 = __this->___TIME_CORR_117_val;
		NullCheck(L_205);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_205, ((int32_t)196), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_206, ((float)il2cpp_codegen_multiply(L_207, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_208, L_209)))));
		RuntimeObject* L_210;
		L_210 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_210);
		RuntimeObject* L_211;
		L_211 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_210, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_119 = L_211;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_119), (void*)L_211);
		RuntimeObject* L_212;
		L_212 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_212);
		RuntimeObject* L_213;
		L_213 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_212, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_121 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_121), (void*)L_213);
		RuntimeObject* L_214 = __this->___MY_GUN_121;
		NullCheck(L_214);
		float L_215;
		L_215 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_214, ((int32_t)165), (bool)1);
		__this->___temp_122 = L_215;
		RuntimeObject* L_216;
		L_216 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_216);
		RuntimeObject* L_217;
		L_217 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_216, 5, ((int32_t)461));
		__this->___PLAYER_Z_123 = L_217;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_123), (void*)L_217);
		RuntimeObject* L_218 = __this->___PLAYER_Z_123;
		NullCheck(L_218);
		float L_219;
		L_219 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_218, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_123_val = L_219;
		RuntimeObject* L_220;
		L_220 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_220);
		RuntimeObject* L_221;
		L_221 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_220, 5, ((int32_t)435));
		__this->___PLAYER_TILT_126 = L_221;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_126), (void*)L_221);
		RuntimeObject* L_222 = __this->___PLAYER_TILT_126;
		NullCheck(L_222);
		float L_223;
		L_223 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_222, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_126_val = L_223;
		RuntimeObject* L_224 = __this->___MY_GUN_119;
		float L_225 = __this->___PLAYER_Z_123_val;
		float L_226 = __this->___PLAYER_TILT_126_val;
		NullCheck(L_224);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_224, ((int32_t)165), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_225, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_226, (1.0f))), (0.843999982f))))), (1.60000002f))));
		float L_227;
		L_227 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_227;
		float L_228 = __this->___startTime3;
		float L_229;
		L_229 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_228, L_229));
		__this->____cursor = 3;
		goto IL_0a6b;
	}

IL_0a5e:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_230 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline(__this, L_230, NULL);
		return (bool)1;
	}

IL_0a6b:
	{
		float L_231;
		L_231 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_232 = __this->___endTime3;
		if ((((float)L_231) < ((float)L_232)))
		{
			goto IL_0a5e;
		}
	}
	{
		LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline(__this, NULL, NULL);
		RuntimeObject* L_233;
		L_233 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_233);
		RuntimeObject* L_234;
		L_234 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_233, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_136 = L_234;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_136), (void*)L_234);
		RuntimeObject* L_235;
		L_235 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_235);
		RuntimeObject* L_236;
		L_236 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_235, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_138 = L_236;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_138), (void*)L_236);
		RuntimeObject* L_237 = __this->___MY_GUN_138;
		NullCheck(L_237);
		float L_238;
		L_238 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_237, ((int32_t)195), (bool)1);
		__this->___temp_139 = L_238;
		RuntimeObject* L_239;
		L_239 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_239);
		RuntimeObject* L_240;
		L_240 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_239, 5, ((int32_t)459));
		__this->___PLAYER_X_140 = L_240;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_140), (void*)L_240);
		RuntimeObject* L_241 = __this->___PLAYER_X_140;
		NullCheck(L_241);
		float L_242;
		L_242 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_241, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_140_val = L_242;
		RuntimeObject* L_243;
		L_243 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_243);
		RuntimeObject* L_244;
		L_244 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_243, 5, ((int32_t)464));
		__this->___PLAYER_COS_142 = L_244;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_142), (void*)L_244);
		RuntimeObject* L_245 = __this->___PLAYER_COS_142;
		NullCheck(L_245);
		float L_246;
		L_246 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_245, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_142_val = L_246;
		RuntimeObject* L_247;
		L_247 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_247);
		RuntimeObject* L_248;
		L_248 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_247, 5, ((int32_t)431));
		__this->___PLAYER_VX_146 = L_248;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_146), (void*)L_248);
		RuntimeObject* L_249 = __this->___PLAYER_VX_146;
		NullCheck(L_249);
		float L_250;
		L_250 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_249, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_146_val = L_250;
		RuntimeObject* L_251;
		L_251 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_251);
		RuntimeObject* L_252;
		L_252 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_251, 5, ((int32_t)569));
		__this->___TIME_CORR_148 = L_252;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_148), (void*)L_252);
		RuntimeObject* L_253 = __this->___TIME_CORR_148;
		NullCheck(L_253);
		float L_254;
		L_254 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_253, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_148_val = L_254;
		RuntimeObject* L_255 = __this->___MY_GUN_136;
		float L_256 = __this->___PLAYER_X_140_val;
		float L_257 = __this->___PLAYER_COS_142_val;
		float L_258 = __this->___PLAYER_VX_146_val;
		float L_259 = __this->___TIME_CORR_148_val;
		NullCheck(L_255);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_255, ((int32_t)195), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_256, ((float)il2cpp_codegen_multiply(L_257, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_258, L_259)))));
		RuntimeObject* L_260;
		L_260 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_260);
		RuntimeObject* L_261;
		L_261 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_260, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_150 = L_261;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_150), (void*)L_261);
		RuntimeObject* L_262;
		L_262 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_262);
		RuntimeObject* L_263;
		L_263 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_262, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_152 = L_263;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_152), (void*)L_263);
		RuntimeObject* L_264 = __this->___MY_GUN_152;
		NullCheck(L_264);
		float L_265;
		L_265 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_264, ((int32_t)196), (bool)1);
		__this->___temp_153 = L_265;
		RuntimeObject* L_266;
		L_266 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_266);
		RuntimeObject* L_267;
		L_267 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_266, 5, ((int32_t)460));
		__this->___PLAYER_Y_154 = L_267;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_154), (void*)L_267);
		RuntimeObject* L_268 = __this->___PLAYER_Y_154;
		NullCheck(L_268);
		float L_269;
		L_269 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_268, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_154_val = L_269;
		RuntimeObject* L_270;
		L_270 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_270);
		RuntimeObject* L_271;
		L_271 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_270, 5, ((int32_t)463));
		__this->___PLAYER_SIN_156 = L_271;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_156), (void*)L_271);
		RuntimeObject* L_272 = __this->___PLAYER_SIN_156;
		NullCheck(L_272);
		float L_273;
		L_273 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_272, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_156_val = L_273;
		RuntimeObject* L_274;
		L_274 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_274);
		RuntimeObject* L_275;
		L_275 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_274, 5, ((int32_t)432));
		__this->___PLAYER_VY_160 = L_275;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_160), (void*)L_275);
		RuntimeObject* L_276 = __this->___PLAYER_VY_160;
		NullCheck(L_276);
		float L_277;
		L_277 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_276, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_160_val = L_277;
		RuntimeObject* L_278;
		L_278 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_278);
		RuntimeObject* L_279;
		L_279 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_278, 5, ((int32_t)569));
		__this->___TIME_CORR_162 = L_279;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_162), (void*)L_279);
		RuntimeObject* L_280 = __this->___TIME_CORR_162;
		NullCheck(L_280);
		float L_281;
		L_281 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_280, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_162_val = L_281;
		RuntimeObject* L_282 = __this->___MY_GUN_150;
		float L_283 = __this->___PLAYER_Y_154_val;
		float L_284 = __this->___PLAYER_SIN_156_val;
		float L_285 = __this->___PLAYER_VY_160_val;
		float L_286 = __this->___TIME_CORR_162_val;
		NullCheck(L_282);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_282, ((int32_t)196), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_283, ((float)il2cpp_codegen_multiply(L_284, (1.15999997f))))), ((float)il2cpp_codegen_multiply(L_285, L_286)))));
		RuntimeObject* L_287;
		L_287 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_287);
		RuntimeObject* L_288;
		L_288 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_287, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_164 = L_288;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_164), (void*)L_288);
		RuntimeObject* L_289;
		L_289 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_289);
		RuntimeObject* L_290;
		L_290 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_289, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_166 = L_290;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_166), (void*)L_290);
		RuntimeObject* L_291 = __this->___MY_GUN_166;
		NullCheck(L_291);
		float L_292;
		L_292 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_291, ((int32_t)165), (bool)1);
		__this->___temp_167 = L_292;
		RuntimeObject* L_293;
		L_293 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_293);
		RuntimeObject* L_294;
		L_294 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_293, 5, ((int32_t)461));
		__this->___PLAYER_Z_168 = L_294;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_168), (void*)L_294);
		RuntimeObject* L_295 = __this->___PLAYER_Z_168;
		NullCheck(L_295);
		float L_296;
		L_296 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_295, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_168_val = L_296;
		RuntimeObject* L_297;
		L_297 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_297);
		RuntimeObject* L_298;
		L_298 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_297, 5, ((int32_t)435));
		__this->___PLAYER_TILT_171 = L_298;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_171), (void*)L_298);
		RuntimeObject* L_299 = __this->___PLAYER_TILT_171;
		NullCheck(L_299);
		float L_300;
		L_300 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_299, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_171_val = L_300;
		RuntimeObject* L_301 = __this->___MY_GUN_164;
		float L_302 = __this->___PLAYER_Z_168_val;
		float L_303 = __this->___PLAYER_TILT_171_val;
		NullCheck(L_301);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_301, ((int32_t)165), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_302, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_303, (1.0f))), (0.843999982f))))), (1.89999998f))));
		float L_304;
		L_304 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime4 = L_304;
		float L_305 = __this->___startTime4;
		float L_306;
		L_306 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime4 = ((float)il2cpp_codegen_add(L_305, L_306));
		__this->____cursor = 4;
		goto IL_0ddf;
	}

IL_0dd2:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_307 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline(__this, L_307, NULL);
		return (bool)1;
	}

IL_0ddf:
	{
		float L_308;
		L_308 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_309 = __this->___endTime4;
		if ((((float)L_308) < ((float)L_309)))
		{
			goto IL_0dd2;
		}
	}
	{
		LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline(__this, NULL, NULL);
		RuntimeObject* L_310;
		L_310 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_310);
		RuntimeObject* L_311;
		L_311 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_310, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_182 = L_311;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_182), (void*)L_311);
		RuntimeObject* L_312 = __this->___MY_GUN_182;
		NullCheck(L_312);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_312, ((int32_t)165), (-20.0f));
		RuntimeObject* L_313;
		L_313 = LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline(__this, NULL);
		NullCheck(L_313);
		RuntimeObject* L_314;
		L_314 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_313, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_185 = L_314;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_185), (void*)L_314);
		RuntimeObject* L_315 = __this->___MY_GUN_185;
		NullCheck(L_315);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_315, ((int32_t)204), (1.0f));
		float L_316;
		L_316 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime5 = L_316;
		float L_317 = __this->___startTime5;
		float L_318;
		L_318 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime5 = ((float)il2cpp_codegen_add(L_317, L_318));
		__this->____cursor = 5;
		goto IL_0e7f;
	}

IL_0e72:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_319 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline(__this, L_319, NULL);
		return (bool)1;
	}

IL_0e7f:
	{
		float L_320;
		L_320 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_321 = __this->___endTime5;
		if ((((float)L_320) < ((float)L_321)))
		{
			goto IL_0e72;
		}
	}
	{
		LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline(__this, NULL, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TARGETON_get_MY_mFD35803DA0D52934E3758A1C1BD7AFCFD6A49887 (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETON_set_MY_m8E0A20F4BCBDF0BFCA7716D15DCA93B6FECEA525 (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TARGETON_get_THERE_m3BA0B1ED9548231AD4886891BEF09492DAA91A83 (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETON_set_THERE_mCADD131FFC4C22552EAC0BB09ED8957C1C432A44 (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TARGETON_get__world_m0EE475075B3119A4AAE3C6EF43D32AD9D082FFCA (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETON_set__world_mBEFDDD99FE73110D87D9A9709B903077192E8FC9 (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TARGETON_get_Current_m1E6F411C95DE72FAAC50549183EFFA28CB050D65 (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETON_set_Current_mAF2771F54EE048F01A854F26073AC1D54BAFBDD8 (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETON_Reset_mAFCA26FF9880994D4A97DD2B5F82A0DFBCC6F210 (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETON__ctor_m515D11DEBB4E550106AF681B3007629ABBCD5FAA (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETON__ctor_m7B088D0BA4C11A9A71CABAF4C8E829B3DBB48A89 (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TARGETON_set_MY_m8E0A20F4BCBDF0BFCA7716D15DCA93B6FECEA525_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TARGETON_set_THERE_mCADD131FFC4C22552EAC0BB09ED8957C1C432A44_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TARGETON_set__world_mBEFDDD99FE73110D87D9A9709B903077192E8FC9_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TARGETON_MoveNext_m99E2C3471656AE9F96515EB6613F98A3ADA4BBA1 (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TARGETON_get__world_m0EE475075B3119A4AAE3C6EF43D32AD9D082FFCA_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)2055106693), (bool)1, (bool)1);
		__this->___TARGETOVL_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TARGETOVL_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = TARGETON_get__world_m0EE475075B3119A4AAE3C6EF43D32AD9D082FFCA_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = __this->___TARGETOVL_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)161), L_6);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TARGETOFF_get_MY_m1D84201367E914FD0E38ED59F71CD8421ECDB888 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETOFF_set_MY_m7766B234E2E5F644F1FEF3DCA04063EF217FBC53 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TARGETOFF_get_THERE_m67FB651856A2BA3D49913679F9BA953F6E09D2B0 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETOFF_set_THERE_m4C88A5FEFBB5817923BF867E6845AA1A272A7FE9 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TARGETOFF_get__world_m263F3E9925E07F693A186917F457160A70A111C0 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETOFF_set__world_mF4890B0153DE1C1D6FE1CD2498E04F649AEBB65C (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TARGETOFF_get_Current_m356208E8CBC7292B36C7EA4DA2A65BC9C57C1912 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETOFF_set_Current_m9C2EFA7D9189AD5A069F6C7C842D006A8D21A556 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETOFF_Reset_m618B7A6C98C1E05AC97BC446A6A76903F6D00B96 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETOFF__ctor_mADB3318ADA9DFCAC4F053B73F0CE4BE26016FFC7 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETOFF__ctor_m190F1702C759551940A700F28F3A7196E462CE93 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TARGETOFF_set_MY_m7766B234E2E5F644F1FEF3DCA04063EF217FBC53_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TARGETOFF_set_THERE_m4C88A5FEFBB5817923BF867E6845AA1A272A7FE9_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TARGETOFF_set__world_mF4890B0153DE1C1D6FE1CD2498E04F649AEBB65C_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TARGETOFF_MoveNext_m5E4F920B65ACAB19C0D94AEBC2052FF74E1157DE (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TARGETOFF_get__world_m263F3E9925E07F693A186917F457160A70A111C0_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)161), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTNONE_get_MY_m7346D05EAA5B0F4CD84AF32B22EB82210DFD4E9B (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTNONE_set_MY_m308BEF1FB734331939FAE26B125498D3518B705A (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTNONE_get_THERE_m7B159965CE908129BAB477B4B3F35E20E55E2FA9 (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTNONE_set_THERE_m8FEBCBEDF2ECEF6B12F886DA59AF42F03ECEE784 (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496 (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTNONE_set__world_m237ABAB84B3B5652935539BFE7563910C9A8DDF4 (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTNONE_get_Current_m07BB2775D74D0EEAA6B1D4BA38407BA27C93EACA (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTNONE_set_Current_m4F85C958534959E44C7A7BED40DC2AF78E8348ED (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTNONE_Reset_m5941055CD69FCFED58FBBED3985168D8ED801092 (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTNONE__ctor_mFF1135D9058921B26DEC652619B7A667380D5451 (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTNONE__ctor_mB55CC51AB0139D6EBAA9D340FCB7C152B18B5639 (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SELECTNONE_set_MY_m308BEF1FB734331939FAE26B125498D3518B705A_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SELECTNONE_set_THERE_m8FEBCBEDF2ECEF6B12F886DA59AF42F03ECEE784_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SELECTNONE_set__world_m237ABAB84B3B5652935539BFE7563910C9A8DDF4_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SELECTNONE_MoveNext_mA9AFC3A4A61E9A5167DF3041E71EAE3254A67710 (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* V_1 = NULL;
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_2 = NULL;
	LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* V_3 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0397;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_3, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_1), (void*)L_4);
		RuntimeObject* L_5 = __this->___WEAPONSEL_1;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)231), (1.0f));
		RuntimeObject* L_6;
		L_6 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_8;
		L_8 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)97), (RuntimeObject*)NULL);
		RuntimeObject* L_10;
		L_10 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)104), (RuntimeObject*)NULL);
		RuntimeObject* L_12;
		L_12 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)39), (RuntimeObject*)NULL);
		RuntimeObject* L_14;
		L_14 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)92), (RuntimeObject*)NULL);
		RuntimeObject* L_16;
		L_16 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)40), (RuntimeObject*)NULL);
		RuntimeObject* L_18;
		L_18 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)41), (RuntimeObject*)NULL);
		RuntimeObject* L_20;
		L_20 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)42), (RuntimeObject*)NULL);
		RuntimeObject* L_22;
		L_22 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)43), (RuntimeObject*)NULL);
		RuntimeObject* L_24;
		L_24 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)44), (RuntimeObject*)NULL);
	}

IL_00ff:
	{
		float L_26;
		L_26 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_26;
		float L_27 = __this->___startTime1;
		float L_28;
		L_28 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_27, L_28));
		__this->____cursor = 1;
		goto IL_0133;
	}

IL_0126:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_29 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTNONE_set_Current_m4F85C958534959E44C7A7BED40DC2AF78E8348ED_inline(__this, L_29, NULL);
		return (bool)1;
	}

IL_0133:
	{
		float L_30;
		L_30 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_31 = __this->___endTime1;
		if ((((float)L_30) < ((float)L_31)))
		{
			goto IL_0126;
		}
	}
	{
		SELECTNONE_set_Current_m4F85C958534959E44C7A7BED40DC2AF78E8348ED_inline(__this, NULL, NULL);
		RuntimeObject* L_32;
		L_32 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_24 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_24), (void*)L_33);
		RuntimeObject* L_34 = __this->___GUNFIRING_24;
		NullCheck(L_34);
		float L_35;
		L_35 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)231), (bool)1);
		__this->___GUNFIRING_24_val = L_35;
		float L_36 = __this->___GUNFIRING_24_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_36, (0.0f), NULL);
		if (!L_37)
		{
			goto IL_00ff;
		}
	}
	{
		RuntimeObject* L_38;
		L_38 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_26 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_26), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_GUN_26;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_40, (RuntimeObject*)NULL, NULL);
		if (L_41)
		{
			goto IL_01f2;
		}
	}
	{
		RuntimeObject* L_42;
		L_42 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_42, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_29 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_29), (void*)L_43);
		RuntimeObject* L_44 = __this->___MY_GUN_29;
		NullCheck(L_44);
		float L_45;
		L_45 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)204), (bool)1);
		__this->___temp_30 = L_45;
		float L_46 = __this->___temp_30;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_46, (1.0f), NULL);
		if (!L_47)
		{
			goto IL_00ff;
		}
	}

IL_01f2:
	{
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_48 = (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A*)il2cpp_codegen_object_new(TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A_il2cpp_TypeInfo_var);
		TARGETOFF__ctor_mADB3318ADA9DFCAC4F053B73F0CE4BE26016FFC7(L_48, NULL);
		V_1 = L_48;
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_49 = V_1;
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_50 = L_49;
		RuntimeObject* L_51;
		L_51 = SELECTNONE_get_MY_m7346D05EAA5B0F4CD84AF32B22EB82210DFD4E9B_inline(__this, NULL);
		NullCheck(L_50);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_50, L_51);
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_52 = L_50;
		RuntimeObject* L_53;
		L_53 = SELECTNONE_get_THERE_m7B159965CE908129BAB477B4B3F35E20E55E2FA9_inline(__this, NULL);
		NullCheck(L_52);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_52, L_53);
		RuntimeObject* L_54;
		L_54 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_52);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_52, L_54);
		RuntimeObject* L_55;
		L_55 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_56 = V_1;
		NullCheck(L_55);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_56);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_58 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_58, NULL);
		V_2 = L_58;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_59 = V_2;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_60 = L_59;
		RuntimeObject* L_61;
		L_61 = SELECTNONE_get_MY_m7346D05EAA5B0F4CD84AF32B22EB82210DFD4E9B_inline(__this, NULL);
		NullCheck(L_60);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_60, L_61);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_62 = L_60;
		RuntimeObject* L_63;
		L_63 = SELECTNONE_get_THERE_m7B159965CE908129BAB477B4B3F35E20E55E2FA9_inline(__this, NULL);
		NullCheck(L_62);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_62, L_63);
		RuntimeObject* L_64;
		L_64 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_62);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_62, L_64);
		RuntimeObject* L_65;
		L_65 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_66 = V_2;
		NullCheck(L_65);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_65, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_66);
		RuntimeObject* L_68;
		L_68 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_68, 5, ((int32_t)380));
		__this->___MAP_MODE_32 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_32), (void*)L_69);
		RuntimeObject* L_70 = __this->___MAP_MODE_32;
		NullCheck(L_70);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_70, ((int32_t)231), (0.0f));
		RuntimeObject* L_71;
		L_71 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_71);
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)-1252466137), (bool)1, (bool)1);
		__this->___PDATEXT_35 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PDATEXT_35), (void*)L_73);
		RuntimeObject* L_74 = __this->___PDATEXT_35;
		NullCheck(L_74);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_74, ((int32_t)205), (0.0f));
		RuntimeObject* L_75;
		L_75 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_75);
		RuntimeObject* L_76;
		L_76 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_75);
		NullCheck(L_76);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)158), (RuntimeObject*)NULL);
		RuntimeObject* L_77;
		L_77 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_77);
		RuntimeObject* L_78;
		L_78 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_77, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_40 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_40), (void*)L_78);
		RuntimeObject* L_79 = __this->___MY_GUN_40;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_79, (RuntimeObject*)NULL, NULL);
		if (L_80)
		{
			goto IL_042b;
		}
	}
	{
		RuntimeObject* L_81;
		L_81 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_81);
		RuntimeObject* L_82;
		L_82 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_81, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_43 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_43), (void*)L_82);
		RuntimeObject* L_83 = __this->___MY_GUN_43;
		NullCheck(L_83);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)204), (0.0f));
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_84 = (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2*)il2cpp_codegen_object_new(LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var);
		LOWER__ctor_m2CCAB60402636B5DDB62FD9BD5FF9D7F3EEBBE55(L_84, NULL);
		V_3 = L_84;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_85 = V_3;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_86 = L_85;
		RuntimeObject* L_87;
		L_87 = SELECTNONE_get_MY_m7346D05EAA5B0F4CD84AF32B22EB82210DFD4E9B_inline(__this, NULL);
		NullCheck(L_86);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_86, L_87);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_88 = L_86;
		RuntimeObject* L_89;
		L_89 = SELECTNONE_get_THERE_m7B159965CE908129BAB477B4B3F35E20E55E2FA9_inline(__this, NULL);
		NullCheck(L_88);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_88, L_89);
		RuntimeObject* L_90;
		L_90 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_88);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_88, L_90);
		RuntimeObject* L_91;
		L_91 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_92 = V_3;
		NullCheck(L_91);
		RuntimeObject* L_93;
		L_93 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_91, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_92);
	}

IL_0362:
	{
		float L_94;
		L_94 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_94;
		float L_95 = __this->___startTime2;
		float L_96;
		L_96 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)16), NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_95, L_96));
		__this->____cursor = 2;
		goto IL_0397;
	}

IL_038a:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_97 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTNONE_set_Current_m4F85C958534959E44C7A7BED40DC2AF78E8348ED_inline(__this, L_97, NULL);
		return (bool)1;
	}

IL_0397:
	{
		float L_98;
		L_98 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_99 = __this->___endTime2;
		if ((((float)L_98) < ((float)L_99)))
		{
			goto IL_038a;
		}
	}
	{
		SELECTNONE_set_Current_m4F85C958534959E44C7A7BED40DC2AF78E8348ED_inline(__this, NULL, NULL);
		RuntimeObject* L_100;
		L_100 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_100, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_47 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_47), (void*)L_101);
		RuntimeObject* L_102 = __this->___MY_GUN_47;
		NullCheck(L_102);
		float L_103;
		L_103 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)204), (bool)1);
		__this->___temp_48 = L_103;
		float L_104 = __this->___temp_48;
		bool L_105;
		L_105 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_104, (1.0f), NULL);
		if (L_105)
		{
			goto IL_0362;
		}
	}
	{
		RuntimeObject* L_106;
		L_106 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_106);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_106, ((int32_t)-1040443588), (RuntimeObject*)NULL);
		RuntimeObject* L_107;
		L_107 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_107);
		RuntimeObject* L_108;
		L_108 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_107, 5, ((int32_t)361));
		__this->___RENDER_MODE_52 = L_108;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RENDER_MODE_52), (void*)L_108);
		RuntimeObject* L_109 = __this->___RENDER_MODE_52;
		NullCheck(L_109);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_109, ((int32_t)231), (1.0f));
	}

IL_042b:
	{
		RuntimeObject* L_110;
		L_110 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_110);
		NullCheck(L_111);
		RuntimeObject* L_112;
		L_112 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_111, ((int32_t)-109360261), (bool)1, (bool)1);
		__this->___SELECTTRICORDER_53 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTTRICORDER_53), (void*)L_112);
		RuntimeObject* L_113;
		L_113 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_113);
		RuntimeObject* L_114;
		L_114 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_113);
		RuntimeObject* L_115 = __this->___SELECTTRICORDER_53;
		NullCheck(L_114);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)104), L_115);
		RuntimeObject* L_116;
		L_116 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_116);
		RuntimeObject* L_117;
		L_117 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_116);
		NullCheck(L_117);
		RuntimeObject* L_118;
		L_118 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_117, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_55 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_55), (void*)L_118);
		RuntimeObject* L_119;
		L_119 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_119);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_119);
		RuntimeObject* L_121 = __this->___SELECTNONE_55;
		NullCheck(L_120);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_120, ((int32_t)39), L_121);
		RuntimeObject* L_122;
		L_122 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_122);
		NullCheck(L_123);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_57 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_57), (void*)L_124);
		RuntimeObject* L_125;
		L_125 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_125);
		RuntimeObject* L_126;
		L_126 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_125);
		RuntimeObject* L_127 = __this->___SELECTNONE_57;
		NullCheck(L_126);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_126, ((int32_t)92), L_127);
		RuntimeObject* L_128;
		L_128 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_128);
		RuntimeObject* L_129;
		L_129 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_128);
		NullCheck(L_129);
		RuntimeObject* L_130;
		L_130 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_129, ((int32_t)-463643937), (bool)1, (bool)1);
		__this->___SELECTMP5_59 = L_130;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5_59), (void*)L_130);
		RuntimeObject* L_131;
		L_131 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_131);
		RuntimeObject* L_132;
		L_132 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_131);
		RuntimeObject* L_133 = __this->___SELECTMP5_59;
		NullCheck(L_132);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_132, ((int32_t)40), L_133);
		RuntimeObject* L_134;
		L_134 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_134);
		RuntimeObject* L_135;
		L_135 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_134);
		NullCheck(L_135);
		RuntimeObject* L_136;
		L_136 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_135, ((int32_t)120038031), (bool)1, (bool)1);
		__this->___SELECTMP5BURST_61 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5BURST_61), (void*)L_136);
		RuntimeObject* L_137;
		L_137 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_137);
		RuntimeObject* L_138;
		L_138 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_137);
		RuntimeObject* L_139 = __this->___SELECTMP5BURST_61;
		NullCheck(L_138);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_138, ((int32_t)41), L_139);
		RuntimeObject* L_140;
		L_140 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_140);
		RuntimeObject* L_141;
		L_141 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_140);
		NullCheck(L_141);
		RuntimeObject* L_142;
		L_142 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)677375039), (bool)1, (bool)1);
		__this->___SELECTGRANADE_63 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTGRANADE_63), (void*)L_142);
		RuntimeObject* L_143;
		L_143 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_143);
		RuntimeObject* L_144;
		L_144 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_143);
		RuntimeObject* L_145 = __this->___SELECTGRANADE_63;
		NullCheck(L_144);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_144, ((int32_t)42), L_145);
		RuntimeObject* L_146;
		L_146 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_146);
		RuntimeObject* L_147;
		L_147 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_146);
		NullCheck(L_147);
		RuntimeObject* L_148;
		L_148 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_147, ((int32_t)-917113783), (bool)1, (bool)1);
		__this->___SELECTSTINGER_65 = L_148;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTSTINGER_65), (void*)L_148);
		RuntimeObject* L_149;
		L_149 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_149);
		RuntimeObject* L_150;
		L_150 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_149);
		RuntimeObject* L_151 = __this->___SELECTSTINGER_65;
		NullCheck(L_150);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_150, ((int32_t)43), L_151);
		RuntimeObject* L_152;
		L_152 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_152);
		RuntimeObject* L_153;
		L_153 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_152);
		NullCheck(L_153);
		RuntimeObject* L_154;
		L_154 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_153, ((int32_t)824580280), (bool)1, (bool)1);
		__this->___SELECTQUANTUM_67 = L_154;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTQUANTUM_67), (void*)L_154);
		RuntimeObject* L_155;
		L_155 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_155);
		RuntimeObject* L_156;
		L_156 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_155);
		RuntimeObject* L_157 = __this->___SELECTQUANTUM_67;
		NullCheck(L_156);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_156, ((int32_t)44), L_157);
		RuntimeObject* L_158;
		L_158 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_158);
		RuntimeObject* L_159;
		L_159 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_158, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_70 = L_159;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_70), (void*)L_159);
		RuntimeObject* L_160 = __this->___GUN_ON_70;
		NullCheck(L_160);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_160, ((int32_t)231), (0.0f));
		RuntimeObject* L_161;
		L_161 = SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline(__this, NULL);
		NullCheck(L_161);
		RuntimeObject* L_162;
		L_162 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_161, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_72 = L_162;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_72), (void*)L_162);
		RuntimeObject* L_163 = __this->___PLAYER_RESULT_72;
		NullCheck(L_163);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_163, ((int32_t)231), (-1.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTTRICORDER_get_MY_m061D3D6D71D899BA76DBD4AE0048744643B0A9F0 (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTTRICORDER_set_MY_m25ADC6359586091EE2237B96A812F9A400A0BC39 (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTTRICORDER_get_THERE_m4FFB4F854C49329342CB972A2CFA009932845881 (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTTRICORDER_set_THERE_m0E85CC812520512092EB3C03E8FD5457475BF025 (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79 (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTTRICORDER_set__world_m02E42A82000231BB26D9C9DE4CDBCAFF22ECEB70 (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTTRICORDER_get_Current_mB15D3BFE864DD057A03B65481F27EDBE899727C3 (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTTRICORDER_set_Current_mF36A2B7EF562217134BEA6C3345700E6D7200316 (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTTRICORDER_Reset_mFFD8C386AB81EA812635C324C1EF81EE966BA154 (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTTRICORDER__ctor_mE17BECA18299DD9106E11AC2EFBD0386EA3C7A08 (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTTRICORDER__ctor_m847D2F42B0DF0D10C83BB86379EE1EAC020D439E (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SELECTTRICORDER_set_MY_m25ADC6359586091EE2237B96A812F9A400A0BC39_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SELECTTRICORDER_set_THERE_m0E85CC812520512092EB3C03E8FD5457475BF025_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SELECTTRICORDER_set__world_m02E42A82000231BB26D9C9DE4CDBCAFF22ECEB70_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SELECTTRICORDER_MoveNext_m1F213D3364C179891FFF219D95A8A263A6E1D933 (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* V_1 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_2 = NULL;
	TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* V_3 = NULL;
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_4 = NULL;
	LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* V_5 = NULL;
	RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* V_6 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_02a2;
			}
			case 1:
			{
				goto IL_04ff;
			}
			case 2:
			{
				goto IL_0624;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_2, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_1), (void*)L_3);
		RuntimeObject* L_4 = __this->___PLAYER_HEALTH_1;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_1_val = L_5;
		float L_6 = __this->___PLAYER_HEALTH_1_val;
		bool L_7;
		L_7 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_6, (0.100000001f), NULL);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		RuntimeObject* L_8;
		L_8 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)380));
		__this->___MAP_MODE_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_3), (void*)L_9);
		RuntimeObject* L_10 = __this->___MAP_MODE_3;
		NullCheck(L_10);
		float L_11;
		L_11 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), (bool)1);
		__this->___MAP_MODE_3_val = L_11;
		float L_12 = __this->___MAP_MODE_3_val;
		bool L_13;
		L_13 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_12, (0.0f), NULL);
		if (!L_13)
		{
			goto IL_00d7;
		}
	}
	{
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_14 = (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF*)il2cpp_codegen_object_new(SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		SELECTNONE__ctor_mFF1135D9058921B26DEC652619B7A667380D5451(L_14, NULL);
		V_1 = L_14;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_15 = V_1;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_16 = L_15;
		RuntimeObject* L_17;
		L_17 = SELECTTRICORDER_get_MY_m061D3D6D71D899BA76DBD4AE0048744643B0A9F0_inline(__this, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_16, L_17);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_18 = L_16;
		RuntimeObject* L_19;
		L_19 = SELECTTRICORDER_get_THERE_m4FFB4F854C49329342CB972A2CFA009932845881_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_18, L_19);
		RuntimeObject* L_20;
		L_20 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_18, L_20);
		RuntimeObject* L_21;
		L_21 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_22 = V_1;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_22);
		return (bool)0;
	}

IL_00d7:
	{
		RuntimeObject* L_24;
		L_24 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)1205039005));
		__this->___HAS_PDA_5 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_PDA_5), (void*)L_25);
		RuntimeObject* L_26 = __this->___HAS_PDA_5;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (bool)1);
		__this->___HAS_PDA_5_val = L_27;
		float L_28 = __this->___HAS_PDA_5_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_28, (0.0f), NULL);
		if (!L_29)
		{
			goto IL_0184;
		}
	}
	{
		RuntimeObject* L_30;
		L_30 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)665781601), (bool)1, (bool)1);
		__this->___WRN04STR_6 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN04STR_6), (void*)L_32);
		RuntimeObject* L_33;
		L_33 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		RuntimeObject* L_34 = __this->___WRN04STR_6;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, ((int32_t)361798934), L_34);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_35 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_35, NULL);
		V_2 = L_35;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_36 = V_2;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_37 = L_36;
		RuntimeObject* L_38;
		L_38 = SELECTTRICORDER_get_MY_m061D3D6D71D899BA76DBD4AE0048744643B0A9F0_inline(__this, NULL);
		NullCheck(L_37);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_37, L_38);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_39 = L_37;
		RuntimeObject* L_40;
		L_40 = SELECTTRICORDER_get_THERE_m4FFB4F854C49329342CB972A2CFA009932845881_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		RuntimeObject* L_41;
		L_41 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_41);
		RuntimeObject* L_42;
		L_42 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_43 = V_2;
		NullCheck(L_42);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_42, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_43);
		return (bool)0;
	}

IL_0184:
	{
		RuntimeObject* L_45;
		L_45 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_9 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_9), (void*)L_46);
		RuntimeObject* L_47 = __this->___WEAPONSEL_9;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)231), (1.0f));
		RuntimeObject* L_48;
		L_48 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_50;
		L_50 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)97), (RuntimeObject*)NULL);
		RuntimeObject* L_52;
		L_52 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)104), (RuntimeObject*)NULL);
		RuntimeObject* L_54;
		L_54 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)39), (RuntimeObject*)NULL);
		RuntimeObject* L_56;
		L_56 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)92), (RuntimeObject*)NULL);
		RuntimeObject* L_58;
		L_58 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_59);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, ((int32_t)40), (RuntimeObject*)NULL);
		RuntimeObject* L_60;
		L_60 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_60);
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)41), (RuntimeObject*)NULL);
		RuntimeObject* L_62;
		L_62 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_62);
		NullCheck(L_63);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_63, ((int32_t)42), (RuntimeObject*)NULL);
		RuntimeObject* L_64;
		L_64 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_64);
		NullCheck(L_65);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)43), (RuntimeObject*)NULL);
		RuntimeObject* L_66;
		L_66 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_66);
		NullCheck(L_67);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_67, ((int32_t)44), (RuntimeObject*)NULL);
	}

IL_026e:
	{
		float L_68;
		L_68 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_68;
		float L_69 = __this->___startTime1;
		float L_70;
		L_70 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_69, L_70));
		__this->____cursor = 1;
		goto IL_02a2;
	}

IL_0295:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_71 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTTRICORDER_set_Current_mF36A2B7EF562217134BEA6C3345700E6D7200316_inline(__this, L_71, NULL);
		return (bool)1;
	}

IL_02a2:
	{
		float L_72;
		L_72 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_73 = __this->___endTime1;
		if ((((float)L_72) < ((float)L_73)))
		{
			goto IL_0295;
		}
	}
	{
		SELECTTRICORDER_set_Current_mF36A2B7EF562217134BEA6C3345700E6D7200316_inline(__this, NULL, NULL);
		RuntimeObject* L_74;
		L_74 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_74, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_32 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_32), (void*)L_75);
		RuntimeObject* L_76 = __this->___GUNFIRING_32;
		NullCheck(L_76);
		float L_77;
		L_77 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)231), (bool)1);
		__this->___GUNFIRING_32_val = L_77;
		float L_78 = __this->___GUNFIRING_32_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_78, (0.0f), NULL);
		if (!L_79)
		{
			goto IL_026e;
		}
	}
	{
		RuntimeObject* L_80;
		L_80 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_80, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_34 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_34), (void*)L_81);
		RuntimeObject* L_82 = __this->___MY_GUN_34;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_83;
		L_83 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_82, (RuntimeObject*)NULL, NULL);
		if (L_83)
		{
			goto IL_0361;
		}
	}
	{
		RuntimeObject* L_84;
		L_84 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_84);
		RuntimeObject* L_85;
		L_85 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_84, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_37 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_37), (void*)L_85);
		RuntimeObject* L_86 = __this->___MY_GUN_37;
		NullCheck(L_86);
		float L_87;
		L_87 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)204), (bool)1);
		__this->___temp_38 = L_87;
		float L_88 = __this->___temp_38;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_89;
		L_89 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_88, (1.0f), NULL);
		if (!L_89)
		{
			goto IL_026e;
		}
	}

IL_0361:
	{
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_90 = (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A*)il2cpp_codegen_object_new(TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A_il2cpp_TypeInfo_var);
		TARGETOFF__ctor_mADB3318ADA9DFCAC4F053B73F0CE4BE26016FFC7(L_90, NULL);
		V_3 = L_90;
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_91 = V_3;
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_92 = L_91;
		RuntimeObject* L_93;
		L_93 = SELECTTRICORDER_get_MY_m061D3D6D71D899BA76DBD4AE0048744643B0A9F0_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_93);
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_94 = L_92;
		RuntimeObject* L_95;
		L_95 = SELECTTRICORDER_get_THERE_m4FFB4F854C49329342CB972A2CFA009932845881_inline(__this, NULL);
		NullCheck(L_94);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_94, L_95);
		RuntimeObject* L_96;
		L_96 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_94);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_94, L_96);
		RuntimeObject* L_97;
		L_97 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_98 = V_3;
		NullCheck(L_97);
		RuntimeObject* L_99;
		L_99 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_97, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_98);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_100 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_100, NULL);
		V_4 = L_100;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_101 = V_4;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_102 = L_101;
		RuntimeObject* L_103;
		L_103 = SELECTTRICORDER_get_MY_m061D3D6D71D899BA76DBD4AE0048744643B0A9F0_inline(__this, NULL);
		NullCheck(L_102);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_102, L_103);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_104 = L_102;
		RuntimeObject* L_105;
		L_105 = SELECTTRICORDER_get_THERE_m4FFB4F854C49329342CB972A2CFA009932845881_inline(__this, NULL);
		NullCheck(L_104);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_104, L_105);
		RuntimeObject* L_106;
		L_106 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_104);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_104, L_106);
		RuntimeObject* L_107;
		L_107 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_108 = V_4;
		NullCheck(L_107);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_107, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_108);
		RuntimeObject* L_110;
		L_110 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_110, 5, ((int32_t)380));
		__this->___MAP_MODE_40 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_40), (void*)L_111);
		RuntimeObject* L_112 = __this->___MAP_MODE_40;
		NullCheck(L_112);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_112, ((int32_t)231), (0.0f));
		RuntimeObject* L_113;
		L_113 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_113);
		RuntimeObject* L_114;
		L_114 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_113);
		NullCheck(L_114);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)158), (RuntimeObject*)NULL);
		RuntimeObject* L_115;
		L_115 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_115);
		RuntimeObject* L_116;
		L_116 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_115);
		NullCheck(L_116);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_116, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_117;
		L_117 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_117);
		RuntimeObject* L_118;
		L_118 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_117);
		NullCheck(L_118);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_118, ((int32_t)97), (RuntimeObject*)NULL);
		RuntimeObject* L_119;
		L_119 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_119);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_119, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_49 = L_120;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_49), (void*)L_120);
		RuntimeObject* L_121 = __this->___MY_GUN_49;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_122;
		L_122 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_121, (RuntimeObject*)NULL, NULL);
		if (L_122)
		{
			goto IL_0556;
		}
	}
	{
		RuntimeObject* L_123;
		L_123 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_123);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_123, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_52 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_52), (void*)L_124);
		RuntimeObject* L_125 = __this->___MY_GUN_52;
		NullCheck(L_125);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_125, ((int32_t)204), (0.0f));
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_126 = (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2*)il2cpp_codegen_object_new(LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var);
		LOWER__ctor_m2CCAB60402636B5DDB62FD9BD5FF9D7F3EEBBE55(L_126, NULL);
		V_5 = L_126;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_127 = V_5;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_128 = L_127;
		RuntimeObject* L_129;
		L_129 = SELECTTRICORDER_get_MY_m061D3D6D71D899BA76DBD4AE0048744643B0A9F0_inline(__this, NULL);
		NullCheck(L_128);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_128, L_129);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_130 = L_128;
		RuntimeObject* L_131;
		L_131 = SELECTTRICORDER_get_THERE_m4FFB4F854C49329342CB972A2CFA009932845881_inline(__this, NULL);
		NullCheck(L_130);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_130, L_131);
		RuntimeObject* L_132;
		L_132 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_130);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_130, L_132);
		RuntimeObject* L_133;
		L_133 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_134 = V_5;
		NullCheck(L_133);
		RuntimeObject* L_135;
		L_135 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_133, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_134);
	}

IL_04cb:
	{
		float L_136;
		L_136 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_136;
		float L_137 = __this->___startTime2;
		float L_138;
		L_138 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(8, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_137, L_138));
		__this->____cursor = 2;
		goto IL_04ff;
	}

IL_04f2:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_139 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTTRICORDER_set_Current_mF36A2B7EF562217134BEA6C3345700E6D7200316_inline(__this, L_139, NULL);
		return (bool)1;
	}

IL_04ff:
	{
		float L_140;
		L_140 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_141 = __this->___endTime2;
		if ((((float)L_140) < ((float)L_141)))
		{
			goto IL_04f2;
		}
	}
	{
		SELECTTRICORDER_set_Current_mF36A2B7EF562217134BEA6C3345700E6D7200316_inline(__this, NULL, NULL);
		RuntimeObject* L_142;
		L_142 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_142);
		RuntimeObject* L_143;
		L_143 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_142, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_56 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_56), (void*)L_143);
		RuntimeObject* L_144 = __this->___MY_GUN_56;
		NullCheck(L_144);
		float L_145;
		L_145 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_144, ((int32_t)204), (bool)1);
		__this->___temp_57 = L_145;
		float L_146 = __this->___temp_57;
		bool L_147;
		L_147 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_146, (1.0f), NULL);
		if (L_147)
		{
			goto IL_04cb;
		}
	}

IL_0556:
	{
		RuntimeObject* L_148;
		L_148 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_148);
		RuntimeObject* L_149;
		L_149 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_148);
		NullCheck(L_149);
		RuntimeObject* L_150;
		L_150 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_149, ((int32_t)175205335), (bool)1, (bool)1);
		__this->___TRICACT_58 = L_150;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TRICACT_58), (void*)L_150);
		RuntimeObject* L_151;
		L_151 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		RuntimeObject* L_152 = __this->___TRICACT_58;
		NullCheck(L_151);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_151, ((int32_t)-1040443588), L_152);
		RuntimeObject* L_153;
		L_153 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_153);
		RuntimeObject* L_154;
		L_154 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_153, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_62 = L_154;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_62), (void*)L_154);
		RuntimeObject* L_155 = __this->___MY_GUN_62;
		NullCheck(L_155);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_155, ((int32_t)204), (0.0f));
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_156 = (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8*)il2cpp_codegen_object_new(RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		RAISE__ctor_mC9CDF6F146498172B72D6E63718BA1D065CC3E95(L_156, NULL);
		V_6 = L_156;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_157 = V_6;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_158 = L_157;
		RuntimeObject* L_159;
		L_159 = SELECTTRICORDER_get_MY_m061D3D6D71D899BA76DBD4AE0048744643B0A9F0_inline(__this, NULL);
		NullCheck(L_158);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_158, L_159);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_160 = L_158;
		RuntimeObject* L_161;
		L_161 = SELECTTRICORDER_get_THERE_m4FFB4F854C49329342CB972A2CFA009932845881_inline(__this, NULL);
		NullCheck(L_160);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_160, L_161);
		RuntimeObject* L_162;
		L_162 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_160);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_160, L_162);
		RuntimeObject* L_163;
		L_163 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_164 = V_6;
		NullCheck(L_163);
		RuntimeObject* L_165;
		L_165 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_163, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_164);
	}

IL_05f0:
	{
		float L_166;
		L_166 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_166;
		float L_167 = __this->___startTime3;
		float L_168;
		L_168 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_167, L_168));
		__this->____cursor = 3;
		goto IL_0624;
	}

IL_0617:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_169 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTTRICORDER_set_Current_mF36A2B7EF562217134BEA6C3345700E6D7200316_inline(__this, L_169, NULL);
		return (bool)1;
	}

IL_0624:
	{
		float L_170;
		L_170 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_171 = __this->___endTime3;
		if ((((float)L_170) < ((float)L_171)))
		{
			goto IL_0617;
		}
	}
	{
		SELECTTRICORDER_set_Current_mF36A2B7EF562217134BEA6C3345700E6D7200316_inline(__this, NULL, NULL);
		RuntimeObject* L_172;
		L_172 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_172);
		RuntimeObject* L_173;
		L_173 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_172, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_66 = L_173;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_66), (void*)L_173);
		RuntimeObject* L_174 = __this->___MY_GUN_66;
		NullCheck(L_174);
		float L_175;
		L_175 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_174, ((int32_t)204), (bool)1);
		__this->___temp_67 = L_175;
		float L_176 = __this->___temp_67;
		bool L_177;
		L_177 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_176, (1.0f), NULL);
		if (L_177)
		{
			goto IL_05f0;
		}
	}
	{
		RuntimeObject* L_178;
		L_178 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_178);
		RuntimeObject* L_179;
		L_179 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_178);
		NullCheck(L_179);
		RuntimeObject* L_180;
		L_180 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_179, ((int32_t)1798154821), (bool)1, (bool)1);
		__this->___TRIC01SND_68 = L_180;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TRIC01SND_68), (void*)L_180);
		RuntimeObject* L_181;
		L_181 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		RuntimeObject* L_182 = __this->___TRIC01SND_68;
		NullCheck(L_181);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_181, L_182, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_183;
		L_183 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_183);
		RuntimeObject* L_184;
		L_184 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_183, 5, ((int32_t)381));
		__this->___MAP_LAYER_71 = L_184;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_LAYER_71), (void*)L_184);
		RuntimeObject* L_185 = __this->___MAP_LAYER_71;
		NullCheck(L_185);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_185, ((int32_t)231), (14.0f));
		RuntimeObject* L_186;
		L_186 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_186);
		RuntimeObject* L_187;
		L_187 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_186, 5, ((int32_t)375));
		__this->___MAP_EDGE_X1_73 = L_187;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_EDGE_X1_73), (void*)L_187);
		RuntimeObject* L_188 = __this->___MAP_EDGE_X1_73;
		NullCheck(L_188);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_188, ((int32_t)231), (77.0f));
		RuntimeObject* L_189;
		L_189 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_189);
		RuntimeObject* L_190;
		L_190 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_189, 5, ((int32_t)376));
		__this->___MAP_EDGE_X2_75 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_EDGE_X2_75), (void*)L_190);
		RuntimeObject* L_191 = __this->___MAP_EDGE_X2_75;
		NullCheck(L_191);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_191, ((int32_t)231), (237.0f));
		RuntimeObject* L_192;
		L_192 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_192);
		RuntimeObject* L_193;
		L_193 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_192, 5, ((int32_t)377));
		__this->___MAP_EDGE_Y1_77 = L_193;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_EDGE_Y1_77), (void*)L_193);
		RuntimeObject* L_194 = __this->___MAP_EDGE_Y1_77;
		NullCheck(L_194);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_194, ((int32_t)231), (69.0f));
		RuntimeObject* L_195;
		L_195 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_195);
		RuntimeObject* L_196;
		L_196 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_195, 5, ((int32_t)378));
		__this->___MAP_EDGE_Y2_79 = L_196;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_EDGE_Y2_79), (void*)L_196);
		RuntimeObject* L_197 = __this->___MAP_EDGE_Y2_79;
		NullCheck(L_197);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_197, ((int32_t)231), (251.0f));
		RuntimeObject* L_198;
		L_198 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_198);
		RuntimeObject* L_199;
		L_199 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_198, 5, ((int32_t)361));
		__this->___RENDER_MODE_81 = L_199;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RENDER_MODE_81), (void*)L_199);
		RuntimeObject* L_200 = __this->___RENDER_MODE_81;
		NullCheck(L_200);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_200, ((int32_t)231), (1.0f));
		RuntimeObject* L_201;
		L_201 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_201);
		RuntimeObject* L_202;
		L_202 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_201, 5, ((int32_t)380));
		__this->___MAP_MODE_83 = L_202;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_83), (void*)L_202);
		RuntimeObject* L_203 = __this->___MAP_MODE_83;
		NullCheck(L_203);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_203, ((int32_t)231), (0.5f));
		RuntimeObject* L_204;
		L_204 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_204);
		RuntimeObject* L_205;
		L_205 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_204);
		NullCheck(L_205);
		RuntimeObject* L_206;
		L_206 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_205, ((int32_t)1798150737), (bool)1, (bool)1);
		__this->___TRIC01OVL_84 = L_206;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TRIC01OVL_84), (void*)L_206);
		RuntimeObject* L_207;
		L_207 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_207);
		RuntimeObject* L_208;
		L_208 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_207);
		RuntimeObject* L_209 = __this->___TRIC01OVL_84;
		NullCheck(L_208);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_208, ((int32_t)158), L_209);
		RuntimeObject* L_210;
		L_210 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_210);
		RuntimeObject* L_211;
		L_211 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_210);
		NullCheck(L_211);
		RuntimeObject* L_212;
		L_212 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_211, ((int32_t)-109360261), (bool)1, (bool)1);
		__this->___SELECTTRICORDER_87 = L_212;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTTRICORDER_87), (void*)L_212);
		RuntimeObject* L_213;
		L_213 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_213);
		RuntimeObject* L_214;
		L_214 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_213);
		RuntimeObject* L_215 = __this->___SELECTTRICORDER_87;
		NullCheck(L_214);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_214, ((int32_t)104), L_215);
		RuntimeObject* L_216;
		L_216 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_216);
		RuntimeObject* L_217;
		L_217 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_216);
		NullCheck(L_217);
		RuntimeObject* L_218;
		L_218 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_217, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_89 = L_218;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_89), (void*)L_218);
		RuntimeObject* L_219;
		L_219 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_219);
		RuntimeObject* L_220;
		L_220 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_219);
		RuntimeObject* L_221 = __this->___SELECTNONE_89;
		NullCheck(L_220);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_220, ((int32_t)39), L_221);
		RuntimeObject* L_222;
		L_222 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_222);
		RuntimeObject* L_223;
		L_223 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_222);
		NullCheck(L_223);
		RuntimeObject* L_224;
		L_224 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_223, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_91 = L_224;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_91), (void*)L_224);
		RuntimeObject* L_225;
		L_225 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_225);
		RuntimeObject* L_226;
		L_226 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_225);
		RuntimeObject* L_227 = __this->___SELECTNONE_91;
		NullCheck(L_226);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_226, ((int32_t)92), L_227);
		RuntimeObject* L_228;
		L_228 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_228);
		RuntimeObject* L_229;
		L_229 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_228);
		NullCheck(L_229);
		RuntimeObject* L_230;
		L_230 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_229, ((int32_t)-463643937), (bool)1, (bool)1);
		__this->___SELECTMP5_93 = L_230;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5_93), (void*)L_230);
		RuntimeObject* L_231;
		L_231 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_231);
		RuntimeObject* L_232;
		L_232 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_231);
		RuntimeObject* L_233 = __this->___SELECTMP5_93;
		NullCheck(L_232);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_232, ((int32_t)40), L_233);
		RuntimeObject* L_234;
		L_234 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_234);
		RuntimeObject* L_235;
		L_235 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_234);
		NullCheck(L_235);
		RuntimeObject* L_236;
		L_236 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_235, ((int32_t)120038031), (bool)1, (bool)1);
		__this->___SELECTMP5BURST_95 = L_236;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5BURST_95), (void*)L_236);
		RuntimeObject* L_237;
		L_237 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_237);
		RuntimeObject* L_238;
		L_238 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_237);
		RuntimeObject* L_239 = __this->___SELECTMP5BURST_95;
		NullCheck(L_238);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_238, ((int32_t)41), L_239);
		RuntimeObject* L_240;
		L_240 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_240);
		RuntimeObject* L_241;
		L_241 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_240);
		NullCheck(L_241);
		RuntimeObject* L_242;
		L_242 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_241, ((int32_t)677375039), (bool)1, (bool)1);
		__this->___SELECTGRANADE_97 = L_242;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTGRANADE_97), (void*)L_242);
		RuntimeObject* L_243;
		L_243 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_243);
		RuntimeObject* L_244;
		L_244 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_243);
		RuntimeObject* L_245 = __this->___SELECTGRANADE_97;
		NullCheck(L_244);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_244, ((int32_t)42), L_245);
		RuntimeObject* L_246;
		L_246 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_246);
		RuntimeObject* L_247;
		L_247 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_246);
		NullCheck(L_247);
		RuntimeObject* L_248;
		L_248 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_247, ((int32_t)-917113783), (bool)1, (bool)1);
		__this->___SELECTSTINGER_99 = L_248;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTSTINGER_99), (void*)L_248);
		RuntimeObject* L_249;
		L_249 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_249);
		RuntimeObject* L_250;
		L_250 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_249);
		RuntimeObject* L_251 = __this->___SELECTSTINGER_99;
		NullCheck(L_250);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_250, ((int32_t)43), L_251);
		RuntimeObject* L_252;
		L_252 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_252);
		RuntimeObject* L_253;
		L_253 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_252);
		NullCheck(L_253);
		RuntimeObject* L_254;
		L_254 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_253, ((int32_t)824580280), (bool)1, (bool)1);
		__this->___SELECTQUANTUM_101 = L_254;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTQUANTUM_101), (void*)L_254);
		RuntimeObject* L_255;
		L_255 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_255);
		RuntimeObject* L_256;
		L_256 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_255);
		RuntimeObject* L_257 = __this->___SELECTQUANTUM_101;
		NullCheck(L_256);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_256, ((int32_t)44), L_257);
		RuntimeObject* L_258;
		L_258 = SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline(__this, NULL);
		NullCheck(L_258);
		RuntimeObject* L_259;
		L_259 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_258, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_104 = L_259;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_104), (void*)L_259);
		RuntimeObject* L_260 = __this->___GUN_ON_104;
		NullCheck(L_260);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_260, ((int32_t)231), (1.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5_get_MY_mF9E049B68DBCBE24FC4B43B51D215D1839B76379 (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5_set_MY_mDADE4F36B543CEE54AA51BC938EB0A2D3FA88ACE (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5_get_THERE_m15454977AD7D506A483B27228D4A10DE9C2A3306 (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5_set_THERE_mF6C3438B048701EEE0358F4D4359836ACC926761 (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5_set__world_m0F6CF39E3F7D4C97232CBE58E9EC8415653429DF (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5_get_Current_mD17C261A58E471660699BDF4629F11EE45AE6B5B (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5_set_Current_mB7F1042D6A117F1125AC9AE5007D6BD56EA11AFC (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5_Reset_m5A490B190C6D605CEEF31E3A53529D94E2E01679 (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5__ctor_m1388168523BC50D9479F152A3096612F887E5F46 (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5__ctor_m08D3FEFD10CCC338154B35848A767D0867897A7C (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SELECTMP5_set_MY_mDADE4F36B543CEE54AA51BC938EB0A2D3FA88ACE_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SELECTMP5_set_THERE_mF6C3438B048701EEE0358F4D4359836ACC926761_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SELECTMP5_set__world_m0F6CF39E3F7D4C97232CBE58E9EC8415653429DF_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SELECTMP5_MoveNext_m787B19D2B5DCFA2D620D7F67AEBE3CDAE4BFEB83 (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_1 = NULL;
	TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* V_2 = NULL;
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_3 = NULL;
	LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* V_4 = NULL;
	RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* V_5 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_0245;
			}
			case 1:
			{
				goto IL_0479;
			}
			case 2:
			{
				goto IL_059e;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_2, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_1), (void*)L_3);
		RuntimeObject* L_4 = __this->___PLAYER_HEALTH_1;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_1_val = L_5;
		float L_6 = __this->___PLAYER_HEALTH_1_val;
		bool L_7;
		L_7 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_6, (0.100000001f), NULL);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		RuntimeObject* L_8;
		L_8 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_3), (void*)L_9);
		RuntimeObject* L_10 = __this->___WEAPONSEL_3;
		NullCheck(L_10);
		float L_11;
		L_11 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), (bool)1);
		__this->___WEAPONSEL_3_val = L_11;
		float L_12 = __this->___WEAPONSEL_3_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_12, (2.0f), NULL);
		if (L_13)
		{
			goto IL_014d;
		}
	}
	{
		RuntimeObject* L_14;
		L_14 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, 5, ((int32_t)1205036122));
		__this->___HAS_MP5_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_MP5_5), (void*)L_15);
		RuntimeObject* L_16 = __this->___HAS_MP5_5;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)231), (bool)1);
		__this->___HAS_MP5_5_val = L_17;
		float L_18 = __this->___HAS_MP5_5_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_18, (0.0f), NULL);
		if (!L_19)
		{
			goto IL_014d;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)665745664), (bool)1, (bool)1);
		__this->___WRN03STR_6 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN03STR_6), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		RuntimeObject* L_24 = __this->___WRN03STR_6;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, ((int32_t)361798934), L_24);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_25 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_25, NULL);
		V_1 = L_25;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_26 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_27 = L_26;
		RuntimeObject* L_28;
		L_28 = SELECTMP5_get_MY_mF9E049B68DBCBE24FC4B43B51D215D1839B76379_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_28);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_29 = L_27;
		RuntimeObject* L_30;
		L_30 = SELECTMP5_get_THERE_m15454977AD7D506A483B27228D4A10DE9C2A3306_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		RuntimeObject* L_31;
		L_31 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_31);
		RuntimeObject* L_32;
		L_32 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_33 = V_1;
		NullCheck(L_32);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_33);
		return (bool)0;
	}

IL_014d:
	{
		RuntimeObject* L_35;
		L_35 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_9 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_9), (void*)L_36);
		RuntimeObject* L_37 = __this->___WEAPONSEL_9;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (2.0f));
		RuntimeObject* L_38;
		L_38 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_40;
		L_40 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)97), (RuntimeObject*)NULL);
		RuntimeObject* L_42;
		L_42 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)104), (RuntimeObject*)NULL);
		RuntimeObject* L_44;
		L_44 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)39), (RuntimeObject*)NULL);
		RuntimeObject* L_46;
		L_46 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)92), (RuntimeObject*)NULL);
		RuntimeObject* L_48;
		L_48 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)42), (RuntimeObject*)NULL);
		RuntimeObject* L_50;
		L_50 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)43), (RuntimeObject*)NULL);
		RuntimeObject* L_52;
		L_52 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)44), (RuntimeObject*)NULL);
	}

IL_0211:
	{
		float L_54;
		L_54 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_54;
		float L_55 = __this->___startTime1;
		float L_56;
		L_56 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_55, L_56));
		__this->____cursor = 1;
		goto IL_0245;
	}

IL_0238:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_57 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTMP5_set_Current_mB7F1042D6A117F1125AC9AE5007D6BD56EA11AFC_inline(__this, L_57, NULL);
		return (bool)1;
	}

IL_0245:
	{
		float L_58;
		L_58 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_59 = __this->___endTime1;
		if ((((float)L_58) < ((float)L_59)))
		{
			goto IL_0238;
		}
	}
	{
		SELECTMP5_set_Current_mB7F1042D6A117F1125AC9AE5007D6BD56EA11AFC_inline(__this, NULL, NULL);
		RuntimeObject* L_60;
		L_60 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_60, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_28 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_28), (void*)L_61);
		RuntimeObject* L_62 = __this->___GUNFIRING_28;
		NullCheck(L_62);
		float L_63;
		L_63 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)231), (bool)1);
		__this->___GUNFIRING_28_val = L_63;
		float L_64 = __this->___GUNFIRING_28_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_65;
		L_65 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_64, (0.0f), NULL);
		if (!L_65)
		{
			goto IL_0211;
		}
	}
	{
		RuntimeObject* L_66;
		L_66 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_30 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_30), (void*)L_67);
		RuntimeObject* L_68 = __this->___MY_GUN_30;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_68, (RuntimeObject*)NULL, NULL);
		if (L_69)
		{
			goto IL_0304;
		}
	}
	{
		RuntimeObject* L_70;
		L_70 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_70, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_33 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_33), (void*)L_71);
		RuntimeObject* L_72 = __this->___MY_GUN_33;
		NullCheck(L_72);
		float L_73;
		L_73 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)204), (bool)1);
		__this->___temp_34 = L_73;
		float L_74 = __this->___temp_34;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_74, (1.0f), NULL);
		if (!L_75)
		{
			goto IL_0211;
		}
	}

IL_0304:
	{
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_76 = (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33*)il2cpp_codegen_object_new(TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33_il2cpp_TypeInfo_var);
		TARGETON__ctor_m515D11DEBB4E550106AF681B3007629ABBCD5FAA(L_76, NULL);
		V_2 = L_76;
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_77 = V_2;
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_78 = L_77;
		RuntimeObject* L_79;
		L_79 = SELECTMP5_get_MY_mF9E049B68DBCBE24FC4B43B51D215D1839B76379_inline(__this, NULL);
		NullCheck(L_78);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_78, L_79);
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_80 = L_78;
		RuntimeObject* L_81;
		L_81 = SELECTMP5_get_THERE_m15454977AD7D506A483B27228D4A10DE9C2A3306_inline(__this, NULL);
		NullCheck(L_80);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_80, L_81);
		RuntimeObject* L_82;
		L_82 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_80);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_80, L_82);
		RuntimeObject* L_83;
		L_83 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_84 = V_2;
		NullCheck(L_83);
		RuntimeObject* L_85;
		L_85 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_83, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_84);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_86 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_86, NULL);
		V_3 = L_86;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_87 = V_3;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_88 = L_87;
		RuntimeObject* L_89;
		L_89 = SELECTMP5_get_MY_mF9E049B68DBCBE24FC4B43B51D215D1839B76379_inline(__this, NULL);
		NullCheck(L_88);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_88, L_89);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_90 = L_88;
		RuntimeObject* L_91;
		L_91 = SELECTMP5_get_THERE_m15454977AD7D506A483B27228D4A10DE9C2A3306_inline(__this, NULL);
		NullCheck(L_90);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_90, L_91);
		RuntimeObject* L_92;
		L_92 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_90);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_90, L_92);
		RuntimeObject* L_93;
		L_93 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_94 = V_3;
		NullCheck(L_93);
		RuntimeObject* L_95;
		L_95 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_93, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_94);
		RuntimeObject* L_96;
		L_96 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_96, 5, ((int32_t)380));
		__this->___MAP_MODE_36 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_36), (void*)L_97);
		RuntimeObject* L_98 = __this->___MAP_MODE_36;
		NullCheck(L_98);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_98, ((int32_t)231), (0.0f));
		RuntimeObject* L_99;
		L_99 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_99);
		RuntimeObject* L_100;
		L_100 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_99);
		NullCheck(L_100);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)158), (RuntimeObject*)NULL);
		RuntimeObject* L_101;
		L_101 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_101);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_101, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_41 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_41), (void*)L_102);
		RuntimeObject* L_103 = __this->___MY_GUN_41;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_104;
		L_104 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_103, (RuntimeObject*)NULL, NULL);
		if (L_104)
		{
			goto IL_04d0;
		}
	}
	{
		RuntimeObject* L_105;
		L_105 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_105, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_44 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_44), (void*)L_106);
		RuntimeObject* L_107 = __this->___MY_GUN_44;
		NullCheck(L_107);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)204), (0.0f));
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_108 = (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2*)il2cpp_codegen_object_new(LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var);
		LOWER__ctor_m2CCAB60402636B5DDB62FD9BD5FF9D7F3EEBBE55(L_108, NULL);
		V_4 = L_108;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_109 = V_4;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_110 = L_109;
		RuntimeObject* L_111;
		L_111 = SELECTMP5_get_MY_mF9E049B68DBCBE24FC4B43B51D215D1839B76379_inline(__this, NULL);
		NullCheck(L_110);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_110, L_111);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_112 = L_110;
		RuntimeObject* L_113;
		L_113 = SELECTMP5_get_THERE_m15454977AD7D506A483B27228D4A10DE9C2A3306_inline(__this, NULL);
		NullCheck(L_112);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_112, L_113);
		RuntimeObject* L_114;
		L_114 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_112);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_112, L_114);
		RuntimeObject* L_115;
		L_115 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_116 = V_4;
		NullCheck(L_115);
		RuntimeObject* L_117;
		L_117 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_115, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_116);
	}

IL_0445:
	{
		float L_118;
		L_118 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_118;
		float L_119 = __this->___startTime2;
		float L_120;
		L_120 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(8, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_119, L_120));
		__this->____cursor = 2;
		goto IL_0479;
	}

IL_046c:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_121 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTMP5_set_Current_mB7F1042D6A117F1125AC9AE5007D6BD56EA11AFC_inline(__this, L_121, NULL);
		return (bool)1;
	}

IL_0479:
	{
		float L_122;
		L_122 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_123 = __this->___endTime2;
		if ((((float)L_122) < ((float)L_123)))
		{
			goto IL_046c;
		}
	}
	{
		SELECTMP5_set_Current_mB7F1042D6A117F1125AC9AE5007D6BD56EA11AFC_inline(__this, NULL, NULL);
		RuntimeObject* L_124;
		L_124 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_124);
		RuntimeObject* L_125;
		L_125 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_124, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_48 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_48), (void*)L_125);
		RuntimeObject* L_126 = __this->___MY_GUN_48;
		NullCheck(L_126);
		float L_127;
		L_127 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_126, ((int32_t)204), (bool)1);
		__this->___temp_49 = L_127;
		float L_128 = __this->___temp_49;
		bool L_129;
		L_129 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_128, (1.0f), NULL);
		if (L_129)
		{
			goto IL_0445;
		}
	}

IL_04d0:
	{
		RuntimeObject* L_130;
		L_130 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_130);
		RuntimeObject* L_131;
		L_131 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_130);
		NullCheck(L_131);
		RuntimeObject* L_132;
		L_132 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_131, ((int32_t)-1052633353), (bool)1, (bool)1);
		__this->___MP5ACT_50 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5ACT_50), (void*)L_132);
		RuntimeObject* L_133;
		L_133 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		RuntimeObject* L_134 = __this->___MP5ACT_50;
		NullCheck(L_133);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_133, ((int32_t)-1040443588), L_134);
		RuntimeObject* L_135;
		L_135 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_135);
		RuntimeObject* L_136;
		L_136 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_135, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_54 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_54), (void*)L_136);
		RuntimeObject* L_137 = __this->___MY_GUN_54;
		NullCheck(L_137);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_137, ((int32_t)204), (0.0f));
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_138 = (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8*)il2cpp_codegen_object_new(RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		RAISE__ctor_mC9CDF6F146498172B72D6E63718BA1D065CC3E95(L_138, NULL);
		V_5 = L_138;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_139 = V_5;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_140 = L_139;
		RuntimeObject* L_141;
		L_141 = SELECTMP5_get_MY_mF9E049B68DBCBE24FC4B43B51D215D1839B76379_inline(__this, NULL);
		NullCheck(L_140);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_140, L_141);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_142 = L_140;
		RuntimeObject* L_143;
		L_143 = SELECTMP5_get_THERE_m15454977AD7D506A483B27228D4A10DE9C2A3306_inline(__this, NULL);
		NullCheck(L_142);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_142, L_143);
		RuntimeObject* L_144;
		L_144 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_142);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_142, L_144);
		RuntimeObject* L_145;
		L_145 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_146 = V_5;
		NullCheck(L_145);
		RuntimeObject* L_147;
		L_147 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_145, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_146);
	}

IL_056a:
	{
		float L_148;
		L_148 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_148;
		float L_149 = __this->___startTime3;
		float L_150;
		L_150 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_149, L_150));
		__this->____cursor = 3;
		goto IL_059e;
	}

IL_0591:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_151 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTMP5_set_Current_mB7F1042D6A117F1125AC9AE5007D6BD56EA11AFC_inline(__this, L_151, NULL);
		return (bool)1;
	}

IL_059e:
	{
		float L_152;
		L_152 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_153 = __this->___endTime3;
		if ((((float)L_152) < ((float)L_153)))
		{
			goto IL_0591;
		}
	}
	{
		SELECTMP5_set_Current_mB7F1042D6A117F1125AC9AE5007D6BD56EA11AFC_inline(__this, NULL, NULL);
		RuntimeObject* L_154;
		L_154 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_154);
		RuntimeObject* L_155;
		L_155 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_154, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_58 = L_155;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_58), (void*)L_155);
		RuntimeObject* L_156 = __this->___MY_GUN_58;
		NullCheck(L_156);
		float L_157;
		L_157 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_156, ((int32_t)204), (bool)1);
		__this->___temp_59 = L_157;
		float L_158 = __this->___temp_59;
		bool L_159;
		L_159 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_158, (1.0f), NULL);
		if (L_159)
		{
			goto IL_056a;
		}
	}
	{
		RuntimeObject* L_160;
		L_160 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_160);
		RuntimeObject* L_161;
		L_161 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_160);
		NullCheck(L_161);
		RuntimeObject* L_162;
		L_162 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_161, ((int32_t)-1593406448), (bool)1, (bool)1);
		__this->___MP5_01OVL_60 = L_162;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_01OVL_60), (void*)L_162);
		RuntimeObject* L_163;
		L_163 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_163);
		RuntimeObject* L_164;
		L_164 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_163);
		RuntimeObject* L_165 = __this->___MP5_01OVL_60;
		NullCheck(L_164);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_164, ((int32_t)158), L_165);
		RuntimeObject* L_166;
		L_166 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_166);
		RuntimeObject* L_167;
		L_167 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_166, 5, ((int32_t)361));
		__this->___RENDER_MODE_64 = L_167;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RENDER_MODE_64), (void*)L_167);
		RuntimeObject* L_168 = __this->___RENDER_MODE_64;
		NullCheck(L_168);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_168, ((int32_t)231), (1.0f));
		RuntimeObject* L_169;
		L_169 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_169);
		RuntimeObject* L_170;
		L_170 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_169);
		NullCheck(L_170);
		RuntimeObject* L_171;
		L_171 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_170, ((int32_t)2089072467), (bool)1, (bool)1);
		__this->___FIRE_65 = L_171;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FIRE_65), (void*)L_171);
		RuntimeObject* L_172;
		L_172 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_172);
		RuntimeObject* L_173;
		L_173 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_172);
		RuntimeObject* L_174 = __this->___FIRE_65;
		NullCheck(L_173);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_173, ((int32_t)78), L_174);
		RuntimeObject* L_175;
		L_175 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_175);
		RuntimeObject* L_176;
		L_176 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_175);
		NullCheck(L_176);
		RuntimeObject* L_177;
		L_177 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_176, ((int32_t)2089072467), (bool)1, (bool)1);
		__this->___FIRE_67 = L_177;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FIRE_67), (void*)L_177);
		RuntimeObject* L_178;
		L_178 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_178);
		RuntimeObject* L_179;
		L_179 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_178);
		RuntimeObject* L_180 = __this->___FIRE_67;
		NullCheck(L_179);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_179, ((int32_t)97), L_180);
		RuntimeObject* L_181;
		L_181 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_181);
		RuntimeObject* L_182;
		L_182 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_181, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_70 = L_182;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_70), (void*)L_182);
		RuntimeObject* L_183 = __this->___GUN_ON_70;
		NullCheck(L_183);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_183, ((int32_t)231), (1.0f));
		RuntimeObject* L_184;
		L_184 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_184);
		RuntimeObject* L_185;
		L_185 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_184);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_185, ((int32_t)-535041724), (bool)1, (bool)1);
		__this->___MP_501SND_71 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP_501SND_71), (void*)L_186);
		RuntimeObject* L_187;
		L_187 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		RuntimeObject* L_188 = __this->___MP_501SND_71;
		NullCheck(L_187);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_187, L_188, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_189;
		L_189 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_189);
		RuntimeObject* L_190;
		L_190 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_189);
		NullCheck(L_190);
		RuntimeObject* L_191;
		L_191 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_190, ((int32_t)-109360261), (bool)1, (bool)1);
		__this->___SELECTTRICORDER_73 = L_191;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTTRICORDER_73), (void*)L_191);
		RuntimeObject* L_192;
		L_192 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_192);
		RuntimeObject* L_193;
		L_193 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_192);
		RuntimeObject* L_194 = __this->___SELECTTRICORDER_73;
		NullCheck(L_193);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_193, ((int32_t)104), L_194);
		RuntimeObject* L_195;
		L_195 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_195);
		RuntimeObject* L_196;
		L_196 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_195);
		NullCheck(L_196);
		RuntimeObject* L_197;
		L_197 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_196, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_75 = L_197;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_75), (void*)L_197);
		RuntimeObject* L_198;
		L_198 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_198);
		RuntimeObject* L_199;
		L_199 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_198);
		RuntimeObject* L_200 = __this->___SELECTNONE_75;
		NullCheck(L_199);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_199, ((int32_t)39), L_200);
		RuntimeObject* L_201;
		L_201 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_201);
		RuntimeObject* L_202;
		L_202 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_201);
		NullCheck(L_202);
		RuntimeObject* L_203;
		L_203 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_202, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_77 = L_203;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_77), (void*)L_203);
		RuntimeObject* L_204;
		L_204 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_204);
		RuntimeObject* L_205;
		L_205 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_204);
		RuntimeObject* L_206 = __this->___SELECTNONE_77;
		NullCheck(L_205);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_205, ((int32_t)92), L_206);
		RuntimeObject* L_207;
		L_207 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_207);
		RuntimeObject* L_208;
		L_208 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_207);
		NullCheck(L_208);
		RuntimeObject* L_209;
		L_209 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_208, ((int32_t)-463643937), (bool)1, (bool)1);
		__this->___SELECTMP5_79 = L_209;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5_79), (void*)L_209);
		RuntimeObject* L_210;
		L_210 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_210);
		RuntimeObject* L_211;
		L_211 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_210);
		RuntimeObject* L_212 = __this->___SELECTMP5_79;
		NullCheck(L_211);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_211, ((int32_t)40), L_212);
		RuntimeObject* L_213;
		L_213 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_213);
		RuntimeObject* L_214;
		L_214 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_213);
		NullCheck(L_214);
		RuntimeObject* L_215;
		L_215 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_214, ((int32_t)120038031), (bool)1, (bool)1);
		__this->___SELECTMP5BURST_81 = L_215;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5BURST_81), (void*)L_215);
		RuntimeObject* L_216;
		L_216 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_216);
		RuntimeObject* L_217;
		L_217 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_216);
		RuntimeObject* L_218 = __this->___SELECTMP5BURST_81;
		NullCheck(L_217);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_217, ((int32_t)41), L_218);
		RuntimeObject* L_219;
		L_219 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_219);
		RuntimeObject* L_220;
		L_220 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_219);
		NullCheck(L_220);
		RuntimeObject* L_221;
		L_221 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_220, ((int32_t)677375039), (bool)1, (bool)1);
		__this->___SELECTGRANADE_83 = L_221;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTGRANADE_83), (void*)L_221);
		RuntimeObject* L_222;
		L_222 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_222);
		RuntimeObject* L_223;
		L_223 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_222);
		RuntimeObject* L_224 = __this->___SELECTGRANADE_83;
		NullCheck(L_223);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_223, ((int32_t)42), L_224);
		RuntimeObject* L_225;
		L_225 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_225);
		RuntimeObject* L_226;
		L_226 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_225);
		NullCheck(L_226);
		RuntimeObject* L_227;
		L_227 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_226, ((int32_t)-917113783), (bool)1, (bool)1);
		__this->___SELECTSTINGER_85 = L_227;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTSTINGER_85), (void*)L_227);
		RuntimeObject* L_228;
		L_228 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_228);
		RuntimeObject* L_229;
		L_229 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_228);
		RuntimeObject* L_230 = __this->___SELECTSTINGER_85;
		NullCheck(L_229);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_229, ((int32_t)43), L_230);
		RuntimeObject* L_231;
		L_231 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_231);
		RuntimeObject* L_232;
		L_232 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_231);
		NullCheck(L_232);
		RuntimeObject* L_233;
		L_233 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_232, ((int32_t)824580280), (bool)1, (bool)1);
		__this->___SELECTQUANTUM_87 = L_233;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTQUANTUM_87), (void*)L_233);
		RuntimeObject* L_234;
		L_234 = SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline(__this, NULL);
		NullCheck(L_234);
		RuntimeObject* L_235;
		L_235 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_234);
		RuntimeObject* L_236 = __this->___SELECTQUANTUM_87;
		NullCheck(L_235);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_235, ((int32_t)44), L_236);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5BURST_get_MY_m48AA4A18FCD5E7EC078F51B11DCE90C3D61DD83C (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5BURST_set_MY_m128526268F2C855C27EE79F6A11326FA5BB9DC6D (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5BURST_get_THERE_m1E2B18950A2CE5423E77A6F78FB64F737D91F830 (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5BURST_set_THERE_mAD1CE7DD91A57AD7484FAB3C28FBBD44FEC305F1 (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141 (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5BURST_set__world_m8C45F43CE319C1B891B4D9759901B4E75BF7A546 (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5BURST_get_Current_mBB6F1F6497BEA21F724F93089C94F45F03BB5996 (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5BURST_set_Current_mD64555B0A2996349A0EC218B6C50FC9B453E1958 (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5BURST_Reset_m448B105FAF3EC7DC4EC89BFFAFE19B1FDD4B993F (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5BURST__ctor_mF58CB9F1AA06A3F43A1400D55F6D3277C1E3102D (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTMP5BURST__ctor_m7E082FE133316DEE54DA1516D2B13F2B914BFAAB (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SELECTMP5BURST_set_MY_m128526268F2C855C27EE79F6A11326FA5BB9DC6D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SELECTMP5BURST_set_THERE_mAD1CE7DD91A57AD7484FAB3C28FBBD44FEC305F1_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SELECTMP5BURST_set__world_m8C45F43CE319C1B891B4D9759901B4E75BF7A546_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SELECTMP5BURST_MoveNext_m4CB544F1214D58BEC25CE85B8C45B29A7279406B (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_1 = NULL;
	TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* V_2 = NULL;
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_3 = NULL;
	LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* V_4 = NULL;
	RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* V_5 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_026b;
			}
			case 1:
			{
				goto IL_049f;
			}
			case 2:
			{
				goto IL_05c4;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_2, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_1), (void*)L_3);
		RuntimeObject* L_4 = __this->___PLAYER_HEALTH_1;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_1_val = L_5;
		float L_6 = __this->___PLAYER_HEALTH_1_val;
		bool L_7;
		L_7 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_6, (0.100000001f), NULL);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		RuntimeObject* L_8;
		L_8 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_3), (void*)L_9);
		RuntimeObject* L_10 = __this->___WEAPONSEL_3;
		NullCheck(L_10);
		float L_11;
		L_11 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), (bool)1);
		__this->___WEAPONSEL_3_val = L_11;
		float L_12 = __this->___WEAPONSEL_3_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_12, (2.0f), NULL);
		if (L_13)
		{
			goto IL_014d;
		}
	}
	{
		RuntimeObject* L_14;
		L_14 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, 5, ((int32_t)1205036122));
		__this->___HAS_MP5_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_MP5_5), (void*)L_15);
		RuntimeObject* L_16 = __this->___HAS_MP5_5;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)231), (bool)1);
		__this->___HAS_MP5_5_val = L_17;
		float L_18 = __this->___HAS_MP5_5_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_18, (0.0f), NULL);
		if (!L_19)
		{
			goto IL_014d;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)665745664), (bool)1, (bool)1);
		__this->___WRN03STR_6 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN03STR_6), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		RuntimeObject* L_24 = __this->___WRN03STR_6;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, ((int32_t)361798934), L_24);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_25 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_25, NULL);
		V_1 = L_25;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_26 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_27 = L_26;
		RuntimeObject* L_28;
		L_28 = SELECTMP5BURST_get_MY_m48AA4A18FCD5E7EC078F51B11DCE90C3D61DD83C_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_28);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_29 = L_27;
		RuntimeObject* L_30;
		L_30 = SELECTMP5BURST_get_THERE_m1E2B18950A2CE5423E77A6F78FB64F737D91F830_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		RuntimeObject* L_31;
		L_31 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_31);
		RuntimeObject* L_32;
		L_32 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_33 = V_1;
		NullCheck(L_32);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_33);
		return (bool)0;
	}

IL_014d:
	{
		RuntimeObject* L_35;
		L_35 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_9 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_9), (void*)L_36);
		RuntimeObject* L_37 = __this->___WEAPONSEL_9;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (2.0f));
		RuntimeObject* L_38;
		L_38 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_40;
		L_40 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)97), (RuntimeObject*)NULL);
		RuntimeObject* L_42;
		L_42 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)104), (RuntimeObject*)NULL);
		RuntimeObject* L_44;
		L_44 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)39), (RuntimeObject*)NULL);
		RuntimeObject* L_46;
		L_46 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)92), (RuntimeObject*)NULL);
		RuntimeObject* L_48;
		L_48 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)40), (RuntimeObject*)NULL);
		RuntimeObject* L_50;
		L_50 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)41), (RuntimeObject*)NULL);
		RuntimeObject* L_52;
		L_52 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)42), (RuntimeObject*)NULL);
		RuntimeObject* L_54;
		L_54 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)43), (RuntimeObject*)NULL);
		RuntimeObject* L_56;
		L_56 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)44), (RuntimeObject*)NULL);
	}

IL_0237:
	{
		float L_58;
		L_58 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_58;
		float L_59 = __this->___startTime1;
		float L_60;
		L_60 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_59, L_60));
		__this->____cursor = 1;
		goto IL_026b;
	}

IL_025e:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_61 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTMP5BURST_set_Current_mD64555B0A2996349A0EC218B6C50FC9B453E1958_inline(__this, L_61, NULL);
		return (bool)1;
	}

IL_026b:
	{
		float L_62;
		L_62 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_63 = __this->___endTime1;
		if ((((float)L_62) < ((float)L_63)))
		{
			goto IL_025e;
		}
	}
	{
		SELECTMP5BURST_set_Current_mD64555B0A2996349A0EC218B6C50FC9B453E1958_inline(__this, NULL, NULL);
		RuntimeObject* L_64;
		L_64 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_64, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_32 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_32), (void*)L_65);
		RuntimeObject* L_66 = __this->___GUNFIRING_32;
		NullCheck(L_66);
		float L_67;
		L_67 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)231), (bool)1);
		__this->___GUNFIRING_32_val = L_67;
		float L_68 = __this->___GUNFIRING_32_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_68, (0.0f), NULL);
		if (!L_69)
		{
			goto IL_0237;
		}
	}
	{
		RuntimeObject* L_70;
		L_70 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_70, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_34 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_34), (void*)L_71);
		RuntimeObject* L_72 = __this->___MY_GUN_34;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_72, (RuntimeObject*)NULL, NULL);
		if (L_73)
		{
			goto IL_032a;
		}
	}
	{
		RuntimeObject* L_74;
		L_74 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_74, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_37 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_37), (void*)L_75);
		RuntimeObject* L_76 = __this->___MY_GUN_37;
		NullCheck(L_76);
		float L_77;
		L_77 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)204), (bool)1);
		__this->___temp_38 = L_77;
		float L_78 = __this->___temp_38;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_78, (1.0f), NULL);
		if (!L_79)
		{
			goto IL_0237;
		}
	}

IL_032a:
	{
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_80 = (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33*)il2cpp_codegen_object_new(TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33_il2cpp_TypeInfo_var);
		TARGETON__ctor_m515D11DEBB4E550106AF681B3007629ABBCD5FAA(L_80, NULL);
		V_2 = L_80;
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_81 = V_2;
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_82 = L_81;
		RuntimeObject* L_83;
		L_83 = SELECTMP5BURST_get_MY_m48AA4A18FCD5E7EC078F51B11DCE90C3D61DD83C_inline(__this, NULL);
		NullCheck(L_82);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_82, L_83);
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_84 = L_82;
		RuntimeObject* L_85;
		L_85 = SELECTMP5BURST_get_THERE_m1E2B18950A2CE5423E77A6F78FB64F737D91F830_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_85);
		RuntimeObject* L_86;
		L_86 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_86);
		RuntimeObject* L_87;
		L_87 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_88 = V_2;
		NullCheck(L_87);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_87, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_88);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_90 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_90, NULL);
		V_3 = L_90;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_91 = V_3;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_92 = L_91;
		RuntimeObject* L_93;
		L_93 = SELECTMP5BURST_get_MY_m48AA4A18FCD5E7EC078F51B11DCE90C3D61DD83C_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_93);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_94 = L_92;
		RuntimeObject* L_95;
		L_95 = SELECTMP5BURST_get_THERE_m1E2B18950A2CE5423E77A6F78FB64F737D91F830_inline(__this, NULL);
		NullCheck(L_94);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_94, L_95);
		RuntimeObject* L_96;
		L_96 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_94);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_94, L_96);
		RuntimeObject* L_97;
		L_97 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_98 = V_3;
		NullCheck(L_97);
		RuntimeObject* L_99;
		L_99 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_97, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_98);
		RuntimeObject* L_100;
		L_100 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_100, 5, ((int32_t)380));
		__this->___MAP_MODE_40 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_40), (void*)L_101);
		RuntimeObject* L_102 = __this->___MAP_MODE_40;
		NullCheck(L_102);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)231), (0.0f));
		RuntimeObject* L_103;
		L_103 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_103);
		NullCheck(L_104);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_104, ((int32_t)158), (RuntimeObject*)NULL);
		RuntimeObject* L_105;
		L_105 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_105, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_45 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_45), (void*)L_106);
		RuntimeObject* L_107 = __this->___MY_GUN_45;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_107, (RuntimeObject*)NULL, NULL);
		if (L_108)
		{
			goto IL_04f6;
		}
	}
	{
		RuntimeObject* L_109;
		L_109 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_109);
		RuntimeObject* L_110;
		L_110 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_109, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_48 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_48), (void*)L_110);
		RuntimeObject* L_111 = __this->___MY_GUN_48;
		NullCheck(L_111);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_111, ((int32_t)204), (0.0f));
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_112 = (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2*)il2cpp_codegen_object_new(LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var);
		LOWER__ctor_m2CCAB60402636B5DDB62FD9BD5FF9D7F3EEBBE55(L_112, NULL);
		V_4 = L_112;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_113 = V_4;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_114 = L_113;
		RuntimeObject* L_115;
		L_115 = SELECTMP5BURST_get_MY_m48AA4A18FCD5E7EC078F51B11DCE90C3D61DD83C_inline(__this, NULL);
		NullCheck(L_114);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_114, L_115);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_116 = L_114;
		RuntimeObject* L_117;
		L_117 = SELECTMP5BURST_get_THERE_m1E2B18950A2CE5423E77A6F78FB64F737D91F830_inline(__this, NULL);
		NullCheck(L_116);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_116, L_117);
		RuntimeObject* L_118;
		L_118 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_116);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_116, L_118);
		RuntimeObject* L_119;
		L_119 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_120 = V_4;
		NullCheck(L_119);
		RuntimeObject* L_121;
		L_121 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_119, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_120);
	}

IL_046b:
	{
		float L_122;
		L_122 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_122;
		float L_123 = __this->___startTime2;
		float L_124;
		L_124 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(8, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_123, L_124));
		__this->____cursor = 2;
		goto IL_049f;
	}

IL_0492:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_125 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTMP5BURST_set_Current_mD64555B0A2996349A0EC218B6C50FC9B453E1958_inline(__this, L_125, NULL);
		return (bool)1;
	}

IL_049f:
	{
		float L_126;
		L_126 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_127 = __this->___endTime2;
		if ((((float)L_126) < ((float)L_127)))
		{
			goto IL_0492;
		}
	}
	{
		SELECTMP5BURST_set_Current_mD64555B0A2996349A0EC218B6C50FC9B453E1958_inline(__this, NULL, NULL);
		RuntimeObject* L_128;
		L_128 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_128);
		RuntimeObject* L_129;
		L_129 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_128, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_52 = L_129;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_52), (void*)L_129);
		RuntimeObject* L_130 = __this->___MY_GUN_52;
		NullCheck(L_130);
		float L_131;
		L_131 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_130, ((int32_t)204), (bool)1);
		__this->___temp_53 = L_131;
		float L_132 = __this->___temp_53;
		bool L_133;
		L_133 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_132, (1.0f), NULL);
		if (L_133)
		{
			goto IL_046b;
		}
	}

IL_04f6:
	{
		RuntimeObject* L_134;
		L_134 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_134);
		RuntimeObject* L_135;
		L_135 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_134);
		NullCheck(L_135);
		RuntimeObject* L_136;
		L_136 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_135, ((int32_t)-1052633353), (bool)1, (bool)1);
		__this->___MP5ACT_54 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5ACT_54), (void*)L_136);
		RuntimeObject* L_137;
		L_137 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		RuntimeObject* L_138 = __this->___MP5ACT_54;
		NullCheck(L_137);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_137, ((int32_t)-1040443588), L_138);
		RuntimeObject* L_139;
		L_139 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_139);
		RuntimeObject* L_140;
		L_140 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_139, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_58 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_58), (void*)L_140);
		RuntimeObject* L_141 = __this->___MY_GUN_58;
		NullCheck(L_141);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)204), (0.0f));
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_142 = (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8*)il2cpp_codegen_object_new(RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		RAISE__ctor_mC9CDF6F146498172B72D6E63718BA1D065CC3E95(L_142, NULL);
		V_5 = L_142;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_143 = V_5;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_144 = L_143;
		RuntimeObject* L_145;
		L_145 = SELECTMP5BURST_get_MY_m48AA4A18FCD5E7EC078F51B11DCE90C3D61DD83C_inline(__this, NULL);
		NullCheck(L_144);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_144, L_145);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_146 = L_144;
		RuntimeObject* L_147;
		L_147 = SELECTMP5BURST_get_THERE_m1E2B18950A2CE5423E77A6F78FB64F737D91F830_inline(__this, NULL);
		NullCheck(L_146);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_146, L_147);
		RuntimeObject* L_148;
		L_148 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_146);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_146, L_148);
		RuntimeObject* L_149;
		L_149 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_150 = V_5;
		NullCheck(L_149);
		RuntimeObject* L_151;
		L_151 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_149, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_150);
	}

IL_0590:
	{
		float L_152;
		L_152 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_152;
		float L_153 = __this->___startTime3;
		float L_154;
		L_154 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_153, L_154));
		__this->____cursor = 3;
		goto IL_05c4;
	}

IL_05b7:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_155 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTMP5BURST_set_Current_mD64555B0A2996349A0EC218B6C50FC9B453E1958_inline(__this, L_155, NULL);
		return (bool)1;
	}

IL_05c4:
	{
		float L_156;
		L_156 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_157 = __this->___endTime3;
		if ((((float)L_156) < ((float)L_157)))
		{
			goto IL_05b7;
		}
	}
	{
		SELECTMP5BURST_set_Current_mD64555B0A2996349A0EC218B6C50FC9B453E1958_inline(__this, NULL, NULL);
		RuntimeObject* L_158;
		L_158 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_158);
		RuntimeObject* L_159;
		L_159 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_158, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_62 = L_159;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_62), (void*)L_159);
		RuntimeObject* L_160 = __this->___MY_GUN_62;
		NullCheck(L_160);
		float L_161;
		L_161 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_160, ((int32_t)204), (bool)1);
		__this->___temp_63 = L_161;
		float L_162 = __this->___temp_63;
		bool L_163;
		L_163 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_162, (1.0f), NULL);
		if (L_163)
		{
			goto IL_0590;
		}
	}
	{
		RuntimeObject* L_164;
		L_164 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_164);
		RuntimeObject* L_165;
		L_165 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_164);
		NullCheck(L_165);
		RuntimeObject* L_166;
		L_166 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_165, ((int32_t)-1593406448), (bool)1, (bool)1);
		__this->___MP5_01OVL_64 = L_166;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_01OVL_64), (void*)L_166);
		RuntimeObject* L_167;
		L_167 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_167);
		RuntimeObject* L_168;
		L_168 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_167);
		RuntimeObject* L_169 = __this->___MP5_01OVL_64;
		NullCheck(L_168);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_168, ((int32_t)158), L_169);
		RuntimeObject* L_170;
		L_170 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_170);
		RuntimeObject* L_171;
		L_171 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_170);
		NullCheck(L_171);
		RuntimeObject* L_172;
		L_172 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_171, ((int32_t)215570781), (bool)1, (bool)1);
		__this->___BURST_67 = L_172;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BURST_67), (void*)L_172);
		RuntimeObject* L_173;
		L_173 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_173);
		RuntimeObject* L_174;
		L_174 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_173);
		RuntimeObject* L_175 = __this->___BURST_67;
		NullCheck(L_174);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_174, ((int32_t)78), L_175);
		RuntimeObject* L_176;
		L_176 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_176);
		RuntimeObject* L_177;
		L_177 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_176);
		NullCheck(L_177);
		RuntimeObject* L_178;
		L_178 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_177, ((int32_t)215570781), (bool)1, (bool)1);
		__this->___BURST_69 = L_178;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BURST_69), (void*)L_178);
		RuntimeObject* L_179;
		L_179 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_179);
		RuntimeObject* L_180;
		L_180 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_179);
		RuntimeObject* L_181 = __this->___BURST_69;
		NullCheck(L_180);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_180, ((int32_t)97), L_181);
		RuntimeObject* L_182;
		L_182 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_182);
		RuntimeObject* L_183;
		L_183 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_182, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_72 = L_183;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_72), (void*)L_183);
		RuntimeObject* L_184 = __this->___GUN_ON_72;
		NullCheck(L_184);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_184, ((int32_t)231), (1.0f));
		RuntimeObject* L_185;
		L_185 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_185, 5, ((int32_t)361));
		__this->___RENDER_MODE_74 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RENDER_MODE_74), (void*)L_186);
		RuntimeObject* L_187 = __this->___RENDER_MODE_74;
		NullCheck(L_187);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_187, ((int32_t)231), (1.0f));
		RuntimeObject* L_188;
		L_188 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_188);
		RuntimeObject* L_189;
		L_189 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_188);
		NullCheck(L_189);
		RuntimeObject* L_190;
		L_190 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_189, ((int32_t)-535041724), (bool)1, (bool)1);
		__this->___MP_501SND_75 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP_501SND_75), (void*)L_190);
		RuntimeObject* L_191;
		L_191 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		RuntimeObject* L_192 = __this->___MP_501SND_75;
		NullCheck(L_191);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_191, L_192, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_193;
		L_193 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_193);
		RuntimeObject* L_194;
		L_194 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_193);
		NullCheck(L_194);
		RuntimeObject* L_195;
		L_195 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_194, ((int32_t)-109360261), (bool)1, (bool)1);
		__this->___SELECTTRICORDER_77 = L_195;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTTRICORDER_77), (void*)L_195);
		RuntimeObject* L_196;
		L_196 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_196);
		RuntimeObject* L_197;
		L_197 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_196);
		RuntimeObject* L_198 = __this->___SELECTTRICORDER_77;
		NullCheck(L_197);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_197, ((int32_t)104), L_198);
		RuntimeObject* L_199;
		L_199 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_199);
		RuntimeObject* L_200;
		L_200 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_199);
		NullCheck(L_200);
		RuntimeObject* L_201;
		L_201 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_200, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_79 = L_201;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_79), (void*)L_201);
		RuntimeObject* L_202;
		L_202 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_202);
		RuntimeObject* L_203;
		L_203 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_202);
		RuntimeObject* L_204 = __this->___SELECTNONE_79;
		NullCheck(L_203);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_203, ((int32_t)39), L_204);
		RuntimeObject* L_205;
		L_205 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_205);
		RuntimeObject* L_206;
		L_206 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_205);
		NullCheck(L_206);
		RuntimeObject* L_207;
		L_207 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_206, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_81 = L_207;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_81), (void*)L_207);
		RuntimeObject* L_208;
		L_208 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_208);
		RuntimeObject* L_209;
		L_209 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_208);
		RuntimeObject* L_210 = __this->___SELECTNONE_81;
		NullCheck(L_209);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_209, ((int32_t)92), L_210);
		RuntimeObject* L_211;
		L_211 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_211);
		RuntimeObject* L_212;
		L_212 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_211);
		NullCheck(L_212);
		RuntimeObject* L_213;
		L_213 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_212, ((int32_t)-463643937), (bool)1, (bool)1);
		__this->___SELECTMP5_83 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5_83), (void*)L_213);
		RuntimeObject* L_214;
		L_214 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_214);
		RuntimeObject* L_215;
		L_215 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_214);
		RuntimeObject* L_216 = __this->___SELECTMP5_83;
		NullCheck(L_215);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_215, ((int32_t)40), L_216);
		RuntimeObject* L_217;
		L_217 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_217);
		RuntimeObject* L_218;
		L_218 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_217);
		NullCheck(L_218);
		RuntimeObject* L_219;
		L_219 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_218, ((int32_t)120038031), (bool)1, (bool)1);
		__this->___SELECTMP5BURST_85 = L_219;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5BURST_85), (void*)L_219);
		RuntimeObject* L_220;
		L_220 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_220);
		RuntimeObject* L_221;
		L_221 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_220);
		RuntimeObject* L_222 = __this->___SELECTMP5BURST_85;
		NullCheck(L_221);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_221, ((int32_t)41), L_222);
		RuntimeObject* L_223;
		L_223 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_223);
		RuntimeObject* L_224;
		L_224 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_223);
		NullCheck(L_224);
		RuntimeObject* L_225;
		L_225 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_224, ((int32_t)677375039), (bool)1, (bool)1);
		__this->___SELECTGRANADE_87 = L_225;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTGRANADE_87), (void*)L_225);
		RuntimeObject* L_226;
		L_226 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_226);
		RuntimeObject* L_227;
		L_227 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_226);
		RuntimeObject* L_228 = __this->___SELECTGRANADE_87;
		NullCheck(L_227);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_227, ((int32_t)42), L_228);
		RuntimeObject* L_229;
		L_229 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_229);
		RuntimeObject* L_230;
		L_230 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_229);
		NullCheck(L_230);
		RuntimeObject* L_231;
		L_231 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_230, ((int32_t)-917113783), (bool)1, (bool)1);
		__this->___SELECTSTINGER_89 = L_231;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTSTINGER_89), (void*)L_231);
		RuntimeObject* L_232;
		L_232 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_232);
		RuntimeObject* L_233;
		L_233 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_232);
		RuntimeObject* L_234 = __this->___SELECTSTINGER_89;
		NullCheck(L_233);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_233, ((int32_t)43), L_234);
		RuntimeObject* L_235;
		L_235 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_235);
		RuntimeObject* L_236;
		L_236 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_235);
		NullCheck(L_236);
		RuntimeObject* L_237;
		L_237 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_236, ((int32_t)824580280), (bool)1, (bool)1);
		__this->___SELECTQUANTUM_91 = L_237;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTQUANTUM_91), (void*)L_237);
		RuntimeObject* L_238;
		L_238 = SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline(__this, NULL);
		NullCheck(L_238);
		RuntimeObject* L_239;
		L_239 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_238);
		RuntimeObject* L_240 = __this->___SELECTQUANTUM_91;
		NullCheck(L_239);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_239, ((int32_t)44), L_240);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LAUNCH_set_MY_m917319790A02D3F639D9B2C6FF401B2B540F3718_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LAUNCH_set_THERE_mFB1DCF148D3B0D50501E573D6BA3B33B219C2E25_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LAUNCH_set__world_m154DFAB41CA6D6A9B400ABCAB6B016B520D9A760_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LAUNCH_get_MY_mD3DC4151794F0861A7378060DF0393A5E38BB340_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LAUNCH_get_THERE_mCA8B12821071A55AF68096466AE1165A939F107E_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LAUNCH_get__world_m2B73F6A14BBF6B3CFF500FE2B88F6D6AB41CA622_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LAUNCH_set_Current_m6AF87705410AE0CDFA36E3A20CFC68D09038D38A_inline (LAUNCH_t09655DAF2EEFCA315B0506207A6C09E2BFF16595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAM_set_MY_m4F2D6E1B566EBF322F11B6F36519E0921C982192_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAM_set_THERE_mBE884D4A58DECF7FF6B29110EBA9F147677D92E4_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAM_set__world_m46909893FEE9715D60C92A8B6037FAA4F3EDDBA9_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAM_get_MY_m19DAB8D2893E225A00A77C7B1A42CD5ED44757CD_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAM_get_THERE_m0E5D0F289CFF43B9631F6A1678437E052CC7D0F0_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAM_get__world_mC2AA70DC01B22C1C209646EE055397B86E283801_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAM_set_Current_mAD635360E035A43019CE3E953C7D32FE4A62D1ED_inline (BEAM_t3424E2B2C5C716B4EA5A82637DCAB910CEE5B7D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RAISE_set_MY_m59B60EAD784135C7996D4628488AB25556FD1B7B_inline (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RAISE_set_THERE_m2E6E84D40CF4698AD2E56CDEAEA220E8A42FCD37_inline (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RAISE_set__world_mCB63C7AA6C340E159144FD4B7F0A156711EF670A_inline (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RAISE_get__world_m0D1219481BC1109A9D68E38E87F356466828F14B_inline (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RAISE_set_Current_mDB7689D02D389AE19E18B1769839ACE0A5479D90_inline (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOWER_set_MY_mD0FC8B9A73926CAA8C68B9AD1CD57D721D4E29AB_inline (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOWER_set_THERE_m18CE8E68F58CAE1CAB3FD65FED53C4BE65663672_inline (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOWER_set__world_mC5293D1929E205789B9D4C8F2231E0EDBEE9C400_inline (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOWER_get__world_mE8B93988367C80D89958C4F5DE55593DAD34E70C_inline (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOWER_set_Current_m1DEB2B0E9506379F207A5B4600476C62BC9635F0_inline (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETON_set_MY_m8E0A20F4BCBDF0BFCA7716D15DCA93B6FECEA525_inline (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETON_set_THERE_mCADD131FFC4C22552EAC0BB09ED8957C1C432A44_inline (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETON_set__world_mBEFDDD99FE73110D87D9A9709B903077192E8FC9_inline (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TARGETON_get__world_m0EE475075B3119A4AAE3C6EF43D32AD9D082FFCA_inline (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETOFF_set_MY_m7766B234E2E5F644F1FEF3DCA04063EF217FBC53_inline (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETOFF_set_THERE_m4C88A5FEFBB5817923BF867E6845AA1A272A7FE9_inline (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TARGETOFF_set__world_mF4890B0153DE1C1D6FE1CD2498E04F649AEBB65C_inline (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TARGETOFF_get__world_m263F3E9925E07F693A186917F457160A70A111C0_inline (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTNONE_set_MY_m308BEF1FB734331939FAE26B125498D3518B705A_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTNONE_set_THERE_m8FEBCBEDF2ECEF6B12F886DA59AF42F03ECEE784_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTNONE_set__world_m237ABAB84B3B5652935539BFE7563910C9A8DDF4_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTNONE_get__world_m20B03FBA93E9B0154BC8578ACBD8A1E66EF4C496_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTNONE_set_Current_m4F85C958534959E44C7A7BED40DC2AF78E8348ED_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTNONE_get_MY_m7346D05EAA5B0F4CD84AF32B22EB82210DFD4E9B_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTNONE_get_THERE_m7B159965CE908129BAB477B4B3F35E20E55E2FA9_inline (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTTRICORDER_set_MY_m25ADC6359586091EE2237B96A812F9A400A0BC39_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTTRICORDER_set_THERE_m0E85CC812520512092EB3C03E8FD5457475BF025_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTTRICORDER_set__world_m02E42A82000231BB26D9C9DE4CDBCAFF22ECEB70_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTTRICORDER_get__world_mDDB47665382A9E42CF83835C856AD9270041FC79_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTTRICORDER_get_MY_m061D3D6D71D899BA76DBD4AE0048744643B0A9F0_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTTRICORDER_get_THERE_m4FFB4F854C49329342CB972A2CFA009932845881_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTTRICORDER_set_Current_mF36A2B7EF562217134BEA6C3345700E6D7200316_inline (SELECTTRICORDER_t870C8E86E6EBB24DE5BAE33CB67CF6759C022439* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5_set_MY_mDADE4F36B543CEE54AA51BC938EB0A2D3FA88ACE_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5_set_THERE_mF6C3438B048701EEE0358F4D4359836ACC926761_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5_set__world_m0F6CF39E3F7D4C97232CBE58E9EC8415653429DF_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5_get__world_m575F57167AAA7A04CF5D0A354A2ACC212A5E2F4A_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5_get_MY_mF9E049B68DBCBE24FC4B43B51D215D1839B76379_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5_get_THERE_m15454977AD7D506A483B27228D4A10DE9C2A3306_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5_set_Current_mB7F1042D6A117F1125AC9AE5007D6BD56EA11AFC_inline (SELECTMP5_tC0C099D5EDDB59DCF02EEAD54EDFD07456E6E4E0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5BURST_set_MY_m128526268F2C855C27EE79F6A11326FA5BB9DC6D_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5BURST_set_THERE_mAD1CE7DD91A57AD7484FAB3C28FBBD44FEC305F1_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5BURST_set__world_m8C45F43CE319C1B891B4D9759901B4E75BF7A546_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5BURST_get__world_m94DA4805F2CB4B4688A6034157AB7ECD46F24141_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5BURST_get_MY_m48AA4A18FCD5E7EC078F51B11DCE90C3D61DD83C_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTMP5BURST_get_THERE_m1E2B18950A2CE5423E77A6F78FB64F737D91F830_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTMP5BURST_set_Current_mD64555B0A2996349A0EC218B6C50FC9B453E1958_inline (SELECTMP5BURST_t989CFB424D5C993B3521851A0380EE71870F55A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}

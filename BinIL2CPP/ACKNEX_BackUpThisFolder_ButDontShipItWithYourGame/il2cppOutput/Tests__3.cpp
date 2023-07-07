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
struct BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09;
struct CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172;
struct CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D;
struct DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D;
struct DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04;
struct DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B;
struct ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B;
struct FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C;
struct FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD;
struct FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C;
struct FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44;
struct FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB;
struct HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335;
struct HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25;
struct KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886;
struct LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B;
struct REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929;
struct REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531;
struct REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D;
struct REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB;
struct RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249;
struct SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF;
struct SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4;
struct SETDKEY_t5E74608245847788A610D766422B9334A0F6D229;
struct SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015;
struct SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53;
struct SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A;
struct SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B;
struct SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C;
struct SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221;
struct SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700;
struct SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0;
struct SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D;
struct STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909;
struct THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9;
struct TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D;

IL2CPP_EXTERN_C RuntimeClass* CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var;
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
struct BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___AMMO_1;
	float ___AMMO_1_val;
	RuntimeObject* ___GUNFIRING_3;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MP5_02OVL_9;
	RuntimeObject* ___AMMO_13;
	float ___AMMO_13_val;
	RuntimeObject* ___AMMO_14;
	RuntimeObject* ___AMMO_15;
	float ___AMMO_15_val;
	RuntimeObject* ___AMMO_16;
	float ___AMMO_16_val;
	RuntimeObject* ___TOUGHNESS_20;
	float ___TOUGHNESS_20_val;
	RuntimeObject* ___AMMO_22;
	float ___AMMO_22_val;
	RuntimeObject* ___AMMO_24;
	RuntimeObject* ___AMMO_26;
	float ___AMMO_26_val;
	RuntimeObject* ___WRN01STR_27;
	RuntimeObject* ___PANELTEXT_29;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___PANELTEXT_29_array;
	int32_t ___PANELTEXT_29_index;
	RuntimeObject* ___PANELTEXT_30;
	RuntimeObject* ___MSGSECCOUNT_34;
	RuntimeObject* ___PLAYER_LIGHT_36;
	float ___PLAYER_LIGHT_36_val;
	RuntimeObject* ___PLAYER_LIGHT_37;
	RuntimeObject* ___EXPL01OVL_38;
	RuntimeObject* ___MP_503SND_41;
	RuntimeObject* ___SHOT_SOUND_ON_44;
	RuntimeObject* ___SHOTSECCOUNT_46;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MP5_03OVL_48;
	RuntimeObject* ___EXPL02OVL_51;
	RuntimeObject* ___SHOOT_SECTOR_55;
	RuntimeObject* ___SHOOT_RANGE_57;
	RuntimeObject* ___SHOOT_FAC_58;
	RuntimeObject* ___SHOOT_FAC_59;
	float ___SHOOT_FAC_59_val;
	RuntimeObject* ___PLAYERBURSTFACTOR_60;
	float ___PLAYERBURSTFACTOR_60_val;
	RuntimeObject* ___DSHOOTXPLUS_61;
	float ___DSHOOTXPLUS_61_val;
	RuntimeObject* ___SHOOT_X_62;
	RuntimeObject* ___SHOOT_Y_64;
	RuntimeObject* ___HIT_DIST_66;
	float ___HIT_DIST_66_val;
	RuntimeObject* ___HIT_67;
	RuntimeObject* ___MY_TARGET_71;
	RuntimeObject* ___HIT_74;
	float ___temp_75;
	RuntimeObject* ___SHOOT_X_77;
	RuntimeObject* ___HIT_DIST_79;
	float ___HIT_DIST_79_val;
	RuntimeObject* ___HIT_80;
	RuntimeObject* ___MY_TARGET_84;
	RuntimeObject* ___HIT_87;
	float ___temp_88;
	RuntimeObject* ___DSHOOTXMINUS_89;
	float ___DSHOOTXMINUS_89_val;
	RuntimeObject* ___SHOOT_X_90;
	RuntimeObject* ___HIT_DIST_92;
	float ___HIT_DIST_92_val;
	RuntimeObject* ___HIT_93;
	RuntimeObject* ___MY_TARGET_97;
	RuntimeObject* ___HIT_100;
	float ___temp_101;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___PLAYER_LIGHT_107;
	float ___PLAYER_LIGHT_107_val;
	RuntimeObject* ___PLAYER_LIGHT_108;
	float ___startTime4;
	float ___endTime4;
	RuntimeObject* ___WEAPONSEL_111;
	float ___WEAPONSEL_111_val;
	RuntimeObject* ___MOUSE_LEFT_113;
	float ___MOUSE_LEFT_113_val;
	RuntimeObject* ___KEY_CTRL_115;
	float ___KEY_CTRL_115_val;
	RuntimeObject* ___MP5_02OVL_116;
	float ___startTime5;
	float ___endTime5;
	RuntimeObject* ___MP5_01OVL_120;
	RuntimeObject* ___WRN02STR_123;
	RuntimeObject* ___PANELTEXT_125;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___PANELTEXT_125_array;
	int32_t ___PANELTEXT_125_index;
	RuntimeObject* ___PANELTEXT_126;
	RuntimeObject* ___MSGSECCOUNT_130;
	RuntimeObject* ___MP_504SND_131;
	RuntimeObject* ___GUN_ON_134;
	float ___startTime6;
	float ___endTime6;
	RuntimeObject* ___MP5_01OVL_136;
	RuntimeObject* ___BURST_139;
	RuntimeObject* ___BURST_141;
	RuntimeObject* ___GUNFIRING_144;
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
struct DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PLAYERINSPSND_0;
};
struct ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___FWT01SND_0;
};
struct FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___KILLPLAYER_3;
	RuntimeObject* ___EXP01SND_6;
};
struct FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___GUNFIRING_1;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MP5_02OVL_7;
	RuntimeObject* ___AMMO_11;
	float ___AMMO_11_val;
	RuntimeObject* ___AMMO_12;
	RuntimeObject* ___AMMO_13;
	float ___AMMO_13_val;
	RuntimeObject* ___AMMO_14;
	float ___AMMO_14_val;
	RuntimeObject* ___TOUGHNESS_16;
	float ___TOUGHNESS_16_val;
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
	RuntimeObject* ___EXPL01OVL_30;
	RuntimeObject* ___MP_502SND_33;
	RuntimeObject* ___SHOT_SOUND_ON_36;
	RuntimeObject* ___SHOTSECCOUNT_38;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MP5_03OVL_40;
	RuntimeObject* ___EXPL02OVL_43;
	RuntimeObject* ___SHOOT_SECTOR_47;
	RuntimeObject* ___SHOOT_RANGE_49;
	RuntimeObject* ___SHOOT_FAC_50;
	RuntimeObject* ___SHOOT_FAC_51;
	float ___SHOOT_FAC_51_val;
	RuntimeObject* ___PLAYERSHOOTFACTOR_52;
	float ___PLAYERSHOOTFACTOR_52_val;
	RuntimeObject* ___DSHOOTXPLUS_53;
	float ___DSHOOTXPLUS_53_val;
	RuntimeObject* ___SHOOT_X_54;
	RuntimeObject* ___SVANGLE_55;
	float ___SVANGLE_55_val;
	RuntimeObject* ___SHOOT_Y_56;
	RuntimeObject* ___HIT_DIST_58;
	float ___HIT_DIST_58_val;
	RuntimeObject* ___HIT_61;
	float ___temp_62;
	RuntimeObject* ___SHOOT_X_64;
	RuntimeObject* ___HIT_DIST_66;
	float ___HIT_DIST_66_val;
	RuntimeObject* ___HIT_67;
	RuntimeObject* ___MY_TARGET_71;
	RuntimeObject* ___HIT_74;
	float ___temp_75;
	RuntimeObject* ___DSHOOTXMINUS_76;
	float ___DSHOOTXMINUS_76_val;
	RuntimeObject* ___SHOOT_X_77;
	RuntimeObject* ___HIT_DIST_79;
	float ___HIT_DIST_79_val;
	RuntimeObject* ___HIT_82;
	float ___temp_83;
	RuntimeObject* ___SHOOT_X_85;
	RuntimeObject* ___DSHOOTYPLUS_86;
	float ___DSHOOTYPLUS_86_val;
	RuntimeObject* ___SHOOT_Y_87;
	RuntimeObject* ___HIT_DIST_89;
	float ___HIT_DIST_89_val;
	RuntimeObject* ___HIT_92;
	float ___temp_93;
	RuntimeObject* ___DSHOOTYMINUS_94;
	float ___DSHOOTYMINUS_94_val;
	RuntimeObject* ___SHOOT_Y_95;
	RuntimeObject* ___HIT_DIST_97;
	float ___HIT_DIST_97_val;
	RuntimeObject* ___HIT_100;
	float ___temp_101;
	RuntimeObject* ___MY_TARGET_104;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___PLAYER_LIGHT_110;
	float ___PLAYER_LIGHT_110_val;
	RuntimeObject* ___PLAYER_LIGHT_111;
	float ___startTime4;
	float ___endTime4;
	RuntimeObject* ___WEAPONSEL_114;
	float ___WEAPONSEL_114_val;
	RuntimeObject* ___MOUSE_LEFT_116;
	float ___MOUSE_LEFT_116_val;
	RuntimeObject* ___KEY_CTRL_118;
	float ___KEY_CTRL_118_val;
	RuntimeObject* ___MP5_02OVL_119;
	float ___startTime5;
	float ___endTime5;
	RuntimeObject* ___MP5_01OVL_123;
	RuntimeObject* ___WRN02STR_126;
	RuntimeObject* ___PANELTEXT_128;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___PANELTEXT_128_array;
	int32_t ___PANELTEXT_128_index;
	RuntimeObject* ___PANELTEXT_129;
	RuntimeObject* ___MSGSECCOUNT_133;
	RuntimeObject* ___MP_504SND_134;
	RuntimeObject* ___GUN_ON_137;
	float ___startTime6;
	float ___endTime6;
	RuntimeObject* ___MP5_01OVL_139;
	RuntimeObject* ___FIRE_142;
	RuntimeObject* ___FIRE_144;
	RuntimeObject* ___GUNFIRING_147;
};
struct FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___REDVALUE_1;
	float ___REDVALUE_1_val;
	RuntimeObject* ___REDVALUE_2;
	RuntimeObject* ___PAL_FLASH_3;
	RuntimeObject* ___REDVALUE_4;
	float ___REDVALUE_4_val;
	RuntimeObject* ___REDVALUE_6;
	float ___REDVALUE_6_val;
	RuntimeObject* ___REDVALUE_8;
	RuntimeObject* ___REDVALUE_10;
	float ___REDVALUE_10_val;
	RuntimeObject* ___UNDERWATER_12;
	float ___UNDERWATER_12_val;
	RuntimeObject* ___PLAYER_HIT_17;
};
struct FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___REDVALUE_1;
	float ___REDVALUE_1_val;
	RuntimeObject* ___REDVALUE_2;
	RuntimeObject* ___PAL_FLASH_3;
	RuntimeObject* ___REDVALUE_4;
	float ___REDVALUE_4_val;
	RuntimeObject* ___HITVALUE_5;
	float ___HITVALUE_5_val;
	RuntimeObject* ___REDVALUE_6;
	float ___REDVALUE_6_val;
	RuntimeObject* ___PLAYER_HEALTH_8;
	float ___PLAYER_HEALTH_8_val;
	RuntimeObject* ___FLASHIN_9;
	RuntimeObject* ___KILLPLAYER_12;
};
struct FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___GOD_MODE_1;
	float ___GOD_MODE_1_val;
	RuntimeObject* ___HITSERIOUSNESS_2;
	RuntimeObject* ___HITSERIOUSNESS_3;
	float ___HITSERIOUSNESS_3_val;
	RuntimeObject* ___PLAYER_RESULT_4;
	float ___PLAYER_RESULT_4_val;
	RuntimeObject* ___TOUGHNESS_12;
	float ___TOUGHNESS_12_val;
	RuntimeObject* ___PLAYER_ARMOUR_17;
	float ___PLAYER_ARMOUR_17_val;
	RuntimeObject* ___HITSERIOUSNESS_18;
	float ___HITSERIOUSNESS_18_val;
	RuntimeObject* ___PLAYER_ARMOUR_19;
	float ___PLAYER_ARMOUR_19_val;
	RuntimeObject* ___PLAYER_ARMOUR_20;
	RuntimeObject* ___HITSERIOUSNESS_21;
	RuntimeObject* ___HITSERIOUSNESS_22;
	float ___HITSERIOUSNESS_22_val;
	RuntimeObject* ___HITSERIOUSNESS_23;
	float ___HITSERIOUSNESS_23_val;
	RuntimeObject* ___HITSERIOUSNESS_26;
	float ___HITSERIOUSNESS_26_val;
	RuntimeObject* ___PLAYER_HEALTH_27;
	float ___PLAYER_HEALTH_27_val;
	RuntimeObject* ___PLAYER_HEALTH_28;
	RuntimeObject* ___PLAYER_HIT_30;
	float ___PLAYER_HIT_30_val;
	RuntimeObject* ___PLAYER_HIT_32;
	RuntimeObject* ___HITVALUE_33;
	RuntimeObject* ___HITVALUE_34;
	float ___HITVALUE_34_val;
	RuntimeObject* ___HITSERIOUSNESS_37;
	float ___HITSERIOUSNESS_37_val;
	RuntimeObject* ___PLAYER_HEALTH_45;
	float ___PLAYER_HEALTH_45_val;
	RuntimeObject* ___PLAYER_HEALTH_50;
	float ___PLAYER_HEALTH_50_val;
	RuntimeObject* ___HIT01SND_51;
	RuntimeObject* ___FLASHOUT_53;
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
struct HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	float ___startTime1;
	float ___endTime1;
};
struct KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886  : public RuntimeObject
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
	RuntimeObject* ___SELECTNONE_4;
	RuntimeObject* ___PAL_RED_7;
	RuntimeObject* ___DEATH00SND_9;
	RuntimeObject* ___DEATHCOUNTER_12;
	RuntimeObject* ___DEATHCOUNTER_14;
	float ___DEATHCOUNTER_14_val;
	RuntimeObject* ___DEATHCOUNTER_15;
	RuntimeObject* ___PLAYER_VX_16;
	RuntimeObject* ___PLAYER_VX_17;
	float ___PLAYER_VX_17_val;
	RuntimeObject* ___PLAYER_VX_18;
	float ___PLAYER_VX_18_val;
	RuntimeObject* ___PLAYER_VY_21;
	RuntimeObject* ___PLAYER_VY_22;
	float ___PLAYER_VY_22_val;
	RuntimeObject* ___PLAYER_VY_23;
	float ___PLAYER_VY_23_val;
	RuntimeObject* ___DEATHCOUNTER_27;
	float ___DEATHCOUNTER_27_val;
	RuntimeObject* ___DEATHCOUNTER_29;
	RuntimeObject* ___ENDOFLEVEL_32;
};
struct LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___REDVALUE_1;
	float ___REDVALUE_1_val;
	RuntimeObject* ___REDVALUE_2;
	RuntimeObject* ___PLAYER_ARC_4;
	float ___PLAYER_ARC_4_val;
	RuntimeObject* ___PLAYER_ARC_5;
	RuntimeObject* ___PAL_RED_6;
	RuntimeObject* ___REDVALUE_7;
	float ___REDVALUE_7_val;
	RuntimeObject* ___REDVALUE_9;
	float ___REDVALUE_9_val;
	RuntimeObject* ___REDVALUE_11;
	RuntimeObject* ___REDVALUE_13;
	float ___REDVALUE_13_val;
	RuntimeObject* ___UNDERWATER_15;
	float ___UNDERWATER_15_val;
	RuntimeObject* ___PLAYER_ARC_17;
	RuntimeObject* ___PLAYER_ARC_19;
	RuntimeObject* ___PLAYER_HIT_21;
};
struct REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___REDVALUE_1;
	float ___REDVALUE_1_val;
	RuntimeObject* ___REDVALUE_2;
	RuntimeObject* ___PLAYER_ARC_4;
	float ___PLAYER_ARC_4_val;
	RuntimeObject* ___PLAYER_ARC_5;
	RuntimeObject* ___PAL_RED_6;
	RuntimeObject* ___REDVALUE_7;
	float ___REDVALUE_7_val;
	RuntimeObject* ___HITVALUE_8;
	float ___HITVALUE_8_val;
	RuntimeObject* ___REDVALUE_9;
	float ___REDVALUE_9_val;
	RuntimeObject* ___PLAYER_HEALTH_11;
	float ___PLAYER_HEALTH_11_val;
	RuntimeObject* ___REDIN_12;
	RuntimeObject* ___KILLPLAYER_15;
};
struct REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___UNDERWATER_1;
	float ___UNDERWATER_1_val;
	RuntimeObject* ___UNDERWATER_3;
	RuntimeObject* ___PLAYER_ARC_4;
	RuntimeObject* ___PLAYER_ARC_5;
	float ___PLAYER_ARC_5_val;
	RuntimeObject* ___PLAYER_ARC_6;
	float ___PLAYER_ARC_6_val;
	RuntimeObject* ___MY_SIZE_9;
	RuntimeObject* ___MY_SIZE_10;
	float ___MY_SIZE_10_val;
	RuntimeObject* ___MY_SIZE_11;
	float ___MY_SIZE_11_val;
	RuntimeObject* ___PLAYER_SIZE_14;
	RuntimeObject* ___PLAYER_SIZE_15;
	float ___PLAYER_SIZE_15_val;
	RuntimeObject* ___PLAYER_SIZE_16;
	float ___PLAYER_SIZE_16_val;
	RuntimeObject* ___PLAYER_Z_19;
	RuntimeObject* ___PLAYER_Z_20;
	float ___PLAYER_Z_20_val;
	RuntimeObject* ___PLAYER_Z_21;
	float ___PLAYER_Z_21_val;
	RuntimeObject* ___PLAYER_LIGHT_25;
	float ___PLAYER_LIGHT_25_val;
	RuntimeObject* ___PLAYER_LIGHT_26;
};
struct REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___UNDERWATER_1;
	float ___UNDERWATER_1_val;
	RuntimeObject* ___UNDERWATER_3;
	RuntimeObject* ___FWT01SND_4;
	RuntimeObject* ___PLAYER_ARC_6;
	RuntimeObject* ___PLAYER_ARC_7;
	float ___PLAYER_ARC_7_val;
	RuntimeObject* ___PLAYER_ARC_8;
	float ___PLAYER_ARC_8_val;
	RuntimeObject* ___MY_SIZE_11;
	RuntimeObject* ___MY_SIZE_12;
	float ___MY_SIZE_12_val;
	RuntimeObject* ___MY_SIZE_13;
	float ___MY_SIZE_13_val;
	RuntimeObject* ___PLAYER_SIZE_16;
	RuntimeObject* ___PLAYER_SIZE_17;
	float ___PLAYER_SIZE_17_val;
	RuntimeObject* ___PLAYER_SIZE_18;
	float ___PLAYER_SIZE_18_val;
	RuntimeObject* ___PLAYER_Z_21;
	RuntimeObject* ___PLAYER_Z_22;
	float ___PLAYER_Z_22_val;
	RuntimeObject* ___PLAYER_Z_23;
	float ___PLAYER_Z_23_val;
	RuntimeObject* ___PLAYER_LIGHT_27;
	float ___PLAYER_LIGHT_27_val;
	RuntimeObject* ___PLAYER_LIGHT_28;
};
struct RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PAL_BLUE_0;
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
struct SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SETGKEY_0;
	RuntimeObject* ___GODCOUNTER_3;
};
struct SETDKEY_t5E74608245847788A610D766422B9334A0F6D229  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___TOGGLEGODMODE_2;
	RuntimeObject* ___GODCOUNTER_5;
};
struct SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SETOKEY_2;
	RuntimeObject* ___GODCOUNTER_5;
};
struct SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SETDKEY_2;
	RuntimeObject* ___GODCOUNTER_5;
};
struct SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PAL_BLUE_0;
};
struct SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___FRIC_1;
	RuntimeObject* ___MODE_DEATH_2;
	float ___MODE_DEATH_2_val;
	RuntimeObject* ___MOVING_3;
	RuntimeObject* ___STRENGTH_5;
	RuntimeObject* ___WAVE_STR_7;
	RuntimeObject* ___FLOAT_STR_9;
	RuntimeObject* ___DUCK_STR_11;
	RuntimeObject* ___FRIC_AIR_13;
	RuntimeObject* ___GRAVITY_15;
	RuntimeObject* ___MOVE_ME_16;
};
struct SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___FRIC_1;
	RuntimeObject* ___MODE_TAUCHEN_2;
	float ___MODE_TAUCHEN_2_val;
	RuntimeObject* ___MOVING_3;
	RuntimeObject* ___STRENGTH_5;
	RuntimeObject* ___WAVE_STR_7;
	RuntimeObject* ___FLOAT_STR_9;
	RuntimeObject* ___DUCK_STR_11;
	RuntimeObject* ___FRIC_AIR_13;
	RuntimeObject* ___GRAVITY_15;
	RuntimeObject* ___MOVE_ME_16;
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
struct STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PLAYER_VX_1;
	RuntimeObject* ___PLAYER_VY_3;
	RuntimeObject* ___PLAYER_VZ_5;
	RuntimeObject* ___PLAYER_VROT_7;
};
struct THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___AMMO_1;
	float ___AMMO_1_val;
	RuntimeObject* ___GRANADE_3;
	RuntimeObject* ___GUNFIRING_5;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___GRAN01OVL_11;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___GRAN02OVL_18;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___GRAN01SND_22;
	RuntimeObject* ___GRAN03OVL_24;
	float ___startTime4;
	float ___endTime4;
	float ___startTime5;
	float ___endTime5;
	RuntimeObject* ___GRAN04OVL_35;
	float ___startTime6;
	float ___endTime6;
	RuntimeObject* ___GRAN05OVL_39;
	float ___startTime7;
	float ___endTime7;
	RuntimeObject* ___GRAN06OVL_43;
	RuntimeObject* ___GRANADE_48;
	RuntimeObject* ___GRANADE_51;
	RuntimeObject* ___GRANADE_53;
	RuntimeObject* ___GRANADE_55;
	float ___temp_56;
	RuntimeObject* ___PLAYER_X_57;
	float ___PLAYER_X_57_val;
	RuntimeObject* ___PLAYER_COS_59;
	float ___PLAYER_COS_59_val;
	RuntimeObject* ___PLAYER_VX_61;
	float ___PLAYER_VX_61_val;
	RuntimeObject* ___TIME_CORR_63;
	float ___TIME_CORR_63_val;
	RuntimeObject* ___GRANADE_65;
	RuntimeObject* ___GRANADE_67;
	float ___temp_68;
	RuntimeObject* ___PLAYER_Y_69;
	float ___PLAYER_Y_69_val;
	RuntimeObject* ___PLAYER_SIN_71;
	float ___PLAYER_SIN_71_val;
	RuntimeObject* ___PLAYER_VY_73;
	float ___PLAYER_VY_73_val;
	RuntimeObject* ___TIME_CORR_75;
	float ___TIME_CORR_75_val;
	RuntimeObject* ___GRANADE_77;
	RuntimeObject* ___GRANADE_79;
	float ___temp_80;
	RuntimeObject* ___PLAYER_SIZE_81;
	float ___PLAYER_SIZE_81_val;
	RuntimeObject* ___PLAYER_TILT_84;
	float ___PLAYER_TILT_84_val;
	RuntimeObject* ___PLAYER_HGT_91;
	float ___PLAYER_HGT_91_val;
	RuntimeObject* ___FLOOR_HGT_93;
	float ___FLOOR_HGT_93_val;
	RuntimeObject* ___FREEFALL_94;
	RuntimeObject* ___GRANADE_96;
	RuntimeObject* ___BOUNCE_97;
	RuntimeObject* ___GRANADE_99;
	RuntimeObject* ___GRAN2TEX_100;
	RuntimeObject* ___GRANADE_102;
	RuntimeObject* ___PLAYER_ANGLE_103;
	float ___PLAYER_ANGLE_103_val;
	RuntimeObject* ___GRANADE_105;
	RuntimeObject* ___GRANADE_107;
	RuntimeObject* ___GRANADE_109;
	float ___temp_110;
	RuntimeObject* ___PLAYER_TILT_112;
	float ___PLAYER_TILT_112_val;
	RuntimeObject* ___BULLET_117;
	RuntimeObject* ___GRANADE_119;
	RuntimeObject* ___GRANADE_122;
	RuntimeObject* ___GRANADE_125;
	RuntimeObject* ___AMMO_127;
	float ___AMMO_127_val;
	RuntimeObject* ___AMMO_128;
	float ___startTime8;
	float ___endTime8;
	RuntimeObject* ___GRAN2TEX_130;
	RuntimeObject* ___GRANADE_132;
	RuntimeObject* ___temp_133;
	RuntimeObject* ___GRAN1TEX_134;
	RuntimeObject* ___GRANADE_136;
	RuntimeObject* ___AMMO_141;
	float ___AMMO_141_val;
	RuntimeObject* ___HAS_GRANADE_143;
	RuntimeObject* ___GUNFIRING_147;
	float ___startTime9;
	float ___endTime9;
	RuntimeObject* ___GRAN00OVL_149;
	RuntimeObject* ___WEAPONSEL_153;
	float ___WEAPONSEL_153_val;
	RuntimeObject* ___THROW_154;
	RuntimeObject* ___THROW_156;
	RuntimeObject* ___GUNFIRING_159;
};
struct TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___ALARM03SND_2;
	RuntimeObject* ___GOD_MODE_5;
	float ___GOD_MODE_5_val;
	RuntimeObject* ___HLP06STR_6;
	RuntimeObject* ___GOD_MODE_9;
	RuntimeObject* ___HLP05STR_10;
	RuntimeObject* ___GOD_MODE_13;
	RuntimeObject* ___HAS_MP5_15;
	RuntimeObject* ___HAS_GRANADE_17;
	RuntimeObject* ___HAS_STINGER_19;
	RuntimeObject* ___HAS_QUANTUM_21;
	RuntimeObject* ___HAS_PDA_23;
	RuntimeObject* ___AMMO_MP5_25;
	RuntimeObject* ___AMMO_GRANADE_27;
	RuntimeObject* ___AMMO_STINGER_29;
	RuntimeObject* ___AMMO_QUANTUM_31;
	RuntimeObject* ___KEY1_33;
	RuntimeObject* ___KEY2_35;
	RuntimeObject* ___KEY3_37;
	RuntimeObject* ___KEY4_39;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_WALKING_set_MY_m40E0F31AA3F6C98504D1E8EA044651637F1CB6A1_inline (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_WALKING_set_THERE_m9758674817172C9E13231F353C163488F7E8783D_inline (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_WALKING_set__world_m4C53A620A8D72426689741A157C32738B8D78CD7_inline (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_SWIMMING_set_MY_m21531DFB92FBE41C02B9F5B4B94C766DA106C6DE_inline (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_SWIMMING_set_THERE_m24AE7883B6AF466BF9CD78033E57836D9C8EF8B8_inline (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_SWIMMING_set__world_m751347014F06091E3832C0F43E70AA11F192C73C_inline (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DIVING_set_MY_m67471036F06188DECA6EC16564B455D91B490EC7_inline (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DIVING_set_THERE_m873CEEFAB8FAB901C98858157E7576C7E9210CA1_inline (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DIVING_set__world_mE1E43A2D41660E8B3730F5E4345DC32612C1176E_inline (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DEATH_set_MY_m3C11005D3069859C7372F79CDF84D4D554A8BC69_inline (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DEATH_set_THERE_m36352411173DDC1139E40B99CB0205E49831C07B_inline (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DEATH_set__world_m74B7F8F7567845CCD6A0104C1B7604C67CFE8FFF_inline (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_MOVING_set_MY_m716BB5F50C75E3349E8E19A3F9FF881C3F40B6B5_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_MOVING_set_THERE_m1606F04893C4CF81D03CCBA21BE8BE1EF2306232_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_MOVING_set__world_mC0B53C55B0E39101C173C38C6D3AC8F11EBD3E64_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_WALKING__ctor_m6077994146222E0B4630F32AA4DD0F910A7B9B86 (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_MOVING_get_MY_mA389AD0ACE4BAD090D4FFCF8CC86E2337CBD69C4_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_MOVING_get_THERE_m437AF4A776F2F493E86DBB69366821F1E47D07B5_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_SWIMMING__ctor_m4A4036B39AE23004B3529E4A872D3CA7C526E7E7 (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DIVING__ctor_m505394312F9D7A8A75E0D9F4CC2C0796414ED5CB (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void STOP_MOVING_set_MY_m9B7BDA183D1743AD8D08EBFE3369AF714716EC2B_inline (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void STOP_MOVING_set_THERE_m4EC383C38E0B86DBCE24FA254306FACD3D8714C8_inline (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void STOP_MOVING_set__world_m7564C2F4F7C927D28E3C0EFA049272449FCFAAAA_inline (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* STOP_MOVING_get__world_mDB0431E506CEF2E5F3C6F234561473A9B1E3CD53_inline (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_BLUE_set_MY_m274165DDFA11982370C286A3A72A39E7762C0E26_inline (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_BLUE_set_THERE_mDBCF0A31891C32F0507F8CA885FF6EE62DFE196E_inline (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_BLUE_set__world_m6D757A5088827ADDF78C9726C3F015658985DB23_inline (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_BLUE_get__world_m05C1AEB2AAFE8D376C2ED79E72B63745D2B5DBFE_inline (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESET_BLUE_set_MY_m80F44C69D7668614A4F0AD85313BF8CE5F488154_inline (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESET_BLUE_set_THERE_m4AEC29D8DB5438629DB961DE58BFC7A0D5FF664D_inline (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESET_BLUE_set__world_m456E6D17C482DFF18F5C80C7DD390FAFC215634F_inline (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RESET_BLUE_get__world_m4B96625F38E374698D59E820B959453C91CC9650_inline (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENTER_WATER_set_MY_m9341E68D26B5F4524724CAE042697348401C04BE_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENTER_WATER_set_THERE_mD634DF002FB5BF6A979BE8F4F5416BE3BE94EAD9_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENTER_WATER_set__world_mBAE97DDD211BCAA2B6E1278673D67F8650324A7D_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENTER_WATER_get__world_m76B94AD5B60615CE463CF08C16B621A64101635C_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENTER_WATER_get_MY_m5DEA0D04E5360E307E0EF755C93A0925AC93C834_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENTER_WATER_get_THERE_m5AEFB0AB6AC2239451B1AE719C07A492E935D1D7_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LEAVE_WATER_set_MY_m255E4C86B6377D1A936AF622D514720123886ECF_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LEAVE_WATER_set_THERE_m66C5BA1DC35650B8D16CBD895D24C8E301821273_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LEAVE_WATER_set__world_m915030EF949EF5F8E0D2915AC221280B678AC29C_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LEAVE_WATER_get_MY_m3054AD47EB44C2AFA24BC57F786932CA71FF5A87_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LEAVE_WATER_get_THERE_mDAF0A62005ACBD29CC37638CDDC47C9FD1A22688_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LEAVE_WATER_get__world_m4AA7508276777A7E8B0F896FFA6564E0F04FC2C0_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DIVE_UP_set_MY_m6C346A7F4CEAC68FF4220544EE586711A20A5A10_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DIVE_UP_set_THERE_m0A5A26B600EDF26BA7A29CD0A4451B263856D3B6_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DIVE_UP_set__world_m0B92DACFAA684644FDFDFF7E9234E75B36C7B716_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DIVE_UP_get__world_mEA92A68D20D94444FA312A7FF5EF792BC2D89606_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESET_BLUE__ctor_m73989955A2A9A7CF3F3EECBC45D7A02D3BCE93D7 (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DIVE_UP_get_MY_mAEE0DABF04D59B5015D96617708EA304C64039CA_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DIVE_UP_get_THERE_m2C36F1841186C3C0C508E7FB8D8819C49BA115FA_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_DIVE_set_MY_m3DAFDB832E6A1284D818D74C1E11C3E3F4F426F1_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_DIVE_set_THERE_mE59E42F63F711274A5A6273F14ADCCF52C350879_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_DIVE_set__world_m472E4612BF916FDBA54A9E3F335466374E29FB7B_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_DIVE_get_MY_m181DC48A0D170B909AF627B36274242CE8B98B7C_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_DIVE_get_THERE_m17B0B438E4FA2730C3DE2F118FC41C8AEA735CEF_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_ARISE_set_MY_m6C126A6983AB375E31C02ECF7AC06C0A5D2B7394_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_ARISE_set_THERE_mF2AB71CE29EE5A4B8B67AC0B100C8E84ACB4C859_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_ARISE_set__world_mE7B3BBCF25E520C769B5CD4BCAA5223BC2D6F224_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_ARISE_get_MY_mD2F020D86416F768377085E9DE57CF821183434E_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_ARISE_get_THERE_m9E01A6BE7CC9A6761EC485674DB08E6D16882CB7_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DIVE_UP__ctor_mDEF30EA1B86A3C80CECDAB11B27E4B39AD30AC83 (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYER_set_MY_mDE2740F5B7DF66A6690C2DA225FA2475263F7EEC_inline (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYER_set_THERE_mB3EC55509499597DCBB9665B0292202C93ED401E_inline (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYER_set__world_m0821EA289C99F49E95343986D1A2CB4675215124_inline (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15 (RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDOUT_set_MY_m699284D1C5CE919BF77AC84681BB3F9595E9543D_inline (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDOUT_set_THERE_m325787721024F8EA38EA50C2E343D3C5D2743D97_inline (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDOUT_set__world_m4D5BBD085CA658022B081AEF299632AD1401B718_inline (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDIN_set_MY_mF12B6231D5C15919D6233ED3497E260CA28866CE_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDIN_set_THERE_mE17856AE2D838107DA6A80AA0EB6ABFD64AFCD46_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDIN_set__world_m1ADA875544DFAC6642B46248395444985B34D18D_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_BLUE__ctor_m398E7AA8C854CA036D788D740731EC3AA3B5C19F (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REDIN_get_MY_m96D78B4468C45B5531FC2BAA61BDD67B128FF395_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REDIN_get_THERE_m0814D635B155F64C050B8304E5BC2AA53B54D5EE_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHPLAYER_set_MY_mC466D1D5D3064BE95C4F6453BA5BA98EF565F514_inline (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHPLAYER_set_THERE_m0FB1564509D9F2A220549A26A190DDF67682CC2F_inline (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHPLAYER_set__world_mA672E59FDF8790E23EAE6BCE8E8A224ECCE727AF_inline (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHOUT_set_MY_mA7D9C46744FBA53A7510084C9DADA27A1B54E82D_inline (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHOUT_set_THERE_m7A2A23C82373CDC71A9DB85739CA699531E42E66_inline (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHOUT_set__world_mEC448EA7D2651041393B82B13FB58D84055C56A5_inline (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHIN_set_MY_mF862A67AB588F95D3A0058F71E1ED3426D704409_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHIN_set_THERE_m19392F39800EA7FE845A840472E0F92F6457CFD4_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHIN_set__world_mE484AD9AA08C7DFCDB72B962C3356045D9D8DEAE_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHIN_get_MY_m395413006813967C8AEA7E3DE2EEB9B9129C2240_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHIN_get_THERE_mCA36FDA943C7A3C0D3B87801425D6934FE7E8375_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set_MY_m9A9C91FBD71127D68D290F5281C15668F96D3B1F_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set_THERE_m559A17D2AD5169524B829E18FDF1BAE8750AC74A_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set__world_m694664BEBFA2558DD1D8703891CB3B96C4636D63_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3 (int32_t ___0_frames, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set_Current_mF0F6CC147AC9B2E079370650708EAB3D549C0AF1_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYER__ctor_mB8D5F81CBF89B5D337064FAB0E5DB88B0109CB9D (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYERDELAY_get_MY_m86119E4EDCA1CCB4572BA3EFC7205AC9A7CFC4D2_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYERDELAY_get_THERE_m77C25C86EFAB23E6350D5C5AFE01E07908F209DF_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYERDELAY_get__world_mD092BC53D176E6243BBB5B44DBC884EAF95082FC_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KILLPLAYER_set_MY_mFCD2CEF2FA15DD20571396A9E6ED5624FB2D0D1A_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KILLPLAYER_set_THERE_mFE2D68FE3D8DC67DB4A79966774718CEFA14A426_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KILLPLAYER_set__world_m0002E0DB93649D393AA6161D74ED14F98D8188F5_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DEATH__ctor_mB92175D43C40ECED36C078F9326149A461B872D6 (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KILLPLAYER_get_MY_m609B71763D83ABD4B85300AE8249BAEC4C313F92_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KILLPLAYER_get_THERE_mA8F304B34E1B1B01C0B7D20F77BB318D2A4772BA_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FINISHPLAYER_set_MY_mF5AD1CB26212E1EF3ED88C78164CC61327FB8982_inline (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FINISHPLAYER_set_THERE_m415411A8053116828D633164C3831C73B06BD432_inline (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FINISHPLAYER_set__world_m0EB5B6FFADA5D9CC8A88D9D37DDF76108A82A0F5_inline (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FINISHPLAYER_get_MY_mF0C190D6BE75699E89B0C586B8386D4C547C863F_inline (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FINISHPLAYER_get__world_m4F9941A9998B773E7EED24ECBE98685B17785480_inline (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TOGGLEGODMODE_set_MY_mA25943E8536F4573671CD8C3FC4970D382618287_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TOGGLEGODMODE_set_THERE_m2233085EA4CAF95B141F5D71E3D7680483B8F573_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TOGGLEGODMODE_set__world_m61ED43EEE0D9F6CBC9CDE73AD783E815D1C47F7C_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9 (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TOGGLEGODMODE_get_MY_m631391D13A6C5B0EA37D4E007D590ADBA50C9BF3_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TOGGLEGODMODE_get_THERE_m8B983A0AB9C2A6E8AE3FF7714FE21907C04DE38B_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4 (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETCKEY_set_MY_m477C5A55E1847C03564EC61D2E6F1D5BE0305B0D_inline (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETCKEY_set_THERE_m60FF228BDE105014530DFB3E6F2609E10C163B23_inline (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETCKEY_set__world_m8EA53830A1E2234F1959CECB9AE62865D226D7B4_inline (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SETCKEY_get__world_m20981ECCA6D46B3656A76277C096B39023470C60_inline (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETGKEY_set_MY_mDDD13D24855A7EE019AB641147E7DCF144EDEF10_inline (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETGKEY_set_THERE_m81731FE73A3B1DB66753AB3ABB74928580B8EA26_inline (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETGKEY_set__world_m6ED4F17A146E505B8B1C94BA2952D840CD6E124D_inline (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SETGKEY_get__world_mE5A2E2EE65E98234DB6B46951C7C4CD8A57FFEBF_inline (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETOKEY_set_MY_m3974F5CC66E47A6AF83E86BEA337C1C04A9E5AB1_inline (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETOKEY_set_THERE_mE8DBD9CE16625BA5991ED5A8EB75439A58971BFD_inline (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETOKEY_set__world_mCCC54BAC31C916295F2D4717D960C792C6E53B93_inline (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SETOKEY_get__world_mE110F7D4B57CB63C5E6C882F4A51E0FEDFC19E80_inline (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETDKEY_set_MY_m4FCA0AC8539427B6EA833CE50A739C1FAACEA44A_inline (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETDKEY_set_THERE_mD59393B022BCE866F1D0F4EC73FBA758FB205339_inline (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETDKEY_set__world_m3C6B6CE03DCC0040E75F5D65B57F56DFD86B4487_inline (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SETDKEY_get__world_mAB6E9AB1486E00D94DAE654AB62C60305356B2F8_inline (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FIRE_set_MY_m4BDF7CC3DD0D34BAF5D1A5822816A3771A91EEA6_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FIRE_set_THERE_m7CDA32CB21408A307112175851CA59EA64F94918_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FIRE_set__world_mEA47112A626FEDD6E863C0129C6F7C847E66E71E_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F (int32_t ___0_ticks, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DECAMMO__ctor_mF631B0417F3BD5DBA5E40DB19E2F3843AE8D87D4 (DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FIRE_get_MY_m1018064BA708BFDF239D7A9B171C1E91C8BF1A5A_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FIRE_get_THERE_mEBF57DA4FF3A434039DE755A95CC7747DFA85696_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) ;
inline void List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213 (List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CASTBLOOD__ctor_mF6470343C4D54F10A5A822D1AA690665436AA434 (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BURST_set_MY_m76582031FDA85EF5D426A4B6AFD18749F0FBC32E_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BURST_set_THERE_mE0EEF7BE7479C8A285942A86A7378A528CDE7FD5_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BURST_set__world_mF2C69DD27DDFCD5D23C689A72CB3133DD93AF326_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FIRE__ctor_mD0862351B5DD9D4425214B819737CE95CE563954 (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BURST_get_MY_m2C707907417E5E1EDFE362BA0D85CE8D1EF6D00D_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BURST_get_THERE_m263EAED681CC2E5E33BAFDFB5B3C9FD1EC26197D_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void THROW_set_MY_mCB2F65552AB16338E85C51DE1B3F5864906B43EB_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void THROW_set_THERE_m7ECAA8233C6DFBCEDE64664D9E5E5E67E6A19C46_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void THROW_set__world_mCC5DA9AEC2C5A338319E89C3912C90EB97663C9B_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTNONE__ctor_mFF1135D9058921B26DEC652619B7A667380D5451 (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* THROW_get_MY_m42C3497B00F02B100D833C657057AB7633947599_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* THROW_get_THERE_mFEC6381AAB25774DFE50C5FBBD0F124005BF83A7_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGRANADE__ctor_m0EFDF65AB32658238F02EB0ED4E4DF4268484CFC (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_WALKING_get_MY_m4BAA6D0DE5E1E87446EECEDA1B3866A9238903A6 (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_WALKING_set_MY_m40E0F31AA3F6C98504D1E8EA044651637F1CB6A1 (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_WALKING_get_THERE_m6AAC28F380BCEA5BF9E34C0759766AFCE2A9D438 (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_WALKING_set_THERE_m9758674817172C9E13231F353C163488F7E8783D (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_WALKING_set__world_m4C53A620A8D72426689741A157C32738B8D78CD7 (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_WALKING_get_Current_m38FB880537FEC98FFCE35E694AA40E0C2A026E23 (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_WALKING_set_Current_mF8A50A85E1FC7CE264395FDD38B42FC5D674427C (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_WALKING_Reset_mE4D4EAF685FDDE364E3E47DB9224DDBD47C0E46E (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_WALKING__ctor_m6077994146222E0B4630F32AA4DD0F910A7B9B86 (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_WALKING__ctor_m6A033CC401C003FAB62184C7BA3710F855A51ACB (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SET_WALKING_set_MY_m40E0F31AA3F6C98504D1E8EA044651637F1CB6A1_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SET_WALKING_set_THERE_m9758674817172C9E13231F353C163488F7E8783D_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SET_WALKING_set__world_m4C53A620A8D72426689741A157C32738B8D78CD7_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SET_WALKING_MoveNext_m72BF203FDFBCE4FE5B9D26A5C2F03BC79F46575A (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, const RuntimeMethod* method) 
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
		L_1 = SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline(__this, NULL);
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
		L_5 = SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)-1052624291));
		__this->___MOVING_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_1), (void*)L_6);
		RuntimeObject* L_7 = __this->___MOVING_1;
		float L_8 = __this->___MODE_GEHEN_0_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), L_8);
		RuntimeObject* L_9;
		L_9 = SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)2089081969));
		__this->___FRIC_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRIC_3), (void*)L_10);
		RuntimeObject* L_11 = __this->___FRIC_3;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (0.200000003f));
		RuntimeObject* L_12;
		L_12 = SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)461037372));
		__this->___STRENGTH_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STRENGTH_5), (void*)L_13);
		RuntimeObject* L_14 = __this->___STRENGTH_5;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (0.150000006f));
		RuntimeObject* L_15;
		L_15 = SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)525195384));
		__this->___WAVE_STR_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAVE_STR_7), (void*)L_16);
		RuntimeObject* L_17 = __this->___WAVE_STR_7;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (0.0f));
		RuntimeObject* L_18;
		L_18 = SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, 5, ((int32_t)1319913115));
		__this->___FLOAT_STR_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOAT_STR_9), (void*)L_19);
		RuntimeObject* L_20 = __this->___FLOAT_STR_9;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)231), (0.0f));
		RuntimeObject* L_21;
		L_21 = SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)1846696428));
		__this->___DUCK_STR_11 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_STR_11), (void*)L_22);
		RuntimeObject* L_23 = __this->___DUCK_STR_11;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), (0.5f));
		RuntimeObject* L_24;
		L_24 = SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)1830104876));
		__this->___FRIC_AIR_13 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRIC_AIR_13), (void*)L_25);
		RuntimeObject* L_26 = __this->___FRIC_AIR_13;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (0.0399999991f));
		RuntimeObject* L_27;
		L_27 = SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, 5, ((int32_t)557195635));
		__this->___GRAVITY_15 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAVITY_15), (void*)L_28);
		RuntimeObject* L_29 = __this->___GRAVITY_15;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)231), (-0.150000006f));
		RuntimeObject* L_30;
		L_30 = SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)-377020203), (bool)1, (bool)1);
		__this->___MOVE_ME_16 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_ME_16), (void*)L_32);
		RuntimeObject* L_33;
		L_33 = SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		RuntimeObject* L_35 = __this->___MOVE_ME_16;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)19), L_35);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_SWIMMING_get_MY_mF400391696D11579682370397FD451C43BCDA226 (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_SWIMMING_set_MY_m21531DFB92FBE41C02B9F5B4B94C766DA106C6DE (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_SWIMMING_get_THERE_m5A7A9DEE9E74D12B05D9CE914CBAD5F3E446DDBF (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_SWIMMING_set_THERE_m24AE7883B6AF466BF9CD78033E57836D9C8EF8B8 (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0 (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_SWIMMING_set__world_m751347014F06091E3832C0F43E70AA11F192C73C (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_SWIMMING_get_Current_m0A5088344A179BCA4202A8F54496912C5A045BA9 (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_SWIMMING_set_Current_mCDD0D8D3F7695ED449450A47E64AA61929D92562 (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_SWIMMING_Reset_mD9A298C1411D87DD8E68F6DB818F55B841EBF59E (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_SWIMMING__ctor_m4A4036B39AE23004B3529E4A872D3CA7C526E7E7 (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_SWIMMING__ctor_m4A95721928A856AB8CEB55E1ED7E68E4730E5A99 (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SET_SWIMMING_set_MY_m21531DFB92FBE41C02B9F5B4B94C766DA106C6DE_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SET_SWIMMING_set_THERE_m24AE7883B6AF466BF9CD78033E57836D9C8EF8B8_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SET_SWIMMING_set__world_m751347014F06091E3832C0F43E70AA11F192C73C_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SET_SWIMMING_MoveNext_mF14348C5FF76EDC1C2FBCFC1CF4A4B1BBA920F7E (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, const RuntimeMethod* method) 
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
		L_1 = SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)2089081969));
		__this->___FRIC_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRIC_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___FRIC_1;
		NullCheck(L_3);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (0.300000012f));
		RuntimeObject* L_4;
		L_4 = SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, 5, ((int32_t)-539849892));
		__this->___MODE_SCHWIMMEN_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_SCHWIMMEN_2), (void*)L_5);
		RuntimeObject* L_6 = __this->___MODE_SCHWIMMEN_2;
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)231), (bool)1);
		__this->___MODE_SCHWIMMEN_2_val = L_7;
		RuntimeObject* L_8;
		L_8 = SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)-1052624291));
		__this->___MOVING_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_3), (void*)L_9);
		RuntimeObject* L_10 = __this->___MOVING_3;
		float L_11 = __this->___MODE_SCHWIMMEN_2_val;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), L_11);
		RuntimeObject* L_12;
		L_12 = SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)461037372));
		__this->___STRENGTH_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STRENGTH_5), (void*)L_13);
		RuntimeObject* L_14 = __this->___STRENGTH_5;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (0.150000006f));
		RuntimeObject* L_15;
		L_15 = SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)525195384));
		__this->___WAVE_STR_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAVE_STR_7), (void*)L_16);
		RuntimeObject* L_17 = __this->___WAVE_STR_7;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (0.0799999982f));
		RuntimeObject* L_18;
		L_18 = SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, 5, ((int32_t)1319913115));
		__this->___FLOAT_STR_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOAT_STR_9), (void*)L_19);
		RuntimeObject* L_20 = __this->___FLOAT_STR_9;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)231), (0.0f));
		RuntimeObject* L_21;
		L_21 = SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)1846696428));
		__this->___DUCK_STR_11 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_STR_11), (void*)L_22);
		RuntimeObject* L_23 = __this->___DUCK_STR_11;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), (0.200000003f));
		RuntimeObject* L_24;
		L_24 = SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)1830104876));
		__this->___FRIC_AIR_13 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRIC_AIR_13), (void*)L_25);
		RuntimeObject* L_26 = __this->___FRIC_AIR_13;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (0.5f));
		RuntimeObject* L_27;
		L_27 = SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, 5, ((int32_t)557195635));
		__this->___GRAVITY_15 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAVITY_15), (void*)L_28);
		RuntimeObject* L_29 = __this->___GRAVITY_15;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)231), (-0.150000006f));
		RuntimeObject* L_30;
		L_30 = SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)-377020203), (bool)1, (bool)1);
		__this->___MOVE_ME_16 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_ME_16), (void*)L_32);
		RuntimeObject* L_33;
		L_33 = SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		RuntimeObject* L_35 = __this->___MOVE_ME_16;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)19), L_35);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_DIVING_get_MY_mC9132598863AC4FC4606E61203A51C48E10B5E09 (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DIVING_set_MY_m67471036F06188DECA6EC16564B455D91B490EC7 (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_DIVING_get_THERE_m54E4EBA5DA0C530DD8ADC93CE6A0F77036A58647 (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DIVING_set_THERE_m873CEEFAB8FAB901C98858157E7576C7E9210CA1 (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DIVING_set__world_mE1E43A2D41660E8B3730F5E4345DC32612C1176E (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_DIVING_get_Current_mB2A85224EB883614C5D6949DB2B007B8B956385B (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DIVING_set_Current_m0B5E6775A725246F46553B336C9F7651BF91E5F3 (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DIVING_Reset_m4025396EE27C81286EB012BA7828C8D503C3A82F (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DIVING__ctor_m505394312F9D7A8A75E0D9F4CC2C0796414ED5CB (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DIVING__ctor_mDF3F386B6DBF66BB93618C7495F46A05393D9B72 (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SET_DIVING_set_MY_m67471036F06188DECA6EC16564B455D91B490EC7_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SET_DIVING_set_THERE_m873CEEFAB8FAB901C98858157E7576C7E9210CA1_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SET_DIVING_set__world_mE1E43A2D41660E8B3730F5E4345DC32612C1176E_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SET_DIVING_MoveNext_mDAF94A022965B4B14480DF893DB4CE4207A8CE03 (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, const RuntimeMethod* method) 
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
		L_1 = SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)2089081969));
		__this->___FRIC_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRIC_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___FRIC_1;
		NullCheck(L_3);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (0.300000012f));
		RuntimeObject* L_4;
		L_4 = SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, 5, ((int32_t)1042033433));
		__this->___MODE_TAUCHEN_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_TAUCHEN_2), (void*)L_5);
		RuntimeObject* L_6 = __this->___MODE_TAUCHEN_2;
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)231), (bool)1);
		__this->___MODE_TAUCHEN_2_val = L_7;
		RuntimeObject* L_8;
		L_8 = SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)-1052624291));
		__this->___MOVING_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_3), (void*)L_9);
		RuntimeObject* L_10 = __this->___MOVING_3;
		float L_11 = __this->___MODE_TAUCHEN_2_val;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), L_11);
		RuntimeObject* L_12;
		L_12 = SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)461037372));
		__this->___STRENGTH_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STRENGTH_5), (void*)L_13);
		RuntimeObject* L_14 = __this->___STRENGTH_5;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (0.100000001f));
		RuntimeObject* L_15;
		L_15 = SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)525195384));
		__this->___WAVE_STR_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAVE_STR_7), (void*)L_16);
		RuntimeObject* L_17 = __this->___WAVE_STR_7;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (0.0299999993f));
		RuntimeObject* L_18;
		L_18 = SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, 5, ((int32_t)1319913115));
		__this->___FLOAT_STR_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOAT_STR_9), (void*)L_19);
		RuntimeObject* L_20 = __this->___FLOAT_STR_9;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)231), (0.0500000007f));
		RuntimeObject* L_21;
		L_21 = SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)1846696428));
		__this->___DUCK_STR_11 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_STR_11), (void*)L_22);
		RuntimeObject* L_23 = __this->___DUCK_STR_11;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), (0.0f));
		RuntimeObject* L_24;
		L_24 = SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)1830104876));
		__this->___FRIC_AIR_13 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRIC_AIR_13), (void*)L_25);
		RuntimeObject* L_26 = __this->___FRIC_AIR_13;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (0.699999988f));
		RuntimeObject* L_27;
		L_27 = SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, 5, ((int32_t)557195635));
		__this->___GRAVITY_15 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAVITY_15), (void*)L_28);
		RuntimeObject* L_29 = __this->___GRAVITY_15;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)231), (0.0f));
		RuntimeObject* L_30;
		L_30 = SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)-377020203), (bool)1, (bool)1);
		__this->___MOVE_ME_16 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_ME_16), (void*)L_32);
		RuntimeObject* L_33;
		L_33 = SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		RuntimeObject* L_35 = __this->___MOVE_ME_16;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)19), L_35);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_DEATH_get_MY_m13FA0576A722289627639EE7CA1CC9E07066D071 (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DEATH_set_MY_m3C11005D3069859C7372F79CDF84D4D554A8BC69 (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_DEATH_get_THERE_m8D8F8EF6CFA77DC1DCA15891756FB22EEDA368B7 (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DEATH_set_THERE_m36352411173DDC1139E40B99CB0205E49831C07B (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070 (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DEATH_set__world_m74B7F8F7567845CCD6A0104C1B7604C67CFE8FFF (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_DEATH_get_Current_mBFC6AC72BFBEF13F7136D7E9B6DF7911C96CEF17 (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DEATH_set_Current_m5F0244203D094D8B720CE8ACFF01C6FBE35FBEA3 (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DEATH_Reset_m9EB54C593CB365E2086E750127768A34B6D7FB7F (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DEATH__ctor_mB92175D43C40ECED36C078F9326149A461B872D6 (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_DEATH__ctor_m7580D6D87D73DF543B8A404188ED2C0B78751B0B (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SET_DEATH_set_MY_m3C11005D3069859C7372F79CDF84D4D554A8BC69_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SET_DEATH_set_THERE_m36352411173DDC1139E40B99CB0205E49831C07B_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SET_DEATH_set__world_m74B7F8F7567845CCD6A0104C1B7604C67CFE8FFF_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SET_DEATH_MoveNext_mD0DFA2B4AF359F34CD75625F988DB7935FFF998D (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, const RuntimeMethod* method) 
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
		L_1 = SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)2089081969));
		__this->___FRIC_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRIC_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___FRIC_1;
		NullCheck(L_3);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (0.00999999978f));
		RuntimeObject* L_4;
		L_4 = SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, 5, ((int32_t)-1027546889));
		__this->___MODE_DEATH_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_DEATH_2), (void*)L_5);
		RuntimeObject* L_6 = __this->___MODE_DEATH_2;
		NullCheck(L_6);
		float L_7;
		L_7 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)231), (bool)1);
		__this->___MODE_DEATH_2_val = L_7;
		RuntimeObject* L_8;
		L_8 = SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)-1052624291));
		__this->___MOVING_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_3), (void*)L_9);
		RuntimeObject* L_10 = __this->___MOVING_3;
		float L_11 = __this->___MODE_DEATH_2_val;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), L_11);
		RuntimeObject* L_12;
		L_12 = SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)461037372));
		__this->___STRENGTH_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STRENGTH_5), (void*)L_13);
		RuntimeObject* L_14 = __this->___STRENGTH_5;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (0.100000001f));
		RuntimeObject* L_15;
		L_15 = SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)525195384));
		__this->___WAVE_STR_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAVE_STR_7), (void*)L_16);
		RuntimeObject* L_17 = __this->___WAVE_STR_7;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (0.0299999993f));
		RuntimeObject* L_18;
		L_18 = SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, 5, ((int32_t)1319913115));
		__this->___FLOAT_STR_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOAT_STR_9), (void*)L_19);
		RuntimeObject* L_20 = __this->___FLOAT_STR_9;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)231), (0.0500000007f));
		RuntimeObject* L_21;
		L_21 = SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)1846696428));
		__this->___DUCK_STR_11 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DUCK_STR_11), (void*)L_22);
		RuntimeObject* L_23 = __this->___DUCK_STR_11;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), (0.0f));
		RuntimeObject* L_24;
		L_24 = SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)1830104876));
		__this->___FRIC_AIR_13 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRIC_AIR_13), (void*)L_25);
		RuntimeObject* L_26 = __this->___FRIC_AIR_13;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (0.699999988f));
		RuntimeObject* L_27;
		L_27 = SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, 5, ((int32_t)557195635));
		__this->___GRAVITY_15 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAVITY_15), (void*)L_28);
		RuntimeObject* L_29 = __this->___GRAVITY_15;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)231), (-0.349999994f));
		RuntimeObject* L_30;
		L_30 = SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)-377020203), (bool)1, (bool)1);
		__this->___MOVE_ME_16 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_ME_16), (void*)L_32);
		RuntimeObject* L_33;
		L_33 = SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		RuntimeObject* L_35 = __this->___MOVE_ME_16;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)19), L_35);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_MOVING_get_MY_mA389AD0ACE4BAD090D4FFCF8CC86E2337CBD69C4 (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_MOVING_set_MY_m716BB5F50C75E3349E8E19A3F9FF881C3F40B6B5 (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_MOVING_get_THERE_m437AF4A776F2F493E86DBB69366821F1E47D07B5 (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_MOVING_set_THERE_m1606F04893C4CF81D03CCBA21BE8BE1EF2306232 (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_MOVING_set__world_mC0B53C55B0E39101C173C38C6D3AC8F11EBD3E64 (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_MOVING_get_Current_mB07DCAC01CD4196C2C4151E0078BF26F48D24561 (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_MOVING_set_Current_m2796642E15F8F4F2C670138CD1B7E60040B48A9F (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_MOVING_Reset_m7BA66AB82531417A8A97610637ADDC4CC43B517F (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_MOVING__ctor_m514B80647FB350BFB8AEDE9DF857BB701A7DF0C4 (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_MOVING__ctor_m29143593A086CA0210FFC8DFEDA5B9C2313C7112 (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SET_MOVING_set_MY_m716BB5F50C75E3349E8E19A3F9FF881C3F40B6B5_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SET_MOVING_set_THERE_m1606F04893C4CF81D03CCBA21BE8BE1EF2306232_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SET_MOVING_set__world_mC0B53C55B0E39101C173C38C6D3AC8F11EBD3E64_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SET_MOVING_MoveNext_mC54F71CC76FA7C80332020D675516A369AFDC411 (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* V_0 = NULL;
	SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* V_1 = NULL;
	SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-1052624291));
		__this->___MOVING_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___MOVING_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___MOVING_1_val = L_4;
		float L_5 = __this->___MOVING_1_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_5, (0.0f), NULL);
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
		L_7 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)-1023981992));
		__this->___MODE_GEHEN_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_GEHEN_2), (void*)L_8);
		RuntimeObject* L_9 = __this->___MODE_GEHEN_2;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___MODE_GEHEN_2_val = L_10;
		RuntimeObject* L_11;
		L_11 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, 5, ((int32_t)-1052624291));
		__this->___MOVING_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_3), (void*)L_12);
		RuntimeObject* L_13 = __this->___MOVING_3;
		NullCheck(L_13);
		float L_14;
		L_14 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)231), (bool)1);
		__this->___MOVING_3_val = L_14;
		float L_15 = __this->___MOVING_3_val;
		float L_16 = __this->___MODE_GEHEN_2_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_00f2;
		}
	}
	{
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_18 = (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0*)il2cpp_codegen_object_new(SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0_il2cpp_TypeInfo_var);
		SET_WALKING__ctor_m6077994146222E0B4630F32AA4DD0F910A7B9B86(L_18, NULL);
		V_0 = L_18;
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_19 = V_0;
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_20 = L_19;
		RuntimeObject* L_21;
		L_21 = SET_MOVING_get_MY_mA389AD0ACE4BAD090D4FFCF8CC86E2337CBD69C4_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_22 = L_20;
		RuntimeObject* L_23;
		L_23 = SET_MOVING_get_THERE_m437AF4A776F2F493E86DBB69366821F1E47D07B5_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_23);
		RuntimeObject* L_24;
		L_24 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_24);
		RuntimeObject* L_25;
		L_25 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_26 = V_0;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_26);
		return (bool)0;
	}

IL_00f2:
	{
		RuntimeObject* L_28;
		L_28 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, 5, ((int32_t)-539849892));
		__this->___MODE_SCHWIMMEN_4 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_SCHWIMMEN_4), (void*)L_29);
		RuntimeObject* L_30 = __this->___MODE_SCHWIMMEN_4;
		NullCheck(L_30);
		float L_31;
		L_31 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)231), (bool)1);
		__this->___MODE_SCHWIMMEN_4_val = L_31;
		RuntimeObject* L_32;
		L_32 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, 5, ((int32_t)-1052624291));
		__this->___MOVING_5 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_5), (void*)L_33);
		RuntimeObject* L_34 = __this->___MOVING_5;
		NullCheck(L_34);
		float L_35;
		L_35 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)231), (bool)1);
		__this->___MOVING_5_val = L_35;
		float L_36 = __this->___MOVING_5_val;
		float L_37 = __this->___MODE_SCHWIMMEN_4_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_36, L_37, NULL);
		if (!L_38)
		{
			goto IL_019b;
		}
	}
	{
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_39 = (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700*)il2cpp_codegen_object_new(SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700_il2cpp_TypeInfo_var);
		SET_SWIMMING__ctor_m4A4036B39AE23004B3529E4A872D3CA7C526E7E7(L_39, NULL);
		V_1 = L_39;
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_40 = V_1;
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_41 = L_40;
		RuntimeObject* L_42;
		L_42 = SET_MOVING_get_MY_mA389AD0ACE4BAD090D4FFCF8CC86E2337CBD69C4_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_43 = L_41;
		RuntimeObject* L_44;
		L_44 = SET_MOVING_get_THERE_m437AF4A776F2F493E86DBB69366821F1E47D07B5_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_44);
		RuntimeObject* L_45;
		L_45 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_45);
		RuntimeObject* L_46;
		L_46 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_47 = V_1;
		NullCheck(L_46);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_47);
		return (bool)0;
	}

IL_019b:
	{
		RuntimeObject* L_49;
		L_49 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_49, 5, ((int32_t)1042033433));
		__this->___MODE_TAUCHEN_6 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_TAUCHEN_6), (void*)L_50);
		RuntimeObject* L_51 = __this->___MODE_TAUCHEN_6;
		NullCheck(L_51);
		float L_52;
		L_52 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)231), (bool)1);
		__this->___MODE_TAUCHEN_6_val = L_52;
		RuntimeObject* L_53;
		L_53 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)-1052624291));
		__this->___MOVING_7 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVING_7), (void*)L_54);
		RuntimeObject* L_55 = __this->___MOVING_7;
		NullCheck(L_55);
		float L_56;
		L_56 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)231), (bool)1);
		__this->___MOVING_7_val = L_56;
		float L_57 = __this->___MOVING_7_val;
		float L_58 = __this->___MODE_TAUCHEN_6_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_57, L_58, NULL);
		if (!L_59)
		{
			goto IL_0244;
		}
	}
	{
		SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* L_60 = (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C*)il2cpp_codegen_object_new(SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C_il2cpp_TypeInfo_var);
		SET_DIVING__ctor_m505394312F9D7A8A75E0D9F4CC2C0796414ED5CB(L_60, NULL);
		V_2 = L_60;
		SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* L_61 = V_2;
		SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* L_62 = L_61;
		RuntimeObject* L_63;
		L_63 = SET_MOVING_get_MY_mA389AD0ACE4BAD090D4FFCF8CC86E2337CBD69C4_inline(__this, NULL);
		NullCheck(L_62);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_62, L_63);
		SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* L_64 = L_62;
		RuntimeObject* L_65;
		L_65 = SET_MOVING_get_THERE_m437AF4A776F2F493E86DBB69366821F1E47D07B5_inline(__this, NULL);
		NullCheck(L_64);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_64, L_65);
		RuntimeObject* L_66;
		L_66 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		NullCheck(L_64);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_64, L_66);
		RuntimeObject* L_67;
		L_67 = SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline(__this, NULL);
		SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* L_68 = V_2;
		NullCheck(L_67);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_67, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_68);
		return (bool)0;
	}

IL_0244:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* STOP_MOVING_get_MY_m71C1C675E1FC701AD9E717981F8CA2E42A578AAE (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void STOP_MOVING_set_MY_m9B7BDA183D1743AD8D08EBFE3369AF714716EC2B (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* STOP_MOVING_get_THERE_m1DEAB28D4CB3D368F567EC6A2D5B289B88246CB8 (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void STOP_MOVING_set_THERE_m4EC383C38E0B86DBCE24FA254306FACD3D8714C8 (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* STOP_MOVING_get__world_mDB0431E506CEF2E5F3C6F234561473A9B1E3CD53 (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void STOP_MOVING_set__world_m7564C2F4F7C927D28E3C0EFA049272449FCFAAAA (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* STOP_MOVING_get_Current_mF1B9ED4579AECB8140F339D6B81F2865623C1BE5 (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void STOP_MOVING_set_Current_m927FEF98680D8F9D62C4048E045BCE2F49F74618 (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void STOP_MOVING_Reset_m3C2758BCC284A1CDCDAA872B5A49EFB36647B66F (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void STOP_MOVING__ctor_mE5C05CF9532F1AED7F5B1C339F0EEE6B12908EA5 (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void STOP_MOVING__ctor_mF18B545715344B54679E422F65E5B2E935922AFA (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		STOP_MOVING_set_MY_m9B7BDA183D1743AD8D08EBFE3369AF714716EC2B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		STOP_MOVING_set_THERE_m4EC383C38E0B86DBCE24FA254306FACD3D8714C8_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		STOP_MOVING_set__world_m7564C2F4F7C927D28E3C0EFA049272449FCFAAAA_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool STOP_MOVING_MoveNext_m249E43F9E95CD90FE0CC11669D1F22DC59BF83A3 (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = STOP_MOVING_get__world_mDB0431E506CEF2E5F3C6F234561473A9B1E3CD53_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)431));
		__this->___PLAYER_VX_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___PLAYER_VX_1;
		NullCheck(L_3);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (0.0f));
		RuntimeObject* L_4;
		L_4 = STOP_MOVING_get__world_mDB0431E506CEF2E5F3C6F234561473A9B1E3CD53_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, 5, ((int32_t)432));
		__this->___PLAYER_VY_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_3), (void*)L_5);
		RuntimeObject* L_6 = __this->___PLAYER_VY_3;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)231), (0.0f));
		RuntimeObject* L_7;
		L_7 = STOP_MOVING_get__world_mDB0431E506CEF2E5F3C6F234561473A9B1E3CD53_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)433));
		__this->___PLAYER_VZ_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VZ_5), (void*)L_8);
		RuntimeObject* L_9 = __this->___PLAYER_VZ_5;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (0.0f));
		RuntimeObject* L_10;
		L_10 = STOP_MOVING_get__world_mDB0431E506CEF2E5F3C6F234561473A9B1E3CD53_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_10, 5, ((int32_t)434));
		__this->___PLAYER_VROT_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VROT_7), (void*)L_11);
		RuntimeObject* L_12 = __this->___PLAYER_VROT_7;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_BLUE_get_MY_mD74744CD65083625748ECDE0328024A482D5A88F (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_BLUE_set_MY_m274165DDFA11982370C286A3A72A39E7762C0E26 (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_BLUE_get_THERE_m9B15A95BFE569B60BA0E37FB93E9CA89CB45F27D (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_BLUE_set_THERE_mDBCF0A31891C32F0507F8CA885FF6EE62DFE196E (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_BLUE_get__world_m05C1AEB2AAFE8D376C2ED79E72B63745D2B5DBFE (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_BLUE_set__world_m6D757A5088827ADDF78C9726C3F015658985DB23 (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SET_BLUE_get_Current_m8B7F202DFAC33D781ED76F45526D05B9F41EA01B (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_BLUE_set_Current_m39D316016C12C819EDF82688F5EACB8713E248AF (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_BLUE_Reset_mAFA2EB29E95F6C51A3E69260945E01B63234FB77 (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_BLUE__ctor_m398E7AA8C854CA036D788D740731EC3AA3B5C19F (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_BLUE__ctor_m691F5023B70B20177FF893FD812F42876D5C9F67 (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SET_BLUE_set_MY_m274165DDFA11982370C286A3A72A39E7762C0E26_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SET_BLUE_set_THERE_mDBCF0A31891C32F0507F8CA885FF6EE62DFE196E_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SET_BLUE_set__world_m6D757A5088827ADDF78C9726C3F015658985DB23_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SET_BLUE_MoveNext_mD3E58528BB688EF29559E8FCF83C2D2B5716A5C5 (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, const RuntimeMethod* method) 
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
		L_1 = SET_BLUE_get__world_m05C1AEB2AAFE8D376C2ED79E72B63745D2B5DBFE_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-1812731791), (bool)1, (bool)1);
		__this->___PAL_BLUE_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PAL_BLUE_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = SET_BLUE_get__world_m05C1AEB2AAFE8D376C2ED79E72B63745D2B5DBFE_inline(__this, NULL);
		RuntimeObject* L_5 = __this->___PAL_BLUE_0;
		NullCheck(L_4);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, L_5, (0.699999988f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RESET_BLUE_get_MY_mDA351290B0556DB4E048ABE8EF72763BEF01D800 (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESET_BLUE_set_MY_m80F44C69D7668614A4F0AD85313BF8CE5F488154 (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RESET_BLUE_get_THERE_mE3E11C58C2A0BEE2D8D46ACE6CFD74548C9BB9A8 (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESET_BLUE_set_THERE_m4AEC29D8DB5438629DB961DE58BFC7A0D5FF664D (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RESET_BLUE_get__world_m4B96625F38E374698D59E820B959453C91CC9650 (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESET_BLUE_set__world_m456E6D17C482DFF18F5C80C7DD390FAFC215634F (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RESET_BLUE_get_Current_m75672F7185B1AEE28268E65E90432E619DD41D1A (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESET_BLUE_set_Current_m2A570D26A87AFBD9CFE8357ADDF6B27F10434CC1 (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESET_BLUE_Reset_mCE0701183EBFBB21DBF28F34DC381E08AFB73BCB (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESET_BLUE__ctor_m73989955A2A9A7CF3F3EECBC45D7A02D3BCE93D7 (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESET_BLUE__ctor_mF962AC5376B25DB31E7339340CD96E2D2C8F03B4 (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		RESET_BLUE_set_MY_m80F44C69D7668614A4F0AD85313BF8CE5F488154_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		RESET_BLUE_set_THERE_m4AEC29D8DB5438629DB961DE58BFC7A0D5FF664D_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		RESET_BLUE_set__world_m456E6D17C482DFF18F5C80C7DD390FAFC215634F_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RESET_BLUE_MoveNext_m208F9802D71113AD53FA3DE3304B7587EE44A85D (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, const RuntimeMethod* method) 
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
		L_1 = RESET_BLUE_get__world_m4B96625F38E374698D59E820B959453C91CC9650_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-1812731791), (bool)1, (bool)1);
		__this->___PAL_BLUE_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PAL_BLUE_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = RESET_BLUE_get__world_m4B96625F38E374698D59E820B959453C91CC9650_inline(__this, NULL);
		RuntimeObject* L_5 = __this->___PAL_BLUE_0;
		NullCheck(L_4);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, L_5, (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENTER_WATER_get_MY_m5DEA0D04E5360E307E0EF755C93A0925AC93C834 (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENTER_WATER_set_MY_m9341E68D26B5F4524724CAE042697348401C04BE (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENTER_WATER_get_THERE_m5AEFB0AB6AC2239451B1AE719C07A492E935D1D7 (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENTER_WATER_set_THERE_mD634DF002FB5BF6A979BE8F4F5416BE3BE94EAD9 (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENTER_WATER_get__world_m76B94AD5B60615CE463CF08C16B621A64101635C (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENTER_WATER_set__world_mBAE97DDD211BCAA2B6E1278673D67F8650324A7D (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENTER_WATER_get_Current_mE49102D452AF54F2458D291A154C8EFF6F51DAC4 (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENTER_WATER_set_Current_m7F0FF50A2301A50D4B30BAF54DA7D836750D9F6C (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENTER_WATER_Reset_mDF916BE03C1BE9683BD787ABDFD2AA2687FF593B (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENTER_WATER__ctor_m0906E2B4B5D32E9948BFB4835346AC8442ECE71E (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENTER_WATER__ctor_m1D325A05232422B755B63CEE1435458EB9B458C7 (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		ENTER_WATER_set_MY_m9341E68D26B5F4524724CAE042697348401C04BE_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		ENTER_WATER_set_THERE_mD634DF002FB5BF6A979BE8F4F5416BE3BE94EAD9_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		ENTER_WATER_set__world_mBAE97DDD211BCAA2B6E1278673D67F8650324A7D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ENTER_WATER_MoveNext_m6E110E13F3F2F7719D7F132D58FA7CC602BB33B8 (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = ENTER_WATER_get__world_m76B94AD5B60615CE463CF08C16B621A64101635C_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)103833604), (bool)1, (bool)1);
		__this->___FWT01SND_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FWT01SND_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = ENTER_WATER_get__world_m76B94AD5B60615CE463CF08C16B621A64101635C_inline(__this, NULL);
		RuntimeObject* L_5 = __this->___FWT01SND_0;
		NullCheck(L_4);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, L_5, (0.800000012f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_6 = (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700*)il2cpp_codegen_object_new(SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700_il2cpp_TypeInfo_var);
		SET_SWIMMING__ctor_m4A4036B39AE23004B3529E4A872D3CA7C526E7E7(L_6, NULL);
		V_0 = L_6;
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_7 = V_0;
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_8 = L_7;
		RuntimeObject* L_9;
		L_9 = ENTER_WATER_get_MY_m5DEA0D04E5360E307E0EF755C93A0925AC93C834_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_8, L_9);
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_10 = L_8;
		RuntimeObject* L_11;
		L_11 = ENTER_WATER_get_THERE_m5AEFB0AB6AC2239451B1AE719C07A492E935D1D7_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12;
		L_12 = ENTER_WATER_get__world_m76B94AD5B60615CE463CF08C16B621A64101635C_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_12);
		RuntimeObject* L_13;
		L_13 = ENTER_WATER_get__world_m76B94AD5B60615CE463CF08C16B621A64101635C_inline(__this, NULL);
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_14 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_14);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LEAVE_WATER_get_MY_m3054AD47EB44C2AFA24BC57F786932CA71FF5A87 (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LEAVE_WATER_set_MY_m255E4C86B6377D1A936AF622D514720123886ECF (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LEAVE_WATER_get_THERE_mDAF0A62005ACBD29CC37638CDDC47C9FD1A22688 (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LEAVE_WATER_set_THERE_m66C5BA1DC35650B8D16CBD895D24C8E301821273 (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LEAVE_WATER_get__world_m4AA7508276777A7E8B0F896FFA6564E0F04FC2C0 (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LEAVE_WATER_set__world_m915030EF949EF5F8E0D2915AC221280B678AC29C (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LEAVE_WATER_get_Current_mD4212DB76FC258E0842D5429687FE94B8F222590 (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LEAVE_WATER_set_Current_m98C8EFFE67705C32BED88F0B60F730004492D580 (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LEAVE_WATER_Reset_mE73E54EAA8D90FDD7FF645DC770A111257180DF0 (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LEAVE_WATER__ctor_m4E1D250032D08C12BAE7CDB122F24B53B2988A95 (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LEAVE_WATER__ctor_m5A16252F02A5165596FFDE6D35497DBD9181C7AD (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LEAVE_WATER_set_MY_m255E4C86B6377D1A936AF622D514720123886ECF_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LEAVE_WATER_set_THERE_m66C5BA1DC35650B8D16CBD895D24C8E301821273_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LEAVE_WATER_set__world_m915030EF949EF5F8E0D2915AC221280B678AC29C_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LEAVE_WATER_MoveNext_mC11BDAABB7D20DF9E3C9ACE51F7670039862BAA9 (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_1 = (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0*)il2cpp_codegen_object_new(SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0_il2cpp_TypeInfo_var);
		SET_WALKING__ctor_m6077994146222E0B4630F32AA4DD0F910A7B9B86(L_1, NULL);
		V_0 = L_1;
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_2 = V_0;
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = LEAVE_WATER_get_MY_m3054AD47EB44C2AFA24BC57F786932CA71FF5A87_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = LEAVE_WATER_get_THERE_mDAF0A62005ACBD29CC37638CDDC47C9FD1A22688_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = LEAVE_WATER_get__world_m4AA7508276777A7E8B0F896FFA6564E0F04FC2C0_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = LEAVE_WATER_get__world_m4AA7508276777A7E8B0F896FFA6564E0F04FC2C0_inline(__this, NULL);
		SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DIVE_UP_get_MY_mAEE0DABF04D59B5015D96617708EA304C64039CA (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DIVE_UP_set_MY_m6C346A7F4CEAC68FF4220544EE586711A20A5A10 (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DIVE_UP_get_THERE_m2C36F1841186C3C0C508E7FB8D8819C49BA115FA (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DIVE_UP_set_THERE_m0A5A26B600EDF26BA7A29CD0A4451B263856D3B6 (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DIVE_UP_get__world_mEA92A68D20D94444FA312A7FF5EF792BC2D89606 (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DIVE_UP_set__world_m0B92DACFAA684644FDFDFF7E9234E75B36C7B716 (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DIVE_UP_get_Current_m93EF42726F05EC6AFEEFF0FD2EF507A930FCFE92 (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DIVE_UP_set_Current_m843DA37DF7E1BF01F67E66E0130CB34AE44E7D68 (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DIVE_UP_Reset_m54A36A9128FA3910B7300226E0D9737F56E4BE3F (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DIVE_UP__ctor_mDEF30EA1B86A3C80CECDAB11B27E4B39AD30AC83 (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DIVE_UP__ctor_m0E26DD932482CA708D9373006028E12E6855CD68 (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DIVE_UP_set_MY_m6C346A7F4CEAC68FF4220544EE586711A20A5A10_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DIVE_UP_set_THERE_m0A5A26B600EDF26BA7A29CD0A4451B263856D3B6_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DIVE_UP_set__world_m0B92DACFAA684644FDFDFF7E9234E75B36C7B716_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DIVE_UP_MoveNext_m6FFBEDDF3D942F05BFCD8C2DB7C49D7F5F8419D8 (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = DIVE_UP_get__world_mEA92A68D20D94444FA312A7FF5EF792BC2D89606_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-920774375), (bool)1, (bool)1);
		__this->___PLAYERINSPSND_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYERINSPSND_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = DIVE_UP_get__world_mEA92A68D20D94444FA312A7FF5EF792BC2D89606_inline(__this, NULL);
		RuntimeObject* L_5 = __this->___PLAYERINSPSND_0;
		NullCheck(L_4);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, L_5, (0.800000012f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* L_6 = (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249*)il2cpp_codegen_object_new(RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249_il2cpp_TypeInfo_var);
		RESET_BLUE__ctor_m73989955A2A9A7CF3F3EECBC45D7A02D3BCE93D7(L_6, NULL);
		V_0 = L_6;
		RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* L_7 = V_0;
		RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* L_8 = L_7;
		RuntimeObject* L_9;
		L_9 = DIVE_UP_get_MY_mAEE0DABF04D59B5015D96617708EA304C64039CA_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_8, L_9);
		RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* L_10 = L_8;
		RuntimeObject* L_11;
		L_11 = DIVE_UP_get_THERE_m2C36F1841186C3C0C508E7FB8D8819C49BA115FA_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12;
		L_12 = DIVE_UP_get__world_mEA92A68D20D94444FA312A7FF5EF792BC2D89606_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_12);
		RuntimeObject* L_13;
		L_13 = DIVE_UP_get__world_mEA92A68D20D94444FA312A7FF5EF792BC2D89606_inline(__this, NULL);
		RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* L_14 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_14);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REGIO_DIVE_get_MY_m181DC48A0D170B909AF627B36274242CE8B98B7C (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_DIVE_set_MY_m3DAFDB832E6A1284D818D74C1E11C3E3F4F426F1 (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REGIO_DIVE_get_THERE_m17B0B438E4FA2730C3DE2F118FC41C8AEA735CEF (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_DIVE_set_THERE_mE59E42F63F711274A5A6273F14ADCCF52C350879 (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_DIVE_set__world_m472E4612BF916FDBA54A9E3F335466374E29FB7B (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REGIO_DIVE_get_Current_m98198B2BFCE712284BDB1657E53E49E4EFD42113 (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_DIVE_set_Current_m96A6A146A59F2C971DE82F8BDC71E5A85D56BBDD (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_DIVE_Reset_m3855E7243F3A95CE80A04A893AED2EBC2FC1949D (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_DIVE__ctor_m03DFD64DF7BA92A16C19EAD1D9464248278ACAF8 (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_DIVE__ctor_mE735BD0C8BB0D9DD366F108A785DF9D603590917 (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REGIO_DIVE_set_MY_m3DAFDB832E6A1284D818D74C1E11C3E3F4F426F1_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REGIO_DIVE_set_THERE_mE59E42F63F711274A5A6273F14ADCCF52C350879_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REGIO_DIVE_set__world_m472E4612BF916FDBA54A9E3F335466374E29FB7B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REGIO_DIVE_MoveNext_m9F62619D330C7BA875F788846F89C4C57034EE63 (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)1369167822));
		__this->___UNDERWATER_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UNDERWATER_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___UNDERWATER_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___UNDERWATER_1_val = L_4;
		float L_5 = __this->___UNDERWATER_1_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_5, (1.0f), NULL);
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
		L_7 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)1369167822));
		__this->___UNDERWATER_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UNDERWATER_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___UNDERWATER_3;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (1.0f));
		RuntimeObject* L_10;
		L_10 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)103833604), (bool)1, (bool)1);
		__this->___FWT01SND_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FWT01SND_4), (void*)L_12);
		RuntimeObject* L_13;
		L_13 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		RuntimeObject* L_14 = __this->___FWT01SND_4;
		NullCheck(L_13);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, L_14, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_15;
		L_15 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)436));
		__this->___PLAYER_ARC_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_6), (void*)L_16);
		RuntimeObject* L_17;
		L_17 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_17, 5, ((int32_t)436));
		__this->___PLAYER_ARC_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_7), (void*)L_18);
		RuntimeObject* L_19 = __this->___PLAYER_ARC_7;
		NullCheck(L_19);
		float L_20;
		L_20 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARC_7_val = L_20;
		RuntimeObject* L_21;
		L_21 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)436));
		__this->___PLAYER_ARC_8 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_8), (void*)L_22);
		RuntimeObject* L_23 = __this->___PLAYER_ARC_8;
		NullCheck(L_23);
		float L_24;
		L_24 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARC_8_val = L_24;
		RuntimeObject* L_25 = __this->___PLAYER_ARC_6;
		float L_26 = __this->___PLAYER_ARC_8_val;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)231), ((float)il2cpp_codegen_add(L_26, (0.300000012f))));
		RuntimeObject* L_27;
		L_27 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, 5, ((int32_t)25486605));
		__this->___MY_SIZE_11 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_SIZE_11), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, 5, ((int32_t)25486605));
		__this->___MY_SIZE_12 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_SIZE_12), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_SIZE_12;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), (bool)1);
		__this->___MY_SIZE_12_val = L_32;
		RuntimeObject* L_33;
		L_33 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)25486605));
		__this->___MY_SIZE_13 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_SIZE_13), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_SIZE_13;
		NullCheck(L_35);
		float L_36;
		L_36 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), (bool)1);
		__this->___MY_SIZE_13_val = L_36;
		RuntimeObject* L_37 = __this->___MY_SIZE_11;
		float L_38 = __this->___MY_SIZE_13_val;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_38, (0.200000003f))));
		RuntimeObject* L_39;
		L_39 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_39, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_16 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_16), (void*)L_40);
		RuntimeObject* L_41;
		L_41 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_17 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_17), (void*)L_42);
		RuntimeObject* L_43 = __this->___PLAYER_SIZE_17;
		NullCheck(L_43);
		float L_44;
		L_44 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_17_val = L_44;
		RuntimeObject* L_45;
		L_45 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_18 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_18), (void*)L_46);
		RuntimeObject* L_47 = __this->___PLAYER_SIZE_18;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_18_val = L_48;
		RuntimeObject* L_49 = __this->___PLAYER_SIZE_16;
		float L_50 = __this->___PLAYER_SIZE_18_val;
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_50, (0.200000003f))));
		RuntimeObject* L_51;
		L_51 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_51, 5, ((int32_t)461));
		__this->___PLAYER_Z_21 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_21), (void*)L_52);
		RuntimeObject* L_53;
		L_53 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)461));
		__this->___PLAYER_Z_22 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_22), (void*)L_54);
		RuntimeObject* L_55 = __this->___PLAYER_Z_22;
		NullCheck(L_55);
		float L_56;
		L_56 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_22_val = L_56;
		RuntimeObject* L_57;
		L_57 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_57, 5, ((int32_t)461));
		__this->___PLAYER_Z_23 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_23), (void*)L_58);
		RuntimeObject* L_59 = __this->___PLAYER_Z_23;
		NullCheck(L_59);
		float L_60;
		L_60 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_23_val = L_60;
		RuntimeObject* L_61 = __this->___PLAYER_Z_21;
		float L_62 = __this->___PLAYER_Z_23_val;
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_62, (0.200000003f))));
		RuntimeObject* L_63;
		L_63 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_27 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_27), (void*)L_64);
		RuntimeObject* L_65 = __this->___PLAYER_LIGHT_27;
		NullCheck(L_65);
		float L_66;
		L_66 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)231), (bool)1);
		__this->___PLAYER_LIGHT_27_val = L_66;
		RuntimeObject* L_67;
		L_67 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_67, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_28 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_28), (void*)L_68);
		RuntimeObject* L_69 = __this->___PLAYER_LIGHT_28;
		float L_70 = __this->___PLAYER_LIGHT_27_val;
		NullCheck(L_69);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)231), ((float)il2cpp_codegen_add(L_70, (0.200000003f))));
		RuntimeObject* L_71;
		L_71 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		RuntimeObject* L_72;
		L_72 = REGIO_DIVE_get_MY_m181DC48A0D170B909AF627B36274242CE8B98B7C_inline(__this, NULL);
		RuntimeObject* L_73;
		L_73 = REGIO_DIVE_get_THERE_m17B0B438E4FA2730C3DE2F118FC41C8AEA735CEF_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_74;
		L_74 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, RuntimeObject*, RuntimeObject* >::Invoke(32, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, ((int32_t)1342576697), L_72, L_73);
		V_0 = L_74;
		RuntimeObject* L_75;
		L_75 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		RuntimeObject* L_76 = V_0;
		NullCheck(L_75);
		RuntimeObject* L_77;
		L_77 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_75, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_76);
		SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* L_78 = (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C*)il2cpp_codegen_object_new(SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C_il2cpp_TypeInfo_var);
		SET_DIVING__ctor_m505394312F9D7A8A75E0D9F4CC2C0796414ED5CB(L_78, NULL);
		V_1 = L_78;
		SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* L_79 = V_1;
		SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* L_80 = L_79;
		RuntimeObject* L_81;
		L_81 = REGIO_DIVE_get_MY_m181DC48A0D170B909AF627B36274242CE8B98B7C_inline(__this, NULL);
		NullCheck(L_80);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_80, L_81);
		SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* L_82 = L_80;
		RuntimeObject* L_83;
		L_83 = REGIO_DIVE_get_THERE_m17B0B438E4FA2730C3DE2F118FC41C8AEA735CEF_inline(__this, NULL);
		NullCheck(L_82);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_82, L_83);
		RuntimeObject* L_84;
		L_84 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		NullCheck(L_82);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_82, L_84);
		RuntimeObject* L_85;
		L_85 = REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline(__this, NULL);
		SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* L_86 = V_1;
		NullCheck(L_85);
		RuntimeObject* L_87;
		L_87 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_85, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_86);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REGIO_ARISE_get_MY_mD2F020D86416F768377085E9DE57CF821183434E (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_ARISE_set_MY_m6C126A6983AB375E31C02ECF7AC06C0A5D2B7394 (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REGIO_ARISE_get_THERE_m9E01A6BE7CC9A6761EC485674DB08E6D16882CB7 (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_ARISE_set_THERE_mF2AB71CE29EE5A4B8B67AC0B100C8E84ACB4C859 (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_ARISE_set__world_mE7B3BBCF25E520C769B5CD4BCAA5223BC2D6F224 (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REGIO_ARISE_get_Current_mD6E04579B1B40CC6FE18EA050070042A7BCFA9FB (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_ARISE_set_Current_mF53A7CD58C03B2B91464015E8EFFE7074756F15E (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_ARISE_Reset_mCCAAFB37901A94219949A7CFAE24C0A1D2F9D8E7 (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_ARISE__ctor_m62E6CF57A5E38F23C69F407C39286565791F0595 (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REGIO_ARISE__ctor_m4DB37665E3C88F837FF6D6BAE17C054CAE5B8994 (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REGIO_ARISE_set_MY_m6C126A6983AB375E31C02ECF7AC06C0A5D2B7394_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REGIO_ARISE_set_THERE_mF2AB71CE29EE5A4B8B67AC0B100C8E84ACB4C859_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REGIO_ARISE_set__world_mE7B3BBCF25E520C769B5CD4BCAA5223BC2D6F224_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REGIO_ARISE_MoveNext_m92EB26F1BB56CDD88625B56A2F75D57FAAC01B63 (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* V_1 = NULL;
	DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)1369167822));
		__this->___UNDERWATER_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UNDERWATER_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___UNDERWATER_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___UNDERWATER_1_val = L_4;
		float L_5 = __this->___UNDERWATER_1_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_5, (0.0f), NULL);
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
		L_7 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)1369167822));
		__this->___UNDERWATER_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UNDERWATER_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___UNDERWATER_3;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (0.0f));
		RuntimeObject* L_10;
		L_10 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_10, 5, ((int32_t)436));
		__this->___PLAYER_ARC_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_4), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)436));
		__this->___PLAYER_ARC_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_5), (void*)L_13);
		RuntimeObject* L_14 = __this->___PLAYER_ARC_5;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARC_5_val = L_15;
		RuntimeObject* L_16;
		L_16 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, 5, ((int32_t)436));
		__this->___PLAYER_ARC_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_6), (void*)L_17);
		RuntimeObject* L_18 = __this->___PLAYER_ARC_6;
		NullCheck(L_18);
		float L_19;
		L_19 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARC_6_val = L_19;
		RuntimeObject* L_20 = __this->___PLAYER_ARC_4;
		float L_21 = __this->___PLAYER_ARC_6_val;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_21, (0.300000012f))));
		RuntimeObject* L_22;
		L_22 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_22, 5, ((int32_t)25486605));
		__this->___MY_SIZE_9 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_SIZE_9), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)25486605));
		__this->___MY_SIZE_10 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_SIZE_10), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_SIZE_10;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (bool)1);
		__this->___MY_SIZE_10_val = L_27;
		RuntimeObject* L_28;
		L_28 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, 5, ((int32_t)25486605));
		__this->___MY_SIZE_11 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_SIZE_11), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_SIZE_11;
		NullCheck(L_30);
		float L_31;
		L_31 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)231), (bool)1);
		__this->___MY_SIZE_11_val = L_31;
		RuntimeObject* L_32 = __this->___MY_SIZE_9;
		float L_33 = __this->___MY_SIZE_11_val;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)231), ((float)il2cpp_codegen_add(L_33, (0.200000003f))));
		RuntimeObject* L_34;
		L_34 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_34, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_14 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_14), (void*)L_35);
		RuntimeObject* L_36;
		L_36 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_36, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_15 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_15), (void*)L_37);
		RuntimeObject* L_38 = __this->___PLAYER_SIZE_15;
		NullCheck(L_38);
		float L_39;
		L_39 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_15_val = L_39;
		RuntimeObject* L_40;
		L_40 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_40, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_16 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_16), (void*)L_41);
		RuntimeObject* L_42 = __this->___PLAYER_SIZE_16;
		NullCheck(L_42);
		float L_43;
		L_43 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_16_val = L_43;
		RuntimeObject* L_44 = __this->___PLAYER_SIZE_14;
		float L_45 = __this->___PLAYER_SIZE_16_val;
		NullCheck(L_44);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)231), ((float)il2cpp_codegen_add(L_45, (0.200000003f))));
		RuntimeObject* L_46;
		L_46 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, 5, ((int32_t)461));
		__this->___PLAYER_Z_19 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_19), (void*)L_47);
		RuntimeObject* L_48;
		L_48 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, 5, ((int32_t)461));
		__this->___PLAYER_Z_20 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_20), (void*)L_49);
		RuntimeObject* L_50 = __this->___PLAYER_Z_20;
		NullCheck(L_50);
		float L_51;
		L_51 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_20_val = L_51;
		RuntimeObject* L_52;
		L_52 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, 5, ((int32_t)461));
		__this->___PLAYER_Z_21 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Z_21), (void*)L_53);
		RuntimeObject* L_54 = __this->___PLAYER_Z_21;
		NullCheck(L_54);
		float L_55;
		L_55 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)231), (bool)1);
		__this->___PLAYER_Z_21_val = L_55;
		RuntimeObject* L_56 = __this->___PLAYER_Z_19;
		float L_57 = __this->___PLAYER_Z_21_val;
		NullCheck(L_56);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_56, ((int32_t)231), ((float)il2cpp_codegen_add(L_57, (0.200000003f))));
		RuntimeObject* L_58;
		L_58 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_58, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_25 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_25), (void*)L_59);
		RuntimeObject* L_60 = __this->___PLAYER_LIGHT_25;
		NullCheck(L_60);
		float L_61;
		L_61 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)231), (bool)1);
		__this->___PLAYER_LIGHT_25_val = L_61;
		RuntimeObject* L_62;
		L_62 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_26 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_26), (void*)L_63);
		RuntimeObject* L_64 = __this->___PLAYER_LIGHT_26;
		float L_65 = __this->___PLAYER_LIGHT_25_val;
		NullCheck(L_64);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)231), ((float)il2cpp_codegen_add(L_65, (-0.200000003f))));
		RuntimeObject* L_66;
		L_66 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		RuntimeObject* L_67;
		L_67 = REGIO_ARISE_get_MY_mD2F020D86416F768377085E9DE57CF821183434E_inline(__this, NULL);
		RuntimeObject* L_68;
		L_68 = REGIO_ARISE_get_THERE_m9E01A6BE7CC9A6761EC485674DB08E6D16882CB7_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, RuntimeObject*, RuntimeObject* >::Invoke(32, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, ((int32_t)1917066007), L_67, L_68);
		V_0 = L_69;
		RuntimeObject* L_70;
		L_70 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		RuntimeObject* L_71 = V_0;
		NullCheck(L_70);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_70, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_71);
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_73 = (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700*)il2cpp_codegen_object_new(SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700_il2cpp_TypeInfo_var);
		SET_SWIMMING__ctor_m4A4036B39AE23004B3529E4A872D3CA7C526E7E7(L_73, NULL);
		V_1 = L_73;
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_74 = V_1;
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_75 = L_74;
		RuntimeObject* L_76;
		L_76 = REGIO_ARISE_get_MY_mD2F020D86416F768377085E9DE57CF821183434E_inline(__this, NULL);
		NullCheck(L_75);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_75, L_76);
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_77 = L_75;
		RuntimeObject* L_78;
		L_78 = REGIO_ARISE_get_THERE_m9E01A6BE7CC9A6761EC485674DB08E6D16882CB7_inline(__this, NULL);
		NullCheck(L_77);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_77, L_78);
		RuntimeObject* L_79;
		L_79 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_77);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_77, L_79);
		RuntimeObject* L_80;
		L_80 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* L_81 = V_1;
		NullCheck(L_80);
		RuntimeObject* L_82;
		L_82 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_80, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_81);
		DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* L_83 = (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B*)il2cpp_codegen_object_new(DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B_il2cpp_TypeInfo_var);
		DIVE_UP__ctor_mDEF30EA1B86A3C80CECDAB11B27E4B39AD30AC83(L_83, NULL);
		V_2 = L_83;
		DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* L_84 = V_2;
		DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* L_85 = L_84;
		RuntimeObject* L_86;
		L_86 = REGIO_ARISE_get_MY_mD2F020D86416F768377085E9DE57CF821183434E_inline(__this, NULL);
		NullCheck(L_85);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_85, L_86);
		DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* L_87 = L_85;
		RuntimeObject* L_88;
		L_88 = REGIO_ARISE_get_THERE_m9E01A6BE7CC9A6761EC485674DB08E6D16882CB7_inline(__this, NULL);
		NullCheck(L_87);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_87, L_88);
		RuntimeObject* L_89;
		L_89 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		NullCheck(L_87);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_87, L_89);
		RuntimeObject* L_90;
		L_90 = REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline(__this, NULL);
		DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* L_91 = V_2;
		NullCheck(L_90);
		RuntimeObject* L_92;
		L_92 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_90, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_91);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYER_get_MY_m88D85E1BA0C6FDA9C88DC675A244DD7435DE28AE (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYER_set_MY_mDE2740F5B7DF66A6690C2DA225FA2475263F7EEC (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYER_get_THERE_mFFEE2D518C7BFEF0CDA0D7149E03B7A3D38E9553 (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYER_set_THERE_mB3EC55509499597DCBB9665B0292202C93ED401E (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1 (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYER_set__world_m0821EA289C99F49E95343986D1A2CB4675215124 (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYER_get_Current_m1EA6711E8987B52877D5D7176AC58040813FED0B (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYER_set_Current_m60B3489EC69DFAF77629F452E63B6D70AC3D22A4 (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYER_Reset_m7C234427D0353723925FE266E136E2E58153315B (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYER__ctor_mB8D5F81CBF89B5D337064FAB0E5DB88B0109CB9D (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYER__ctor_m3BBA37E58A11C6D58E568D5E9E2E240921E333BC (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		HITPLAYER_set_MY_mDE2740F5B7DF66A6690C2DA225FA2475263F7EEC_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		HITPLAYER_set_THERE_mB3EC55509499597DCBB9665B0292202C93ED401E_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		HITPLAYER_set__world_m0821EA289C99F49E95343986D1A2CB4675215124_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HITPLAYER_MoveNext_mCDE7CFA8467B6D36F2DB0DE78C428FFD2097C3A9 (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, const RuntimeMethod* method) 
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
	RuntimeObject* G_B18_0 = NULL;
	HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* G_B18_1 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* G_B17_1 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* G_B19_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-1027546889));
		__this->___MODE_DEATH_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_DEATH_0), (void*)L_2);
		RuntimeObject* L_3 = __this->___MODE_DEATH_0;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___MODE_DEATH_0_val = L_4;
		RuntimeObject* L_5;
		L_5 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
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
		float L_10 = __this->___MODE_DEATH_0_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		return (bool)0;
	}

IL_0078:
	{
		RuntimeObject* L_12;
		L_12 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)1756335307));
		__this->___GOD_MODE_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GOD_MODE_3), (void*)L_13);
		RuntimeObject* L_14 = __this->___GOD_MODE_3;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (bool)1);
		__this->___GOD_MODE_3_val = L_15;
		float L_16 = __this->___GOD_MODE_3_val;
		bool L_17;
		L_17 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_16, (0.0f), NULL);
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		return (bool)0;
	}

IL_00ba:
	{
		RuntimeObject* L_18;
		L_18 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_4), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_5 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_5), (void*)L_21);
		RuntimeObject* L_22 = __this->___HITSERIOUSNESS_5;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_5_val = L_23;
		RuntimeObject* L_24;
		L_24 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_6 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_6), (void*)L_25);
		RuntimeObject* L_26 = __this->___PLAYER_RESULT_6;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (bool)1);
		__this->___PLAYER_RESULT_6_val = L_27;
		RuntimeObject* L_28;
		L_28 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, 5, ((int32_t)1295621997));
		__this->___TOUGHNESS_11 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TOUGHNESS_11), (void*)L_29);
		RuntimeObject* L_30 = __this->___TOUGHNESS_11;
		NullCheck(L_30);
		float L_31;
		L_31 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)231), (bool)1);
		__this->___TOUGHNESS_11_val = L_31;
		RuntimeObject* L_32 = __this->___HITSERIOUSNESS_4;
		float L_33 = __this->___PLAYER_RESULT_6_val;
		float L_34 = __this->___TOUGHNESS_11_val;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)231), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_33, (-5.0f))), L_34)));
		RuntimeObject* L_35;
		L_35 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_13 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_13), (void*)L_36);
		RuntimeObject* L_37 = __this->___PLAYER_ARMOUR_13;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARMOUR_13_val = L_38;
		float L_39 = __this->___PLAYER_ARMOUR_13_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_39, (0.0f), NULL);
		if (L_40)
		{
			goto IL_02e0;
		}
	}
	{
		RuntimeObject* L_41;
		L_41 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_14 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_14), (void*)L_42);
		RuntimeObject* L_43 = __this->___HITSERIOUSNESS_14;
		NullCheck(L_43);
		float L_44;
		L_44 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_14_val = L_44;
		RuntimeObject* L_45;
		L_45 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_15 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_15), (void*)L_46);
		RuntimeObject* L_47 = __this->___PLAYER_ARMOUR_15;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARMOUR_15_val = L_48;
		RuntimeObject* L_49;
		L_49 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_49, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_16 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_16), (void*)L_50);
		RuntimeObject* L_51 = __this->___PLAYER_ARMOUR_16;
		float L_52 = __this->___PLAYER_ARMOUR_15_val;
		float L_53 = __this->___HITSERIOUSNESS_14_val;
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)231), ((float)il2cpp_codegen_add(L_52, L_53)));
		RuntimeObject* L_54;
		L_54 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_54, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_17 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_17), (void*)L_55);
		RuntimeObject* L_56;
		L_56 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_18 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_18), (void*)L_57);
		RuntimeObject* L_58 = __this->___HITSERIOUSNESS_18;
		NullCheck(L_58);
		float L_59;
		L_59 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_18_val = L_59;
		RuntimeObject* L_60;
		L_60 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_60, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_19 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_19), (void*)L_61);
		RuntimeObject* L_62 = __this->___HITSERIOUSNESS_19;
		NullCheck(L_62);
		float L_63;
		L_63 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_19_val = L_63;
		RuntimeObject* L_64 = __this->___HITSERIOUSNESS_17;
		float L_65 = __this->___HITSERIOUSNESS_19_val;
		NullCheck(L_64);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)231), ((float)(L_65/(4.0f))));
	}

IL_02e0:
	{
		RuntimeObject* L_66;
		L_66 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, 5, ((int32_t)462));
		__this->___PLAYER_ANGLE_22 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ANGLE_22), (void*)L_67);
		RuntimeObject* L_68;
		L_68 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_68, 5, ((int32_t)462));
		__this->___PLAYER_ANGLE_23 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ANGLE_23), (void*)L_69);
		RuntimeObject* L_70 = __this->___PLAYER_ANGLE_23;
		NullCheck(L_70);
		float L_71;
		L_71 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_70, ((int32_t)231), (bool)1);
		__this->___PLAYER_ANGLE_23_val = L_71;
		RuntimeObject* L_72;
		L_72 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_72, 5, ((int32_t)462));
		__this->___PLAYER_ANGLE_24 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ANGLE_24), (void*)L_73);
		RuntimeObject* L_74 = __this->___PLAYER_ANGLE_24;
		NullCheck(L_74);
		float L_75;
		L_75 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_74, ((int32_t)231), (bool)1);
		__this->___PLAYER_ANGLE_24_val = L_75;
		RuntimeObject* L_76;
		L_76 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_76, 5, ((int32_t)1295621997));
		__this->___TOUGHNESS_34 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TOUGHNESS_34), (void*)L_77);
		RuntimeObject* L_78 = __this->___TOUGHNESS_34;
		NullCheck(L_78);
		float L_79;
		L_79 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_78, ((int32_t)231), (bool)1);
		__this->___TOUGHNESS_34_val = L_79;
		RuntimeObject* L_80 = __this->___PLAYER_ANGLE_22;
		float L_81 = __this->___PLAYER_ANGLE_24_val;
		float L_82;
		L_82 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_83 = __this->___TOUGHNESS_34_val;
		NullCheck(L_80);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_80, ((int32_t)231), ((float)il2cpp_codegen_add(L_81, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_82, (0.200000003f))), (0.100000001f))), L_83)))));
		RuntimeObject* L_84;
		L_84 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_84);
		RuntimeObject* L_85;
		L_85 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_84, 5, ((int32_t)435));
		__this->___PLAYER_TILT_35 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_35), (void*)L_85);
		RuntimeObject* L_86;
		L_86 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_86);
		RuntimeObject* L_87;
		L_87 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_86, 5, ((int32_t)435));
		__this->___PLAYER_TILT_36 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_36), (void*)L_87);
		RuntimeObject* L_88 = __this->___PLAYER_TILT_36;
		NullCheck(L_88);
		float L_89;
		L_89 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_36_val = L_89;
		RuntimeObject* L_90;
		L_90 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_90);
		RuntimeObject* L_91;
		L_91 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_90, 5, ((int32_t)435));
		__this->___PLAYER_TILT_37 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_37), (void*)L_91);
		RuntimeObject* L_92 = __this->___PLAYER_TILT_37;
		NullCheck(L_92);
		float L_93;
		L_93 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_37_val = L_93;
		RuntimeObject* L_94;
		L_94 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_94);
		RuntimeObject* L_95;
		L_95 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_94, 5, ((int32_t)1295621997));
		__this->___TOUGHNESS_47 = L_95;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TOUGHNESS_47), (void*)L_95);
		RuntimeObject* L_96 = __this->___TOUGHNESS_47;
		NullCheck(L_96);
		float L_97;
		L_97 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_96, ((int32_t)231), (bool)1);
		__this->___TOUGHNESS_47_val = L_97;
		RuntimeObject* L_98 = __this->___PLAYER_TILT_35;
		float L_99 = __this->___PLAYER_TILT_37_val;
		float L_100;
		L_100 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_101 = __this->___TOUGHNESS_47_val;
		NullCheck(L_98);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_98, ((int32_t)231), ((float)il2cpp_codegen_add(L_99, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_100, (0.200000003f))), (0.100000001f))), L_101)))));
		RuntimeObject* L_102;
		L_102 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_102);
		RuntimeObject* L_103;
		L_103 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_102, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_48 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_48), (void*)L_103);
		RuntimeObject* L_104 = __this->___HITSERIOUSNESS_48;
		NullCheck(L_104);
		float L_105;
		L_105 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_104, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_48_val = L_105;
		RuntimeObject* L_106;
		L_106 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_106, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_49 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_49), (void*)L_107);
		RuntimeObject* L_108 = __this->___PLAYER_HEALTH_49;
		NullCheck(L_108);
		float L_109;
		L_109 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_108, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_49_val = L_109;
		RuntimeObject* L_110;
		L_110 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_110, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_50 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_50), (void*)L_111);
		RuntimeObject* L_112 = __this->___PLAYER_HEALTH_50;
		float L_113 = __this->___PLAYER_HEALTH_49_val;
		float L_114 = __this->___HITSERIOUSNESS_48_val;
		NullCheck(L_112);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_112, ((int32_t)231), ((float)il2cpp_codegen_add(L_113, L_114)));
		RuntimeObject* L_115;
		L_115 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_115);
		RuntimeObject* L_116;
		L_116 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_115, 5, ((int32_t)1956124350));
		__this->___PLAYER_HIT_52 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HIT_52), (void*)L_116);
		RuntimeObject* L_117 = __this->___PLAYER_HIT_52;
		NullCheck(L_117);
		float L_118;
		L_118 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_117, ((int32_t)231), (bool)1);
		__this->___PLAYER_HIT_52_val = L_118;
		float L_119 = __this->___PLAYER_HIT_52_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_120;
		L_120 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_119, (0.0f), NULL);
		if (L_120)
		{
			goto IL_0552;
		}
	}
	{
		return (bool)0;
	}

IL_0552:
	{
		RuntimeObject* L_121;
		L_121 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_121);
		RuntimeObject* L_122;
		L_122 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_121, 5, ((int32_t)1956124350));
		__this->___PLAYER_HIT_54 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HIT_54), (void*)L_122);
		RuntimeObject* L_123 = __this->___PLAYER_HIT_54;
		NullCheck(L_123);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)231), (1.0f));
		RuntimeObject* L_124;
		L_124 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_124);
		RuntimeObject* L_125;
		L_125 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_124, 5, ((int32_t)-1413676145));
		__this->___HITVALUE_55 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITVALUE_55), (void*)L_125);
		RuntimeObject* L_126;
		L_126 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_126);
		RuntimeObject* L_127;
		L_127 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_126, 5, ((int32_t)-1413676145));
		__this->___HITVALUE_56 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITVALUE_56), (void*)L_127);
		RuntimeObject* L_128 = __this->___HITVALUE_56;
		NullCheck(L_128);
		float L_129;
		L_129 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_128, ((int32_t)231), (bool)1);
		__this->___HITVALUE_56_val = L_129;
		RuntimeObject* L_130;
		L_130 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_130);
		RuntimeObject* L_131;
		L_131 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_130, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_59 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_59), (void*)L_131);
		RuntimeObject* L_132 = __this->___HITSERIOUSNESS_59;
		NullCheck(L_132);
		float L_133;
		L_133 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_132, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_59_val = L_133;
		RuntimeObject* L_134;
		L_134 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_134);
		RuntimeObject* L_135;
		L_135 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_134, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_67 = L_135;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_67), (void*)L_135);
		RuntimeObject* L_136 = __this->___PLAYER_HEALTH_67;
		NullCheck(L_136);
		float L_137;
		L_137 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_136, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_67_val = L_137;
		RuntimeObject* L_138 = __this->___HITVALUE_55;
		float L_139 = __this->___HITSERIOUSNESS_59_val;
		float L_140 = __this->___PLAYER_HEALTH_67_val;
		NullCheck(L_138);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_138, ((int32_t)231), ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply((0.5f), L_139))/(-100.0f))), ((float)(((float)il2cpp_codegen_subtract((100.0f), L_140))/(2.0f))))));
		RuntimeObject* L_141;
		L_141 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_141);
		RuntimeObject* L_142;
		L_142 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_141, 5, ((int32_t)1369167822));
		__this->___UNDERWATER_72 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UNDERWATER_72), (void*)L_142);
		RuntimeObject* L_143 = __this->___UNDERWATER_72;
		NullCheck(L_143);
		float L_144;
		L_144 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_143, ((int32_t)231), (bool)1);
		__this->___UNDERWATER_72_val = L_144;
		float L_145 = __this->___UNDERWATER_72_val;
		bool L_146;
		L_146 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_145, (0.0f), NULL);
		if (L_146)
		{
			goto IL_07c2;
		}
	}
	{
		RuntimeObject* L_147;
		L_147 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_147);
		RuntimeObject* L_148;
		L_148 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_147, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_74 = L_148;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_74), (void*)L_148);
		RuntimeObject* L_149 = __this->___PLAYER_HEALTH_74;
		NullCheck(L_149);
		float L_150;
		L_150 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_149, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_74_val = L_150;
		float L_151 = __this->___PLAYER_HEALTH_74_val;
		bool L_152;
		L_152 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_151, (0.100000001f), NULL);
		if (L_152)
		{
			goto IL_0800;
		}
	}
	{
		float L_153;
		L_153 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_154;
		L_154 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_153, (0.300000012f), NULL);
		if (L_154)
		{
			goto IL_0742;
		}
	}
	{
		float L_155;
		L_155 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_156;
		L_156 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_155, (0.600000024f), NULL);
		if (L_156)
		{
			goto IL_0782;
		}
	}
	{
		RuntimeObject* L_157;
		L_157 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_157);
		RuntimeObject* L_158;
		L_158 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_157);
		NullCheck(L_158);
		RuntimeObject* L_159;
		L_159 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_158, ((int32_t)-1459236870), (bool)1, (bool)1);
		__this->___HIT03SND_79 = L_159;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT03SND_79), (void*)L_159);
		RuntimeObject* L_160;
		L_160 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		RuntimeObject* L_161 = __this->___HIT03SND_79;
		NullCheck(L_160);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_160, L_161, (0.699999988f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		goto IL_0800;
	}

IL_0742:
	{
		RuntimeObject* L_162;
		L_162 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_162);
		RuntimeObject* L_163;
		L_163 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_162);
		NullCheck(L_163);
		RuntimeObject* L_164;
		L_164 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_163, ((int32_t)-1459308744), (bool)1, (bool)1);
		__this->___HIT01SND_81 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT01SND_81), (void*)L_164);
		RuntimeObject* L_165;
		L_165 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		RuntimeObject* L_166 = __this->___HIT01SND_81;
		NullCheck(L_165);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_165, L_166, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		goto IL_0800;
	}

IL_0782:
	{
		RuntimeObject* L_167;
		L_167 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_167);
		RuntimeObject* L_168;
		L_168 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_167);
		NullCheck(L_168);
		RuntimeObject* L_169;
		L_169 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_168, ((int32_t)-1459272807), (bool)1, (bool)1);
		__this->___HIT02SND_83 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT02SND_83), (void*)L_169);
		RuntimeObject* L_170;
		L_170 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		RuntimeObject* L_171 = __this->___HIT02SND_83;
		NullCheck(L_170);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_170, L_171, (0.300000012f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		goto IL_0800;
	}

IL_07c2:
	{
		RuntimeObject* L_172;
		L_172 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_172);
		RuntimeObject* L_173;
		L_173 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_172);
		NullCheck(L_173);
		RuntimeObject* L_174;
		L_174 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_173, ((int32_t)-1459200933), (bool)1, (bool)1);
		__this->___HIT04SND_85 = L_174;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT04SND_85), (void*)L_174);
		RuntimeObject* L_175;
		L_175 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		RuntimeObject* L_176 = __this->___HIT04SND_85;
		NullCheck(L_175);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_175, L_176, (0.800000012f), (RuntimeObject*)NULL, (100.0f), (100.0f));
	}

IL_0800:
	{
		RuntimeObject* L_177;
		L_177 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_177);
		RuntimeObject* L_178;
		L_178 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_177);
		NullCheck(L_178);
		RuntimeObject* L_179;
		L_179 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_178, ((int32_t)1513684550), (bool)1, (bool)1);
		__this->___KILLPLAYER_87 = L_179;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KILLPLAYER_87), (void*)L_179);
		RuntimeObject* L_180;
		L_180 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_180);
		RuntimeObject* L_181;
		L_181 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_180);
		RuntimeObject* L_182 = L_181;
		if (L_182)
		{
			G_B18_0 = L_182;
			G_B18_1 = __this;
			goto IL_0830;
		}
		G_B17_0 = L_182;
		G_B17_1 = __this;
	}
	{
		G_B19_0 = ((RuntimeObject*)(NULL));
		G_B19_1 = G_B17_1;
		goto IL_0839;
	}

IL_0830:
	{
		NullCheck(G_B18_0);
		RuntimeObject* L_183;
		L_183 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B18_0, ((int32_t)11), (bool)1, (bool)1);
		G_B19_0 = L_183;
		G_B19_1 = G_B18_1;
	}

IL_0839:
	{
		NullCheck(G_B19_1);
		G_B19_1->___temp_90 = G_B19_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B19_1->___temp_90), (void*)G_B19_0);
		RuntimeObject* L_184 = __this->___temp_90;
		RuntimeObject* L_185 = __this->___KILLPLAYER_87;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_186;
		L_186 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_184, L_185, NULL);
		if (L_186)
		{
			goto IL_0886;
		}
	}
	{
		RuntimeObject* L_187;
		L_187 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_187);
		RuntimeObject* L_188;
		L_188 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_187);
		NullCheck(L_188);
		RuntimeObject* L_189;
		L_189 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_188, ((int32_t)-869446624), (bool)1, (bool)1);
		__this->___REDOUT_91 = L_189;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDOUT_91), (void*)L_189);
		RuntimeObject* L_190;
		L_190 = HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline(__this, NULL);
		NullCheck(L_190);
		RuntimeObject* L_191;
		L_191 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_190);
		RuntimeObject* L_192 = __this->___REDOUT_91;
		NullCheck(L_191);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_191, ((int32_t)11), L_192);
	}

IL_0886:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REDOUT_get_MY_m2F84DDB127664874A46DB5419D89250D19ED753B (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDOUT_set_MY_m699284D1C5CE919BF77AC84681BB3F9595E9543D (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REDOUT_get_THERE_m5F5AABA061CE3BF0010B8B3258D820727868A7AF (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDOUT_set_THERE_m325787721024F8EA38EA50C2E343D3C5D2743D97 (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8 (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDOUT_set__world_m4D5BBD085CA658022B081AEF299632AD1401B718 (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REDOUT_get_Current_m698BFE8377BA7123F4D40324DD6C3ACC867D3618 (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDOUT_set_Current_m10B76A6E0DE8CE8EFC17A29E2D295CEC595EE389 (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDOUT_Reset_m4DFAA0861B8E5F6644954F942D2BCD245C34C0F3 (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDOUT__ctor_m13287839240022682EEB4F4833719529A7CD9139 (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDOUT__ctor_mC39F3D7F24EF6024FC3940CA4FCC584D3E40BEE8 (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REDOUT_set_MY_m699284D1C5CE919BF77AC84681BB3F9595E9543D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REDOUT_set_THERE_m325787721024F8EA38EA50C2E343D3C5D2743D97_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REDOUT_set__world_m4D5BBD085CA658022B081AEF299632AD1401B718_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REDOUT_MoveNext_m7221946E81F11FC8430DF5F8127BEED91A07E091 (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, const RuntimeMethod* method) 
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
		L_1 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___REDVALUE_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___REDVALUE_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___REDVALUE_2;
		float L_8 = __this->___REDVALUE_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (0.100000001f))));
		RuntimeObject* L_9;
		L_9 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)436));
		__this->___PLAYER_ARC_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_4), (void*)L_10);
		RuntimeObject* L_11 = __this->___PLAYER_ARC_4;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARC_4_val = L_12;
		RuntimeObject* L_13;
		L_13 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)436));
		__this->___PLAYER_ARC_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_5), (void*)L_14);
		RuntimeObject* L_15 = __this->___PLAYER_ARC_5;
		float L_16 = __this->___PLAYER_ARC_4_val;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)231), ((float)il2cpp_codegen_add(L_16, (-0.00999999978f))));
		RuntimeObject* L_17;
		L_17 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)-1356418364), (bool)1, (bool)1);
		__this->___PAL_RED_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PAL_RED_6), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_7), (void*)L_21);
		RuntimeObject* L_22 = __this->___REDVALUE_7;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)231), (bool)1);
		__this->___REDVALUE_7_val = L_23;
		RuntimeObject* L_24;
		L_24 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		RuntimeObject* L_25 = __this->___PAL_RED_6;
		float L_26 = __this->___REDVALUE_7_val;
		NullCheck(L_24);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, L_25, L_26);
		RuntimeObject* L_27;
		L_27 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, 5, ((int32_t)-1413676145));
		__this->___HITVALUE_8 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITVALUE_8), (void*)L_28);
		RuntimeObject* L_29 = __this->___HITVALUE_8;
		NullCheck(L_29);
		float L_30;
		L_30 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)231), (bool)1);
		__this->___HITVALUE_8_val = L_30;
		RuntimeObject* L_31;
		L_31 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_9 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_9), (void*)L_32);
		RuntimeObject* L_33 = __this->___REDVALUE_9;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)231), (bool)1);
		__this->___REDVALUE_9_val = L_34;
		float L_35 = __this->___REDVALUE_9_val;
		float L_36 = __this->___HITVALUE_8_val;
		bool L_37;
		L_37 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_35, L_36, NULL);
		if (!L_37)
		{
			goto IL_019c;
		}
	}
	{
		return (bool)0;
	}

IL_019c:
	{
		RuntimeObject* L_38;
		L_38 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_11 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_11), (void*)L_39);
		RuntimeObject* L_40 = __this->___PLAYER_HEALTH_11;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_11_val = L_41;
		float L_42 = __this->___PLAYER_HEALTH_11_val;
		bool L_43;
		L_43 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_42, (1.0f), NULL);
		if (L_43)
		{
			goto IL_0213;
		}
	}
	{
		RuntimeObject* L_44;
		L_44 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)233954943), (bool)1, (bool)1);
		__this->___REDIN_12 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDIN_12), (void*)L_46);
		RuntimeObject* L_47;
		L_47 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_47);
		RuntimeObject* L_49 = __this->___REDIN_12;
		NullCheck(L_48);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)11), L_49);
		return (bool)0;
	}

IL_0213:
	{
		RuntimeObject* L_50;
		L_50 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)1513684550), (bool)1, (bool)1);
		__this->___KILLPLAYER_15 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KILLPLAYER_15), (void*)L_52);
		RuntimeObject* L_53;
		L_53 = REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_53);
		RuntimeObject* L_55 = __this->___KILLPLAYER_15;
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)11), L_55);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REDIN_get_MY_m96D78B4468C45B5531FC2BAA61BDD67B128FF395 (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDIN_set_MY_mF12B6231D5C15919D6233ED3497E260CA28866CE (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REDIN_get_THERE_m0814D635B155F64C050B8304E5BC2AA53B54D5EE (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDIN_set_THERE_mE17856AE2D838107DA6A80AA0EB6ABFD64AFCD46 (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8 (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDIN_set__world_m1ADA875544DFAC6642B46248395444985B34D18D (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REDIN_get_Current_m416FB184B471E5D885DC0C45E47785F1462A8E71 (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDIN_set_Current_mFDECA99E78E3B86462F8CDAE29B5741312A9C45D (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDIN_Reset_m9E98A05C42E151DE0484D0BFEF7204D88C809A50 (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDIN__ctor_m1AE5BCDE8B35F5F2123603BA7BC528DFB11D1499 (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REDIN__ctor_m6D9F905A897E3DE01A0E88B323922FD7128C5D1A (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REDIN_set_MY_mF12B6231D5C15919D6233ED3497E260CA28866CE_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REDIN_set_THERE_mE17856AE2D838107DA6A80AA0EB6ABFD64AFCD46_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REDIN_set__world_m1ADA875544DFAC6642B46248395444985B34D18D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REDIN_MoveNext_m5D4ABA7882CED1E2C08F9B2CE7BB5A79DC0120E3 (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___REDVALUE_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___REDVALUE_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___REDVALUE_2;
		float L_8 = __this->___REDVALUE_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (-0.100000001f))));
		RuntimeObject* L_9;
		L_9 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)436));
		__this->___PLAYER_ARC_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_4), (void*)L_10);
		RuntimeObject* L_11 = __this->___PLAYER_ARC_4;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARC_4_val = L_12;
		RuntimeObject* L_13;
		L_13 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)436));
		__this->___PLAYER_ARC_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_5), (void*)L_14);
		RuntimeObject* L_15 = __this->___PLAYER_ARC_5;
		float L_16 = __this->___PLAYER_ARC_4_val;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)231), ((float)il2cpp_codegen_add(L_16, (0.00999999978f))));
		RuntimeObject* L_17;
		L_17 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)-1356418364), (bool)1, (bool)1);
		__this->___PAL_RED_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PAL_RED_6), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_7), (void*)L_21);
		RuntimeObject* L_22 = __this->___REDVALUE_7;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)231), (bool)1);
		__this->___REDVALUE_7_val = L_23;
		RuntimeObject* L_24;
		L_24 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		RuntimeObject* L_25 = __this->___PAL_RED_6;
		float L_26 = __this->___REDVALUE_7_val;
		NullCheck(L_24);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, L_25, L_26);
		RuntimeObject* L_27;
		L_27 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_9 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_9), (void*)L_28);
		RuntimeObject* L_29 = __this->___REDVALUE_9;
		NullCheck(L_29);
		float L_30;
		L_30 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)231), (bool)1);
		__this->___REDVALUE_9_val = L_30;
		float L_31 = __this->___REDVALUE_9_val;
		bool L_32;
		L_32 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_31, (0.0f), NULL);
		if (!L_32)
		{
			goto IL_0197;
		}
	}
	{
		RuntimeObject* L_33;
		L_33 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_11 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_11), (void*)L_34);
		RuntimeObject* L_35 = __this->___REDVALUE_11;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), (0.0f));
	}

IL_0197:
	{
		RuntimeObject* L_36;
		L_36 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_36, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_13 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_13), (void*)L_37);
		RuntimeObject* L_38 = __this->___REDVALUE_13;
		NullCheck(L_38);
		float L_39;
		L_39 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)231), (bool)1);
		__this->___REDVALUE_13_val = L_39;
		float L_40 = __this->___REDVALUE_13_val;
		bool L_41;
		L_41 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_40, (0.0f), NULL);
		if (!L_41)
		{
			goto IL_01d9;
		}
	}
	{
		return (bool)0;
	}

IL_01d9:
	{
		RuntimeObject* L_42;
		L_42 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_42, 5, ((int32_t)1369167822));
		__this->___UNDERWATER_15 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UNDERWATER_15), (void*)L_43);
		RuntimeObject* L_44 = __this->___UNDERWATER_15;
		NullCheck(L_44);
		float L_45;
		L_45 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)231), (bool)1);
		__this->___UNDERWATER_15_val = L_45;
		float L_46 = __this->___UNDERWATER_15_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_46, (0.0f), NULL);
		if (L_47)
		{
			goto IL_027f;
		}
	}
	{
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_48 = (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A*)il2cpp_codegen_object_new(SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A_il2cpp_TypeInfo_var);
		SET_BLUE__ctor_m398E7AA8C854CA036D788D740731EC3AA3B5C19F(L_48, NULL);
		V_0 = L_48;
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_49 = V_0;
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_50 = L_49;
		RuntimeObject* L_51;
		L_51 = REDIN_get_MY_m96D78B4468C45B5531FC2BAA61BDD67B128FF395_inline(__this, NULL);
		NullCheck(L_50);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_50, L_51);
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_52 = L_50;
		RuntimeObject* L_53;
		L_53 = REDIN_get_THERE_m0814D635B155F64C050B8304E5BC2AA53B54D5EE_inline(__this, NULL);
		NullCheck(L_52);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_52, L_53);
		RuntimeObject* L_54;
		L_54 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_52);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_52, L_54);
		RuntimeObject* L_55;
		L_55 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_56 = V_0;
		NullCheck(L_55);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_56);
		RuntimeObject* L_58;
		L_58 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_58, 5, ((int32_t)436));
		__this->___PLAYER_ARC_17 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_17), (void*)L_59);
		RuntimeObject* L_60 = __this->___PLAYER_ARC_17;
		NullCheck(L_60);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)231), (1.29999995f));
		goto IL_02ab;
	}

IL_027f:
	{
		RuntimeObject* L_61;
		L_61 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_61, 5, ((int32_t)436));
		__this->___PLAYER_ARC_19 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARC_19), (void*)L_62);
		RuntimeObject* L_63 = __this->___PLAYER_ARC_19;
		NullCheck(L_63);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_63, ((int32_t)231), (1.0f));
	}

IL_02ab:
	{
		RuntimeObject* L_64;
		L_64 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_64, 5, ((int32_t)1956124350));
		__this->___PLAYER_HIT_21 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HIT_21), (void*)L_65);
		RuntimeObject* L_66 = __this->___PLAYER_HIT_21;
		NullCheck(L_66);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)231), (0.0f));
		RuntimeObject* L_67;
		L_67 = REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_67);
		NullCheck(L_68);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)11), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHPLAYER_get_MY_m06BCE5CB0327F776CB722BA5E5D969D747320523 (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHPLAYER_set_MY_mC466D1D5D3064BE95C4F6453BA5BA98EF565F514 (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHPLAYER_get_THERE_m4B4E03A1265C48D80622B5A4FB1A3BE409068DAC (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHPLAYER_set_THERE_m0FB1564509D9F2A220549A26A190DDF67682CC2F (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520 (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHPLAYER_set__world_mA672E59FDF8790E23EAE6BCE8E8A224ECCE727AF (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHPLAYER_get_Current_m870ABF50201A4A2B4280912B507C2709397483B7 (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHPLAYER_set_Current_m7353B1A3AF89DD2568149E6BA8190CCCB65111E7 (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHPLAYER_Reset_m783F340F8BBC3B85DAC15DF46C1C183B7B10AA5E (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHPLAYER__ctor_m03EDF2F6FD700301DD3211FC21701356026BA6A9 (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHPLAYER__ctor_mE4520832F72345A1DC6BE51406A2C608FBD9E851 (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		FLASHPLAYER_set_MY_mC466D1D5D3064BE95C4F6453BA5BA98EF565F514_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		FLASHPLAYER_set_THERE_m0FB1564509D9F2A220549A26A190DDF67682CC2F_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		FLASHPLAYER_set__world_mA672E59FDF8790E23EAE6BCE8E8A224ECCE727AF_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FLASHPLAYER_MoveNext_mB4FEFEC2DCFABE3EA5146584526AEE89875EFD1A (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, const RuntimeMethod* method) 
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
		L_1 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)1756335307));
		__this->___GOD_MODE_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GOD_MODE_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___GOD_MODE_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___GOD_MODE_1_val = L_4;
		float L_5 = __this->___GOD_MODE_1_val;
		bool L_6;
		L_6 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_5, (0.0f), NULL);
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
		L_7 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_2), (void*)L_8);
		RuntimeObject* L_9;
		L_9 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_3), (void*)L_10);
		RuntimeObject* L_11 = __this->___HITSERIOUSNESS_3;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_3_val = L_12;
		RuntimeObject* L_13;
		L_13 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_4), (void*)L_14);
		RuntimeObject* L_15 = __this->___PLAYER_RESULT_4;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)231), (bool)1);
		__this->___PLAYER_RESULT_4_val = L_16;
		RuntimeObject* L_17;
		L_17 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_17, 5, ((int32_t)1295621997));
		__this->___TOUGHNESS_12 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TOUGHNESS_12), (void*)L_18);
		RuntimeObject* L_19 = __this->___TOUGHNESS_12;
		NullCheck(L_19);
		float L_20;
		L_20 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)231), (bool)1);
		__this->___TOUGHNESS_12_val = L_20;
		RuntimeObject* L_21 = __this->___HITSERIOUSNESS_2;
		float L_22 = __this->___PLAYER_RESULT_4_val;
		float L_23 = __this->___TOUGHNESS_12_val;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_22, (-5.0f))), ((float)il2cpp_codegen_add((0.5f), ((float)(L_23/(2.0f))))))));
		RuntimeObject* L_24;
		L_24 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_17 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_17), (void*)L_25);
		RuntimeObject* L_26 = __this->___PLAYER_ARMOUR_17;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARMOUR_17_val = L_27;
		float L_28 = __this->___PLAYER_ARMOUR_17_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_28, (0.0f), NULL);
		if (L_29)
		{
			goto IL_027b;
		}
	}
	{
		RuntimeObject* L_30;
		L_30 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_30, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_18 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_18), (void*)L_31);
		RuntimeObject* L_32 = __this->___HITSERIOUSNESS_18;
		NullCheck(L_32);
		float L_33;
		L_33 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_18_val = L_33;
		RuntimeObject* L_34;
		L_34 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_34, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_19 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_19), (void*)L_35);
		RuntimeObject* L_36 = __this->___PLAYER_ARMOUR_19;
		NullCheck(L_36);
		float L_37;
		L_37 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARMOUR_19_val = L_37;
		RuntimeObject* L_38;
		L_38 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_20 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_20), (void*)L_39);
		RuntimeObject* L_40 = __this->___PLAYER_ARMOUR_20;
		float L_41 = __this->___PLAYER_ARMOUR_19_val;
		float L_42 = __this->___HITSERIOUSNESS_18_val;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)231), ((float)il2cpp_codegen_add(L_41, L_42)));
		RuntimeObject* L_43;
		L_43 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_21 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_21), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_22 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_22), (void*)L_46);
		RuntimeObject* L_47 = __this->___HITSERIOUSNESS_22;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_22_val = L_48;
		RuntimeObject* L_49;
		L_49 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_49, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_23 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_23), (void*)L_50);
		RuntimeObject* L_51 = __this->___HITSERIOUSNESS_23;
		NullCheck(L_51);
		float L_52;
		L_52 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_23_val = L_52;
		RuntimeObject* L_53 = __this->___HITSERIOUSNESS_21;
		float L_54 = __this->___HITSERIOUSNESS_23_val;
		NullCheck(L_53);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)231), ((float)(L_54/(4.0f))));
	}

IL_027b:
	{
		RuntimeObject* L_55;
		L_55 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_26 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_26), (void*)L_56);
		RuntimeObject* L_57 = __this->___HITSERIOUSNESS_26;
		NullCheck(L_57);
		float L_58;
		L_58 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_26_val = L_58;
		RuntimeObject* L_59;
		L_59 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_27 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_27), (void*)L_60);
		RuntimeObject* L_61 = __this->___PLAYER_HEALTH_27;
		NullCheck(L_61);
		float L_62;
		L_62 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_27_val = L_62;
		RuntimeObject* L_63;
		L_63 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_28 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_28), (void*)L_64);
		RuntimeObject* L_65 = __this->___PLAYER_HEALTH_28;
		float L_66 = __this->___PLAYER_HEALTH_27_val;
		float L_67 = __this->___HITSERIOUSNESS_26_val;
		NullCheck(L_65);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)231), ((float)il2cpp_codegen_add(L_66, L_67)));
		RuntimeObject* L_68;
		L_68 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_68, 5, ((int32_t)1956124350));
		__this->___PLAYER_HIT_30 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HIT_30), (void*)L_69);
		RuntimeObject* L_70 = __this->___PLAYER_HIT_30;
		NullCheck(L_70);
		float L_71;
		L_71 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_70, ((int32_t)231), (bool)1);
		__this->___PLAYER_HIT_30_val = L_71;
		float L_72 = __this->___PLAYER_HIT_30_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_72, (0.0f), NULL);
		if (L_73)
		{
			goto IL_034d;
		}
	}
	{
		return (bool)0;
	}

IL_034d:
	{
		RuntimeObject* L_74;
		L_74 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_74, 5, ((int32_t)1956124350));
		__this->___PLAYER_HIT_32 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HIT_32), (void*)L_75);
		RuntimeObject* L_76 = __this->___PLAYER_HIT_32;
		NullCheck(L_76);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)231), (1.0f));
		RuntimeObject* L_77;
		L_77 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_77);
		RuntimeObject* L_78;
		L_78 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_77, 5, ((int32_t)-1413676145));
		__this->___HITVALUE_33 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITVALUE_33), (void*)L_78);
		RuntimeObject* L_79;
		L_79 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_79, 5, ((int32_t)-1413676145));
		__this->___HITVALUE_34 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITVALUE_34), (void*)L_80);
		RuntimeObject* L_81 = __this->___HITVALUE_34;
		NullCheck(L_81);
		float L_82;
		L_82 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_81, ((int32_t)231), (bool)1);
		__this->___HITVALUE_34_val = L_82;
		RuntimeObject* L_83;
		L_83 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_83, 5, ((int32_t)-125994507));
		__this->___HITSERIOUSNESS_37 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITSERIOUSNESS_37), (void*)L_84);
		RuntimeObject* L_85 = __this->___HITSERIOUSNESS_37;
		NullCheck(L_85);
		float L_86;
		L_86 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_85, ((int32_t)231), (bool)1);
		__this->___HITSERIOUSNESS_37_val = L_86;
		RuntimeObject* L_87;
		L_87 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_87);
		RuntimeObject* L_88;
		L_88 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_87, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_45 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_45), (void*)L_88);
		RuntimeObject* L_89 = __this->___PLAYER_HEALTH_45;
		NullCheck(L_89);
		float L_90;
		L_90 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_45_val = L_90;
		RuntimeObject* L_91 = __this->___HITVALUE_33;
		float L_92 = __this->___HITSERIOUSNESS_37_val;
		float L_93 = __this->___PLAYER_HEALTH_45_val;
		NullCheck(L_91);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_91, ((int32_t)231), ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply((0.5f), L_92))/(-100.0f))), ((float)(((float)il2cpp_codegen_subtract((100.0f), L_93))/(2.0f))))));
		RuntimeObject* L_94;
		L_94 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_94);
		RuntimeObject* L_95;
		L_95 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_94, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_50 = L_95;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_50), (void*)L_95);
		RuntimeObject* L_96 = __this->___PLAYER_HEALTH_50;
		NullCheck(L_96);
		float L_97;
		L_97 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_96, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_50_val = L_97;
		float L_98 = __this->___PLAYER_HEALTH_50_val;
		bool L_99;
		L_99 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_98, (0.0f), NULL);
		if (!L_99)
		{
			goto IL_04cd;
		}
	}
	{
		RuntimeObject* L_100;
		L_100 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_100);
		NullCheck(L_101);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_101, ((int32_t)-1459308744), (bool)1, (bool)1);
		__this->___HIT01SND_51 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT01SND_51), (void*)L_102);
		RuntimeObject* L_103;
		L_103 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		RuntimeObject* L_104 = __this->___HIT01SND_51;
		NullCheck(L_103);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_103, L_104, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
	}

IL_04cd:
	{
		RuntimeObject* L_105;
		L_105 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_105);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_106, ((int32_t)-1918654957), (bool)1, (bool)1);
		__this->___FLASHOUT_53 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLASHOUT_53), (void*)L_107);
		RuntimeObject* L_108;
		L_108 = FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline(__this, NULL);
		NullCheck(L_108);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_108);
		RuntimeObject* L_110 = __this->___FLASHOUT_53;
		NullCheck(L_109);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_109, ((int32_t)11), L_110);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHOUT_get_MY_mD22CD0F0E1885916466A77D61AF9304B0754218D (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHOUT_set_MY_mA7D9C46744FBA53A7510084C9DADA27A1B54E82D (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHOUT_get_THERE_m3237BFB84BEEE62D85FBAB1190430A9CE7B69459 (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHOUT_set_THERE_m7A2A23C82373CDC71A9DB85739CA699531E42E66 (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHOUT_set__world_mEC448EA7D2651041393B82B13FB58D84055C56A5 (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHOUT_get_Current_m37E4B029E8765A565F4388E14F7E2FAE31834E09 (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHOUT_set_Current_mFFD5A961648D5644C5931140FE3F054295100904 (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHOUT_Reset_m38C837A38E0995815E9358F17CCB04822263C4FC (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHOUT__ctor_m175A1D2E5C34819BED1F785968DEADC7A1D4EFD3 (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHOUT__ctor_mB9EEC5C36DAD442C1D421B8D3B185C7E769D8AD2 (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		FLASHOUT_set_MY_mA7D9C46744FBA53A7510084C9DADA27A1B54E82D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		FLASHOUT_set_THERE_m7A2A23C82373CDC71A9DB85739CA699531E42E66_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		FLASHOUT_set__world_mEC448EA7D2651041393B82B13FB58D84055C56A5_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FLASHOUT_MoveNext_m88C5DB455B0C8DB0B2D62E0637E6478186113906 (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, const RuntimeMethod* method) 
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
		L_1 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___REDVALUE_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___REDVALUE_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___REDVALUE_2;
		float L_8 = __this->___REDVALUE_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (0.100000001f))));
		RuntimeObject* L_9;
		L_9 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)314083479), (bool)1, (bool)1);
		__this->___PAL_FLASH_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PAL_FLASH_3), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_4), (void*)L_13);
		RuntimeObject* L_14 = __this->___REDVALUE_4;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (bool)1);
		__this->___REDVALUE_4_val = L_15;
		RuntimeObject* L_16;
		L_16 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		RuntimeObject* L_17 = __this->___PAL_FLASH_3;
		float L_18 = __this->___REDVALUE_4_val;
		NullCheck(L_16);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, L_17, L_18);
		RuntimeObject* L_19;
		L_19 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)-1413676145));
		__this->___HITVALUE_5 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HITVALUE_5), (void*)L_20);
		RuntimeObject* L_21 = __this->___HITVALUE_5;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), (bool)1);
		__this->___HITVALUE_5_val = L_22;
		RuntimeObject* L_23;
		L_23 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_6 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_6), (void*)L_24);
		RuntimeObject* L_25 = __this->___REDVALUE_6;
		NullCheck(L_25);
		float L_26;
		L_26 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)231), (bool)1);
		__this->___REDVALUE_6_val = L_26;
		float L_27 = __this->___REDVALUE_6_val;
		float L_28 = __this->___HITVALUE_5_val;
		bool L_29;
		L_29 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_013b;
		}
	}
	{
		return (bool)0;
	}

IL_013b:
	{
		RuntimeObject* L_30;
		L_30 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_30, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_8 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_8), (void*)L_31);
		RuntimeObject* L_32 = __this->___PLAYER_HEALTH_8;
		NullCheck(L_32);
		float L_33;
		L_33 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)231), (bool)1);
		__this->___PLAYER_HEALTH_8_val = L_33;
		float L_34 = __this->___PLAYER_HEALTH_8_val;
		bool L_35;
		L_35 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_34, (1.0f), NULL);
		if (L_35)
		{
			goto IL_01b2;
		}
	}
	{
		RuntimeObject* L_36;
		L_36 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_36);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)-969193966), (bool)1, (bool)1);
		__this->___FLASHIN_9 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLASHIN_9), (void*)L_38);
		RuntimeObject* L_39;
		L_39 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_39);
		RuntimeObject* L_41 = __this->___FLASHIN_9;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)11), L_41);
		return (bool)0;
	}

IL_01b2:
	{
		RuntimeObject* L_42;
		L_42 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)1513684550), (bool)1, (bool)1);
		__this->___KILLPLAYER_12 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KILLPLAYER_12), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_45);
		RuntimeObject* L_47 = __this->___KILLPLAYER_12;
		NullCheck(L_46);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)11), L_47);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHIN_get_MY_m395413006813967C8AEA7E3DE2EEB9B9129C2240 (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHIN_set_MY_mF862A67AB588F95D3A0058F71E1ED3426D704409 (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHIN_get_THERE_mCA36FDA943C7A3C0D3B87801425D6934FE7E8375 (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHIN_set_THERE_m19392F39800EA7FE845A840472E0F92F6457CFD4 (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868 (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHIN_set__world_mE484AD9AA08C7DFCDB72B962C3356045D9D8DEAE (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FLASHIN_get_Current_m4168E76EAB22445CDFED0B2D4CA95A4264C9EBF3 (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHIN_set_Current_m2609656B5701A57091CDE397FD93577E2D4D45E5 (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHIN_Reset_mCD3D2ACE04FD397B1955C45E2F4E597D66C7A5C5 (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHIN__ctor_mFB2A7893E251805E646DD4BB6EC9726149B0244E (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHIN__ctor_mC8752B3DE8AA071A03BFAD0466EE09DBEA1C5A24 (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		FLASHIN_set_MY_mF862A67AB588F95D3A0058F71E1ED3426D704409_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		FLASHIN_set_THERE_m19392F39800EA7FE845A840472E0F92F6457CFD4_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		FLASHIN_set__world_mE484AD9AA08C7DFCDB72B962C3356045D9D8DEAE_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FLASHIN_MoveNext_mEA53114D2555152707F12CCBD1AA8057FCCFD275 (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___REDVALUE_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___REDVALUE_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___REDVALUE_2;
		float L_8 = __this->___REDVALUE_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (-0.100000001f))));
		RuntimeObject* L_9;
		L_9 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)314083479), (bool)1, (bool)1);
		__this->___PAL_FLASH_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PAL_FLASH_3), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_4), (void*)L_13);
		RuntimeObject* L_14 = __this->___REDVALUE_4;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (bool)1);
		__this->___REDVALUE_4_val = L_15;
		RuntimeObject* L_16;
		L_16 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		RuntimeObject* L_17 = __this->___PAL_FLASH_3;
		float L_18 = __this->___REDVALUE_4_val;
		NullCheck(L_16);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, L_17, L_18);
		RuntimeObject* L_19;
		L_19 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_6), (void*)L_20);
		RuntimeObject* L_21 = __this->___REDVALUE_6;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), (bool)1);
		__this->___REDVALUE_6_val = L_22;
		float L_23 = __this->___REDVALUE_6_val;
		bool L_24;
		L_24 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_23, (0.0f), NULL);
		if (!L_24)
		{
			goto IL_0136;
		}
	}
	{
		RuntimeObject* L_25;
		L_25 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_8 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_8), (void*)L_26);
		RuntimeObject* L_27 = __this->___REDVALUE_8;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)231), (0.0f));
	}

IL_0136:
	{
		RuntimeObject* L_28;
		L_28 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, 5, ((int32_t)-1928079547));
		__this->___REDVALUE_10 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REDVALUE_10), (void*)L_29);
		RuntimeObject* L_30 = __this->___REDVALUE_10;
		NullCheck(L_30);
		float L_31;
		L_31 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)231), (bool)1);
		__this->___REDVALUE_10_val = L_31;
		float L_32 = __this->___REDVALUE_10_val;
		bool L_33;
		L_33 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_32, (0.0f), NULL);
		if (!L_33)
		{
			goto IL_0178;
		}
	}
	{
		return (bool)0;
	}

IL_0178:
	{
		RuntimeObject* L_34;
		L_34 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_34, 5, ((int32_t)1369167822));
		__this->___UNDERWATER_12 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UNDERWATER_12), (void*)L_35);
		RuntimeObject* L_36 = __this->___UNDERWATER_12;
		NullCheck(L_36);
		float L_37;
		L_37 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)231), (bool)1);
		__this->___UNDERWATER_12_val = L_37;
		float L_38 = __this->___UNDERWATER_12_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_38, (0.0f), NULL);
		if (L_39)
		{
			goto IL_01f0;
		}
	}
	{
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_40 = (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A*)il2cpp_codegen_object_new(SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A_il2cpp_TypeInfo_var);
		SET_BLUE__ctor_m398E7AA8C854CA036D788D740731EC3AA3B5C19F(L_40, NULL);
		V_0 = L_40;
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_41 = V_0;
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_42 = L_41;
		RuntimeObject* L_43;
		L_43 = FLASHIN_get_MY_m395413006813967C8AEA7E3DE2EEB9B9129C2240_inline(__this, NULL);
		NullCheck(L_42);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_42, L_43);
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_44 = L_42;
		RuntimeObject* L_45;
		L_45 = FLASHIN_get_THERE_mCA36FDA943C7A3C0D3B87801425D6934FE7E8375_inline(__this, NULL);
		NullCheck(L_44);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_44, L_45);
		RuntimeObject* L_46;
		L_46 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		NullCheck(L_44);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_44, L_46);
		RuntimeObject* L_47;
		L_47 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_48 = V_0;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_48);
	}

IL_01f0:
	{
		RuntimeObject* L_50;
		L_50 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)11), (RuntimeObject*)NULL);
		RuntimeObject* L_52;
		L_52 = FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, 5, ((int32_t)1956124350));
		__this->___PLAYER_HIT_17 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HIT_17), (void*)L_53);
		RuntimeObject* L_54 = __this->___PLAYER_HIT_17;
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYERDELAY_get_MY_m86119E4EDCA1CCB4572BA3EFC7205AC9A7CFC4D2 (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set_MY_m9A9C91FBD71127D68D290F5281C15668F96D3B1F (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYERDELAY_get_THERE_m77C25C86EFAB23E6350D5C5AFE01E07908F209DF (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set_THERE_m559A17D2AD5169524B829E18FDF1BAE8750AC74A (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYERDELAY_get__world_mD092BC53D176E6243BBB5B44DBC884EAF95082FC (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set__world_m694664BEBFA2558DD1D8703891CB3B96C4636D63 (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYERDELAY_get_Current_m4A38D9FE4E31F84595B99DAF48FD83DF1FA7F264 (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set_Current_mF0F6CC147AC9B2E079370650708EAB3D549C0AF1 (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYERDELAY_Reset_mB7AB2291AF780B5FF2C2614774DD59496AB8FED1 (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYERDELAY__ctor_m0514506CB908F8A27C7CFF9BB10718987C144B25 (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYERDELAY__ctor_mB3BA42B09FEA2249E4333E144966E1C3801FA88F (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		HITPLAYERDELAY_set_MY_m9A9C91FBD71127D68D290F5281C15668F96D3B1F_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		HITPLAYERDELAY_set_THERE_m559A17D2AD5169524B829E18FDF1BAE8750AC74A_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		HITPLAYERDELAY_set__world_m694664BEBFA2558DD1D8703891CB3B96C4636D63_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HITPLAYERDELAY_MoveNext_mD20AD0149877681D3F8DC3EEEC08DEA64CDDD05E (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_1;
		float L_2 = __this->___startTime1;
		float L_3;
		L_3 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(8, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_2, L_3));
		__this->____cursor = 1;
		goto IL_003d;
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		HITPLAYERDELAY_set_Current_mF0F6CC147AC9B2E079370650708EAB3D549C0AF1_inline(__this, L_4, NULL);
		return (bool)1;
	}

IL_003d:
	{
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_6 = __this->___endTime1;
		if ((((float)L_5) < ((float)L_6)))
		{
			goto IL_0030;
		}
	}
	{
		HITPLAYERDELAY_set_Current_mF0F6CC147AC9B2E079370650708EAB3D549C0AF1_inline(__this, NULL, NULL);
		HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* L_7 = (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335*)il2cpp_codegen_object_new(HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335_il2cpp_TypeInfo_var);
		HITPLAYER__ctor_mB8D5F81CBF89B5D337064FAB0E5DB88B0109CB9D(L_7, NULL);
		V_0 = L_7;
		HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* L_8 = V_0;
		HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* L_9 = L_8;
		RuntimeObject* L_10;
		L_10 = HITPLAYERDELAY_get_MY_m86119E4EDCA1CCB4572BA3EFC7205AC9A7CFC4D2_inline(__this, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_9, L_10);
		HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* L_11 = L_9;
		RuntimeObject* L_12;
		L_12 = HITPLAYERDELAY_get_THERE_m77C25C86EFAB23E6350D5C5AFE01E07908F209DF_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_11, L_12);
		RuntimeObject* L_13;
		L_13 = HITPLAYERDELAY_get__world_mD092BC53D176E6243BBB5B44DBC884EAF95082FC_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_11, L_13);
		RuntimeObject* L_14;
		L_14 = HITPLAYERDELAY_get__world_mD092BC53D176E6243BBB5B44DBC884EAF95082FC_inline(__this, NULL);
		HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* L_15 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_15);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KILLPLAYER_get_MY_m609B71763D83ABD4B85300AE8249BAEC4C313F92 (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KILLPLAYER_set_MY_mFCD2CEF2FA15DD20571396A9E6ED5624FB2D0D1A (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KILLPLAYER_get_THERE_mA8F304B34E1B1B01C0B7D20F77BB318D2A4772BA (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KILLPLAYER_set_THERE_mFE2D68FE3D8DC67DB4A79966774718CEFA14A426 (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KILLPLAYER_set__world_m0002E0DB93649D393AA6161D74ED14F98D8188F5 (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KILLPLAYER_get_Current_m4A690D9BCBF0546E0DCBA9385757F13030061E41 (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KILLPLAYER_set_Current_m780D1321992DE8475C0411DBF91AFECA80EBF0DA (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KILLPLAYER_Reset_m32E09FFF1C0A2E34CB4333DD7F255922ED4BEA42 (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KILLPLAYER__ctor_mF45C3DA14A5A95CCBE7A24813FBBC59D876BE345 (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KILLPLAYER__ctor_mC0DF757F08C3B3E49517A8B4AA6FC9635AA133E5 (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		KILLPLAYER_set_MY_mFCD2CEF2FA15DD20571396A9E6ED5624FB2D0D1A_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		KILLPLAYER_set_THERE_mFE2D68FE3D8DC67DB4A79966774718CEFA14A426_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		KILLPLAYER_set__world_m0002E0DB93649D393AA6161D74ED14F98D8188F5_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KILLPLAYER_MoveNext_mB47950F7439E0856C11B108FA12CFE5A4485C546 (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-1027546889));
		__this->___MODE_DEATH_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MODE_DEATH_0), (void*)L_2);
		RuntimeObject* L_3 = __this->___MODE_DEATH_0;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___MODE_DEATH_0_val = L_4;
		RuntimeObject* L_5;
		L_5 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
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
		float L_10 = __this->___MODE_DEATH_0_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_0198;
		}
	}
	{
		RuntimeObject* L_12;
		L_12 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)82), (RuntimeObject*)NULL);
		RuntimeObject* L_14;
		L_14 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_4), (void*)L_16);
		RuntimeObject* L_17;
		L_17 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		RuntimeObject* L_19 = __this->___SELECTNONE_4;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)20), L_19);
		RuntimeObject* L_20;
		L_20 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)-1356418364), (bool)1, (bool)1);
		__this->___PAL_RED_7 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PAL_RED_7), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		RuntimeObject* L_24 = __this->___PAL_RED_7;
		NullCheck(L_23);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, L_24, (0.5f));
		RuntimeObject* L_25;
		L_25 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)-1739742024), (bool)1, (bool)1);
		__this->___DEATH00SND_9 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DEATH00SND_9), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		RuntimeObject* L_29 = __this->___DEATH00SND_9;
		NullCheck(L_28);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, L_29, (1.0f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* L_30 = (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B*)il2cpp_codegen_object_new(SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B_il2cpp_TypeInfo_var);
		SET_DEATH__ctor_mB92175D43C40ECED36C078F9326149A461B872D6(L_30, NULL);
		V_0 = L_30;
		SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* L_31 = V_0;
		SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* L_32 = L_31;
		RuntimeObject* L_33;
		L_33 = KILLPLAYER_get_MY_m609B71763D83ABD4B85300AE8249BAEC4C313F92_inline(__this, NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_32, L_33);
		SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* L_34 = L_32;
		RuntimeObject* L_35;
		L_35 = KILLPLAYER_get_THERE_mA8F304B34E1B1B01C0B7D20F77BB318D2A4772BA_inline(__this, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_34, L_35);
		RuntimeObject* L_36;
		L_36 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_34, L_36);
		RuntimeObject* L_37;
		L_37 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* L_38 = V_0;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_37, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_38);
		RuntimeObject* L_40;
		L_40 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_40, 5, ((int32_t)-515898157));
		__this->___DEATHCOUNTER_12 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DEATHCOUNTER_12), (void*)L_41);
		RuntimeObject* L_42 = __this->___DEATHCOUNTER_12;
		NullCheck(L_42);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)231), (0.0f));
		return (bool)0;
	}

IL_0198:
	{
		RuntimeObject* L_43;
		L_43 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, 5, ((int32_t)-515898157));
		__this->___DEATHCOUNTER_14 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DEATHCOUNTER_14), (void*)L_44);
		RuntimeObject* L_45 = __this->___DEATHCOUNTER_14;
		NullCheck(L_45);
		float L_46;
		L_46 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)231), (bool)1);
		__this->___DEATHCOUNTER_14_val = L_46;
		RuntimeObject* L_47;
		L_47 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, 5, ((int32_t)-515898157));
		__this->___DEATHCOUNTER_15 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DEATHCOUNTER_15), (void*)L_48);
		RuntimeObject* L_49 = __this->___DEATHCOUNTER_15;
		float L_50 = __this->___DEATHCOUNTER_14_val;
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)231), ((float)il2cpp_codegen_add(L_50, (1.0f))));
		RuntimeObject* L_51;
		L_51 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_51, 5, ((int32_t)431));
		__this->___PLAYER_VX_16 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_16), (void*)L_52);
		RuntimeObject* L_53;
		L_53 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)431));
		__this->___PLAYER_VX_17 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_17), (void*)L_54);
		RuntimeObject* L_55 = __this->___PLAYER_VX_17;
		NullCheck(L_55);
		float L_56;
		L_56 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_17_val = L_56;
		RuntimeObject* L_57;
		L_57 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_57, 5, ((int32_t)431));
		__this->___PLAYER_VX_18 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_18), (void*)L_58);
		RuntimeObject* L_59 = __this->___PLAYER_VX_18;
		NullCheck(L_59);
		float L_60;
		L_60 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_18_val = L_60;
		RuntimeObject* L_61 = __this->___PLAYER_VX_16;
		float L_62 = __this->___PLAYER_VX_18_val;
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)231), ((float)il2cpp_codegen_multiply(L_62, (0.5f))));
		RuntimeObject* L_63;
		L_63 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, 5, ((int32_t)432));
		__this->___PLAYER_VY_21 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_21), (void*)L_64);
		RuntimeObject* L_65;
		L_65 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_65, 5, ((int32_t)432));
		__this->___PLAYER_VY_22 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_22), (void*)L_66);
		RuntimeObject* L_67 = __this->___PLAYER_VY_22;
		NullCheck(L_67);
		float L_68;
		L_68 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_67, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_22_val = L_68;
		RuntimeObject* L_69;
		L_69 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_69, 5, ((int32_t)432));
		__this->___PLAYER_VY_23 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_23), (void*)L_70);
		RuntimeObject* L_71 = __this->___PLAYER_VY_23;
		NullCheck(L_71);
		float L_72;
		L_72 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_71, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_23_val = L_72;
		RuntimeObject* L_73 = __this->___PLAYER_VY_21;
		float L_74 = __this->___PLAYER_VY_23_val;
		NullCheck(L_73);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)231), ((float)il2cpp_codegen_multiply(L_74, (0.5f))));
		RuntimeObject* L_75;
		L_75 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_75);
		RuntimeObject* L_76;
		L_76 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_75, 5, ((int32_t)-515898157));
		__this->___DEATHCOUNTER_27 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DEATHCOUNTER_27), (void*)L_76);
		RuntimeObject* L_77 = __this->___DEATHCOUNTER_27;
		NullCheck(L_77);
		float L_78;
		L_78 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_77, ((int32_t)231), (bool)1);
		__this->___DEATHCOUNTER_27_val = L_78;
		float L_79 = __this->___DEATHCOUNTER_27_val;
		bool L_80;
		L_80 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_79, (48.0f), NULL);
		if (!L_80)
		{
			goto IL_0359;
		}
	}
	{
		return (bool)0;
	}

IL_0359:
	{
		RuntimeObject* L_81;
		L_81 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_81);
		RuntimeObject* L_82;
		L_82 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_81, 5, ((int32_t)-515898157));
		__this->___DEATHCOUNTER_29 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DEATHCOUNTER_29), (void*)L_82);
		RuntimeObject* L_83 = __this->___DEATHCOUNTER_29;
		NullCheck(L_83);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)231), (0.0f));
		RuntimeObject* L_84;
		L_84 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_84, ((int32_t)270057211), (RuntimeObject*)NULL);
		RuntimeObject* L_85;
		L_85 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_85);
		NullCheck(L_86);
		RuntimeObject* L_87;
		L_87 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)-168400335), (bool)1, (bool)1);
		__this->___ENDOFLEVEL_32 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ENDOFLEVEL_32), (void*)L_87);
		RuntimeObject* L_88;
		L_88 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_88);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_88);
		RuntimeObject* L_90 = __this->___ENDOFLEVEL_32;
		NullCheck(L_89);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)20), L_90);
		RuntimeObject* L_91;
		L_91 = KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline(__this, NULL);
		NullCheck(L_91);
		RuntimeObject* L_92;
		L_92 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_91);
		NullCheck(L_92);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)11), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FINISHPLAYER_get_MY_mF0C190D6BE75699E89B0C586B8386D4C547C863F (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FINISHPLAYER_set_MY_mF5AD1CB26212E1EF3ED88C78164CC61327FB8982 (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FINISHPLAYER_get_THERE_m85876DCB34B690000B91389C7278196AA491C316 (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FINISHPLAYER_set_THERE_m415411A8053116828D633164C3831C73B06BD432 (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FINISHPLAYER_get__world_m4F9941A9998B773E7EED24ECBE98685B17785480 (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FINISHPLAYER_set__world_m0EB5B6FFADA5D9CC8A88D9D37DDF76108A82A0F5 (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FINISHPLAYER_get_Current_m8FBFF71A91271B06C752271F67A10B03330903C6 (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FINISHPLAYER_set_Current_mC965A2B4036B25E3E2D39506E2C6D837DC81FF96 (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FINISHPLAYER_Reset_m8BD1706FF8A0C3F32303D3E81848DFEE82CBA3B4 (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FINISHPLAYER__ctor_m9EE67FC6A276184F9E61050934A4A919A05D97C3 (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FINISHPLAYER__ctor_m06BC85565B09F394E331EA80FA9000807B98507D (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		FINISHPLAYER_set_MY_mF5AD1CB26212E1EF3ED88C78164CC61327FB8982_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		FINISHPLAYER_set_THERE_m415411A8053116828D633164C3831C73B06BD432_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		FINISHPLAYER_set__world_m0EB5B6FFADA5D9CC8A88D9D37DDF76108A82A0F5_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FINISHPLAYER_MoveNext_m6E917898A10E87606CCEFCD0EDDE1E9AFD8F4034 (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, const RuntimeMethod* method) 
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
		L_1 = FINISHPLAYER_get_MY_mF0C190D6BE75699E89B0C586B8386D4C547C863F_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = FINISHPLAYER_get__world_m4F9941A9998B773E7EED24ECBE98685B17785480_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)1513684550), (bool)1, (bool)1);
		__this->___KILLPLAYER_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KILLPLAYER_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = FINISHPLAYER_get__world_m4F9941A9998B773E7EED24ECBE98685B17785480_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8 = __this->___KILLPLAYER_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)11), L_8);
		RuntimeObject* L_9;
		L_9 = FINISHPLAYER_get__world_m4F9941A9998B773E7EED24ECBE98685B17785480_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)1569989984), (bool)1, (bool)1);
		__this->___EXP01SND_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXP01SND_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = FINISHPLAYER_get__world_m4F9941A9998B773E7EED24ECBE98685B17785480_inline(__this, NULL);
		RuntimeObject* L_13 = __this->___EXP01SND_6;
		NullCheck(L_12);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, L_13, (0.699999988f), (RuntimeObject*)NULL, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TOGGLEGODMODE_get_MY_m631391D13A6C5B0EA37D4E007D590ADBA50C9BF3 (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TOGGLEGODMODE_set_MY_mA25943E8536F4573671CD8C3FC4970D382618287 (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TOGGLEGODMODE_get_THERE_m8B983A0AB9C2A6E8AE3FF7714FE21907C04DE38B (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TOGGLEGODMODE_set_THERE_m2233085EA4CAF95B141F5D71E3D7680483B8F573 (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TOGGLEGODMODE_set__world_m61ED43EEE0D9F6CBC9CDE73AD783E815D1C47F7C (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TOGGLEGODMODE_get_Current_m6E679BC4D298D4144360D16C0AD1B808B4540267 (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TOGGLEGODMODE_set_Current_m90F0F0815EEF1EEAF8AB8C5BCE1BD7CF664DF8CB (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TOGGLEGODMODE_Reset_m1B3C78285311847D5341DAC2EB42F1B2948E4963 (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TOGGLEGODMODE__ctor_mEF86B43D94D3098BDB60CB41AF5E38D71EF824F2 (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TOGGLEGODMODE__ctor_m357FC58BDFAC0B506E0B2DB628C59AEE464EBCB4 (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TOGGLEGODMODE_set_MY_mA25943E8536F4573671CD8C3FC4970D382618287_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TOGGLEGODMODE_set_THERE_m2233085EA4CAF95B141F5D71E3D7680483B8F573_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TOGGLEGODMODE_set__world_m61ED43EEE0D9F6CBC9CDE73AD783E815D1C47F7C_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TOGGLEGODMODE_MoveNext_m653AF8BD525604AD8C2BA0AA8CA95CFFE7484871 (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) 
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
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_0 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_1 = NULL;
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)51), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)759955234), (bool)1, (bool)1);
		__this->___ALARM03SND_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ALARM03SND_2), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		RuntimeObject* L_7 = __this->___ALARM03SND_2;
		NullCheck(L_6);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_6, L_7, (0.699999988f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_8;
		L_8 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)1756335307));
		__this->___GOD_MODE_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GOD_MODE_5), (void*)L_9);
		RuntimeObject* L_10 = __this->___GOD_MODE_5;
		NullCheck(L_10);
		float L_11;
		L_11 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), (bool)1);
		__this->___GOD_MODE_5_val = L_11;
		float L_12 = __this->___GOD_MODE_5_val;
		bool L_13;
		L_13 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_12, (1.0f), NULL);
		if (L_13)
		{
			goto IL_0134;
		}
	}
	{
		RuntimeObject* L_14;
		L_14 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)-2036233808), (bool)1, (bool)1);
		__this->___HLP06STR_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HLP06STR_6), (void*)L_16);
		RuntimeObject* L_17;
		L_17 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		RuntimeObject* L_18 = __this->___HLP06STR_6;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_17, ((int32_t)361798934), L_18);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_19 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_19, NULL);
		V_0 = L_19;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_20 = V_0;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_21 = L_20;
		RuntimeObject* L_22;
		L_22 = TOGGLEGODMODE_get_MY_m631391D13A6C5B0EA37D4E007D590ADBA50C9BF3_inline(__this, NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_21, L_22);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_23 = L_21;
		RuntimeObject* L_24;
		L_24 = TOGGLEGODMODE_get_THERE_m8B983A0AB9C2A6E8AE3FF7714FE21907C04DE38B_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_24);
		RuntimeObject* L_25;
		L_25 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_25);
		RuntimeObject* L_26;
		L_26 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_27 = V_0;
		NullCheck(L_26);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_26, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_27);
		RuntimeObject* L_29;
		L_29 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, 5, ((int32_t)1756335307));
		__this->___GOD_MODE_9 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GOD_MODE_9), (void*)L_30);
		RuntimeObject* L_31 = __this->___GOD_MODE_9;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), (0.0f));
		return (bool)0;
	}

IL_0134:
	{
		RuntimeObject* L_32;
		L_32 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)-2036269745), (bool)1, (bool)1);
		__this->___HLP05STR_10 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HLP05STR_10), (void*)L_34);
		RuntimeObject* L_35;
		L_35 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		RuntimeObject* L_36 = __this->___HLP05STR_10;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, ((int32_t)361798934), L_36);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_37 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_37, NULL);
		V_1 = L_37;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_38 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_39 = L_38;
		RuntimeObject* L_40;
		L_40 = TOGGLEGODMODE_get_MY_m631391D13A6C5B0EA37D4E007D590ADBA50C9BF3_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = TOGGLEGODMODE_get_THERE_m8B983A0AB9C2A6E8AE3FF7714FE21907C04DE38B_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_45 = V_1;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
		RuntimeObject* L_47;
		L_47 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, 5, ((int32_t)1756335307));
		__this->___GOD_MODE_13 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GOD_MODE_13), (void*)L_48);
		RuntimeObject* L_49 = __this->___GOD_MODE_13;
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)231), (1.0f));
		RuntimeObject* L_50;
		L_50 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_50, 5, ((int32_t)1205036122));
		__this->___HAS_MP5_15 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_MP5_15), (void*)L_51);
		RuntimeObject* L_52 = __this->___HAS_MP5_15;
		NullCheck(L_52);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)231), (1.0f));
		RuntimeObject* L_53;
		L_53 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)40123194));
		__this->___HAS_GRANADE_17 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_GRANADE_17), (void*)L_54);
		RuntimeObject* L_55 = __this->___HAS_GRANADE_17;
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)231), (1.0f));
		RuntimeObject* L_56;
		L_56 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, 5, ((int32_t)-1554365628));
		__this->___HAS_STINGER_19 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_STINGER_19), (void*)L_57);
		RuntimeObject* L_58 = __this->___HAS_STINGER_19;
		NullCheck(L_58);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)231), (1.0f));
		RuntimeObject* L_59;
		L_59 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, 5, ((int32_t)187328435));
		__this->___HAS_QUANTUM_21 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_QUANTUM_21), (void*)L_60);
		RuntimeObject* L_61 = __this->___HAS_QUANTUM_21;
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)231), (1.0f));
		RuntimeObject* L_62;
		L_62 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, 5, ((int32_t)1205039005));
		__this->___HAS_PDA_23 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_PDA_23), (void*)L_63);
		RuntimeObject* L_64 = __this->___HAS_PDA_23;
		NullCheck(L_64);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)231), (1.0f));
		RuntimeObject* L_65;
		L_65 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_65, 5, ((int32_t)1494668136));
		__this->___AMMO_MP5_25 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_MP5_25), (void*)L_66);
		RuntimeObject* L_67 = __this->___AMMO_MP5_25;
		NullCheck(L_67);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_67, ((int32_t)231), (999.0f));
		RuntimeObject* L_68;
		L_68 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_68, 5, ((int32_t)-691764920));
		__this->___AMMO_GRANADE_27 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_GRANADE_27), (void*)L_69);
		RuntimeObject* L_70 = __this->___AMMO_GRANADE_27;
		NullCheck(L_70);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_70, ((int32_t)231), (999.0f));
		RuntimeObject* L_71;
		L_71 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, 5, ((int32_t)2008713554));
		__this->___AMMO_STINGER_29 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_STINGER_29), (void*)L_72);
		RuntimeObject* L_73 = __this->___AMMO_STINGER_29;
		NullCheck(L_73);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)231), (999.0f));
		RuntimeObject* L_74;
		L_74 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_74, 5, ((int32_t)-544559679));
		__this->___AMMO_QUANTUM_31 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_QUANTUM_31), (void*)L_75);
		RuntimeObject* L_76 = __this->___AMMO_QUANTUM_31;
		NullCheck(L_76);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)231), (999.0f));
		RuntimeObject* L_77;
		L_77 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_77);
		RuntimeObject* L_78;
		L_78 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_77, 5, ((int32_t)2089248007));
		__this->___KEY1_33 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY1_33), (void*)L_78);
		RuntimeObject* L_79 = __this->___KEY1_33;
		NullCheck(L_79);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_79, ((int32_t)231), (1.0f));
		RuntimeObject* L_80;
		L_80 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_80, 5, ((int32_t)2089248008));
		__this->___KEY2_35 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2_35), (void*)L_81);
		RuntimeObject* L_82 = __this->___KEY2_35;
		NullCheck(L_82);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_82, ((int32_t)231), (1.0f));
		RuntimeObject* L_83;
		L_83 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_83, 5, ((int32_t)2089248009));
		__this->___KEY3_37 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY3_37), (void*)L_84);
		RuntimeObject* L_85 = __this->___KEY3_37;
		NullCheck(L_85);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_85, ((int32_t)231), (1.0f));
		RuntimeObject* L_86;
		L_86 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_86);
		RuntimeObject* L_87;
		L_87 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_86, 5, ((int32_t)2089248010));
		__this->___KEY4_39 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY4_39), (void*)L_87);
		RuntimeObject* L_88 = __this->___KEY4_39;
		NullCheck(L_88);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)231), (1.0f));
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_89 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_89, NULL);
		V_2 = L_89;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_90 = V_2;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_91 = L_90;
		RuntimeObject* L_92;
		L_92 = TOGGLEGODMODE_get_MY_m631391D13A6C5B0EA37D4E007D590ADBA50C9BF3_inline(__this, NULL);
		NullCheck(L_91);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_91, L_92);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_93 = L_91;
		RuntimeObject* L_94;
		L_94 = TOGGLEGODMODE_get_THERE_m8B983A0AB9C2A6E8AE3FF7714FE21907C04DE38B_inline(__this, NULL);
		NullCheck(L_93);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_93, L_94);
		RuntimeObject* L_95;
		L_95 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		NullCheck(L_93);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_93, L_95);
		RuntimeObject* L_96;
		L_96 = TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_97 = V_2;
		NullCheck(L_96);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_96, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_97);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETCKEY_get_MY_m0A7EEE1901583311F07AD68FB1B28FB9D8DEE9B0 (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETCKEY_set_MY_m477C5A55E1847C03564EC61D2E6F1D5BE0305B0D (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETCKEY_get_THERE_m5F68641E84F8F03B1E43E192E8CBCE8B114A2872 (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETCKEY_set_THERE_m60FF228BDE105014530DFB3E6F2609E10C163B23 (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETCKEY_get__world_m20981ECCA6D46B3656A76277C096B39023470C60 (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETCKEY_set__world_m8EA53830A1E2234F1959CECB9AE62865D226D7B4 (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETCKEY_get_Current_m8F858271AB375591F179E89B871DEBF7D293C077 (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETCKEY_set_Current_mA3E5DF2201104C351033EE7BDA0AB30F82EF39E0 (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETCKEY_Reset_m76D7E80941FC436519F85BEA5BD16DD8209C2F7A (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETCKEY__ctor_m7C5A2E389C1BA00BDFC8F65365A70E2A49890D53 (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETCKEY__ctor_m147A7E3F902B7E1F95115274312BFCC9192701E9 (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SETCKEY_set_MY_m477C5A55E1847C03564EC61D2E6F1D5BE0305B0D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SETCKEY_set_THERE_m60FF228BDE105014530DFB3E6F2609E10C163B23_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SETCKEY_set__world_m8EA53830A1E2234F1959CECB9AE62865D226D7B4_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SETCKEY_MoveNext_m6FFF061C3A0D684B1E6FF2CFFAE666EBCA8E8151 (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, const RuntimeMethod* method) 
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
		L_1 = SETCKEY_get__world_m20981ECCA6D46B3656A76277C096B39023470C60_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-1611822903), (bool)1, (bool)1);
		__this->___SETGKEY_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SETGKEY_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = SETCKEY_get__world_m20981ECCA6D46B3656A76277C096B39023470C60_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = __this->___SETGKEY_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)50), L_6);
		RuntimeObject* L_7;
		L_7 = SETCKEY_get__world_m20981ECCA6D46B3656A76277C096B39023470C60_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)-327985785));
		__this->___GODCOUNTER_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GODCOUNTER_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___GODCOUNTER_3;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (3.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETGKEY_get_MY_m6A7B6903227A81ED3456414158D576C0C2F86397 (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETGKEY_set_MY_mDDD13D24855A7EE019AB641147E7DCF144EDEF10 (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETGKEY_get_THERE_m9FA9CB2546067A6F222504512203B2A58A503717 (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETGKEY_set_THERE_m81731FE73A3B1DB66753AB3ABB74928580B8EA26 (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETGKEY_get__world_mE5A2E2EE65E98234DB6B46951C7C4CD8A57FFEBF (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETGKEY_set__world_m6ED4F17A146E505B8B1C94BA2952D840CD6E124D (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETGKEY_get_Current_m335F2C8528DA8BF2F2EB72E49338BCFCEA4141D1 (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETGKEY_set_Current_mB5FEB95DEA63319BB39242B1DE637005698869E6 (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETGKEY_Reset_m89E58F94F084AD52563D59A8F5917EC56F187E2F (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETGKEY__ctor_m8A7E3EFD06991D319AABA043131F2F7D93DD67EA (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETGKEY__ctor_m6686F7534CA765F289943FE57FADBF553B723E87 (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SETGKEY_set_MY_mDDD13D24855A7EE019AB641147E7DCF144EDEF10_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SETGKEY_set_THERE_m81731FE73A3B1DB66753AB3ABB74928580B8EA26_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SETGKEY_set__world_m6ED4F17A146E505B8B1C94BA2952D840CD6E124D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SETGKEY_MoveNext_mCDC5749686D60D4F1C04A01635E3846D1B399FAC (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, const RuntimeMethod* method) 
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
		L_1 = SETGKEY_get__world_mE5A2E2EE65E98234DB6B46951C7C4CD8A57FFEBF_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)50), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = SETGKEY_get__world_mE5A2E2EE65E98234DB6B46951C7C4CD8A57FFEBF_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-1611535407), (bool)1, (bool)1);
		__this->___SETOKEY_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SETOKEY_2), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = SETGKEY_get__world_mE5A2E2EE65E98234DB6B46951C7C4CD8A57FFEBF_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8 = __this->___SETOKEY_2;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)54), L_8);
		RuntimeObject* L_9;
		L_9 = SETGKEY_get__world_mE5A2E2EE65E98234DB6B46951C7C4CD8A57FFEBF_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)-327985785));
		__this->___GODCOUNTER_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GODCOUNTER_5), (void*)L_10);
		RuntimeObject* L_11 = __this->___GODCOUNTER_5;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (3.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETOKEY_get_MY_m4ED3E7835A70131B4D579A963654CEAA467D740D (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETOKEY_set_MY_m3974F5CC66E47A6AF83E86BEA337C1C04A9E5AB1 (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETOKEY_get_THERE_m8D3EBEE6943D9DB25B990D4957A274131A4D5C43 (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETOKEY_set_THERE_mE8DBD9CE16625BA5991ED5A8EB75439A58971BFD (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETOKEY_get__world_mE110F7D4B57CB63C5E6C882F4A51E0FEDFC19E80 (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETOKEY_set__world_mCCC54BAC31C916295F2D4717D960C792C6E53B93 (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETOKEY_get_Current_mF46941F82A1F626D2571DC947154B0251EE3F055 (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETOKEY_set_Current_mD970DC958F59E8ADDFE347CCA752CEC2416A9B48 (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETOKEY_Reset_mD16556D02FAB317E4517A6650FD8BADAC592B91E (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETOKEY__ctor_m1E3A1FF9ABB715C429DEF6D6C6C8CE26AB61152F (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETOKEY__ctor_m6D6DA4B5A32305B1330CF2795860011A81525892 (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SETOKEY_set_MY_m3974F5CC66E47A6AF83E86BEA337C1C04A9E5AB1_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SETOKEY_set_THERE_mE8DBD9CE16625BA5991ED5A8EB75439A58971BFD_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SETOKEY_set__world_mCCC54BAC31C916295F2D4717D960C792C6E53B93_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SETOKEY_MoveNext_mF03C49C278096C9A7486372AFD50F799174593DF (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, const RuntimeMethod* method) 
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
		L_1 = SETOKEY_get__world_mE110F7D4B57CB63C5E6C882F4A51E0FEDFC19E80_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)54), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = SETOKEY_get__world_mE110F7D4B57CB63C5E6C882F4A51E0FEDFC19E80_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-1611930714), (bool)1, (bool)1);
		__this->___SETDKEY_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SETDKEY_2), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = SETOKEY_get__world_mE110F7D4B57CB63C5E6C882F4A51E0FEDFC19E80_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8 = __this->___SETDKEY_2;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)62), L_8);
		RuntimeObject* L_9;
		L_9 = SETOKEY_get__world_mE110F7D4B57CB63C5E6C882F4A51E0FEDFC19E80_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)-327985785));
		__this->___GODCOUNTER_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GODCOUNTER_5), (void*)L_10);
		RuntimeObject* L_11 = __this->___GODCOUNTER_5;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (3.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETDKEY_get_MY_mC6C628014D910F82D6BC682282D92B4D0538D03F (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETDKEY_set_MY_m4FCA0AC8539427B6EA833CE50A739C1FAACEA44A (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETDKEY_get_THERE_mC706310BC3B42BA9B5BAA086AFE787094A1BCBCC (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETDKEY_set_THERE_mD59393B022BCE866F1D0F4EC73FBA758FB205339 (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETDKEY_get__world_mAB6E9AB1486E00D94DAE654AB62C60305356B2F8 (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETDKEY_set__world_m3C6B6CE03DCC0040E75F5D65B57F56DFD86B4487 (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETDKEY_get_Current_m5FC1CD1B6B56B61EB6CFF6DC42E1DA2A4AB7315A (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETDKEY_set_Current_m3E3025BE3C2D6A3DC8AB04CBCD5AE2314C602C1D (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETDKEY_Reset_m7A1C628E09FD8F259CA64096845898305DECCB58 (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETDKEY__ctor_m3C94C0B951744ED95D225C33EB486E99F93D6665 (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETDKEY__ctor_m4FB60F6477588F97E50B6EAFDFD1E60002CEC685 (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SETDKEY_set_MY_m4FCA0AC8539427B6EA833CE50A739C1FAACEA44A_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SETDKEY_set_THERE_mD59393B022BCE866F1D0F4EC73FBA758FB205339_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SETDKEY_set__world_m3C6B6CE03DCC0040E75F5D65B57F56DFD86B4487_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SETDKEY_MoveNext_m24B38B97525589C17AA1D2A4470A4745B2C37162 (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, const RuntimeMethod* method) 
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
		L_1 = SETDKEY_get__world_mAB6E9AB1486E00D94DAE654AB62C60305356B2F8_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)62), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = SETDKEY_get__world_mAB6E9AB1486E00D94DAE654AB62C60305356B2F8_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)138490414), (bool)1, (bool)1);
		__this->___TOGGLEGODMODE_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TOGGLEGODMODE_2), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = SETDKEY_get__world_mAB6E9AB1486E00D94DAE654AB62C60305356B2F8_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8 = __this->___TOGGLEGODMODE_2;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)51), L_8);
		RuntimeObject* L_9;
		L_9 = SETDKEY_get__world_mAB6E9AB1486E00D94DAE654AB62C60305356B2F8_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)-327985785));
		__this->___GODCOUNTER_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GODCOUNTER_5), (void*)L_10);
		RuntimeObject* L_11 = __this->___GODCOUNTER_5;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (3.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FIRE_get_MY_m1018064BA708BFDF239D7A9B171C1E91C8BF1A5A (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FIRE_set_MY_m4BDF7CC3DD0D34BAF5D1A5822816A3771A91EEA6 (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FIRE_get_THERE_mEBF57DA4FF3A434039DE755A95CC7747DFA85696 (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FIRE_set_THERE_m7CDA32CB21408A307112175851CA59EA64F94918 (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FIRE_set__world_mEA47112A626FEDD6E863C0129C6F7C847E66E71E (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FIRE_get_Current_m628E086340B88ACFBFBA81C594AD744769277372 (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2 (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FIRE_Reset_mE9ABDE8BD37B387C2E47F71CB1BD4F45DF4B9FFB (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FIRE__ctor_mD0862351B5DD9D4425214B819737CE95CE563954 (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FIRE__ctor_mDFE9E886689092779AD77F2D81F8CC79D9803D21 (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		FIRE_set_MY_m4BDF7CC3DD0D34BAF5D1A5822816A3771A91EEA6_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		FIRE_set_THERE_m7CDA32CB21408A307112175851CA59EA64F94918_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		FIRE_set__world_mEA47112A626FEDD6E863C0129C6F7C847E66E71E_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FIRE_MoveNext_m4867ABE952773B08A95132FA74DFFA57B79B19A5 (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172_il2cpp_TypeInfo_var);
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
	DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* V_1 = NULL;
	CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_00ad;
			}
			case 1:
			{
				goto IL_04c6;
			}
			case 2:
			{
				goto IL_0c45;
			}
			case 3:
			{
				goto IL_0d04;
			}
			case 4:
			{
				goto IL_0e4d;
			}
			case 5:
			{
				goto IL_102a;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_2, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_1), (void*)L_3);
		RuntimeObject* L_4 = __this->___GUNFIRING_1;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)231), (1.0f));
		RuntimeObject* L_5;
		L_5 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)97), (RuntimeObject*)NULL);
		float L_9;
		L_9 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_9;
		float L_10 = __this->___startTime1;
		float L_11;
		L_11 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(1, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_10, L_11));
		__this->____cursor = 1;
		goto IL_00ad;
	}

IL_00a0:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_12 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, L_12, NULL);
		return (bool)1;
	}

IL_00ad:
	{
		float L_13;
		L_13 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_14 = __this->___endTime1;
		if ((((float)L_13) < ((float)L_14)))
		{
			goto IL_00a0;
		}
	}
	{
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, NULL, NULL);
	}

IL_00c1:
	{
		RuntimeObject* L_15;
		L_15 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)-1593370511), (bool)1, (bool)1);
		__this->___MP5_02OVL_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_02OVL_7), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20 = __this->___MP5_02OVL_7;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)158), L_20);
		RuntimeObject* L_21;
		L_21 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)2088896983));
		__this->___AMMO_11 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_11), (void*)L_22);
		RuntimeObject* L_23 = __this->___AMMO_11;
		NullCheck(L_23);
		float L_24;
		L_24 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), (bool)1);
		__this->___AMMO_11_val = L_24;
		float L_25 = __this->___AMMO_11_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_25, (0.0f), NULL);
		if (L_26)
		{
			goto IL_0e9e;
		}
	}
	{
		RuntimeObject* L_27;
		L_27 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, 5, ((int32_t)2088896983));
		__this->___AMMO_12 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_12), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, 5, ((int32_t)2088896983));
		__this->___AMMO_13 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_13), (void*)L_30);
		RuntimeObject* L_31 = __this->___AMMO_13;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), (bool)1);
		__this->___AMMO_13_val = L_32;
		RuntimeObject* L_33;
		L_33 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)2088896983));
		__this->___AMMO_14 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_14), (void*)L_34);
		RuntimeObject* L_35 = __this->___AMMO_14;
		NullCheck(L_35);
		float L_36;
		L_36 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), (bool)1);
		__this->___AMMO_14_val = L_36;
		RuntimeObject* L_37;
		L_37 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_37, 5, ((int32_t)1295621997));
		__this->___TOUGHNESS_16 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TOUGHNESS_16), (void*)L_38);
		RuntimeObject* L_39 = __this->___TOUGHNESS_16;
		NullCheck(L_39);
		float L_40;
		L_40 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)231), (bool)1);
		__this->___TOUGHNESS_16_val = L_40;
		RuntimeObject* L_41 = __this->___AMMO_12;
		float L_42 = __this->___AMMO_14_val;
		float L_43 = __this->___TOUGHNESS_16_val;
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_42, L_43)));
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_44 = (DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D*)il2cpp_codegen_object_new(DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D_il2cpp_TypeInfo_var);
		DECAMMO__ctor_mF631B0417F3BD5DBA5E40DB19E2F3843AE8D87D4(L_44, NULL);
		V_1 = L_44;
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_45 = V_1;
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_46 = L_45;
		RuntimeObject* L_47;
		L_47 = FIRE_get_MY_m1018064BA708BFDF239D7A9B171C1E91C8BF1A5A_inline(__this, NULL);
		NullCheck(L_46);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_46, L_47);
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_48 = L_46;
		RuntimeObject* L_49;
		L_49 = FIRE_get_THERE_mEBF57DA4FF3A434039DE755A95CC7747DFA85696_inline(__this, NULL);
		NullCheck(L_48);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_48, L_49);
		RuntimeObject* L_50;
		L_50 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_48);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_48, L_50);
		RuntimeObject* L_51;
		L_51 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_52 = V_1;
		NullCheck(L_51);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_51, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_52);
		RuntimeObject* L_54;
		L_54 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_54, 5, ((int32_t)2088896983));
		__this->___AMMO_18 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_18), (void*)L_55);
		RuntimeObject* L_56 = __this->___AMMO_18;
		NullCheck(L_56);
		float L_57;
		L_57 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_56, ((int32_t)231), (bool)1);
		__this->___AMMO_18_val = L_57;
		float L_58 = __this->___AMMO_18_val;
		bool L_59;
		L_59 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_58, (20.0f), NULL);
		if (L_59)
		{
			goto IL_0363;
		}
	}
	{
		RuntimeObject* L_60;
		L_60 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_60);
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)665673790), (bool)1, (bool)1);
		__this->___WRN01STR_19 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN01STR_19), (void*)L_62);
		RuntimeObject* L_63;
		L_63 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_63);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_21 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_21), (void*)L_65);
		RuntimeObject* L_66 = __this->___PANELTEXT_21;
		NullCheck(L_66);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_67;
		L_67 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_66, ((int32_t)293), (bool)1);
		__this->___PANELTEXT_21_array = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_21_array), (void*)L_67);
		RuntimeObject* L_68 = __this->___PANELTEXT_21;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)295), (bool)1);
		__this->___PANELTEXT_21_index = L_69;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_70 = __this->___PANELTEXT_21_array;
		int32_t L_71 = __this->___PANELTEXT_21_index;
		RuntimeObject* L_72 = __this->___WRN01STR_19;
		NullCheck(L_70);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_70, ((int32_t)il2cpp_codegen_subtract(L_71, 1)), L_72, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_73 = __this->___PANELTEXT_21;
		NullCheck(L_73);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, (bool)1);
		RuntimeObject* L_74;
		L_74 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_74);
		NullCheck(L_75);
		RuntimeObject* L_76;
		L_76 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_75, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_22 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_22), (void*)L_76);
		RuntimeObject* L_77;
		L_77 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_77);
		RuntimeObject* L_78;
		L_78 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_77);
		RuntimeObject* L_79 = __this->___PANELTEXT_22;
		NullCheck(L_78);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_78, ((int32_t)127), L_79);
		RuntimeObject* L_80;
		L_80 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_80, 5, ((int32_t)-1606816744));
		__this->___MSGSECCOUNT_26 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MSGSECCOUNT_26), (void*)L_81);
		RuntimeObject* L_82 = __this->___MSGSECCOUNT_26;
		NullCheck(L_82);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_82, ((int32_t)231), (0.0f));
	}

IL_0363:
	{
		RuntimeObject* L_83;
		L_83 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_83, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_28 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_28), (void*)L_84);
		RuntimeObject* L_85 = __this->___PLAYER_LIGHT_28;
		NullCheck(L_85);
		float L_86;
		L_86 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_85, ((int32_t)231), (bool)1);
		__this->___PLAYER_LIGHT_28_val = L_86;
		RuntimeObject* L_87;
		L_87 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_87);
		RuntimeObject* L_88;
		L_88 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_87, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_29 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_29), (void*)L_88);
		RuntimeObject* L_89 = __this->___PLAYER_LIGHT_29;
		float L_90 = __this->___PLAYER_LIGHT_28_val;
		NullCheck(L_89);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)231), ((float)il2cpp_codegen_add(L_90, (0.5f))));
		RuntimeObject* L_91;
		L_91 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_91);
		RuntimeObject* L_92;
		L_92 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_91);
		NullCheck(L_92);
		RuntimeObject* L_93;
		L_93 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)1363414904), (bool)1, (bool)1);
		__this->___EXPL01OVL_30 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPL01OVL_30), (void*)L_93);
		RuntimeObject* L_94;
		L_94 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_94);
		RuntimeObject* L_95;
		L_95 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_94);
		RuntimeObject* L_96 = __this->___EXPL01OVL_30;
		NullCheck(L_95);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_95, ((int32_t)157), L_96);
		RuntimeObject* L_97;
		L_97 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_97);
		NullCheck(L_98);
		RuntimeObject* L_99;
		L_99 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_98, ((int32_t)-535005787), (bool)1, (bool)1);
		__this->___MP_502SND_33 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP_502SND_33), (void*)L_99);
		RuntimeObject* L_100;
		L_100 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		RuntimeObject* L_101 = __this->___MP_502SND_33;
		NullCheck(L_100);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_100, L_101, (0.400000006f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_102;
		L_102 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_102);
		RuntimeObject* L_103;
		L_103 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_102, 5, ((int32_t)-922693617));
		__this->___SHOT_SOUND_ON_36 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOT_SOUND_ON_36), (void*)L_103);
		RuntimeObject* L_104 = __this->___SHOT_SOUND_ON_36;
		NullCheck(L_104);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_104, ((int32_t)231), (1.0f));
		RuntimeObject* L_105;
		L_105 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_105, 5, ((int32_t)733093231));
		__this->___SHOTSECCOUNT_38 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOTSECCOUNT_38), (void*)L_106);
		RuntimeObject* L_107 = __this->___SHOTSECCOUNT_38;
		NullCheck(L_107);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)231), (0.0f));
		float L_108;
		L_108 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_108;
		float L_109 = __this->___startTime2;
		float L_110;
		L_110 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(1, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_109, L_110));
		__this->____cursor = 2;
		goto IL_04c6;
	}

IL_04b9:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_111 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, L_111, NULL);
		return (bool)1;
	}

IL_04c6:
	{
		float L_112;
		L_112 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_113 = __this->___endTime2;
		if ((((float)L_112) < ((float)L_113)))
		{
			goto IL_04b9;
		}
	}
	{
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, NULL, NULL);
		RuntimeObject* L_114;
		L_114 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_114);
		RuntimeObject* L_115;
		L_115 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_114);
		NullCheck(L_115);
		RuntimeObject* L_116;
		L_116 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_115, ((int32_t)-1593334574), (bool)1, (bool)1);
		__this->___MP5_03OVL_40 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_03OVL_40), (void*)L_116);
		RuntimeObject* L_117;
		L_117 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_117);
		RuntimeObject* L_118;
		L_118 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_117);
		RuntimeObject* L_119 = __this->___MP5_03OVL_40;
		NullCheck(L_118);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_118, ((int32_t)158), L_119);
		RuntimeObject* L_120;
		L_120 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_120);
		RuntimeObject* L_121;
		L_121 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_120);
		NullCheck(L_121);
		RuntimeObject* L_122;
		L_122 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_121, ((int32_t)1363450841), (bool)1, (bool)1);
		__this->___EXPL02OVL_43 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPL02OVL_43), (void*)L_122);
		RuntimeObject* L_123;
		L_123 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_123);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_123);
		RuntimeObject* L_125 = __this->___EXPL02OVL_43;
		NullCheck(L_124);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_124, ((int32_t)157), L_125);
		RuntimeObject* L_126;
		L_126 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_126);
		RuntimeObject* L_127;
		L_127 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_126, 5, ((int32_t)440));
		__this->___SHOOT_SECTOR_47 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_SECTOR_47), (void*)L_127);
		RuntimeObject* L_128 = __this->___SHOOT_SECTOR_47;
		NullCheck(L_128);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_128, ((int32_t)231), (6.28299999f));
		RuntimeObject* L_129;
		L_129 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_129);
		RuntimeObject* L_130;
		L_130 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_129, 5, ((int32_t)439));
		__this->___SHOOT_RANGE_49 = L_130;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_RANGE_49), (void*)L_130);
		RuntimeObject* L_131 = __this->___SHOOT_RANGE_49;
		NullCheck(L_131);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_131, ((int32_t)231), (200.0f));
		RuntimeObject* L_132;
		L_132 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_132);
		RuntimeObject* L_133;
		L_133 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_132, 5, ((int32_t)441));
		__this->___SHOOT_FAC_50 = L_133;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_50), (void*)L_133);
		RuntimeObject* L_134;
		L_134 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_134);
		RuntimeObject* L_135;
		L_135 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_134, 5, ((int32_t)441));
		__this->___SHOOT_FAC_51 = L_135;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_51), (void*)L_135);
		RuntimeObject* L_136 = __this->___SHOOT_FAC_51;
		NullCheck(L_136);
		float L_137;
		L_137 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_136, ((int32_t)231), (bool)1);
		__this->___SHOOT_FAC_51_val = L_137;
		RuntimeObject* L_138;
		L_138 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_138);
		RuntimeObject* L_139;
		L_139 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_138, 5, ((int32_t)1090796006));
		__this->___PLAYERSHOOTFACTOR_52 = L_139;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYERSHOOTFACTOR_52), (void*)L_139);
		RuntimeObject* L_140 = __this->___PLAYERSHOOTFACTOR_52;
		NullCheck(L_140);
		float L_141;
		L_141 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_140, ((int32_t)231), (bool)1);
		__this->___PLAYERSHOOTFACTOR_52_val = L_141;
		RuntimeObject* L_142 = __this->___SHOOT_FAC_50;
		float L_143 = __this->___PLAYERSHOOTFACTOR_52_val;
		NullCheck(L_142);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_142, ((int32_t)231), L_143);
		RuntimeObject* L_144;
		L_144 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_144);
		RuntimeObject* L_145;
		L_145 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_144, 5, ((int32_t)-564713958));
		__this->___DSHOOTXPLUS_53 = L_145;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DSHOOTXPLUS_53), (void*)L_145);
		RuntimeObject* L_146 = __this->___DSHOOTXPLUS_53;
		NullCheck(L_146);
		float L_147;
		L_147 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_146, ((int32_t)231), (bool)1);
		__this->___DSHOOTXPLUS_53_val = L_147;
		RuntimeObject* L_148;
		L_148 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_148);
		RuntimeObject* L_149;
		L_149 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_148, 5, ((int32_t)442));
		__this->___SHOOT_X_54 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_X_54), (void*)L_149);
		RuntimeObject* L_150 = __this->___SHOOT_X_54;
		float L_151 = __this->___DSHOOTXPLUS_53_val;
		NullCheck(L_150);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_150, ((int32_t)231), L_151);
		RuntimeObject* L_152;
		L_152 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_152);
		RuntimeObject* L_153;
		L_153 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_152, 5, ((int32_t)-968806307));
		__this->___SVANGLE_55 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SVANGLE_55), (void*)L_153);
		RuntimeObject* L_154 = __this->___SVANGLE_55;
		NullCheck(L_154);
		float L_155;
		L_155 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_154, ((int32_t)231), (bool)1);
		__this->___SVANGLE_55_val = L_155;
		RuntimeObject* L_156;
		L_156 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_156);
		RuntimeObject* L_157;
		L_157 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_156, 5, ((int32_t)443));
		__this->___SHOOT_Y_56 = L_157;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_Y_56), (void*)L_157);
		RuntimeObject* L_158 = __this->___SHOOT_Y_56;
		float L_159 = __this->___SVANGLE_55_val;
		NullCheck(L_158);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_158, ((int32_t)231), L_159);
		RuntimeObject* L_160;
		L_160 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		RuntimeObject* L_161;
		L_161 = FIRE_get_MY_m1018064BA708BFDF239D7A9B171C1E91C8BF1A5A_inline(__this, NULL);
		RuntimeObject* L_162;
		L_162 = FIRE_get_THERE_mEBF57DA4FF3A434039DE755A95CC7747DFA85696_inline(__this, NULL);
		NullCheck(L_160);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_160, (RuntimeObject*)NULL, L_161, L_162);
		RuntimeObject* L_163;
		L_163 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_163);
		RuntimeObject* L_164;
		L_164 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_163, 5, ((int32_t)444));
		__this->___HIT_DIST_58 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_58), (void*)L_164);
		RuntimeObject* L_165 = __this->___HIT_DIST_58;
		NullCheck(L_165);
		float L_166;
		L_166 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_165, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_58_val = L_166;
		float L_167 = __this->___HIT_DIST_58_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_168;
		L_168 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_167, (0.0f), NULL);
		if (L_168)
		{
			goto IL_077c;
		}
	}
	{
		RuntimeObject* L_169;
		L_169 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_169);
		RuntimeObject* L_170;
		L_170 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_169, ((int32_t)704), (bool)0);
		__this->___HIT_61 = L_170;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_61), (void*)L_170);
		RuntimeObject* L_171 = __this->___HIT_61;
		NullCheck(L_171);
		float L_172;
		L_172 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_171, ((int32_t)208), (bool)1);
		__this->___temp_62 = L_172;
		float L_173 = __this->___temp_62;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_174;
		L_174 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_173, (1.0f), NULL);
		if (L_174)
		{
			goto IL_0bad;
		}
	}

IL_077c:
	{
		RuntimeObject* L_175;
		L_175 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_175);
		RuntimeObject* L_176;
		L_176 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_175, 5, ((int32_t)442));
		__this->___SHOOT_X_64 = L_176;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_X_64), (void*)L_176);
		RuntimeObject* L_177 = __this->___SHOOT_X_64;
		NullCheck(L_177);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_177, ((int32_t)231), (0.0f));
		RuntimeObject* L_178;
		L_178 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		RuntimeObject* L_179;
		L_179 = FIRE_get_MY_m1018064BA708BFDF239D7A9B171C1E91C8BF1A5A_inline(__this, NULL);
		RuntimeObject* L_180;
		L_180 = FIRE_get_THERE_mEBF57DA4FF3A434039DE755A95CC7747DFA85696_inline(__this, NULL);
		NullCheck(L_178);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_178, (RuntimeObject*)NULL, L_179, L_180);
		RuntimeObject* L_181;
		L_181 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_181);
		RuntimeObject* L_182;
		L_182 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_181, 5, ((int32_t)444));
		__this->___HIT_DIST_66 = L_182;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_66), (void*)L_182);
		RuntimeObject* L_183 = __this->___HIT_DIST_66;
		NullCheck(L_183);
		float L_184;
		L_184 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_183, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_66_val = L_184;
		float L_185 = __this->___HIT_DIST_66_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_186;
		L_186 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_185, (0.0f), NULL);
		if (L_186)
		{
			goto IL_089f;
		}
	}
	{
		RuntimeObject* L_187;
		L_187 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_187);
		RuntimeObject* L_188;
		L_188 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_187, ((int32_t)704), (bool)0);
		__this->___HIT_67 = L_188;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_67), (void*)L_188);
		RuntimeObject* L_189;
		L_189 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		RuntimeObject* L_190 = __this->___HIT_67;
		NullCheck(L_189);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_189, ((int32_t)2013386137), L_190);
		RuntimeObject* L_191;
		L_191 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_191);
		RuntimeObject* L_192;
		L_192 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_191, ((int32_t)2013386137), (bool)0);
		__this->___MY_TARGET_71 = L_192;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_TARGET_71), (void*)L_192);
		RuntimeObject* L_193 = __this->___MY_TARGET_71;
		NullCheck(L_193);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_193, ((int32_t)175), (1.0f));
		RuntimeObject* L_194;
		L_194 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_194);
		RuntimeObject* L_195;
		L_195 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_194, ((int32_t)704), (bool)0);
		__this->___HIT_74 = L_195;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_74), (void*)L_195);
		RuntimeObject* L_196 = __this->___HIT_74;
		NullCheck(L_196);
		float L_197;
		L_197 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_196, ((int32_t)208), (bool)1);
		__this->___temp_75 = L_197;
		float L_198 = __this->___temp_75;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_199;
		L_199 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_198, (1.0f), NULL);
		if (L_199)
		{
			goto IL_0bad;
		}
	}

IL_089f:
	{
		RuntimeObject* L_200;
		L_200 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_200);
		RuntimeObject* L_201;
		L_201 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_200, 5, ((int32_t)-1459396478));
		__this->___DSHOOTXMINUS_76 = L_201;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DSHOOTXMINUS_76), (void*)L_201);
		RuntimeObject* L_202 = __this->___DSHOOTXMINUS_76;
		NullCheck(L_202);
		float L_203;
		L_203 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_202, ((int32_t)231), (bool)1);
		__this->___DSHOOTXMINUS_76_val = L_203;
		RuntimeObject* L_204;
		L_204 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_204);
		RuntimeObject* L_205;
		L_205 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_204, 5, ((int32_t)442));
		__this->___SHOOT_X_77 = L_205;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_X_77), (void*)L_205);
		RuntimeObject* L_206 = __this->___SHOOT_X_77;
		float L_207 = __this->___DSHOOTXMINUS_76_val;
		NullCheck(L_206);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_206, ((int32_t)231), L_207);
		RuntimeObject* L_208;
		L_208 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		RuntimeObject* L_209;
		L_209 = FIRE_get_MY_m1018064BA708BFDF239D7A9B171C1E91C8BF1A5A_inline(__this, NULL);
		RuntimeObject* L_210;
		L_210 = FIRE_get_THERE_mEBF57DA4FF3A434039DE755A95CC7747DFA85696_inline(__this, NULL);
		NullCheck(L_208);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_208, (RuntimeObject*)NULL, L_209, L_210);
		RuntimeObject* L_211;
		L_211 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_211);
		RuntimeObject* L_212;
		L_212 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_211, 5, ((int32_t)444));
		__this->___HIT_DIST_79 = L_212;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_79), (void*)L_212);
		RuntimeObject* L_213 = __this->___HIT_DIST_79;
		NullCheck(L_213);
		float L_214;
		L_214 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_213, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_79_val = L_214;
		float L_215 = __this->___HIT_DIST_79_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_216;
		L_216 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_215, (0.0f), NULL);
		if (L_216)
		{
			goto IL_0995;
		}
	}
	{
		RuntimeObject* L_217;
		L_217 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_217);
		RuntimeObject* L_218;
		L_218 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_217, ((int32_t)704), (bool)0);
		__this->___HIT_82 = L_218;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_82), (void*)L_218);
		RuntimeObject* L_219 = __this->___HIT_82;
		NullCheck(L_219);
		float L_220;
		L_220 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_219, ((int32_t)208), (bool)1);
		__this->___temp_83 = L_220;
		float L_221 = __this->___temp_83;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_222;
		L_222 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_221, (1.0f), NULL);
		if (L_222)
		{
			goto IL_0bad;
		}
	}

IL_0995:
	{
		RuntimeObject* L_223;
		L_223 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_223);
		RuntimeObject* L_224;
		L_224 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_223, 5, ((int32_t)442));
		__this->___SHOOT_X_85 = L_224;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_X_85), (void*)L_224);
		RuntimeObject* L_225 = __this->___SHOOT_X_85;
		NullCheck(L_225);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_225, ((int32_t)231), (0.0f));
		RuntimeObject* L_226;
		L_226 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_226);
		RuntimeObject* L_227;
		L_227 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_226, 5, ((int32_t)-563528037));
		__this->___DSHOOTYPLUS_86 = L_227;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DSHOOTYPLUS_86), (void*)L_227);
		RuntimeObject* L_228 = __this->___DSHOOTYPLUS_86;
		NullCheck(L_228);
		float L_229;
		L_229 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_228, ((int32_t)231), (bool)1);
		__this->___DSHOOTYPLUS_86_val = L_229;
		RuntimeObject* L_230;
		L_230 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_230);
		RuntimeObject* L_231;
		L_231 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_230, 5, ((int32_t)443));
		__this->___SHOOT_Y_87 = L_231;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_Y_87), (void*)L_231);
		RuntimeObject* L_232 = __this->___SHOOT_Y_87;
		float L_233 = __this->___DSHOOTYPLUS_86_val;
		NullCheck(L_232);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_232, ((int32_t)231), L_233);
		RuntimeObject* L_234;
		L_234 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		RuntimeObject* L_235;
		L_235 = FIRE_get_MY_m1018064BA708BFDF239D7A9B171C1E91C8BF1A5A_inline(__this, NULL);
		RuntimeObject* L_236;
		L_236 = FIRE_get_THERE_mEBF57DA4FF3A434039DE755A95CC7747DFA85696_inline(__this, NULL);
		NullCheck(L_234);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_234, (RuntimeObject*)NULL, L_235, L_236);
		RuntimeObject* L_237;
		L_237 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_237);
		RuntimeObject* L_238;
		L_238 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_237, 5, ((int32_t)444));
		__this->___HIT_DIST_89 = L_238;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_89), (void*)L_238);
		RuntimeObject* L_239 = __this->___HIT_DIST_89;
		NullCheck(L_239);
		float L_240;
		L_240 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_239, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_89_val = L_240;
		float L_241 = __this->___HIT_DIST_89_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_242;
		L_242 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_241, (0.0f), NULL);
		if (L_242)
		{
			goto IL_0ab7;
		}
	}
	{
		RuntimeObject* L_243;
		L_243 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_243);
		RuntimeObject* L_244;
		L_244 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_243, ((int32_t)704), (bool)0);
		__this->___HIT_92 = L_244;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_92), (void*)L_244);
		RuntimeObject* L_245 = __this->___HIT_92;
		NullCheck(L_245);
		float L_246;
		L_246 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_245, ((int32_t)208), (bool)1);
		__this->___temp_93 = L_246;
		float L_247 = __this->___temp_93;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_248;
		L_248 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_247, (1.0f), NULL);
		if (L_248)
		{
			goto IL_0bad;
		}
	}

IL_0ab7:
	{
		RuntimeObject* L_249;
		L_249 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_249);
		RuntimeObject* L_250;
		L_250 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_249, 5, ((int32_t)-1420261085));
		__this->___DSHOOTYMINUS_94 = L_250;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DSHOOTYMINUS_94), (void*)L_250);
		RuntimeObject* L_251 = __this->___DSHOOTYMINUS_94;
		NullCheck(L_251);
		float L_252;
		L_252 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_251, ((int32_t)231), (bool)1);
		__this->___DSHOOTYMINUS_94_val = L_252;
		RuntimeObject* L_253;
		L_253 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_253);
		RuntimeObject* L_254;
		L_254 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_253, 5, ((int32_t)443));
		__this->___SHOOT_Y_95 = L_254;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_Y_95), (void*)L_254);
		RuntimeObject* L_255 = __this->___SHOOT_Y_95;
		float L_256 = __this->___DSHOOTYMINUS_94_val;
		NullCheck(L_255);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_255, ((int32_t)231), L_256);
		RuntimeObject* L_257;
		L_257 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		RuntimeObject* L_258;
		L_258 = FIRE_get_MY_m1018064BA708BFDF239D7A9B171C1E91C8BF1A5A_inline(__this, NULL);
		RuntimeObject* L_259;
		L_259 = FIRE_get_THERE_mEBF57DA4FF3A434039DE755A95CC7747DFA85696_inline(__this, NULL);
		NullCheck(L_257);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_257, (RuntimeObject*)NULL, L_258, L_259);
		RuntimeObject* L_260;
		L_260 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_260);
		RuntimeObject* L_261;
		L_261 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_260, 5, ((int32_t)444));
		__this->___HIT_DIST_97 = L_261;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_97), (void*)L_261);
		RuntimeObject* L_262 = __this->___HIT_DIST_97;
		NullCheck(L_262);
		float L_263;
		L_263 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_262, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_97_val = L_263;
		float L_264 = __this->___HIT_DIST_97_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_265;
		L_265 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_264, (0.0f), NULL);
		if (L_265)
		{
			goto IL_0c11;
		}
	}
	{
		RuntimeObject* L_266;
		L_266 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_266);
		RuntimeObject* L_267;
		L_267 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_266, ((int32_t)704), (bool)0);
		__this->___HIT_100 = L_267;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_100), (void*)L_267);
		RuntimeObject* L_268 = __this->___HIT_100;
		NullCheck(L_268);
		float L_269;
		L_269 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_268, ((int32_t)208), (bool)1);
		__this->___temp_101 = L_269;
		float L_270 = __this->___temp_101;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_271;
		L_271 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_270, (1.0f), NULL);
		if (!L_271)
		{
			goto IL_0c11;
		}
	}

IL_0bad:
	{
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_272 = (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172*)il2cpp_codegen_object_new(CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172_il2cpp_TypeInfo_var);
		CASTBLOOD__ctor_mF6470343C4D54F10A5A822D1AA690665436AA434(L_272, NULL);
		V_2 = L_272;
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_273 = V_2;
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_274 = L_273;
		RuntimeObject* L_275;
		L_275 = FIRE_get_MY_m1018064BA708BFDF239D7A9B171C1E91C8BF1A5A_inline(__this, NULL);
		NullCheck(L_274);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_274, L_275);
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_276 = L_274;
		RuntimeObject* L_277;
		L_277 = FIRE_get_THERE_mEBF57DA4FF3A434039DE755A95CC7747DFA85696_inline(__this, NULL);
		NullCheck(L_276);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_276, L_277);
		RuntimeObject* L_278;
		L_278 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_276);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_276, L_278);
		RuntimeObject* L_279;
		L_279 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_280 = V_2;
		NullCheck(L_279);
		RuntimeObject* L_281;
		L_281 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_279, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_280);
		RuntimeObject* L_282;
		L_282 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_282);
		RuntimeObject* L_283;
		L_283 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_282, ((int32_t)2013386137), (bool)0);
		__this->___MY_TARGET_104 = L_283;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_TARGET_104), (void*)L_283);
		RuntimeObject* L_284 = __this->___MY_TARGET_104;
		NullCheck(L_284);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_284, ((int32_t)175), (1.0f));
	}

IL_0c11:
	{
		float L_285;
		L_285 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_285;
		float L_286 = __this->___startTime3;
		float L_287;
		L_287 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(1, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_286, L_287));
		__this->____cursor = 3;
		goto IL_0c45;
	}

IL_0c38:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_288 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, L_288, NULL);
		return (bool)1;
	}

IL_0c45:
	{
		float L_289;
		L_289 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_290 = __this->___endTime3;
		if ((((float)L_289) < ((float)L_290)))
		{
			goto IL_0c38;
		}
	}
	{
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, NULL, NULL);
		RuntimeObject* L_291;
		L_291 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_291);
		RuntimeObject* L_292;
		L_292 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_291);
		NullCheck(L_292);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_292, ((int32_t)157), (RuntimeObject*)NULL);
		RuntimeObject* L_293;
		L_293 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_293);
		RuntimeObject* L_294;
		L_294 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_293, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_110 = L_294;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_110), (void*)L_294);
		RuntimeObject* L_295 = __this->___PLAYER_LIGHT_110;
		NullCheck(L_295);
		float L_296;
		L_296 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_295, ((int32_t)231), (bool)1);
		__this->___PLAYER_LIGHT_110_val = L_296;
		RuntimeObject* L_297;
		L_297 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_297);
		RuntimeObject* L_298;
		L_298 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_297, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_111 = L_298;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_111), (void*)L_298);
		RuntimeObject* L_299 = __this->___PLAYER_LIGHT_111;
		float L_300 = __this->___PLAYER_LIGHT_110_val;
		NullCheck(L_299);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_299, ((int32_t)231), ((float)il2cpp_codegen_add(L_300, (-0.5f))));
		float L_301;
		L_301 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime4 = L_301;
		float L_302 = __this->___startTime4;
		float L_303;
		L_303 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime4 = ((float)il2cpp_codegen_add(L_302, L_303));
		__this->____cursor = 4;
		goto IL_0d04;
	}

IL_0cf7:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_304 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, L_304, NULL);
		return (bool)1;
	}

IL_0d04:
	{
		float L_305;
		L_305 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_306 = __this->___endTime4;
		if ((((float)L_305) < ((float)L_306)))
		{
			goto IL_0cf7;
		}
	}
	{
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, NULL, NULL);
		RuntimeObject* L_307;
		L_307 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_307);
		RuntimeObject* L_308;
		L_308 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_307, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_114 = L_308;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_114), (void*)L_308);
		RuntimeObject* L_309 = __this->___WEAPONSEL_114;
		NullCheck(L_309);
		float L_310;
		L_310 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_309, ((int32_t)231), (bool)1);
		__this->___WEAPONSEL_114_val = L_310;
		float L_311 = __this->___WEAPONSEL_114_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_312;
		L_312 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_311, (2.0f), NULL);
		if (!L_312)
		{
			goto IL_10e0;
		}
	}
	{
		RuntimeObject* L_313;
		L_313 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_313);
		RuntimeObject* L_314;
		L_314 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_313, 5, ((int32_t)471));
		__this->___MOUSE_LEFT_116 = L_314;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOUSE_LEFT_116), (void*)L_314);
		RuntimeObject* L_315 = __this->___MOUSE_LEFT_116;
		NullCheck(L_315);
		float L_316;
		L_316 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_315, ((int32_t)231), (bool)1);
		__this->___MOUSE_LEFT_116_val = L_316;
		float L_317 = __this->___MOUSE_LEFT_116_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_318;
		L_318 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_317, (1.0f), NULL);
		if (L_318)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_319;
		L_319 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_319);
		RuntimeObject* L_320;
		L_320 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_319, 5, ((int32_t)526));
		__this->___KEY_CTRL_118 = L_320;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_CTRL_118), (void*)L_320);
		RuntimeObject* L_321 = __this->___KEY_CTRL_118;
		NullCheck(L_321);
		float L_322;
		L_322 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_321, ((int32_t)231), (bool)1);
		__this->___KEY_CTRL_118_val = L_322;
		float L_323 = __this->___KEY_CTRL_118_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_324;
		L_324 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_323, (1.0f), NULL);
		if (L_324)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_325;
		L_325 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_325);
		RuntimeObject* L_326;
		L_326 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_325);
		NullCheck(L_326);
		RuntimeObject* L_327;
		L_327 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_326, ((int32_t)-1593370511), (bool)1, (bool)1);
		__this->___MP5_02OVL_119 = L_327;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_02OVL_119), (void*)L_327);
		RuntimeObject* L_328;
		L_328 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_328);
		RuntimeObject* L_329;
		L_329 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_328);
		RuntimeObject* L_330 = __this->___MP5_02OVL_119;
		NullCheck(L_329);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_329, ((int32_t)158), L_330);
		float L_331;
		L_331 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime5 = L_331;
		float L_332 = __this->___startTime5;
		float L_333;
		L_333 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(1, NULL);
		__this->___endTime5 = ((float)il2cpp_codegen_add(L_332, L_333));
		__this->____cursor = 5;
		goto IL_0e4d;
	}

IL_0e40:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_334 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, L_334, NULL);
		return (bool)1;
	}

IL_0e4d:
	{
		float L_335;
		L_335 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_336 = __this->___endTime5;
		if ((((float)L_335) < ((float)L_336)))
		{
			goto IL_0e40;
		}
	}
	{
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, NULL, NULL);
		RuntimeObject* L_337;
		L_337 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_337);
		RuntimeObject* L_338;
		L_338 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_337);
		NullCheck(L_338);
		RuntimeObject* L_339;
		L_339 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_338, ((int32_t)-1593406448), (bool)1, (bool)1);
		__this->___MP5_01OVL_123 = L_339;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_01OVL_123), (void*)L_339);
		RuntimeObject* L_340;
		L_340 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_340);
		RuntimeObject* L_341;
		L_341 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_340);
		RuntimeObject* L_342 = __this->___MP5_01OVL_123;
		NullCheck(L_341);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_341, ((int32_t)158), L_342);
		goto IL_1076;
	}

IL_0e9e:
	{
		RuntimeObject* L_343;
		L_343 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_343);
		RuntimeObject* L_344;
		L_344 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_343);
		NullCheck(L_344);
		RuntimeObject* L_345;
		L_345 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_344, ((int32_t)665709727), (bool)1, (bool)1);
		__this->___WRN02STR_126 = L_345;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN02STR_126), (void*)L_345);
		RuntimeObject* L_346;
		L_346 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_346);
		RuntimeObject* L_347;
		L_347 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_346);
		NullCheck(L_347);
		RuntimeObject* L_348;
		L_348 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_347, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_128 = L_348;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_128), (void*)L_348);
		RuntimeObject* L_349 = __this->___PANELTEXT_128;
		NullCheck(L_349);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_350;
		L_350 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_349, ((int32_t)293), (bool)1);
		__this->___PANELTEXT_128_array = L_350;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_128_array), (void*)L_350);
		RuntimeObject* L_351 = __this->___PANELTEXT_128;
		NullCheck(L_351);
		int32_t L_352;
		L_352 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_351, ((int32_t)295), (bool)1);
		__this->___PANELTEXT_128_index = L_352;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_353 = __this->___PANELTEXT_128_array;
		int32_t L_354 = __this->___PANELTEXT_128_index;
		RuntimeObject* L_355 = __this->___WRN02STR_126;
		NullCheck(L_353);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_353, ((int32_t)il2cpp_codegen_subtract(L_354, 1)), L_355, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_356 = __this->___PANELTEXT_128;
		NullCheck(L_356);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_356, (bool)1);
		RuntimeObject* L_357;
		L_357 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_357);
		RuntimeObject* L_358;
		L_358 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_357);
		NullCheck(L_358);
		RuntimeObject* L_359;
		L_359 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_358, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_129 = L_359;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_129), (void*)L_359);
		RuntimeObject* L_360;
		L_360 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_360);
		RuntimeObject* L_361;
		L_361 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_360);
		RuntimeObject* L_362 = __this->___PANELTEXT_129;
		NullCheck(L_361);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_361, ((int32_t)127), L_362);
		RuntimeObject* L_363;
		L_363 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_363);
		RuntimeObject* L_364;
		L_364 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_363, 5, ((int32_t)-1606816744));
		__this->___MSGSECCOUNT_133 = L_364;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MSGSECCOUNT_133), (void*)L_364);
		RuntimeObject* L_365 = __this->___MSGSECCOUNT_133;
		NullCheck(L_365);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_365, ((int32_t)231), (0.0f));
		RuntimeObject* L_366;
		L_366 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_366);
		RuntimeObject* L_367;
		L_367 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_366);
		NullCheck(L_367);
		RuntimeObject* L_368;
		L_368 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_367, ((int32_t)-534933913), (bool)1, (bool)1);
		__this->___MP_504SND_134 = L_368;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP_504SND_134), (void*)L_368);
		RuntimeObject* L_369;
		L_369 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		RuntimeObject* L_370 = __this->___MP_504SND_134;
		NullCheck(L_369);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_369, L_370, (1.0f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_371;
		L_371 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_371);
		RuntimeObject* L_372;
		L_372 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_371, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_137 = L_372;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_137), (void*)L_372);
		RuntimeObject* L_373 = __this->___GUN_ON_137;
		NullCheck(L_373);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_373, ((int32_t)231), (0.0f));
		float L_374;
		L_374 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime6 = L_374;
		float L_375 = __this->___startTime6;
		float L_376;
		L_376 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime6 = ((float)il2cpp_codegen_add(L_375, L_376));
		__this->____cursor = 6;
		goto IL_102a;
	}

IL_101d:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_377 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, L_377, NULL);
		return (bool)1;
	}

IL_102a:
	{
		float L_378;
		L_378 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_379 = __this->___endTime6;
		if ((((float)L_378) < ((float)L_379)))
		{
			goto IL_101d;
		}
	}
	{
		FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline(__this, NULL, NULL);
		RuntimeObject* L_380;
		L_380 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_380);
		RuntimeObject* L_381;
		L_381 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_380);
		NullCheck(L_381);
		RuntimeObject* L_382;
		L_382 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_381, ((int32_t)-1593406448), (bool)1, (bool)1);
		__this->___MP5_01OVL_139 = L_382;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_01OVL_139), (void*)L_382);
		RuntimeObject* L_383;
		L_383 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_383);
		RuntimeObject* L_384;
		L_384 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_383);
		RuntimeObject* L_385 = __this->___MP5_01OVL_139;
		NullCheck(L_384);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_384, ((int32_t)158), L_385);
	}

IL_1076:
	{
		RuntimeObject* L_386;
		L_386 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_386);
		RuntimeObject* L_387;
		L_387 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_386);
		NullCheck(L_387);
		RuntimeObject* L_388;
		L_388 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_387, ((int32_t)2089072467), (bool)1, (bool)1);
		__this->___FIRE_142 = L_388;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FIRE_142), (void*)L_388);
		RuntimeObject* L_389;
		L_389 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_389);
		RuntimeObject* L_390;
		L_390 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_389);
		RuntimeObject* L_391 = __this->___FIRE_142;
		NullCheck(L_390);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_390, ((int32_t)78), L_391);
		RuntimeObject* L_392;
		L_392 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_392);
		RuntimeObject* L_393;
		L_393 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_392);
		NullCheck(L_393);
		RuntimeObject* L_394;
		L_394 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_393, ((int32_t)2089072467), (bool)1, (bool)1);
		__this->___FIRE_144 = L_394;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FIRE_144), (void*)L_394);
		RuntimeObject* L_395;
		L_395 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_395);
		RuntimeObject* L_396;
		L_396 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_395);
		RuntimeObject* L_397 = __this->___FIRE_144;
		NullCheck(L_396);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_396, ((int32_t)97), L_397);
	}

IL_10e0:
	{
		RuntimeObject* L_398;
		L_398 = FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline(__this, NULL);
		NullCheck(L_398);
		RuntimeObject* L_399;
		L_399 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_398, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_147 = L_399;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_147), (void*)L_399);
		RuntimeObject* L_400 = __this->___GUNFIRING_147;
		NullCheck(L_400);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_400, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BURST_get_MY_m2C707907417E5E1EDFE362BA0D85CE8D1EF6D00D (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BURST_set_MY_m76582031FDA85EF5D426A4B6AFD18749F0FBC32E (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BURST_get_THERE_m263EAED681CC2E5E33BAFDFB5B3C9FD1EC26197D (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BURST_set_THERE_mE0EEF7BE7479C8A285942A86A7378A528CDE7FD5 (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7 (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BURST_set__world_mF2C69DD27DDFCD5D23C689A72CB3133DD93AF326 (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BURST_get_Current_m2CE11725D1FC29BF304BEC41334869D8D71633A2 (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BURST_Reset_mCB255B11FDE0838C2C3DE31214E6A76A63566B3C (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BURST__ctor_m078B9F7B230D91896F446694870925E1A774F4B3 (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BURST__ctor_mEE774816C4DEDBE45581BC00C4B5A7371E9935A0 (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		BURST_set_MY_m76582031FDA85EF5D426A4B6AFD18749F0FBC32E_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		BURST_set_THERE_mE0EEF7BE7479C8A285942A86A7378A528CDE7FD5_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		BURST_set__world_mF2C69DD27DDFCD5D23C689A72CB3133DD93AF326_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BURST_MoveNext_mF699900BF95593E9095A344705F66B03B50D97E4 (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD_il2cpp_TypeInfo_var);
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
	FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* V_1 = NULL;
	DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* V_2 = NULL;
	CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* V_3 = NULL;
	CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* V_4 = NULL;
	CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* V_5 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_0127;
			}
			case 1:
			{
				goto IL_05b2;
			}
			case 2:
			{
				goto IL_0be3;
			}
			case 3:
			{
				goto IL_0ca2;
			}
			case 4:
			{
				goto IL_0deb;
			}
			case 5:
			{
				goto IL_0fc8;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_2, 5, ((int32_t)2088896983));
		__this->___AMMO_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_1), (void*)L_3);
		RuntimeObject* L_4 = __this->___AMMO_1;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)231), (bool)1);
		__this->___AMMO_1_val = L_5;
		float L_6 = __this->___AMMO_1_val;
		bool L_7;
		L_7 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_6, (3.0f), NULL);
		if (!L_7)
		{
			goto IL_00a1;
		}
	}
	{
		FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* L_8 = (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD*)il2cpp_codegen_object_new(FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD_il2cpp_TypeInfo_var);
		FIRE__ctor_mD0862351B5DD9D4425214B819737CE95CE563954(L_8, NULL);
		V_1 = L_8;
		FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* L_9 = V_1;
		FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* L_10 = L_9;
		RuntimeObject* L_11;
		L_11 = BURST_get_MY_m2C707907417E5E1EDFE362BA0D85CE8D1EF6D00D_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_11);
		FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* L_12 = L_10;
		RuntimeObject* L_13;
		L_13 = BURST_get_THERE_m263EAED681CC2E5E33BAFDFB5B3C9FD1EC26197D_inline(__this, NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14;
		L_14 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_12, L_14);
		RuntimeObject* L_15;
		L_15 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* L_16 = V_1;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_16);
		return (bool)0;
	}

IL_00a1:
	{
		RuntimeObject* L_18;
		L_18 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_3), (void*)L_19);
		RuntimeObject* L_20 = __this->___GUNFIRING_3;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)231), (1.0f));
		RuntimeObject* L_21;
		L_21 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_23;
		L_23 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)97), (RuntimeObject*)NULL);
		float L_25;
		L_25 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_25;
		float L_26 = __this->___startTime1;
		float L_27;
		L_27 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(1, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_26, L_27));
		__this->____cursor = 1;
		goto IL_0127;
	}

IL_011a:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_28 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, L_28, NULL);
		return (bool)1;
	}

IL_0127:
	{
		float L_29;
		L_29 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_30 = __this->___endTime1;
		if ((((float)L_29) < ((float)L_30)))
		{
			goto IL_011a;
		}
	}
	{
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, NULL, NULL);
	}

IL_013b:
	{
		RuntimeObject* L_31;
		L_31 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1593370511), (bool)1, (bool)1);
		__this->___MP5_02OVL_9 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_02OVL_9), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_34);
		RuntimeObject* L_36 = __this->___MP5_02OVL_9;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)158), L_36);
		RuntimeObject* L_37;
		L_37 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_37, 5, ((int32_t)2088896983));
		__this->___AMMO_13 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_13), (void*)L_38);
		RuntimeObject* L_39 = __this->___AMMO_13;
		NullCheck(L_39);
		float L_40;
		L_40 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)231), (bool)1);
		__this->___AMMO_13_val = L_40;
		float L_41 = __this->___AMMO_13_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_41, (0.0f), NULL);
		if (L_42)
		{
			goto IL_0e3c;
		}
	}
	{
		RuntimeObject* L_43;
		L_43 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, 5, ((int32_t)2088896983));
		__this->___AMMO_14 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_14), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, 5, ((int32_t)2088896983));
		__this->___AMMO_15 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_15), (void*)L_46);
		RuntimeObject* L_47 = __this->___AMMO_15;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)231), (bool)1);
		__this->___AMMO_15_val = L_48;
		RuntimeObject* L_49;
		L_49 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_49, 5, ((int32_t)2088896983));
		__this->___AMMO_16 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_16), (void*)L_50);
		RuntimeObject* L_51 = __this->___AMMO_16;
		NullCheck(L_51);
		float L_52;
		L_52 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)231), (bool)1);
		__this->___AMMO_16_val = L_52;
		RuntimeObject* L_53;
		L_53 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)1295621997));
		__this->___TOUGHNESS_20 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TOUGHNESS_20), (void*)L_54);
		RuntimeObject* L_55 = __this->___TOUGHNESS_20;
		NullCheck(L_55);
		float L_56;
		L_56 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)231), (bool)1);
		__this->___TOUGHNESS_20_val = L_56;
		RuntimeObject* L_57 = __this->___AMMO_14;
		float L_58 = __this->___AMMO_16_val;
		float L_59 = __this->___TOUGHNESS_20_val;
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_58, ((float)il2cpp_codegen_multiply((3.0f), L_59)))));
		RuntimeObject* L_60;
		L_60 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_60, 5, ((int32_t)2088896983));
		__this->___AMMO_22 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_22), (void*)L_61);
		RuntimeObject* L_62 = __this->___AMMO_22;
		NullCheck(L_62);
		float L_63;
		L_63 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)231), (bool)1);
		__this->___AMMO_22_val = L_63;
		float L_64 = __this->___AMMO_22_val;
		bool L_65;
		L_65 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_64, (0.0f), NULL);
		if (!L_65)
		{
			goto IL_02e6;
		}
	}
	{
		RuntimeObject* L_66;
		L_66 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, 5, ((int32_t)2088896983));
		__this->___AMMO_24 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_24), (void*)L_67);
		RuntimeObject* L_68 = __this->___AMMO_24;
		NullCheck(L_68);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)231), (0.0f));
	}

IL_02e6:
	{
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_69 = (DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D*)il2cpp_codegen_object_new(DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D_il2cpp_TypeInfo_var);
		DECAMMO__ctor_mF631B0417F3BD5DBA5E40DB19E2F3843AE8D87D4(L_69, NULL);
		V_2 = L_69;
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_70 = V_2;
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_71 = L_70;
		RuntimeObject* L_72;
		L_72 = BURST_get_MY_m2C707907417E5E1EDFE362BA0D85CE8D1EF6D00D_inline(__this, NULL);
		NullCheck(L_71);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_71, L_72);
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_73 = L_71;
		RuntimeObject* L_74;
		L_74 = BURST_get_THERE_m263EAED681CC2E5E33BAFDFB5B3C9FD1EC26197D_inline(__this, NULL);
		NullCheck(L_73);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_73, L_74);
		RuntimeObject* L_75;
		L_75 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_73);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_73, L_75);
		RuntimeObject* L_76;
		L_76 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_77 = V_2;
		NullCheck(L_76);
		RuntimeObject* L_78;
		L_78 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_76, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_77);
		RuntimeObject* L_79;
		L_79 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_79, 5, ((int32_t)2088896983));
		__this->___AMMO_26 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_26), (void*)L_80);
		RuntimeObject* L_81 = __this->___AMMO_26;
		NullCheck(L_81);
		float L_82;
		L_82 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_81, ((int32_t)231), (bool)1);
		__this->___AMMO_26_val = L_82;
		float L_83 = __this->___AMMO_26_val;
		bool L_84;
		L_84 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_83, (20.0f), NULL);
		if (L_84)
		{
			goto IL_044f;
		}
	}
	{
		RuntimeObject* L_85;
		L_85 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_85);
		NullCheck(L_86);
		RuntimeObject* L_87;
		L_87 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)665673790), (bool)1, (bool)1);
		__this->___WRN01STR_27 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN01STR_27), (void*)L_87);
		RuntimeObject* L_88;
		L_88 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_88);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_88);
		NullCheck(L_89);
		RuntimeObject* L_90;
		L_90 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_29 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_29), (void*)L_90);
		RuntimeObject* L_91 = __this->___PANELTEXT_29;
		NullCheck(L_91);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_92;
		L_92 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_91, ((int32_t)293), (bool)1);
		__this->___PANELTEXT_29_array = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_29_array), (void*)L_92);
		RuntimeObject* L_93 = __this->___PANELTEXT_29;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_93, ((int32_t)295), (bool)1);
		__this->___PANELTEXT_29_index = L_94;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_95 = __this->___PANELTEXT_29_array;
		int32_t L_96 = __this->___PANELTEXT_29_index;
		RuntimeObject* L_97 = __this->___WRN01STR_27;
		NullCheck(L_95);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_95, ((int32_t)il2cpp_codegen_subtract(L_96, 1)), L_97, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_98 = __this->___PANELTEXT_29;
		NullCheck(L_98);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_98, (bool)1);
		RuntimeObject* L_99;
		L_99 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_99);
		RuntimeObject* L_100;
		L_100 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_99);
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_30 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_30), (void*)L_101);
		RuntimeObject* L_102;
		L_102 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_102);
		RuntimeObject* L_103;
		L_103 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_102);
		RuntimeObject* L_104 = __this->___PANELTEXT_30;
		NullCheck(L_103);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_103, ((int32_t)127), L_104);
		RuntimeObject* L_105;
		L_105 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_105, 5, ((int32_t)-1606816744));
		__this->___MSGSECCOUNT_34 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MSGSECCOUNT_34), (void*)L_106);
		RuntimeObject* L_107 = __this->___MSGSECCOUNT_34;
		NullCheck(L_107);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)231), (0.0f));
	}

IL_044f:
	{
		RuntimeObject* L_108;
		L_108 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_108);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_108, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_36 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_36), (void*)L_109);
		RuntimeObject* L_110 = __this->___PLAYER_LIGHT_36;
		NullCheck(L_110);
		float L_111;
		L_111 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)231), (bool)1);
		__this->___PLAYER_LIGHT_36_val = L_111;
		RuntimeObject* L_112;
		L_112 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_112);
		RuntimeObject* L_113;
		L_113 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_112, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_37 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_37), (void*)L_113);
		RuntimeObject* L_114 = __this->___PLAYER_LIGHT_37;
		float L_115 = __this->___PLAYER_LIGHT_36_val;
		NullCheck(L_114);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)231), ((float)il2cpp_codegen_add(L_115, (0.699999988f))));
		RuntimeObject* L_116;
		L_116 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_116);
		RuntimeObject* L_117;
		L_117 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_116);
		NullCheck(L_117);
		RuntimeObject* L_118;
		L_118 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_117, ((int32_t)1363414904), (bool)1, (bool)1);
		__this->___EXPL01OVL_38 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPL01OVL_38), (void*)L_118);
		RuntimeObject* L_119;
		L_119 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_119);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_119);
		RuntimeObject* L_121 = __this->___EXPL01OVL_38;
		NullCheck(L_120);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_120, ((int32_t)157), L_121);
		RuntimeObject* L_122;
		L_122 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_122);
		NullCheck(L_123);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)-534969850), (bool)1, (bool)1);
		__this->___MP_503SND_41 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP_503SND_41), (void*)L_124);
		RuntimeObject* L_125;
		L_125 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		RuntimeObject* L_126 = __this->___MP_503SND_41;
		NullCheck(L_125);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_125, L_126, (0.400000006f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_127;
		L_127 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_127);
		RuntimeObject* L_128;
		L_128 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_127, 5, ((int32_t)-922693617));
		__this->___SHOT_SOUND_ON_44 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOT_SOUND_ON_44), (void*)L_128);
		RuntimeObject* L_129 = __this->___SHOT_SOUND_ON_44;
		NullCheck(L_129);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_129, ((int32_t)231), (1.0f));
		RuntimeObject* L_130;
		L_130 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_130);
		RuntimeObject* L_131;
		L_131 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_130, 5, ((int32_t)733093231));
		__this->___SHOTSECCOUNT_46 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOTSECCOUNT_46), (void*)L_131);
		RuntimeObject* L_132 = __this->___SHOTSECCOUNT_46;
		NullCheck(L_132);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_132, ((int32_t)231), (0.0f));
		float L_133;
		L_133 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_133;
		float L_134 = __this->___startTime2;
		float L_135;
		L_135 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(1, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_134, L_135));
		__this->____cursor = 2;
		goto IL_05b2;
	}

IL_05a5:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_136 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, L_136, NULL);
		return (bool)1;
	}

IL_05b2:
	{
		float L_137;
		L_137 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_138 = __this->___endTime2;
		if ((((float)L_137) < ((float)L_138)))
		{
			goto IL_05a5;
		}
	}
	{
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, NULL, NULL);
		RuntimeObject* L_139;
		L_139 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_139);
		RuntimeObject* L_140;
		L_140 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_139);
		NullCheck(L_140);
		RuntimeObject* L_141;
		L_141 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_140, ((int32_t)-1593334574), (bool)1, (bool)1);
		__this->___MP5_03OVL_48 = L_141;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_03OVL_48), (void*)L_141);
		RuntimeObject* L_142;
		L_142 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_142);
		RuntimeObject* L_143;
		L_143 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_142);
		RuntimeObject* L_144 = __this->___MP5_03OVL_48;
		NullCheck(L_143);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_143, ((int32_t)158), L_144);
		RuntimeObject* L_145;
		L_145 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_145);
		RuntimeObject* L_146;
		L_146 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_145);
		NullCheck(L_146);
		RuntimeObject* L_147;
		L_147 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_146, ((int32_t)1363450841), (bool)1, (bool)1);
		__this->___EXPL02OVL_51 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPL02OVL_51), (void*)L_147);
		RuntimeObject* L_148;
		L_148 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_148);
		RuntimeObject* L_149;
		L_149 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_148);
		RuntimeObject* L_150 = __this->___EXPL02OVL_51;
		NullCheck(L_149);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_149, ((int32_t)157), L_150);
		RuntimeObject* L_151;
		L_151 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_151);
		RuntimeObject* L_152;
		L_152 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_151, 5, ((int32_t)440));
		__this->___SHOOT_SECTOR_55 = L_152;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_SECTOR_55), (void*)L_152);
		RuntimeObject* L_153 = __this->___SHOOT_SECTOR_55;
		NullCheck(L_153);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_153, ((int32_t)231), (6.28299999f));
		RuntimeObject* L_154;
		L_154 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_154);
		RuntimeObject* L_155;
		L_155 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_154, 5, ((int32_t)439));
		__this->___SHOOT_RANGE_57 = L_155;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_RANGE_57), (void*)L_155);
		RuntimeObject* L_156 = __this->___SHOOT_RANGE_57;
		NullCheck(L_156);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_156, ((int32_t)231), (200.0f));
		RuntimeObject* L_157;
		L_157 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_157);
		RuntimeObject* L_158;
		L_158 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_157, 5, ((int32_t)441));
		__this->___SHOOT_FAC_58 = L_158;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_58), (void*)L_158);
		RuntimeObject* L_159;
		L_159 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_159);
		RuntimeObject* L_160;
		L_160 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_159, 5, ((int32_t)441));
		__this->___SHOOT_FAC_59 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_59), (void*)L_160);
		RuntimeObject* L_161 = __this->___SHOOT_FAC_59;
		NullCheck(L_161);
		float L_162;
		L_162 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_161, ((int32_t)231), (bool)1);
		__this->___SHOOT_FAC_59_val = L_162;
		RuntimeObject* L_163;
		L_163 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_163);
		RuntimeObject* L_164;
		L_164 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_163, 5, ((int32_t)-1461570103));
		__this->___PLAYERBURSTFACTOR_60 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYERBURSTFACTOR_60), (void*)L_164);
		RuntimeObject* L_165 = __this->___PLAYERBURSTFACTOR_60;
		NullCheck(L_165);
		float L_166;
		L_166 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_165, ((int32_t)231), (bool)1);
		__this->___PLAYERBURSTFACTOR_60_val = L_166;
		RuntimeObject* L_167 = __this->___SHOOT_FAC_58;
		float L_168 = __this->___PLAYERBURSTFACTOR_60_val;
		NullCheck(L_167);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_167, ((int32_t)231), L_168);
		RuntimeObject* L_169;
		L_169 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_169);
		RuntimeObject* L_170;
		L_170 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_169, 5, ((int32_t)-564713958));
		__this->___DSHOOTXPLUS_61 = L_170;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DSHOOTXPLUS_61), (void*)L_170);
		RuntimeObject* L_171 = __this->___DSHOOTXPLUS_61;
		NullCheck(L_171);
		float L_172;
		L_172 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_171, ((int32_t)231), (bool)1);
		__this->___DSHOOTXPLUS_61_val = L_172;
		RuntimeObject* L_173;
		L_173 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_173);
		RuntimeObject* L_174;
		L_174 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_173, 5, ((int32_t)442));
		__this->___SHOOT_X_62 = L_174;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_X_62), (void*)L_174);
		RuntimeObject* L_175 = __this->___SHOOT_X_62;
		float L_176 = __this->___DSHOOTXPLUS_61_val;
		NullCheck(L_175);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_175, ((int32_t)231), L_176);
		RuntimeObject* L_177;
		L_177 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_177);
		RuntimeObject* L_178;
		L_178 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_177, 5, ((int32_t)443));
		__this->___SHOOT_Y_64 = L_178;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_Y_64), (void*)L_178);
		RuntimeObject* L_179 = __this->___SHOOT_Y_64;
		NullCheck(L_179);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_179, ((int32_t)231), (0.0f));
		RuntimeObject* L_180;
		L_180 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		RuntimeObject* L_181;
		L_181 = BURST_get_MY_m2C707907417E5E1EDFE362BA0D85CE8D1EF6D00D_inline(__this, NULL);
		RuntimeObject* L_182;
		L_182 = BURST_get_THERE_m263EAED681CC2E5E33BAFDFB5B3C9FD1EC26197D_inline(__this, NULL);
		NullCheck(L_180);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_180, (RuntimeObject*)NULL, L_181, L_182);
		RuntimeObject* L_183;
		L_183 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_183);
		RuntimeObject* L_184;
		L_184 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_183, 5, ((int32_t)444));
		__this->___HIT_DIST_66 = L_184;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_66), (void*)L_184);
		RuntimeObject* L_185 = __this->___HIT_DIST_66;
		NullCheck(L_185);
		float L_186;
		L_186 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_185, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_66_val = L_186;
		float L_187 = __this->___HIT_DIST_66_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_188;
		L_188 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_187, (0.0f), NULL);
		if (L_188)
		{
			goto IL_08ca;
		}
	}
	{
		RuntimeObject* L_189;
		L_189 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_189);
		RuntimeObject* L_190;
		L_190 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_189, ((int32_t)704), (bool)0);
		__this->___HIT_67 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_67), (void*)L_190);
		RuntimeObject* L_191;
		L_191 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		RuntimeObject* L_192 = __this->___HIT_67;
		NullCheck(L_191);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_191, ((int32_t)2013386137), L_192);
		RuntimeObject* L_193;
		L_193 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_193);
		RuntimeObject* L_194;
		L_194 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_193, ((int32_t)2013386137), (bool)0);
		__this->___MY_TARGET_71 = L_194;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_TARGET_71), (void*)L_194);
		RuntimeObject* L_195 = __this->___MY_TARGET_71;
		NullCheck(L_195);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_195, ((int32_t)175), (1.0f));
		RuntimeObject* L_196;
		L_196 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_196);
		RuntimeObject* L_197;
		L_197 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_196, ((int32_t)704), (bool)0);
		__this->___HIT_74 = L_197;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_74), (void*)L_197);
		RuntimeObject* L_198 = __this->___HIT_74;
		NullCheck(L_198);
		float L_199;
		L_199 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_198, ((int32_t)208), (bool)1);
		__this->___temp_75 = L_199;
		float L_200 = __this->___temp_75;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_201;
		L_201 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_200, (1.0f), NULL);
		if (!L_201)
		{
			goto IL_08ca;
		}
	}
	{
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_202 = (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172*)il2cpp_codegen_object_new(CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172_il2cpp_TypeInfo_var);
		CASTBLOOD__ctor_mF6470343C4D54F10A5A822D1AA690665436AA434(L_202, NULL);
		V_3 = L_202;
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_203 = V_3;
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_204 = L_203;
		RuntimeObject* L_205;
		L_205 = BURST_get_MY_m2C707907417E5E1EDFE362BA0D85CE8D1EF6D00D_inline(__this, NULL);
		NullCheck(L_204);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_204, L_205);
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_206 = L_204;
		RuntimeObject* L_207;
		L_207 = BURST_get_THERE_m263EAED681CC2E5E33BAFDFB5B3C9FD1EC26197D_inline(__this, NULL);
		NullCheck(L_206);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_206, L_207);
		RuntimeObject* L_208;
		L_208 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_206);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_206, L_208);
		RuntimeObject* L_209;
		L_209 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_210 = V_3;
		NullCheck(L_209);
		RuntimeObject* L_211;
		L_211 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_209, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_210);
	}

IL_08ca:
	{
		RuntimeObject* L_212;
		L_212 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_212);
		RuntimeObject* L_213;
		L_213 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_212, 5, ((int32_t)442));
		__this->___SHOOT_X_77 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_X_77), (void*)L_213);
		RuntimeObject* L_214 = __this->___SHOOT_X_77;
		NullCheck(L_214);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_214, ((int32_t)231), (0.0f));
		RuntimeObject* L_215;
		L_215 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		RuntimeObject* L_216;
		L_216 = BURST_get_MY_m2C707907417E5E1EDFE362BA0D85CE8D1EF6D00D_inline(__this, NULL);
		RuntimeObject* L_217;
		L_217 = BURST_get_THERE_m263EAED681CC2E5E33BAFDFB5B3C9FD1EC26197D_inline(__this, NULL);
		NullCheck(L_215);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_215, (RuntimeObject*)NULL, L_216, L_217);
		RuntimeObject* L_218;
		L_218 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_218);
		RuntimeObject* L_219;
		L_219 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_218, 5, ((int32_t)444));
		__this->___HIT_DIST_79 = L_219;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_79), (void*)L_219);
		RuntimeObject* L_220 = __this->___HIT_DIST_79;
		NullCheck(L_220);
		float L_221;
		L_221 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_220, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_79_val = L_221;
		float L_222 = __this->___HIT_DIST_79_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_223;
		L_223 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_222, (0.0f), NULL);
		if (L_223)
		{
			goto IL_0a25;
		}
	}
	{
		RuntimeObject* L_224;
		L_224 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_224);
		RuntimeObject* L_225;
		L_225 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_224, ((int32_t)704), (bool)0);
		__this->___HIT_80 = L_225;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_80), (void*)L_225);
		RuntimeObject* L_226;
		L_226 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		RuntimeObject* L_227 = __this->___HIT_80;
		NullCheck(L_226);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_226, ((int32_t)2013386137), L_227);
		RuntimeObject* L_228;
		L_228 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_228);
		RuntimeObject* L_229;
		L_229 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_228, ((int32_t)2013386137), (bool)0);
		__this->___MY_TARGET_84 = L_229;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_TARGET_84), (void*)L_229);
		RuntimeObject* L_230 = __this->___MY_TARGET_84;
		NullCheck(L_230);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_230, ((int32_t)175), (1.0f));
		RuntimeObject* L_231;
		L_231 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_231);
		RuntimeObject* L_232;
		L_232 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_231, ((int32_t)704), (bool)0);
		__this->___HIT_87 = L_232;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_87), (void*)L_232);
		RuntimeObject* L_233 = __this->___HIT_87;
		NullCheck(L_233);
		float L_234;
		L_234 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_233, ((int32_t)208), (bool)1);
		__this->___temp_88 = L_234;
		float L_235 = __this->___temp_88;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_236;
		L_236 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_235, (1.0f), NULL);
		if (!L_236)
		{
			goto IL_0a25;
		}
	}
	{
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_237 = (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172*)il2cpp_codegen_object_new(CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172_il2cpp_TypeInfo_var);
		CASTBLOOD__ctor_mF6470343C4D54F10A5A822D1AA690665436AA434(L_237, NULL);
		V_4 = L_237;
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_238 = V_4;
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_239 = L_238;
		RuntimeObject* L_240;
		L_240 = BURST_get_MY_m2C707907417E5E1EDFE362BA0D85CE8D1EF6D00D_inline(__this, NULL);
		NullCheck(L_239);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_239, L_240);
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_241 = L_239;
		RuntimeObject* L_242;
		L_242 = BURST_get_THERE_m263EAED681CC2E5E33BAFDFB5B3C9FD1EC26197D_inline(__this, NULL);
		NullCheck(L_241);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_241, L_242);
		RuntimeObject* L_243;
		L_243 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_241);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_241, L_243);
		RuntimeObject* L_244;
		L_244 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_245 = V_4;
		NullCheck(L_244);
		RuntimeObject* L_246;
		L_246 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_244, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_245);
	}

IL_0a25:
	{
		RuntimeObject* L_247;
		L_247 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_247);
		RuntimeObject* L_248;
		L_248 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_247, 5, ((int32_t)-1459396478));
		__this->___DSHOOTXMINUS_89 = L_248;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DSHOOTXMINUS_89), (void*)L_248);
		RuntimeObject* L_249 = __this->___DSHOOTXMINUS_89;
		NullCheck(L_249);
		float L_250;
		L_250 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_249, ((int32_t)231), (bool)1);
		__this->___DSHOOTXMINUS_89_val = L_250;
		RuntimeObject* L_251;
		L_251 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_251);
		RuntimeObject* L_252;
		L_252 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_251, 5, ((int32_t)442));
		__this->___SHOOT_X_90 = L_252;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_X_90), (void*)L_252);
		RuntimeObject* L_253 = __this->___SHOOT_X_90;
		float L_254 = __this->___DSHOOTXMINUS_89_val;
		NullCheck(L_253);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_253, ((int32_t)231), L_254);
		RuntimeObject* L_255;
		L_255 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		RuntimeObject* L_256;
		L_256 = BURST_get_MY_m2C707907417E5E1EDFE362BA0D85CE8D1EF6D00D_inline(__this, NULL);
		RuntimeObject* L_257;
		L_257 = BURST_get_THERE_m263EAED681CC2E5E33BAFDFB5B3C9FD1EC26197D_inline(__this, NULL);
		NullCheck(L_255);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_255, (RuntimeObject*)NULL, L_256, L_257);
		RuntimeObject* L_258;
		L_258 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_258);
		RuntimeObject* L_259;
		L_259 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_258, 5, ((int32_t)444));
		__this->___HIT_DIST_92 = L_259;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_92), (void*)L_259);
		RuntimeObject* L_260 = __this->___HIT_DIST_92;
		NullCheck(L_260);
		float L_261;
		L_261 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_260, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_92_val = L_261;
		float L_262 = __this->___HIT_DIST_92_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_263;
		L_263 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_262, (0.0f), NULL);
		if (L_263)
		{
			goto IL_0baf;
		}
	}
	{
		RuntimeObject* L_264;
		L_264 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_264);
		RuntimeObject* L_265;
		L_265 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_264, ((int32_t)704), (bool)0);
		__this->___HIT_93 = L_265;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_93), (void*)L_265);
		RuntimeObject* L_266;
		L_266 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		RuntimeObject* L_267 = __this->___HIT_93;
		NullCheck(L_266);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_266, ((int32_t)2013386137), L_267);
		RuntimeObject* L_268;
		L_268 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_268);
		RuntimeObject* L_269;
		L_269 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_268, ((int32_t)2013386137), (bool)0);
		__this->___MY_TARGET_97 = L_269;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_TARGET_97), (void*)L_269);
		RuntimeObject* L_270 = __this->___MY_TARGET_97;
		NullCheck(L_270);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_270, ((int32_t)175), (1.0f));
		RuntimeObject* L_271;
		L_271 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_271);
		RuntimeObject* L_272;
		L_272 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_271, ((int32_t)704), (bool)0);
		__this->___HIT_100 = L_272;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_100), (void*)L_272);
		RuntimeObject* L_273 = __this->___HIT_100;
		NullCheck(L_273);
		float L_274;
		L_274 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_273, ((int32_t)208), (bool)1);
		__this->___temp_101 = L_274;
		float L_275 = __this->___temp_101;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_276;
		L_276 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_275, (1.0f), NULL);
		if (!L_276)
		{
			goto IL_0baf;
		}
	}
	{
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_277 = (CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172*)il2cpp_codegen_object_new(CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172_il2cpp_TypeInfo_var);
		CASTBLOOD__ctor_mF6470343C4D54F10A5A822D1AA690665436AA434(L_277, NULL);
		V_5 = L_277;
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_278 = V_5;
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_279 = L_278;
		RuntimeObject* L_280;
		L_280 = BURST_get_MY_m2C707907417E5E1EDFE362BA0D85CE8D1EF6D00D_inline(__this, NULL);
		NullCheck(L_279);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_279, L_280);
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_281 = L_279;
		RuntimeObject* L_282;
		L_282 = BURST_get_THERE_m263EAED681CC2E5E33BAFDFB5B3C9FD1EC26197D_inline(__this, NULL);
		NullCheck(L_281);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_281, L_282);
		RuntimeObject* L_283;
		L_283 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_281);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_281, L_283);
		RuntimeObject* L_284;
		L_284 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		CASTBLOOD_tC14B6D21A3C417A042FBFC6752114EB1CBE3B172* L_285 = V_5;
		NullCheck(L_284);
		RuntimeObject* L_286;
		L_286 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_284, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_285);
	}

IL_0baf:
	{
		float L_287;
		L_287 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_287;
		float L_288 = __this->___startTime3;
		float L_289;
		L_289 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(1, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_288, L_289));
		__this->____cursor = 3;
		goto IL_0be3;
	}

IL_0bd6:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_290 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, L_290, NULL);
		return (bool)1;
	}

IL_0be3:
	{
		float L_291;
		L_291 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_292 = __this->___endTime3;
		if ((((float)L_291) < ((float)L_292)))
		{
			goto IL_0bd6;
		}
	}
	{
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, NULL, NULL);
		RuntimeObject* L_293;
		L_293 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_293);
		RuntimeObject* L_294;
		L_294 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_293);
		NullCheck(L_294);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_294, ((int32_t)157), (RuntimeObject*)NULL);
		RuntimeObject* L_295;
		L_295 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_295);
		RuntimeObject* L_296;
		L_296 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_295, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_107 = L_296;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_107), (void*)L_296);
		RuntimeObject* L_297 = __this->___PLAYER_LIGHT_107;
		NullCheck(L_297);
		float L_298;
		L_298 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_297, ((int32_t)231), (bool)1);
		__this->___PLAYER_LIGHT_107_val = L_298;
		RuntimeObject* L_299;
		L_299 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_299);
		RuntimeObject* L_300;
		L_300 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_299, 5, ((int32_t)418));
		__this->___PLAYER_LIGHT_108 = L_300;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_LIGHT_108), (void*)L_300);
		RuntimeObject* L_301 = __this->___PLAYER_LIGHT_108;
		float L_302 = __this->___PLAYER_LIGHT_107_val;
		NullCheck(L_301);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_301, ((int32_t)231), ((float)il2cpp_codegen_add(L_302, (-0.699999988f))));
		float L_303;
		L_303 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime4 = L_303;
		float L_304 = __this->___startTime4;
		float L_305;
		L_305 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime4 = ((float)il2cpp_codegen_add(L_304, L_305));
		__this->____cursor = 4;
		goto IL_0ca2;
	}

IL_0c95:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_306 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, L_306, NULL);
		return (bool)1;
	}

IL_0ca2:
	{
		float L_307;
		L_307 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_308 = __this->___endTime4;
		if ((((float)L_307) < ((float)L_308)))
		{
			goto IL_0c95;
		}
	}
	{
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, NULL, NULL);
		RuntimeObject* L_309;
		L_309 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_309);
		RuntimeObject* L_310;
		L_310 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_309, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_111 = L_310;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_111), (void*)L_310);
		RuntimeObject* L_311 = __this->___WEAPONSEL_111;
		NullCheck(L_311);
		float L_312;
		L_312 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_311, ((int32_t)231), (bool)1);
		__this->___WEAPONSEL_111_val = L_312;
		float L_313 = __this->___WEAPONSEL_111_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_314;
		L_314 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_313, (2.0f), NULL);
		if (!L_314)
		{
			goto IL_107e;
		}
	}
	{
		RuntimeObject* L_315;
		L_315 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_315);
		RuntimeObject* L_316;
		L_316 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_315, 5, ((int32_t)471));
		__this->___MOUSE_LEFT_113 = L_316;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOUSE_LEFT_113), (void*)L_316);
		RuntimeObject* L_317 = __this->___MOUSE_LEFT_113;
		NullCheck(L_317);
		float L_318;
		L_318 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_317, ((int32_t)231), (bool)1);
		__this->___MOUSE_LEFT_113_val = L_318;
		float L_319 = __this->___MOUSE_LEFT_113_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_320;
		L_320 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_319, (1.0f), NULL);
		if (L_320)
		{
			goto IL_013b;
		}
	}
	{
		RuntimeObject* L_321;
		L_321 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_321);
		RuntimeObject* L_322;
		L_322 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_321, 5, ((int32_t)526));
		__this->___KEY_CTRL_115 = L_322;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_CTRL_115), (void*)L_322);
		RuntimeObject* L_323 = __this->___KEY_CTRL_115;
		NullCheck(L_323);
		float L_324;
		L_324 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_323, ((int32_t)231), (bool)1);
		__this->___KEY_CTRL_115_val = L_324;
		float L_325 = __this->___KEY_CTRL_115_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_326;
		L_326 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_325, (1.0f), NULL);
		if (L_326)
		{
			goto IL_013b;
		}
	}
	{
		RuntimeObject* L_327;
		L_327 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_327);
		RuntimeObject* L_328;
		L_328 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_327);
		NullCheck(L_328);
		RuntimeObject* L_329;
		L_329 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_328, ((int32_t)-1593370511), (bool)1, (bool)1);
		__this->___MP5_02OVL_116 = L_329;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_02OVL_116), (void*)L_329);
		RuntimeObject* L_330;
		L_330 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_330);
		RuntimeObject* L_331;
		L_331 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_330);
		RuntimeObject* L_332 = __this->___MP5_02OVL_116;
		NullCheck(L_331);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_331, ((int32_t)158), L_332);
		float L_333;
		L_333 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime5 = L_333;
		float L_334 = __this->___startTime5;
		float L_335;
		L_335 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(1, NULL);
		__this->___endTime5 = ((float)il2cpp_codegen_add(L_334, L_335));
		__this->____cursor = 5;
		goto IL_0deb;
	}

IL_0dde:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_336 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, L_336, NULL);
		return (bool)1;
	}

IL_0deb:
	{
		float L_337;
		L_337 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_338 = __this->___endTime5;
		if ((((float)L_337) < ((float)L_338)))
		{
			goto IL_0dde;
		}
	}
	{
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, NULL, NULL);
		RuntimeObject* L_339;
		L_339 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_339);
		RuntimeObject* L_340;
		L_340 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_339);
		NullCheck(L_340);
		RuntimeObject* L_341;
		L_341 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_340, ((int32_t)-1593406448), (bool)1, (bool)1);
		__this->___MP5_01OVL_120 = L_341;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_01OVL_120), (void*)L_341);
		RuntimeObject* L_342;
		L_342 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_342);
		RuntimeObject* L_343;
		L_343 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_342);
		RuntimeObject* L_344 = __this->___MP5_01OVL_120;
		NullCheck(L_343);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_343, ((int32_t)158), L_344);
		goto IL_1014;
	}

IL_0e3c:
	{
		RuntimeObject* L_345;
		L_345 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_345);
		RuntimeObject* L_346;
		L_346 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_345);
		NullCheck(L_346);
		RuntimeObject* L_347;
		L_347 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_346, ((int32_t)665709727), (bool)1, (bool)1);
		__this->___WRN02STR_123 = L_347;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN02STR_123), (void*)L_347);
		RuntimeObject* L_348;
		L_348 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_348);
		RuntimeObject* L_349;
		L_349 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_348);
		NullCheck(L_349);
		RuntimeObject* L_350;
		L_350 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_349, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_125 = L_350;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_125), (void*)L_350);
		RuntimeObject* L_351 = __this->___PANELTEXT_125;
		NullCheck(L_351);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_352;
		L_352 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_351, ((int32_t)293), (bool)1);
		__this->___PANELTEXT_125_array = L_352;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_125_array), (void*)L_352);
		RuntimeObject* L_353 = __this->___PANELTEXT_125;
		NullCheck(L_353);
		int32_t L_354;
		L_354 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_353, ((int32_t)295), (bool)1);
		__this->___PANELTEXT_125_index = L_354;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_355 = __this->___PANELTEXT_125_array;
		int32_t L_356 = __this->___PANELTEXT_125_index;
		RuntimeObject* L_357 = __this->___WRN02STR_123;
		NullCheck(L_355);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_355, ((int32_t)il2cpp_codegen_subtract(L_356, 1)), L_357, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_358 = __this->___PANELTEXT_125;
		NullCheck(L_358);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_358, (bool)1);
		RuntimeObject* L_359;
		L_359 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_359);
		RuntimeObject* L_360;
		L_360 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_359);
		NullCheck(L_360);
		RuntimeObject* L_361;
		L_361 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_360, ((int32_t)1886906754), (bool)1, (bool)1);
		__this->___PANELTEXT_126 = L_361;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PANELTEXT_126), (void*)L_361);
		RuntimeObject* L_362;
		L_362 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_362);
		RuntimeObject* L_363;
		L_363 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_362);
		RuntimeObject* L_364 = __this->___PANELTEXT_126;
		NullCheck(L_363);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_363, ((int32_t)127), L_364);
		RuntimeObject* L_365;
		L_365 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_365);
		RuntimeObject* L_366;
		L_366 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_365, 5, ((int32_t)-1606816744));
		__this->___MSGSECCOUNT_130 = L_366;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MSGSECCOUNT_130), (void*)L_366);
		RuntimeObject* L_367 = __this->___MSGSECCOUNT_130;
		NullCheck(L_367);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_367, ((int32_t)231), (0.0f));
		RuntimeObject* L_368;
		L_368 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_368);
		RuntimeObject* L_369;
		L_369 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_368);
		NullCheck(L_369);
		RuntimeObject* L_370;
		L_370 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_369, ((int32_t)-534933913), (bool)1, (bool)1);
		__this->___MP_504SND_131 = L_370;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP_504SND_131), (void*)L_370);
		RuntimeObject* L_371;
		L_371 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		RuntimeObject* L_372 = __this->___MP_504SND_131;
		NullCheck(L_371);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_371, L_372, (1.0f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_373;
		L_373 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_373);
		RuntimeObject* L_374;
		L_374 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_373, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_134 = L_374;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_134), (void*)L_374);
		RuntimeObject* L_375 = __this->___GUN_ON_134;
		NullCheck(L_375);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_375, ((int32_t)231), (0.0f));
		float L_376;
		L_376 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime6 = L_376;
		float L_377 = __this->___startTime6;
		float L_378;
		L_378 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime6 = ((float)il2cpp_codegen_add(L_377, L_378));
		__this->____cursor = 6;
		goto IL_0fc8;
	}

IL_0fbb:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_379 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, L_379, NULL);
		return (bool)1;
	}

IL_0fc8:
	{
		float L_380;
		L_380 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_381 = __this->___endTime6;
		if ((((float)L_380) < ((float)L_381)))
		{
			goto IL_0fbb;
		}
	}
	{
		BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline(__this, NULL, NULL);
		RuntimeObject* L_382;
		L_382 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_382);
		RuntimeObject* L_383;
		L_383 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_382);
		NullCheck(L_383);
		RuntimeObject* L_384;
		L_384 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_383, ((int32_t)-1593406448), (bool)1, (bool)1);
		__this->___MP5_01OVL_136 = L_384;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP5_01OVL_136), (void*)L_384);
		RuntimeObject* L_385;
		L_385 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_385);
		RuntimeObject* L_386;
		L_386 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_385);
		RuntimeObject* L_387 = __this->___MP5_01OVL_136;
		NullCheck(L_386);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_386, ((int32_t)158), L_387);
	}

IL_1014:
	{
		RuntimeObject* L_388;
		L_388 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_388);
		RuntimeObject* L_389;
		L_389 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_388);
		NullCheck(L_389);
		RuntimeObject* L_390;
		L_390 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_389, ((int32_t)215570781), (bool)1, (bool)1);
		__this->___BURST_139 = L_390;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BURST_139), (void*)L_390);
		RuntimeObject* L_391;
		L_391 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_391);
		RuntimeObject* L_392;
		L_392 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_391);
		RuntimeObject* L_393 = __this->___BURST_139;
		NullCheck(L_392);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_392, ((int32_t)78), L_393);
		RuntimeObject* L_394;
		L_394 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_394);
		RuntimeObject* L_395;
		L_395 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_394);
		NullCheck(L_395);
		RuntimeObject* L_396;
		L_396 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_395, ((int32_t)215570781), (bool)1, (bool)1);
		__this->___BURST_141 = L_396;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BURST_141), (void*)L_396);
		RuntimeObject* L_397;
		L_397 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_397);
		RuntimeObject* L_398;
		L_398 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_397);
		RuntimeObject* L_399 = __this->___BURST_141;
		NullCheck(L_398);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_398, ((int32_t)97), L_399);
	}

IL_107e:
	{
		RuntimeObject* L_400;
		L_400 = BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline(__this, NULL);
		NullCheck(L_400);
		RuntimeObject* L_401;
		L_401 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_400, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_144 = L_401;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_144), (void*)L_401);
		RuntimeObject* L_402 = __this->___GUNFIRING_144;
		NullCheck(L_402);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_402, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* THROW_get_MY_m42C3497B00F02B100D833C657057AB7633947599 (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void THROW_set_MY_mCB2F65552AB16338E85C51DE1B3F5864906B43EB (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* THROW_get_THERE_mFEC6381AAB25774DFE50C5FBBD0F124005BF83A7 (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void THROW_set_THERE_m7ECAA8233C6DFBCEDE64664D9E5E5E67E6A19C46 (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843 (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void THROW_set__world_mCC5DA9AEC2C5A338319E89C3912C90EB97663C9B (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* THROW_get_Current_m55029CFE99FDFDDC1FAF95D34FC7D9D48310793D (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void THROW_Reset_mDDC7B4A22BCD0B39409D9471FA110DB57B890969 (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void THROW__ctor_m14989C7ACCDA66C3D5E9E82F4592A53473C8D134 (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void THROW__ctor_m2B952FD54B78F164EE4447E602B6E122EC7A8456 (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		THROW_set_MY_mCB2F65552AB16338E85C51DE1B3F5864906B43EB_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		THROW_set_THERE_m7ECAA8233C6DFBCEDE64664D9E5E5E67E6A19C46_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		THROW_set__world_mCC5DA9AEC2C5A338319E89C3912C90EB97663C9B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool THROW_MoveNext_mE2316C1450D9B8298297A383CC938FE57823CA66 (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* V_1 = NULL;
	CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* V_2 = NULL;
	DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* V_3 = NULL;
	SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* V_4 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* G_B31_1 = NULL;
	RuntimeObject* G_B30_0 = NULL;
	THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* G_B30_1 = NULL;
	RuntimeObject* G_B32_0 = NULL;
	THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* G_B32_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_0192;
			}
			case 1:
			{
				goto IL_0212;
			}
			case 2:
			{
				goto IL_02a8;
			}
			case 3:
			{
				goto IL_037c;
			}
			case 4:
			{
				goto IL_03da;
			}
			case 5:
			{
				goto IL_045a;
			}
			case 6:
			{
				goto IL_04da;
			}
			case 7:
			{
				goto IL_0c40;
			}
			case 8:
			{
				goto IL_0e38;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_2, 5, ((int32_t)2088896983));
		__this->___AMMO_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_1), (void*)L_3);
		RuntimeObject* L_4 = __this->___AMMO_1;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)231), (bool)1);
		__this->___AMMO_1_val = L_5;
		float L_6 = __this->___AMMO_1_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_6, (0.0f), NULL);
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_8 = (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF*)il2cpp_codegen_object_new(SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		SELECTNONE__ctor_mFF1135D9058921B26DEC652619B7A667380D5451(L_8, NULL);
		V_1 = L_8;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_9 = V_1;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_10 = L_9;
		RuntimeObject* L_11;
		L_11 = THROW_get_MY_m42C3497B00F02B100D833C657057AB7633947599_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_11);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_12 = L_10;
		RuntimeObject* L_13;
		L_13 = THROW_get_THERE_mFEC6381AAB25774DFE50C5FBBD0F124005BF83A7_inline(__this, NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14;
		L_14 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_12, L_14);
		RuntimeObject* L_15;
		L_15 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_16 = V_1;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_16);
		return (bool)0;
	}

IL_00ad:
	{
		CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* L_18 = (CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D*)il2cpp_codegen_object_new(CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D_il2cpp_TypeInfo_var);
		CHOOSEGRANADE__ctor_m0EFDF65AB32658238F02EB0ED4E4DF4268484CFC(L_18, NULL);
		V_2 = L_18;
		CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* L_19 = V_2;
		CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* L_20 = L_19;
		RuntimeObject* L_21;
		L_21 = THROW_get_MY_m42C3497B00F02B100D833C657057AB7633947599_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* L_22 = L_20;
		RuntimeObject* L_23;
		L_23 = THROW_get_THERE_mFEC6381AAB25774DFE50C5FBBD0F124005BF83A7_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_23);
		RuntimeObject* L_24;
		L_24 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_24);
		RuntimeObject* L_25;
		L_25 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		CHOOSEGRANADE_t5BD44B521180784494BF671991C2A3216C83D57D* L_26 = V_2;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_26);
		RuntimeObject* L_28;
		L_28 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_3 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_3), (void*)L_29);
		RuntimeObject* L_30 = __this->___GRANADE_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_30, (RuntimeObject*)NULL, NULL);
		if (!L_31)
		{
			goto IL_010c;
		}
	}
	{
		return (bool)0;
	}

IL_010c:
	{
		RuntimeObject* L_32;
		L_32 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_5 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_5), (void*)L_33);
		RuntimeObject* L_34 = __this->___GUNFIRING_5;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)231), (1.0f));
		RuntimeObject* L_35;
		L_35 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_37;
		L_37 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)97), (RuntimeObject*)NULL);
		float L_39;
		L_39 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_39;
		float L_40 = __this->___startTime1;
		float L_41;
		L_41 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(1, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_40, L_41));
		__this->____cursor = 1;
		goto IL_0192;
	}

IL_0185:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_42 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, L_42, NULL);
		return (bool)1;
	}

IL_0192:
	{
		float L_43;
		L_43 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_44 = __this->___endTime1;
		if ((((float)L_43) < ((float)L_44)))
		{
			goto IL_0185;
		}
	}
	{
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, NULL, NULL);
		RuntimeObject* L_45;
		L_45 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_45);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)850572839), (bool)1, (bool)1);
		__this->___GRAN01OVL_11 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN01OVL_11), (void*)L_47);
		RuntimeObject* L_48;
		L_48 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		RuntimeObject* L_50 = __this->___GRAN01OVL_11;
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)157), L_50);
		float L_51;
		L_51 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_51;
		float L_52 = __this->___startTime2;
		float L_53;
		L_53 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_52, L_53));
		__this->____cursor = 2;
		goto IL_0212;
	}

IL_0205:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_54 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, L_54, NULL);
		return (bool)1;
	}

IL_0212:
	{
		float L_55;
		L_55 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_56 = __this->___endTime2;
		if ((((float)L_55) < ((float)L_56)))
		{
			goto IL_0205;
		}
	}
	{
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, NULL, NULL);
		RuntimeObject* L_57;
		L_57 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_57);
		NullCheck(L_58);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)157), (RuntimeObject*)NULL);
		RuntimeObject* L_59;
		L_59 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_59);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)850608776), (bool)1, (bool)1);
		__this->___GRAN02OVL_18 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN02OVL_18), (void*)L_61);
		RuntimeObject* L_62;
		L_62 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_62);
		RuntimeObject* L_64 = __this->___GRAN02OVL_18;
		NullCheck(L_63);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_63, ((int32_t)158), L_64);
		float L_65;
		L_65 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_65;
		float L_66 = __this->___startTime3;
		float L_67;
		L_67 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_66, L_67));
		__this->____cursor = 3;
		goto IL_02a8;
	}

IL_029b:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_68 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, L_68, NULL);
		return (bool)1;
	}

IL_02a8:
	{
		float L_69;
		L_69 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_70 = __this->___endTime3;
		if ((((float)L_69) < ((float)L_70)))
		{
			goto IL_029b;
		}
	}
	{
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, NULL, NULL);
		RuntimeObject* L_71;
		L_71 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_71);
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)850576923), (bool)1, (bool)1);
		__this->___GRAN01SND_22 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN01SND_22), (void*)L_73);
		RuntimeObject* L_74;
		L_74 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		RuntimeObject* L_75 = __this->___GRAN01SND_22;
		NullCheck(L_74);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_74, L_75, (1.0f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_76;
		L_76 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_76);
		NullCheck(L_77);
		RuntimeObject* L_78;
		L_78 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_77, ((int32_t)850644713), (bool)1, (bool)1);
		__this->___GRAN03OVL_24 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN03OVL_24), (void*)L_78);
		RuntimeObject* L_79;
		L_79 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_79);
		RuntimeObject* L_81 = __this->___GRAN03OVL_24;
		NullCheck(L_80);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_80, ((int32_t)157), L_81);
		RuntimeObject* L_82;
		L_82 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_82);
		NullCheck(L_83);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)158), (RuntimeObject*)NULL);
		float L_84;
		L_84 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime4 = L_84;
		float L_85 = __this->___startTime4;
		float L_86;
		L_86 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime4 = ((float)il2cpp_codegen_add(L_85, L_86));
		__this->____cursor = 4;
		goto IL_037c;
	}

IL_036f:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_87 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, L_87, NULL);
		return (bool)1;
	}

IL_037c:
	{
		float L_88;
		L_88 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_89 = __this->___endTime4;
		if ((((float)L_88) < ((float)L_89)))
		{
			goto IL_036f;
		}
	}
	{
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, NULL, NULL);
		RuntimeObject* L_90;
		L_90 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_90);
		RuntimeObject* L_91;
		L_91 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_90);
		NullCheck(L_91);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_91, ((int32_t)157), (RuntimeObject*)NULL);
		float L_92;
		L_92 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime5 = L_92;
		float L_93 = __this->___startTime5;
		float L_94;
		L_94 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(8, NULL);
		__this->___endTime5 = ((float)il2cpp_codegen_add(L_93, L_94));
		__this->____cursor = 5;
		goto IL_03da;
	}

IL_03cd:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_95 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, L_95, NULL);
		return (bool)1;
	}

IL_03da:
	{
		float L_96;
		L_96 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_97 = __this->___endTime5;
		if ((((float)L_96) < ((float)L_97)))
		{
			goto IL_03cd;
		}
	}
	{
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, NULL, NULL);
		RuntimeObject* L_98;
		L_98 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_98);
		RuntimeObject* L_99;
		L_99 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_98);
		NullCheck(L_99);
		RuntimeObject* L_100;
		L_100 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)850680650), (bool)1, (bool)1);
		__this->___GRAN04OVL_35 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN04OVL_35), (void*)L_100);
		RuntimeObject* L_101;
		L_101 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_101);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_101);
		RuntimeObject* L_103 = __this->___GRAN04OVL_35;
		NullCheck(L_102);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)158), L_103);
		float L_104;
		L_104 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime6 = L_104;
		float L_105 = __this->___startTime6;
		float L_106;
		L_106 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime6 = ((float)il2cpp_codegen_add(L_105, L_106));
		__this->____cursor = 6;
		goto IL_045a;
	}

IL_044d:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_107 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, L_107, NULL);
		return (bool)1;
	}

IL_045a:
	{
		float L_108;
		L_108 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_109 = __this->___endTime6;
		if ((((float)L_108) < ((float)L_109)))
		{
			goto IL_044d;
		}
	}
	{
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, NULL, NULL);
		RuntimeObject* L_110;
		L_110 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_110);
		NullCheck(L_111);
		RuntimeObject* L_112;
		L_112 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_111, ((int32_t)850716587), (bool)1, (bool)1);
		__this->___GRAN05OVL_39 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN05OVL_39), (void*)L_112);
		RuntimeObject* L_113;
		L_113 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_113);
		RuntimeObject* L_114;
		L_114 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_113);
		RuntimeObject* L_115 = __this->___GRAN05OVL_39;
		NullCheck(L_114);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)158), L_115);
		float L_116;
		L_116 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime7 = L_116;
		float L_117 = __this->___startTime7;
		float L_118;
		L_118 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime7 = ((float)il2cpp_codegen_add(L_117, L_118));
		__this->____cursor = 7;
		goto IL_04da;
	}

IL_04cd:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_119 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, L_119, NULL);
		return (bool)1;
	}

IL_04da:
	{
		float L_120;
		L_120 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_121 = __this->___endTime7;
		if ((((float)L_120) < ((float)L_121)))
		{
			goto IL_04cd;
		}
	}
	{
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, NULL, NULL);
		RuntimeObject* L_122;
		L_122 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_122);
		NullCheck(L_123);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)850752524), (bool)1, (bool)1);
		__this->___GRAN06OVL_43 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN06OVL_43), (void*)L_124);
		RuntimeObject* L_125;
		L_125 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_125);
		RuntimeObject* L_126;
		L_126 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_125);
		RuntimeObject* L_127 = __this->___GRAN06OVL_43;
		NullCheck(L_126);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_126, ((int32_t)158), L_127);
		RuntimeObject* L_128;
		L_128 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_128);
		RuntimeObject* L_129;
		L_129 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_128, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_48 = L_129;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_48), (void*)L_129);
		RuntimeObject* L_130 = __this->___GRANADE_48;
		NullCheck(L_130);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_130, ((int32_t)213), (1.0f));
		RuntimeObject* L_131;
		L_131 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_131);
		RuntimeObject* L_132;
		L_132 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_131, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_51 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_51), (void*)L_132);
		RuntimeObject* L_133 = __this->___GRANADE_51;
		NullCheck(L_133);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)168), (2.0f));
		RuntimeObject* L_134;
		L_134 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_134);
		RuntimeObject* L_135;
		L_135 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_134, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_53 = L_135;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_53), (void*)L_135);
		RuntimeObject* L_136;
		L_136 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_136);
		RuntimeObject* L_137;
		L_137 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_136, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_55 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_55), (void*)L_137);
		RuntimeObject* L_138 = __this->___GRANADE_55;
		NullCheck(L_138);
		float L_139;
		L_139 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_138, ((int32_t)195), (bool)1);
		__this->___temp_56 = L_139;
		RuntimeObject* L_140;
		L_140 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_140);
		RuntimeObject* L_141;
		L_141 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_140, 5, ((int32_t)459));
		__this->___PLAYER_X_57 = L_141;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_X_57), (void*)L_141);
		RuntimeObject* L_142 = __this->___PLAYER_X_57;
		NullCheck(L_142);
		float L_143;
		L_143 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_142, ((int32_t)231), (bool)1);
		__this->___PLAYER_X_57_val = L_143;
		RuntimeObject* L_144;
		L_144 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_144);
		RuntimeObject* L_145;
		L_145 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_144, 5, ((int32_t)464));
		__this->___PLAYER_COS_59 = L_145;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_COS_59), (void*)L_145);
		RuntimeObject* L_146 = __this->___PLAYER_COS_59;
		NullCheck(L_146);
		float L_147;
		L_147 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_146, ((int32_t)231), (bool)1);
		__this->___PLAYER_COS_59_val = L_147;
		RuntimeObject* L_148;
		L_148 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_148);
		RuntimeObject* L_149;
		L_149 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_148, 5, ((int32_t)431));
		__this->___PLAYER_VX_61 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VX_61), (void*)L_149);
		RuntimeObject* L_150 = __this->___PLAYER_VX_61;
		NullCheck(L_150);
		float L_151;
		L_151 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_150, ((int32_t)231), (bool)1);
		__this->___PLAYER_VX_61_val = L_151;
		RuntimeObject* L_152;
		L_152 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_152);
		RuntimeObject* L_153;
		L_153 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_152, 5, ((int32_t)569));
		__this->___TIME_CORR_63 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_63), (void*)L_153);
		RuntimeObject* L_154 = __this->___TIME_CORR_63;
		NullCheck(L_154);
		float L_155;
		L_155 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_154, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_63_val = L_155;
		RuntimeObject* L_156 = __this->___GRANADE_53;
		float L_157 = __this->___PLAYER_X_57_val;
		float L_158 = __this->___PLAYER_COS_59_val;
		float L_159 = __this->___PLAYER_VX_61_val;
		float L_160 = __this->___TIME_CORR_63_val;
		NullCheck(L_156);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_156, ((int32_t)195), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_157, L_158)), ((float)il2cpp_codegen_multiply(L_159, L_160)))));
		RuntimeObject* L_161;
		L_161 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_161);
		RuntimeObject* L_162;
		L_162 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_161, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_65 = L_162;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_65), (void*)L_162);
		RuntimeObject* L_163;
		L_163 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_163);
		RuntimeObject* L_164;
		L_164 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_163, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_67 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_67), (void*)L_164);
		RuntimeObject* L_165 = __this->___GRANADE_67;
		NullCheck(L_165);
		float L_166;
		L_166 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_165, ((int32_t)196), (bool)1);
		__this->___temp_68 = L_166;
		RuntimeObject* L_167;
		L_167 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_167);
		RuntimeObject* L_168;
		L_168 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_167, 5, ((int32_t)460));
		__this->___PLAYER_Y_69 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_Y_69), (void*)L_168);
		RuntimeObject* L_169 = __this->___PLAYER_Y_69;
		NullCheck(L_169);
		float L_170;
		L_170 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_169, ((int32_t)231), (bool)1);
		__this->___PLAYER_Y_69_val = L_170;
		RuntimeObject* L_171;
		L_171 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_171);
		RuntimeObject* L_172;
		L_172 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_171, 5, ((int32_t)463));
		__this->___PLAYER_SIN_71 = L_172;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIN_71), (void*)L_172);
		RuntimeObject* L_173 = __this->___PLAYER_SIN_71;
		NullCheck(L_173);
		float L_174;
		L_174 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_173, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIN_71_val = L_174;
		RuntimeObject* L_175;
		L_175 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_175);
		RuntimeObject* L_176;
		L_176 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_175, 5, ((int32_t)432));
		__this->___PLAYER_VY_73 = L_176;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_VY_73), (void*)L_176);
		RuntimeObject* L_177 = __this->___PLAYER_VY_73;
		NullCheck(L_177);
		float L_178;
		L_178 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_177, ((int32_t)231), (bool)1);
		__this->___PLAYER_VY_73_val = L_178;
		RuntimeObject* L_179;
		L_179 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_179);
		RuntimeObject* L_180;
		L_180 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_179, 5, ((int32_t)569));
		__this->___TIME_CORR_75 = L_180;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TIME_CORR_75), (void*)L_180);
		RuntimeObject* L_181 = __this->___TIME_CORR_75;
		NullCheck(L_181);
		float L_182;
		L_182 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_181, ((int32_t)231), (bool)1);
		__this->___TIME_CORR_75_val = L_182;
		RuntimeObject* L_183 = __this->___GRANADE_65;
		float L_184 = __this->___PLAYER_Y_69_val;
		float L_185 = __this->___PLAYER_SIN_71_val;
		float L_186 = __this->___PLAYER_VY_73_val;
		float L_187 = __this->___TIME_CORR_75_val;
		NullCheck(L_183);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_183, ((int32_t)196), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_184, L_185)), ((float)il2cpp_codegen_multiply(L_186, L_187)))));
		RuntimeObject* L_188;
		L_188 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_188);
		RuntimeObject* L_189;
		L_189 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_188, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_77 = L_189;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_77), (void*)L_189);
		RuntimeObject* L_190;
		L_190 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_190);
		RuntimeObject* L_191;
		L_191 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_190, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_79 = L_191;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_79), (void*)L_191);
		RuntimeObject* L_192 = __this->___GRANADE_79;
		NullCheck(L_192);
		float L_193;
		L_193 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_192, ((int32_t)165), (bool)1);
		__this->___temp_80 = L_193;
		RuntimeObject* L_194;
		L_194 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_194);
		RuntimeObject* L_195;
		L_195 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_194, 5, ((int32_t)422));
		__this->___PLAYER_SIZE_81 = L_195;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_SIZE_81), (void*)L_195);
		RuntimeObject* L_196 = __this->___PLAYER_SIZE_81;
		NullCheck(L_196);
		float L_197;
		L_197 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_196, ((int32_t)231), (bool)1);
		__this->___PLAYER_SIZE_81_val = L_197;
		RuntimeObject* L_198;
		L_198 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_198);
		RuntimeObject* L_199;
		L_199 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_198, 5, ((int32_t)435));
		__this->___PLAYER_TILT_84 = L_199;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_84), (void*)L_199);
		RuntimeObject* L_200 = __this->___PLAYER_TILT_84;
		NullCheck(L_200);
		float L_201;
		L_201 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_200, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_84_val = L_201;
		RuntimeObject* L_202;
		L_202 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_202);
		RuntimeObject* L_203;
		L_203 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_202, 5, ((int32_t)479));
		__this->___PLAYER_HGT_91 = L_203;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HGT_91), (void*)L_203);
		RuntimeObject* L_204 = __this->___PLAYER_HGT_91;
		NullCheck(L_204);
		float L_205;
		L_205 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_204, ((int32_t)231), (bool)1);
		__this->___PLAYER_HGT_91_val = L_205;
		RuntimeObject* L_206;
		L_206 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_206);
		RuntimeObject* L_207;
		L_207 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_206, 5, ((int32_t)567));
		__this->___FLOOR_HGT_93 = L_207;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOOR_HGT_93), (void*)L_207);
		RuntimeObject* L_208 = __this->___FLOOR_HGT_93;
		NullCheck(L_208);
		float L_209;
		L_209 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_208, ((int32_t)231), (bool)1);
		__this->___FLOOR_HGT_93_val = L_209;
		RuntimeObject* L_210 = __this->___GRANADE_77;
		float L_211 = __this->___PLAYER_SIZE_81_val;
		float L_212 = __this->___PLAYER_TILT_84_val;
		float L_213 = __this->___PLAYER_HGT_91_val;
		float L_214 = __this->___FLOOR_HGT_93_val;
		NullCheck(L_210);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_210, ((int32_t)165), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_211, ((float)il2cpp_codegen_multiply(L_212, (0.649999976f))))), (0.0500000007f))), L_213)), L_214)));
		RuntimeObject* L_215;
		L_215 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_215);
		RuntimeObject* L_216;
		L_216 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_215);
		NullCheck(L_216);
		RuntimeObject* L_217;
		L_217 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_216, ((int32_t)1675036814), (bool)1, (bool)1);
		__this->___FREEFALL_94 = L_217;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FREEFALL_94), (void*)L_217);
		RuntimeObject* L_218;
		L_218 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_218);
		RuntimeObject* L_219;
		L_219 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_218, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_96 = L_219;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_96), (void*)L_219);
		RuntimeObject* L_220 = __this->___GRANADE_96;
		RuntimeObject* L_221 = __this->___FREEFALL_94;
		NullCheck(L_220);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_220, ((int32_t)189), L_221);
		RuntimeObject* L_222;
		L_222 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_222);
		RuntimeObject* L_223;
		L_223 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_222);
		NullCheck(L_223);
		RuntimeObject* L_224;
		L_224 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_223, ((int32_t)-1483144471), (bool)1, (bool)1);
		__this->___BOUNCE_97 = L_224;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BOUNCE_97), (void*)L_224);
		RuntimeObject* L_225;
		L_225 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_225);
		RuntimeObject* L_226;
		L_226 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_225, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_99 = L_226;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_99), (void*)L_226);
		RuntimeObject* L_227 = __this->___GRANADE_99;
		RuntimeObject* L_228 = __this->___BOUNCE_97;
		NullCheck(L_227);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_227, ((int32_t)209), L_228);
		RuntimeObject* L_229;
		L_229 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_229);
		RuntimeObject* L_230;
		L_230 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_229);
		NullCheck(L_230);
		RuntimeObject* L_231;
		L_231 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_230, ((int32_t)1197240280), (bool)1, (bool)1);
		__this->___GRAN2TEX_100 = L_231;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN2TEX_100), (void*)L_231);
		RuntimeObject* L_232;
		L_232 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_232);
		RuntimeObject* L_233;
		L_233 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_232, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_102 = L_233;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_102), (void*)L_233);
		RuntimeObject* L_234 = __this->___GRANADE_102;
		RuntimeObject* L_235 = __this->___GRAN2TEX_100;
		NullCheck(L_234);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_234, ((int32_t)164), L_235);
		RuntimeObject* L_236;
		L_236 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_236);
		RuntimeObject* L_237;
		L_237 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_236, 5, ((int32_t)462));
		__this->___PLAYER_ANGLE_103 = L_237;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ANGLE_103), (void*)L_237);
		RuntimeObject* L_238 = __this->___PLAYER_ANGLE_103;
		NullCheck(L_238);
		float L_239;
		L_239 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_238, ((int32_t)231), (bool)1);
		__this->___PLAYER_ANGLE_103_val = L_239;
		RuntimeObject* L_240;
		L_240 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_240);
		RuntimeObject* L_241;
		L_241 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_240, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_105 = L_241;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_105), (void*)L_241);
		RuntimeObject* L_242 = __this->___GRANADE_105;
		float L_243 = __this->___PLAYER_ANGLE_103_val;
		NullCheck(L_242);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_242, ((int32_t)194), L_243);
		RuntimeObject* L_244;
		L_244 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_244);
		RuntimeObject* L_245;
		L_245 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_244, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_107 = L_245;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_107), (void*)L_245);
		RuntimeObject* L_246;
		L_246 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_246);
		RuntimeObject* L_247;
		L_247 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_246, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_109 = L_247;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_109), (void*)L_247);
		RuntimeObject* L_248 = __this->___GRANADE_109;
		NullCheck(L_248);
		float L_249;
		L_249 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_248, ((int32_t)169), (bool)1);
		__this->___temp_110 = L_249;
		RuntimeObject* L_250;
		L_250 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_250);
		RuntimeObject* L_251;
		L_251 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_250, 5, ((int32_t)435));
		__this->___PLAYER_TILT_112 = L_251;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_TILT_112), (void*)L_251);
		RuntimeObject* L_252 = __this->___PLAYER_TILT_112;
		NullCheck(L_252);
		float L_253;
		L_253 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_252, ((int32_t)231), (bool)1);
		__this->___PLAYER_TILT_112_val = L_253;
		RuntimeObject* L_254 = __this->___GRANADE_107;
		float L_255 = __this->___PLAYER_TILT_112_val;
		NullCheck(L_254);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_254, ((int32_t)169), ((float)il2cpp_codegen_add(((float)(((-L_255))/(2.0f))), (0.200000003f))));
		RuntimeObject* L_256;
		L_256 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_256);
		RuntimeObject* L_257;
		L_257 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_256);
		NullCheck(L_257);
		RuntimeObject* L_258;
		L_258 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_257, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_117 = L_258;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_117), (void*)L_258);
		RuntimeObject* L_259;
		L_259 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_259);
		RuntimeObject* L_260;
		L_260 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_259, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_119 = L_260;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_119), (void*)L_260);
		RuntimeObject* L_261 = __this->___GRANADE_119;
		RuntimeObject* L_262 = __this->___BULLET_117;
		NullCheck(L_261);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_261, ((int32_t)199), L_262);
		RuntimeObject* L_263;
		L_263 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_263);
		RuntimeObject* L_264;
		L_264 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_263, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_122 = L_264;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_122), (void*)L_264);
		RuntimeObject* L_265 = __this->___GRANADE_122;
		NullCheck(L_265);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_265, ((int32_t)207), (1.0f));
		RuntimeObject* L_266;
		L_266 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_266);
		RuntimeObject* L_267;
		L_267 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_266, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_125 = L_267;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_125), (void*)L_267);
		RuntimeObject* L_268 = __this->___GRANADE_125;
		NullCheck(L_268);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_268, ((int32_t)204), (0.0f));
		RuntimeObject* L_269;
		L_269 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_269);
		RuntimeObject* L_270;
		L_270 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_269, 5, ((int32_t)2088896983));
		__this->___AMMO_127 = L_270;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_127), (void*)L_270);
		RuntimeObject* L_271 = __this->___AMMO_127;
		NullCheck(L_271);
		float L_272;
		L_272 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_271, ((int32_t)231), (bool)1);
		__this->___AMMO_127_val = L_272;
		RuntimeObject* L_273;
		L_273 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_273);
		RuntimeObject* L_274;
		L_274 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_273, 5, ((int32_t)2088896983));
		__this->___AMMO_128 = L_274;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_128), (void*)L_274);
		RuntimeObject* L_275 = __this->___AMMO_128;
		float L_276 = __this->___AMMO_127_val;
		NullCheck(L_275);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_275, ((int32_t)231), ((float)il2cpp_codegen_add(L_276, (-1.0f))));
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_277 = (DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D*)il2cpp_codegen_object_new(DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D_il2cpp_TypeInfo_var);
		DECAMMO__ctor_mF631B0417F3BD5DBA5E40DB19E2F3843AE8D87D4(L_277, NULL);
		V_3 = L_277;
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_278 = V_3;
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_279 = L_278;
		RuntimeObject* L_280;
		L_280 = THROW_get_MY_m42C3497B00F02B100D833C657057AB7633947599_inline(__this, NULL);
		NullCheck(L_279);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_279, L_280);
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_281 = L_279;
		RuntimeObject* L_282;
		L_282 = THROW_get_THERE_mFEC6381AAB25774DFE50C5FBBD0F124005BF83A7_inline(__this, NULL);
		NullCheck(L_281);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_281, L_282);
		RuntimeObject* L_283;
		L_283 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_281);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_281, L_283);
		RuntimeObject* L_284;
		L_284 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		DECAMMO_tC117ADE10ABA3F18F2CD86D51352F58ADEB3E09D* L_285 = V_3;
		NullCheck(L_284);
		RuntimeObject* L_286;
		L_286 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_284, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_285);
		float L_287;
		L_287 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime8 = L_287;
		float L_288 = __this->___startTime8;
		float L_289;
		L_289 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime8 = ((float)il2cpp_codegen_add(L_288, L_289));
		__this->____cursor = 8;
		goto IL_0c40;
	}

IL_0c33:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_290 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, L_290, NULL);
		return (bool)1;
	}

IL_0c40:
	{
		float L_291;
		L_291 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_292 = __this->___endTime8;
		if ((((float)L_291) < ((float)L_292)))
		{
			goto IL_0c33;
		}
	}
	{
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, NULL, NULL);
		RuntimeObject* L_293;
		L_293 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_293);
		RuntimeObject* L_294;
		L_294 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_293);
		NullCheck(L_294);
		RuntimeObject* L_295;
		L_295 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_294, ((int32_t)1197240280), (bool)1, (bool)1);
		__this->___GRAN2TEX_130 = L_295;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN2TEX_130), (void*)L_295);
		RuntimeObject* L_296;
		L_296 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_296);
		RuntimeObject* L_297;
		L_297 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_296, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_132 = L_297;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_132), (void*)L_297);
		RuntimeObject* L_298 = __this->___GRANADE_132;
		RuntimeObject* L_299 = L_298;
		if (L_299)
		{
			G_B31_0 = L_299;
			G_B31_1 = __this;
			goto IL_0c96;
		}
		G_B30_0 = L_299;
		G_B30_1 = __this;
	}
	{
		G_B32_0 = ((RuntimeObject*)(NULL));
		G_B32_1 = G_B30_1;
		goto IL_0ca2;
	}

IL_0c96:
	{
		NullCheck(G_B31_0);
		RuntimeObject* L_300;
		L_300 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B31_0, ((int32_t)164), (bool)1, (bool)1);
		G_B32_0 = L_300;
		G_B32_1 = G_B31_1;
	}

IL_0ca2:
	{
		NullCheck(G_B32_1);
		G_B32_1->___temp_133 = G_B32_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B32_1->___temp_133), (void*)G_B32_0);
		RuntimeObject* L_301 = __this->___temp_133;
		RuntimeObject* L_302 = __this->___GRAN2TEX_130;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_303;
		L_303 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_301, L_302, NULL);
		if (!L_303)
		{
			goto IL_0d04;
		}
	}
	{
		RuntimeObject* L_304;
		L_304 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_304);
		RuntimeObject* L_305;
		L_305 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_304);
		NullCheck(L_305);
		RuntimeObject* L_306;
		L_306 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_305, ((int32_t)1197204343), (bool)1, (bool)1);
		__this->___GRAN1TEX_134 = L_306;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN1TEX_134), (void*)L_306);
		RuntimeObject* L_307;
		L_307 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_307);
		RuntimeObject* L_308;
		L_308 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_307, ((int32_t)556898879), (bool)0);
		__this->___GRANADE_136 = L_308;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANADE_136), (void*)L_308);
		RuntimeObject* L_309 = __this->___GRANADE_136;
		RuntimeObject* L_310 = __this->___GRAN1TEX_134;
		NullCheck(L_309);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_309, ((int32_t)164), L_310);
	}

IL_0d04:
	{
		RuntimeObject* L_311;
		L_311 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_311);
		RuntimeObject* L_312;
		L_312 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_311);
		NullCheck(L_312);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_312, ((int32_t)158), (RuntimeObject*)NULL);
		RuntimeObject* L_313;
		L_313 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_313);
		RuntimeObject* L_314;
		L_314 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_313, 5, ((int32_t)2088896983));
		__this->___AMMO_141 = L_314;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_141), (void*)L_314);
		RuntimeObject* L_315 = __this->___AMMO_141;
		NullCheck(L_315);
		float L_316;
		L_316 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_315, ((int32_t)231), (bool)1);
		__this->___AMMO_141_val = L_316;
		float L_317 = __this->___AMMO_141_val;
		bool L_318;
		L_318 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_317, (0.0f), NULL);
		if (L_318)
		{
			goto IL_0e03;
		}
	}
	{
		RuntimeObject* L_319;
		L_319 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_319);
		RuntimeObject* L_320;
		L_320 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_319, 5, ((int32_t)40123194));
		__this->___HAS_GRANADE_143 = L_320;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_GRANADE_143), (void*)L_320);
		RuntimeObject* L_321 = __this->___HAS_GRANADE_143;
		NullCheck(L_321);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_321, ((int32_t)231), (0.0f));
		RuntimeObject* L_322;
		L_322 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_322);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_322, ((int32_t)-1040443588), (RuntimeObject*)NULL);
		RuntimeObject* L_323;
		L_323 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_323);
		RuntimeObject* L_324;
		L_324 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_323, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_147 = L_324;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_147), (void*)L_324);
		RuntimeObject* L_325 = __this->___GUNFIRING_147;
		NullCheck(L_325);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_325, ((int32_t)231), (0.0f));
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_326 = (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF*)il2cpp_codegen_object_new(SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		SELECTNONE__ctor_mFF1135D9058921B26DEC652619B7A667380D5451(L_326, NULL);
		V_4 = L_326;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_327 = V_4;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_328 = L_327;
		RuntimeObject* L_329;
		L_329 = THROW_get_MY_m42C3497B00F02B100D833C657057AB7633947599_inline(__this, NULL);
		NullCheck(L_328);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_328, L_329);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_330 = L_328;
		RuntimeObject* L_331;
		L_331 = THROW_get_THERE_mFEC6381AAB25774DFE50C5FBBD0F124005BF83A7_inline(__this, NULL);
		NullCheck(L_330);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_330, L_331);
		RuntimeObject* L_332;
		L_332 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_330);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_330, L_332);
		RuntimeObject* L_333;
		L_333 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_334 = V_4;
		NullCheck(L_333);
		RuntimeObject* L_335;
		L_335 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_333, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_334);
		return (bool)0;
	}

IL_0e03:
	{
		float L_336;
		L_336 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime9 = L_336;
		float L_337 = __this->___startTime9;
		float L_338;
		L_338 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(8, NULL);
		__this->___endTime9 = ((float)il2cpp_codegen_add(L_337, L_338));
		__this->____cursor = ((int32_t)9);
		goto IL_0e38;
	}

IL_0e2b:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_339 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, L_339, NULL);
		return (bool)1;
	}

IL_0e38:
	{
		float L_340;
		L_340 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_341 = __this->___endTime9;
		if ((((float)L_340) < ((float)L_341)))
		{
			goto IL_0e2b;
		}
	}
	{
		THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline(__this, NULL, NULL);
		RuntimeObject* L_342;
		L_342 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_342);
		RuntimeObject* L_343;
		L_343 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_342);
		NullCheck(L_343);
		RuntimeObject* L_344;
		L_344 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_343, ((int32_t)850536902), (bool)1, (bool)1);
		__this->___GRAN00OVL_149 = L_344;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN00OVL_149), (void*)L_344);
		RuntimeObject* L_345;
		L_345 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_345);
		RuntimeObject* L_346;
		L_346 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_345);
		RuntimeObject* L_347 = __this->___GRAN00OVL_149;
		NullCheck(L_346);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_346, ((int32_t)158), L_347);
		RuntimeObject* L_348;
		L_348 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_348);
		RuntimeObject* L_349;
		L_349 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_348, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_153 = L_349;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_153), (void*)L_349);
		RuntimeObject* L_350 = __this->___WEAPONSEL_153;
		NullCheck(L_350);
		float L_351;
		L_351 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_350, ((int32_t)231), (bool)1);
		__this->___WEAPONSEL_153_val = L_351;
		float L_352 = __this->___WEAPONSEL_153_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_353;
		L_353 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_352, (3.0f), NULL);
		if (!L_353)
		{
			goto IL_0f2e;
		}
	}
	{
		RuntimeObject* L_354;
		L_354 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_354);
		RuntimeObject* L_355;
		L_355 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_354);
		NullCheck(L_355);
		RuntimeObject* L_356;
		L_356 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_355, ((int32_t)236450049), (bool)1, (bool)1);
		__this->___THROW_154 = L_356;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___THROW_154), (void*)L_356);
		RuntimeObject* L_357;
		L_357 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_357);
		RuntimeObject* L_358;
		L_358 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_357);
		RuntimeObject* L_359 = __this->___THROW_154;
		NullCheck(L_358);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_358, ((int32_t)78), L_359);
		RuntimeObject* L_360;
		L_360 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_360);
		RuntimeObject* L_361;
		L_361 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_360);
		NullCheck(L_361);
		RuntimeObject* L_362;
		L_362 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_361, ((int32_t)236450049), (bool)1, (bool)1);
		__this->___THROW_156 = L_362;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___THROW_156), (void*)L_362);
		RuntimeObject* L_363;
		L_363 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_363);
		RuntimeObject* L_364;
		L_364 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_363);
		RuntimeObject* L_365 = __this->___THROW_156;
		NullCheck(L_364);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_364, ((int32_t)97), L_365);
	}

IL_0f2e:
	{
		RuntimeObject* L_366;
		L_366 = THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline(__this, NULL);
		NullCheck(L_366);
		RuntimeObject* L_367;
		L_367 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_366, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_159 = L_367;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_159), (void*)L_367);
		RuntimeObject* L_368 = __this->___GUNFIRING_159;
		NullCheck(L_368);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_368, ((int32_t)231), (0.0f));
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_WALKING_set_MY_m40E0F31AA3F6C98504D1E8EA044651637F1CB6A1_inline (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_WALKING_set_THERE_m9758674817172C9E13231F353C163488F7E8783D_inline (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_WALKING_set__world_m4C53A620A8D72426689741A157C32738B8D78CD7_inline (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_WALKING_get__world_mC4C6A1AA0F7D4D747CD0F99690B3643BB8757E9E_inline (SET_WALKING_tDF3A5C5F903EDBC0D6CDDA768C173D8BF02419C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_SWIMMING_set_MY_m21531DFB92FBE41C02B9F5B4B94C766DA106C6DE_inline (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_SWIMMING_set_THERE_m24AE7883B6AF466BF9CD78033E57836D9C8EF8B8_inline (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_SWIMMING_set__world_m751347014F06091E3832C0F43E70AA11F192C73C_inline (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_SWIMMING_get__world_mBA11C1A9032121AA7A15B76A79256F5466A51AB0_inline (SET_SWIMMING_t6F57424D3B9ED38F2C0CF53980FEDFB4C1C54700* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DIVING_set_MY_m67471036F06188DECA6EC16564B455D91B490EC7_inline (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DIVING_set_THERE_m873CEEFAB8FAB901C98858157E7576C7E9210CA1_inline (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DIVING_set__world_mE1E43A2D41660E8B3730F5E4345DC32612C1176E_inline (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_DIVING_get__world_m8C829A8B893B4AD73F3438A81DD39118D6C5A6CE_inline (SET_DIVING_tF6347B312E46B26818CBA215D1B0997CDD6A467C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DEATH_set_MY_m3C11005D3069859C7372F79CDF84D4D554A8BC69_inline (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DEATH_set_THERE_m36352411173DDC1139E40B99CB0205E49831C07B_inline (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_DEATH_set__world_m74B7F8F7567845CCD6A0104C1B7604C67CFE8FFF_inline (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_DEATH_get__world_m3B4A0CF291CBB5B211641C38A3CA0855AE2F4070_inline (SET_DEATH_tF0B2D804802ED55DCAFCCD8020CAE939D740827B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_MOVING_set_MY_m716BB5F50C75E3349E8E19A3F9FF881C3F40B6B5_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_MOVING_set_THERE_m1606F04893C4CF81D03CCBA21BE8BE1EF2306232_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_MOVING_set__world_mC0B53C55B0E39101C173C38C6D3AC8F11EBD3E64_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_MOVING_get__world_m82F7B640D151FF2243558FC75B305007F51BCDDB_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_MOVING_get_MY_mA389AD0ACE4BAD090D4FFCF8CC86E2337CBD69C4_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_MOVING_get_THERE_m437AF4A776F2F493E86DBB69366821F1E47D07B5_inline (SET_MOVING_t85C37C0FC52A9590D84CAA9CA200E25FC9C1B221* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void STOP_MOVING_set_MY_m9B7BDA183D1743AD8D08EBFE3369AF714716EC2B_inline (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void STOP_MOVING_set_THERE_m4EC383C38E0B86DBCE24FA254306FACD3D8714C8_inline (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void STOP_MOVING_set__world_m7564C2F4F7C927D28E3C0EFA049272449FCFAAAA_inline (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* STOP_MOVING_get__world_mDB0431E506CEF2E5F3C6F234561473A9B1E3CD53_inline (STOP_MOVING_t70032B9B5DA9AF3869C0BBA9AC45968B6A1BA909* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_BLUE_set_MY_m274165DDFA11982370C286A3A72A39E7762C0E26_inline (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_BLUE_set_THERE_mDBCF0A31891C32F0507F8CA885FF6EE62DFE196E_inline (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SET_BLUE_set__world_m6D757A5088827ADDF78C9726C3F015658985DB23_inline (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SET_BLUE_get__world_m05C1AEB2AAFE8D376C2ED79E72B63745D2B5DBFE_inline (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESET_BLUE_set_MY_m80F44C69D7668614A4F0AD85313BF8CE5F488154_inline (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESET_BLUE_set_THERE_m4AEC29D8DB5438629DB961DE58BFC7A0D5FF664D_inline (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESET_BLUE_set__world_m456E6D17C482DFF18F5C80C7DD390FAFC215634F_inline (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RESET_BLUE_get__world_m4B96625F38E374698D59E820B959453C91CC9650_inline (RESET_BLUE_t76E4B238D80D4950C4F5FAFCAD5D14F2462CF249* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENTER_WATER_set_MY_m9341E68D26B5F4524724CAE042697348401C04BE_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENTER_WATER_set_THERE_mD634DF002FB5BF6A979BE8F4F5416BE3BE94EAD9_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENTER_WATER_set__world_mBAE97DDD211BCAA2B6E1278673D67F8650324A7D_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENTER_WATER_get__world_m76B94AD5B60615CE463CF08C16B621A64101635C_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENTER_WATER_get_MY_m5DEA0D04E5360E307E0EF755C93A0925AC93C834_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENTER_WATER_get_THERE_m5AEFB0AB6AC2239451B1AE719C07A492E935D1D7_inline (ENTER_WATER_t79CD55574930F046E73890D43D9EC63712A5500B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LEAVE_WATER_set_MY_m255E4C86B6377D1A936AF622D514720123886ECF_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LEAVE_WATER_set_THERE_m66C5BA1DC35650B8D16CBD895D24C8E301821273_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LEAVE_WATER_set__world_m915030EF949EF5F8E0D2915AC221280B678AC29C_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LEAVE_WATER_get_MY_m3054AD47EB44C2AFA24BC57F786932CA71FF5A87_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LEAVE_WATER_get_THERE_mDAF0A62005ACBD29CC37638CDDC47C9FD1A22688_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LEAVE_WATER_get__world_m4AA7508276777A7E8B0F896FFA6564E0F04FC2C0_inline (LEAVE_WATER_t73D097D9C5DEA95C1169A7FBA67E0538ED7D0F1B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DIVE_UP_set_MY_m6C346A7F4CEAC68FF4220544EE586711A20A5A10_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DIVE_UP_set_THERE_m0A5A26B600EDF26BA7A29CD0A4451B263856D3B6_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DIVE_UP_set__world_m0B92DACFAA684644FDFDFF7E9234E75B36C7B716_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DIVE_UP_get__world_mEA92A68D20D94444FA312A7FF5EF792BC2D89606_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DIVE_UP_get_MY_mAEE0DABF04D59B5015D96617708EA304C64039CA_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DIVE_UP_get_THERE_m2C36F1841186C3C0C508E7FB8D8819C49BA115FA_inline (DIVE_UP_t2BC63CE520CE8950924D4A7276701851DC897A8B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_DIVE_set_MY_m3DAFDB832E6A1284D818D74C1E11C3E3F4F426F1_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_DIVE_set_THERE_mE59E42F63F711274A5A6273F14ADCCF52C350879_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_DIVE_set__world_m472E4612BF916FDBA54A9E3F335466374E29FB7B_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_DIVE_get__world_mC18863A20F785C94C2B7250765F8F922E67CCFDE_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_DIVE_get_MY_m181DC48A0D170B909AF627B36274242CE8B98B7C_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_DIVE_get_THERE_m17B0B438E4FA2730C3DE2F118FC41C8AEA735CEF_inline (REGIO_DIVE_tCBCDF5FFBCCD96DB3536910574FB754003F0DBEB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_ARISE_set_MY_m6C126A6983AB375E31C02ECF7AC06C0A5D2B7394_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_ARISE_set_THERE_mF2AB71CE29EE5A4B8B67AC0B100C8E84ACB4C859_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REGIO_ARISE_set__world_mE7B3BBCF25E520C769B5CD4BCAA5223BC2D6F224_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_ARISE_get__world_mB148E5C3D43B70F4D61C796964A520FBEE2B692C_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_ARISE_get_MY_mD2F020D86416F768377085E9DE57CF821183434E_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REGIO_ARISE_get_THERE_m9E01A6BE7CC9A6761EC485674DB08E6D16882CB7_inline (REGIO_ARISE_t37BC48EACEFC02A0016147A058BD2F77D7D3919D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYER_set_MY_mDE2740F5B7DF66A6690C2DA225FA2475263F7EEC_inline (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYER_set_THERE_mB3EC55509499597DCBB9665B0292202C93ED401E_inline (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYER_set__world_m0821EA289C99F49E95343986D1A2CB4675215124_inline (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYER_get__world_m15F7BA62A43B0775F65AD33B0A51206DAC9176B1_inline (HITPLAYER_t9FCEC5AC53AD936E50D7A43B10622F1BCCF49335* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDOUT_set_MY_m699284D1C5CE919BF77AC84681BB3F9595E9543D_inline (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDOUT_set_THERE_m325787721024F8EA38EA50C2E343D3C5D2743D97_inline (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDOUT_set__world_m4D5BBD085CA658022B081AEF299632AD1401B718_inline (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REDOUT_get__world_m5659FEF2A7912F284FB2D31E13A378977B08B0B8_inline (REDOUT_t8AB9637590ABD6CBE90EE7661CB8B7CD7EC26531* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDIN_set_MY_mF12B6231D5C15919D6233ED3497E260CA28866CE_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDIN_set_THERE_mE17856AE2D838107DA6A80AA0EB6ABFD64AFCD46_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REDIN_set__world_m1ADA875544DFAC6642B46248395444985B34D18D_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REDIN_get__world_m792513C61B6015EE47BA49B21F8E325A13C079F8_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REDIN_get_MY_m96D78B4468C45B5531FC2BAA61BDD67B128FF395_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REDIN_get_THERE_m0814D635B155F64C050B8304E5BC2AA53B54D5EE_inline (REDIN_t59C2FC4BCCE2AAE48E88BF9547CEF44436A1E929* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHPLAYER_set_MY_mC466D1D5D3064BE95C4F6453BA5BA98EF565F514_inline (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHPLAYER_set_THERE_m0FB1564509D9F2A220549A26A190DDF67682CC2F_inline (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHPLAYER_set__world_mA672E59FDF8790E23EAE6BCE8E8A224ECCE727AF_inline (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHPLAYER_get__world_m2EDD528AA8B1ABD88923CF19D9CBB746BCEF7520_inline (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHOUT_set_MY_mA7D9C46744FBA53A7510084C9DADA27A1B54E82D_inline (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHOUT_set_THERE_m7A2A23C82373CDC71A9DB85739CA699531E42E66_inline (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHOUT_set__world_mEC448EA7D2651041393B82B13FB58D84055C56A5_inline (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHOUT_get__world_mAAC892322B1CF6A600CDBE24E494DBD1F9A4CCBA_inline (FLASHOUT_t584DE0D8D97E0E29C3A42ED0206ED49B4710BD44* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHIN_set_MY_mF862A67AB588F95D3A0058F71E1ED3426D704409_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHIN_set_THERE_m19392F39800EA7FE845A840472E0F92F6457CFD4_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLASHIN_set__world_mE484AD9AA08C7DFCDB72B962C3356045D9D8DEAE_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHIN_get__world_m743DBBC47F89AA7147876BCE4812ECD5C9D63868_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHIN_get_MY_m395413006813967C8AEA7E3DE2EEB9B9129C2240_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FLASHIN_get_THERE_mCA36FDA943C7A3C0D3B87801425D6934FE7E8375_inline (FLASHIN_t8DC221B3DB653C29D40B7D9CFE3AD311677A2D2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set_MY_m9A9C91FBD71127D68D290F5281C15668F96D3B1F_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set_THERE_m559A17D2AD5169524B829E18FDF1BAE8750AC74A_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set__world_m694664BEBFA2558DD1D8703891CB3B96C4636D63_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HITPLAYERDELAY_set_Current_mF0F6CC147AC9B2E079370650708EAB3D549C0AF1_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYERDELAY_get_MY_m86119E4EDCA1CCB4572BA3EFC7205AC9A7CFC4D2_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYERDELAY_get_THERE_m77C25C86EFAB23E6350D5C5AFE01E07908F209DF_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HITPLAYERDELAY_get__world_mD092BC53D176E6243BBB5B44DBC884EAF95082FC_inline (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KILLPLAYER_set_MY_mFCD2CEF2FA15DD20571396A9E6ED5624FB2D0D1A_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KILLPLAYER_set_THERE_mFE2D68FE3D8DC67DB4A79966774718CEFA14A426_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KILLPLAYER_set__world_m0002E0DB93649D393AA6161D74ED14F98D8188F5_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KILLPLAYER_get__world_m1D8539CDFF1D0E941D7275EB1EFF6DFC6B675BEE_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KILLPLAYER_get_MY_m609B71763D83ABD4B85300AE8249BAEC4C313F92_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KILLPLAYER_get_THERE_mA8F304B34E1B1B01C0B7D20F77BB318D2A4772BA_inline (KILLPLAYER_tAF47F2857EB009B0F405AF0EB3D03D83D9B2E886* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FINISHPLAYER_set_MY_mF5AD1CB26212E1EF3ED88C78164CC61327FB8982_inline (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FINISHPLAYER_set_THERE_m415411A8053116828D633164C3831C73B06BD432_inline (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FINISHPLAYER_set__world_m0EB5B6FFADA5D9CC8A88D9D37DDF76108A82A0F5_inline (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FINISHPLAYER_get_MY_mF0C190D6BE75699E89B0C586B8386D4C547C863F_inline (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FINISHPLAYER_get__world_m4F9941A9998B773E7EED24ECBE98685B17785480_inline (FINISHPLAYER_t211821810D6673AFAA7F539CE47852B5866AB34C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TOGGLEGODMODE_set_MY_mA25943E8536F4573671CD8C3FC4970D382618287_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TOGGLEGODMODE_set_THERE_m2233085EA4CAF95B141F5D71E3D7680483B8F573_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TOGGLEGODMODE_set__world_m61ED43EEE0D9F6CBC9CDE73AD783E815D1C47F7C_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TOGGLEGODMODE_get__world_m229A33BEEFE9118E3850075D63ED457A6908289C_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TOGGLEGODMODE_get_MY_m631391D13A6C5B0EA37D4E007D590ADBA50C9BF3_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TOGGLEGODMODE_get_THERE_m8B983A0AB9C2A6E8AE3FF7714FE21907C04DE38B_inline (TOGGLEGODMODE_tB11BD86B14D1659B248A991476B99DCA53404E8D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETCKEY_set_MY_m477C5A55E1847C03564EC61D2E6F1D5BE0305B0D_inline (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETCKEY_set_THERE_m60FF228BDE105014530DFB3E6F2609E10C163B23_inline (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETCKEY_set__world_m8EA53830A1E2234F1959CECB9AE62865D226D7B4_inline (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SETCKEY_get__world_m20981ECCA6D46B3656A76277C096B39023470C60_inline (SETCKEY_t15DBEF48B4DC588B7F91AFBD82FCA7C594C40DC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETGKEY_set_MY_mDDD13D24855A7EE019AB641147E7DCF144EDEF10_inline (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETGKEY_set_THERE_m81731FE73A3B1DB66753AB3ABB74928580B8EA26_inline (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETGKEY_set__world_m6ED4F17A146E505B8B1C94BA2952D840CD6E124D_inline (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SETGKEY_get__world_mE5A2E2EE65E98234DB6B46951C7C4CD8A57FFEBF_inline (SETGKEY_tBC74719F9F000C06FDF451E4189F406DE6A3E015* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETOKEY_set_MY_m3974F5CC66E47A6AF83E86BEA337C1C04A9E5AB1_inline (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETOKEY_set_THERE_mE8DBD9CE16625BA5991ED5A8EB75439A58971BFD_inline (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETOKEY_set__world_mCCC54BAC31C916295F2D4717D960C792C6E53B93_inline (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SETOKEY_get__world_mE110F7D4B57CB63C5E6C882F4A51E0FEDFC19E80_inline (SETOKEY_t5045042F07C6A4BB6AA43787D007DA29499EED53* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETDKEY_set_MY_m4FCA0AC8539427B6EA833CE50A739C1FAACEA44A_inline (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETDKEY_set_THERE_mD59393B022BCE866F1D0F4EC73FBA758FB205339_inline (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETDKEY_set__world_m3C6B6CE03DCC0040E75F5D65B57F56DFD86B4487_inline (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SETDKEY_get__world_mAB6E9AB1486E00D94DAE654AB62C60305356B2F8_inline (SETDKEY_t5E74608245847788A610D766422B9334A0F6D229* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FIRE_set_MY_m4BDF7CC3DD0D34BAF5D1A5822816A3771A91EEA6_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FIRE_set_THERE_m7CDA32CB21408A307112175851CA59EA64F94918_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FIRE_set__world_mEA47112A626FEDD6E863C0129C6F7C847E66E71E_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FIRE_get__world_m0A8BCB7D12F7C2F2850DF562C3EF589F0EE4B58E_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FIRE_set_Current_m829AB22DF1F47297009B69B6A5FECF2C24C37EA2_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FIRE_get_MY_m1018064BA708BFDF239D7A9B171C1E91C8BF1A5A_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FIRE_get_THERE_mEBF57DA4FF3A434039DE755A95CC7747DFA85696_inline (FIRE_t1C8DB776177E019D757DE019E1295E8EA05F18CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BURST_set_MY_m76582031FDA85EF5D426A4B6AFD18749F0FBC32E_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BURST_set_THERE_mE0EEF7BE7479C8A285942A86A7378A528CDE7FD5_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BURST_set__world_mF2C69DD27DDFCD5D23C689A72CB3133DD93AF326_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BURST_get__world_m1DAF3826888D0853B7C3916DE5E00E468CEABDD7_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BURST_get_MY_m2C707907417E5E1EDFE362BA0D85CE8D1EF6D00D_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BURST_get_THERE_m263EAED681CC2E5E33BAFDFB5B3C9FD1EC26197D_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BURST_set_Current_mCA0AAC076EB34618C9E8C229AA27CA6AD70DD63A_inline (BURST_t04BCC90A20EF55DA8F96C77BBCD75AC4EFECEE09* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void THROW_set_MY_mCB2F65552AB16338E85C51DE1B3F5864906B43EB_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void THROW_set_THERE_m7ECAA8233C6DFBCEDE64664D9E5E5E67E6A19C46_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void THROW_set__world_mCC5DA9AEC2C5A338319E89C3912C90EB97663C9B_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* THROW_get__world_m8F8BF02E642D9238430040371E8789ACA02AC843_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* THROW_get_MY_m42C3497B00F02B100D833C657057AB7633947599_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* THROW_get_THERE_mFEC6381AAB25774DFE50C5FBBD0F124005BF83A7_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void THROW_set_Current_m7121E05410349A6F6F60E0B444EA8F8BF3217DDA_inline (THROW_t3BF9E737B8F68B09BC1C2F4EB710F46D3F6F1FF9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}

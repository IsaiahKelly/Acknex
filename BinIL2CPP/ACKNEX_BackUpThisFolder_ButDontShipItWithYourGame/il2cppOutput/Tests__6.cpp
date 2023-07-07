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

struct Dictionary_2_t6CF2F1ABBDC653D0C5CC02EA9D12C5FBD70D513C;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535;
struct IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
struct BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34;
struct CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B;
struct CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8;
struct CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5;
struct DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9;
struct DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64;
struct DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2;
struct DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542;
struct DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178;
struct DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705;
struct DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C;
struct DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664;
struct DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891;
struct DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1;
struct DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05;
struct FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5;
struct HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25;
struct LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45;
struct LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511;
struct PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176;
struct REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024;
struct TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD;
struct TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769;
struct TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567;
struct TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B;
struct TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A;
struct TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79;
struct TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4;
struct TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA;
struct TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98;
struct TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4;
struct TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317;
struct TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0;
struct TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84;
struct TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6;
struct TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609;
struct TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B;
struct TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA;
struct TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC;
struct TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753;
struct TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B;
struct TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C;
struct TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518;
struct TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902;

IL2CPP_EXTERN_C RuntimeClass* BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
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
struct BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PARTICLE_1;
	RuntimeObject* ___DISTX_3;
	float ___DISTX_3_val;
	RuntimeObject* ___PARTICLE_5;
	RuntimeObject* ___PARTICLE_7;
	float ___temp_8;
	RuntimeObject* ___DISTZ_9;
	float ___DISTZ_9_val;
	RuntimeObject* ___DISTX_11;
	float ___DISTX_11_val;
	RuntimeObject* ___PARTICLE_14;
	float ___temp_15;
	RuntimeObject* ___PARTICLE_17;
	RuntimeObject* ___PARTICLE_19;
	float ___temp_20;
	RuntimeObject* ___PARTICLE_23;
	float ___temp_24;
	RuntimeObject* ___MY_27;
	RuntimeObject* ___PARTICLE_30;
	RuntimeObject* ___MY_31;
	RuntimeObject* ___PARTICLE_33;
	RuntimeObject* ___EXPLOSION_CENTER_35;
	float ___temp_36;
	RuntimeObject* ___PARTICLE_38;
	RuntimeObject* ___EXPLOSION_CENTER_40;
	float ___temp_41;
	RuntimeObject* ___PARTICLE_43;
	RuntimeObject* ___PARTICLE_46;
	RuntimeObject* ___PARTICLE_49;
	RuntimeObject* ___PRTCTEX_50;
	RuntimeObject* ___PARTICLE_52;
	RuntimeObject* ___IMPLODEPARTICLE_53;
	RuntimeObject* ___PARTICLE_55;
	RuntimeObject* ___LOCATEPARTICLE_56;
	RuntimeObject* ___PARTICLE_58;
	RuntimeObject* ___PARTICLE_61;
};
struct CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___SHOT_SOUND_ON_13;
	float ___SHOT_SOUND_ON_13_val;
	RuntimeObject* ___MY_16;
	float ___temp_17;
	RuntimeObject* ___MY_20;
	float ___temp_21;
	RuntimeObject* ___MY_24;
	RuntimeObject* ___DRKL02SND_25;
	RuntimeObject* ___MY_27;
};
struct CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	float ___temp_15;
	RuntimeObject* ___MY_18;
	RuntimeObject* ___BULLET_19;
	RuntimeObject* ___MY_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_25;
	float ___temp_26;
	RuntimeObject* ___MY_28;
	float ___temp_29;
	RuntimeObject* ___MY_40;
};
struct CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_6;
	RuntimeObject* ___MY_9;
	RuntimeObject* ___MY_12;
	RuntimeObject* ___MY_15;
	RuntimeObject* ___MY_18;
	float ___temp_19;
	RuntimeObject* ___MY_22;
	float ___temp_23;
	RuntimeObject* ___MY_26;
	float ___temp_27;
	RuntimeObject* ___DRKLDELTA_28;
	RuntimeObject* ___DRKLDELTA_29;
	float ___DRKLDELTA_29_val;
	RuntimeObject* ___MY_32;
	float ___temp_33;
	RuntimeObject* ___MY_36;
	float ___temp_37;
	RuntimeObject* ___MY_42;
	float ___temp_43;
	RuntimeObject* ___MY_46;
	float ___temp_47;
	RuntimeObject* ___MY_52;
	float ___temp_53;
	RuntimeObject* ___MY_56;
	float ___temp_57;
	RuntimeObject* ___MY_62;
	float ___temp_63;
	RuntimeObject* ___MY_66;
	float ___temp_67;
	RuntimeObject* ___MY_70;
	float ___temp_71;
	RuntimeObject* ___MY_73;
	RuntimeObject* ___MY_75;
	float ___temp_76;
	RuntimeObject* ___MY_78;
	RuntimeObject* ___DRKLDELTA_80;
	float ___DRKLDELTA_80_val;
	RuntimeObject* ___MY_83;
	float ___temp_84;
	RuntimeObject* ___PLAYER_RESULT_85;
	RuntimeObject* ___PLAYER_RESULT_86;
	float ___PLAYER_RESULT_86_val;
	RuntimeObject* ___DRKLSHOOTFACTOR_87;
	float ___DRKLSHOOTFACTOR_87_val;
};
struct DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___DRKLDEAD_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___DRKL8TEX_18;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
};
struct DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___DRKLJUMP_0;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLEDRKLSHOOT_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___DRKLHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___DRKL1TEX_18;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___BULLET_24;
	RuntimeObject* ___MY_26;
};
struct DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___DRKLESCAPE_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___CYCLEDRKLHIDE_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___DRKLHIT_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	float ___temp_24;
	RuntimeObject* ___MY_27;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_31;
	float ___temp_32;
	RuntimeObject* ___PLAYER_ANGLE_33;
	float ___PLAYER_ANGLE_33_val;
	RuntimeObject* ___DRKL1TEX_42;
	RuntimeObject* ___MY_44;
	RuntimeObject* ___MY_47;
	RuntimeObject* ___MY_50;
	RuntimeObject* ___BULLET_51;
	RuntimeObject* ___MY_53;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_57;
	float ___temp_58;
	RuntimeObject* ___MY_61;
	float ___temp_62;
	RuntimeObject* ___MY_64;
	RuntimeObject* ___MY_66;
	RuntimeObject* ___MY_68;
	float ___temp_69;
	RuntimeObject* ___PLAYER_ANGLE_70;
	float ___PLAYER_ANGLE_70_val;
	RuntimeObject* ___DRKL1TEX_79;
	RuntimeObject* ___MY_81;
	RuntimeObject* ___MY_84;
	RuntimeObject* ___MY_87;
	RuntimeObject* ___BULLET_88;
	RuntimeObject* ___MY_90;
};
struct DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SHOOT_FAC_1;
	float ___SHOOT_FAC_1_val;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___HIT_3;
	RuntimeObject* ___EXPLOSION_ON_7;
	float ___EXPLOSION_ON_7_val;
	RuntimeObject* ___DISTX_8;
	RuntimeObject* ___DISTX_9;
	float ___DISTX_9_val;
	RuntimeObject* ___MY_12;
	float ___temp_13;
	RuntimeObject* ___EXPLOSION_CENTER_16;
	float ___temp_17;
	RuntimeObject* ___MY_22;
	float ___temp_23;
	RuntimeObject* ___EXPLOSION_CENTER_26;
	float ___temp_27;
	RuntimeObject* ___MY_32;
	float ___temp_33;
	RuntimeObject* ___EXPLOSION_CENTER_36;
	float ___temp_37;
	RuntimeObject* ___MY_42;
	float ___temp_43;
	RuntimeObject* ___EXPLOSION_CENTER_46;
	float ___temp_47;
	RuntimeObject* ___DISTX_49;
	float ___DISTX_49_val;
	RuntimeObject* ___DISTX_50;
	RuntimeObject* ___DISTX_52;
	float ___DISTX_52_val;
	RuntimeObject* ___EXPLOSION_ON_54;
	float ___EXPLOSION_ON_54_val;
	RuntimeObject* ___MY_57;
	float ___temp_58;
	RuntimeObject* ___MY_60;
	RuntimeObject* ___MY_62;
	float ___temp_63;
	RuntimeObject* ___MY_65;
	float ___temp_66;
	RuntimeObject* ___SHOOT_FAC_68;
	float ___SHOOT_FAC_68_val;
	RuntimeObject* ___MY_79;
	float ___temp_80;
	RuntimeObject* ___MY_84;
	RuntimeObject* ___temp_85;
	RuntimeObject* ___DRKL5TEX_87;
	RuntimeObject* ___MY_89;
	RuntimeObject* ___MY_92;
	RuntimeObject* ___MY_95;
	RuntimeObject* ___MY_98;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___DRKLHIT_100;
	RuntimeObject* ___MY_102;
	RuntimeObject* ___DRKL_TEX_103;
	RuntimeObject* ___MY_105;
	RuntimeObject* ___MY_108;
	float ___temp_109;
	RuntimeObject* ___MY_112;
	float ___temp_113;
	RuntimeObject* ___MY_116;
};
struct DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___DISTX_0;
	RuntimeObject* ___DISTX_1;
	float ___DISTX_1_val;
	RuntimeObject* ___MY_4;
	float ___temp_5;
	RuntimeObject* ___EXPLOSION_CENTER_8;
	float ___temp_9;
	RuntimeObject* ___MY_14;
	float ___temp_15;
	RuntimeObject* ___EXPLOSION_CENTER_18;
	float ___temp_19;
	RuntimeObject* ___MY_24;
	float ___temp_25;
	RuntimeObject* ___EXPLOSION_CENTER_28;
	float ___temp_29;
	RuntimeObject* ___MY_34;
	float ___temp_35;
	RuntimeObject* ___EXPLOSION_CENTER_38;
	float ___temp_39;
	RuntimeObject* ___DISTX_41;
	float ___DISTX_41_val;
	RuntimeObject* ___DISTX_42;
	RuntimeObject* ___DISTZ_43;
	RuntimeObject* ___DISTZ_44;
	float ___DISTZ_44_val;
	RuntimeObject* ___MY_46;
	float ___temp_47;
	RuntimeObject* ___EXPLOSION_CENTER_50;
	float ___temp_51;
	RuntimeObject* ___DISTX_53;
	float ___DISTX_53_val;
	RuntimeObject* ___MY_56;
	RuntimeObject* ___MY_59;
	RuntimeObject* ___MY_62;
	RuntimeObject* ___MY_65;
	RuntimeObject* ___MY_68;
	RuntimeObject* ___VANISHFORGOOD_69;
	RuntimeObject* ___MY_71;
	RuntimeObject* ___MY_74;
	RuntimeObject* ___DRKL0ATEX_75;
	RuntimeObject* ___MY_77;
	RuntimeObject* ___MY_80;
	RuntimeObject* ___MY_83;
};
struct DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_6;
	float ___temp_7;
	RuntimeObject* ___MY_10;
	RuntimeObject* ___DRKLFOLLOWATTACK_11;
	RuntimeObject* ___MY_13;
	RuntimeObject* ___CYCLEDRKLSHOOT_14;
	RuntimeObject* ___MY_16;
	RuntimeObject* ___ACTORJUMP_17;
	RuntimeObject* ___MY_19;
	RuntimeObject* ___MY_22;
	RuntimeObject* ___DRKL2TEX_23;
	RuntimeObject* ___MY_25;
	RuntimeObject* ___DRKL2ATEX_28;
	RuntimeObject* ___MY_30;
	RuntimeObject* ___MY_33;
	RuntimeObject* ___MY_36;
	RuntimeObject* ___MY_39;
	RuntimeObject* ___MOVE_40;
	RuntimeObject* ___MY_42;
};
struct DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_6;
	float ___temp_7;
	RuntimeObject* ___MY_10;
	float ___temp_11;
	RuntimeObject* ___MY_14;
	float ___temp_15;
	RuntimeObject* ___FOLLOW_16;
	RuntimeObject* ___MY_18;
	RuntimeObject* ___temp_19;
	RuntimeObject* ___MY_22;
	float ___temp_23;
	RuntimeObject* ___DRKLJUMP_24;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___DRKLFOLLOWATTACK_27;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___DRKLHEAR_30;
	RuntimeObject* ___MY_32;
	RuntimeObject* ___DRKLHIT_33;
	RuntimeObject* ___MY_35;
	RuntimeObject* ___MY_38;
	RuntimeObject* ___MY_41;
	RuntimeObject* ___DRKL0UPTEX_42;
	RuntimeObject* ___MY_44;
	RuntimeObject* ___MY_47;
	RuntimeObject* ___BULLET_48;
	RuntimeObject* ___MY_50;
};
struct DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___DRKLFOLLOWATTACK_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLEDRKLSHOOT_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___DRKLHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___DRKL3TEX_18;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___FOLLOW_24;
	RuntimeObject* ___MY_26;
};
struct DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___DRKL05SND_2;
	RuntimeObject* ___MY_4;
	RuntimeObject* ___DRKL02SND_7;
	RuntimeObject* ___MY_9;
};
struct DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___WAITTIME_0;
	RuntimeObject* ___WAITTIME_1;
	float ___WAITTIME_1_val;
	RuntimeObject* ___RIGHTTURNDRKL_11;
	RuntimeObject* ___RIGHTTURNDRKL_12;
	float ___RIGHTTURNDRKL_12_val;
	RuntimeObject* ___RIGHTTURNDRKL_14;
	float ___RIGHTTURNDRKL_14_val;
	RuntimeObject* ___RIGHTTURNDRKL_20;
	float ___RIGHTTURNDRKL_20_val;
	RuntimeObject* ___RIGHTTURNDRKL_24;
	float ___RIGHTTURNDRKL_24_val;
};
struct DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_6;
	float ___temp_7;
	RuntimeObject* ___MY_10;
	RuntimeObject* ___DRKLJUMP_11;
	RuntimeObject* ___MY_13;
	RuntimeObject* ___DRKLFOLLOWATTACK_14;
	RuntimeObject* ___MY_16;
	RuntimeObject* ___CYCLEDRKLATTACK_17;
	RuntimeObject* ___MY_19;
	RuntimeObject* ___DRKLHIT_20;
	RuntimeObject* ___MY_22;
	RuntimeObject* ___MY_25;
	RuntimeObject* ___MY_28;
	RuntimeObject* ___MY_31;
	RuntimeObject* ___DRKL0TEX_32;
	RuntimeObject* ___MY_34;
	RuntimeObject* ___MY_37;
	RuntimeObject* ___MY_40;
};
struct FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___DISTZ_0;
	RuntimeObject* ___DISTZ_1;
	float ___DISTZ_1_val;
	RuntimeObject* ___PLAYER_X_3;
	float ___PLAYER_X_3_val;
	RuntimeObject* ___MY_6;
	float ___temp_7;
	RuntimeObject* ___DISTY_9;
	RuntimeObject* ___DISTY_10;
	float ___DISTY_10_val;
	RuntimeObject* ___PLAYER_Y_12;
	float ___PLAYER_Y_12_val;
	RuntimeObject* ___MY_15;
	float ___temp_16;
	RuntimeObject* ___DISTX_18;
	RuntimeObject* ___DISTX_19;
	float ___DISTX_19_val;
	RuntimeObject* ___DISTZ_21;
	float ___DISTZ_21_val;
	RuntimeObject* ___DISTZ_23;
	float ___DISTZ_23_val;
	RuntimeObject* ___DISTY_27;
	float ___DISTY_27_val;
	RuntimeObject* ___DISTY_29;
	float ___DISTY_29_val;
	RuntimeObject* ___DISTX_31;
	float ___DISTX_31_val;
	RuntimeObject* ___DISTX_32;
	RuntimeObject* ___DISTX_34;
	float ___DISTX_34_val;
	RuntimeObject* ___DISTY_35;
	RuntimeObject* ___DISTY_36;
	float ___DISTY_36_val;
	RuntimeObject* ___DISTY_37;
	float ___DISTY_37_val;
	RuntimeObject* ___DISTX_39;
	float ___DISTX_39_val;
	RuntimeObject* ___DISTY_40;
	float ___DISTY_40_val;
	RuntimeObject* ___MY_42;
	RuntimeObject* ___DISTZ_44;
	float ___DISTZ_44_val;
	RuntimeObject* ___MY_46;
	RuntimeObject* ___MY_48;
	float ___temp_49;
	RuntimeObject* ___PI_50;
	float ___PI_50_val;
	RuntimeObject* ___MY_53;
	float ___temp_54;
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
struct LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_6;
	RuntimeObject* ___MY_9;
	RuntimeObject* ___MY_12;
	RuntimeObject* ___MY_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___temp_18;
	RuntimeObject* ___WATER_REGION_22;
	RuntimeObject* ___temp_23;
	RuntimeObject* ___MY_26;
};
struct LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___DISTZ_4;
	RuntimeObject* ___DISTZ_5;
	float ___DISTZ_5_val;
	RuntimeObject* ___FLOOR_HGT_6;
	float ___FLOOR_HGT_6_val;
	RuntimeObject* ___MY_9;
	float ___temp_10;
	RuntimeObject* ___DISTZ_12;
	float ___DISTZ_12_val;
	RuntimeObject* ___DISTZ_14;
	float ___DISTZ_14_val;
	RuntimeObject* ___SHOOT_SECTOR_16;
	RuntimeObject* ___MY_19;
	float ___temp_20;
	RuntimeObject* ___SHOOT_SECTOR_22;
	RuntimeObject* ___SHOOT_RANGE_24;
	RuntimeObject* ___SHOOT_Y_26;
	RuntimeObject* ___MY_27;
	RuntimeObject* ___HIT_DIST_29;
	float ___HIT_DIST_29_val;
	RuntimeObject* ___MY_32;
	RuntimeObject* ___MY_35;
	float ___temp_36;
	RuntimeObject* ___MY_39;
};
struct PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_6;
	float ___temp_7;
	RuntimeObject* ___MY_10;
	RuntimeObject* ___MY_12;
	RuntimeObject* ___temp_13;
	RuntimeObject* ___WATER_REGION_17;
	RuntimeObject* ___temp_18;
	RuntimeObject* ___MY_21;
	RuntimeObject* ___WATER_REGION_24;
	float ___temp_25;
	RuntimeObject* ___WATER_REGION_28;
	float ___temp_29;
	RuntimeObject* ___STEPCOUNTER_31;
	RuntimeObject* ___MY_33;
	float ___temp_34;
	RuntimeObject* ___ANGLEOUT_35;
	RuntimeObject* ___ANGLEOUT_36;
	float ___ANGLEOUT_36_val;
	RuntimeObject* ___DISTY_37;
	RuntimeObject* ___DISTX_38;
	RuntimeObject* ___DISTX_39;
	float ___DISTX_39_val;
	RuntimeObject* ___ANGLEOUT_40;
	float ___ANGLEOUT_40_val;
	RuntimeObject* ___HALF_PI_42;
	float ___HALF_PI_42_val;
	RuntimeObject* ___DISTX_43;
	float ___DISTX_43_val;
	RuntimeObject* ___DISTX_44;
	RuntimeObject* ___PROBETNG_46;
	RuntimeObject* ___PROBETNG_48;
	float ___temp_49;
	RuntimeObject* ___MY_51;
	float ___temp_52;
	RuntimeObject* ___DISTX_54;
	float ___DISTX_54_val;
	RuntimeObject* ___PROBETNG_58;
	RuntimeObject* ___PROBETNG_60;
	float ___temp_61;
	RuntimeObject* ___MY_63;
	float ___temp_64;
	RuntimeObject* ___DISTY_66;
	float ___DISTY_66_val;
	RuntimeObject* ___PROBETNG_71;
	RuntimeObject* ___WATER_REGION_73;
	float ___temp_74;
	RuntimeObject* ___PROBETNG_76;
	RuntimeObject* ___PROBETNG_79;
	RuntimeObject* ___PROBETNG_81;
	RuntimeObject* ___temp_82;
	RuntimeObject* ___DISTZ_84;
	RuntimeObject* ___DISTZ_85;
	float ___DISTZ_85_val;
	RuntimeObject* ___P_REGION_87;
	float ___temp_88;
	RuntimeObject* ___WATER_REGION_91;
	float ___temp_92;
	RuntimeObject* ___DISTZ_94;
	float ___DISTZ_94_val;
	RuntimeObject* ___STEPCOUNTER_96;
	float ___STEPCOUNTER_96_val;
	RuntimeObject* ___ANGLESTEP_97;
	RuntimeObject* ___ANGLESTEP_98;
	float ___ANGLESTEP_98_val;
	RuntimeObject* ___ANGLESTEP_100;
	float ___ANGLESTEP_100_val;
	RuntimeObject* ___ANGLESTEP_102;
	float ___ANGLESTEP_102_val;
	RuntimeObject* ___STEPCOUNTER_104;
	float ___STEPCOUNTER_104_val;
	RuntimeObject* ___STEPCOUNTER_105;
	RuntimeObject* ___ANGLEOUT_106;
	RuntimeObject* ___ANGLEOUT_107;
	float ___ANGLEOUT_107_val;
	RuntimeObject* ___MY_109;
	float ___temp_110;
	RuntimeObject* ___STEPCOUNTER_112;
	float ___STEPCOUNTER_112_val;
	RuntimeObject* ___ANGLESTEP_114;
	float ___ANGLESTEP_114_val;
	RuntimeObject* ___BULLET_115;
	RuntimeObject* ___MY_117;
	RuntimeObject* ___ANGLEOUT_118;
	float ___ANGLEOUT_118_val;
	RuntimeObject* ___MY_120;
};
struct REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PI_0;
	float ___PI_0_val;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_5;
};
struct TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___TROPSHOOT_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___TROPHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___TROP3ATEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
};
struct TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___CYCLETROPBACK_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___TROPHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___TROP1TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___BULLET_27;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_31;
	RuntimeObject* ___MY_33;
	float ___temp_34;
	RuntimeObject* ___MY_36;
	float ___temp_37;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_45;
	float ___temp_46;
};
struct TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___TROP9TEX_18;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
	RuntimeObject* ___MY_35;
	RuntimeObject* ___PICKTROPAMMO_40;
	RuntimeObject* ___MY_42;
	RuntimeObject* ___MY_45;
	RuntimeObject* ___PICKTROPARMOUR_46;
	RuntimeObject* ___MY_48;
	RuntimeObject* ___MY_51;
};
struct TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___TROPDEAD_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	float ___temp_18;
	RuntimeObject* ___MY_21;
	RuntimeObject* ___TROP8TEX_22;
	RuntimeObject* ___MY_24;
	RuntimeObject* ___MY_27;
	RuntimeObject* ___MY_30;
};
struct TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___KEY2TNG_1;
	RuntimeObject* ___KEY2TNG_3;
	float ___temp_4;
	RuntimeObject* ___MY_6;
	float ___temp_7;
	RuntimeObject* ___KEY2TNG_9;
	RuntimeObject* ___KEY2TNG_11;
	float ___temp_12;
	RuntimeObject* ___MY_14;
	float ___temp_15;
	RuntimeObject* ___KEY2TNG_18;
	RuntimeObject* ___KEY2TNG_20;
	RuntimeObject* ___KEY2TNG_22;
	float ___temp_23;
	RuntimeObject* ___MY_25;
	float ___temp_26;
	RuntimeObject* ___KEY2TNG_31;
	RuntimeObject* ___KEY2TNG_34;
};
struct TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___TROPHIDE_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLETROPHIDE_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___TROPHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___TROP1TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_31;
	RuntimeObject* ___MY_33;
	float ___temp_34;
	RuntimeObject* ___MY_36;
	float ___temp_37;
	RuntimeObject* ___BULLET_46;
	RuntimeObject* ___MY_48;
};
struct TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLETROPATTACK_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___TROPHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___TROP1TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
};
struct TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLETROPSHOOT_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___TROPHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___TROPATEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___BULLET_27;
	RuntimeObject* ___MY_29;
};
struct TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLETROPWARNING_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___TROPHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___TROP1TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___BULLET_27;
	RuntimeObject* ___MY_29;
};
struct TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___TROPESCAPE_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___TROPHIDE_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___TROPHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	float ___temp_24;
	RuntimeObject* ___MY_27;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_31;
	float ___temp_32;
	RuntimeObject* ___MY_34;
	float ___temp_35;
	RuntimeObject* ___TROP1TEX_44;
	RuntimeObject* ___MY_46;
	RuntimeObject* ___MY_49;
	RuntimeObject* ___MY_52;
	RuntimeObject* ___BULLET_53;
	RuntimeObject* ___MY_55;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_59;
	float ___temp_60;
	RuntimeObject* ___MY_63;
	float ___temp_64;
	RuntimeObject* ___MY_66;
	RuntimeObject* ___MY_68;
	RuntimeObject* ___MY_70;
	float ___temp_71;
	RuntimeObject* ___MY_73;
	float ___temp_74;
	RuntimeObject* ___TROP1TEX_83;
	RuntimeObject* ___MY_85;
	RuntimeObject* ___MY_88;
	RuntimeObject* ___MY_91;
	RuntimeObject* ___BULLET_92;
	RuntimeObject* ___MY_94;
};
struct TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SHOOT_FAC_1;
	float ___SHOOT_FAC_1_val;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___HIT_3;
	RuntimeObject* ___EXPLOSION_ON_5;
	float ___EXPLOSION_ON_5_val;
	RuntimeObject* ___DISTX_6;
	RuntimeObject* ___DISTX_7;
	float ___DISTX_7_val;
	RuntimeObject* ___MY_10;
	float ___temp_11;
	RuntimeObject* ___EXPLOSION_CENTER_14;
	float ___temp_15;
	RuntimeObject* ___MY_20;
	float ___temp_21;
	RuntimeObject* ___EXPLOSION_CENTER_24;
	float ___temp_25;
	RuntimeObject* ___MY_30;
	float ___temp_31;
	RuntimeObject* ___EXPLOSION_CENTER_34;
	float ___temp_35;
	RuntimeObject* ___MY_40;
	float ___temp_41;
	RuntimeObject* ___EXPLOSION_CENTER_44;
	float ___temp_45;
	RuntimeObject* ___DISTX_47;
	float ___DISTX_47_val;
	RuntimeObject* ___DISTX_48;
	RuntimeObject* ___DISTX_50;
	float ___DISTX_50_val;
	RuntimeObject* ___EXPLOSION_ON_52;
	float ___EXPLOSION_ON_52_val;
	RuntimeObject* ___MY_55;
	float ___temp_56;
	RuntimeObject* ___MY_58;
	RuntimeObject* ___MY_60;
	float ___temp_61;
	RuntimeObject* ___MY_63;
	float ___temp_64;
	RuntimeObject* ___SHOOT_FAC_66;
	float ___SHOOT_FAC_66_val;
	RuntimeObject* ___DISTX_71;
	float ___DISTX_71_val;
	RuntimeObject* ___MY_76;
	RuntimeObject* ___MY_78;
	float ___temp_79;
	RuntimeObject* ___MY_81;
	float ___temp_82;
	RuntimeObject* ___SHOOT_FAC_84;
	float ___SHOOT_FAC_84_val;
	RuntimeObject* ___MY_95;
	float ___temp_96;
	RuntimeObject* ___MY_100;
	RuntimeObject* ___temp_101;
	RuntimeObject* ___MY_105;
	RuntimeObject* ___MY_108;
	RuntimeObject* ___MY_111;
	RuntimeObject* ___TROP5TEX_114;
	RuntimeObject* ___MY_116;
	RuntimeObject* ___TROP05SND_117;
	RuntimeObject* ___MY_119;
	RuntimeObject* ___TROP5ATEX_120;
	RuntimeObject* ___MY_122;
	RuntimeObject* ___TROP11SND_123;
	RuntimeObject* ___MY_125;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___TROPESCAPE_127;
	RuntimeObject* ___MY_129;
	RuntimeObject* ___TROPHIDE_130;
	RuntimeObject* ___MY_132;
	RuntimeObject* ___TROPHIT_133;
	RuntimeObject* ___MY_135;
	RuntimeObject* ___TROP_TEX_136;
	RuntimeObject* ___MY_138;
	RuntimeObject* ___MY_141;
	float ___temp_142;
	RuntimeObject* ___MY_145;
	float ___temp_146;
	RuntimeObject* ___MY_149;
};
struct TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___DISTX_0;
	RuntimeObject* ___DISTX_1;
	float ___DISTX_1_val;
	RuntimeObject* ___MY_4;
	float ___temp_5;
	RuntimeObject* ___EXPLOSION_CENTER_8;
	float ___temp_9;
	RuntimeObject* ___MY_14;
	float ___temp_15;
	RuntimeObject* ___EXPLOSION_CENTER_18;
	float ___temp_19;
	RuntimeObject* ___MY_24;
	float ___temp_25;
	RuntimeObject* ___EXPLOSION_CENTER_28;
	float ___temp_29;
	RuntimeObject* ___MY_34;
	float ___temp_35;
	RuntimeObject* ___EXPLOSION_CENTER_38;
	float ___temp_39;
	RuntimeObject* ___DISTX_41;
	float ___DISTX_41_val;
	RuntimeObject* ___DISTX_42;
	RuntimeObject* ___DISTZ_43;
	RuntimeObject* ___DISTZ_44;
	float ___DISTZ_44_val;
	RuntimeObject* ___MY_46;
	float ___temp_47;
	RuntimeObject* ___EXPLOSION_CENTER_50;
	float ___temp_51;
	RuntimeObject* ___DISTX_53;
	float ___DISTX_53_val;
	RuntimeObject* ___MY_56;
	RuntimeObject* ___MY_59;
	RuntimeObject* ___MY_62;
	RuntimeObject* ___MY_65;
	RuntimeObject* ___MY_68;
	RuntimeObject* ___VANISHFORGOOD_69;
	RuntimeObject* ___MY_71;
	RuntimeObject* ___MY_74;
	RuntimeObject* ___TROP0ATEX_75;
	RuntimeObject* ___MY_77;
	RuntimeObject* ___MY_80;
	RuntimeObject* ___MY_83;
	RuntimeObject* ___MY_86;
	float ___temp_87;
};
struct TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_6;
	float ___temp_7;
	RuntimeObject* ___MY_10;
	float ___temp_11;
	RuntimeObject* ___MY_14;
	float ___temp_15;
	RuntimeObject* ___MY_18;
	RuntimeObject* ___MY_21;
	RuntimeObject* ___CYCLETROPATTACK_22;
	RuntimeObject* ___MY_24;
	RuntimeObject* ___TROPHIT_25;
	RuntimeObject* ___MY_27;
	RuntimeObject* ___MY_30;
	RuntimeObject* ___MY_33;
	RuntimeObject* ___MY_36;
	RuntimeObject* ___TROP0TEX_37;
	RuntimeObject* ___MY_39;
	RuntimeObject* ___MY_42;
	RuntimeObject* ___MY_45;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_49;
	float ___temp_50;
};
struct TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_6;
	float ___temp_7;
	RuntimeObject* ___MY_10;
	float ___temp_11;
	RuntimeObject* ___FOLLOW_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___temp_15;
	RuntimeObject* ___MY_18;
	float ___temp_19;
	RuntimeObject* ___MY_22;
	RuntimeObject* ___MY_25;
	RuntimeObject* ___TROPSEARCH_26;
	RuntimeObject* ___MY_28;
	RuntimeObject* ___TROPHIT_29;
	RuntimeObject* ___MY_31;
	RuntimeObject* ___MY_34;
	RuntimeObject* ___MY_37;
	RuntimeObject* ___MY_40;
	RuntimeObject* ___TROPATEX_41;
	RuntimeObject* ___MY_43;
	RuntimeObject* ___MY_46;
	RuntimeObject* ___BULLET_47;
	RuntimeObject* ___MY_49;
	RuntimeObject* ___MY_52;
	float ___temp_53;
	RuntimeObject* ___TROPFOLLOWATTACK_54;
	RuntimeObject* ___MY_56;
};
struct TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___CYCLETROPATTACK_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___TROPHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___TROPATEX_24;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___BULLET_30;
	RuntimeObject* ___MY_32;
};
struct TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLETROPSHOOT_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___TROPHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___TROP3TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___SHOOT_SECTOR_28;
	RuntimeObject* ___TROPSHOOTFACTOR_29;
	float ___TROPSHOOTFACTOR_29_val;
	RuntimeObject* ___SHOOT_FAC_30;
	RuntimeObject* ___SHOOT_RANGE_32;
	RuntimeObject* ___SHOOT_Y_34;
	RuntimeObject* ___MY_35;
	RuntimeObject* ___HIT_DIST_37;
	float ___HIT_DIST_37_val;
	RuntimeObject* ___RESULT_38;
	float ___RESULT_38_val;
	RuntimeObject* ___PLAYER_RESULT_39;
};
struct TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___RANDOMTROP_1;
	float ___RANDOMTROP_1_val;
	RuntimeObject* ___RANDOMTROP_2;
	RuntimeObject* ___RANDOMTROP_4;
	float ___RANDOMTROP_4_val;
	RuntimeObject* ___RANDOMTROP_6;
	float ___RANDOMTROP_6_val;
	RuntimeObject* ___RANDOMTROP_8;
	float ___RANDOMTROP_8_val;
	RuntimeObject* ___TROP06SND_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___TROP12SND_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___TROP10SND_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___TROP03SND_18;
	RuntimeObject* ___MY_20;
};
struct TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___WAITTIME_0;
	RuntimeObject* ___WAITTIME_1;
	float ___WAITTIME_1_val;
	RuntimeObject* ___RIGHTTURNTROP_11;
	RuntimeObject* ___RIGHTTURNTROP_12;
	float ___RIGHTTURNTROP_12_val;
	RuntimeObject* ___RIGHTTURNTROP_14;
	float ___RIGHTTURNTROP_14_val;
	RuntimeObject* ___RIGHTTURNTROP_20;
	float ___RIGHTTURNTROP_20_val;
	RuntimeObject* ___RIGHTTURNTROP_24;
	float ___RIGHTTURNTROP_24_val;
};
struct TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_6;
	float ___temp_7;
	RuntimeObject* ___MY_10;
	RuntimeObject* ___MY_13;
	RuntimeObject* ___MY_16;
	RuntimeObject* ___CYCLETROPATTACK_17;
	RuntimeObject* ___MY_19;
	RuntimeObject* ___TROPHIT_20;
	RuntimeObject* ___MY_22;
	RuntimeObject* ___MY_25;
	RuntimeObject* ___MY_28;
	RuntimeObject* ___MY_31;
	RuntimeObject* ___MY_34;
	RuntimeObject* ___TROP0TEX_35;
	RuntimeObject* ___MY_37;
	RuntimeObject* ___MY_40;
	RuntimeObject* ___MY_43;
};
struct TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___CYCLETROPATTACK_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___TROPHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___TROP1TEX_27;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
	RuntimeObject* ___BULLET_33;
	RuntimeObject* ___MY_35;
};
struct TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___TROPBACKOFF_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___TROPHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___TROP7TEX_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___TROP7ATEX_20;
	RuntimeObject* ___MY_22;
	RuntimeObject* ___MY_24;
	RuntimeObject* ___temp_25;
	RuntimeObject* ___RANDOMTROP_28;
	float ___RANDOMTROP_28_val;
	RuntimeObject* ___RANDOMTROP_29;
	RuntimeObject* ___RANDOMTROP_31;
	float ___RANDOMTROP_31_val;
	RuntimeObject* ___RANDOMTROP_33;
	float ___RANDOMTROP_33_val;
	RuntimeObject* ___TROP07SND_34;
	RuntimeObject* ___TROP_TEX_36;
	RuntimeObject* ___TROP03SND_37;
	RuntimeObject* ___TROP_TEX_39;
	RuntimeObject* ___TROP02SND_40;
	RuntimeObject* ___TROP_TEX_42;
	RuntimeObject* ___MY_45;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_49;
	float ___temp_50;
	RuntimeObject* ___MY_52;
	RuntimeObject* ___MY_54;
	float ___temp_55;
	RuntimeObject* ___MY_57;
	float ___temp_58;
	RuntimeObject* ___MY_64;
	RuntimeObject* ___MY_66;
	float ___temp_67;
	RuntimeObject* ___MY_69;
	float ___temp_70;
};
struct TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_5;
};
struct TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___MY_5;
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



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLIMPLODE_set_MY_mA60DF56A6221BAA028054D249E0CE6A27E8DD9C0_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLIMPLODE_set_THERE_mFA4FA3FA15F4AD4AA8B529AF1B8A51713D4F0D9A_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLIMPLODE_set__world_mC7FB408ACB991F36A88A61B4FB5907D9767776F9_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_Sqrt_mC66300CAE9A1433A25EE41C5837D731B05AABD25 (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAMREACT__ctor_mB0794040DFC34B2C1BE7A9198550A45C59AA4C17 (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLIMPLODE_get_THERE_m7B24A82DC5E62C0FCA3DE1227CC5161D770B5932_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIT_set_MY_mBB5B44F1319531E94DB94CB466F6D1A6EA6B5F05_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIT_set_THERE_m601B8A6756BF605C75AEEC02E2D00E4FC1BD9247_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIT_set__world_m73279FFFA8C5B874F0F98E259EEEF07960C7D2CF_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15 (RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLIMPLODE__ctor_m6904B66B114CD47E7E17489C705C5570CF6A0574 (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIT_get_THERE_mF07DC176E747CCDAF80E142F58132AF704DE4756_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3 (int32_t ___0_frames, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIT_set_Current_m6211B90EE722A51BF2240F34BDD207C49C4BD982_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIDE__ctor_m5E6B1C3472D82E73A747CA60385EC1FA626813D0 (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK__ctor_m321A738364A5B7E7FCE9F3684787C52F7C3B76B1 (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDIE__ctor_m535A1D8E9811F289EB2C79D78AF3E1E92E8AF675 (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTURN__ctor_m1B0F49541BC45C24C4AC8F92D90601ADB0BC8E29 (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK_set_MY_mC7CDC80D6BC4E0A61DEDA2C579B518886DBAA79D_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK_set_THERE_mB492831F743B7CD260C1989FE2FD9AF46CB6CE7E_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK_set__world_m2DA7A7B9846E14D46F43B379712A9D8C62B8B5D0_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7 (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLATTACK_get_THERE_mB866B7DE6A1B9C84B0815AE1C81BB864E7D0E8C2_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTALK__ctor_mEF3F4C10A5FEAF982904F805F45E4E0EA90F6ECF (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLOOKFOR__ctor_m1F9E365D4BF8B79F3F2C51E712437974A98C1C97 (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE_set_MY_m1AF7239903E3BED01F7F8B41DECFE6F8E7A26F5B_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE_set_THERE_mC35B4046843CD7EF7F1BDEE1C209833A636A82F5_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE_set__world_m4446959BB64074ACF110B1B48C696FAE264D9B68_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLHIDE_get_THERE_m2A2C5A0E040AC4B239CDE47D31E4758B7A93D3D8_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLHIDE_get__world_mB1B84BB9BE77F5B40DFE6013D739CC1BABD31BCB_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934 (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT_set_MY_m8F8E205563CF847B7EEA807F94BE059BCE2219FE_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT_set_THERE_m9273C88C05888334CB8B7F8CA30624F894830CEA_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT_set__world_mDE5F269A53548393E8F8D9D584C03BCE179D3C46_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLSHOOT_get_THERE_m8EEDBA6001E90F4294A7BDD6947477F5F9BB4A62_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWAIT__ctor_m8BAB37DB1D838558EB3A52AE4EC89D99D3DE1705 (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLJUMP__ctor_mB9100E5430292974FA97B99E1868021FD8C14597 (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYERDELAY__ctor_m0514506CB908F8A27C7CFF9BB10718987C144B25 (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSHOOT__ctor_m5136D2F1894C947482B2D151A5CC19D9E49AD793 (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTALK_set_MY_m40FC08BD28EC35E1D9C41F1BFC55C0A06C310E53_inline (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTALK_set_THERE_m18E29127F4E0AD0ABD5C5CB6DA2D4FA6FF47DC77_inline (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTALK_set__world_mC2AF6004BA8656A1933CF1FD15B4FA061FEF8E63_inline (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLTALK_get__world_m54BE2FFCD883BCACB977F285DE524D5ABBD8D705_inline (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLTALK_get_MY_m5ABFF477E13953D8664FCC360EAC9A0C0A970B8A_inline (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTURN_set_MY_m18E64DEBB4AC625BC5FAAFE7DADE16BE875F815B_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTURN_set_THERE_m622952EABEDB78239D74BFE9F34F9CD884A657B2_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTURN_set__world_m087C67F437849E8F439AAA18F5760784E28DB3A3_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLISTEN__ctor_m4CD264F331299647343587EE3463C814109E8606 (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPTURN_get_MY_m2F8B05D8412A55C6453901606B835E2D974E00AD_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPTURN_get_THERE_m93B1DDC77828B6037897E4184F48ACA6F42B8B4C_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TURNRIGHT__ctor_mAD82B12963F20823A2CFE3E007E94496A56C8353 (TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TURNLEFT__ctor_m361003A6CB36C1059716F979D3822771D39CD395 (TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPBACKOFF_set_MY_m3E90C92D91BA12CACDC3335CD30D57AC33CE31DD_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPBACKOFF_set_THERE_m7F435331B5FEEE21ACE560CA6BB136ADD6093639_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPBACKOFF_set__world_m881B48783EF4743F99AECED276EA3055808F1F37_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPBACKOFF_get_THERE_m66653026948168AC8ECCB1C5914991453EDDBF23_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPBACKOFF_set_Current_m268B3B18F8D24E8DB4648330A9E541105A2135CE_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0 (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWAIT__ctor_mD89D55D997B43B342C3F4F4290102CB1140018A0 (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWAIT_set_MY_mEE81CBD84566679B64EC49FFA9B56C49630CC8AD_inline (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWAIT_set_THERE_m1AF0630C79B1A101291B21BF3BD34C236B490D98_inline (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWAIT_set__world_mE56DC706BC8D9D7E9D9E76D611875F2864661BB3_inline (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWAIT_get__world_m27A5C453A36918D97CA95B9BED95F78D3BBCC01F_inline (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWANDER_set_MY_m63657DD72ADDF9EB6381222B1D8A7BE2CDABDEFD_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWANDER_set_THERE_mC03D66A83A5A82C9282DAE2F54DA2BEEEA7ACCCA_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWANDER_set__world_m0A4C51CBE46B99DA5117DA1D534DA9DFEFDA5DD8_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWANDER_get__world_m8DB68B0D5A60DBEDDE9D31E66E9AF1335684EF28_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWANDER_get_THERE_mF476ADD0278E091867E0C969F885CD71D6487FC0_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSEARCH_set_MY_m2AE31C563E9E971EC3C0C5D91FA2378B91ECC852_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSEARCH_set_THERE_m248469948A404E3261117D2B3D82CF6F0E1B8F57_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSEARCH_set__world_mC8332D4232D3EC2A14F47CF17726A4AD5FB99111_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSEARCH_get__world_m3939099B8C89208632B04C3F08CE6FB3C62FF506_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSEARCH_get_THERE_m6B171B0F01B490899AF1EF27E5EB8EA5AED53B62_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIDE_set_MY_mFA955FC06431F1185366CD0D57B4CBF70F2BE2CD_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIDE_set_THERE_m6DC222EEED21F14A176BE4CA024C88CE23968B85_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIDE_set__world_mBE92153B48377B7DE80D9E876E2423FB71FF8E68_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIDE_get_THERE_m66375BD129D0D33B51B9C24296EFEACC0AF72C1D_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIDE_set_Current_mC680764F649AED4113CDEE76C444784366F3C2A2_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK__ctor_m3F9D3BD614C9DFC04F5208E62E147625D29FFE3B (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLISTEN_set_MY_m4E8306AB8BF51A4DF037139402C42B14E4FB3C5C_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLISTEN_set_THERE_m991939E04E5544B45ED1B631F2334AE922856F10_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLISTEN_set__world_mDEEB1269730F3F59923094361C3A8A1A9FF8BF6B_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLISTEN_get__world_m67B210CD1ABC0321F724758C183E81D990B2ECA7_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLISTEN_set_Current_mE317E1372E233F3B142B46E185F2A25DC79FFC20_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWANDER__ctor_m5109BBD108D34C158652B45AD496983B1BF8EE9C (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLISTEN_get_THERE_m33BEE7868B9E543363CC96456A36402DED2835A7_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWARNING_set_MY_m0F71AEB72BC773F3D0BFF1144EA6F8DEDA6269AE_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWARNING_set_THERE_m2FECFCF8741C62D03B6AF74000D7219F85C83D78_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWARNING_set__world_m2FD1850602F215A2F61CC8B16DA73B4AF5E45F54_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWARNING_set_Current_mD85E0027929DCBEDFFDB28EBFA16B43FB774839B_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPBACKOFF__ctor_m55FC4CF40CAD3A9AAD93C9EB785704E86C4E5C19 (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWARNING_get_THERE_mB968973F6F0A1ABC149A96D2A3B7DCD364303F3F_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLOOKFOR_set_MY_m04C451DB15DA350108044753416AE7ECDF0316DC_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLOOKFOR_set_THERE_m89F4737A873C4AF3991D618CC678D39163EE706A_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLOOKFOR_set__world_mE8283792B6A2E60993881F721513D16E9D127F46_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLOOKFOR_get_THERE_m80365F9F59176165ACCFF35D6EC7CD051F702BA6_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLOOKFOR_get__world_m8302FC44BF42E9E999D09B4987CCEFB8DC86A4F5_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOW_set_MY_mECE5C969B2C6324587136175FA3FF3F2A1AFBCC6_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOW_set_THERE_m526C93A3C2B33DBE41A39B872E81C60008281072_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOW_set__world_m5E38EC8940D37D78D40316511693FB1294474650_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOW_get_THERE_m2F78BDE4817C1F64232F63022D28F9DC57845FEA_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK_set_MY_mC2F06C7800C38299D08263BDE029ACA0D99CDF7A_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK_set_THERE_m0A923570207B279803F1056DE52348CBD03A2E63_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK_set__world_mD005958E0D835800347DC4BBB9F7B0A19912F241_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWATTACK_get_THERE_m5BADC4EF19BDA597BD2AA91DC39AE100F3A5930D_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING_set_MY_mBC8C4C8E38C15A9AB523F9B14FA857F842DEF285_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING_set_THERE_m08992DD7F9FA88EC80C614B7F2A0945A554D8F9D_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING_set__world_mF9357EF599B9E629D7845F762E80A3C1BB3DCFE7_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWWARNING_get_THERE_mA02114A2FA33919CA9A82774202CD809D43D1FC9_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPAIM_set_MY_m87C794788EDFE0BD41F224EE97892540CEA4E45C_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPAIM_set_THERE_mF988194FE82CC6CC618ECCAB75DB7106CF9988D5_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPAIM_set__world_m09387C21D2A3209784FD5C2A2AB8CAF8E14187CC_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPAIM_get__world_m14CDC9F872623DAA5D74373B4AC1CB6055F53B28_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPAIM_get_THERE_m907C8821B2E708A7DC5B2DE6318CF3E29E8484F1_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOUT__ctor_m09D0B743C06CEB427D818500ADF8672CA8F9512B (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOOT_set_MY_mAB7B8469C19F42700A0FC1B69BAF66B85EFC6395_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOOT_set_THERE_mDFC7181D7AFFAD0A51C65ED26B83F16009FA8ECF_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOOT_set__world_m92A6A62126C28ADFD707444608DBDEB2C58F6AEC_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOOT_get_THERE_mCBD765A9F6D18D97582FDC3B3DBEC04DDB5CBCCB_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPESCAPE_set_MY_m9E1286CEACC39249EBEA54D7231D9971AB789600_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPESCAPE_set_THERE_m7D7E6BC62B8F0B144342280A4E5A7647B9E0BD94_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPESCAPE_set__world_m96C179320C5132840B84770ACE8377AEA1113F9D_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPESCAPE_get_THERE_m8A48EDB636E1CAB78F32E31DE44AF019B28CD75F_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDEAD_set_MY_m2C66F070F2A33F3832AB8665901D8B4BF32E5D41_inline (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDEAD_set_THERE_mC5F7C130AF34EFE3D68DA7E634E63337F66C8CBA_inline (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDEAD_set__world_m0097A37F7D0162B717C9346B8299ECAECAEDF792_inline (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDEAD_get__world_m51F24BD5E18D2DEA7A00050659816915F968856E_inline (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDIE_set_MY_m7C8DEE834D78AADE45451CFE4066F72ABFD9C4C1_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDIE_set_THERE_m300C46ACA16EECCBD7677991909E58AEB5D2FE05_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDIE_set__world_mE6EBE1913C6A252D896A1D84AA85D59DB69519C4_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDIE_get__world_mE78EF466D24A47BB046B47BF9FE002194842B348_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDROPKEY__ctor_mCCA42503FE736AEF6461FAFF06B0644C8FEFF505 (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDIE_get_THERE_m47A459D931D1BBD34D1E5C3D97A83CF1DBD2D911_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPIMPLODE_set_MY_m6CB5996DEB09D7FD75E7736814E99EFD438AC340_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPIMPLODE_set_THERE_mF925353064508F4663E1159DBFB8ED58DB64C7BC_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPIMPLODE_set__world_mE33F202281ABF5C75B0463F73AC43C405F2EEE92_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPIMPLODE_get_THERE_m0826046ADC9A9C25B1E1332B0E2F1321F5C73738_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIT_set_MY_mCA44711BC7028083AB1B9FF0B4406F1B1585868A_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIT_set_THERE_m7EE9B0CCD55A7AE364C73320AF6A05496C6966C3_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIT_set__world_m5D0D494B704B064F78762307F29F671733897448_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPIMPLODE__ctor_m1251F3B613EDF804FB0C47341A43683B03589021 (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIT_get_THERE_m7882475FDE02BDAEB736845268527543B43A8A61_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIT_set_Current_mBD8C549728528080436908A4D574E46380132652_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIDE__ctor_m77C37A1984BF40C5B9CE28E0295873908592DE23 (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDIE__ctor_m933D4EDFE644DE8FEC5F32050931EC8AEFB73C2E (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTURN__ctor_m3CB8B39CB3C29ED60B67D2AF587241AACB39DBEE (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1 (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLIMPLODE_set_MY_mA60DF56A6221BAA028054D249E0CE6A27E8DD9C0 (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLIMPLODE_get_THERE_m7B24A82DC5E62C0FCA3DE1227CC5161D770B5932 (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLIMPLODE_set_THERE_mFA4FA3FA15F4AD4AA8B529AF1B8A51713D4F0D9A (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLIMPLODE_set__world_mC7FB408ACB991F36A88A61B4FB5907D9767776F9 (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLIMPLODE_get_Current_mD205732E27CEBB5B8330A63812EA01B39AAE9216 (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLIMPLODE_set_Current_mF3BFC4BC0407F97015988FEA65430B1A17FE9335 (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLIMPLODE_Reset_mFC270E66B55F52F1176CE98C48E066BDBB29E3E4 (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLIMPLODE__ctor_m6904B66B114CD47E7E17489C705C5570CF6A0574 (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLIMPLODE__ctor_m415864EB4C0C628BE6FFAC65C200A5770D6D5D31 (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLIMPLODE_set_MY_mA60DF56A6221BAA028054D249E0CE6A27E8DD9C0_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLIMPLODE_set_THERE_mFA4FA3FA15F4AD4AA8B529AF1B8A51713D4F0D9A_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLIMPLODE_set__world_mC7FB408ACB991F36A88A61B4FB5907D9767776F9_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLIMPLODE_MoveNext_mD641E796079CC00C11B3ADD88FCC7C5E6DD68620 (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)217512505));
		__this->___DISTX_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_3, 5, ((int32_t)217512505));
		__this->___DISTX_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_1), (void*)L_4);
		RuntimeObject* L_5 = __this->___DISTX_1;
		NullCheck(L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)231), (bool)1);
		__this->___DISTX_1_val = L_6;
		RuntimeObject* L_7;
		L_7 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_4;
		NullCheck(L_8);
		float L_9;
		L_9 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)195), (bool)1);
		__this->___temp_5 = L_9;
		RuntimeObject* L_10;
		L_10 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_10, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_8), (void*)L_11);
		RuntimeObject* L_12 = __this->___EXPLOSION_CENTER_8;
		NullCheck(L_12);
		float L_13;
		L_13 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)195), (bool)1);
		__this->___temp_9 = L_13;
		RuntimeObject* L_14;
		L_14 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_14;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)195), (bool)1);
		__this->___temp_15 = L_16;
		RuntimeObject* L_17;
		L_17 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_17, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_18 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_18), (void*)L_18);
		RuntimeObject* L_19 = __this->___EXPLOSION_CENTER_18;
		NullCheck(L_19);
		float L_20;
		L_20 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)195), (bool)1);
		__this->___temp_19 = L_20;
		RuntimeObject* L_21;
		L_21 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_24 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_24;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)196), (bool)1);
		__this->___temp_25 = L_23;
		RuntimeObject* L_24;
		L_24 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_28 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_28), (void*)L_25);
		RuntimeObject* L_26 = __this->___EXPLOSION_CENTER_28;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)196), (bool)1);
		__this->___temp_29 = L_27;
		RuntimeObject* L_28;
		L_28 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_34 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_34), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_34;
		NullCheck(L_29);
		float L_30;
		L_30 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)196), (bool)1);
		__this->___temp_35 = L_30;
		RuntimeObject* L_31;
		L_31 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_38 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_38), (void*)L_32);
		RuntimeObject* L_33 = __this->___EXPLOSION_CENTER_38;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)196), (bool)1);
		__this->___temp_39 = L_34;
		RuntimeObject* L_35 = __this->___DISTX_0;
		float L_36 = __this->___temp_5;
		float L_37 = __this->___temp_9;
		float L_38 = __this->___temp_15;
		float L_39 = __this->___temp_19;
		float L_40 = __this->___temp_25;
		float L_41 = __this->___temp_29;
		float L_42 = __this->___temp_35;
		float L_43 = __this->___temp_39;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_36, L_37)), ((float)il2cpp_codegen_subtract(L_38, L_39)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_40, L_41)), ((float)il2cpp_codegen_subtract(L_42, L_43)))))));
		RuntimeObject* L_44;
		L_44 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, 5, ((int32_t)217512505));
		__this->___DISTX_41 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_41), (void*)L_45);
		RuntimeObject* L_46 = __this->___DISTX_41;
		NullCheck(L_46);
		float L_47;
		L_47 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)231), (bool)1);
		__this->___DISTX_41_val = L_47;
		RuntimeObject* L_48;
		L_48 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, 5, ((int32_t)217512505));
		__this->___DISTX_42 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_42), (void*)L_49);
		RuntimeObject* L_50 = __this->___DISTX_42;
		float L_51 = __this->___DISTX_41_val;
		float L_52;
		L_52 = MathUtils_Sqrt_mC66300CAE9A1433A25EE41C5837D731B05AABD25(L_51, NULL);
		NullCheck(L_50);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)231), L_52);
		RuntimeObject* L_53;
		L_53 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)217512507));
		__this->___DISTZ_43 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_43), (void*)L_54);
		RuntimeObject* L_55;
		L_55 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, 5, ((int32_t)217512507));
		__this->___DISTZ_44 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_44), (void*)L_56);
		RuntimeObject* L_57 = __this->___DISTZ_44;
		NullCheck(L_57);
		float L_58;
		L_58 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)231), (bool)1);
		__this->___DISTZ_44_val = L_58;
		RuntimeObject* L_59;
		L_59 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_46 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_46;
		NullCheck(L_60);
		float L_61;
		L_61 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)165), (bool)1);
		__this->___temp_47 = L_61;
		RuntimeObject* L_62;
		L_62 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_50 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_50), (void*)L_63);
		RuntimeObject* L_64 = __this->___EXPLOSION_CENTER_50;
		NullCheck(L_64);
		float L_65;
		L_65 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)165), (bool)1);
		__this->___temp_51 = L_65;
		RuntimeObject* L_66 = __this->___DISTZ_43;
		float L_67 = __this->___temp_47;
		float L_68 = __this->___temp_51;
		NullCheck(L_66);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_67, L_68)));
		RuntimeObject* L_69;
		L_69 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_69, 5, ((int32_t)217512505));
		__this->___DISTX_53 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_53), (void*)L_70);
		RuntimeObject* L_71 = __this->___DISTX_53;
		NullCheck(L_71);
		float L_72;
		L_72 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_71, ((int32_t)231), (bool)1);
		__this->___DISTX_53_val = L_72;
		float L_73 = __this->___DISTX_53_val;
		bool L_74;
		L_74 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_73, (10.0f), NULL);
		if (!L_74)
		{
			goto IL_0364;
		}
	}
	{
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_75 = (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34*)il2cpp_codegen_object_new(BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34_il2cpp_TypeInfo_var);
		BEAMREACT__ctor_mB0794040DFC34B2C1BE7A9198550A45C59AA4C17(L_75, NULL);
		V_0 = L_75;
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_76 = V_0;
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_77 = L_76;
		RuntimeObject* L_78;
		L_78 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		NullCheck(L_77);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_77, L_78);
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_79 = L_77;
		RuntimeObject* L_80;
		L_80 = DRKLIMPLODE_get_THERE_m7B24A82DC5E62C0FCA3DE1227CC5161D770B5932_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_80);
		RuntimeObject* L_81;
		L_81 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_81);
		RuntimeObject* L_82;
		L_82 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_83 = V_0;
		NullCheck(L_82);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_82, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_83);
		return (bool)0;
	}

IL_0364:
	{
		RuntimeObject* L_85;
		L_85 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_56 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_56), (void*)L_85);
		RuntimeObject* L_86 = __this->___MY_56;
		NullCheck(L_86);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)206), (1.0f));
		RuntimeObject* L_87;
		L_87 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_59 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_59), (void*)L_87);
		RuntimeObject* L_88 = __this->___MY_59;
		NullCheck(L_88);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)207), (0.0f));
		RuntimeObject* L_89;
		L_89 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_62 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_62), (void*)L_89);
		RuntimeObject* L_90 = __this->___MY_62;
		NullCheck(L_90);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_90, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_91;
		L_91 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_65 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_65), (void*)L_91);
		RuntimeObject* L_92 = __this->___MY_65;
		NullCheck(L_92);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_93;
		L_93 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_68 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_68), (void*)L_93);
		RuntimeObject* L_94 = __this->___MY_68;
		NullCheck(L_94);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_95;
		L_95 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_95);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_96, ((int32_t)1333438470), (bool)1, (bool)1);
		__this->___VANISHFORGOOD_69 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VANISHFORGOOD_69), (void*)L_97);
		RuntimeObject* L_98;
		L_98 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_71 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_71), (void*)L_98);
		RuntimeObject* L_99 = __this->___MY_71;
		RuntimeObject* L_100 = __this->___VANISHFORGOOD_69;
		NullCheck(L_99);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)190), L_100);
		RuntimeObject* L_101;
		L_101 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_74 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_74), (void*)L_101);
		RuntimeObject* L_102 = __this->___MY_74;
		NullCheck(L_102);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)176), (8.0f));
		RuntimeObject* L_103;
		L_103 = DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline(__this, NULL);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_103);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_104, ((int32_t)-765310308), (bool)1, (bool)1);
		__this->___DRKL0ATEX_75 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL0ATEX_75), (void*)L_105);
		RuntimeObject* L_106;
		L_106 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_77 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_77), (void*)L_106);
		RuntimeObject* L_107 = __this->___MY_77;
		RuntimeObject* L_108 = __this->___DRKL0ATEX_75;
		NullCheck(L_107);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)164), L_108);
		RuntimeObject* L_109;
		L_109 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_80 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_80), (void*)L_109);
		RuntimeObject* L_110 = __this->___MY_80;
		NullCheck(L_110);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)168), (0.0f));
		RuntimeObject* L_111;
		L_111 = DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline(__this, NULL);
		__this->___MY_83 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_83), (void*)L_111);
		RuntimeObject* L_112 = __this->___MY_83;
		NullCheck(L_112);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_112, ((int32_t)199), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92 (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIT_set_MY_mBB5B44F1319531E94DB94CB466F6D1A6EA6B5F05 (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIT_get_THERE_mF07DC176E747CCDAF80E142F58132AF704DE4756 (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIT_set_THERE_m601B8A6756BF605C75AEEC02E2D00E4FC1BD9247 (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672 (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIT_set__world_m73279FFFA8C5B874F0F98E259EEEF07960C7D2CF (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIT_get_Current_m3A642511C14F8649D8739B3E4C4296EE47B65F4F (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIT_set_Current_m6211B90EE722A51BF2240F34BDD207C49C4BD982 (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIT_Reset_m1CBF4B0DE36FFD7219185B949C4647B2F899C2F6 (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIT__ctor_mDF6AF94520FBE23068AA38DE005FA7CBA1434970 (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIT__ctor_m6DB7E81938D357C4C02734CBEC2DF0BAB549CAAE (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLHIT_set_MY_mBB5B44F1319531E94DB94CB466F6D1A6EA6B5F05_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLHIT_set_THERE_m601B8A6756BF605C75AEEC02E2D00E4FC1BD9247_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLHIT_set__world_m73279FFFA8C5B874F0F98E259EEEF07960C7D2CF_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLHIT_MoveNext_m72DD461AEED9429F4E358051698EDC4022A874D7 (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* V_0 = NULL;
	DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* V_1 = NULL;
	DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* V_2 = NULL;
	DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* V_3 = NULL;
	DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* V_4 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* G_B13_1 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* G_B12_1 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* G_B14_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0606;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)441));
		__this->___SHOOT_FAC_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___SHOOT_FAC_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___SHOOT_FAC_1_val = L_4;
		float L_5 = __this->___SHOOT_FAC_1_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_5, (0.0f), NULL);
		if (L_6)
		{
			goto IL_07cd;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, ((int32_t)704), (bool)0);
		__this->___HIT_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_3), (void*)L_9);
		RuntimeObject* L_10 = __this->___HIT_3;
		RuntimeObject* L_11 = __this->___MY_2;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_009b;
		}
	}
	{
		RuntimeObject* L_13;
		L_13 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, ((int32_t)704), (RuntimeObject*)NULL);
		goto IL_0400;
	}

IL_009b:
	{
		RuntimeObject* L_14;
		L_14 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_7), (void*)L_15);
		RuntimeObject* L_16 = __this->___EXPLOSION_ON_7;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)231), (bool)1);
		__this->___EXPLOSION_ON_7_val = L_17;
		float L_18 = __this->___EXPLOSION_ON_7_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_18, (0.0f), NULL);
		if (L_19)
		{
			goto IL_07cd;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, 5, ((int32_t)217512505));
		__this->___DISTX_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_8), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_22, 5, ((int32_t)217512505));
		__this->___DISTX_9 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_9), (void*)L_23);
		RuntimeObject* L_24 = __this->___DISTX_9;
		NullCheck(L_24);
		float L_25;
		L_25 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)231), (bool)1);
		__this->___DISTX_9_val = L_25;
		RuntimeObject* L_26;
		L_26 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_12 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_12), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_12;
		NullCheck(L_27);
		float L_28;
		L_28 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)195), (bool)1);
		__this->___temp_13 = L_28;
		RuntimeObject* L_29;
		L_29 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_16 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_16), (void*)L_30);
		RuntimeObject* L_31 = __this->___EXPLOSION_CENTER_16;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)195), (bool)1);
		__this->___temp_17 = L_32;
		RuntimeObject* L_33;
		L_33 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_22 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_33);
		RuntimeObject* L_34 = __this->___MY_22;
		NullCheck(L_34);
		float L_35;
		L_35 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)195), (bool)1);
		__this->___temp_23 = L_35;
		RuntimeObject* L_36;
		L_36 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_36, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_26 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_26), (void*)L_37);
		RuntimeObject* L_38 = __this->___EXPLOSION_CENTER_26;
		NullCheck(L_38);
		float L_39;
		L_39 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)195), (bool)1);
		__this->___temp_27 = L_39;
		RuntimeObject* L_40;
		L_40 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_32 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_40);
		RuntimeObject* L_41 = __this->___MY_32;
		NullCheck(L_41);
		float L_42;
		L_42 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)196), (bool)1);
		__this->___temp_33 = L_42;
		RuntimeObject* L_43;
		L_43 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_36 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_36), (void*)L_44);
		RuntimeObject* L_45 = __this->___EXPLOSION_CENTER_36;
		NullCheck(L_45);
		float L_46;
		L_46 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)196), (bool)1);
		__this->___temp_37 = L_46;
		RuntimeObject* L_47;
		L_47 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_42 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_42), (void*)L_47);
		RuntimeObject* L_48 = __this->___MY_42;
		NullCheck(L_48);
		float L_49;
		L_49 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)196), (bool)1);
		__this->___temp_43 = L_49;
		RuntimeObject* L_50;
		L_50 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_50, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_46 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_46), (void*)L_51);
		RuntimeObject* L_52 = __this->___EXPLOSION_CENTER_46;
		NullCheck(L_52);
		float L_53;
		L_53 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)196), (bool)1);
		__this->___temp_47 = L_53;
		RuntimeObject* L_54 = __this->___DISTX_8;
		float L_55 = __this->___temp_13;
		float L_56 = __this->___temp_17;
		float L_57 = __this->___temp_23;
		float L_58 = __this->___temp_27;
		float L_59 = __this->___temp_33;
		float L_60 = __this->___temp_37;
		float L_61 = __this->___temp_43;
		float L_62 = __this->___temp_47;
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_55, L_56)), ((float)il2cpp_codegen_subtract(L_57, L_58)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_59, L_60)), ((float)il2cpp_codegen_subtract(L_61, L_62)))))));
		RuntimeObject* L_63;
		L_63 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, 5, ((int32_t)217512505));
		__this->___DISTX_49 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_49), (void*)L_64);
		RuntimeObject* L_65 = __this->___DISTX_49;
		NullCheck(L_65);
		float L_66;
		L_66 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)231), (bool)1);
		__this->___DISTX_49_val = L_66;
		RuntimeObject* L_67;
		L_67 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_67, 5, ((int32_t)217512505));
		__this->___DISTX_50 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_50), (void*)L_68);
		RuntimeObject* L_69 = __this->___DISTX_50;
		float L_70 = __this->___DISTX_49_val;
		float L_71;
		L_71 = MathUtils_Sqrt_mC66300CAE9A1433A25EE41C5837D731B05AABD25(L_70, NULL);
		NullCheck(L_69);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)231), L_71);
		RuntimeObject* L_72;
		L_72 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_72, 5, ((int32_t)217512505));
		__this->___DISTX_52 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_52), (void*)L_73);
		RuntimeObject* L_74 = __this->___DISTX_52;
		NullCheck(L_74);
		float L_75;
		L_75 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_74, ((int32_t)231), (bool)1);
		__this->___DISTX_52_val = L_75;
		float L_76 = __this->___DISTX_52_val;
		bool L_77;
		L_77 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_76, (25.0f), NULL);
		if (L_77)
		{
			goto IL_07cd;
		}
	}
	{
		RuntimeObject* L_78;
		L_78 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_78);
		RuntimeObject* L_79;
		L_79 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_78, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_54 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_54), (void*)L_79);
		RuntimeObject* L_80 = __this->___EXPLOSION_ON_54;
		NullCheck(L_80);
		float L_81;
		L_81 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_80, ((int32_t)231), (bool)1);
		__this->___EXPLOSION_ON_54_val = L_81;
		float L_82 = __this->___EXPLOSION_ON_54_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_83;
		L_83 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_82, (2.0f), NULL);
		if (!L_83)
		{
			goto IL_0400;
		}
	}
	{
		RuntimeObject* L_84;
		L_84 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_57 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_57), (void*)L_84);
		RuntimeObject* L_85 = __this->___MY_57;
		NullCheck(L_85);
		float L_86;
		L_86 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_85, ((int32_t)205), (bool)1);
		__this->___temp_58 = L_86;
		float L_87 = __this->___temp_58;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_88;
		L_88 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_87, (1.0f), NULL);
		if (!L_88)
		{
			goto IL_0400;
		}
	}
	{
		DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* L_89 = (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178*)il2cpp_codegen_object_new(DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178_il2cpp_TypeInfo_var);
		DRKLIMPLODE__ctor_m6904B66B114CD47E7E17489C705C5570CF6A0574(L_89, NULL);
		V_0 = L_89;
		DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* L_90 = V_0;
		DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* L_91 = L_90;
		RuntimeObject* L_92;
		L_92 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		NullCheck(L_91);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_91, L_92);
		DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* L_93 = L_91;
		RuntimeObject* L_94;
		L_94 = DRKLHIT_get_THERE_mF07DC176E747CCDAF80E142F58132AF704DE4756_inline(__this, NULL);
		NullCheck(L_93);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_93, L_94);
		RuntimeObject* L_95;
		L_95 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_93);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_93, L_95);
		RuntimeObject* L_96;
		L_96 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* L_97 = V_0;
		NullCheck(L_96);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_96, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_97);
		return (bool)0;
	}

IL_0400:
	{
		RuntimeObject* L_99;
		L_99 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_60 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_60), (void*)L_99);
		RuntimeObject* L_100;
		L_100 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_62 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_62), (void*)L_100);
		RuntimeObject* L_101 = __this->___MY_62;
		NullCheck(L_101);
		float L_102;
		L_102 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_101, ((int32_t)173), (bool)1);
		__this->___temp_63 = L_102;
		RuntimeObject* L_103;
		L_103 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_65 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_65), (void*)L_103);
		RuntimeObject* L_104 = __this->___MY_65;
		NullCheck(L_104);
		float L_105;
		L_105 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_104, ((int32_t)173), (bool)1);
		__this->___temp_66 = L_105;
		RuntimeObject* L_106;
		L_106 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_106, 5, ((int32_t)441));
		__this->___SHOOT_FAC_68 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_68), (void*)L_107);
		RuntimeObject* L_108 = __this->___SHOOT_FAC_68;
		NullCheck(L_108);
		float L_109;
		L_109 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_108, ((int32_t)231), (bool)1);
		__this->___SHOOT_FAC_68_val = L_109;
		RuntimeObject* L_110 = __this->___MY_60;
		float L_111 = __this->___temp_66;
		float L_112 = __this->___SHOOT_FAC_68_val;
		float L_113;
		L_113 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_110);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)173), ((float)il2cpp_codegen_add(L_111, ((float)(((float)il2cpp_codegen_multiply(L_112, ((float)il2cpp_codegen_add(L_113, (2.0f)))))/(3.0f))))));
		RuntimeObject* L_114;
		L_114 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_79 = L_114;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_79), (void*)L_114);
		RuntimeObject* L_115 = __this->___MY_79;
		NullCheck(L_115);
		float L_116;
		L_116 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_115, ((int32_t)173), (bool)1);
		__this->___temp_80 = L_116;
		float L_117 = __this->___temp_80;
		bool L_118;
		L_118 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_117, (5.0f), NULL);
		if (L_118)
		{
			goto IL_0772;
		}
	}
	{
		float L_119;
		L_119 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_120;
		L_120 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_119, (0.0500000007f), NULL);
		if (L_120)
		{
			goto IL_0772;
		}
	}
	{
		RuntimeObject* L_121;
		L_121 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_84 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_84), (void*)L_121);
		RuntimeObject* L_122 = __this->___MY_84;
		RuntimeObject* L_123 = L_122;
		if (L_123)
		{
			G_B13_0 = L_123;
			G_B13_1 = __this;
			goto IL_0515;
		}
		G_B12_0 = L_123;
		G_B12_1 = __this;
	}
	{
		G_B14_0 = ((RuntimeObject*)(NULL));
		G_B14_1 = G_B12_1;
		goto IL_0521;
	}

IL_0515:
	{
		NullCheck(G_B13_0);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B13_0, ((int32_t)164), (bool)1, (bool)1);
		G_B14_0 = L_124;
		G_B14_1 = G_B13_1;
	}

IL_0521:
	{
		NullCheck(G_B14_1);
		G_B14_1->___temp_85 = G_B14_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B14_1->___temp_85), (void*)G_B14_0);
		RuntimeObject* L_125;
		L_125 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		RuntimeObject* L_126 = __this->___temp_85;
		NullCheck(L_125);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_125, ((int32_t)-1713437814), L_126);
		RuntimeObject* L_127;
		L_127 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_127);
		RuntimeObject* L_128;
		L_128 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_127);
		NullCheck(L_128);
		RuntimeObject* L_129;
		L_129 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_128, ((int32_t)-1714947168), (bool)1, (bool)1);
		__this->___DRKL5TEX_87 = L_129;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL5TEX_87), (void*)L_129);
		RuntimeObject* L_130;
		L_130 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_89 = L_130;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_89), (void*)L_130);
		RuntimeObject* L_131 = __this->___MY_89;
		RuntimeObject* L_132 = __this->___DRKL5TEX_87;
		NullCheck(L_131);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_131, ((int32_t)164), L_132);
		RuntimeObject* L_133;
		L_133 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_92 = L_133;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_92), (void*)L_133);
		RuntimeObject* L_134 = __this->___MY_92;
		NullCheck(L_134);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_134, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_135;
		L_135 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_95 = L_135;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_95), (void*)L_135);
		RuntimeObject* L_136 = __this->___MY_95;
		NullCheck(L_136);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_136, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_137;
		L_137 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_98 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_98), (void*)L_137);
		RuntimeObject* L_138 = __this->___MY_98;
		NullCheck(L_138);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_138, ((int32_t)209), (RuntimeObject*)NULL);
		float L_139;
		L_139 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_139;
		float L_140 = __this->___startTime1;
		float L_141;
		L_141 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(6, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_140, L_141));
		__this->____cursor = 1;
		goto IL_0606;
	}

IL_05f9:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_142 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		DRKLHIT_set_Current_m6211B90EE722A51BF2240F34BDD207C49C4BD982_inline(__this, L_142, NULL);
		return (bool)1;
	}

IL_0606:
	{
		float L_143;
		L_143 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_144 = __this->___endTime1;
		if ((((float)L_143) < ((float)L_144)))
		{
			goto IL_05f9;
		}
	}
	{
		DRKLHIT_set_Current_m6211B90EE722A51BF2240F34BDD207C49C4BD982_inline(__this, NULL, NULL);
		RuntimeObject* L_145;
		L_145 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_145);
		RuntimeObject* L_146;
		L_146 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_145);
		NullCheck(L_146);
		RuntimeObject* L_147;
		L_147 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_146, ((int32_t)989257407), (bool)1, (bool)1);
		__this->___DRKLHIT_100 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHIT_100), (void*)L_147);
		RuntimeObject* L_148;
		L_148 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_102 = L_148;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_102), (void*)L_148);
		RuntimeObject* L_149 = __this->___MY_102;
		RuntimeObject* L_150 = __this->___DRKLHIT_100;
		NullCheck(L_149);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_149, ((int32_t)209), L_150);
		RuntimeObject* L_151;
		L_151 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_151);
		RuntimeObject* L_152;
		L_152 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_151, ((int32_t)-1713437814), (bool)0);
		__this->___DRKL_TEX_103 = L_152;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL_TEX_103), (void*)L_152);
		RuntimeObject* L_153;
		L_153 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_105 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_105), (void*)L_153);
		RuntimeObject* L_154 = __this->___MY_105;
		RuntimeObject* L_155 = __this->___DRKL_TEX_103;
		NullCheck(L_154);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_154, ((int32_t)164), L_155);
		RuntimeObject* L_156;
		L_156 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_108 = L_156;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_108), (void*)L_156);
		RuntimeObject* L_157 = __this->___MY_108;
		NullCheck(L_157);
		float L_158;
		L_158 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_157, ((int32_t)173), (bool)1);
		__this->___temp_109 = L_158;
		float L_159 = __this->___temp_109;
		bool L_160;
		L_160 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_159, (4.0f), NULL);
		if (!L_160)
		{
			goto IL_0701;
		}
	}
	{
		DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* L_161 = (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2*)il2cpp_codegen_object_new(DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2_il2cpp_TypeInfo_var);
		DRKLHIDE__ctor_m5E6B1C3472D82E73A747CA60385EC1FA626813D0(L_161, NULL);
		V_1 = L_161;
		DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* L_162 = V_1;
		DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* L_163 = L_162;
		RuntimeObject* L_164;
		L_164 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		NullCheck(L_163);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_163, L_164);
		DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* L_165 = L_163;
		RuntimeObject* L_166;
		L_166 = DRKLHIT_get_THERE_mF07DC176E747CCDAF80E142F58132AF704DE4756_inline(__this, NULL);
		NullCheck(L_165);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_165, L_166);
		RuntimeObject* L_167;
		L_167 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_165);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_165, L_167);
		RuntimeObject* L_168;
		L_168 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* L_169 = V_1;
		NullCheck(L_168);
		RuntimeObject* L_170;
		L_170 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_168, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_169);
		return (bool)0;
	}

IL_0701:
	{
		RuntimeObject* L_171;
		L_171 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_112 = L_171;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_112), (void*)L_171);
		RuntimeObject* L_172 = __this->___MY_112;
		NullCheck(L_172);
		float L_173;
		L_173 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_172, ((int32_t)176), (bool)1);
		__this->___temp_113 = L_173;
		float L_174 = __this->___temp_113;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_175;
		L_175 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_174, (4.0f), NULL);
		if (L_175)
		{
			goto IL_0770;
		}
	}
	{
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_176 = (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64*)il2cpp_codegen_object_new(DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var);
		DRKLFOLLOWATTACK__ctor_m321A738364A5B7E7FCE9F3684787C52F7C3B76B1(L_176, NULL);
		V_2 = L_176;
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_177 = V_2;
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_178 = L_177;
		RuntimeObject* L_179;
		L_179 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		NullCheck(L_178);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_178, L_179);
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_180 = L_178;
		RuntimeObject* L_181;
		L_181 = DRKLHIT_get_THERE_mF07DC176E747CCDAF80E142F58132AF704DE4756_inline(__this, NULL);
		NullCheck(L_180);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_180, L_181);
		RuntimeObject* L_182;
		L_182 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_180);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_180, L_182);
		RuntimeObject* L_183;
		L_183 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_184 = V_2;
		NullCheck(L_183);
		RuntimeObject* L_185;
		L_185 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_183, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_184);
		return (bool)0;
	}

IL_0770:
	{
		return (bool)0;
	}

IL_0772:
	{
		RuntimeObject* L_186;
		L_186 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		__this->___MY_116 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_116), (void*)L_186);
		RuntimeObject* L_187 = __this->___MY_116;
		NullCheck(L_187);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_187, ((int32_t)173), (10.0f));
		DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* L_188 = (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9*)il2cpp_codegen_object_new(DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9_il2cpp_TypeInfo_var);
		DRKLDIE__ctor_m535A1D8E9811F289EB2C79D78AF3E1E92E8AF675(L_188, NULL);
		V_3 = L_188;
		DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* L_189 = V_3;
		DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* L_190 = L_189;
		RuntimeObject* L_191;
		L_191 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		NullCheck(L_190);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_190, L_191);
		DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* L_192 = L_190;
		RuntimeObject* L_193;
		L_193 = DRKLHIT_get_THERE_mF07DC176E747CCDAF80E142F58132AF704DE4756_inline(__this, NULL);
		NullCheck(L_192);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_192, L_193);
		RuntimeObject* L_194;
		L_194 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_192);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_192, L_194);
		RuntimeObject* L_195;
		L_195 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* L_196 = V_3;
		NullCheck(L_195);
		RuntimeObject* L_197;
		L_197 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_195, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_196);
		return (bool)0;
	}

IL_07cd:
	{
		DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* L_198 = (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1*)il2cpp_codegen_object_new(DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1_il2cpp_TypeInfo_var);
		DRKLTURN__ctor_m1B0F49541BC45C24C4AC8F92D90601ADB0BC8E29(L_198, NULL);
		V_4 = L_198;
		DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* L_199 = V_4;
		DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* L_200 = L_199;
		RuntimeObject* L_201;
		L_201 = DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline(__this, NULL);
		NullCheck(L_200);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_200, L_201);
		DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* L_202 = L_200;
		RuntimeObject* L_203;
		L_203 = DRKLHIT_get_THERE_mF07DC176E747CCDAF80E142F58132AF704DE4756_inline(__this, NULL);
		NullCheck(L_202);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_202, L_203);
		RuntimeObject* L_204;
		L_204 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		NullCheck(L_202);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_202, L_204);
		RuntimeObject* L_205;
		L_205 = DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline(__this, NULL);
		DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* L_206 = V_4;
		NullCheck(L_205);
		RuntimeObject* L_207;
		L_207 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_205, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_206);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK_set_MY_mC7CDC80D6BC4E0A61DEDA2C579B518886DBAA79D (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLATTACK_get_THERE_mB866B7DE6A1B9C84B0815AE1C81BB864E7D0E8C2 (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK_set_THERE_mB492831F743B7CD260C1989FE2FD9AF46CB6CE7E (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1 (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK_set__world_m2DA7A7B9846E14D46F43B379712A9D8C62B8B5D0 (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLATTACK_get_Current_m461765C77673AFF89AA22EA8570350B0366EBDD5 (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK_set_Current_m87AF67DEA20A0AC4854B55F9B7C9CBD50B1AFFC0 (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK_Reset_m598D1A39EB26B954C4115146ED70919B774836DC (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK__ctor_m2888437C5A3EA3E24EAAAA01E7AF6D240DDAAF22 (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK__ctor_mC488A90EBA7C6419A48E07A95E082677E5F13F43 (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLEDRKLATTACK_set_MY_mC7CDC80D6BC4E0A61DEDA2C579B518886DBAA79D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLEDRKLATTACK_set_THERE_mB492831F743B7CD260C1989FE2FD9AF46CB6CE7E_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLEDRKLATTACK_set__world_m2DA7A7B9846E14D46F43B379712A9D8C62B8B5D0_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLEDRKLATTACK_MoveNext_mBBD1F5C9D14CCE1615F49AEC1D4D070503703B94 (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* V_1 = NULL;
	DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* V_2 = NULL;
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_3 = NULL;
	DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* V_4 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_1 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_1, NULL);
		V_0 = L_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_2 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLEDRKLATTACK_get_THERE_mB866B7DE6A1B9C84B0815AE1C81BB864E7D0E8C2_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		__this->___MY_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_2;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)213), (0.0f));
		RuntimeObject* L_13;
		L_13 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		__this->___MY_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_5;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_15;
		L_15 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		__this->___MY_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_8;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)169), (0.0f));
		RuntimeObject* L_17;
		L_17 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		__this->___MY_11 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_11;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)189), (RuntimeObject*)NULL);
		DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* L_19 = (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891*)il2cpp_codegen_object_new(DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891_il2cpp_TypeInfo_var);
		DRKLTALK__ctor_mEF3F4C10A5FEAF982904F805F45E4E0EA90F6ECF(L_19, NULL);
		V_1 = L_19;
		DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* L_20 = V_1;
		DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* L_21 = L_20;
		RuntimeObject* L_22;
		L_22 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_21, L_22);
		DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* L_23 = L_21;
		RuntimeObject* L_24;
		L_24 = CYCLEDRKLATTACK_get_THERE_mB866B7DE6A1B9C84B0815AE1C81BB864E7D0E8C2_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_24);
		RuntimeObject* L_25;
		L_25 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_25);
		RuntimeObject* L_26;
		L_26 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* L_27 = V_1;
		NullCheck(L_26);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_26, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_27);
		RuntimeObject* L_29;
		L_29 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, 5, ((int32_t)-922693617));
		__this->___SHOT_SOUND_ON_13 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOT_SOUND_ON_13), (void*)L_30);
		RuntimeObject* L_31 = __this->___SHOT_SOUND_ON_13;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), (bool)1);
		__this->___SHOT_SOUND_ON_13_val = L_32;
		float L_33 = __this->___SHOT_SOUND_ON_13_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_33, (0.0f), NULL);
		if (L_34)
		{
			goto IL_016f;
		}
	}
	{
		DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* L_35 = (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C*)il2cpp_codegen_object_new(DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C_il2cpp_TypeInfo_var);
		DRKLLOOKFOR__ctor_m1F9E365D4BF8B79F3F2C51E712437974A98C1C97(L_35, NULL);
		V_2 = L_35;
		DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* L_36 = V_2;
		DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* L_37 = L_36;
		RuntimeObject* L_38;
		L_38 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		NullCheck(L_37);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_37, L_38);
		DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* L_39 = L_37;
		RuntimeObject* L_40;
		L_40 = CYCLEDRKLATTACK_get_THERE_mB866B7DE6A1B9C84B0815AE1C81BB864E7D0E8C2_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		RuntimeObject* L_41;
		L_41 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_41);
		RuntimeObject* L_42;
		L_42 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* L_43 = V_2;
		NullCheck(L_42);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_42, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_43);
	}

IL_016f:
	{
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_45 = (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511*)il2cpp_codegen_object_new(LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D(L_45, NULL);
		V_3 = L_45;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_46 = V_3;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_47 = L_46;
		RuntimeObject* L_48;
		L_48 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_49 = L_47;
		RuntimeObject* L_50;
		L_50 = CYCLEDRKLATTACK_get_THERE_mB866B7DE6A1B9C84B0815AE1C81BB864E7D0E8C2_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		RuntimeObject* L_51;
		L_51 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_51);
		RuntimeObject* L_52;
		L_52 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_53 = V_3;
		NullCheck(L_52);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_53);
		RuntimeObject* L_55;
		L_55 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		__this->___MY_16 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_16), (void*)L_55);
		RuntimeObject* L_56 = __this->___MY_16;
		NullCheck(L_56);
		float L_57;
		L_57 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_56, ((int32_t)181), (bool)1);
		__this->___temp_17 = L_57;
		float L_58 = __this->___temp_17;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_58, (0.0f), NULL);
		if (!L_59)
		{
			goto IL_01de;
		}
	}
	{
		return (bool)0;
	}

IL_01de:
	{
		RuntimeObject* L_60;
		L_60 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		__this->___MY_20 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_60);
		RuntimeObject* L_61 = __this->___MY_20;
		NullCheck(L_61);
		float L_62;
		L_62 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)182), (bool)1);
		__this->___temp_21 = L_62;
		float L_63 = __this->___temp_21;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_63, (1.0f), NULL);
		if (L_64)
		{
			goto IL_0283;
		}
	}
	{
		RuntimeObject* L_65;
		L_65 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		__this->___MY_24 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_65);
		RuntimeObject* L_66 = __this->___MY_24;
		NullCheck(L_66);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)182), (1.0f));
		RuntimeObject* L_67;
		L_67 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_67);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)-765850175), (bool)1, (bool)1);
		__this->___DRKL02SND_25 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL02SND_25), (void*)L_69);
		RuntimeObject* L_70;
		L_70 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		__this->___MY_27 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_70);
		RuntimeObject* L_71;
		L_71 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		RuntimeObject* L_72 = __this->___DRKL02SND_25;
		RuntimeObject* L_73 = __this->___MY_27;
		NullCheck(L_71);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, L_72, (0.699999988f), L_73, (100.0f), (100.0f));
	}

IL_0283:
	{
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_74 = (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64*)il2cpp_codegen_object_new(DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var);
		DRKLFOLLOWATTACK__ctor_m321A738364A5B7E7FCE9F3684787C52F7C3B76B1(L_74, NULL);
		V_4 = L_74;
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_75 = V_4;
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_76 = L_75;
		RuntimeObject* L_77;
		L_77 = CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline(__this, NULL);
		NullCheck(L_76);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_76, L_77);
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_78 = L_76;
		RuntimeObject* L_79;
		L_79 = CYCLEDRKLATTACK_get_THERE_mB866B7DE6A1B9C84B0815AE1C81BB864E7D0E8C2_inline(__this, NULL);
		NullCheck(L_78);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_78, L_79);
		RuntimeObject* L_80;
		L_80 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		NullCheck(L_78);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_78, L_80);
		RuntimeObject* L_81;
		L_81 = CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline(__this, NULL);
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_82 = V_4;
		NullCheck(L_81);
		RuntimeObject* L_83;
		L_83 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_81, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_82);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87 (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE_set_MY_m1AF7239903E3BED01F7F8B41DECFE6F8E7A26F5B (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLHIDE_get_THERE_m2A2C5A0E040AC4B239CDE47D31E4758B7A93D3D8 (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE_set_THERE_mC35B4046843CD7EF7F1BDEE1C209833A636A82F5 (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLHIDE_get__world_mB1B84BB9BE77F5B40DFE6013D739CC1BABD31BCB (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE_set__world_m4446959BB64074ACF110B1B48C696FAE264D9B68 (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLHIDE_get_Current_m5BFC866D1AD65E4C476F3CCB85304643EEBE88F6 (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE_set_Current_mF6B06C14547BD778D3A4834F791258500BEC544C (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE_Reset_mEB34BDBEA1A241A57CE5FF2AAB8FEDFC63806FB8 (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE__ctor_m292C8941ED40199D6A26099115AD095CB3F266D3 (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE__ctor_m35541A2A705584A167D82236A45C0A0AB0EB94CE (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLEDRKLHIDE_set_MY_m1AF7239903E3BED01F7F8B41DECFE6F8E7A26F5B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLEDRKLHIDE_set_THERE_mC35B4046843CD7EF7F1BDEE1C209833A636A82F5_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLEDRKLHIDE_set__world_m4446959BB64074ACF110B1B48C696FAE264D9B68_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLEDRKLHIDE_MoveNext_m3FB758749C11E5B6C06EDDAA1D4BABE33C87F542 (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_1 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_1, NULL);
		V_0 = L_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_2 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLEDRKLHIDE_get_THERE_m2A2C5A0E040AC4B239CDE47D31E4758B7A93D3D8_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLEDRKLHIDE_get__world_mB1B84BB9BE77F5B40DFE6013D739CC1BABD31BCB_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLEDRKLHIDE_get__world_mB1B84BB9BE77F5B40DFE6013D739CC1BABD31BCB_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		__this->___MY_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_2;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)213), (0.0f));
		RuntimeObject* L_13;
		L_13 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		__this->___MY_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_5;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_15;
		L_15 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		__this->___MY_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_8;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)169), (0.0f));
		RuntimeObject* L_17;
		L_17 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		__this->___MY_11 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_11;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_19;
		L_19 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		__this->___MY_14 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_14;
		NullCheck(L_20);
		float L_21;
		L_21 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)205), (bool)1);
		__this->___temp_15 = L_21;
		float L_22 = __this->___temp_15;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_22, (0.0f), NULL);
		if (L_23)
		{
			goto IL_020b;
		}
	}
	{
		RuntimeObject* L_24;
		L_24 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		__this->___MY_18 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_24);
		RuntimeObject* L_25 = __this->___MY_18;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)168), (0.600000024f));
		RuntimeObject* L_26;
		L_26 = CYCLEDRKLHIDE_get__world_mB1B84BB9BE77F5B40DFE6013D739CC1BABD31BCB_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_19 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_19), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		__this->___MY_21 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_21;
		RuntimeObject* L_31 = __this->___BULLET_19;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)199), L_31);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_32 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_32, NULL);
		V_1 = L_32;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_33 = V_1;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_34 = L_33;
		RuntimeObject* L_35;
		L_35 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_34, L_35);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_36 = L_34;
		RuntimeObject* L_37;
		L_37 = CYCLEDRKLHIDE_get_THERE_m2A2C5A0E040AC4B239CDE47D31E4758B7A93D3D8_inline(__this, NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_36, L_37);
		RuntimeObject* L_38;
		L_38 = CYCLEDRKLHIDE_get__world_mB1B84BB9BE77F5B40DFE6013D739CC1BABD31BCB_inline(__this, NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_36, L_38);
		RuntimeObject* L_39;
		L_39 = CYCLEDRKLHIDE_get__world_mB1B84BB9BE77F5B40DFE6013D739CC1BABD31BCB_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_40 = V_1;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_39, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_40);
		RuntimeObject* L_42;
		L_42 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		__this->___MY_23 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_42);
		RuntimeObject* L_43;
		L_43 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		__this->___MY_25 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_43);
		RuntimeObject* L_44 = __this->___MY_25;
		NullCheck(L_44);
		float L_45;
		L_45 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)194), (bool)1);
		__this->___temp_26 = L_45;
		RuntimeObject* L_46;
		L_46 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		__this->___MY_28 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_28), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_28;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)194), (bool)1);
		__this->___temp_29 = L_48;
		RuntimeObject* L_49 = __this->___MY_23;
		float L_50 = __this->___temp_29;
		float L_51;
		L_51 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)194), ((float)il2cpp_codegen_add(L_50, ((float)il2cpp_codegen_multiply((2.0f), ((float)il2cpp_codegen_subtract(L_51, (0.5f))))))));
		return (bool)0;
	}

IL_020b:
	{
		RuntimeObject* L_52;
		L_52 = CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline(__this, NULL);
		__this->___MY_40 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_40), (void*)L_52);
		RuntimeObject* L_53 = __this->___MY_40;
		NullCheck(L_53);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)168), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06 (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT_set_MY_m8F8E205563CF847B7EEA807F94BE059BCE2219FE (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLSHOOT_get_THERE_m8EEDBA6001E90F4294A7BDD6947477F5F9BB4A62 (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT_set_THERE_m9273C88C05888334CB8B7F8CA30624F894830CEA (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT_set__world_mDE5F269A53548393E8F8D9D584C03BCE179D3C46 (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLSHOOT_get_Current_mBCD04FF9953119B7F29ACF54F45035CA66451FF9 (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT_set_Current_m1031D4AB47920C21A5EEA5A6D87B3C68AA6A7003 (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT_Reset_m92BB9E4FAF83674F74C2F4B9CBD4CF3BBCE2F71D (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT__ctor_m21BD3A2282095C18FEA90A1DE644DF64048E808D (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT__ctor_mB10CE64C12EF3F5A800CBE52347BBE4F489A1EA0 (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLEDRKLSHOOT_set_MY_m8F8E205563CF847B7EEA807F94BE059BCE2219FE_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLEDRKLSHOOT_set_THERE_m9273C88C05888334CB8B7F8CA30624F894830CEA_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLEDRKLSHOOT_set__world_mDE5F269A53548393E8F8D9D584C03BCE179D3C46_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLEDRKLSHOOT_MoveNext_mC00ED4053AEAF2011D1FD0B8EA001EF231793679 (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* V_1 = NULL;
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_2 = NULL;
	DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* V_3 = NULL;
	DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* V_4 = NULL;
	HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* V_5 = NULL;
	DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* V_6 = NULL;
	DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* V_7 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_1 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_1, NULL);
		V_0 = L_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_2 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLEDRKLSHOOT_get_THERE_m8EEDBA6001E90F4294A7BDD6947477F5F9BB4A62_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_2;
		NullCheck(L_12);
		float L_13;
		L_13 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)173), (bool)1);
		__this->___temp_3 = L_13;
		float L_14 = __this->___temp_3;
		bool L_15;
		L_15 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_14, (9.0f), NULL);
		if (!L_15)
		{
			goto IL_00ae;
		}
	}
	{
		DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* L_16 = (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9*)il2cpp_codegen_object_new(DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9_il2cpp_TypeInfo_var);
		DRKLDIE__ctor_m535A1D8E9811F289EB2C79D78AF3E1E92E8AF675(L_16, NULL);
		V_1 = L_16;
		DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* L_17 = V_1;
		DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* L_18 = L_17;
		RuntimeObject* L_19;
		L_19 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_18, L_19);
		DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* L_20 = L_18;
		RuntimeObject* L_21;
		L_21 = CYCLEDRKLSHOOT_get_THERE_m8EEDBA6001E90F4294A7BDD6947477F5F9BB4A62_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		RuntimeObject* L_22;
		L_22 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_22);
		RuntimeObject* L_23;
		L_23 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* L_24 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_24);
		return (bool)0;
	}

IL_00ae:
	{
		RuntimeObject* L_26;
		L_26 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_6 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_6;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)213), (0.0f));
		RuntimeObject* L_28;
		L_28 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_9 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_9), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_9;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_30;
		L_30 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_12 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_12), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_12;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)169), (0.0f));
		RuntimeObject* L_32;
		L_32 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_15 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_15), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_15;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)189), (RuntimeObject*)NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_34 = (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511*)il2cpp_codegen_object_new(LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D(L_34, NULL);
		V_2 = L_34;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_35 = V_2;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_36 = L_35;
		RuntimeObject* L_37;
		L_37 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_36, L_37);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_38 = L_36;
		RuntimeObject* L_39;
		L_39 = CYCLEDRKLSHOOT_get_THERE_m8EEDBA6001E90F4294A7BDD6947477F5F9BB4A62_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_39);
		RuntimeObject* L_40;
		L_40 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_40);
		RuntimeObject* L_41;
		L_41 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_42 = V_2;
		NullCheck(L_41);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_42);
		RuntimeObject* L_44;
		L_44 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_18 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_44);
		RuntimeObject* L_45 = __this->___MY_18;
		NullCheck(L_45);
		float L_46;
		L_46 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)181), (bool)1);
		__this->___temp_19 = L_46;
		float L_47 = __this->___temp_19;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_47, (0.0f), NULL);
		if (!L_48)
		{
			goto IL_020d;
		}
	}
	{
		RuntimeObject* L_49;
		L_49 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_22 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_49);
		RuntimeObject* L_50 = __this->___MY_22;
		NullCheck(L_50);
		float L_51;
		L_51 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)182), (bool)1);
		__this->___temp_23 = L_51;
		float L_52 = __this->___temp_23;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_52, (1.0f), NULL);
		if (L_53)
		{
			goto IL_0635;
		}
	}
	{
		DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* L_54 = (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05*)il2cpp_codegen_object_new(DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05_il2cpp_TypeInfo_var);
		DRKLWAIT__ctor_m8BAB37DB1D838558EB3A52AE4EC89D99D3DE1705(L_54, NULL);
		V_3 = L_54;
		DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* L_55 = V_3;
		DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* L_56 = L_55;
		RuntimeObject* L_57;
		L_57 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		NullCheck(L_56);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_56, L_57);
		DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* L_58 = L_56;
		RuntimeObject* L_59;
		L_59 = CYCLEDRKLSHOOT_get_THERE_m8EEDBA6001E90F4294A7BDD6947477F5F9BB4A62_inline(__this, NULL);
		NullCheck(L_58);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_58, L_59);
		RuntimeObject* L_60;
		L_60 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_58);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_58, L_60);
		RuntimeObject* L_61;
		L_61 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* L_62 = V_3;
		NullCheck(L_61);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_61, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_62);
		return (bool)0;
	}

IL_020d:
	{
		RuntimeObject* L_64;
		L_64 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_26 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_64);
		RuntimeObject* L_65 = __this->___MY_26;
		NullCheck(L_65);
		float L_66;
		L_66 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)202), (bool)1);
		__this->___temp_27 = L_66;
		float L_67 = __this->___temp_27;
		bool L_68;
		L_68 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_67, (5.0f), NULL);
		if (L_68)
		{
			goto IL_04f0;
		}
	}
	{
		RuntimeObject* L_69;
		L_69 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_69, 5, ((int32_t)-741456380));
		__this->___DRKLDELTA_28 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLDELTA_28), (void*)L_70);
		RuntimeObject* L_71;
		L_71 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, 5, ((int32_t)-741456380));
		__this->___DRKLDELTA_29 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLDELTA_29), (void*)L_72);
		RuntimeObject* L_73 = __this->___DRKLDELTA_29;
		NullCheck(L_73);
		float L_74;
		L_74 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)231), (bool)1);
		__this->___DRKLDELTA_29_val = L_74;
		RuntimeObject* L_75;
		L_75 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_32 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_75);
		RuntimeObject* L_76 = __this->___MY_32;
		NullCheck(L_76);
		float L_77;
		L_77 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)179), (bool)1);
		__this->___temp_33 = L_77;
		RuntimeObject* L_78;
		L_78 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_36 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_36), (void*)L_78);
		RuntimeObject* L_79 = __this->___MY_36;
		NullCheck(L_79);
		float L_80;
		L_80 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_79, ((int32_t)195), (bool)1);
		__this->___temp_37 = L_80;
		RuntimeObject* L_81;
		L_81 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_42 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_42), (void*)L_81);
		RuntimeObject* L_82 = __this->___MY_42;
		NullCheck(L_82);
		float L_83;
		L_83 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_82, ((int32_t)179), (bool)1);
		__this->___temp_43 = L_83;
		RuntimeObject* L_84;
		L_84 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_46 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_84);
		RuntimeObject* L_85 = __this->___MY_46;
		NullCheck(L_85);
		float L_86;
		L_86 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_85, ((int32_t)195), (bool)1);
		__this->___temp_47 = L_86;
		RuntimeObject* L_87;
		L_87 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_52 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_52), (void*)L_87);
		RuntimeObject* L_88 = __this->___MY_52;
		NullCheck(L_88);
		float L_89;
		L_89 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)180), (bool)1);
		__this->___temp_53 = L_89;
		RuntimeObject* L_90;
		L_90 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_56 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_56), (void*)L_90);
		RuntimeObject* L_91 = __this->___MY_56;
		NullCheck(L_91);
		float L_92;
		L_92 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_91, ((int32_t)196), (bool)1);
		__this->___temp_57 = L_92;
		RuntimeObject* L_93;
		L_93 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_62 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_62), (void*)L_93);
		RuntimeObject* L_94 = __this->___MY_62;
		NullCheck(L_94);
		float L_95;
		L_95 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)180), (bool)1);
		__this->___temp_63 = L_95;
		RuntimeObject* L_96;
		L_96 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_66 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_66), (void*)L_96);
		RuntimeObject* L_97 = __this->___MY_66;
		NullCheck(L_97);
		float L_98;
		L_98 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_97, ((int32_t)196), (bool)1);
		__this->___temp_67 = L_98;
		RuntimeObject* L_99 = __this->___DRKLDELTA_28;
		float L_100 = __this->___temp_33;
		float L_101 = __this->___temp_37;
		float L_102 = __this->___temp_43;
		float L_103 = __this->___temp_47;
		float L_104 = __this->___temp_53;
		float L_105 = __this->___temp_57;
		float L_106 = __this->___temp_63;
		float L_107 = __this->___temp_67;
		NullCheck(L_99);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_subtract(L_102, L_103)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_104, L_105)), ((float)il2cpp_codegen_subtract(L_106, L_107)))))));
		RuntimeObject* L_108;
		L_108 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_70 = L_108;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_70), (void*)L_108);
		RuntimeObject* L_109 = __this->___MY_70;
		NullCheck(L_109);
		float L_110;
		L_110 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_109, ((int32_t)195), (bool)1);
		__this->___temp_71 = L_110;
		RuntimeObject* L_111;
		L_111 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_73 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_73), (void*)L_111);
		RuntimeObject* L_112 = __this->___MY_73;
		float L_113 = __this->___temp_71;
		NullCheck(L_112);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_112, ((int32_t)179), L_113);
		RuntimeObject* L_114;
		L_114 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_75 = L_114;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_75), (void*)L_114);
		RuntimeObject* L_115 = __this->___MY_75;
		NullCheck(L_115);
		float L_116;
		L_116 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_115, ((int32_t)196), (bool)1);
		__this->___temp_76 = L_116;
		RuntimeObject* L_117;
		L_117 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_78 = L_117;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_78), (void*)L_117);
		RuntimeObject* L_118 = __this->___MY_78;
		float L_119 = __this->___temp_76;
		NullCheck(L_118);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_118, ((int32_t)180), L_119);
		RuntimeObject* L_120;
		L_120 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_120);
		RuntimeObject* L_121;
		L_121 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_120, 5, ((int32_t)-741456380));
		__this->___DRKLDELTA_80 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLDELTA_80), (void*)L_121);
		RuntimeObject* L_122 = __this->___DRKLDELTA_80;
		NullCheck(L_122);
		float L_123;
		L_123 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_122, ((int32_t)231), (bool)1);
		__this->___DRKLDELTA_80_val = L_123;
		float L_124 = __this->___DRKLDELTA_80_val;
		bool L_125;
		L_125 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_124, (0.25f), NULL);
		if (!L_125)
		{
			goto IL_04f0;
		}
	}
	{
		DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* L_126 = (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705*)il2cpp_codegen_object_new(DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705_il2cpp_TypeInfo_var);
		DRKLJUMP__ctor_mB9100E5430292974FA97B99E1868021FD8C14597(L_126, NULL);
		V_4 = L_126;
		DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* L_127 = V_4;
		DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* L_128 = L_127;
		RuntimeObject* L_129;
		L_129 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		NullCheck(L_128);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_128, L_129);
		DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* L_130 = L_128;
		RuntimeObject* L_131;
		L_131 = CYCLEDRKLSHOOT_get_THERE_m8EEDBA6001E90F4294A7BDD6947477F5F9BB4A62_inline(__this, NULL);
		NullCheck(L_130);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_130, L_131);
		RuntimeObject* L_132;
		L_132 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_130);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_130, L_132);
		RuntimeObject* L_133;
		L_133 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* L_134 = V_4;
		NullCheck(L_133);
		RuntimeObject* L_135;
		L_135 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_133, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_134);
		return (bool)0;
	}

IL_04f0:
	{
		RuntimeObject* L_136;
		L_136 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		__this->___MY_83 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_83), (void*)L_136);
		RuntimeObject* L_137 = __this->___MY_83;
		NullCheck(L_137);
		float L_138;
		L_138 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_137, ((int32_t)202), (bool)1);
		__this->___temp_84 = L_138;
		float L_139 = __this->___temp_84;
		bool L_140;
		L_140 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_139, (10.0f), NULL);
		if (L_140)
		{
			goto IL_0635;
		}
	}
	{
		RuntimeObject* L_141;
		L_141 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_141);
		RuntimeObject* L_142;
		L_142 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_141, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_85 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_85), (void*)L_142);
		RuntimeObject* L_143;
		L_143 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_143);
		RuntimeObject* L_144;
		L_144 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_143, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_86 = L_144;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_86), (void*)L_144);
		RuntimeObject* L_145 = __this->___PLAYER_RESULT_86;
		NullCheck(L_145);
		float L_146;
		L_146 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_145, ((int32_t)231), (bool)1);
		__this->___PLAYER_RESULT_86_val = L_146;
		RuntimeObject* L_147;
		L_147 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_147);
		RuntimeObject* L_148;
		L_148 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_147, 5, ((int32_t)-525669338));
		__this->___DRKLSHOOTFACTOR_87 = L_148;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLSHOOTFACTOR_87), (void*)L_148);
		RuntimeObject* L_149 = __this->___DRKLSHOOTFACTOR_87;
		NullCheck(L_149);
		float L_150;
		L_150 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_149, ((int32_t)231), (bool)1);
		__this->___DRKLSHOOTFACTOR_87_val = L_150;
		RuntimeObject* L_151 = __this->___PLAYER_RESULT_85;
		float L_152 = __this->___DRKLSHOOTFACTOR_87_val;
		float L_153;
		L_153 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_151);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_151, ((int32_t)231), ((float)il2cpp_codegen_multiply(L_152, ((float)il2cpp_codegen_add((1.0f), L_153)))));
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_154 = (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25*)il2cpp_codegen_object_new(HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25_il2cpp_TypeInfo_var);
		HITPLAYERDELAY__ctor_m0514506CB908F8A27C7CFF9BB10718987C144B25(L_154, NULL);
		V_5 = L_154;
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_155 = V_5;
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_156 = L_155;
		RuntimeObject* L_157;
		L_157 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		NullCheck(L_156);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_156, L_157);
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_158 = L_156;
		RuntimeObject* L_159;
		L_159 = CYCLEDRKLSHOOT_get_THERE_m8EEDBA6001E90F4294A7BDD6947477F5F9BB4A62_inline(__this, NULL);
		NullCheck(L_158);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_158, L_159);
		RuntimeObject* L_160;
		L_160 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_158);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_158, L_160);
		RuntimeObject* L_161;
		L_161 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_162 = V_5;
		NullCheck(L_161);
		RuntimeObject* L_163;
		L_163 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_161, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_162);
		DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* L_164 = (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664*)il2cpp_codegen_object_new(DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664_il2cpp_TypeInfo_var);
		DRKLSHOOT__ctor_m5136D2F1894C947482B2D151A5CC19D9E49AD793(L_164, NULL);
		V_6 = L_164;
		DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* L_165 = V_6;
		DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* L_166 = L_165;
		RuntimeObject* L_167;
		L_167 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		NullCheck(L_166);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_166, L_167);
		DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* L_168 = L_166;
		RuntimeObject* L_169;
		L_169 = CYCLEDRKLSHOOT_get_THERE_m8EEDBA6001E90F4294A7BDD6947477F5F9BB4A62_inline(__this, NULL);
		NullCheck(L_168);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_168, L_169);
		RuntimeObject* L_170;
		L_170 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_168);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_168, L_170);
		RuntimeObject* L_171;
		L_171 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* L_172 = V_6;
		NullCheck(L_171);
		RuntimeObject* L_173;
		L_173 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_171, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_172);
		return (bool)0;
	}

IL_0635:
	{
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_174 = (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64*)il2cpp_codegen_object_new(DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var);
		DRKLFOLLOWATTACK__ctor_m321A738364A5B7E7FCE9F3684787C52F7C3B76B1(L_174, NULL);
		V_7 = L_174;
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_175 = V_7;
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_176 = L_175;
		RuntimeObject* L_177;
		L_177 = CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline(__this, NULL);
		NullCheck(L_176);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_176, L_177);
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_178 = L_176;
		RuntimeObject* L_179;
		L_179 = CYCLEDRKLSHOOT_get_THERE_m8EEDBA6001E90F4294A7BDD6947477F5F9BB4A62_inline(__this, NULL);
		NullCheck(L_178);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_178, L_179);
		RuntimeObject* L_180;
		L_180 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		NullCheck(L_178);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_178, L_180);
		RuntimeObject* L_181;
		L_181 = CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline(__this, NULL);
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_182 = V_7;
		NullCheck(L_181);
		RuntimeObject* L_183;
		L_183 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_181, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_182);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLTALK_get_MY_m5ABFF477E13953D8664FCC360EAC9A0C0A970B8A (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTALK_set_MY_m40FC08BD28EC35E1D9C41F1BFC55C0A06C310E53 (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLTALK_get_THERE_mCA1A45C7F7F4667C0A4BAD36206C18FD447DDCE3 (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTALK_set_THERE_m18E29127F4E0AD0ABD5C5CB6DA2D4FA6FF47DC77 (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLTALK_get__world_m54BE2FFCD883BCACB977F285DE524D5ABBD8D705 (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTALK_set__world_mC2AF6004BA8656A1933CF1FD15B4FA061FEF8E63 (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLTALK_get_Current_m22F0F901811EC9EEFDD1F48F5216243C10899CB6 (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTALK_set_Current_m90DC9FCD35EDB4DBBB89E8E53BE959AB8DA85663 (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTALK_Reset_m55A3AA61262C6C1289A33234393070146F1DE7F4 (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTALK__ctor_mEF3F4C10A5FEAF982904F805F45E4E0EA90F6ECF (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTALK__ctor_mE10AAA77790195EA600B37699D3AD8BCDC9F6624 (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLTALK_set_MY_m40FC08BD28EC35E1D9C41F1BFC55C0A06C310E53_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLTALK_set_THERE_m18E29127F4E0AD0ABD5C5CB6DA2D4FA6FF47DC77_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLTALK_set__world_mC2AF6004BA8656A1933CF1FD15B4FA061FEF8E63_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLTALK_MoveNext_mBC383097B9E4C7DDEA06A97E60A0D539D6E43F21 (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) 
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
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_2;
		L_2 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_1, (0.949999988f), NULL);
		if (!L_2)
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = DRKLTALK_get__world_m54BE2FFCD883BCACB977F285DE524D5ABBD8D705_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-765742364), (bool)1, (bool)1);
		__this->___DRKL05SND_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL05SND_2), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = DRKLTALK_get_MY_m5ABFF477E13953D8664FCC360EAC9A0C0A970B8A_inline(__this, NULL);
		__this->___MY_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_6);
		RuntimeObject* L_7;
		L_7 = DRKLTALK_get__world_m54BE2FFCD883BCACB977F285DE524D5ABBD8D705_inline(__this, NULL);
		RuntimeObject* L_8 = __this->___DRKL05SND_2;
		RuntimeObject* L_9 = __this->___MY_4;
		NullCheck(L_7);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, L_8, (0.5f), L_9, (100.0f), (100.0f));
	}

IL_0067:
	{
		float L_10;
		L_10 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_11;
		L_11 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_10, (0.0700000003f), NULL);
		if (!L_11)
		{
			goto IL_00c7;
		}
	}
	{
		RuntimeObject* L_12;
		L_12 = DRKLTALK_get__world_m54BE2FFCD883BCACB977F285DE524D5ABBD8D705_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)-765850175), (bool)1, (bool)1);
		__this->___DRKL02SND_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL02SND_7), (void*)L_14);
		RuntimeObject* L_15;
		L_15 = DRKLTALK_get_MY_m5ABFF477E13953D8664FCC360EAC9A0C0A970B8A_inline(__this, NULL);
		__this->___MY_9 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_9), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = DRKLTALK_get__world_m54BE2FFCD883BCACB977F285DE524D5ABBD8D705_inline(__this, NULL);
		RuntimeObject* L_17 = __this->___DRKL02SND_7;
		RuntimeObject* L_18 = __this->___MY_9;
		NullCheck(L_16);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, L_17, (0.5f), L_18, (100.0f), (100.0f));
	}

IL_00c7:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPTURN_get_MY_m2F8B05D8412A55C6453901606B835E2D974E00AD (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTURN_set_MY_m18E64DEBB4AC625BC5FAAFE7DADE16BE875F815B (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPTURN_get_THERE_m93B1DDC77828B6037897E4184F48ACA6F42B8B4C (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTURN_set_THERE_m622952EABEDB78239D74BFE9F34F9CD884A657B2 (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5 (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTURN_set__world_m087C67F437849E8F439AAA18F5760784E28DB3A3 (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPTURN_get_Current_mF00FFAC7043A745CD1D5560C5565426D64175C70 (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTURN_set_Current_m3FCE557D29543F7825B6FBC6C5CEC5D88F386F68 (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTURN_Reset_m0BC9F006924DDFECC53936CD170D7EF30EE0D480 (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTURN__ctor_m3CB8B39CB3C29ED60B67D2AF587241AACB39DBEE (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTURN__ctor_mDA789849FE5B97BEFAA0CADE8D6F229A5BD7944B (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPTURN_set_MY_m18E64DEBB4AC625BC5FAAFE7DADE16BE875F815B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPTURN_set_THERE_m622952EABEDB78239D74BFE9F34F9CD884A657B2_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPTURN_set__world_m087C67F437849E8F439AAA18F5760784E28DB3A3_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPTURN_MoveNext_mAAAB541CE7514E0CC2039C324EF41E7EA4C44474 (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* V_0 = NULL;
	TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* V_1 = NULL;
	TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)33817649));
		__this->___WAITTIME_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAITTIME_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_3, 5, ((int32_t)33817649));
		__this->___WAITTIME_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAITTIME_1), (void*)L_4);
		RuntimeObject* L_5 = __this->___WAITTIME_1;
		NullCheck(L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)231), (bool)1);
		__this->___WAITTIME_1_val = L_6;
		RuntimeObject* L_7 = __this->___WAITTIME_0;
		float L_8;
		L_8 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((64.0f), L_8)), (16.0f))));
		float L_9;
		L_9 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_10;
		L_10 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_9, (0.0700000003f), NULL);
		if (!L_10)
		{
			goto IL_00b8;
		}
	}
	{
		TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* L_11 = (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84*)il2cpp_codegen_object_new(TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84_il2cpp_TypeInfo_var);
		TROPLISTEN__ctor_m4CD264F331299647343587EE3463C814109E8606(L_11, NULL);
		V_0 = L_11;
		TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* L_12 = V_0;
		TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* L_13 = L_12;
		RuntimeObject* L_14;
		L_14 = TROPTURN_get_MY_m2F8B05D8412A55C6453901606B835E2D974E00AD_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_14);
		TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* L_15 = L_13;
		RuntimeObject* L_16;
		L_16 = TROPTURN_get_THERE_m93B1DDC77828B6037897E4184F48ACA6F42B8B4C_inline(__this, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_15, L_16);
		RuntimeObject* L_17;
		L_17 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_15, L_17);
		RuntimeObject* L_18;
		L_18 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* L_19 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_19);
		return (bool)0;
	}

IL_00b8:
	{
		float L_21;
		L_21 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_22;
		L_22 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_21, (0.949999988f), NULL);
		if (!L_22)
		{
			goto IL_0196;
		}
	}
	{
		RuntimeObject* L_23;
		L_23 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, 5, ((int32_t)16787353));
		__this->___RIGHTTURNTROP_11 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNTROP_11), (void*)L_24);
		RuntimeObject* L_25;
		L_25 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, 5, ((int32_t)16787353));
		__this->___RIGHTTURNTROP_12 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNTROP_12), (void*)L_26);
		RuntimeObject* L_27 = __this->___RIGHTTURNTROP_12;
		NullCheck(L_27);
		float L_28;
		L_28 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNTROP_12_val = L_28;
		RuntimeObject* L_29;
		L_29 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, 5, ((int32_t)16787353));
		__this->___RIGHTTURNTROP_14 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNTROP_14), (void*)L_30);
		RuntimeObject* L_31 = __this->___RIGHTTURNTROP_14;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNTROP_14_val = L_32;
		RuntimeObject* L_33;
		L_33 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)16787353));
		__this->___RIGHTTURNTROP_20 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNTROP_20), (void*)L_34);
		RuntimeObject* L_35 = __this->___RIGHTTURNTROP_20;
		NullCheck(L_35);
		float L_36;
		L_36 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNTROP_20_val = L_36;
		RuntimeObject* L_37 = __this->___RIGHTTURNTROP_11;
		float L_38 = __this->___RIGHTTURNTROP_14_val;
		float L_39 = __this->___RIGHTTURNTROP_20_val;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_38, (1.0f))), ((float)il2cpp_codegen_subtract(L_39, (1.0f))))));
	}

IL_0196:
	{
		RuntimeObject* L_40;
		L_40 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_40, 5, ((int32_t)16787353));
		__this->___RIGHTTURNTROP_24 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNTROP_24), (void*)L_41);
		RuntimeObject* L_42 = __this->___RIGHTTURNTROP_24;
		NullCheck(L_42);
		float L_43;
		L_43 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNTROP_24_val = L_43;
		float L_44 = __this->___RIGHTTURNTROP_24_val;
		RuntimeObject* L_45 = __this->___RIGHTTURNTROP_24;
		NullCheck(L_45);
		float L_46;
		L_46 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)233), (bool)1);
		if ((!(((float)L_44) > ((float)L_46))))
		{
			goto IL_0217;
		}
	}
	{
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_47 = (TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902*)il2cpp_codegen_object_new(TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902_il2cpp_TypeInfo_var);
		TURNRIGHT__ctor_mAD82B12963F20823A2CFE3E007E94496A56C8353(L_47, NULL);
		V_1 = L_47;
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_48 = V_1;
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_49 = L_48;
		RuntimeObject* L_50;
		L_50 = TROPTURN_get_MY_m2F8B05D8412A55C6453901606B835E2D974E00AD_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_51 = L_49;
		RuntimeObject* L_52;
		L_52 = TROPTURN_get_THERE_m93B1DDC77828B6037897E4184F48ACA6F42B8B4C_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_52);
		RuntimeObject* L_53;
		L_53 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_53);
		RuntimeObject* L_54;
		L_54 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_55 = V_1;
		NullCheck(L_54);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_54, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_55);
		return (bool)0;
	}

IL_0217:
	{
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_57 = (TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518*)il2cpp_codegen_object_new(TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518_il2cpp_TypeInfo_var);
		TURNLEFT__ctor_m361003A6CB36C1059716F979D3822771D39CD395(L_57, NULL);
		V_2 = L_57;
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_58 = V_2;
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_59 = L_58;
		RuntimeObject* L_60;
		L_60 = TROPTURN_get_MY_m2F8B05D8412A55C6453901606B835E2D974E00AD_inline(__this, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_59, L_60);
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_61 = L_59;
		RuntimeObject* L_62;
		L_62 = TROPTURN_get_THERE_m93B1DDC77828B6037897E4184F48ACA6F42B8B4C_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_62);
		RuntimeObject* L_63;
		L_63 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_63);
		RuntimeObject* L_64;
		L_64 = TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline(__this, NULL);
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_65 = V_2;
		NullCheck(L_64);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_64, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_65);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33 (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPBACKOFF_set_MY_m3E90C92D91BA12CACDC3335CD30D57AC33CE31DD (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPBACKOFF_get_THERE_m66653026948168AC8ECCB1C5914991453EDDBF23 (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPBACKOFF_set_THERE_m7F435331B5FEEE21ACE560CA6BB136ADD6093639 (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7 (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPBACKOFF_set__world_m881B48783EF4743F99AECED276EA3055808F1F37 (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPBACKOFF_get_Current_m5808FD1E0FE269678A966E2099F7C40A21B8CF0A (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPBACKOFF_set_Current_m268B3B18F8D24E8DB4648330A9E541105A2135CE (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPBACKOFF_Reset_mA284DF8C7CE4984BE639F6651E2D8A32C21A1BDA (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPBACKOFF__ctor_m55FC4CF40CAD3A9AAD93C9EB785704E86C4E5C19 (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPBACKOFF__ctor_m1140DC016894F49DCBA3AD5BFD78DA343000F3D5 (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPBACKOFF_set_MY_m3E90C92D91BA12CACDC3335CD30D57AC33CE31DD_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPBACKOFF_set_THERE_m7F435331B5FEEE21ACE560CA6BB136ADD6093639_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPBACKOFF_set__world_m881B48783EF4743F99AECED276EA3055808F1F37_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPBACKOFF_MoveNext_m12EBFE44348108FE4D2DC8ECA31F773067CFDB13 (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_0 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_1 = NULL;
	FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* V_2 = NULL;
	TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* V_3 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_02db;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)-1556277325), (bool)1, (bool)1);
		__this->___CYCLETROPBACK_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLETROPBACK_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___CYCLETROPBACK_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)190), L_12);
		RuntimeObject* L_13;
		L_13 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_12), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_14;
		RuntimeObject* L_18 = __this->___TROPHIT_12;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)209), L_18);
		RuntimeObject* L_19;
		L_19 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)207), (1.0f));
		RuntimeObject* L_21;
		L_21 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (1.0f));
		RuntimeObject* L_23;
		L_23 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)1736449204), (bool)1, (bool)1);
		__this->___TROP1TEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP1TEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___TROP1TEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.300000012f));
		RuntimeObject* L_31;
		L_31 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_27 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_27), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_29 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_29;
		RuntimeObject* L_36 = __this->___BULLET_27;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)199), L_36);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_37 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_37, NULL);
		V_0 = L_37;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_38 = V_0;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_39 = L_38;
		RuntimeObject* L_40;
		L_40 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = TROPBACKOFF_get_THERE_m66653026948168AC8ECCB1C5914991453EDDBF23_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_45 = V_0;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
		RuntimeObject* L_47;
		L_47 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_31 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_47);
		RuntimeObject* L_48;
		L_48 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_33 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_33), (void*)L_48);
		RuntimeObject* L_49 = __this->___MY_33;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)194), (bool)1);
		__this->___temp_34 = L_50;
		RuntimeObject* L_51;
		L_51 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_36 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_36), (void*)L_51);
		RuntimeObject* L_52 = __this->___MY_36;
		NullCheck(L_52);
		float L_53;
		L_53 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)194), (bool)1);
		__this->___temp_37 = L_53;
		RuntimeObject* L_54 = __this->___MY_31;
		float L_55 = __this->___temp_37;
		float L_56;
		L_56 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)194), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_55, L_56)), (0.5f))));
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_57 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_57, NULL);
		V_1 = L_57;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_58 = V_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_59 = L_58;
		RuntimeObject* L_60;
		L_60 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_59, L_60);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_61 = L_59;
		RuntimeObject* L_62;
		L_62 = TROPBACKOFF_get_THERE_m66653026948168AC8ECCB1C5914991453EDDBF23_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_62);
		RuntimeObject* L_63;
		L_63 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_63);
		RuntimeObject* L_64;
		L_64 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_65 = V_1;
		NullCheck(L_64);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_64, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_65);
		float L_67;
		L_67 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_67;
		float L_68 = __this->___startTime1;
		float L_69;
		L_69 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)64), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_68, L_69));
		__this->____cursor = 1;
		goto IL_02db;
	}

IL_02ce:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_70 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		TROPBACKOFF_set_Current_m268B3B18F8D24E8DB4648330A9E541105A2135CE_inline(__this, L_70, NULL);
		return (bool)1;
	}

IL_02db:
	{
		float L_71;
		L_71 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_72 = __this->___endTime1;
		if ((((float)L_71) < ((float)L_72)))
		{
			goto IL_02ce;
		}
	}
	{
		TROPBACKOFF_set_Current_m268B3B18F8D24E8DB4648330A9E541105A2135CE_inline(__this, NULL, NULL);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_73 = (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5*)il2cpp_codegen_object_new(FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0(L_73, NULL);
		V_2 = L_73;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_74 = V_2;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_75 = L_74;
		RuntimeObject* L_76;
		L_76 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		NullCheck(L_75);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_75, L_76);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_77 = L_75;
		RuntimeObject* L_78;
		L_78 = TROPBACKOFF_get_THERE_m66653026948168AC8ECCB1C5914991453EDDBF23_inline(__this, NULL);
		NullCheck(L_77);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_77, L_78);
		RuntimeObject* L_79;
		L_79 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		NullCheck(L_77);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_77, L_79);
		RuntimeObject* L_80;
		L_80 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_81 = V_2;
		NullCheck(L_80);
		RuntimeObject* L_82;
		L_82 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_80, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_81);
		RuntimeObject* L_83;
		L_83 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		__this->___MY_45 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_45), (void*)L_83);
		RuntimeObject* L_84 = __this->___MY_45;
		NullCheck(L_84);
		float L_85;
		L_85 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_84, ((int32_t)173), (bool)1);
		__this->___temp_46 = L_85;
		float L_86 = __this->___temp_46;
		bool L_87;
		L_87 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_86, (5.0f), NULL);
		if (!L_87)
		{
			goto IL_035e;
		}
	}
	{
		return (bool)0;
	}

IL_035e:
	{
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_88 = (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753*)il2cpp_codegen_object_new(TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753_il2cpp_TypeInfo_var);
		TROPWAIT__ctor_mD89D55D997B43B342C3F4F4290102CB1140018A0(L_88, NULL);
		V_3 = L_88;
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_89 = V_3;
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_90 = L_89;
		RuntimeObject* L_91;
		L_91 = TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline(__this, NULL);
		NullCheck(L_90);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_90, L_91);
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_92 = L_90;
		RuntimeObject* L_93;
		L_93 = TROPBACKOFF_get_THERE_m66653026948168AC8ECCB1C5914991453EDDBF23_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_93);
		RuntimeObject* L_94;
		L_94 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_94);
		RuntimeObject* L_95;
		L_95 = TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline(__this, NULL);
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_96 = V_3;
		NullCheck(L_95);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_95, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_96);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWAIT_set_MY_mEE81CBD84566679B64EC49FFA9B56C49630CC8AD (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWAIT_get_THERE_m7B02129FFEC70D095211F268BC89CEE2A8C6200E (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWAIT_set_THERE_m1AF0630C79B1A101291B21BF3BD34C236B490D98 (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWAIT_get__world_m27A5C453A36918D97CA95B9BED95F78D3BBCC01F (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWAIT_set__world_mE56DC706BC8D9D7E9D9E76D611875F2864661BB3 (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWAIT_get_Current_mB3028F3139FAA8487F6B2C5F8971FBF4015BCD28 (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWAIT_set_Current_mC88A5A60A4744C123B55600DACDD43C40B98B710 (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWAIT_Reset_m4F0D99D9A747E2CF90BA164537B09F26254A9D6B (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWAIT__ctor_mD89D55D997B43B342C3F4F4290102CB1140018A0 (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWAIT__ctor_mBFB5901C5D0D56019D7454B9F17E837E7C91F293 (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPWAIT_set_MY_mEE81CBD84566679B64EC49FFA9B56C49630CC8AD_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPWAIT_set_THERE_m1AF0630C79B1A101291B21BF3BD34C236B490D98_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPWAIT_set__world_mE56DC706BC8D9D7E9D9E76D611875F2864661BB3_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPWAIT_MoveNext_m81E16136B605203818A4BEB5A2A4EE86494A3EBA (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)176), (bool)1);
		__this->___temp_3 = L_3;
		float L_4 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_4, (4.0f), NULL);
		if (!L_5)
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject* L_6;
		L_6 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_6;
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)205), (bool)1);
		__this->___temp_7 = L_8;
		float L_9 = __this->___temp_7;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_9, (1.0f), NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		return (bool)0;
	}

IL_0073:
	{
		RuntimeObject* L_11;
		L_11 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_10;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_13;
		L_13 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_13), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_13;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_15;
		L_15 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_16 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_16), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_16;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_17;
		L_17 = TROPWAIT_get__world_m27A5C453A36918D97CA95B9BED95F78D3BBCC01F_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)1708986426), (bool)1, (bool)1);
		__this->___CYCLETROPATTACK_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLETROPATTACK_17), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_19 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_19), (void*)L_20);
		RuntimeObject* L_21 = __this->___MY_19;
		RuntimeObject* L_22 = __this->___CYCLETROPATTACK_17;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)190), L_22);
		RuntimeObject* L_23;
		L_23 = TROPWAIT_get__world_m27A5C453A36918D97CA95B9BED95F78D3BBCC01F_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_20), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_22 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_22;
		RuntimeObject* L_28 = __this->___TROPHIT_20;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)209), L_28);
		RuntimeObject* L_29;
		L_29 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_25 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_25;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)207), (0.0f));
		RuntimeObject* L_31;
		L_31 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_28 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_28), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_28;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)213), (0.0f));
		RuntimeObject* L_33;
		L_33 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_31 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_33);
		RuntimeObject* L_34 = __this->___MY_31;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_35;
		L_35 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_34 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_34), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_34;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)176), (1.0f));
		RuntimeObject* L_37;
		L_37 = TROPWAIT_get__world_m27A5C453A36918D97CA95B9BED95F78D3BBCC01F_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)1736413267), (bool)1, (bool)1);
		__this->___TROP0TEX_35 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP0TEX_35), (void*)L_39);
		RuntimeObject* L_40;
		L_40 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_37 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_37), (void*)L_40);
		RuntimeObject* L_41 = __this->___MY_37;
		RuntimeObject* L_42 = __this->___TROP0TEX_35;
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)164), L_42);
		RuntimeObject* L_43;
		L_43 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_40 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_40), (void*)L_43);
		RuntimeObject* L_44 = __this->___MY_40;
		NullCheck(L_44);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)168), (0.0f));
		RuntimeObject* L_45;
		L_45 = TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline(__this, NULL);
		__this->___MY_43 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_43), (void*)L_45);
		RuntimeObject* L_46 = __this->___MY_43;
		NullCheck(L_46);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)199), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6 (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWANDER_set_MY_m63657DD72ADDF9EB6381222B1D8A7BE2CDABDEFD (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWANDER_get_THERE_mF476ADD0278E091867E0C969F885CD71D6487FC0 (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWANDER_set_THERE_mC03D66A83A5A82C9282DAE2F54DA2BEEEA7ACCCA (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWANDER_get__world_m8DB68B0D5A60DBEDDE9D31E66E9AF1335684EF28 (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWANDER_set__world_m0A4C51CBE46B99DA5117DA1D534DA9DFEFDA5DD8 (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWANDER_get_Current_m999AE9DF50CAD14E1CC8EC159FA38EE5653B12C4 (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWANDER_set_Current_mF255F0A21C5150CBB0D3D8E0F0D6A0C9EDD1C60F (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWANDER_Reset_m1B4123534CD531464C9453E8CEAAF8718401A37B (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWANDER__ctor_m5109BBD108D34C158652B45AD496983B1BF8EE9C (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWANDER__ctor_m1B5A7A5E66753AA288AA5CCFD9A7E6339304329C (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPWANDER_set_MY_m63657DD72ADDF9EB6381222B1D8A7BE2CDABDEFD_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPWANDER_set_THERE_mC03D66A83A5A82C9282DAE2F54DA2BEEEA7ACCCA_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPWANDER_set__world_m0A4C51CBE46B99DA5117DA1D534DA9DFEFDA5DD8_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPWANDER_MoveNext_mAE66A4D86F1C05F83056BD0DE22C80DAD1A0AB83 (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_0 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = TROPWANDER_get__world_m8DB68B0D5A60DBEDDE9D31E66E9AF1335684EF28_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)1708986426), (bool)1, (bool)1);
		__this->___CYCLETROPATTACK_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLETROPATTACK_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___CYCLETROPATTACK_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)190), L_12);
		RuntimeObject* L_13;
		L_13 = TROPWANDER_get__world_m8DB68B0D5A60DBEDDE9D31E66E9AF1335684EF28_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_12), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_14;
		RuntimeObject* L_18 = __this->___TROPHIT_12;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)209), L_18);
		RuntimeObject* L_19;
		L_19 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)207), (1.0f));
		RuntimeObject* L_21;
		L_21 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)213), (0.0f));
		RuntimeObject* L_23;
		L_23 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_23 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_23;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)219), (0.0f));
		RuntimeObject* L_25;
		L_25 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_26 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_26;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)176), (1.0f));
		RuntimeObject* L_27;
		L_27 = TROPWANDER_get__world_m8DB68B0D5A60DBEDDE9D31E66E9AF1335684EF28_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)1736449204), (bool)1, (bool)1);
		__this->___TROP1TEX_27 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP1TEX_27), (void*)L_29);
		RuntimeObject* L_30;
		L_30 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_29 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_29;
		RuntimeObject* L_32 = __this->___TROP1TEX_27;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)164), L_32);
		RuntimeObject* L_33;
		L_33 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_32 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_33);
		RuntimeObject* L_34 = __this->___MY_32;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)168), (0.300000012f));
		RuntimeObject* L_35;
		L_35 = TROPWANDER_get__world_m8DB68B0D5A60DBEDDE9D31E66E9AF1335684EF28_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_33 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_33), (void*)L_37);
		RuntimeObject* L_38;
		L_38 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		__this->___MY_35 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_35), (void*)L_38);
		RuntimeObject* L_39 = __this->___MY_35;
		RuntimeObject* L_40 = __this->___BULLET_33;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)199), L_40);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_41 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_41, NULL);
		V_0 = L_41;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_42 = V_0;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_43 = L_42;
		RuntimeObject* L_44;
		L_44 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_44);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_45 = L_43;
		RuntimeObject* L_46;
		L_46 = TROPWANDER_get_THERE_mF476ADD0278E091867E0C969F885CD71D6487FC0_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_46);
		RuntimeObject* L_47;
		L_47 = TROPWANDER_get__world_m8DB68B0D5A60DBEDDE9D31E66E9AF1335684EF28_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_47);
		RuntimeObject* L_48;
		L_48 = TROPWANDER_get__world_m8DB68B0D5A60DBEDDE9D31E66E9AF1335684EF28_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_49 = V_0;
		NullCheck(L_48);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_49);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_51 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_51, NULL);
		V_1 = L_51;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_52 = V_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_53 = L_52;
		RuntimeObject* L_54;
		L_54 = TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_54);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_55 = L_53;
		RuntimeObject* L_56;
		L_56 = TROPWANDER_get_THERE_mF476ADD0278E091867E0C969F885CD71D6487FC0_inline(__this, NULL);
		NullCheck(L_55);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_55, L_56);
		RuntimeObject* L_57;
		L_57 = TROPWANDER_get__world_m8DB68B0D5A60DBEDDE9D31E66E9AF1335684EF28_inline(__this, NULL);
		NullCheck(L_55);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_55, L_57);
		RuntimeObject* L_58;
		L_58 = TROPWANDER_get__world_m8DB68B0D5A60DBEDDE9D31E66E9AF1335684EF28_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_59 = V_1;
		NullCheck(L_58);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_58, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_59);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3 (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSEARCH_set_MY_m2AE31C563E9E971EC3C0C5D91FA2378B91ECC852 (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSEARCH_get_THERE_m6B171B0F01B490899AF1EF27E5EB8EA5AED53B62 (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSEARCH_set_THERE_m248469948A404E3261117D2B3D82CF6F0E1B8F57 (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSEARCH_get__world_m3939099B8C89208632B04C3F08CE6FB3C62FF506 (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSEARCH_set__world_mC8332D4232D3EC2A14F47CF17726A4AD5FB99111 (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSEARCH_get_Current_mB88B595417A9F7E8D191BF015E8018B2CF39E5D8 (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSEARCH_set_Current_m27F9A972C4A82BCDF54B6F336346BD5D0A949975 (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSEARCH_Reset_m78D66512218B14F50909C4EA31CF035F68956B30 (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSEARCH__ctor_mA9F2D1697DA3A42B5480B911ED8C97D68C571283 (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSEARCH__ctor_m59FF1F319D08120DD34458A995E063DFD989F2BF (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPSEARCH_set_MY_m2AE31C563E9E971EC3C0C5D91FA2378B91ECC852_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPSEARCH_set_THERE_m248469948A404E3261117D2B3D82CF6F0E1B8F57_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPSEARCH_set__world_mC8332D4232D3EC2A14F47CF17726A4AD5FB99111_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPSEARCH_MoveNext_m8D08033C888608408019A7FAA0B2B4F1F6714D25 (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_0 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = TROPSEARCH_get__world_m3939099B8C89208632B04C3F08CE6FB3C62FF506_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)1708986426), (bool)1, (bool)1);
		__this->___CYCLETROPATTACK_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLETROPATTACK_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___CYCLETROPATTACK_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)190), L_12);
		RuntimeObject* L_13;
		L_13 = TROPSEARCH_get__world_m3939099B8C89208632B04C3F08CE6FB3C62FF506_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_12), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		__this->___MY_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_14;
		RuntimeObject* L_18 = __this->___TROPHIT_12;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)209), L_18);
		RuntimeObject* L_19;
		L_19 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)207), (1.0f));
		RuntimeObject* L_21;
		L_21 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)219), (0.0f));
		RuntimeObject* L_23;
		L_23 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		__this->___MY_23 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_23;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)176), (11.0f));
		RuntimeObject* L_25;
		L_25 = TROPSEARCH_get__world_m3939099B8C89208632B04C3F08CE6FB3C62FF506_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)1737024196), (bool)1, (bool)1);
		__this->___TROPATEX_24 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPATEX_24), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		__this->___MY_26 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_26;
		RuntimeObject* L_30 = __this->___TROPATEX_24;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)164), L_30);
		RuntimeObject* L_31;
		L_31 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		__this->___MY_29 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_29;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)168), (0.300000012f));
		RuntimeObject* L_33;
		L_33 = TROPSEARCH_get__world_m3939099B8C89208632B04C3F08CE6FB3C62FF506_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_30 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_30), (void*)L_35);
		RuntimeObject* L_36;
		L_36 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		__this->___MY_32 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_32;
		RuntimeObject* L_38 = __this->___BULLET_30;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)199), L_38);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_39 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_39, NULL);
		V_0 = L_39;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_40 = V_0;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_41 = L_40;
		RuntimeObject* L_42;
		L_42 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_43 = L_41;
		RuntimeObject* L_44;
		L_44 = TROPSEARCH_get_THERE_m6B171B0F01B490899AF1EF27E5EB8EA5AED53B62_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_44);
		RuntimeObject* L_45;
		L_45 = TROPSEARCH_get__world_m3939099B8C89208632B04C3F08CE6FB3C62FF506_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_45);
		RuntimeObject* L_46;
		L_46 = TROPSEARCH_get__world_m3939099B8C89208632B04C3F08CE6FB3C62FF506_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_47 = V_0;
		NullCheck(L_46);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_47);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_49 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_49, NULL);
		V_1 = L_49;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_50 = V_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_51 = L_50;
		RuntimeObject* L_52;
		L_52 = TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_52);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_53 = L_51;
		RuntimeObject* L_54;
		L_54 = TROPSEARCH_get_THERE_m6B171B0F01B490899AF1EF27E5EB8EA5AED53B62_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_54);
		RuntimeObject* L_55;
		L_55 = TROPSEARCH_get__world_m3939099B8C89208632B04C3F08CE6FB3C62FF506_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_55);
		RuntimeObject* L_56;
		L_56 = TROPSEARCH_get__world_m3939099B8C89208632B04C3F08CE6FB3C62FF506_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_57 = V_1;
		NullCheck(L_56);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_57);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIDE_set_MY_mFA955FC06431F1185366CD0D57B4CBF70F2BE2CD (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPHIDE_get_THERE_m66375BD129D0D33B51B9C24296EFEACC0AF72C1D (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIDE_set_THERE_m6DC222EEED21F14A176BE4CA024C88CE23968B85 (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2 (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIDE_set__world_mBE92153B48377B7DE80D9E876E2423FB71FF8E68 (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPHIDE_get_Current_m2683639A2D7F224EF1DD7742EAE0DB440D859D1F (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIDE_set_Current_mC680764F649AED4113CDEE76C444784366F3C2A2 (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIDE_Reset_mF2C7C3D49F2E7A368F386373AA5E17EC9398BAAF (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIDE__ctor_m77C37A1984BF40C5B9CE28E0295873908592DE23 (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIDE__ctor_m8746139062D24F754DBD7FCE797E9F0D166A7A05 (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPHIDE_set_MY_mFA955FC06431F1185366CD0D57B4CBF70F2BE2CD_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPHIDE_set_THERE_m6DC222EEED21F14A176BE4CA024C88CE23968B85_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPHIDE_set__world_mBE92153B48377B7DE80D9E876E2423FB71FF8E68_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPHIDE_MoveNext_mEFE17711829E5BC7DCFE14C341DC3064F0A70491 (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_0 = NULL;
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_1 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_2 = NULL;
	TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* V_3 = NULL;
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_4 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_5 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_03b8;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)1987912643), (bool)1, (bool)1);
		__this->___TROPESCAPE_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPESCAPE_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___TROPESCAPE_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)192), L_8);
		RuntimeObject* L_9;
		L_9 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_8;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_11;
		L_11 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)1737263724), (bool)1, (bool)1);
		__this->___TROPHIDE_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIDE_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___TROPHIDE_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)190), L_16);
		RuntimeObject* L_17;
		L_17 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_12 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_12), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_14 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_20);
		RuntimeObject* L_21 = __this->___MY_14;
		RuntimeObject* L_22 = __this->___TROPHIT_12;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)209), L_22);
		RuntimeObject* L_23;
		L_23 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_17;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)207), (1.0f));
		RuntimeObject* L_25;
		L_25 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_20;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)219), (0.0f));
		RuntimeObject* L_27;
		L_27 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_23 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_23;
		NullCheck(L_28);
		float L_29;
		L_29 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)176), (bool)1);
		__this->___temp_24 = L_29;
		float L_30 = __this->___temp_24;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_30, (4.0f), NULL);
		if (L_31)
		{
			goto IL_0488;
		}
	}
	{
		RuntimeObject* L_32;
		L_32 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_27 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_27;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)176), (4.0f));
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_34 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_34, NULL);
		V_0 = L_34;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_35 = V_0;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_36 = L_35;
		RuntimeObject* L_37;
		L_37 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_36, L_37);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_38 = L_36;
		RuntimeObject* L_39;
		L_39 = TROPHIDE_get_THERE_m66375BD129D0D33B51B9C24296EFEACC0AF72C1D_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_39);
		RuntimeObject* L_40;
		L_40 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_40);
		RuntimeObject* L_41;
		L_41 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_42 = V_0;
		NullCheck(L_41);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_42);
		RuntimeObject* L_44;
		L_44 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_29 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_31 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_45);
		RuntimeObject* L_46 = __this->___MY_31;
		NullCheck(L_46);
		float L_47;
		L_47 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)194), (bool)1);
		__this->___temp_32 = L_47;
		RuntimeObject* L_48;
		L_48 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_34 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_34), (void*)L_48);
		RuntimeObject* L_49 = __this->___MY_34;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)194), (bool)1);
		__this->___temp_35 = L_50;
		RuntimeObject* L_51 = __this->___MY_29;
		float L_52 = __this->___temp_35;
		float L_53;
		L_53 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)194), ((float)il2cpp_codegen_add(L_52, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_53, (0.5f))), (2.4000001f))))));
		RuntimeObject* L_54;
		L_54 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)1736449204), (bool)1, (bool)1);
		__this->___TROP1TEX_44 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP1TEX_44), (void*)L_56);
		RuntimeObject* L_57;
		L_57 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_46 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_57);
		RuntimeObject* L_58 = __this->___MY_46;
		RuntimeObject* L_59 = __this->___TROP1TEX_44;
		NullCheck(L_58);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)164), L_59);
		RuntimeObject* L_60;
		L_60 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_49 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_49), (void*)L_60);
		RuntimeObject* L_61 = __this->___MY_49;
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)172), (20.0f));
		RuntimeObject* L_62;
		L_62 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_52 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_52), (void*)L_62);
		RuntimeObject* L_63 = __this->___MY_52;
		NullCheck(L_63);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_63, ((int32_t)168), (0.600000024f));
		RuntimeObject* L_64;
		L_64 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_64);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_53 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_53), (void*)L_66);
		RuntimeObject* L_67;
		L_67 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_55 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_55), (void*)L_67);
		RuntimeObject* L_68 = __this->___MY_55;
		RuntimeObject* L_69 = __this->___BULLET_53;
		NullCheck(L_68);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)199), L_69);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_70 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_70, NULL);
		V_1 = L_70;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_71 = V_1;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_72 = L_71;
		RuntimeObject* L_73;
		L_73 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		NullCheck(L_72);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_72, L_73);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_74 = L_72;
		RuntimeObject* L_75;
		L_75 = TROPHIDE_get_THERE_m66375BD129D0D33B51B9C24296EFEACC0AF72C1D_inline(__this, NULL);
		NullCheck(L_74);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_74, L_75);
		RuntimeObject* L_76;
		L_76 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_74);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_74, L_76);
		RuntimeObject* L_77;
		L_77 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_78 = V_1;
		NullCheck(L_77);
		RuntimeObject* L_79;
		L_79 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_77, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_78);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_80 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_80, NULL);
		V_2 = L_80;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_81 = V_2;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_82 = L_81;
		RuntimeObject* L_83;
		L_83 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		NullCheck(L_82);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_82, L_83);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_84 = L_82;
		RuntimeObject* L_85;
		L_85 = TROPHIDE_get_THERE_m66375BD129D0D33B51B9C24296EFEACC0AF72C1D_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_85);
		RuntimeObject* L_86;
		L_86 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_86);
		RuntimeObject* L_87;
		L_87 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_88 = V_2;
		NullCheck(L_87);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_87, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_88);
		float L_90;
		L_90 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_90;
		float L_91 = __this->___startTime1;
		float L_92;
		L_92 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)384), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_91, L_92));
		__this->____cursor = 1;
		goto IL_03b8;
	}

IL_03ab:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_93 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		TROPHIDE_set_Current_mC680764F649AED4113CDEE76C444784366F3C2A2_inline(__this, L_93, NULL);
		return (bool)1;
	}

IL_03b8:
	{
		float L_94;
		L_94 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_95 = __this->___endTime1;
		if ((((float)L_94) < ((float)L_95)))
		{
			goto IL_03ab;
		}
	}
	{
		TROPHIDE_set_Current_mC680764F649AED4113CDEE76C444784366F3C2A2_inline(__this, NULL, NULL);
		RuntimeObject* L_96;
		L_96 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_59 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_59), (void*)L_96);
		RuntimeObject* L_97 = __this->___MY_59;
		NullCheck(L_97);
		float L_98;
		L_98 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_97, ((int32_t)173), (bool)1);
		__this->___temp_60 = L_98;
		float L_99 = __this->___temp_60;
		bool L_100;
		L_100 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_99, (5.0f), NULL);
		if (!L_100)
		{
			goto IL_0403;
		}
	}
	{
		return (bool)0;
	}

IL_0403:
	{
		RuntimeObject* L_101;
		L_101 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_63 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_63), (void*)L_101);
		RuntimeObject* L_102 = __this->___MY_63;
		NullCheck(L_102);
		float L_103;
		L_103 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)173), (bool)1);
		__this->___temp_64 = L_103;
		RuntimeObject* L_104;
		L_104 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_66 = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_66), (void*)L_104);
		RuntimeObject* L_105 = __this->___MY_66;
		float L_106 = __this->___temp_64;
		NullCheck(L_105);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_105, ((int32_t)173), ((float)il2cpp_codegen_add(L_106, (-2.0f))));
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_107 = (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA*)il2cpp_codegen_object_new(TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		TROPFOLLOWATTACK__ctor_m3F9D3BD614C9DFC04F5208E62E147625D29FFE3B(L_107, NULL);
		V_3 = L_107;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_108 = V_3;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_109 = L_108;
		RuntimeObject* L_110;
		L_110 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		NullCheck(L_109);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_109, L_110);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_111 = L_109;
		RuntimeObject* L_112;
		L_112 = TROPHIDE_get_THERE_m66375BD129D0D33B51B9C24296EFEACC0AF72C1D_inline(__this, NULL);
		NullCheck(L_111);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_111, L_112);
		RuntimeObject* L_113;
		L_113 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_111);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_111, L_113);
		RuntimeObject* L_114;
		L_114 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_115 = V_3;
		NullCheck(L_114);
		RuntimeObject* L_116;
		L_116 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_114, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_115);
		return (bool)0;
	}

IL_0488:
	{
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_117 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_117, NULL);
		V_4 = L_117;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_118 = V_4;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_119 = L_118;
		RuntimeObject* L_120;
		L_120 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		NullCheck(L_119);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_119, L_120);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_121 = L_119;
		RuntimeObject* L_122;
		L_122 = TROPHIDE_get_THERE_m66375BD129D0D33B51B9C24296EFEACC0AF72C1D_inline(__this, NULL);
		NullCheck(L_121);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_121, L_122);
		RuntimeObject* L_123;
		L_123 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_121);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_121, L_123);
		RuntimeObject* L_124;
		L_124 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_125 = V_4;
		NullCheck(L_124);
		RuntimeObject* L_126;
		L_126 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_124, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_125);
		RuntimeObject* L_127;
		L_127 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_68 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_68), (void*)L_127);
		RuntimeObject* L_128;
		L_128 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_70 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_70), (void*)L_128);
		RuntimeObject* L_129 = __this->___MY_70;
		NullCheck(L_129);
		float L_130;
		L_130 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_129, ((int32_t)194), (bool)1);
		__this->___temp_71 = L_130;
		RuntimeObject* L_131;
		L_131 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_73 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_73), (void*)L_131);
		RuntimeObject* L_132 = __this->___MY_73;
		NullCheck(L_132);
		float L_133;
		L_133 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_132, ((int32_t)194), (bool)1);
		__this->___temp_74 = L_133;
		RuntimeObject* L_134 = __this->___MY_68;
		float L_135 = __this->___temp_74;
		float L_136;
		L_136 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_134);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_134, ((int32_t)194), ((float)il2cpp_codegen_add(L_135, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_136, (0.5f))), (2.4000001f))))));
		RuntimeObject* L_137;
		L_137 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_137);
		RuntimeObject* L_138;
		L_138 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_137);
		NullCheck(L_138);
		RuntimeObject* L_139;
		L_139 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_138, ((int32_t)1736449204), (bool)1, (bool)1);
		__this->___TROP1TEX_83 = L_139;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP1TEX_83), (void*)L_139);
		RuntimeObject* L_140;
		L_140 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_85 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_85), (void*)L_140);
		RuntimeObject* L_141 = __this->___MY_85;
		RuntimeObject* L_142 = __this->___TROP1TEX_83;
		NullCheck(L_141);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)164), L_142);
		RuntimeObject* L_143;
		L_143 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_88 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_88), (void*)L_143);
		RuntimeObject* L_144 = __this->___MY_88;
		NullCheck(L_144);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_144, ((int32_t)172), (20.0f));
		RuntimeObject* L_145;
		L_145 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_91 = L_145;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_91), (void*)L_145);
		RuntimeObject* L_146 = __this->___MY_91;
		NullCheck(L_146);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_146, ((int32_t)168), (0.600000024f));
		RuntimeObject* L_147;
		L_147 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_147);
		RuntimeObject* L_148;
		L_148 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_147);
		NullCheck(L_148);
		RuntimeObject* L_149;
		L_149 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_148, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_92 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_92), (void*)L_149);
		RuntimeObject* L_150;
		L_150 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		__this->___MY_94 = L_150;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_94), (void*)L_150);
		RuntimeObject* L_151 = __this->___MY_94;
		RuntimeObject* L_152 = __this->___BULLET_92;
		NullCheck(L_151);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_151, ((int32_t)199), L_152);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_153 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_153, NULL);
		V_5 = L_153;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_154 = V_5;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_155 = L_154;
		RuntimeObject* L_156;
		L_156 = TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline(__this, NULL);
		NullCheck(L_155);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_155, L_156);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_157 = L_155;
		RuntimeObject* L_158;
		L_158 = TROPHIDE_get_THERE_m66375BD129D0D33B51B9C24296EFEACC0AF72C1D_inline(__this, NULL);
		NullCheck(L_157);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_157, L_158);
		RuntimeObject* L_159;
		L_159 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		NullCheck(L_157);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_157, L_159);
		RuntimeObject* L_160;
		L_160 = TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_161 = V_5;
		NullCheck(L_160);
		RuntimeObject* L_162;
		L_162 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_160, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_161);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLISTEN_set_MY_m4E8306AB8BF51A4DF037139402C42B14E4FB3C5C (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPLISTEN_get_THERE_m33BEE7868B9E543363CC96456A36402DED2835A7 (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLISTEN_set_THERE_m991939E04E5544B45ED1B631F2334AE922856F10 (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPLISTEN_get__world_m67B210CD1ABC0321F724758C183E81D990B2ECA7 (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLISTEN_set__world_mDEEB1269730F3F59923094361C3A8A1A9FF8BF6B (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPLISTEN_get_Current_m5D7A05A896247476B572A59C7BA09F11046E72C9 (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLISTEN_set_Current_mE317E1372E233F3B142B46E185F2A25DC79FFC20 (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLISTEN_Reset_m39CF269722E96278C946E82737004EF0B535804B (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLISTEN__ctor_m4CD264F331299647343587EE3463C814109E8606 (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLISTEN__ctor_m786CEB90301A271BEDB41FF3528F91A8F429FB89 (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPLISTEN_set_MY_m4E8306AB8BF51A4DF037139402C42B14E4FB3C5C_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPLISTEN_set_THERE_m991939E04E5544B45ED1B631F2334AE922856F10_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPLISTEN_set__world_mDEEB1269730F3F59923094361C3A8A1A9FF8BF6B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPLISTEN_MoveNext_m1FBB5CAEEA0F3DA01D074B6C08AA4667B221760F (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_02b1;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)176), (bool)1);
		__this->___temp_3 = L_3;
		float L_4 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_4, (4.0f), NULL);
		if (!L_5)
		{
			goto IL_0078;
		}
	}
	{
		RuntimeObject* L_6;
		L_6 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_6;
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)205), (bool)1);
		__this->___temp_7 = L_8;
		float L_9 = __this->___temp_7;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_9, (1.0f), NULL);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		return (bool)0;
	}

IL_0078:
	{
		RuntimeObject* L_11;
		L_11 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_10;
		NullCheck(L_12);
		float L_13;
		L_13 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)202), (bool)1);
		__this->___temp_11 = L_13;
		float L_14 = __this->___temp_11;
		bool L_15;
		L_15 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_14, (100.0f), NULL);
		if (L_15)
		{
			goto IL_00e4;
		}
	}
	{
		RuntimeObject* L_16;
		L_16 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_14;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)182), (bool)1);
		__this->___temp_15 = L_18;
		float L_19 = __this->___temp_15;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_19, (0.0f), NULL);
		if (L_20)
		{
			goto IL_00e4;
		}
	}
	{
		return (bool)0;
	}

IL_00e4:
	{
		RuntimeObject* L_21;
		L_21 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_18 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_18;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_23;
		L_23 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_21 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_21;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_25;
		L_25 = TROPLISTEN_get__world_m67B210CD1ABC0321F724758C183E81D990B2ECA7_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)1708986426), (bool)1, (bool)1);
		__this->___CYCLETROPATTACK_22 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLETROPATTACK_22), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_24 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_24;
		RuntimeObject* L_30 = __this->___CYCLETROPATTACK_22;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)190), L_30);
		RuntimeObject* L_31;
		L_31 = TROPLISTEN_get__world_m67B210CD1ABC0321F724758C183E81D990B2ECA7_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_25 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_25), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_27 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_27;
		RuntimeObject* L_36 = __this->___TROPHIT_25;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)209), L_36);
		RuntimeObject* L_37;
		L_37 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_30 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_37);
		RuntimeObject* L_38 = __this->___MY_30;
		NullCheck(L_38);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)207), (0.0f));
		RuntimeObject* L_39;
		L_39 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_33 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_33), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_33;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)219), (0.0f));
		RuntimeObject* L_41;
		L_41 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_36 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_36), (void*)L_41);
		RuntimeObject* L_42 = __this->___MY_36;
		NullCheck(L_42);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)176), (0.0f));
		RuntimeObject* L_43;
		L_43 = TROPLISTEN_get__world_m67B210CD1ABC0321F724758C183E81D990B2ECA7_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_43);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)1736413267), (bool)1, (bool)1);
		__this->___TROP0TEX_37 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP0TEX_37), (void*)L_45);
		RuntimeObject* L_46;
		L_46 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_39 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_39), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_39;
		RuntimeObject* L_48 = __this->___TROP0TEX_37;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)164), L_48);
		RuntimeObject* L_49;
		L_49 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_42 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_42), (void*)L_49);
		RuntimeObject* L_50 = __this->___MY_42;
		NullCheck(L_50);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)168), (0.0f));
		RuntimeObject* L_51;
		L_51 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_45 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_45), (void*)L_51);
		RuntimeObject* L_52 = __this->___MY_45;
		NullCheck(L_52);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)199), (RuntimeObject*)NULL);
		float L_53;
		L_53 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_53;
		float L_54 = __this->___startTime1;
		float L_55;
		L_55 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)120), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_54, L_55));
		__this->____cursor = 1;
		goto IL_02b1;
	}

IL_02a4:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_56 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		TROPLISTEN_set_Current_mE317E1372E233F3B142B46E185F2A25DC79FFC20_inline(__this, L_56, NULL);
		return (bool)1;
	}

IL_02b1:
	{
		float L_57;
		L_57 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_58 = __this->___endTime1;
		if ((((float)L_57) < ((float)L_58)))
		{
			goto IL_02a4;
		}
	}
	{
		TROPLISTEN_set_Current_mE317E1372E233F3B142B46E185F2A25DC79FFC20_inline(__this, NULL, NULL);
		RuntimeObject* L_59;
		L_59 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		__this->___MY_49 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_49), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_49;
		NullCheck(L_60);
		float L_61;
		L_61 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)173), (bool)1);
		__this->___temp_50 = L_61;
		float L_62 = __this->___temp_50;
		bool L_63;
		L_63 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_62, (9.0f), NULL);
		if (!L_63)
		{
			goto IL_0334;
		}
	}
	{
		TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* L_64 = (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B*)il2cpp_codegen_object_new(TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B_il2cpp_TypeInfo_var);
		TROPWANDER__ctor_m5109BBD108D34C158652B45AD496983B1BF8EE9C(L_64, NULL);
		V_0 = L_64;
		TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* L_65 = V_0;
		TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* L_66 = L_65;
		RuntimeObject* L_67;
		L_67 = TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline(__this, NULL);
		NullCheck(L_66);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_66, L_67);
		TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* L_68 = L_66;
		RuntimeObject* L_69;
		L_69 = TROPLISTEN_get_THERE_m33BEE7868B9E543363CC96456A36402DED2835A7_inline(__this, NULL);
		NullCheck(L_68);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_68, L_69);
		RuntimeObject* L_70;
		L_70 = TROPLISTEN_get__world_m67B210CD1ABC0321F724758C183E81D990B2ECA7_inline(__this, NULL);
		NullCheck(L_68);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_68, L_70);
		RuntimeObject* L_71;
		L_71 = TROPLISTEN_get__world_m67B210CD1ABC0321F724758C183E81D990B2ECA7_inline(__this, NULL);
		TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* L_72 = V_0;
		NullCheck(L_71);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_72);
		return (bool)0;
	}

IL_0334:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4 (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWARNING_set_MY_m0F71AEB72BC773F3D0BFF1144EA6F8DEDA6269AE (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWARNING_get_THERE_mB968973F6F0A1ABC149A96D2A3B7DCD364303F3F (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWARNING_set_THERE_m2FECFCF8741C62D03B6AF74000D7219F85C83D78 (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1 (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWARNING_set__world_m2FD1850602F215A2F61CC8B16DA73B4AF5E45F54 (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPWARNING_get_Current_m0E5767997877AD627D8728930FDB316698867293 (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWARNING_set_Current_mD85E0027929DCBEDFFDB28EBFA16B43FB774839B (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWARNING_Reset_mFED951026C8DC8CC513D51310427B61EB42CC2E1 (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWARNING__ctor_mABFDCE6BEFB91215C31BC33832300CC7C5445D04 (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWARNING__ctor_m838ED066EDE0447959B43BB70E1685CDE590E53D (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPWARNING_set_MY_m0F71AEB72BC773F3D0BFF1144EA6F8DEDA6269AE_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPWARNING_set_THERE_m2FECFCF8741C62D03B6AF74000D7219F85C83D78_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPWARNING_set__world_m2FD1850602F215A2F61CC8B16DA73B4AF5E45F54_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPWARNING_MoveNext_m53C6A44E90BC1893E436CB1250A4B113E6F071B0 (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* V_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* G_B5_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* G_B4_1 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_03d7;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)893060478), (bool)1, (bool)1);
		__this->___TROPBACKOFF_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPBACKOFF_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___TROPBACKOFF_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___TROPHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)176), (7.0f));
		RuntimeObject* L_19;
		L_19 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)1736664826), (bool)1, (bool)1);
		__this->___TROP7TEX_15 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP7TEX_15), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_17 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_17;
		RuntimeObject* L_24 = __this->___TROP7TEX_15;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)164), L_24);
		float L_25;
		L_25 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_26;
		L_26 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_25, (0.5f), NULL);
		if (!L_26)
		{
			goto IL_0174;
		}
	}
	{
		RuntimeObject* L_27;
		L_27 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)1474665403), (bool)1, (bool)1);
		__this->___TROP7ATEX_20 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP7ATEX_20), (void*)L_29);
		RuntimeObject* L_30;
		L_30 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_22 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_22;
		RuntimeObject* L_32 = __this->___TROP7ATEX_20;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)164), L_32);
	}

IL_0174:
	{
		RuntimeObject* L_33;
		L_33 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_24 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_33);
		RuntimeObject* L_34 = __this->___MY_24;
		RuntimeObject* L_35 = L_34;
		if (L_35)
		{
			G_B5_0 = L_35;
			G_B5_1 = __this;
			goto IL_018e;
		}
		G_B4_0 = L_35;
		G_B4_1 = __this;
	}
	{
		G_B6_0 = ((RuntimeObject*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_019a;
	}

IL_018e:
	{
		NullCheck(G_B5_0);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B5_0, ((int32_t)164), (bool)1, (bool)1);
		G_B6_0 = L_36;
		G_B6_1 = G_B5_1;
	}

IL_019a:
	{
		NullCheck(G_B6_1);
		G_B6_1->___temp_25 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___temp_25), (void*)G_B6_0);
		RuntimeObject* L_37;
		L_37 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		RuntimeObject* L_38 = __this->___temp_25;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_37, ((int32_t)1738102306), L_38);
		RuntimeObject* L_39;
		L_39 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_39, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_28 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_28), (void*)L_40);
		RuntimeObject* L_41 = __this->___RANDOMTROP_28;
		NullCheck(L_41);
		float L_42;
		L_42 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)231), (bool)1);
		__this->___RANDOMTROP_28_val = L_42;
		RuntimeObject* L_43;
		L_43 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_29 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_29), (void*)L_44);
		RuntimeObject* L_45 = __this->___RANDOMTROP_29;
		float L_46;
		L_46 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)231), L_46);
		RuntimeObject* L_47;
		L_47 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_31 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_31), (void*)L_48);
		RuntimeObject* L_49 = __this->___RANDOMTROP_31;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)231), (bool)1);
		__this->___RANDOMTROP_31_val = L_50;
		float L_51 = __this->___RANDOMTROP_31_val;
		bool L_52;
		L_52 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_51, (0.200000003f), NULL);
		if (L_52)
		{
			goto IL_0337;
		}
	}
	{
		RuntimeObject* L_53;
		L_53 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_33 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_33), (void*)L_54);
		RuntimeObject* L_55 = __this->___RANDOMTROP_33;
		NullCheck(L_55);
		float L_56;
		L_56 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)231), (bool)1);
		__this->___RANDOMTROP_33_val = L_56;
		float L_57 = __this->___RANDOMTROP_33_val;
		bool L_58;
		L_58 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_57, (0.400000006f), NULL);
		if (L_58)
		{
			goto IL_02eb;
		}
	}
	{
		RuntimeObject* L_59;
		L_59 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_59);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)1466003774), (bool)1, (bool)1);
		__this->___TROP07SND_34 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP07SND_34), (void*)L_61);
		RuntimeObject* L_62;
		L_62 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, ((int32_t)1738102306), (bool)0);
		__this->___TROP_TEX_36 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP_TEX_36), (void*)L_63);
		RuntimeObject* L_64 = __this->___TROP_TEX_36;
		RuntimeObject* L_65 = __this->___TROP07SND_34;
		NullCheck(L_64);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)286), L_65);
		goto IL_0381;
	}

IL_02eb:
	{
		RuntimeObject* L_66;
		L_66 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_66);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_67, ((int32_t)1465860026), (bool)1, (bool)1);
		__this->___TROP03SND_37 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP03SND_37), (void*)L_68);
		RuntimeObject* L_69;
		L_69 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_69, ((int32_t)1738102306), (bool)0);
		__this->___TROP_TEX_39 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP_TEX_39), (void*)L_70);
		RuntimeObject* L_71 = __this->___TROP_TEX_39;
		RuntimeObject* L_72 = __this->___TROP03SND_37;
		NullCheck(L_71);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_71, ((int32_t)286), L_72);
		goto IL_0381;
	}

IL_0337:
	{
		RuntimeObject* L_73;
		L_73 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_73);
		RuntimeObject* L_74;
		L_74 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_73);
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_74, ((int32_t)1465824089), (bool)1, (bool)1);
		__this->___TROP02SND_40 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP02SND_40), (void*)L_75);
		RuntimeObject* L_76;
		L_76 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_76, ((int32_t)1738102306), (bool)0);
		__this->___TROP_TEX_42 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP_TEX_42), (void*)L_77);
		RuntimeObject* L_78 = __this->___TROP_TEX_42;
		RuntimeObject* L_79 = __this->___TROP02SND_40;
		NullCheck(L_78);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_78, ((int32_t)286), L_79);
	}

IL_0381:
	{
		RuntimeObject* L_80;
		L_80 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_45 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_45), (void*)L_80);
		RuntimeObject* L_81 = __this->___MY_45;
		NullCheck(L_81);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_81, ((int32_t)168), (0.0f));
		float L_82;
		L_82 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_82;
		float L_83 = __this->___startTime1;
		float L_84;
		L_84 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)32), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_83, L_84));
		__this->____cursor = 1;
		goto IL_03d7;
	}

IL_03ca:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_85 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		TROPWARNING_set_Current_mD85E0027929DCBEDFFDB28EBFA16B43FB774839B_inline(__this, L_85, NULL);
		return (bool)1;
	}

IL_03d7:
	{
		float L_86;
		L_86 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_87 = __this->___endTime1;
		if ((((float)L_86) < ((float)L_87)))
		{
			goto IL_03ca;
		}
	}
	{
		TROPWARNING_set_Current_mD85E0027929DCBEDFFDB28EBFA16B43FB774839B_inline(__this, NULL, NULL);
		RuntimeObject* L_88;
		L_88 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_49 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_49), (void*)L_88);
		RuntimeObject* L_89 = __this->___MY_49;
		NullCheck(L_89);
		float L_90;
		L_90 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)173), (bool)1);
		__this->___temp_50 = L_90;
		float L_91 = __this->___temp_50;
		bool L_92;
		L_92 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_91, (5.0f), NULL);
		if (!L_92)
		{
			goto IL_0422;
		}
	}
	{
		return (bool)0;
	}

IL_0422:
	{
		RuntimeObject* L_93;
		L_93 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_52 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_52), (void*)L_93);
		RuntimeObject* L_94;
		L_94 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_54 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_54), (void*)L_94);
		RuntimeObject* L_95 = __this->___MY_54;
		NullCheck(L_95);
		float L_96;
		L_96 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_95, ((int32_t)194), (bool)1);
		__this->___temp_55 = L_96;
		RuntimeObject* L_97;
		L_97 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_57 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_57), (void*)L_97);
		RuntimeObject* L_98 = __this->___MY_57;
		NullCheck(L_98);
		float L_99;
		L_99 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_98, ((int32_t)194), (bool)1);
		__this->___temp_58 = L_99;
		RuntimeObject* L_100 = __this->___MY_52;
		float L_101 = __this->___temp_58;
		NullCheck(L_100);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)194), ((float)il2cpp_codegen_add(L_101, (2.0f))));
		float L_102;
		L_102 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_103;
		L_103 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_102, (0.5f), NULL);
		if (!L_103)
		{
			goto IL_050f;
		}
	}
	{
		RuntimeObject* L_104;
		L_104 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_64 = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_64), (void*)L_104);
		RuntimeObject* L_105;
		L_105 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_66 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_66), (void*)L_105);
		RuntimeObject* L_106 = __this->___MY_66;
		NullCheck(L_106);
		float L_107;
		L_107 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_106, ((int32_t)194), (bool)1);
		__this->___temp_67 = L_107;
		RuntimeObject* L_108;
		L_108 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		__this->___MY_69 = L_108;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_69), (void*)L_108);
		RuntimeObject* L_109 = __this->___MY_69;
		NullCheck(L_109);
		float L_110;
		L_110 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_109, ((int32_t)194), (bool)1);
		__this->___temp_70 = L_110;
		RuntimeObject* L_111 = __this->___MY_64;
		float L_112 = __this->___temp_70;
		NullCheck(L_111);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_111, ((int32_t)194), ((float)il2cpp_codegen_subtract(L_112, (2.0f))));
	}

IL_050f:
	{
		TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* L_113 = (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769*)il2cpp_codegen_object_new(TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769_il2cpp_TypeInfo_var);
		TROPBACKOFF__ctor_m55FC4CF40CAD3A9AAD93C9EB785704E86C4E5C19(L_113, NULL);
		V_0 = L_113;
		TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* L_114 = V_0;
		TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* L_115 = L_114;
		RuntimeObject* L_116;
		L_116 = TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline(__this, NULL);
		NullCheck(L_115);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_115, L_116);
		TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* L_117 = L_115;
		RuntimeObject* L_118;
		L_118 = TROPWARNING_get_THERE_mB968973F6F0A1ABC149A96D2A3B7DCD364303F3F_inline(__this, NULL);
		NullCheck(L_117);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_117, L_118);
		RuntimeObject* L_119;
		L_119 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		NullCheck(L_117);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_117, L_119);
		RuntimeObject* L_120;
		L_120 = TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline(__this, NULL);
		TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* L_121 = V_0;
		NullCheck(L_120);
		RuntimeObject* L_122;
		L_122 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_120, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_121);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLOOKFOR_set_MY_m04C451DB15DA350108044753416AE7ECDF0316DC (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPLOOKFOR_get_THERE_m80365F9F59176165ACCFF35D6EC7CD051F702BA6 (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLOOKFOR_set_THERE_m89F4737A873C4AF3991D618CC678D39163EE706A (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPLOOKFOR_get__world_m8302FC44BF42E9E999D09B4987CCEFB8DC86A4F5 (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLOOKFOR_set__world_mE8283792B6A2E60993881F721513D16E9D127F46 (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPLOOKFOR_get_Current_m6AA24512915A0148BD0E4F3B3F7BC603410D913F (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLOOKFOR_set_Current_m0582C51E19846B3921E2E921667F8DF95E4A587B (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLOOKFOR_Reset_mA307314558410F6B72589CE123A49DCCE8E95D4F (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLOOKFOR__ctor_mC1034FB0440F2C572094D1B003BB4179693B27FA (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLOOKFOR__ctor_m39C5F39F8754D2DD92D3E01BC3F6735D3E7238D7 (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPLOOKFOR_set_MY_m04C451DB15DA350108044753416AE7ECDF0316DC_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPLOOKFOR_set_THERE_m89F4737A873C4AF3991D618CC678D39163EE706A_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPLOOKFOR_set__world_mE8283792B6A2E60993881F721513D16E9D127F46_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPLOOKFOR_MoveNext_mFADA4D70B72EEF933B5D4E1DC4613E2482841092 (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* V_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* G_B8_1 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* G_B7_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* G_B9_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)176), (bool)1);
		__this->___temp_3 = L_3;
		float L_4 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_4, (10.0f), NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		RuntimeObject* L_6;
		L_6 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_6;
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)202), (bool)1);
		__this->___temp_7 = L_8;
		float L_9 = __this->___temp_7;
		bool L_10;
		L_10 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_9, (100.0f), NULL);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		return (bool)0;
	}

IL_0075:
	{
		RuntimeObject* L_11;
		L_11 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_10;
		NullCheck(L_12);
		float L_13;
		L_13 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)182), (bool)1);
		__this->___temp_11 = L_13;
		float L_14 = __this->___temp_11;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_14, (1.0f), NULL);
		if (!L_15)
		{
			goto IL_00e4;
		}
	}
	{
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_16 = (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA*)il2cpp_codegen_object_new(TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		TROPFOLLOWATTACK__ctor_m3F9D3BD614C9DFC04F5208E62E147625D29FFE3B(L_16, NULL);
		V_0 = L_16;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_17 = V_0;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_18 = L_17;
		RuntimeObject* L_19;
		L_19 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_18, L_19);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_20 = L_18;
		RuntimeObject* L_21;
		L_21 = TROPLOOKFOR_get_THERE_m80365F9F59176165ACCFF35D6EC7CD051F702BA6_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		RuntimeObject* L_22;
		L_22 = TROPLOOKFOR_get__world_m8302FC44BF42E9E999D09B4987CCEFB8DC86A4F5_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_22);
		RuntimeObject* L_23;
		L_23 = TROPLOOKFOR_get__world_m8302FC44BF42E9E999D09B4987CCEFB8DC86A4F5_inline(__this, NULL);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_24 = V_0;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_24);
		return (bool)0;
	}

IL_00e4:
	{
		RuntimeObject* L_26;
		L_26 = TROPLOOKFOR_get__world_m8302FC44BF42E9E999D09B4987CCEFB8DC86A4F5_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_12 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_12), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_14 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_14;
		RuntimeObject* L_31 = L_30;
		if (L_31)
		{
			G_B8_0 = L_31;
			G_B8_1 = __this;
			goto IL_011b;
		}
		G_B7_0 = L_31;
		G_B7_1 = __this;
	}
	{
		G_B9_0 = ((RuntimeObject*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_0127;
	}

IL_011b:
	{
		NullCheck(G_B8_0);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B8_0, ((int32_t)199), (bool)1, (bool)1);
		G_B9_0 = L_32;
		G_B9_1 = G_B8_1;
	}

IL_0127:
	{
		NullCheck(G_B9_1);
		G_B9_1->___temp_15 = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___temp_15), (void*)G_B9_0);
		RuntimeObject* L_33 = __this->___temp_15;
		RuntimeObject* L_34 = __this->___FOLLOW_12;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_0141;
		}
	}
	{
		return (bool)0;
	}

IL_0141:
	{
		RuntimeObject* L_36;
		L_36 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_18 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_18;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)173), (bool)1);
		__this->___temp_19 = L_38;
		float L_39 = __this->___temp_19;
		bool L_40;
		L_40 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_39, (5.0f), NULL);
		if (!L_40)
		{
			goto IL_0178;
		}
	}
	{
		return (bool)0;
	}

IL_0178:
	{
		RuntimeObject* L_41;
		L_41 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_22 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_41);
		RuntimeObject* L_42 = __this->___MY_22;
		NullCheck(L_42);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_43;
		L_43 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_25 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_43);
		RuntimeObject* L_44 = __this->___MY_25;
		NullCheck(L_44);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_45;
		L_45 = TROPLOOKFOR_get__world_m8302FC44BF42E9E999D09B4987CCEFB8DC86A4F5_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_45);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)-1775815832), (bool)1, (bool)1);
		__this->___TROPSEARCH_26 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPSEARCH_26), (void*)L_47);
		RuntimeObject* L_48;
		L_48 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_28 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_28), (void*)L_48);
		RuntimeObject* L_49 = __this->___MY_28;
		RuntimeObject* L_50 = __this->___TROPSEARCH_26;
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)190), L_50);
		RuntimeObject* L_51;
		L_51 = TROPLOOKFOR_get__world_m8302FC44BF42E9E999D09B4987CCEFB8DC86A4F5_inline(__this, NULL);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_51);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_29 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_29), (void*)L_53);
		RuntimeObject* L_54;
		L_54 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_31 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_54);
		RuntimeObject* L_55 = __this->___MY_31;
		RuntimeObject* L_56 = __this->___TROPHIT_29;
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)209), L_56);
		RuntimeObject* L_57;
		L_57 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_34 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_34), (void*)L_57);
		RuntimeObject* L_58 = __this->___MY_34;
		NullCheck(L_58);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)207), (0.0f));
		RuntimeObject* L_59;
		L_59 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_37 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_37), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_37;
		NullCheck(L_60);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)219), (0.0f));
		RuntimeObject* L_61;
		L_61 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_40 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_40), (void*)L_61);
		RuntimeObject* L_62 = __this->___MY_40;
		NullCheck(L_62);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)176), (10.0f));
		RuntimeObject* L_63;
		L_63 = TROPLOOKFOR_get__world_m8302FC44BF42E9E999D09B4987CCEFB8DC86A4F5_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_63);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)1737024196), (bool)1, (bool)1);
		__this->___TROPATEX_41 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPATEX_41), (void*)L_65);
		RuntimeObject* L_66;
		L_66 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_43 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_43), (void*)L_66);
		RuntimeObject* L_67 = __this->___MY_43;
		RuntimeObject* L_68 = __this->___TROPATEX_41;
		NullCheck(L_67);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_67, ((int32_t)164), L_68);
		RuntimeObject* L_69;
		L_69 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_46 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_69);
		RuntimeObject* L_70 = __this->___MY_46;
		NullCheck(L_70);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_70, ((int32_t)168), (0.0f));
		RuntimeObject* L_71;
		L_71 = TROPLOOKFOR_get__world_m8302FC44BF42E9E999D09B4987CCEFB8DC86A4F5_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_71);
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_47 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_47), (void*)L_73);
		RuntimeObject* L_74;
		L_74 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_49 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_49), (void*)L_74);
		RuntimeObject* L_75 = __this->___MY_49;
		RuntimeObject* L_76 = __this->___BULLET_47;
		NullCheck(L_75);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_75, ((int32_t)199), L_76);
		RuntimeObject* L_77;
		L_77 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_52 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_52), (void*)L_77);
		RuntimeObject* L_78 = __this->___MY_52;
		NullCheck(L_78);
		float L_79;
		L_79 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_78, ((int32_t)202), (bool)1);
		__this->___temp_53 = L_79;
		float L_80 = __this->___temp_53;
		bool L_81;
		L_81 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_80, (100.0f), NULL);
		if (!L_81)
		{
			goto IL_03a6;
		}
	}
	{
		RuntimeObject* L_82;
		L_82 = TROPLOOKFOR_get__world_m8302FC44BF42E9E999D09B4987CCEFB8DC86A4F5_inline(__this, NULL);
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_82);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)603443901), (bool)1, (bool)1);
		__this->___TROPFOLLOWATTACK_54 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPFOLLOWATTACK_54), (void*)L_84);
		RuntimeObject* L_85;
		L_85 = TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline(__this, NULL);
		__this->___MY_56 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_56), (void*)L_85);
		RuntimeObject* L_86 = __this->___MY_56;
		RuntimeObject* L_87 = __this->___TROPFOLLOWATTACK_54;
		NullCheck(L_86);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)190), L_87);
	}

IL_03a6:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519 (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOW_set_MY_mECE5C969B2C6324587136175FA3FF3F2A1AFBCC6 (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOW_get_THERE_m2F78BDE4817C1F64232F63022D28F9DC57845FEA (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOW_set_THERE_m526C93A3C2B33DBE41A39B872E81C60008281072 (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0 (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOW_set__world_m5E38EC8940D37D78D40316511693FB1294474650 (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOW_get_Current_mA42CC24FEC10A5876DAFD806346F59E6802489C5 (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOW_set_Current_m485478978CE60538AAB63EBDE7CF9FF323DD670E (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOW_Reset_m7EFECE9834F4F5F7DA283770836FF1EBAFFD7C9C (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOW__ctor_mBBF0FE58F5F0CE3099B90F79FBA0B24DB7853CFC (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOW__ctor_mB92B86EA896CE05D021D9581F011156BF858205D (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPFOLLOW_set_MY_mECE5C969B2C6324587136175FA3FF3F2A1AFBCC6_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPFOLLOW_set_THERE_m526C93A3C2B33DBE41A39B872E81C60008281072_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPFOLLOW_set__world_m5E38EC8940D37D78D40316511693FB1294474650_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPFOLLOW_MoveNext_m94B63918724675517C08130147DFF9E761621ECA (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* V_0 = NULL;
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_1 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)1708986426), (bool)1, (bool)1);
		__this->___CYCLETROPATTACK_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLETROPATTACK_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___CYCLETROPATTACK_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___TROPHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)207), (1.0f));
		RuntimeObject* L_19;
		L_19 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)219), (0.0f));
		RuntimeObject* L_21;
		L_21 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (1.0f));
		RuntimeObject* L_23;
		L_23 = TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)1736449204), (bool)1, (bool)1);
		__this->___TROP1TEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP1TEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___TROP1TEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.400000006f));
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_31 = (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5*)il2cpp_codegen_object_new(FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0(L_31, NULL);
		V_0 = L_31;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_32 = V_0;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_33 = L_32;
		RuntimeObject* L_34;
		L_34 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_33, L_34);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_35 = L_33;
		RuntimeObject* L_36;
		L_36 = TROPFOLLOW_get_THERE_m2F78BDE4817C1F64232F63022D28F9DC57845FEA_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_36);
		RuntimeObject* L_37;
		L_37 = TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_37);
		RuntimeObject* L_38;
		L_38 = TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0_inline(__this, NULL);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_39 = V_0;
		NullCheck(L_38);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_39);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_41 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_41, NULL);
		V_1 = L_41;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_42 = V_1;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_43 = L_42;
		RuntimeObject* L_44;
		L_44 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_44);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_45 = L_43;
		RuntimeObject* L_46;
		L_46 = TROPFOLLOW_get_THERE_m2F78BDE4817C1F64232F63022D28F9DC57845FEA_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_46);
		RuntimeObject* L_47;
		L_47 = TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_47);
		RuntimeObject* L_48;
		L_48 = TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_49 = V_1;
		NullCheck(L_48);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_49);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_51 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_51, NULL);
		V_2 = L_51;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_52 = V_2;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_53 = L_52;
		RuntimeObject* L_54;
		L_54 = TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_54);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_55 = L_53;
		RuntimeObject* L_56;
		L_56 = TROPFOLLOW_get_THERE_m2F78BDE4817C1F64232F63022D28F9DC57845FEA_inline(__this, NULL);
		NullCheck(L_55);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_55, L_56);
		RuntimeObject* L_57;
		L_57 = TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0_inline(__this, NULL);
		NullCheck(L_55);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_55, L_57);
		RuntimeObject* L_58;
		L_58 = TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_59 = V_2;
		NullCheck(L_58);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_58, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_59);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK_set_MY_mC2F06C7800C38299D08263BDE029ACA0D99CDF7A (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWATTACK_get_THERE_m5BADC4EF19BDA597BD2AA91DC39AE100F3A5930D (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK_set_THERE_m0A923570207B279803F1056DE52348CBD03A2E63 (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK_set__world_mD005958E0D835800347DC4BBB9F7B0A19912F241 (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWATTACK_get_Current_mD159ACA008F52CEC12095BA75AC95A74ED09AF03 (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK_set_Current_m1FAEE16784A840E69D893E954CE8DEECE37EE97C (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK_Reset_m727E51A042DF3E4D28C44AF1AC7641C41B9D49DF (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK__ctor_m3F9D3BD614C9DFC04F5208E62E147625D29FFE3B (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK__ctor_mA1526367AB98728E5F3D74B82DC348E79FD169EA (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPFOLLOWATTACK_set_MY_mC2F06C7800C38299D08263BDE029ACA0D99CDF7A_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPFOLLOWATTACK_set_THERE_m0A923570207B279803F1056DE52348CBD03A2E63_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPFOLLOWATTACK_set__world_mD005958E0D835800347DC4BBB9F7B0A19912F241_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPFOLLOWATTACK_MoveNext_m0D55FCA5E136EBEB4B52F32A72B1C0250CDDC1AB (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* V_0 = NULL;
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_1 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)202849327), (bool)1, (bool)1);
		__this->___CYCLETROPSHOOT_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLETROPSHOOT_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___CYCLETROPSHOOT_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___TROPHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)207), (1.0f));
		RuntimeObject* L_19;
		L_19 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)219), (0.0f));
		RuntimeObject* L_21;
		L_21 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (2.0f));
		RuntimeObject* L_23;
		L_23 = TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)1737024196), (bool)1, (bool)1);
		__this->___TROPATEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPATEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___TROPATEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.400000006f));
		RuntimeObject* L_31;
		L_31 = TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_27 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_27), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		__this->___MY_29 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_29;
		RuntimeObject* L_36 = __this->___BULLET_27;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)199), L_36);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_37 = (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5*)il2cpp_codegen_object_new(FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0(L_37, NULL);
		V_0 = L_37;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_38 = V_0;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_39 = L_38;
		RuntimeObject* L_40;
		L_40 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = TROPFOLLOWATTACK_get_THERE_m5BADC4EF19BDA597BD2AA91DC39AE100F3A5930D_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline(__this, NULL);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_45 = V_0;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_47 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_47, NULL);
		V_1 = L_47;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_48 = V_1;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_49 = L_48;
		RuntimeObject* L_50;
		L_50 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_51 = L_49;
		RuntimeObject* L_52;
		L_52 = TROPFOLLOWATTACK_get_THERE_m5BADC4EF19BDA597BD2AA91DC39AE100F3A5930D_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_52);
		RuntimeObject* L_53;
		L_53 = TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_53);
		RuntimeObject* L_54;
		L_54 = TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_55 = V_1;
		NullCheck(L_54);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_54, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_55);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_57 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_57, NULL);
		V_2 = L_57;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_58 = V_2;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_59 = L_58;
		RuntimeObject* L_60;
		L_60 = TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline(__this, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_59, L_60);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_61 = L_59;
		RuntimeObject* L_62;
		L_62 = TROPFOLLOWATTACK_get_THERE_m5BADC4EF19BDA597BD2AA91DC39AE100F3A5930D_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_62);
		RuntimeObject* L_63;
		L_63 = TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_63);
		RuntimeObject* L_64;
		L_64 = TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_65 = V_2;
		NullCheck(L_64);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_64, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_65);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING_set_MY_mBC8C4C8E38C15A9AB523F9B14FA857F842DEF285 (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWWARNING_get_THERE_mA02114A2FA33919CA9A82774202CD809D43D1FC9 (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING_set_THERE_m08992DD7F9FA88EC80C614B7F2A0945A554D8F9D (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING_set__world_mF9357EF599B9E629D7845F762E80A3C1BB3DCFE7 (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWWARNING_get_Current_mECF8A32E822A505686E6E4759E448CB739F9CB70 (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING_set_Current_m6F1260D71DDC0486E6BB3C929F8733D2AB01C610 (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING_Reset_m7077435F6C713FA5777FDE285DBFF5359ECDD3A4 (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING__ctor_m77435E2034CB45F3D8F4B70573F1BC851866FB52 (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING__ctor_mA52E1146585347C1CCC4F6DC48E4DA912758174E (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPFOLLOWWARNING_set_MY_mBC8C4C8E38C15A9AB523F9B14FA857F842DEF285_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPFOLLOWWARNING_set_THERE_m08992DD7F9FA88EC80C614B7F2A0945A554D8F9D_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPFOLLOWWARNING_set__world_mF9357EF599B9E629D7845F762E80A3C1BB3DCFE7_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPFOLLOWWARNING_MoveNext_m6A220DA8A17B24461D004572D264259983D9E38D (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* V_0 = NULL;
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_1 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)-1836000968), (bool)1, (bool)1);
		__this->___CYCLETROPWARNING_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLETROPWARNING_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___CYCLETROPWARNING_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___TROPHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)207), (1.0f));
		RuntimeObject* L_19;
		L_19 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)219), (0.0f));
		RuntimeObject* L_21;
		L_21 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (1.0f));
		RuntimeObject* L_23;
		L_23 = TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)1736449204), (bool)1, (bool)1);
		__this->___TROP1TEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP1TEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___TROP1TEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.400000006f));
		RuntimeObject* L_31;
		L_31 = TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_27 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_27), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		__this->___MY_29 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_29;
		RuntimeObject* L_36 = __this->___BULLET_27;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)199), L_36);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_37 = (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5*)il2cpp_codegen_object_new(FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0(L_37, NULL);
		V_0 = L_37;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_38 = V_0;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_39 = L_38;
		RuntimeObject* L_40;
		L_40 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = TROPFOLLOWWARNING_get_THERE_mA02114A2FA33919CA9A82774202CD809D43D1FC9_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline(__this, NULL);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_45 = V_0;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_47 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_47, NULL);
		V_1 = L_47;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_48 = V_1;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_49 = L_48;
		RuntimeObject* L_50;
		L_50 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_51 = L_49;
		RuntimeObject* L_52;
		L_52 = TROPFOLLOWWARNING_get_THERE_mA02114A2FA33919CA9A82774202CD809D43D1FC9_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_52);
		RuntimeObject* L_53;
		L_53 = TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_53);
		RuntimeObject* L_54;
		L_54 = TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_55 = V_1;
		NullCheck(L_54);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_54, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_55);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_57 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_57, NULL);
		V_2 = L_57;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_58 = V_2;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_59 = L_58;
		RuntimeObject* L_60;
		L_60 = TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline(__this, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_59, L_60);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_61 = L_59;
		RuntimeObject* L_62;
		L_62 = TROPFOLLOWWARNING_get_THERE_mA02114A2FA33919CA9A82774202CD809D43D1FC9_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_62);
		RuntimeObject* L_63;
		L_63 = TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_63);
		RuntimeObject* L_64;
		L_64 = TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_65 = V_2;
		NullCheck(L_64);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_64, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_65);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8 (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPAIM_set_MY_m87C794788EDFE0BD41F224EE97892540CEA4E45C (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPAIM_get_THERE_m907C8821B2E708A7DC5B2DE6318CF3E29E8484F1 (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPAIM_set_THERE_mF988194FE82CC6CC618ECCAB75DB7106CF9988D5 (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPAIM_get__world_m14CDC9F872623DAA5D74373B4AC1CB6055F53B28 (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPAIM_set__world_m09387C21D2A3209784FD5C2A2AB8CAF8E14187CC (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPAIM_get_Current_m7FC53ACF2BE8A4FD6DF8F1EEF7B73CF317B0E3E2 (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPAIM_set_Current_m809F87A759F8ACC8FCF481E63F0643CB1DDFB399 (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPAIM_Reset_mD5A94BAC5CAD0205C22119FA419EABFDE50B3A76 (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPAIM__ctor_m6248A32CCB44A4E4462DE847424F37AA166463B3 (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPAIM__ctor_mF4EA9C65F5864C4671922E8AC500144AAE29DD10 (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPAIM_set_MY_m87C794788EDFE0BD41F224EE97892540CEA4E45C_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPAIM_set_THERE_mF988194FE82CC6CC618ECCAB75DB7106CF9988D5_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPAIM_set__world_m09387C21D2A3209784FD5C2A2AB8CAF8E14187CC_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPAIM_MoveNext_mC05D09CF26FD21850C3CA61B9DE4C4E7C36CA965 (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* V_0 = NULL;
	TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = TROPAIM_get__world_m14CDC9F872623DAA5D74373B4AC1CB6055F53B28_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)1508117631), (bool)1, (bool)1);
		__this->___TROPSHOOT_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPSHOOT_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___TROPSHOOT_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = TROPAIM_get__world_m14CDC9F872623DAA5D74373B4AC1CB6055F53B28_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___TROPHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)207), (0.0f));
		RuntimeObject* L_19;
		L_19 = TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)219), (0.0f));
		RuntimeObject* L_21;
		L_21 = TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (3.0f));
		RuntimeObject* L_23;
		L_23 = TROPAIM_get__world_m14CDC9F872623DAA5D74373B4AC1CB6055F53B28_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)1469921719), (bool)1, (bool)1);
		__this->___TROP3ATEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP3ATEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___TROP3ATEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.0f));
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_31 = (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5*)il2cpp_codegen_object_new(FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0(L_31, NULL);
		V_0 = L_31;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_32 = V_0;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_33 = L_32;
		RuntimeObject* L_34;
		L_34 = TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline(__this, NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_33, L_34);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_35 = L_33;
		RuntimeObject* L_36;
		L_36 = TROPAIM_get_THERE_m907C8821B2E708A7DC5B2DE6318CF3E29E8484F1_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_36);
		RuntimeObject* L_37;
		L_37 = TROPAIM_get__world_m14CDC9F872623DAA5D74373B4AC1CB6055F53B28_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_37);
		RuntimeObject* L_38;
		L_38 = TROPAIM_get__world_m14CDC9F872623DAA5D74373B4AC1CB6055F53B28_inline(__this, NULL);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_39 = V_0;
		NullCheck(L_38);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_39);
		TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* L_41 = (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA*)il2cpp_codegen_object_new(TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA_il2cpp_TypeInfo_var);
		TROPSHOUT__ctor_m09D0B743C06CEB427D818500ADF8672CA8F9512B(L_41, NULL);
		V_1 = L_41;
		TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* L_42 = V_1;
		TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* L_43 = L_42;
		RuntimeObject* L_44;
		L_44 = TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_44);
		TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* L_45 = L_43;
		RuntimeObject* L_46;
		L_46 = TROPAIM_get_THERE_m907C8821B2E708A7DC5B2DE6318CF3E29E8484F1_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_46);
		RuntimeObject* L_47;
		L_47 = TROPAIM_get__world_m14CDC9F872623DAA5D74373B4AC1CB6055F53B28_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_47);
		RuntimeObject* L_48;
		L_48 = TROPAIM_get__world_m14CDC9F872623DAA5D74373B4AC1CB6055F53B28_inline(__this, NULL);
		TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* L_49 = V_1;
		NullCheck(L_48);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_49);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67 (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOOT_set_MY_mAB7B8469C19F42700A0FC1B69BAF66B85EFC6395 (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOOT_get_THERE_mCBD765A9F6D18D97582FDC3B3DBEC04DDB5CBCCB (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOOT_set_THERE_mDFC7181D7AFFAD0A51C65ED26B83F16009FA8ECF (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOOT_set__world_m92A6A62126C28ADFD707444608DBDEB2C58F6AEC (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOOT_get_Current_mF84C654D94976C9FEFDE6A95F13B817C220C91BC (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOOT_set_Current_mC9E33AD11FDB5AF4B9FF48419C221D5B87A1018C (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOOT_Reset_mFECE91D1B1FB91B0F4A24D238EF85DD3A65AA236 (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOOT__ctor_m8D8DF1CD5727E67A0692BA3CD5BC9A51D2483762 (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOOT__ctor_mC06C87C0EEEB167D2C544E95BD786FF55C1D0421 (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPSHOOT_set_MY_mAB7B8469C19F42700A0FC1B69BAF66B85EFC6395_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPSHOOT_set_THERE_mDFC7181D7AFFAD0A51C65ED26B83F16009FA8ECF_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPSHOOT_set__world_m92A6A62126C28ADFD707444608DBDEB2C58F6AEC_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPSHOOT_MoveNext_mDB0342E8C156CACA9C48A632191CEA7DDE19F06E (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* V_0 = NULL;
	HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* V_1 = NULL;
	TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)202849327), (bool)1, (bool)1);
		__this->___CYCLETROPSHOOT_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLETROPSHOOT_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___CYCLETROPSHOOT_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___TROPHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)207), (0.0f));
		RuntimeObject* L_19;
		L_19 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)219), (0.0f));
		RuntimeObject* L_21;
		L_21 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (3.0f));
		RuntimeObject* L_23;
		L_23 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)1736521078), (bool)1, (bool)1);
		__this->___TROP3TEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP3TEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___TROP3TEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.0f));
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_31 = (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5*)il2cpp_codegen_object_new(FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0(L_31, NULL);
		V_0 = L_31;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_32 = V_0;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_33 = L_32;
		RuntimeObject* L_34;
		L_34 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_33, L_34);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_35 = L_33;
		RuntimeObject* L_36;
		L_36 = TROPSHOOT_get_THERE_mCBD765A9F6D18D97582FDC3B3DBEC04DDB5CBCCB_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_36);
		RuntimeObject* L_37;
		L_37 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_37);
		RuntimeObject* L_38;
		L_38 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_39 = V_0;
		NullCheck(L_38);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_39);
		RuntimeObject* L_41;
		L_41 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, 5, ((int32_t)440));
		__this->___SHOOT_SECTOR_28 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_SECTOR_28), (void*)L_42);
		RuntimeObject* L_43 = __this->___SHOOT_SECTOR_28;
		NullCheck(L_43);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)231), (2.0f));
		RuntimeObject* L_44;
		L_44 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, 5, ((int32_t)376136638));
		__this->___TROPSHOOTFACTOR_29 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPSHOOTFACTOR_29), (void*)L_45);
		RuntimeObject* L_46 = __this->___TROPSHOOTFACTOR_29;
		NullCheck(L_46);
		float L_47;
		L_47 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)231), (bool)1);
		__this->___TROPSHOOTFACTOR_29_val = L_47;
		RuntimeObject* L_48;
		L_48 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, 5, ((int32_t)441));
		__this->___SHOOT_FAC_30 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_30), (void*)L_49);
		RuntimeObject* L_50 = __this->___SHOOT_FAC_30;
		float L_51 = __this->___TROPSHOOTFACTOR_29_val;
		NullCheck(L_50);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)231), L_51);
		RuntimeObject* L_52;
		L_52 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, 5, ((int32_t)439));
		__this->___SHOOT_RANGE_32 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_RANGE_32), (void*)L_53);
		RuntimeObject* L_54 = __this->___SHOOT_RANGE_32;
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)231), (100.0f));
		RuntimeObject* L_55;
		L_55 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, 5, ((int32_t)443));
		__this->___SHOOT_Y_34 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_Y_34), (void*)L_56);
		RuntimeObject* L_57 = __this->___SHOOT_Y_34;
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)231), (0.0f));
		RuntimeObject* L_58;
		L_58 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		__this->___MY_35 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_35), (void*)L_58);
		RuntimeObject* L_59;
		L_59 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		RuntimeObject* L_60 = __this->___MY_35;
		RuntimeObject* L_61;
		L_61 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		RuntimeObject* L_62;
		L_62 = TROPSHOOT_get_THERE_mCBD765A9F6D18D97582FDC3B3DBEC04DDB5CBCCB_inline(__this, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, L_60, L_61, L_62);
		RuntimeObject* L_63;
		L_63 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, 5, ((int32_t)444));
		__this->___HIT_DIST_37 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_37), (void*)L_64);
		RuntimeObject* L_65 = __this->___HIT_DIST_37;
		NullCheck(L_65);
		float L_66;
		L_66 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_37_val = L_66;
		float L_67 = __this->___HIT_DIST_37_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_67, (0.0f), NULL);
		if (L_68)
		{
			goto IL_039a;
		}
	}
	{
		RuntimeObject* L_69;
		L_69 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_69, 5, ((int32_t)446));
		__this->___RESULT_38 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RESULT_38), (void*)L_70);
		RuntimeObject* L_71 = __this->___RESULT_38;
		NullCheck(L_71);
		float L_72;
		L_72 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_71, ((int32_t)231), (bool)1);
		__this->___RESULT_38_val = L_72;
		RuntimeObject* L_73;
		L_73 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_73);
		RuntimeObject* L_74;
		L_74 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_73, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_39 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_39), (void*)L_74);
		RuntimeObject* L_75 = __this->___PLAYER_RESULT_39;
		float L_76 = __this->___RESULT_38_val;
		NullCheck(L_75);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_75, ((int32_t)231), L_76);
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_77 = (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25*)il2cpp_codegen_object_new(HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25_il2cpp_TypeInfo_var);
		HITPLAYERDELAY__ctor_m0514506CB908F8A27C7CFF9BB10718987C144B25(L_77, NULL);
		V_1 = L_77;
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_78 = V_1;
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_79 = L_78;
		RuntimeObject* L_80;
		L_80 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_80);
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_81 = L_79;
		RuntimeObject* L_82;
		L_82 = TROPSHOOT_get_THERE_mCBD765A9F6D18D97582FDC3B3DBEC04DDB5CBCCB_inline(__this, NULL);
		NullCheck(L_81);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_81, L_82);
		RuntimeObject* L_83;
		L_83 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_81);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_81, L_83);
		RuntimeObject* L_84;
		L_84 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_85 = V_1;
		NullCheck(L_84);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_84, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_85);
		return (bool)0;
	}

IL_039a:
	{
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_87 = (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA*)il2cpp_codegen_object_new(TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		TROPFOLLOWATTACK__ctor_m3F9D3BD614C9DFC04F5208E62E147625D29FFE3B(L_87, NULL);
		V_2 = L_87;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_88 = V_2;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_89 = L_88;
		RuntimeObject* L_90;
		L_90 = TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline(__this, NULL);
		NullCheck(L_89);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_89, L_90);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_91 = L_89;
		RuntimeObject* L_92;
		L_92 = TROPSHOOT_get_THERE_mCBD765A9F6D18D97582FDC3B3DBEC04DDB5CBCCB_inline(__this, NULL);
		NullCheck(L_91);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_91, L_92);
		RuntimeObject* L_93;
		L_93 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		NullCheck(L_91);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_91, L_93);
		RuntimeObject* L_94;
		L_94 = TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline(__this, NULL);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_95 = V_2;
		NullCheck(L_94);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_94, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_95);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPESCAPE_set_MY_m9E1286CEACC39249EBEA54D7231D9971AB789600 (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPESCAPE_get_THERE_m8A48EDB636E1CAB78F32E31DE44AF019B28CD75F (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPESCAPE_set_THERE_m7D7E6BC62B8F0B144342280A4E5A7647B9E0BD94 (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01 (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPESCAPE_set__world_m96C179320C5132840B84770ACE8377AEA1113F9D (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPESCAPE_get_Current_m46EC02CE4BD991A8BE18EA098FBABC068B7AC94D (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPESCAPE_set_Current_m451644A221AE4C066D48AACFCB8B1752B18554AA (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPESCAPE_Reset_m33A0EE0E9F5DAD9FA68A9FD13ECC6E83CEEBFBA0 (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPESCAPE__ctor_m12FF9966F475609E463EDA10F168BD1DB9664DE0 (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPESCAPE__ctor_mABD7A9DF2BFF1CB3109A74E49BF1BF54B6AC6AC7 (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPESCAPE_set_MY_m9E1286CEACC39249EBEA54D7231D9971AB789600_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPESCAPE_set_THERE_m7D7E6BC62B8F0B144342280A4E5A7647B9E0BD94_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPESCAPE_set__world_m96C179320C5132840B84770ACE8377AEA1113F9D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPESCAPE_MoveNext_m3878A1FFB2C85DB52C04EE901773A73ED23A0009 (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_0 = NULL;
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_1 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)1737263724), (bool)1, (bool)1);
		__this->___TROPHIDE_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIDE_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___TROPHIDE_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)193), L_8);
		RuntimeObject* L_9;
		L_9 = TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-1556052964), (bool)1, (bool)1);
		__this->___CYCLETROPHIDE_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLETROPHIDE_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___CYCLETROPHIDE_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_9), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_11;
		RuntimeObject* L_20 = __this->___TROPHIT_9;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)209), L_20);
		RuntimeObject* L_21;
		L_21 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_14 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_14;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)207), (1.0f));
		RuntimeObject* L_23;
		L_23 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_17;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)219), (0.0f));
		RuntimeObject* L_25;
		L_25 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_20;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)176), (4.0f));
		RuntimeObject* L_27;
		L_27 = TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)1736449204), (bool)1, (bool)1);
		__this->___TROP1TEX_21 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP1TEX_21), (void*)L_29);
		RuntimeObject* L_30;
		L_30 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_23 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_23;
		RuntimeObject* L_32 = __this->___TROP1TEX_21;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)164), L_32);
		RuntimeObject* L_33;
		L_33 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_26 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_33);
		RuntimeObject* L_34 = __this->___MY_26;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)172), (30.0f));
		RuntimeObject* L_35;
		L_35 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_29 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_29;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)168), (0.400000006f));
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_37 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_37, NULL);
		V_0 = L_37;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_38 = V_0;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_39 = L_38;
		RuntimeObject* L_40;
		L_40 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = TROPESCAPE_get_THERE_m8A48EDB636E1CAB78F32E31DE44AF019B28CD75F_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_45 = V_0;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
		RuntimeObject* L_47;
		L_47 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_31 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_47);
		RuntimeObject* L_48;
		L_48 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_33 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_33), (void*)L_48);
		RuntimeObject* L_49 = __this->___MY_33;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)194), (bool)1);
		__this->___temp_34 = L_50;
		RuntimeObject* L_51;
		L_51 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_36 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_36), (void*)L_51);
		RuntimeObject* L_52 = __this->___MY_36;
		NullCheck(L_52);
		float L_53;
		L_53 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)194), (bool)1);
		__this->___temp_37 = L_53;
		RuntimeObject* L_54 = __this->___MY_31;
		float L_55 = __this->___temp_37;
		float L_56;
		L_56 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)194), ((float)il2cpp_codegen_add(L_55, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_56, (0.5f))), (2.0f))))));
		RuntimeObject* L_57;
		L_57 = TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline(__this, NULL);
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_57);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_46 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_46), (void*)L_59);
		RuntimeObject* L_60;
		L_60 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		__this->___MY_48 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_48), (void*)L_60);
		RuntimeObject* L_61 = __this->___MY_48;
		RuntimeObject* L_62 = __this->___BULLET_46;
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)199), L_62);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_63 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_63, NULL);
		V_1 = L_63;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_64 = V_1;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_65 = L_64;
		RuntimeObject* L_66;
		L_66 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		NullCheck(L_65);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_65, L_66);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_67 = L_65;
		RuntimeObject* L_68;
		L_68 = TROPESCAPE_get_THERE_m8A48EDB636E1CAB78F32E31DE44AF019B28CD75F_inline(__this, NULL);
		NullCheck(L_67);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_67, L_68);
		RuntimeObject* L_69;
		L_69 = TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline(__this, NULL);
		NullCheck(L_67);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_67, L_69);
		RuntimeObject* L_70;
		L_70 = TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_71 = V_1;
		NullCheck(L_70);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_70, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_71);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_73 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_73, NULL);
		V_2 = L_73;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_74 = V_2;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_75 = L_74;
		RuntimeObject* L_76;
		L_76 = TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline(__this, NULL);
		NullCheck(L_75);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_75, L_76);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_77 = L_75;
		RuntimeObject* L_78;
		L_78 = TROPESCAPE_get_THERE_m8A48EDB636E1CAB78F32E31DE44AF019B28CD75F_inline(__this, NULL);
		NullCheck(L_77);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_77, L_78);
		RuntimeObject* L_79;
		L_79 = TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline(__this, NULL);
		NullCheck(L_77);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_77, L_79);
		RuntimeObject* L_80;
		L_80 = TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_81 = V_2;
		NullCheck(L_80);
		RuntimeObject* L_82;
		L_82 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_80, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_81);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41 (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDEAD_set_MY_m2C66F070F2A33F3832AB8665901D8B4BF32E5D41 (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDEAD_get_THERE_mCEABCCDE5F87792890F1711561ED84E8E3FD3F4E (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDEAD_set_THERE_mC5F7C130AF34EFE3D68DA7E634E63337F66C8CBA (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDEAD_get__world_m51F24BD5E18D2DEA7A00050659816915F968856E (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDEAD_set__world_m0097A37F7D0162B717C9346B8299ECAECAEDF792 (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDEAD_get_Current_mE2F6BA5AB7FE78FB43033E42E73C02E415DECEE1 (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDEAD_set_Current_m7AC90F58E6CC46743156D50C9E1097CDB69A0E24 (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDEAD_Reset_mF1BE0F5D384072D6ACB020F4232A4BBF5B4A0D59 (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDEAD__ctor_m2378D208CEAC6EBA111FE7301D954CE3C0DEF9BA (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDEAD__ctor_m6D813978D9AA4F92778206346B5DBED0E9710521 (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPDEAD_set_MY_m2C66F070F2A33F3832AB8665901D8B4BF32E5D41_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPDEAD_set_THERE_mC5F7C130AF34EFE3D68DA7E634E63337F66C8CBA_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPDEAD_set__world_m0097A37F7D0162B717C9346B8299ECAECAEDF792_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPDEAD_MoveNext_mCA7C14C5542F9DCDDD94A4902BA56FEBF641EBC2 (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, const RuntimeMethod* method) 
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
		L_1 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_11;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)190), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_14;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)172), (0.0f));
		RuntimeObject* L_11;
		L_11 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_17 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_17;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)176), (9.0f));
		RuntimeObject* L_13;
		L_13 = TROPDEAD_get__world_m51F24BD5E18D2DEA7A00050659816915F968856E_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)1736736700), (bool)1, (bool)1);
		__this->___TROP9TEX_18 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP9TEX_18), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_20 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_20;
		RuntimeObject* L_18 = __this->___TROP9TEX_18;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)164), L_18);
		RuntimeObject* L_19;
		L_19 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_23 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_23;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)168), (0.0f));
		RuntimeObject* L_21;
		L_21 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_26 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_26;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)199), (RuntimeObject*)NULL);
		RuntimeObject* L_23;
		L_23 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_29 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_29;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)206), (1.0f));
		RuntimeObject* L_25;
		L_25 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_32 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_32;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)207), (0.0f));
		RuntimeObject* L_27;
		L_27 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_35 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_35), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_35;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)219), (1.0f));
		float L_29;
		L_29 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_30;
		L_30 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_29, (0.400000006f), NULL);
		if (!L_30)
		{
			goto IL_01b0;
		}
	}
	{
		return (bool)0;
	}

IL_01b0:
	{
		float L_31;
		L_31 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_32;
		L_32 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_31, (0.200000003f), NULL);
		if (L_32)
		{
			goto IL_0223;
		}
	}
	{
		RuntimeObject* L_33;
		L_33 = TROPDEAD_get__world_m51F24BD5E18D2DEA7A00050659816915F968856E_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)-953273021), (bool)1, (bool)1);
		__this->___PICKTROPAMMO_40 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PICKTROPAMMO_40), (void*)L_35);
		RuntimeObject* L_36;
		L_36 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_42 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_42), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_42;
		RuntimeObject* L_38 = __this->___PICKTROPAMMO_40;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)192), L_38);
		RuntimeObject* L_39;
		L_39 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_45 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_45), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_45;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)172), (4.0f));
		return (bool)0;
	}

IL_0223:
	{
		RuntimeObject* L_41;
		L_41 = TROPDEAD_get__world_m51F24BD5E18D2DEA7A00050659816915F968856E_inline(__this, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_41);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)1272610255), (bool)1, (bool)1);
		__this->___PICKTROPARMOUR_46 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PICKTROPARMOUR_46), (void*)L_43);
		RuntimeObject* L_44;
		L_44 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_48 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_48), (void*)L_44);
		RuntimeObject* L_45 = __this->___MY_48;
		RuntimeObject* L_46 = __this->___PICKTROPARMOUR_46;
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)192), L_46);
		RuntimeObject* L_47;
		L_47 = TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline(__this, NULL);
		__this->___MY_51 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_51), (void*)L_47);
		RuntimeObject* L_48 = __this->___MY_51;
		NullCheck(L_48);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)172), (4.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380 (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDIE_set_MY_m7C8DEE834D78AADE45451CFE4066F72ABFD9C4C1 (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDIE_get_THERE_m47A459D931D1BBD34D1E5C3D97A83CF1DBD2D911 (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDIE_set_THERE_m300C46ACA16EECCBD7677991909E58AEB5D2FE05 (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDIE_get__world_mE78EF466D24A47BB046B47BF9FE002194842B348 (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDIE_set__world_mE6EBE1913C6A252D896A1D84AA85D59DB69519C4 (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDIE_get_Current_m22757BFC95DBAB255AF2E60516D87C035D4D653C (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDIE_set_Current_m539F840E7E7A67EDB76DB79DA14590C0DF3A097B (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDIE_Reset_m09AFBB40794DE068EFBC5F789515B14F2E7D0853 (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDIE__ctor_m933D4EDFE644DE8FEC5F32050931EC8AEFB73C2E (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDIE__ctor_mF136840969B5C3230542A73E5DCC61B906FA39BA (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPDIE_set_MY_m7C8DEE834D78AADE45451CFE4066F72ABFD9C4C1_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPDIE_set_THERE_m300C46ACA16EECCBD7677991909E58AEB5D2FE05_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPDIE_set__world_mE6EBE1913C6A252D896A1D84AA85D59DB69519C4_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPDIE_MoveNext_m7414E7A01D61AA4BF868B4F989D907D9B54573F1 (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)173), (10.0f));
		RuntimeObject* L_3;
		L_3 = TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline(__this, NULL);
		__this->___MY_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_11;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = TROPDIE_get__world_mE78EF466D24A47BB046B47BF9FE002194842B348_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)1737115520), (bool)1, (bool)1);
		__this->___TROPDEAD_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPDEAD_12), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline(__this, NULL);
		__this->___MY_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_14;
		RuntimeObject* L_14 = __this->___TROPDEAD_12;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline(__this, NULL);
		__this->___MY_17 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_17;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)184), (bool)1);
		__this->___temp_18 = L_17;
		float L_18 = __this->___temp_18;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_18, (0.0f), NULL);
		if (L_19)
		{
			goto IL_012b;
		}
	}
	{
		TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* L_20 = (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A*)il2cpp_codegen_object_new(TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A_il2cpp_TypeInfo_var);
		TROPDROPKEY__ctor_mCCA42503FE736AEF6461FAFF06B0644C8FEFF505(L_20, NULL);
		V_0 = L_20;
		TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* L_21 = V_0;
		TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* L_22 = L_21;
		RuntimeObject* L_23;
		L_23 = TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_23);
		TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* L_24 = L_22;
		RuntimeObject* L_25;
		L_25 = TROPDIE_get_THERE_m47A459D931D1BBD34D1E5C3D97A83CF1DBD2D911_inline(__this, NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_24, L_25);
		RuntimeObject* L_26;
		L_26 = TROPDIE_get__world_mE78EF466D24A47BB046B47BF9FE002194842B348_inline(__this, NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_24, L_26);
		RuntimeObject* L_27;
		L_27 = TROPDIE_get__world_mE78EF466D24A47BB046B47BF9FE002194842B348_inline(__this, NULL);
		TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* L_28 = V_0;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_28);
	}

IL_012b:
	{
		RuntimeObject* L_30;
		L_30 = TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline(__this, NULL);
		__this->___MY_21 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_21;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)176), (8.0f));
		RuntimeObject* L_32;
		L_32 = TROPDIE_get__world_mE78EF466D24A47BB046B47BF9FE002194842B348_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)1736700763), (bool)1, (bool)1);
		__this->___TROP8TEX_22 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP8TEX_22), (void*)L_34);
		RuntimeObject* L_35;
		L_35 = TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline(__this, NULL);
		__this->___MY_24 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_24;
		RuntimeObject* L_37 = __this->___TROP8TEX_22;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)164), L_37);
		RuntimeObject* L_38;
		L_38 = TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline(__this, NULL);
		__this->___MY_27 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_38);
		RuntimeObject* L_39 = __this->___MY_27;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)168), (0.0f));
		RuntimeObject* L_40;
		L_40 = TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline(__this, NULL);
		__this->___MY_30 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_40);
		RuntimeObject* L_41 = __this->___MY_30;
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)199), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329 (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPIMPLODE_set_MY_m6CB5996DEB09D7FD75E7736814E99EFD438AC340 (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPIMPLODE_get_THERE_m0826046ADC9A9C25B1E1332B0E2F1321F5C73738 (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPIMPLODE_set_THERE_mF925353064508F4663E1159DBFB8ED58DB64C7BC (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPIMPLODE_set__world_mE33F202281ABF5C75B0463F73AC43C405F2EEE92 (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPIMPLODE_get_Current_m71872AA3EAD72B95933FDA3CBEA4A0E2595E957F (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPIMPLODE_set_Current_mF444B6E10A8B96A1EA82E29B3ED543576A06A3BB (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPIMPLODE_Reset_m436472C54AD86B34732C552DD54AC8E226DD2F2E (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPIMPLODE__ctor_m1251F3B613EDF804FB0C47341A43683B03589021 (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPIMPLODE__ctor_m6E75B6C3022F2FEEC783918A7D9AE095BB0EA8BB (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPIMPLODE_set_MY_m6CB5996DEB09D7FD75E7736814E99EFD438AC340_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPIMPLODE_set_THERE_mF925353064508F4663E1159DBFB8ED58DB64C7BC_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPIMPLODE_set__world_mE33F202281ABF5C75B0463F73AC43C405F2EEE92_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPIMPLODE_MoveNext_m2EC15283C2768D35D789FF23D7C43C862C6014F8 (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* V_0 = NULL;
	TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)217512505));
		__this->___DISTX_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_3, 5, ((int32_t)217512505));
		__this->___DISTX_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_1), (void*)L_4);
		RuntimeObject* L_5 = __this->___DISTX_1;
		NullCheck(L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)231), (bool)1);
		__this->___DISTX_1_val = L_6;
		RuntimeObject* L_7;
		L_7 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_4;
		NullCheck(L_8);
		float L_9;
		L_9 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)195), (bool)1);
		__this->___temp_5 = L_9;
		RuntimeObject* L_10;
		L_10 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_10, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_8), (void*)L_11);
		RuntimeObject* L_12 = __this->___EXPLOSION_CENTER_8;
		NullCheck(L_12);
		float L_13;
		L_13 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)195), (bool)1);
		__this->___temp_9 = L_13;
		RuntimeObject* L_14;
		L_14 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_14;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)195), (bool)1);
		__this->___temp_15 = L_16;
		RuntimeObject* L_17;
		L_17 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_17, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_18 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_18), (void*)L_18);
		RuntimeObject* L_19 = __this->___EXPLOSION_CENTER_18;
		NullCheck(L_19);
		float L_20;
		L_20 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)195), (bool)1);
		__this->___temp_19 = L_20;
		RuntimeObject* L_21;
		L_21 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_24 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_24;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)196), (bool)1);
		__this->___temp_25 = L_23;
		RuntimeObject* L_24;
		L_24 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_28 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_28), (void*)L_25);
		RuntimeObject* L_26 = __this->___EXPLOSION_CENTER_28;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)196), (bool)1);
		__this->___temp_29 = L_27;
		RuntimeObject* L_28;
		L_28 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_34 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_34), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_34;
		NullCheck(L_29);
		float L_30;
		L_30 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)196), (bool)1);
		__this->___temp_35 = L_30;
		RuntimeObject* L_31;
		L_31 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_38 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_38), (void*)L_32);
		RuntimeObject* L_33 = __this->___EXPLOSION_CENTER_38;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)196), (bool)1);
		__this->___temp_39 = L_34;
		RuntimeObject* L_35 = __this->___DISTX_0;
		float L_36 = __this->___temp_5;
		float L_37 = __this->___temp_9;
		float L_38 = __this->___temp_15;
		float L_39 = __this->___temp_19;
		float L_40 = __this->___temp_25;
		float L_41 = __this->___temp_29;
		float L_42 = __this->___temp_35;
		float L_43 = __this->___temp_39;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_36, L_37)), ((float)il2cpp_codegen_subtract(L_38, L_39)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_40, L_41)), ((float)il2cpp_codegen_subtract(L_42, L_43)))))));
		RuntimeObject* L_44;
		L_44 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, 5, ((int32_t)217512505));
		__this->___DISTX_41 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_41), (void*)L_45);
		RuntimeObject* L_46 = __this->___DISTX_41;
		NullCheck(L_46);
		float L_47;
		L_47 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)231), (bool)1);
		__this->___DISTX_41_val = L_47;
		RuntimeObject* L_48;
		L_48 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, 5, ((int32_t)217512505));
		__this->___DISTX_42 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_42), (void*)L_49);
		RuntimeObject* L_50 = __this->___DISTX_42;
		float L_51 = __this->___DISTX_41_val;
		float L_52;
		L_52 = MathUtils_Sqrt_mC66300CAE9A1433A25EE41C5837D731B05AABD25(L_51, NULL);
		NullCheck(L_50);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)231), L_52);
		RuntimeObject* L_53;
		L_53 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)217512507));
		__this->___DISTZ_43 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_43), (void*)L_54);
		RuntimeObject* L_55;
		L_55 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, 5, ((int32_t)217512507));
		__this->___DISTZ_44 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_44), (void*)L_56);
		RuntimeObject* L_57 = __this->___DISTZ_44;
		NullCheck(L_57);
		float L_58;
		L_58 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)231), (bool)1);
		__this->___DISTZ_44_val = L_58;
		RuntimeObject* L_59;
		L_59 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_46 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_46;
		NullCheck(L_60);
		float L_61;
		L_61 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)165), (bool)1);
		__this->___temp_47 = L_61;
		RuntimeObject* L_62;
		L_62 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_50 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_50), (void*)L_63);
		RuntimeObject* L_64 = __this->___EXPLOSION_CENTER_50;
		NullCheck(L_64);
		float L_65;
		L_65 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)165), (bool)1);
		__this->___temp_51 = L_65;
		RuntimeObject* L_66 = __this->___DISTZ_43;
		float L_67 = __this->___temp_47;
		float L_68 = __this->___temp_51;
		NullCheck(L_66);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_67, L_68)));
		RuntimeObject* L_69;
		L_69 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_69, 5, ((int32_t)217512505));
		__this->___DISTX_53 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_53), (void*)L_70);
		RuntimeObject* L_71 = __this->___DISTX_53;
		NullCheck(L_71);
		float L_72;
		L_72 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_71, ((int32_t)231), (bool)1);
		__this->___DISTX_53_val = L_72;
		float L_73 = __this->___DISTX_53_val;
		bool L_74;
		L_74 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_73, (10.0f), NULL);
		if (!L_74)
		{
			goto IL_0364;
		}
	}
	{
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_75 = (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34*)il2cpp_codegen_object_new(BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34_il2cpp_TypeInfo_var);
		BEAMREACT__ctor_mB0794040DFC34B2C1BE7A9198550A45C59AA4C17(L_75, NULL);
		V_0 = L_75;
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_76 = V_0;
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_77 = L_76;
		RuntimeObject* L_78;
		L_78 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		NullCheck(L_77);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_77, L_78);
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_79 = L_77;
		RuntimeObject* L_80;
		L_80 = TROPIMPLODE_get_THERE_m0826046ADC9A9C25B1E1332B0E2F1321F5C73738_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_80);
		RuntimeObject* L_81;
		L_81 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_81);
		RuntimeObject* L_82;
		L_82 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_83 = V_0;
		NullCheck(L_82);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_82, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_83);
		return (bool)0;
	}

IL_0364:
	{
		RuntimeObject* L_85;
		L_85 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_56 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_56), (void*)L_85);
		RuntimeObject* L_86 = __this->___MY_56;
		NullCheck(L_86);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)206), (1.0f));
		RuntimeObject* L_87;
		L_87 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_59 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_59), (void*)L_87);
		RuntimeObject* L_88 = __this->___MY_59;
		NullCheck(L_88);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)207), (0.0f));
		RuntimeObject* L_89;
		L_89 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_62 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_62), (void*)L_89);
		RuntimeObject* L_90 = __this->___MY_62;
		NullCheck(L_90);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_90, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_91;
		L_91 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_65 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_65), (void*)L_91);
		RuntimeObject* L_92 = __this->___MY_65;
		NullCheck(L_92);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_93;
		L_93 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_68 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_68), (void*)L_93);
		RuntimeObject* L_94 = __this->___MY_68;
		NullCheck(L_94);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_95;
		L_95 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_95);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_96, ((int32_t)1333438470), (bool)1, (bool)1);
		__this->___VANISHFORGOOD_69 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VANISHFORGOOD_69), (void*)L_97);
		RuntimeObject* L_98;
		L_98 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_71 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_71), (void*)L_98);
		RuntimeObject* L_99 = __this->___MY_71;
		RuntimeObject* L_100 = __this->___VANISHFORGOOD_69;
		NullCheck(L_99);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)190), L_100);
		RuntimeObject* L_101;
		L_101 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_74 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_74), (void*)L_101);
		RuntimeObject* L_102 = __this->___MY_74;
		NullCheck(L_102);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)176), (8.0f));
		RuntimeObject* L_103;
		L_103 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_103);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_104, ((int32_t)1466363956), (bool)1, (bool)1);
		__this->___TROP0ATEX_75 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP0ATEX_75), (void*)L_105);
		RuntimeObject* L_106;
		L_106 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_77 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_77), (void*)L_106);
		RuntimeObject* L_107 = __this->___MY_77;
		RuntimeObject* L_108 = __this->___TROP0ATEX_75;
		NullCheck(L_107);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)164), L_108);
		RuntimeObject* L_109;
		L_109 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_80 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_80), (void*)L_109);
		RuntimeObject* L_110 = __this->___MY_80;
		NullCheck(L_110);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)168), (0.0f));
		RuntimeObject* L_111;
		L_111 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_83 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_83), (void*)L_111);
		RuntimeObject* L_112 = __this->___MY_83;
		NullCheck(L_112);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_112, ((int32_t)199), (RuntimeObject*)NULL);
		RuntimeObject* L_113;
		L_113 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		__this->___MY_86 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_86), (void*)L_113);
		RuntimeObject* L_114 = __this->___MY_86;
		NullCheck(L_114);
		float L_115;
		L_115 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)184), (bool)1);
		__this->___temp_87 = L_115;
		float L_116 = __this->___temp_87;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_117;
		L_117 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_116, (0.0f), NULL);
		if (L_117)
		{
			goto IL_0547;
		}
	}
	{
		TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* L_118 = (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A*)il2cpp_codegen_object_new(TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A_il2cpp_TypeInfo_var);
		TROPDROPKEY__ctor_mCCA42503FE736AEF6461FAFF06B0644C8FEFF505(L_118, NULL);
		V_1 = L_118;
		TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* L_119 = V_1;
		TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* L_120 = L_119;
		RuntimeObject* L_121;
		L_121 = TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline(__this, NULL);
		NullCheck(L_120);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_120, L_121);
		TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* L_122 = L_120;
		RuntimeObject* L_123;
		L_123 = TROPIMPLODE_get_THERE_m0826046ADC9A9C25B1E1332B0E2F1321F5C73738_inline(__this, NULL);
		NullCheck(L_122);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_122, L_123);
		RuntimeObject* L_124;
		L_124 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		NullCheck(L_122);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_122, L_124);
		RuntimeObject* L_125;
		L_125 = TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline(__this, NULL);
		TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* L_126 = V_1;
		NullCheck(L_125);
		RuntimeObject* L_127;
		L_127 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_125, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_126);
	}

IL_0547:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIT_set_MY_mCA44711BC7028083AB1B9FF0B4406F1B1585868A (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPHIT_get_THERE_m7882475FDE02BDAEB736845268527543B43A8A61 (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIT_set_THERE_m7EE9B0CCD55A7AE364C73320AF6A05496C6966C3 (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIT_set__world_m5D0D494B704B064F78762307F29F671733897448 (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPHIT_get_Current_m583B284F7A0A987511143164C663973516B499BB (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIT_set_Current_mBD8C549728528080436908A4D574E46380132652 (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIT_Reset_mCFCC9BF8251B89FF2449F6245CF46E4D9E0E1687 (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIT__ctor_mC8AC4FF8D9B16E47246AF27FB07F781801C46848 (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPHIT__ctor_mAE0DB9C6E7570F911061E88FE7CC70C5A0BE7CE3 (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPHIT_set_MY_mCA44711BC7028083AB1B9FF0B4406F1B1585868A_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPHIT_set_THERE_m7EE9B0CCD55A7AE364C73320AF6A05496C6966C3_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPHIT_set__world_m5D0D494B704B064F78762307F29F671733897448_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPHIT_MoveNext_m5EC5372CD6C12397C502DA1BD3714F8B643D2D5A (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* V_0 = NULL;
	TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* V_1 = NULL;
	TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* V_2 = NULL;
	TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* V_3 = NULL;
	TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* V_4 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* G_B15_1 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* G_B14_1 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* G_B16_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_07ce;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)441));
		__this->___SHOOT_FAC_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___SHOOT_FAC_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___SHOOT_FAC_1_val = L_4;
		float L_5 = __this->___SHOOT_FAC_1_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_5, (0.0f), NULL);
		if (L_6)
		{
			goto IL_0a13;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, ((int32_t)704), (bool)0);
		__this->___HIT_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_3), (void*)L_9);
		RuntimeObject* L_10 = __this->___HIT_3;
		RuntimeObject* L_11 = __this->___MY_2;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_04d2;
		}
	}
	{
		RuntimeObject* L_13;
		L_13 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_5), (void*)L_14);
		RuntimeObject* L_15 = __this->___EXPLOSION_ON_5;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)231), (bool)1);
		__this->___EXPLOSION_ON_5_val = L_16;
		float L_17 = __this->___EXPLOSION_ON_5_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_17, (0.0f), NULL);
		if (L_18)
		{
			goto IL_0a13;
		}
	}
	{
		RuntimeObject* L_19;
		L_19 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)217512505));
		__this->___DISTX_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_6), (void*)L_20);
		RuntimeObject* L_21;
		L_21 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)217512505));
		__this->___DISTX_7 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_7), (void*)L_22);
		RuntimeObject* L_23 = __this->___DISTX_7;
		NullCheck(L_23);
		float L_24;
		L_24 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), (bool)1);
		__this->___DISTX_7_val = L_24;
		RuntimeObject* L_25;
		L_25 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_10 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_10;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)195), (bool)1);
		__this->___temp_11 = L_27;
		RuntimeObject* L_28;
		L_28 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_14 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_14), (void*)L_29);
		RuntimeObject* L_30 = __this->___EXPLOSION_CENTER_14;
		NullCheck(L_30);
		float L_31;
		L_31 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)195), (bool)1);
		__this->___temp_15 = L_31;
		RuntimeObject* L_32;
		L_32 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_20 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_20;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)195), (bool)1);
		__this->___temp_21 = L_34;
		RuntimeObject* L_35;
		L_35 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_24 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_24), (void*)L_36);
		RuntimeObject* L_37 = __this->___EXPLOSION_CENTER_24;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)195), (bool)1);
		__this->___temp_25 = L_38;
		RuntimeObject* L_39;
		L_39 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_30 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_30;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)196), (bool)1);
		__this->___temp_31 = L_41;
		RuntimeObject* L_42;
		L_42 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_42, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_34 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_34), (void*)L_43);
		RuntimeObject* L_44 = __this->___EXPLOSION_CENTER_34;
		NullCheck(L_44);
		float L_45;
		L_45 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)196), (bool)1);
		__this->___temp_35 = L_45;
		RuntimeObject* L_46;
		L_46 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_40 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_40), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_40;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)196), (bool)1);
		__this->___temp_41 = L_48;
		RuntimeObject* L_49;
		L_49 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_49, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_44 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_44), (void*)L_50);
		RuntimeObject* L_51 = __this->___EXPLOSION_CENTER_44;
		NullCheck(L_51);
		float L_52;
		L_52 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)196), (bool)1);
		__this->___temp_45 = L_52;
		RuntimeObject* L_53 = __this->___DISTX_6;
		float L_54 = __this->___temp_11;
		float L_55 = __this->___temp_15;
		float L_56 = __this->___temp_21;
		float L_57 = __this->___temp_25;
		float L_58 = __this->___temp_31;
		float L_59 = __this->___temp_35;
		float L_60 = __this->___temp_41;
		float L_61 = __this->___temp_45;
		NullCheck(L_53);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_54, L_55)), ((float)il2cpp_codegen_subtract(L_56, L_57)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_58, L_59)), ((float)il2cpp_codegen_subtract(L_60, L_61)))))));
		RuntimeObject* L_62;
		L_62 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, 5, ((int32_t)217512505));
		__this->___DISTX_47 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_47), (void*)L_63);
		RuntimeObject* L_64 = __this->___DISTX_47;
		NullCheck(L_64);
		float L_65;
		L_65 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)231), (bool)1);
		__this->___DISTX_47_val = L_65;
		RuntimeObject* L_66;
		L_66 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, 5, ((int32_t)217512505));
		__this->___DISTX_48 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_48), (void*)L_67);
		RuntimeObject* L_68 = __this->___DISTX_48;
		float L_69 = __this->___DISTX_47_val;
		float L_70;
		L_70 = MathUtils_Sqrt_mC66300CAE9A1433A25EE41C5837D731B05AABD25(L_69, NULL);
		NullCheck(L_68);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)231), L_70);
		RuntimeObject* L_71;
		L_71 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, 5, ((int32_t)217512505));
		__this->___DISTX_50 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_50), (void*)L_72);
		RuntimeObject* L_73 = __this->___DISTX_50;
		NullCheck(L_73);
		float L_74;
		L_74 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)231), (bool)1);
		__this->___DISTX_50_val = L_74;
		float L_75 = __this->___DISTX_50_val;
		bool L_76;
		L_76 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_75, (25.0f), NULL);
		if (L_76)
		{
			goto IL_0a13;
		}
	}
	{
		RuntimeObject* L_77;
		L_77 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_77);
		RuntimeObject* L_78;
		L_78 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_77, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_52 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_52), (void*)L_78);
		RuntimeObject* L_79 = __this->___EXPLOSION_ON_52;
		NullCheck(L_79);
		float L_80;
		L_80 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_79, ((int32_t)231), (bool)1);
		__this->___EXPLOSION_ON_52_val = L_80;
		float L_81 = __this->___EXPLOSION_ON_52_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_81, (2.0f), NULL);
		if (!L_82)
		{
			goto IL_03ef;
		}
	}
	{
		RuntimeObject* L_83;
		L_83 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_55 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_55), (void*)L_83);
		RuntimeObject* L_84 = __this->___MY_55;
		NullCheck(L_84);
		float L_85;
		L_85 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_84, ((int32_t)205), (bool)1);
		__this->___temp_56 = L_85;
		float L_86 = __this->___temp_56;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_87;
		L_87 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_86, (1.0f), NULL);
		if (!L_87)
		{
			goto IL_03ed;
		}
	}
	{
		TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* L_88 = (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0*)il2cpp_codegen_object_new(TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0_il2cpp_TypeInfo_var);
		TROPIMPLODE__ctor_m1251F3B613EDF804FB0C47341A43683B03589021(L_88, NULL);
		V_0 = L_88;
		TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* L_89 = V_0;
		TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* L_90 = L_89;
		RuntimeObject* L_91;
		L_91 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		NullCheck(L_90);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_90, L_91);
		TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* L_92 = L_90;
		RuntimeObject* L_93;
		L_93 = TROPHIT_get_THERE_m7882475FDE02BDAEB736845268527543B43A8A61_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_93);
		RuntimeObject* L_94;
		L_94 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_94);
		RuntimeObject* L_95;
		L_95 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* L_96 = V_0;
		NullCheck(L_95);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_95, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_96);
		return (bool)0;
	}

IL_03ed:
	{
		return (bool)0;
	}

IL_03ef:
	{
		RuntimeObject* L_98;
		L_98 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_58 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_58), (void*)L_98);
		RuntimeObject* L_99;
		L_99 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_60 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_60), (void*)L_99);
		RuntimeObject* L_100 = __this->___MY_60;
		NullCheck(L_100);
		float L_101;
		L_101 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)173), (bool)1);
		__this->___temp_61 = L_101;
		RuntimeObject* L_102;
		L_102 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_63 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_63), (void*)L_102);
		RuntimeObject* L_103 = __this->___MY_63;
		NullCheck(L_103);
		float L_104;
		L_104 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_103, ((int32_t)173), (bool)1);
		__this->___temp_64 = L_104;
		RuntimeObject* L_105;
		L_105 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_105, 5, ((int32_t)441));
		__this->___SHOOT_FAC_66 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_66), (void*)L_106);
		RuntimeObject* L_107 = __this->___SHOOT_FAC_66;
		NullCheck(L_107);
		float L_108;
		L_108 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)231), (bool)1);
		__this->___SHOOT_FAC_66_val = L_108;
		RuntimeObject* L_109;
		L_109 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_109);
		RuntimeObject* L_110;
		L_110 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_109, 5, ((int32_t)217512505));
		__this->___DISTX_71 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_71), (void*)L_110);
		RuntimeObject* L_111 = __this->___DISTX_71;
		NullCheck(L_111);
		float L_112;
		L_112 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_111, ((int32_t)231), (bool)1);
		__this->___DISTX_71_val = L_112;
		RuntimeObject* L_113 = __this->___MY_58;
		float L_114 = __this->___temp_64;
		float L_115 = __this->___SHOOT_FAC_66_val;
		float L_116 = __this->___DISTX_71_val;
		NullCheck(L_113);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_113, ((int32_t)173), ((float)il2cpp_codegen_add(L_114, ((float)(((float)il2cpp_codegen_multiply(L_115, ((float)il2cpp_codegen_subtract((20.0f), L_116))))/(20.0f))))));
		goto IL_0581;
	}

IL_04d2:
	{
		RuntimeObject* L_117;
		L_117 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_76 = L_117;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_76), (void*)L_117);
		RuntimeObject* L_118;
		L_118 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_78 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_78), (void*)L_118);
		RuntimeObject* L_119 = __this->___MY_78;
		NullCheck(L_119);
		float L_120;
		L_120 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_119, ((int32_t)173), (bool)1);
		__this->___temp_79 = L_120;
		RuntimeObject* L_121;
		L_121 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_81 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_81), (void*)L_121);
		RuntimeObject* L_122 = __this->___MY_81;
		NullCheck(L_122);
		float L_123;
		L_123 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_122, ((int32_t)173), (bool)1);
		__this->___temp_82 = L_123;
		RuntimeObject* L_124;
		L_124 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_124);
		RuntimeObject* L_125;
		L_125 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_124, 5, ((int32_t)441));
		__this->___SHOOT_FAC_84 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_84), (void*)L_125);
		RuntimeObject* L_126 = __this->___SHOOT_FAC_84;
		NullCheck(L_126);
		float L_127;
		L_127 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_126, ((int32_t)231), (bool)1);
		__this->___SHOOT_FAC_84_val = L_127;
		RuntimeObject* L_128 = __this->___MY_76;
		float L_129 = __this->___temp_82;
		float L_130 = __this->___SHOOT_FAC_84_val;
		float L_131;
		L_131 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_128);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_128, ((int32_t)173), ((float)il2cpp_codegen_add(L_129, ((float)(((float)il2cpp_codegen_multiply(L_130, ((float)il2cpp_codegen_add(L_131, (2.0f)))))/(3.0f))))));
	}

IL_0581:
	{
		RuntimeObject* L_132;
		L_132 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_95 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_95), (void*)L_132);
		RuntimeObject* L_133 = __this->___MY_95;
		NullCheck(L_133);
		float L_134;
		L_134 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)173), (bool)1);
		__this->___temp_96 = L_134;
		float L_135 = __this->___temp_96;
		bool L_136;
		L_136 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_135, (5.0f), NULL);
		if (L_136)
		{
			goto IL_09b8;
		}
	}
	{
		float L_137;
		L_137 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_138;
		L_138 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_137, (0.0500000007f), NULL);
		if (L_138)
		{
			goto IL_09b8;
		}
	}
	{
		RuntimeObject* L_139;
		L_139 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_100 = L_139;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_100), (void*)L_139);
		RuntimeObject* L_140 = __this->___MY_100;
		RuntimeObject* L_141 = L_140;
		if (L_141)
		{
			G_B15_0 = L_141;
			G_B15_1 = __this;
			goto IL_05e7;
		}
		G_B14_0 = L_141;
		G_B14_1 = __this;
	}
	{
		G_B16_0 = ((RuntimeObject*)(NULL));
		G_B16_1 = G_B14_1;
		goto IL_05f3;
	}

IL_05e7:
	{
		NullCheck(G_B15_0);
		RuntimeObject* L_142;
		L_142 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B15_0, ((int32_t)164), (bool)1, (bool)1);
		G_B16_0 = L_142;
		G_B16_1 = G_B15_1;
	}

IL_05f3:
	{
		NullCheck(G_B16_1);
		G_B16_1->___temp_101 = G_B16_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B16_1->___temp_101), (void*)G_B16_0);
		RuntimeObject* L_143;
		L_143 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		RuntimeObject* L_144 = __this->___temp_101;
		NullCheck(L_143);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_143, ((int32_t)1738102306), L_144);
		RuntimeObject* L_145;
		L_145 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_105 = L_145;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_105), (void*)L_145);
		RuntimeObject* L_146 = __this->___MY_105;
		NullCheck(L_146);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_146, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_147;
		L_147 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_108 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_108), (void*)L_147);
		RuntimeObject* L_148 = __this->___MY_108;
		NullCheck(L_148);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_148, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_149;
		L_149 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_111 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_111), (void*)L_149);
		RuntimeObject* L_150 = __this->___MY_111;
		NullCheck(L_150);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_150, ((int32_t)209), (RuntimeObject*)NULL);
		float L_151;
		L_151 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_152;
		L_152 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_151, (0.699999988f), NULL);
		if (L_152)
		{
			goto IL_070c;
		}
	}
	{
		RuntimeObject* L_153;
		L_153 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_153);
		RuntimeObject* L_154;
		L_154 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_153);
		NullCheck(L_154);
		RuntimeObject* L_155;
		L_155 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_154, ((int32_t)1736592952), (bool)1, (bool)1);
		__this->___TROP5TEX_114 = L_155;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP5TEX_114), (void*)L_155);
		RuntimeObject* L_156;
		L_156 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_116 = L_156;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_116), (void*)L_156);
		RuntimeObject* L_157 = __this->___MY_116;
		RuntimeObject* L_158 = __this->___TROP5TEX_114;
		NullCheck(L_157);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_157, ((int32_t)164), L_158);
		RuntimeObject* L_159;
		L_159 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_159);
		RuntimeObject* L_160;
		L_160 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_159);
		NullCheck(L_160);
		RuntimeObject* L_161;
		L_161 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_160, ((int32_t)1465931900), (bool)1, (bool)1);
		__this->___TROP05SND_117 = L_161;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP05SND_117), (void*)L_161);
		RuntimeObject* L_162;
		L_162 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_119 = L_162;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_119), (void*)L_162);
		RuntimeObject* L_163;
		L_163 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		RuntimeObject* L_164 = __this->___TROP05SND_117;
		RuntimeObject* L_165 = __this->___MY_119;
		NullCheck(L_163);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_163, L_164, (0.200000003f), L_165, (100.0f), (100.0f));
		goto IL_079a;
	}

IL_070c:
	{
		RuntimeObject* L_166;
		L_166 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_166);
		RuntimeObject* L_167;
		L_167 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_166);
		NullCheck(L_167);
		RuntimeObject* L_168;
		L_168 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_167, ((int32_t)1472293561), (bool)1, (bool)1);
		__this->___TROP5ATEX_120 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP5ATEX_120), (void*)L_168);
		RuntimeObject* L_169;
		L_169 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_122 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_122), (void*)L_169);
		RuntimeObject* L_170 = __this->___MY_122;
		RuntimeObject* L_171 = __this->___TROP5ATEX_120;
		NullCheck(L_170);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_170, ((int32_t)164), L_171);
		RuntimeObject* L_172;
		L_172 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_172);
		RuntimeObject* L_173;
		L_173 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_172);
		NullCheck(L_173);
		RuntimeObject* L_174;
		L_174 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_173, ((int32_t)1466974073), (bool)1, (bool)1);
		__this->___TROP11SND_123 = L_174;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP11SND_123), (void*)L_174);
		RuntimeObject* L_175;
		L_175 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_125 = L_175;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_125), (void*)L_175);
		RuntimeObject* L_176;
		L_176 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		RuntimeObject* L_177 = __this->___TROP11SND_123;
		RuntimeObject* L_178 = __this->___MY_125;
		NullCheck(L_176);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_176, L_177, (0.200000003f), L_178, (100.0f), (100.0f));
	}

IL_079a:
	{
		float L_179;
		L_179 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_179;
		float L_180 = __this->___startTime1;
		float L_181;
		L_181 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_180, L_181));
		__this->____cursor = 1;
		goto IL_07ce;
	}

IL_07c1:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_182 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		TROPHIT_set_Current_mBD8C549728528080436908A4D574E46380132652_inline(__this, L_182, NULL);
		return (bool)1;
	}

IL_07ce:
	{
		float L_183;
		L_183 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_184 = __this->___endTime1;
		if ((((float)L_183) < ((float)L_184)))
		{
			goto IL_07c1;
		}
	}
	{
		TROPHIT_set_Current_mBD8C549728528080436908A4D574E46380132652_inline(__this, NULL, NULL);
		RuntimeObject* L_185;
		L_185 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_185);
		NullCheck(L_186);
		RuntimeObject* L_187;
		L_187 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_186, ((int32_t)1987912643), (bool)1, (bool)1);
		__this->___TROPESCAPE_127 = L_187;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPESCAPE_127), (void*)L_187);
		RuntimeObject* L_188;
		L_188 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_129 = L_188;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_129), (void*)L_188);
		RuntimeObject* L_189 = __this->___MY_129;
		RuntimeObject* L_190 = __this->___TROPESCAPE_127;
		NullCheck(L_189);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_189, ((int32_t)192), L_190);
		RuntimeObject* L_191;
		L_191 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_191);
		RuntimeObject* L_192;
		L_192 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_191);
		NullCheck(L_192);
		RuntimeObject* L_193;
		L_193 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_192, ((int32_t)1737263724), (bool)1, (bool)1);
		__this->___TROPHIDE_130 = L_193;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIDE_130), (void*)L_193);
		RuntimeObject* L_194;
		L_194 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_132 = L_194;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_132), (void*)L_194);
		RuntimeObject* L_195 = __this->___MY_132;
		RuntimeObject* L_196 = __this->___TROPHIDE_130;
		NullCheck(L_195);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_195, ((int32_t)193), L_196);
		RuntimeObject* L_197;
		L_197 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_197);
		RuntimeObject* L_198;
		L_198 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_197);
		NullCheck(L_198);
		RuntimeObject* L_199;
		L_199 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_198, ((int32_t)182795863), (bool)1, (bool)1);
		__this->___TROPHIT_133 = L_199;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROPHIT_133), (void*)L_199);
		RuntimeObject* L_200;
		L_200 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_135 = L_200;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_135), (void*)L_200);
		RuntimeObject* L_201 = __this->___MY_135;
		RuntimeObject* L_202 = __this->___TROPHIT_133;
		NullCheck(L_201);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_201, ((int32_t)209), L_202);
		RuntimeObject* L_203;
		L_203 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_203);
		RuntimeObject* L_204;
		L_204 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_203, ((int32_t)1738102306), (bool)0);
		__this->___TROP_TEX_136 = L_204;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP_TEX_136), (void*)L_204);
		RuntimeObject* L_205;
		L_205 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_138 = L_205;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_138), (void*)L_205);
		RuntimeObject* L_206 = __this->___MY_138;
		RuntimeObject* L_207 = __this->___TROP_TEX_136;
		NullCheck(L_206);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_206, ((int32_t)164), L_207);
		RuntimeObject* L_208;
		L_208 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_141 = L_208;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_141), (void*)L_208);
		RuntimeObject* L_209 = __this->___MY_141;
		NullCheck(L_209);
		float L_210;
		L_210 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_209, ((int32_t)173), (bool)1);
		__this->___temp_142 = L_210;
		float L_211 = __this->___temp_142;
		bool L_212;
		L_212 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_211, (4.0f), NULL);
		if (!L_212)
		{
			goto IL_0947;
		}
	}
	{
		TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* L_213 = (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4*)il2cpp_codegen_object_new(TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4_il2cpp_TypeInfo_var);
		TROPHIDE__ctor_m77C37A1984BF40C5B9CE28E0295873908592DE23(L_213, NULL);
		V_1 = L_213;
		TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* L_214 = V_1;
		TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* L_215 = L_214;
		RuntimeObject* L_216;
		L_216 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		NullCheck(L_215);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_215, L_216);
		TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* L_217 = L_215;
		RuntimeObject* L_218;
		L_218 = TROPHIT_get_THERE_m7882475FDE02BDAEB736845268527543B43A8A61_inline(__this, NULL);
		NullCheck(L_217);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_217, L_218);
		RuntimeObject* L_219;
		L_219 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_217);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_217, L_219);
		RuntimeObject* L_220;
		L_220 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* L_221 = V_1;
		NullCheck(L_220);
		RuntimeObject* L_222;
		L_222 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_220, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_221);
		return (bool)0;
	}

IL_0947:
	{
		RuntimeObject* L_223;
		L_223 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_145 = L_223;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_145), (void*)L_223);
		RuntimeObject* L_224 = __this->___MY_145;
		NullCheck(L_224);
		float L_225;
		L_225 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_224, ((int32_t)176), (bool)1);
		__this->___temp_146 = L_225;
		float L_226 = __this->___temp_146;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_227;
		L_227 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_226, (4.0f), NULL);
		if (L_227)
		{
			goto IL_09b6;
		}
	}
	{
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_228 = (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA*)il2cpp_codegen_object_new(TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		TROPFOLLOWATTACK__ctor_m3F9D3BD614C9DFC04F5208E62E147625D29FFE3B(L_228, NULL);
		V_2 = L_228;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_229 = V_2;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_230 = L_229;
		RuntimeObject* L_231;
		L_231 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		NullCheck(L_230);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_230, L_231);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_232 = L_230;
		RuntimeObject* L_233;
		L_233 = TROPHIT_get_THERE_m7882475FDE02BDAEB736845268527543B43A8A61_inline(__this, NULL);
		NullCheck(L_232);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_232, L_233);
		RuntimeObject* L_234;
		L_234 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_232);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_232, L_234);
		RuntimeObject* L_235;
		L_235 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_236 = V_2;
		NullCheck(L_235);
		RuntimeObject* L_237;
		L_237 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_235, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_236);
		return (bool)0;
	}

IL_09b6:
	{
		return (bool)0;
	}

IL_09b8:
	{
		RuntimeObject* L_238;
		L_238 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		__this->___MY_149 = L_238;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_149), (void*)L_238);
		RuntimeObject* L_239 = __this->___MY_149;
		NullCheck(L_239);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_239, ((int32_t)173), (10.0f));
		TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* L_240 = (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B*)il2cpp_codegen_object_new(TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B_il2cpp_TypeInfo_var);
		TROPDIE__ctor_m933D4EDFE644DE8FEC5F32050931EC8AEFB73C2E(L_240, NULL);
		V_3 = L_240;
		TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* L_241 = V_3;
		TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* L_242 = L_241;
		RuntimeObject* L_243;
		L_243 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		NullCheck(L_242);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_242, L_243);
		TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* L_244 = L_242;
		RuntimeObject* L_245;
		L_245 = TROPHIT_get_THERE_m7882475FDE02BDAEB736845268527543B43A8A61_inline(__this, NULL);
		NullCheck(L_244);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_244, L_245);
		RuntimeObject* L_246;
		L_246 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_244);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_244, L_246);
		RuntimeObject* L_247;
		L_247 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* L_248 = V_3;
		NullCheck(L_247);
		RuntimeObject* L_249;
		L_249 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_247, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_248);
		return (bool)0;
	}

IL_0a13:
	{
		TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* L_250 = (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC*)il2cpp_codegen_object_new(TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC_il2cpp_TypeInfo_var);
		TROPTURN__ctor_m3CB8B39CB3C29ED60B67D2AF587241AACB39DBEE(L_250, NULL);
		V_4 = L_250;
		TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* L_251 = V_4;
		TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* L_252 = L_251;
		RuntimeObject* L_253;
		L_253 = TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline(__this, NULL);
		NullCheck(L_252);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_252, L_253);
		TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* L_254 = L_252;
		RuntimeObject* L_255;
		L_255 = TROPHIT_get_THERE_m7882475FDE02BDAEB736845268527543B43A8A61_inline(__this, NULL);
		NullCheck(L_254);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_254, L_255);
		RuntimeObject* L_256;
		L_256 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		NullCheck(L_254);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_254, L_256);
		RuntimeObject* L_257;
		L_257 = TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline(__this, NULL);
		TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* L_258 = V_4;
		NullCheck(L_257);
		RuntimeObject* L_259;
		L_259 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_257, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_258);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLIMPLODE_set_MY_mA60DF56A6221BAA028054D249E0CE6A27E8DD9C0_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLIMPLODE_set_THERE_mFA4FA3FA15F4AD4AA8B529AF1B8A51713D4F0D9A_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLIMPLODE_set__world_mC7FB408ACB991F36A88A61B4FB5907D9767776F9_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLIMPLODE_get__world_mA3DD3784371EDB9737130E208037039664340F3A_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLIMPLODE_get_MY_m06B12FB4E7C3F35A2C1107C162EE7865C56FCAA1_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLIMPLODE_get_THERE_m7B24A82DC5E62C0FCA3DE1227CC5161D770B5932_inline (DRKLIMPLODE_tBF4DBAD32F76AA334403476978E88FE317452178* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIT_set_MY_mBB5B44F1319531E94DB94CB466F6D1A6EA6B5F05_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIT_set_THERE_m601B8A6756BF605C75AEEC02E2D00E4FC1BD9247_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIT_set__world_m73279FFFA8C5B874F0F98E259EEEF07960C7D2CF_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIT_get__world_m10568CBDC4C522E7C5D2413A8D3C22BA17F1F672_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIT_get_MY_m96C785CDC39CD7BFE8ADB921E2DDB326D399CE92_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIT_get_THERE_mF07DC176E747CCDAF80E142F58132AF704DE4756_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIT_set_Current_m6211B90EE722A51BF2240F34BDD207C49C4BD982_inline (DRKLHIT_t1D274DE3320FC9CAF6314ADF0117E1933E3CA542* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK_set_MY_mC7CDC80D6BC4E0A61DEDA2C579B518886DBAA79D_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK_set_THERE_mB492831F743B7CD260C1989FE2FD9AF46CB6CE7E_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLATTACK_set__world_m2DA7A7B9846E14D46F43B379712A9D8C62B8B5D0_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLATTACK_get_MY_mC692B8D5D5132EE77346A3B806D1D8C31D030BBA_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLATTACK_get_THERE_mB866B7DE6A1B9C84B0815AE1C81BB864E7D0E8C2_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLATTACK_get__world_m5E02BB375F2DB0B55A0A8BD3B179A98DF1DB3BE1_inline (CYCLEDRKLATTACK_t16371F22695110ECC7ABE0639E6F9BBC2B376B4B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE_set_MY_m1AF7239903E3BED01F7F8B41DECFE6F8E7A26F5B_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE_set_THERE_mC35B4046843CD7EF7F1BDEE1C209833A636A82F5_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLHIDE_set__world_m4446959BB64074ACF110B1B48C696FAE264D9B68_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLHIDE_get_MY_m7785C5BA1EADD2D277ECE6606213FCC8D779CA87_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLHIDE_get_THERE_m2A2C5A0E040AC4B239CDE47D31E4758B7A93D3D8_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLHIDE_get__world_mB1B84BB9BE77F5B40DFE6013D739CC1BABD31BCB_inline (CYCLEDRKLHIDE_t2154EA6632ED62C6969AE4E820672108B3575AD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT_set_MY_m8F8E205563CF847B7EEA807F94BE059BCE2219FE_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT_set_THERE_m9273C88C05888334CB8B7F8CA30624F894830CEA_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEDRKLSHOOT_set__world_mDE5F269A53548393E8F8D9D584C03BCE179D3C46_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLSHOOT_get_MY_m71A6048B321FF762541FB415B0FEEC2D65A8DE06_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLSHOOT_get_THERE_m8EEDBA6001E90F4294A7BDD6947477F5F9BB4A62_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEDRKLSHOOT_get__world_m198FD36E5D5762EEB104E969792067E0786B285B_inline (CYCLEDRKLSHOOT_t0531A52C0EBE27995476D5749459315C0560FDE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTALK_set_MY_m40FC08BD28EC35E1D9C41F1BFC55C0A06C310E53_inline (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTALK_set_THERE_m18E29127F4E0AD0ABD5C5CB6DA2D4FA6FF47DC77_inline (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTALK_set__world_mC2AF6004BA8656A1933CF1FD15B4FA061FEF8E63_inline (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLTALK_get__world_m54BE2FFCD883BCACB977F285DE524D5ABBD8D705_inline (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLTALK_get_MY_m5ABFF477E13953D8664FCC360EAC9A0C0A970B8A_inline (DRKLTALK_t7DB7E94A3D6BEDAFDCD435BEDDF3DB417CFDF891* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTURN_set_MY_m18E64DEBB4AC625BC5FAAFE7DADE16BE875F815B_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTURN_set_THERE_m622952EABEDB78239D74BFE9F34F9CD884A657B2_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTURN_set__world_m087C67F437849E8F439AAA18F5760784E28DB3A3_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPTURN_get__world_m09B47EB4F8C0D0E900987F8AC8A9842E55858FF5_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPTURN_get_MY_m2F8B05D8412A55C6453901606B835E2D974E00AD_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPTURN_get_THERE_m93B1DDC77828B6037897E4184F48ACA6F42B8B4C_inline (TROPTURN_t68F3B17288966E856DEB1F003D1B71A5E16A74FC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPBACKOFF_set_MY_m3E90C92D91BA12CACDC3335CD30D57AC33CE31DD_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPBACKOFF_set_THERE_m7F435331B5FEEE21ACE560CA6BB136ADD6093639_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPBACKOFF_set__world_m881B48783EF4743F99AECED276EA3055808F1F37_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPBACKOFF_get_MY_mB97BD9C9AD2378AF27A6E70C361CE757D1F0FC33_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPBACKOFF_get__world_mD0C89B29130589CCECBF8134D29079575ABDDFF7_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPBACKOFF_get_THERE_m66653026948168AC8ECCB1C5914991453EDDBF23_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPBACKOFF_set_Current_m268B3B18F8D24E8DB4648330A9E541105A2135CE_inline (TROPBACKOFF_tB217C26DE0BED84CFBE0689BC31920FE47F45769* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWAIT_set_MY_mEE81CBD84566679B64EC49FFA9B56C49630CC8AD_inline (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWAIT_set_THERE_m1AF0630C79B1A101291B21BF3BD34C236B490D98_inline (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWAIT_set__world_mE56DC706BC8D9D7E9D9E76D611875F2864661BB3_inline (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWAIT_get_MY_mEAF2686FAEC6044673637E15872C41B27147614E_inline (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWAIT_get__world_m27A5C453A36918D97CA95B9BED95F78D3BBCC01F_inline (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWANDER_set_MY_m63657DD72ADDF9EB6381222B1D8A7BE2CDABDEFD_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWANDER_set_THERE_mC03D66A83A5A82C9282DAE2F54DA2BEEEA7ACCCA_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWANDER_set__world_m0A4C51CBE46B99DA5117DA1D534DA9DFEFDA5DD8_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWANDER_get_MY_mD08D8338A5170C0089278D42459DE4DE3F4E5FC6_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWANDER_get__world_m8DB68B0D5A60DBEDDE9D31E66E9AF1335684EF28_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWANDER_get_THERE_mF476ADD0278E091867E0C969F885CD71D6487FC0_inline (TROPWANDER_tA5780F3C99DD4A09590CA268F393453209BEA39B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSEARCH_set_MY_m2AE31C563E9E971EC3C0C5D91FA2378B91ECC852_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSEARCH_set_THERE_m248469948A404E3261117D2B3D82CF6F0E1B8F57_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSEARCH_set__world_mC8332D4232D3EC2A14F47CF17726A4AD5FB99111_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSEARCH_get_MY_mDF7AD61900E7F5E5E5A75613D3B69319692935D3_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSEARCH_get__world_m3939099B8C89208632B04C3F08CE6FB3C62FF506_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSEARCH_get_THERE_m6B171B0F01B490899AF1EF27E5EB8EA5AED53B62_inline (TROPSEARCH_t0F542A470F110BC1E5AEE5DA3839FBA54E49E609* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIDE_set_MY_mFA955FC06431F1185366CD0D57B4CBF70F2BE2CD_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIDE_set_THERE_m6DC222EEED21F14A176BE4CA024C88CE23968B85_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIDE_set__world_mBE92153B48377B7DE80D9E876E2423FB71FF8E68_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIDE_get_MY_m27A2FB02295A9A9782FABBB824FFCEFD8F80F4CD_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIDE_get__world_m0919A0ADE49106E917570B9490736386F3E907F2_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIDE_get_THERE_m66375BD129D0D33B51B9C24296EFEACC0AF72C1D_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIDE_set_Current_mC680764F649AED4113CDEE76C444784366F3C2A2_inline (TROPHIDE_t9FEE7CDCB6278C89B086178357255ACC1216BFD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLISTEN_set_MY_m4E8306AB8BF51A4DF037139402C42B14E4FB3C5C_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLISTEN_set_THERE_m991939E04E5544B45ED1B631F2334AE922856F10_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLISTEN_set__world_mDEEB1269730F3F59923094361C3A8A1A9FF8BF6B_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLISTEN_get_MY_mBECC896A3927CC6BAD140F85240FB0DFC6B7A7FB_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLISTEN_get__world_m67B210CD1ABC0321F724758C183E81D990B2ECA7_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLISTEN_set_Current_mE317E1372E233F3B142B46E185F2A25DC79FFC20_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLISTEN_get_THERE_m33BEE7868B9E543363CC96456A36402DED2835A7_inline (TROPLISTEN_t7264533920301A43BEAE6FB1024B66CEBB019B84* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWARNING_set_MY_m0F71AEB72BC773F3D0BFF1144EA6F8DEDA6269AE_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWARNING_set_THERE_m2FECFCF8741C62D03B6AF74000D7219F85C83D78_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWARNING_set__world_m2FD1850602F215A2F61CC8B16DA73B4AF5E45F54_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWARNING_get_MY_mBEA047F8F49C13B0ACFD98F93688813564968FA4_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWARNING_get__world_m8B7AB8E004E305327938F4A66858E8E394A620C1_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPWARNING_set_Current_mD85E0027929DCBEDFFDB28EBFA16B43FB774839B_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPWARNING_get_THERE_mB968973F6F0A1ABC149A96D2A3B7DCD364303F3F_inline (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLOOKFOR_set_MY_m04C451DB15DA350108044753416AE7ECDF0316DC_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLOOKFOR_set_THERE_m89F4737A873C4AF3991D618CC678D39163EE706A_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPLOOKFOR_set__world_mE8283792B6A2E60993881F721513D16E9D127F46_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLOOKFOR_get_MY_m026E563D11FA0B6BA4FD297F78987666AEAAB2DC_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLOOKFOR_get_THERE_m80365F9F59176165ACCFF35D6EC7CD051F702BA6_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPLOOKFOR_get__world_m8302FC44BF42E9E999D09B4987CCEFB8DC86A4F5_inline (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOW_set_MY_mECE5C969B2C6324587136175FA3FF3F2A1AFBCC6_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOW_set_THERE_m526C93A3C2B33DBE41A39B872E81C60008281072_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOW_set__world_m5E38EC8940D37D78D40316511693FB1294474650_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOW_get_MY_m13870AB26804B23E2483FBC935F9846655A61519_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOW_get__world_m282A18D5637B93FBFA4A0537F0C21E393765D3D0_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOW_get_THERE_m2F78BDE4817C1F64232F63022D28F9DC57845FEA_inline (TROPFOLLOW_tADF22EBB1531221750E28F8BCDAF9A257AB84BC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK_set_MY_mC2F06C7800C38299D08263BDE029ACA0D99CDF7A_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK_set_THERE_m0A923570207B279803F1056DE52348CBD03A2E63_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK_set__world_mD005958E0D835800347DC4BBB9F7B0A19912F241_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWATTACK_get_MY_m4F7AB433A27534491294E1E55D12C97DAF23BB9E_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWATTACK_get__world_mF0B37027A424B5A9786F2CD6B12FA7771218E6BB_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWATTACK_get_THERE_m5BADC4EF19BDA597BD2AA91DC39AE100F3A5930D_inline (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING_set_MY_mBC8C4C8E38C15A9AB523F9B14FA857F842DEF285_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING_set_THERE_m08992DD7F9FA88EC80C614B7F2A0945A554D8F9D_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING_set__world_mF9357EF599B9E629D7845F762E80A3C1BB3DCFE7_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWWARNING_get_MY_mFB4E37F77EA20CD34C30B0CEA38D050BACCBC8BC_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWWARNING_get__world_m3297C1C1A909E7B12F0E8D3D7E12FC572F0FB97C_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPFOLLOWWARNING_get_THERE_mA02114A2FA33919CA9A82774202CD809D43D1FC9_inline (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPAIM_set_MY_m87C794788EDFE0BD41F224EE97892540CEA4E45C_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPAIM_set_THERE_mF988194FE82CC6CC618ECCAB75DB7106CF9988D5_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPAIM_set__world_m09387C21D2A3209784FD5C2A2AB8CAF8E14187CC_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPAIM_get_MY_mE04895071978AF76938444BA9A457BC7FE618AE8_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPAIM_get__world_m14CDC9F872623DAA5D74373B4AC1CB6055F53B28_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPAIM_get_THERE_m907C8821B2E708A7DC5B2DE6318CF3E29E8484F1_inline (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOOT_set_MY_mAB7B8469C19F42700A0FC1B69BAF66B85EFC6395_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOOT_set_THERE_mDFC7181D7AFFAD0A51C65ED26B83F16009FA8ECF_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOOT_set__world_m92A6A62126C28ADFD707444608DBDEB2C58F6AEC_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOOT_get_MY_m3701D51D4E15476723C08E1534396CF5E4F77E67_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOOT_get__world_m718727890580601712D2D6532793C67941DD57CF_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOOT_get_THERE_mCBD765A9F6D18D97582FDC3B3DBEC04DDB5CBCCB_inline (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPESCAPE_set_MY_m9E1286CEACC39249EBEA54D7231D9971AB789600_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPESCAPE_set_THERE_m7D7E6BC62B8F0B144342280A4E5A7647B9E0BD94_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPESCAPE_set__world_m96C179320C5132840B84770ACE8377AEA1113F9D_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPESCAPE_get_MY_mF30BA59C2AEB29E80202F9FE75995869DCCBD85B_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPESCAPE_get__world_m6DACF01E2FED1D820B7B5FB4D1B4C3A461DC9D01_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPESCAPE_get_THERE_m8A48EDB636E1CAB78F32E31DE44AF019B28CD75F_inline (TROPESCAPE_tDCF6EAD669458BC4D4F5FD1CD56B8C06DA51AE79* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDEAD_set_MY_m2C66F070F2A33F3832AB8665901D8B4BF32E5D41_inline (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDEAD_set_THERE_mC5F7C130AF34EFE3D68DA7E634E63337F66C8CBA_inline (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDEAD_set__world_m0097A37F7D0162B717C9346B8299ECAECAEDF792_inline (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDEAD_get_MY_m341C2A54E3E79BCD0CEF35E2CB3C0CC2344DFC41_inline (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDEAD_get__world_m51F24BD5E18D2DEA7A00050659816915F968856E_inline (TROPDEAD_t9CB6A008453459856D6F1FA29C888812BF47E567* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDIE_set_MY_m7C8DEE834D78AADE45451CFE4066F72ABFD9C4C1_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDIE_set_THERE_m300C46ACA16EECCBD7677991909E58AEB5D2FE05_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDIE_set__world_mE6EBE1913C6A252D896A1D84AA85D59DB69519C4_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDIE_get_MY_m1273520545CABA58C1EE4ACAE2CB9CB3466BD380_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDIE_get__world_mE78EF466D24A47BB046B47BF9FE002194842B348_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDIE_get_THERE_m47A459D931D1BBD34D1E5C3D97A83CF1DBD2D911_inline (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPIMPLODE_set_MY_m6CB5996DEB09D7FD75E7736814E99EFD438AC340_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPIMPLODE_set_THERE_mF925353064508F4663E1159DBFB8ED58DB64C7BC_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPIMPLODE_set__world_mE33F202281ABF5C75B0463F73AC43C405F2EEE92_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPIMPLODE_get__world_mEC6286DA71826E4199F3A4CB82A7EDEB5965111B_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPIMPLODE_get_MY_mDD2EFF4584004B794E21E140C747047A00A30329_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPIMPLODE_get_THERE_m0826046ADC9A9C25B1E1332B0E2F1321F5C73738_inline (TROPIMPLODE_t283EBDD0A05B71E4F81C8D8ECAEFD56F06B8B7D0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIT_set_MY_mCA44711BC7028083AB1B9FF0B4406F1B1585868A_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIT_set_THERE_m7EE9B0CCD55A7AE364C73320AF6A05496C6966C3_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIT_set__world_m5D0D494B704B064F78762307F29F671733897448_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIT_get__world_m6740FE23E603180954DFFE2A9BFD87551A3B898C_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIT_get_MY_m0D80A8A5A97D754E8984E92234B2306FC007141B_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPHIT_get_THERE_m7882475FDE02BDAEB736845268527543B43A8A61_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPHIT_set_Current_mBD8C549728528080436908A4D574E46380132652_inline (TROPHIT_t42E253D0FCFDF1939122978A0AA3659375DC1317* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}

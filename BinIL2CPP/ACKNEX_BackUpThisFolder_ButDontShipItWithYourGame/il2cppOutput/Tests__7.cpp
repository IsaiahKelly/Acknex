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
struct List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535;
struct IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
struct BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34;
struct CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC;
struct CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A;
struct CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160;
struct CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13;
struct CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0;
struct CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82;
struct CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D;
struct CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC;
struct CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595;
struct CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110;
struct DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04;
struct FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5;
struct HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D;
struct LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57;
struct LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88;
struct LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD;
struct LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4;
struct LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112;
struct LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E;
struct LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC;
struct LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581;
struct LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2;
struct LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D;
struct LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295;
struct LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E;
struct LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A;
struct LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7;
struct LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF;
struct LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D;
struct LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C;
struct LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614;
struct LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87;
struct LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88;
struct LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511;
struct PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81;
struct PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0;
struct PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176;
struct REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024;
struct SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D;
struct TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD;
struct TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B;
struct TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A;
struct TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA;
struct TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98;
struct TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6;
struct TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B;
struct TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA;
struct TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C;
struct TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753;
struct TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C;
struct TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518;
struct TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902;

IL2CPP_EXTERN_C RuntimeClass* BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C_il2cpp_TypeInfo_var;
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
struct CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SHOT_SOUND_ON_1;
	float ___SHOT_SOUND_ON_1_val;
	RuntimeObject* ___MY_4;
	float ___temp_5;
	RuntimeObject* ___MY_8;
	float ___temp_9;
	RuntimeObject* ___GUN_ON_11;
	float ___GUN_ON_11_val;
	RuntimeObject* ___MY_14;
};
struct CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13  : public RuntimeObject
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
	RuntimeObject* ___MY_22;
	RuntimeObject* ___BULLET_23;
	RuntimeObject* ___MY_25;
	RuntimeObject* ___MY_28;
	RuntimeObject* ___MY_31;
};
struct CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0  : public RuntimeObject
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
	RuntimeObject* ___SHOT_SOUND_ON_13;
	RuntimeObject* ___SHOTSECCOUNT_15;
};
struct CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___SHOT_SOUND_ON_5;
	float ___SHOT_SOUND_ON_5_val;
	RuntimeObject* ___MY_8;
	float ___temp_9;
	RuntimeObject* ___GUN_ON_11;
	float ___GUN_ON_11_val;
	RuntimeObject* ___MY_14;
	float ___temp_15;
	RuntimeObject* ___MY_18;
	RuntimeObject* ___MY_21;
	float ___temp_22;
};
struct CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_1;
	RuntimeObject* ___MY_3;
	float ___temp_4;
	RuntimeObject* ___MY_6;
	float ___temp_7;
	RuntimeObject* ___MY_18;
	float ___temp_19;
	RuntimeObject* ___MY_22;
	float ___temp_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___BULLET_27;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
	RuntimeObject* ___MY_35;
};
struct CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595  : public RuntimeObject
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
	RuntimeObject* ___SHOT_SOUND_ON_17;
	RuntimeObject* ___SHOTSECCOUNT_19;
};
struct CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___GUN_ON_1;
	float ___GUN_ON_1_val;
	RuntimeObject* ___MY_4;
	float ___temp_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	float ___temp_12;
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
struct HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D  : public RuntimeObject
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
	RuntimeObject* ___SHOOT_FAC_52;
	float ___SHOOT_FAC_52_val;
	RuntimeObject* ___MY_55;
	RuntimeObject* ___MOVE_56;
	RuntimeObject* ___MY_58;
	RuntimeObject* ___MY_61;
	RuntimeObject* ___MY_64;
	RuntimeObject* ___HUMM04SND_65;
	RuntimeObject* ___MY_67;
	RuntimeObject* ___MY_70;
	RuntimeObject* ___ACTORJUMPSTOP_71;
	RuntimeObject* ___MY_73;
};
struct LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___LNCHSHOOT_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___LNCHHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___LNCH3ATEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___FOLLOW_27;
	RuntimeObject* ___MY_29;
};
struct LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___CYCLELNCHBACK_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___LNCHHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___LNCH1TEX_21;
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
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MY_50;
	float ___temp_51;
};
struct LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD  : public RuntimeObject
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
	RuntimeObject* ___LNCH9TEX_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
};
struct LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4  : public RuntimeObject
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
	RuntimeObject* ___LNCHDEAD_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	float ___temp_18;
	RuntimeObject* ___MY_21;
	RuntimeObject* ___LNCH8TEX_22;
	RuntimeObject* ___MY_24;
	RuntimeObject* ___MY_27;
	RuntimeObject* ___MY_30;
};
struct LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112  : public RuntimeObject
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
struct LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___LNCHHIDE_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLELNCHHIDE_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___LNCHHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___LNCH1TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___REPEL_30;
	RuntimeObject* ___MY_32;
};
struct LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLELNCHATTACK_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___LNCHHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___LNCH1TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___FOLLOW_27;
	RuntimeObject* ___MY_29;
};
struct LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLELNCHSHOOT_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___LNCHHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___LNCH1TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___FOLLOW_27;
	RuntimeObject* ___MY_29;
};
struct LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___LNCHESCAPE_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___CYCLELNCHHIDE_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___LNCHHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_25;
	RuntimeObject* ___MY_27;
	float ___temp_28;
	RuntimeObject* ___PLAYER_ANGLE_29;
	float ___PLAYER_ANGLE_29_val;
	RuntimeObject* ___LNCH1TEX_38;
	RuntimeObject* ___MY_40;
	RuntimeObject* ___MY_43;
	RuntimeObject* ___MY_46;
	RuntimeObject* ___BULLET_47;
	RuntimeObject* ___MY_49;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_53;
	float ___temp_54;
};
struct LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D  : public RuntimeObject
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
	RuntimeObject* ___MY_77;
	float ___temp_78;
	RuntimeObject* ___MY_82;
	RuntimeObject* ___temp_83;
	RuntimeObject* ___LNCH5TEX_85;
	RuntimeObject* ___MY_87;
	RuntimeObject* ___MY_90;
	RuntimeObject* ___MY_93;
	RuntimeObject* ___MY_96;
	RuntimeObject* ___TROP05SND_99;
	RuntimeObject* ___MY_101;
	RuntimeObject* ___TROP11SND_102;
	RuntimeObject* ___MY_104;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___LNCHESCAPE_106;
	RuntimeObject* ___MY_108;
	RuntimeObject* ___LNCHHIDE_109;
	RuntimeObject* ___MY_111;
	RuntimeObject* ___LNCHHIT_112;
	RuntimeObject* ___MY_114;
	RuntimeObject* ___LNCH_TEX_115;
	RuntimeObject* ___MY_117;
	RuntimeObject* ___MY_120;
	float ___temp_121;
	RuntimeObject* ___MY_124;
	float ___temp_125;
	RuntimeObject* ___MY_128;
};
struct LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295  : public RuntimeObject
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
	RuntimeObject* ___LNCH0ATEX_75;
	RuntimeObject* ___MY_77;
	RuntimeObject* ___MY_80;
	RuntimeObject* ___MY_83;
	RuntimeObject* ___MY_86;
	float ___temp_87;
};
struct LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLELNCHATTACK_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___LNCHHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___LNCH0TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_33;
	float ___temp_34;
};
struct LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A  : public RuntimeObject
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
	RuntimeObject* ___FOLLOW_8;
	RuntimeObject* ___MY_10;
	RuntimeObject* ___temp_11;
	RuntimeObject* ___MY_14;
	float ___temp_15;
	RuntimeObject* ___MY_18;
	RuntimeObject* ___MY_21;
	RuntimeObject* ___LNCHSEARCH_22;
	RuntimeObject* ___MY_24;
	RuntimeObject* ___MY_27;
	RuntimeObject* ___MY_30;
	RuntimeObject* ___MY_33;
	float ___temp_34;
	RuntimeObject* ___LNCHFOLLOWATTACK_35;
	RuntimeObject* ___MY_37;
	RuntimeObject* ___MY_40;
	RuntimeObject* ___LNCH1TEX_41;
	RuntimeObject* ___MY_43;
	RuntimeObject* ___MY_46;
	RuntimeObject* ___BULLET_47;
	RuntimeObject* ___MY_49;
};
struct LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___CYCLELNCHATTACK_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___LNCHHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___LNCH1TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___BULLET_27;
	RuntimeObject* ___MY_29;
};
struct LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___LNCHBACKOFF_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___LNCHHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MISSILE_19;
	RuntimeObject* ___MY_22;
	RuntimeObject* ___LNCH3TEX_23;
	RuntimeObject* ___MY_25;
	RuntimeObject* ___MY_28;
	RuntimeObject* ___FOLLOW_29;
	RuntimeObject* ___MY_31;
	RuntimeObject* ___MY_34;
	float ___temp_35;
	RuntimeObject* ___DISTZ_36;
	RuntimeObject* ___DISTZ_37;
	float ___DISTZ_37_val;
	RuntimeObject* ___FLOOR_HGT_38;
	float ___FLOOR_HGT_38_val;
	RuntimeObject* ___MY_41;
	float ___temp_42;
	RuntimeObject* ___MISSILE_45;
	RuntimeObject* ___MISSILE_48;
	RuntimeObject* ___MISSILE_51;
	RuntimeObject* ___MY_54;
	float ___temp_55;
	RuntimeObject* ___MISSILE_57;
	RuntimeObject* ___MISSILE_59;
	float ___temp_60;
	RuntimeObject* ___DISTZ_61;
	float ___DISTZ_61_val;
	RuntimeObject* ___MY_64;
	float ___temp_65;
	RuntimeObject* ___MY_67;
	float ___temp_68;
	RuntimeObject* ___MISSILE_70;
	RuntimeObject* ___MY_72;
	float ___temp_73;
	RuntimeObject* ___MISSILE_75;
	RuntimeObject* ___MY_77;
	float ___temp_78;
	RuntimeObject* ___MISSILE_80;
	RuntimeObject* ___MISSILE_82;
	RuntimeObject* ___MISSILE_84;
	float ___temp_85;
	RuntimeObject* ___MY_87;
	float ___temp_88;
	RuntimeObject* ___MISS1TEX_91;
	RuntimeObject* ___MISSILE_93;
	RuntimeObject* ___EXPLODEMISSILE_94;
	RuntimeObject* ___MISSILE_96;
	RuntimeObject* ___EXPLODEMISSILE_97;
	RuntimeObject* ___MISSILE_99;
	RuntimeObject* ___EXPLODETARGET_100;
	RuntimeObject* ___MISSILE_102;
	RuntimeObject* ___AIMMISSILE_103;
	RuntimeObject* ___MISSILE_105;
	RuntimeObject* ___MISSILE_108;
	RuntimeObject* ___BULLET_109;
	RuntimeObject* ___MISSILE_111;
	RuntimeObject* ___MISSILE_114;
};
struct LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___TROP03SND_2;
	RuntimeObject* ___MY_4;
	RuntimeObject* ___TROP12SND_5;
	RuntimeObject* ___MY_7;
};
struct LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___TROP12SND_4;
	RuntimeObject* ___MY_6;
	RuntimeObject* ___TROP09SND_7;
	RuntimeObject* ___MY_9;
};
struct LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___WAITTIME_0;
	RuntimeObject* ___WAITTIME_1;
	float ___WAITTIME_1_val;
	RuntimeObject* ___RIGHTTURNLNCH_11;
	RuntimeObject* ___RIGHTTURNLNCH_12;
	float ___RIGHTTURNLNCH_12_val;
	RuntimeObject* ___RIGHTTURNLNCH_14;
	float ___RIGHTTURNLNCH_14_val;
	RuntimeObject* ___RIGHTTURNLNCH_20;
	float ___RIGHTTURNLNCH_20_val;
	RuntimeObject* ___RIGHTTURNLNCH_24;
	float ___RIGHTTURNLNCH_24_val;
};
struct LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___CYCLELNCHATTACK_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___LNCHHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___LNCH0TEX_27;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
	RuntimeObject* ___MY_35;
};
struct LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___CYCLELNCHATTACK_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___LNCHHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___LNCH1TEX_24;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___BULLET_30;
	RuntimeObject* ___MY_32;
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
struct PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81  : public RuntimeObject
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
struct PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0  : public RuntimeObject
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
struct TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C  : public RuntimeObject
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
	RuntimeObject* ___TROP09SND_7;
	RuntimeObject* ___MY_9;
	RuntimeObject* ___TROP01SND_10;
	RuntimeObject* ___MY_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDROPKEY_set_MY_m0F4F950D545A36D35335C7D09A4C479F176C12C6_inline (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDROPKEY_set_THERE_mEE37B8A8AAD6C785027A2DD301E1A25309841FAF_inline (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDROPKEY_set__world_m1CCDFF888B7BFCF1D262F1EAC312FC99D087FB88_inline (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967_inline (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDROPKEY_get_MY_m343F67BA749A70A939840C5A674C38A020E016B4_inline (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPATTACK_set_MY_mB3ACA7A484EDB0D57CF55092F5D5D8FF516CE410_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPATTACK_set_THERE_mF989324295C0C9D41974624195442273AE091572_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPATTACK_set__world_m1ACAAA9C2942C4DA2F47F5392358B0122462BE37_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7 (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPATTACK_get_THERE_m9C0736F0C4EBBCD8D168717548B10F43247F86F6_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPLOOKFOR__ctor_mC1034FB0440F2C572094D1B003BB4179693B27FA (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWWARNING__ctor_m77435E2034CB45F3D8F4B70573F1BC851866FB52 (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTALK__ctor_m07E45B8EE1D9A1CB0E709E76906252DE31350DD8 (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPFOLLOWATTACK__ctor_m3F9D3BD614C9DFC04F5208E62E147625D29FFE3B (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPHIDE_set_MY_m72C1DD708DAC033A2DFBF962452A1117822597AC_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPHIDE_set_THERE_mA674AB3C4AB4376FC0AF058FC32BF765D2E60509_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPHIDE_set__world_m92018CB6FD368768062329C1731F4A9123834D1E_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934 (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPHIDE_get_THERE_mF4EC6D2459CE92D830D19FF7E658F4213FD6896F_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPHIDE_get__world_mE01891FE25565B8C0BDF22D996238655D82CE8AE_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPBACK_set_MY_m1B71F6146087CBA8E7102751A4D9C71C850A2755_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPBACK_set_THERE_m6052F5AD2A7BA3CF2F3F274DD90288DE133CE02D_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPBACK_set__world_m9E8A2A2A378350BA968D86A2DA27E6E5C173BA70_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPBACK_get_MY_mAE425DE5DBC57EB99B858332D58C1FA54A7350B8_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPBACK_get_THERE_m8540425D1CAAE217410FC10F41FE68D279CB42EF_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPBACK_get__world_m724CFDEA3764A00148A89DBEBD624349FEE9B737_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPSHOOT_set_MY_m4F0A67D7A1CE866A15990B24D8B33F7601BC5599_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPSHOOT_set_THERE_m4328ECCE3ED24999B325ABB78AFC1AD19495208E_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPSHOOT_set__world_m1B128EE9E27858C9252D953021592D6287F5777A_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPSHOOT_get_THERE_m75067D8725F7022A1897642EE8669481411C1BDB_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDIE__ctor_m933D4EDFE644DE8FEC5F32050931EC8AEFB73C2E (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWAIT__ctor_mD89D55D997B43B342C3F4F4290102CB1140018A0 (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0 (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPAIM__ctor_m6248A32CCB44A4E4462DE847424F37AA166463B3 (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOOT__ctor_m8D8DF1CD5727E67A0692BA3CD5BC9A51D2483762 (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPWARNING_set_MY_m96E9C0304A5599FC00C3B0F9043373F9AED528EB_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPWARNING_set_THERE_m6BB0E3B950D9221E8B8DBB93EB9A7A6458402520_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPWARNING_set__world_m6462F40CAAA893365D8EB50DBBE48D0A972834A6_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPWARNING_get_MY_m51084D47139D2508D5962777C9F86868979D4717_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPWARNING_get_THERE_m94E6F7F859E8921F3CAEF4F3A7EBEE069061DCFE_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPWARNING__ctor_mABFDCE6BEFB91215C31BC33832300CC7C5445D04 (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTALK_set_MY_mCC597EDE4E0930DC930733B72880EB50315E2407_inline (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTALK_set_THERE_m70AB55ACE6EE72664BFBA55A69BA96A229F1A6EB_inline (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTALK_set__world_m3D22E5073E555E91B328D6A21B7F9A537D7D5ADA_inline (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPTALK_get__world_mDBFAF7103358A39DBE2C75B240AD8842411B2BB3_inline (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPTALK_get_MY_mCAD32D0BC515893BDCEB0915F4A8EEA3FFEDA607_inline (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOUT_set_MY_m13DF29026E1D52E983ABFCA8FB5A80961A3573EC_inline (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOUT_set_THERE_mD0D225642ECF309376B15F05670917081EBF1E18_inline (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOUT_set__world_m66EE88614F44B5BC2AD9CB918E9FC146FC85904F_inline (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOUT_get_MY_m9C260B56AD5E813B1E59FDFB3F4738B2A0D2CB63_inline (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPAMMO_set_MY_m3F3B4915C23D212F2445601D805EC6F5C6F8EEDD_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPAMMO_set_THERE_mD07A4EF8FAD828EB8AF3515EDDE936ED7DA1154A_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPAMMO_set__world_m6AA082BE3A710F59B0510B0E4BAE6793664F3211_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4 (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPAMMO_get_MY_m6DE3832C6838B809BDF0B0630BE4696C9ECAB58F_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPAMMO_get_THERE_m8440A1F7EEF0C26C820E0C9DF9C3319809D60F65_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9 (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPARMOUR_set_MY_mBBA63943C951B5E2BF0989D17327A7EA8169887C_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPARMOUR_set_THERE_m8C4EFB4F69D91875002A3BD06802625963D4BB1C_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPARMOUR_set__world_m8A5A42AD0D0A3E129625DA7B97D55F26BBC9DCAF_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPARMOUR_get_MY_mCEDA773D5847F9114B998E2A586589FA186DA845_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPARMOUR_get_THERE_mF735820BFFB7F367E43E1FB85A110D9999E19300_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HUMMERHIT_set_MY_mEDF3FBC5163BD8049181978429F23005EB2ACBD2_inline (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HUMMERHIT_set_THERE_m0C28D2EB8CBB50CCBB296B81AC590AAECAD94ACF_inline (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HUMMERHIT_set__world_m634ED74E1C2FEC8081F7177A278859C73432C37F_inline (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15 (RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_Sqrt_mC66300CAE9A1433A25EE41C5837D731B05AABD25 (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTURN_set_MY_m5DE28D4ABBD4810FFCCE8EA4CB37F9B54986E1C4_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTURN_set_THERE_m28CD681391832F5E4C7A57CEB4F1A8F9E6F675FE_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTURN_set__world_m43EE7CD252CD04E3976A8C7A9B8DD7BF9AE179FF_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLISTEN__ctor_mD2CFC2157D48B8661DE8F4FE121E8F6353105C94 (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHTURN_get_MY_mFACFB1C8F35259E18426C86A6F9EE5E2B7B1BE8E_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHTURN_get_THERE_m0349DE703F3E14EC4A996CDE9D3A5C38B3974796_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TURNRIGHT__ctor_mAD82B12963F20823A2CFE3E007E94496A56C8353 (TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TURNLEFT__ctor_m361003A6CB36C1059716F979D3822771D39CD395 (TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHBACKOFF_set_MY_m3F3BE113200A13DFD60F4ED1BE3E80DED6F93A63_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHBACKOFF_set_THERE_mB1248FA8B6D33D097C7816A61CEF4C8202CE57F9_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHBACKOFF_set__world_mA6EEB7D0EC2ECC3F3E64549F5959B0F65CBAB582_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHBACKOFF_get_THERE_m1AB36700DE6DBC9DA666953EDB7F6CB4DB513C28_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3 (int32_t ___0_frames, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHBACKOFF_set_Current_m04B181A7BC20C24DDB55968317A504814809FD45_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWANDER__ctor_mFC142C0C2F1F94DF484FD5C10AC8DE54505AA2B5 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK__ctor_m7C19A2158D0925A63FA649409F191FCC6BE32931 (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWAIT_set_MY_m489B02BA2080C671BCD5012C2B556F313BEF9136_inline (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWAIT_set_THERE_mA7BCFC62E8A90A6E3CE05189DB14CBFA6D02693D_inline (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWAIT_set__world_m6A46D1C1F69B2FE0A59985B433D662DB87FEE377_inline (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHWAIT_get__world_mE0808BA77D0D2E2851F15D110B14296FB856F481_inline (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWANDER_set_MY_mD0CB4A9FF89C4926AADA8DC13491142979D537E6_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWANDER_set_THERE_m9E011D1C335D634E48935E2C11B77DEB89156325_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWANDER_set__world_m5CE5AE5718536FB1B106EA3D8C6EDC0A1265ACC5_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHWANDER_get__world_mEF867072EC8C8B76A027A641D66555018D94BCA0_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHWANDER_get_THERE_m495856B234BAFA2E958C59340AE499A0AA238BB0_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSEARCH_set_MY_mD5425703A632E95D3DDFBF6D81F8E83298F6C517_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSEARCH_set_THERE_mDD2BA39ADEEB8D50D824C576AF7C82A11DE5CB57_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSEARCH_set__world_mAC8CEB7C0035D85B679B8F9F01C3DCF4E3FD2568_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSEARCH_get__world_m0CB876F90891AB97DBF726BD83228E662A3FA2BB_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSEARCH_get_THERE_mF0DC1A412ED7386B50B41B745CA2B5B78E572E8E_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIDE_set_MY_m1260A390D14FB7ABDBD8A6DAF751326C37E3B8BC_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIDE_set_THERE_m2F178B8306201F1C24FFD463AEB4639523CD6FE7_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIDE_set__world_mB61D1B2D465E85B5F6E2E6D63414D50B9E443CC0_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIDE_get_THERE_mB8154252B2806AFC671E6F7D9EC0F422F5779EFB_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIDE_set_Current_m1902C6ECCDA4E72444219BB99AA44FF7919A72E6_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLISTEN_set_MY_mA43F570246BC56C3F614C2D1964CA52FC41697FC_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLISTEN_set_THERE_m1DC28985F547A799282B3EAF5992C5DA8320BD31_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLISTEN_set__world_mF37D299C9A106C1DE71D5F4CF69C6E3994134A99_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHLISTEN_get__world_m9D40E1D4D94882ED10B8946C2A9F817323FBF11B_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLISTEN_set_Current_m9F6B0A9B01AA7EBA5FA651F43465B0F57396517B_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHLISTEN_get_THERE_m722701093708951D486A089FAF689D2A24491E10_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLOOKFOR_set_MY_m5C70BFB75EBE6DDF9853729F8498ACC2AE7C58B0_inline (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLOOKFOR_set_THERE_mC78AAC225D5046501821430AE90A5461C7A9AD31_inline (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLOOKFOR_set__world_m1E56ED1E440D04F43A768CFD3BDD0714FD6E6AD3_inline (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHLOOKFOR_get__world_mC5E0AC58981DAB7272ED3421991685761B34725B_inline (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOW_set_MY_m6F3D6DD260947046B51672DE112E991AD07532FF_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOW_set_THERE_mC5584B71009D9BA8EB731D447F908F9C97CF4858_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOW_set__world_m1E4F5DB89E0DAF4ED0C71FECF5D15E19EC82C185_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOW_get__world_m50825DDAFBCA38553B0C549E7E36C6561525723D_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOW_get_THERE_m6A18AA78FDF3F1C8F77AAD60C4C9F7ED0CD46A1A_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK_set_MY_m4817E16E88A8867C6BE2AA69DBE3A2A8A9E56AA5_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK_set_THERE_m6C51B576FACCE02BFF75E3190FBA293DE9F3F475_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK_set__world_m6A187908F0A346B87042243F90ADA1458156985D_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOWATTACK_get__world_mB21285301052D34D16B518880E585A12D1BBB231_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOWATTACK_get_THERE_m0A25168F3CE4EEF6F5900EF6F7CE1A743F5F08B6_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHAIM_set_MY_mEBAA1B69995F94BAEE3ACFA161303435CDCFFB65_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHAIM_set_THERE_m62F5436526791AC1DDFD1B1038C6150388AC5EC8_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHAIM_set__world_m64F84993209AB0DD4B61E7C70509C33221143D56_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHAIM_get__world_m6F7144DA2B8BF3C90C84250D322578D8D81ECE8F_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOUT__ctor_m6DCDFC4426614DE507EE0D7C1C16A5ED8671ECED (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHAIM_get_THERE_mAED9658A66A8617A8E757E57581A48A79AA1C166_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOOT_set_MY_mE050CD1CB5BC8813603A040BD84683B09AEA6D4F_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOOT_set_THERE_m125B5A53DFD4EE9CBE88E7FFE6D003851CE43CAF_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOOT_set__world_m5EB76E589E284419FD6C978849318244BFA30C11_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEMISSILE__ctor_mBD8DA1CB945C24768E365325E3B95DCD5C03A11D (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOOT_get_THERE_mF1235C1E0702E64FCD504E40167DAC58740F5B04_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHESCAPE_set_MY_m463C80D13E7FAD77220910A5FD973B3D704612BF_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHESCAPE_set_THERE_m9229F5E87CE2A40613A2F70EC13A700CD0A47F6F_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHESCAPE_set__world_mCB4CAB73A8DEA73E4B91E9947D7CAA76BDC8AE25_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHESCAPE_get__world_m8FE87BEBE042D72CBC162224ED3D06089F954A48_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHESCAPE_get_THERE_m6B95F8EBB4ECDA1441DB1C1505DA43B9079CD566_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDEAD_set_MY_m03149359B71F521B015FE1E894E01503CD93FBA0_inline (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDEAD_set_THERE_m68A0A0F61C23D59F7AE705A269C0E6A90C60DF6C_inline (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDEAD_set__world_m031608488847DC440645E9007553FEE70704F8FE_inline (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDEAD_get__world_mB6587C3EF8BC4AC6832C48350A7B8056838E1896_inline (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDIE_set_MY_m7371021A99CD044F345761854947D76F272DC75D_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDIE_set_THERE_m2A17EEAD3A1AE277037557ECA1D9B99C839C14C7_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDIE_set__world_m2BB78538434B395BD93C2A27F282AA40364B16EE_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDIE_get__world_mB6BC7AB1F9D7F887DA9A3074F6D4853DC24BEC31_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDROPKEY__ctor_m5AB5B055F556C1E0EC0677FAC59BA54684783A51 (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDIE_get_THERE_m53C3ED4CFA6255A250A850142E05E227E8FACB7A_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHIMPLODE_set_MY_mD2FCB74402D3211E1C86A798D5E2BDE2BD86F5EA_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHIMPLODE_set_THERE_m943BBF49847BD0E365EA50B7A14A386E9588FFDC_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHIMPLODE_set__world_m796A87AF7D6B3803123A2589F09BAD8D01238098_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAMREACT__ctor_mB0794040DFC34B2C1BE7A9198550A45C59AA4C17 (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHIMPLODE_get_THERE_mC158E69FE47EF7157D6CC027B5EEAD1D7DF551C0_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIT_set_MY_mD7433D4CC0D3F45758C3E9F688FFE9BB9056BCE0_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIT_set_THERE_mE067EE4209263516214F4116CAC37820E101C5B3_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIT_set__world_m0610F7DBEA166BDCE77B6054E97B72A52F0E12C1_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHIMPLODE__ctor_m446179CCE3979CC2267A43DB98665701DC1BCB21 (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIT_get_THERE_m7902507382AAD25484B039BAFE9632B69C0D4710_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIT_set_Current_m4C932A5C008756DC6C473507FCCFA2B8E9BF7EF5_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIDE__ctor_m5B1B231F2C2E4328FEBFF8B3F415C1868359CF07 (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDIE__ctor_m352FD5776F9ED1D68C10A7C22FC48EC572AC945D (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTURN__ctor_m9A6FB590CE445BD244186C1B4FE6C7F1AB003A81 (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDROPKEY_set_MY_m44785A46369EA5F2EA9776686FA7668AF177CB21_inline (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDROPKEY_set_THERE_m19740D24DA2D560A4A510AB3B674151B4F222943_inline (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDROPKEY_set__world_m5A8432DF4612FA1D1D381C005C8DA56CBA7F95E2_inline (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83_inline (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDROPKEY_get_MY_m86AD63D560307DC9883834A794C66246EF10794A_inline (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHATTACK_set_MY_m67BAB95BCE14DDD0E607BCFCCEB3BAC0BF543729_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHATTACK_set_THERE_m4351E3749762055C1E5FC17F28664E269E16B61C_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHATTACK_set__world_mDD7655E8F31F7F5B5325D1E8B1BCC7DB6D5FCF9B_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHATTACK_get_MY_m93155D6BB0514564BBB60C82DBB376AAABD1301D_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHATTACK_get_THERE_m44EF1E1D883007C168CA971CF28E3A07C775C143_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLOOKFOR__ctor_m275F8760F6A6247B9F48BABB0BC353148133A289 (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTALK__ctor_m45FA220D6FA3BC5EACC9EB71A00DE5D55DF24141 (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHHIDE_set_MY_m699C8FE939DFA0FE229BB897FC2247CA80156846_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHHIDE_set_THERE_mD17AEE04EF50497007D9459520DDD86B75B7C72D_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHHIDE_set__world_mBDC49D458521075C0682FF9DD0A2AECB52B3E7C1_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHHIDE_get_THERE_m692D7551B5D5F1DE85DD2D9D2B278CFDCCD3AF3F_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHHIDE_get__world_m753251BEF470C800D2068045B2BCC4CC8C2A696F_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHBACK_set_MY_mE7B0CB526E9C8B6E45016212011DB31D2F0DE12F_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHBACK_set_THERE_mFCF8AD90F367D8377F397A217DE9102DC96546A0_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHBACK_set__world_m5531436B56E051FD3CA23272EA36AE4CA440E6C7_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHBACK_get_MY_m3141A9F539655F836BBDA9F49F92EF67C6B44ADA_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHBACK_get_THERE_m9F39B0F0327FBD7CE80894EB09B16A06FE209ABF_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHBACK_get__world_m2842EC2F2820508EBCC116752901ABD1F8D6A51A_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT_set_MY_mE9540BA255D86376398D2F24336B490336D5AE73_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT_set_THERE_m90BDF701EE73B18FB74E809799626E9333F3BD95_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT_set__world_mDC62144C4D9E42B4711AFA3974D5F89D9990C67B_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHSHOOT_get_THERE_m84695A5D868039F06BE8BAE77C13B08A4566B9AF_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHBACKOFF__ctor_m665911F972D78C03D0EF36CFC1EB91893B35A7EA (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHAIM__ctor_mC29D7765E4EB239CC42B0E9130BA3C674DF28FE0 (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDROPKEY_get_MY_m343F67BA749A70A939840C5A674C38A020E016B4 (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDROPKEY_set_MY_m0F4F950D545A36D35335C7D09A4C479F176C12C6 (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDROPKEY_get_THERE_mE8BB07FD8578D5A37454254BF3DFC1157E0FD798 (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDROPKEY_set_THERE_mEE37B8A8AAD6C785027A2DD301E1A25309841FAF (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967 (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDROPKEY_set__world_m1CCDFF888B7BFCF1D262F1EAC312FC99D087FB88 (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPDROPKEY_get_Current_mE01723E34E394DF904DA9D390117BB0E987EB81B (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDROPKEY_set_Current_m40A4D21060EC6ADF4FF08A4B341EED2099DAE321 (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDROPKEY_Reset_m6C1F69BD155199707744DF050513D761F00B0925 (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDROPKEY__ctor_mCCA42503FE736AEF6461FAFF06B0644C8FEFF505 (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPDROPKEY__ctor_mEC716ED4932BE49F1B26C96B25AF607633DA9F87 (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPDROPKEY_set_MY_m0F4F950D545A36D35335C7D09A4C479F176C12C6_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPDROPKEY_set_THERE_mEE37B8A8AAD6C785027A2DD301E1A25309841FAF_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPDROPKEY_set__world_m1CCDFF888B7BFCF1D262F1EAC312FC99D087FB88_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPDROPKEY_MoveNext_mB0FCC4C899B085CFBBA1BDFE9325E3F075C6FD09 (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) 
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
		L_1 = TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_1), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_3), (void*)L_6);
		RuntimeObject* L_7 = __this->___KEY2TNG_3;
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)195), (bool)1);
		__this->___temp_4 = L_8;
		RuntimeObject* L_9;
		L_9 = TROPDROPKEY_get_MY_m343F67BA749A70A939840C5A674C38A020E016B4_inline(__this, NULL);
		__this->___MY_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_6;
		NullCheck(L_10);
		float L_11;
		L_11 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)195), (bool)1);
		__this->___temp_7 = L_11;
		RuntimeObject* L_12 = __this->___KEY2TNG_1;
		float L_13 = __this->___temp_7;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)195), L_13);
		RuntimeObject* L_14;
		L_14 = TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_9), (void*)L_16);
		RuntimeObject* L_17;
		L_17 = TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_11 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_11), (void*)L_19);
		RuntimeObject* L_20 = __this->___KEY2TNG_11;
		NullCheck(L_20);
		float L_21;
		L_21 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)196), (bool)1);
		__this->___temp_12 = L_21;
		RuntimeObject* L_22;
		L_22 = TROPDROPKEY_get_MY_m343F67BA749A70A939840C5A674C38A020E016B4_inline(__this, NULL);
		__this->___MY_14 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_14;
		NullCheck(L_23);
		float L_24;
		L_24 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)196), (bool)1);
		__this->___temp_15 = L_24;
		RuntimeObject* L_25 = __this->___KEY2TNG_9;
		float L_26 = __this->___temp_15;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)196), L_26);
		RuntimeObject* L_27;
		L_27 = TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_18 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_18), (void*)L_29);
		RuntimeObject* L_30 = __this->___KEY2TNG_18;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)213), (1.0f));
		RuntimeObject* L_31;
		L_31 = TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_20 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_20), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967_inline(__this, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_22 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_22), (void*)L_36);
		RuntimeObject* L_37 = __this->___KEY2TNG_22;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)165), (bool)1);
		__this->___temp_23 = L_38;
		RuntimeObject* L_39;
		L_39 = TROPDROPKEY_get_MY_m343F67BA749A70A939840C5A674C38A020E016B4_inline(__this, NULL);
		__this->___MY_25 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_25;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)200), (bool)1);
		__this->___temp_26 = L_41;
		RuntimeObject* L_42 = __this->___KEY2TNG_20;
		float L_43 = __this->___temp_26;
		NullCheck(L_42);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)165), ((float)il2cpp_codegen_subtract(L_43, (0.00999999978f))));
		RuntimeObject* L_44;
		L_44 = TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_31 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_31), (void*)L_46);
		RuntimeObject* L_47 = __this->___KEY2TNG_31;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)204), (0.0f));
		RuntimeObject* L_48;
		L_48 = TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_34 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_34), (void*)L_50);
		RuntimeObject* L_51 = __this->___KEY2TNG_34;
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)213), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81 (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPATTACK_set_MY_mB3ACA7A484EDB0D57CF55092F5D5D8FF516CE410 (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPATTACK_get_THERE_m9C0736F0C4EBBCD8D168717548B10F43247F86F6 (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPATTACK_set_THERE_mF989324295C0C9D41974624195442273AE091572 (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPATTACK_set__world_m1ACAAA9C2942C4DA2F47F5392358B0122462BE37 (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPATTACK_get_Current_mDCF13F6191358C46F724C8AA085D5A6F2A67AFA2 (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPATTACK_set_Current_m8D0AD9DB7D0BA255C7178EE20914623B044AF722 (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPATTACK_Reset_m0300E76EEFB2A5559963EB51DDD4A6B5425DBE50 (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPATTACK__ctor_m75F85B8DB08DD963F22898E6404CD40F2EC831BB (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPATTACK__ctor_m3AC036B8C7E80AF924740F0AD9471CDD47ADEA01 (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLETROPATTACK_set_MY_mB3ACA7A484EDB0D57CF55092F5D5D8FF516CE410_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLETROPATTACK_set_THERE_mF989324295C0C9D41974624195442273AE091572_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLETROPATTACK_set__world_m1ACAAA9C2942C4DA2F47F5392358B0122462BE37_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLETROPATTACK_MoveNext_m320C4FF43159A9F8EA6586F1553E3D3CE9AFCE6B (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* V_1 = NULL;
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_2 = NULL;
	TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* V_3 = NULL;
	TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* V_4 = NULL;
	TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* V_5 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_1 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_1, NULL);
		V_0 = L_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_2 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLETROPATTACK_get_THERE_m9C0736F0C4EBBCD8D168717548B10F43247F86F6_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline(__this, NULL);
		__this->___MY_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_2;
		NullCheck(L_12);
		float L_13;
		L_13 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)182), (bool)1);
		__this->___temp_3 = L_13;
		float L_14 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_14, (0.0f), NULL);
		if (!L_15)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeObject* L_16;
		L_16 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, 5, ((int32_t)-922693617));
		__this->___SHOT_SOUND_ON_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOT_SOUND_ON_5), (void*)L_17);
		RuntimeObject* L_18 = __this->___SHOT_SOUND_ON_5;
		NullCheck(L_18);
		float L_19;
		L_19 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)231), (bool)1);
		__this->___SHOT_SOUND_ON_5_val = L_19;
		float L_20 = __this->___SHOT_SOUND_ON_5_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_20, (0.0f), NULL);
		if (L_21)
		{
			goto IL_00ef;
		}
	}
	{
		TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* L_22 = (TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6*)il2cpp_codegen_object_new(TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6_il2cpp_TypeInfo_var);
		TROPLOOKFOR__ctor_mC1034FB0440F2C572094D1B003BB4179693B27FA(L_22, NULL);
		V_1 = L_22;
		TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* L_23 = V_1;
		TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* L_24 = L_23;
		RuntimeObject* L_25;
		L_25 = CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline(__this, NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_24, L_25);
		TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* L_26 = L_24;
		RuntimeObject* L_27;
		L_27 = CYCLETROPATTACK_get_THERE_m9C0736F0C4EBBCD8D168717548B10F43247F86F6_inline(__this, NULL);
		NullCheck(L_26);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_26, L_27);
		RuntimeObject* L_28;
		L_28 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		NullCheck(L_26);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_26, L_28);
		RuntimeObject* L_29;
		L_29 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		TROPLOOKFOR_tD8F763FE32BFC416A3118AB04A89EF102C2575A6* L_30 = V_1;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_30);
	}

IL_00ef:
	{
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_32 = (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511*)il2cpp_codegen_object_new(LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D(L_32, NULL);
		V_2 = L_32;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_33 = V_2;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_34 = L_33;
		RuntimeObject* L_35;
		L_35 = CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline(__this, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_34, L_35);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_36 = L_34;
		RuntimeObject* L_37;
		L_37 = CYCLETROPATTACK_get_THERE_m9C0736F0C4EBBCD8D168717548B10F43247F86F6_inline(__this, NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_36, L_37);
		RuntimeObject* L_38;
		L_38 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_36, L_38);
		RuntimeObject* L_39;
		L_39 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_40 = V_2;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_39, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_40);
		RuntimeObject* L_42;
		L_42 = CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline(__this, NULL);
		__this->___MY_8 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_42);
		RuntimeObject* L_43 = __this->___MY_8;
		NullCheck(L_43);
		float L_44;
		L_44 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)181), (bool)1);
		__this->___temp_9 = L_44;
		float L_45 = __this->___temp_9;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_45, (0.0f), NULL);
		if (!L_46)
		{
			goto IL_015e;
		}
	}
	{
		return (bool)0;
	}

IL_015e:
	{
		RuntimeObject* L_47;
		L_47 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_11 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_11), (void*)L_48);
		RuntimeObject* L_49 = __this->___GUN_ON_11;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)231), (bool)1);
		__this->___GUN_ON_11_val = L_50;
		float L_51 = __this->___GUN_ON_11_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_51, (0.0f), NULL);
		if (!L_52)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeObject* L_53;
		L_53 = CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline(__this, NULL);
		__this->___MY_14 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_53);
		RuntimeObject* L_54 = __this->___MY_14;
		NullCheck(L_54);
		float L_55;
		L_55 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)202), (bool)1);
		__this->___temp_15 = L_55;
		float L_56 = __this->___temp_15;
		bool L_57;
		L_57 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_56, (20.0f), NULL);
		if (!L_57)
		{
			goto IL_020d;
		}
	}
	{
		TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* L_58 = (TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98*)il2cpp_codegen_object_new(TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98_il2cpp_TypeInfo_var);
		TROPFOLLOWWARNING__ctor_m77435E2034CB45F3D8F4B70573F1BC851866FB52(L_58, NULL);
		V_3 = L_58;
		TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* L_59 = V_3;
		TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* L_60 = L_59;
		RuntimeObject* L_61;
		L_61 = CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline(__this, NULL);
		NullCheck(L_60);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_60, L_61);
		TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* L_62 = L_60;
		RuntimeObject* L_63;
		L_63 = CYCLETROPATTACK_get_THERE_m9C0736F0C4EBBCD8D168717548B10F43247F86F6_inline(__this, NULL);
		NullCheck(L_62);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_62, L_63);
		RuntimeObject* L_64;
		L_64 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		NullCheck(L_62);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_62, L_64);
		RuntimeObject* L_65;
		L_65 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		TROPFOLLOWWARNING_t62F2E008704E6BE6ADA2791ADE679A7F807D4C98* L_66 = V_3;
		NullCheck(L_65);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_65, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_66);
		return (bool)0;
	}

IL_020d:
	{
		return (bool)0;
	}

IL_020f:
	{
		RuntimeObject* L_68;
		L_68 = CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline(__this, NULL);
		__this->___MY_18 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_68);
		RuntimeObject* L_69 = __this->___MY_18;
		NullCheck(L_69);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)182), (1.0f));
		TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* L_70 = (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C*)il2cpp_codegen_object_new(TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C_il2cpp_TypeInfo_var);
		TROPTALK__ctor_m07E45B8EE1D9A1CB0E709E76906252DE31350DD8(L_70, NULL);
		V_4 = L_70;
		TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* L_71 = V_4;
		TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* L_72 = L_71;
		RuntimeObject* L_73;
		L_73 = CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline(__this, NULL);
		NullCheck(L_72);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_72, L_73);
		TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* L_74 = L_72;
		RuntimeObject* L_75;
		L_75 = CYCLETROPATTACK_get_THERE_m9C0736F0C4EBBCD8D168717548B10F43247F86F6_inline(__this, NULL);
		NullCheck(L_74);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_74, L_75);
		RuntimeObject* L_76;
		L_76 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		NullCheck(L_74);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_74, L_76);
		RuntimeObject* L_77;
		L_77 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* L_78 = V_4;
		NullCheck(L_77);
		RuntimeObject* L_79;
		L_79 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_77, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_78);
		RuntimeObject* L_80;
		L_80 = CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline(__this, NULL);
		__this->___MY_21 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_80);
		RuntimeObject* L_81 = __this->___MY_21;
		NullCheck(L_81);
		float L_82;
		L_82 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_81, ((int32_t)202), (bool)1);
		__this->___temp_22 = L_82;
		float L_83 = __this->___temp_22;
		bool L_84;
		L_84 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_83, (200.0f), NULL);
		if (!L_84)
		{
			goto IL_02dd;
		}
	}
	{
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_85 = (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA*)il2cpp_codegen_object_new(TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		TROPFOLLOWATTACK__ctor_m3F9D3BD614C9DFC04F5208E62E147625D29FFE3B(L_85, NULL);
		V_5 = L_85;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_86 = V_5;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_87 = L_86;
		RuntimeObject* L_88;
		L_88 = CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline(__this, NULL);
		NullCheck(L_87);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_87, L_88);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_89 = L_87;
		RuntimeObject* L_90;
		L_90 = CYCLETROPATTACK_get_THERE_m9C0736F0C4EBBCD8D168717548B10F43247F86F6_inline(__this, NULL);
		NullCheck(L_89);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_89, L_90);
		RuntimeObject* L_91;
		L_91 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		NullCheck(L_89);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_89, L_91);
		RuntimeObject* L_92;
		L_92 = CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline(__this, NULL);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_93 = V_5;
		NullCheck(L_92);
		RuntimeObject* L_94;
		L_94 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_92, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_93);
		return (bool)0;
	}

IL_02dd:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPHIDE_set_MY_m72C1DD708DAC033A2DFBF962452A1117822597AC (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPHIDE_get_THERE_mF4EC6D2459CE92D830D19FF7E658F4213FD6896F (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPHIDE_set_THERE_mA674AB3C4AB4376FC0AF058FC32BF765D2E60509 (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPHIDE_get__world_mE01891FE25565B8C0BDF22D996238655D82CE8AE (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPHIDE_set__world_m92018CB6FD368768062329C1731F4A9123834D1E (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPHIDE_get_Current_m0C89910B93E85651B86E0A903CE0413ED70C1795 (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPHIDE_set_Current_m7509B7B291C12C1A9E09D48CCF0B49BF57ABEB4F (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPHIDE_Reset_mF074D1C7EF0CC5D9F50C66308CFEF3482C4F34FC (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPHIDE__ctor_mE6E5640E789859B64FC845DFCC4DB69F159BF706 (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPHIDE__ctor_mE860B1FFA2111A775439BF7E113C9EA49F7A75DE (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLETROPHIDE_set_MY_m72C1DD708DAC033A2DFBF962452A1117822597AC_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLETROPHIDE_set_THERE_mA674AB3C4AB4376FC0AF058FC32BF765D2E60509_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLETROPHIDE_set__world_m92018CB6FD368768062329C1731F4A9123834D1E_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLETROPHIDE_MoveNext_m41FB9418C457A46CCF8EFDFE6A30D69388C09536 (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_0 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_1 = NULL;
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_1 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_1, NULL);
		V_0 = L_1;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_2 = V_0;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLETROPHIDE_get_THERE_mF4EC6D2459CE92D830D19FF7E658F4213FD6896F_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLETROPHIDE_get__world_mE01891FE25565B8C0BDF22D996238655D82CE8AE_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLETROPHIDE_get__world_mE01891FE25565B8C0BDF22D996238655D82CE8AE_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		__this->___MY_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_1), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		__this->___MY_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_3), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_3;
		NullCheck(L_13);
		float L_14;
		L_14 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)194), (bool)1);
		__this->___temp_4 = L_14;
		RuntimeObject* L_15;
		L_15 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		__this->___MY_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_6;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)194), (bool)1);
		__this->___temp_7 = L_17;
		RuntimeObject* L_18 = __this->___MY_1;
		float L_19 = __this->___temp_7;
		float L_20;
		L_20 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)194), ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_20, (0.5f))), (2.0f))))));
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_21 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_21, NULL);
		V_1 = L_21;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_22 = V_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_23 = L_22;
		RuntimeObject* L_24;
		L_24 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_24);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_25 = L_23;
		RuntimeObject* L_26;
		L_26 = CYCLETROPHIDE_get_THERE_mF4EC6D2459CE92D830D19FF7E658F4213FD6896F_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_26);
		RuntimeObject* L_27;
		L_27 = CYCLETROPHIDE_get__world_mE01891FE25565B8C0BDF22D996238655D82CE8AE_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_27);
		RuntimeObject* L_28;
		L_28 = CYCLETROPHIDE_get__world_mE01891FE25565B8C0BDF22D996238655D82CE8AE_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_29 = V_1;
		NullCheck(L_28);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_29);
		RuntimeObject* L_31;
		L_31 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		__this->___MY_18 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_18;
		NullCheck(L_32);
		float L_33;
		L_33 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)205), (bool)1);
		__this->___temp_19 = L_33;
		float L_34 = __this->___temp_19;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_34, (1.0f), NULL);
		if (!L_35)
		{
			goto IL_0128;
		}
	}
	{
		return (bool)0;
	}

IL_0128:
	{
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_36 = (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511*)il2cpp_codegen_object_new(LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D(L_36, NULL);
		V_2 = L_36;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_37 = V_2;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_38 = L_37;
		RuntimeObject* L_39;
		L_39 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_39);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_40 = L_38;
		RuntimeObject* L_41;
		L_41 = CYCLETROPHIDE_get_THERE_mF4EC6D2459CE92D830D19FF7E658F4213FD6896F_inline(__this, NULL);
		NullCheck(L_40);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_40, L_41);
		RuntimeObject* L_42;
		L_42 = CYCLETROPHIDE_get__world_mE01891FE25565B8C0BDF22D996238655D82CE8AE_inline(__this, NULL);
		NullCheck(L_40);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_40, L_42);
		RuntimeObject* L_43;
		L_43 = CYCLETROPHIDE_get__world_mE01891FE25565B8C0BDF22D996238655D82CE8AE_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_44 = V_2;
		NullCheck(L_43);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_44);
		RuntimeObject* L_46;
		L_46 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		__this->___MY_22 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_22;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)181), (bool)1);
		__this->___temp_23 = L_48;
		float L_49 = __this->___temp_23;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_49, (0.0f), NULL);
		if (L_50)
		{
			goto IL_01f7;
		}
	}
	{
		RuntimeObject* L_51;
		L_51 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		__this->___MY_26 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_51);
		RuntimeObject* L_52 = __this->___MY_26;
		NullCheck(L_52);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)168), (0.600000024f));
		RuntimeObject* L_53;
		L_53 = CYCLETROPHIDE_get__world_mE01891FE25565B8C0BDF22D996238655D82CE8AE_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_53);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_27 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_27), (void*)L_55);
		RuntimeObject* L_56;
		L_56 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		__this->___MY_29 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_56);
		RuntimeObject* L_57 = __this->___MY_29;
		RuntimeObject* L_58 = __this->___BULLET_27;
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)199), L_58);
		return (bool)0;
	}

IL_01f7:
	{
		RuntimeObject* L_59;
		L_59 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		__this->___MY_32 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_32;
		NullCheck(L_60);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)168), (0.0f));
		RuntimeObject* L_61;
		L_61 = CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline(__this, NULL);
		__this->___MY_35 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_35), (void*)L_61);
		RuntimeObject* L_62 = __this->___MY_35;
		NullCheck(L_62);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)199), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPBACK_get_MY_mAE425DE5DBC57EB99B858332D58C1FA54A7350B8 (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPBACK_set_MY_m1B71F6146087CBA8E7102751A4D9C71C850A2755 (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPBACK_get_THERE_m8540425D1CAAE217410FC10F41FE68D279CB42EF (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPBACK_set_THERE_m6052F5AD2A7BA3CF2F3F274DD90288DE133CE02D (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPBACK_get__world_m724CFDEA3764A00148A89DBEBD624349FEE9B737 (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPBACK_set__world_m9E8A2A2A378350BA968D86A2DA27E6E5C173BA70 (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPBACK_get_Current_m67FCBB54F109543195837886298B5009C0C55B3A (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPBACK_set_Current_mC2AA1911561EBACFC8F6730B6E279283172C6C23 (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPBACK_Reset_mAF39AA80076F144A2FFB317E3A1BA7C466004EBB (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPBACK__ctor_mA9E6A390381AA4AAF37854C4F729A99D5AE07ECE (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPBACK__ctor_m0288CEEF607784D85D52A862244B70DAAFD78201 (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLETROPBACK_set_MY_m1B71F6146087CBA8E7102751A4D9C71C850A2755_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLETROPBACK_set_THERE_m6052F5AD2A7BA3CF2F3F274DD90288DE133CE02D_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLETROPBACK_set__world_m9E8A2A2A378350BA968D86A2DA27E6E5C173BA70_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLETROPBACK_MoveNext_m7B12CCE85B4778813CDCDC14280CF64768F0E463 (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_1 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_1, NULL);
		V_0 = L_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_2 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLETROPBACK_get_MY_mAE425DE5DBC57EB99B858332D58C1FA54A7350B8_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLETROPBACK_get_THERE_m8540425D1CAAE217410FC10F41FE68D279CB42EF_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLETROPBACK_get__world_m724CFDEA3764A00148A89DBEBD624349FEE9B737_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLETROPBACK_get__world_m724CFDEA3764A00148A89DBEBD624349FEE9B737_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_9 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14 (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPSHOOT_set_MY_m4F0A67D7A1CE866A15990B24D8B33F7601BC5599 (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPSHOOT_get_THERE_m75067D8725F7022A1897642EE8669481411C1BDB (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPSHOOT_set_THERE_m4328ECCE3ED24999B325ABB78AFC1AD19495208E (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPSHOOT_set__world_m1B128EE9E27858C9252D953021592D6287F5777A (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPSHOOT_get_Current_m86C18BF4406EB3518A9FFC0B14ECDEA1D6E2802C (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPSHOOT_set_Current_mB05773FD6785654ADC0EF1748D6DC8E0F4545A37 (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPSHOOT_Reset_mF3FF8D7C1956D0256538B3A9FF66C79A46E5B365 (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPSHOOT__ctor_m05E111B4BD4C02FFC25903A3A569E0A349FE8BD4 (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPSHOOT__ctor_m63F50E85F749EF7F1C83682A82C39FD77E27037E (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLETROPSHOOT_set_MY_m4F0A67D7A1CE866A15990B24D8B33F7601BC5599_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLETROPSHOOT_set_THERE_m4328ECCE3ED24999B325ABB78AFC1AD19495208E_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLETROPSHOOT_set__world_m1B128EE9E27858C9252D953021592D6287F5777A_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLETROPSHOOT_MoveNext_mBB509B84618471CDCDACC724556AF59534A9F3AE (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* V_1 = NULL;
	TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* V_2 = NULL;
	FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* V_3 = NULL;
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_4 = NULL;
	TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* V_5 = NULL;
	TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* V_6 = NULL;
	TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* V_7 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_1 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_1, NULL);
		V_0 = L_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_2 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLETROPSHOOT_get_THERE_m75067D8725F7022A1897642EE8669481411C1BDB_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
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
		TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* L_16 = (TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B*)il2cpp_codegen_object_new(TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B_il2cpp_TypeInfo_var);
		TROPDIE__ctor_m933D4EDFE644DE8FEC5F32050931EC8AEFB73C2E(L_16, NULL);
		V_1 = L_16;
		TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* L_17 = V_1;
		TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* L_18 = L_17;
		RuntimeObject* L_19;
		L_19 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_18, L_19);
		TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* L_20 = L_18;
		RuntimeObject* L_21;
		L_21 = CYCLETROPSHOOT_get_THERE_m75067D8725F7022A1897642EE8669481411C1BDB_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		RuntimeObject* L_22;
		L_22 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_22);
		RuntimeObject* L_23;
		L_23 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		TROPDIE_t1F21826C891ADD1DA13E8AD07C40F9B14CC3B83B* L_24 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_24);
		return (bool)0;
	}

IL_00ae:
	{
		RuntimeObject* L_26;
		L_26 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
		__this->___MY_6 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_6;
		NullCheck(L_27);
		float L_28;
		L_28 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)202), (bool)1);
		__this->___temp_7 = L_28;
		float L_29 = __this->___temp_7;
		bool L_30;
		L_30 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_29, (300.0f), NULL);
		if (!L_30)
		{
			goto IL_011d;
		}
	}
	{
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_31 = (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753*)il2cpp_codegen_object_new(TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753_il2cpp_TypeInfo_var);
		TROPWAIT__ctor_mD89D55D997B43B342C3F4F4290102CB1140018A0(L_31, NULL);
		V_2 = L_31;
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_32 = V_2;
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_33 = L_32;
		RuntimeObject* L_34;
		L_34 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_33, L_34);
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_35 = L_33;
		RuntimeObject* L_36;
		L_36 = CYCLETROPSHOOT_get_THERE_m75067D8725F7022A1897642EE8669481411C1BDB_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_36);
		RuntimeObject* L_37;
		L_37 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_37);
		RuntimeObject* L_38;
		L_38 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_39 = V_2;
		NullCheck(L_38);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_39);
		return (bool)0;
	}

IL_011d:
	{
		RuntimeObject* L_41;
		L_41 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
		__this->___MY_10 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_41);
		RuntimeObject* L_42 = __this->___MY_10;
		NullCheck(L_42);
		float L_43;
		L_43 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)202), (bool)1);
		__this->___temp_11 = L_43;
		float L_44 = __this->___temp_11;
		bool L_45;
		L_45 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_44, (100.0f), NULL);
		if (L_45)
		{
			goto IL_02e3;
		}
	}
	{
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_46 = (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5*)il2cpp_codegen_object_new(FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0(L_46, NULL);
		V_3 = L_46;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_47 = V_3;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_48 = L_47;
		RuntimeObject* L_49;
		L_49 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
		NullCheck(L_48);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_48, L_49);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_50 = L_48;
		RuntimeObject* L_51;
		L_51 = CYCLETROPSHOOT_get_THERE_m75067D8725F7022A1897642EE8669481411C1BDB_inline(__this, NULL);
		NullCheck(L_50);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_50, L_51);
		RuntimeObject* L_52;
		L_52 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		NullCheck(L_50);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_50, L_52);
		RuntimeObject* L_53;
		L_53 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_54 = V_3;
		NullCheck(L_53);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_54);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_56 = (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511*)il2cpp_codegen_object_new(LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D(L_56, NULL);
		V_4 = L_56;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_57 = V_4;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_58 = L_57;
		RuntimeObject* L_59;
		L_59 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
		NullCheck(L_58);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_58, L_59);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_60 = L_58;
		RuntimeObject* L_61;
		L_61 = CYCLETROPSHOOT_get_THERE_m75067D8725F7022A1897642EE8669481411C1BDB_inline(__this, NULL);
		NullCheck(L_60);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_60, L_61);
		RuntimeObject* L_62;
		L_62 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		NullCheck(L_60);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_60, L_62);
		RuntimeObject* L_63;
		L_63 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_64 = V_4;
		NullCheck(L_63);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_64);
		RuntimeObject* L_66;
		L_66 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
		__this->___MY_14 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_66);
		RuntimeObject* L_67 = __this->___MY_14;
		NullCheck(L_67);
		float L_68;
		L_68 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_67, ((int32_t)181), (bool)1);
		__this->___temp_15 = L_68;
		float L_69 = __this->___temp_15;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_69, (0.0f), NULL);
		if (L_70)
		{
			goto IL_02e3;
		}
	}
	{
		RuntimeObject* L_71;
		L_71 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, 5, ((int32_t)-922693617));
		__this->___SHOT_SOUND_ON_17 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOT_SOUND_ON_17), (void*)L_72);
		RuntimeObject* L_73 = __this->___SHOT_SOUND_ON_17;
		NullCheck(L_73);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)231), (1.0f));
		RuntimeObject* L_74;
		L_74 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_74, 5, ((int32_t)733093231));
		__this->___SHOTSECCOUNT_19 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOTSECCOUNT_19), (void*)L_75);
		RuntimeObject* L_76 = __this->___SHOTSECCOUNT_19;
		NullCheck(L_76);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)231), (0.0f));
		float L_77;
		L_77 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_78;
		L_78 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_77, (0.800000012f), NULL);
		if (!L_78)
		{
			goto IL_02a6;
		}
	}
	{
		TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* L_79 = (TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD*)il2cpp_codegen_object_new(TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD_il2cpp_TypeInfo_var);
		TROPAIM__ctor_m6248A32CCB44A4E4462DE847424F37AA166463B3(L_79, NULL);
		V_5 = L_79;
		TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* L_80 = V_5;
		TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* L_81 = L_80;
		RuntimeObject* L_82;
		L_82 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
		NullCheck(L_81);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_81, L_82);
		TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* L_83 = L_81;
		RuntimeObject* L_84;
		L_84 = CYCLETROPSHOOT_get_THERE_m75067D8725F7022A1897642EE8669481411C1BDB_inline(__this, NULL);
		NullCheck(L_83);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_83, L_84);
		RuntimeObject* L_85;
		L_85 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		NullCheck(L_83);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_83, L_85);
		RuntimeObject* L_86;
		L_86 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		TROPAIM_t0548DE017536C8EF37C1FF7C6943010BE9E588BD* L_87 = V_5;
		NullCheck(L_86);
		RuntimeObject* L_88;
		L_88 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_86, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_87);
		return (bool)0;
	}

IL_02a6:
	{
		TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* L_89 = (TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B*)il2cpp_codegen_object_new(TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B_il2cpp_TypeInfo_var);
		TROPSHOOT__ctor_m8D8DF1CD5727E67A0692BA3CD5BC9A51D2483762(L_89, NULL);
		V_6 = L_89;
		TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* L_90 = V_6;
		TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* L_91 = L_90;
		RuntimeObject* L_92;
		L_92 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
		NullCheck(L_91);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_91, L_92);
		TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* L_93 = L_91;
		RuntimeObject* L_94;
		L_94 = CYCLETROPSHOOT_get_THERE_m75067D8725F7022A1897642EE8669481411C1BDB_inline(__this, NULL);
		NullCheck(L_93);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_93, L_94);
		RuntimeObject* L_95;
		L_95 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		NullCheck(L_93);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_93, L_95);
		RuntimeObject* L_96;
		L_96 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		TROPSHOOT_t9A51E96FB61058454B38ADBCECB387B8D5D0407B* L_97 = V_6;
		NullCheck(L_96);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_96, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_97);
		return (bool)0;
	}

IL_02e3:
	{
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_99 = (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA*)il2cpp_codegen_object_new(TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		TROPFOLLOWATTACK__ctor_m3F9D3BD614C9DFC04F5208E62E147625D29FFE3B(L_99, NULL);
		V_7 = L_99;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_100 = V_7;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_101 = L_100;
		RuntimeObject* L_102;
		L_102 = CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline(__this, NULL);
		NullCheck(L_101);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_101, L_102);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_103 = L_101;
		RuntimeObject* L_104;
		L_104 = CYCLETROPSHOOT_get_THERE_m75067D8725F7022A1897642EE8669481411C1BDB_inline(__this, NULL);
		NullCheck(L_103);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_103, L_104);
		RuntimeObject* L_105;
		L_105 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		NullCheck(L_103);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_103, L_105);
		RuntimeObject* L_106;
		L_106 = CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline(__this, NULL);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_107 = V_7;
		NullCheck(L_106);
		RuntimeObject* L_108;
		L_108 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_106, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_107);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPWARNING_get_MY_m51084D47139D2508D5962777C9F86868979D4717 (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPWARNING_set_MY_m96E9C0304A5599FC00C3B0F9043373F9AED528EB (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPWARNING_get_THERE_m94E6F7F859E8921F3CAEF4F3A7EBEE069061DCFE (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPWARNING_set_THERE_m6BB0E3B950D9221E8B8DBB93EB9A7A6458402520 (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2 (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPWARNING_set__world_m6462F40CAAA893365D8EB50DBBE48D0A972834A6 (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPWARNING_get_Current_m723E538C7963F18CD22D0D1E48A66F52D2849950 (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPWARNING_set_Current_m28345ECE8C4B30DC511E24AACD684E7B3EB9A1F1 (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPWARNING_Reset_m43A5456BF531655E2D883BFE042F927A0D174549 (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPWARNING__ctor_m4FFFDFB11F6D7940362F0CC16D9294A6C13B87EF (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLETROPWARNING__ctor_m9A976EC222B3220EF8E9D80D531F298B85D97972 (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLETROPWARNING_set_MY_m96E9C0304A5599FC00C3B0F9043373F9AED528EB_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLETROPWARNING_set_THERE_m6BB0E3B950D9221E8B8DBB93EB9A7A6458402520_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLETROPWARNING_set__world_m6462F40CAAA893365D8EB50DBBE48D0A972834A6_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLETROPWARNING_MoveNext_m45691D1120C068A0C0045D9CF1C1D89A4BE16D90 (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* V_1 = NULL;
	TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* V_2 = NULL;
	TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* V_3 = NULL;
	FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* V_4 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_1 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_1, NULL);
		V_0 = L_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_2 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLETROPWARNING_get_MY_m51084D47139D2508D5962777C9F86868979D4717_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLETROPWARNING_get_THERE_m94E6F7F859E8921F3CAEF4F3A7EBEE069061DCFE_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_1), (void*)L_12);
		RuntimeObject* L_13 = __this->___GUN_ON_1;
		NullCheck(L_13);
		float L_14;
		L_14 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)231), (bool)1);
		__this->___GUN_ON_1_val = L_14;
		float L_15 = __this->___GUN_ON_1_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_15, (0.0f), NULL);
		if (L_16)
		{
			goto IL_00b9;
		}
	}
	{
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_17 = (TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA*)il2cpp_codegen_object_new(TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA_il2cpp_TypeInfo_var);
		TROPFOLLOWATTACK__ctor_m3F9D3BD614C9DFC04F5208E62E147625D29FFE3B(L_17, NULL);
		V_1 = L_17;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_18 = V_1;
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_19 = L_18;
		RuntimeObject* L_20;
		L_20 = CYCLETROPWARNING_get_MY_m51084D47139D2508D5962777C9F86868979D4717_inline(__this, NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_19, L_20);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_21 = L_19;
		RuntimeObject* L_22;
		L_22 = CYCLETROPWARNING_get_THERE_m94E6F7F859E8921F3CAEF4F3A7EBEE069061DCFE_inline(__this, NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_21, L_22);
		RuntimeObject* L_23;
		L_23 = CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline(__this, NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_21, L_23);
		RuntimeObject* L_24;
		L_24 = CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline(__this, NULL);
		TROPFOLLOWATTACK_tA7E541376BBF25731627E2707E939A04CC4C09AA* L_25 = V_1;
		NullCheck(L_24);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_25);
		return (bool)0;
	}

IL_00b9:
	{
		RuntimeObject* L_27;
		L_27 = CYCLETROPWARNING_get_MY_m51084D47139D2508D5962777C9F86868979D4717_inline(__this, NULL);
		__this->___MY_4 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_4;
		NullCheck(L_28);
		float L_29;
		L_29 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)202), (bool)1);
		__this->___temp_5 = L_29;
		float L_30 = __this->___temp_5;
		bool L_31;
		L_31 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_30, (10.0f), NULL);
		if (L_31)
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_32;
		L_32 = CYCLETROPWARNING_get_MY_m51084D47139D2508D5962777C9F86868979D4717_inline(__this, NULL);
		__this->___MY_8 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_8;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)190), (RuntimeObject*)NULL);
		TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* L_34 = (TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C*)il2cpp_codegen_object_new(TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C_il2cpp_TypeInfo_var);
		TROPWARNING__ctor_mABFDCE6BEFB91215C31BC33832300CC7C5445D04(L_34, NULL);
		V_2 = L_34;
		TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* L_35 = V_2;
		TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* L_36 = L_35;
		RuntimeObject* L_37;
		L_37 = CYCLETROPWARNING_get_MY_m51084D47139D2508D5962777C9F86868979D4717_inline(__this, NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_36, L_37);
		TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* L_38 = L_36;
		RuntimeObject* L_39;
		L_39 = CYCLETROPWARNING_get_THERE_m94E6F7F859E8921F3CAEF4F3A7EBEE069061DCFE_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_39);
		RuntimeObject* L_40;
		L_40 = CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_40);
		RuntimeObject* L_41;
		L_41 = CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline(__this, NULL);
		TROPWARNING_t681B4A9982BBD5B84AAEA44AAE1298C8B1ED797C* L_42 = V_2;
		NullCheck(L_41);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_42);
		return (bool)0;
	}

IL_0145:
	{
		RuntimeObject* L_44;
		L_44 = CYCLETROPWARNING_get_MY_m51084D47139D2508D5962777C9F86868979D4717_inline(__this, NULL);
		__this->___MY_11 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_44);
		RuntimeObject* L_45 = __this->___MY_11;
		NullCheck(L_45);
		float L_46;
		L_46 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)202), (bool)1);
		__this->___temp_12 = L_46;
		float L_47 = __this->___temp_12;
		bool L_48;
		L_48 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_47, (40.0f), NULL);
		if (!L_48)
		{
			goto IL_01b4;
		}
	}
	{
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_49 = (TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753*)il2cpp_codegen_object_new(TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753_il2cpp_TypeInfo_var);
		TROPWAIT__ctor_mD89D55D997B43B342C3F4F4290102CB1140018A0(L_49, NULL);
		V_3 = L_49;
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_50 = V_3;
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_51 = L_50;
		RuntimeObject* L_52;
		L_52 = CYCLETROPWARNING_get_MY_m51084D47139D2508D5962777C9F86868979D4717_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_52);
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_53 = L_51;
		RuntimeObject* L_54;
		L_54 = CYCLETROPWARNING_get_THERE_m94E6F7F859E8921F3CAEF4F3A7EBEE069061DCFE_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_54);
		RuntimeObject* L_55;
		L_55 = CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_55);
		RuntimeObject* L_56;
		L_56 = CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline(__this, NULL);
		TROPWAIT_tFB6D615E1A98811FCE55CC2E7581CDB05F3B2753* L_57 = V_3;
		NullCheck(L_56);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_57);
		return (bool)0;
	}

IL_01b4:
	{
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_59 = (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5*)il2cpp_codegen_object_new(FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0(L_59, NULL);
		V_4 = L_59;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_60 = V_4;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_61 = L_60;
		RuntimeObject* L_62;
		L_62 = CYCLETROPWARNING_get_MY_m51084D47139D2508D5962777C9F86868979D4717_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_62);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_63 = L_61;
		RuntimeObject* L_64;
		L_64 = CYCLETROPWARNING_get_THERE_m94E6F7F859E8921F3CAEF4F3A7EBEE069061DCFE_inline(__this, NULL);
		NullCheck(L_63);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_63, L_64);
		RuntimeObject* L_65;
		L_65 = CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline(__this, NULL);
		NullCheck(L_63);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_63, L_65);
		RuntimeObject* L_66;
		L_66 = CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline(__this, NULL);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_67 = V_4;
		NullCheck(L_66);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_67);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPTALK_get_MY_mCAD32D0BC515893BDCEB0915F4A8EEA3FFEDA607 (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTALK_set_MY_mCC597EDE4E0930DC930733B72880EB50315E2407 (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPTALK_get_THERE_m30A039526F09FC51171DAD835BE28625DAA082BB (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTALK_set_THERE_m70AB55ACE6EE72664BFBA55A69BA96A229F1A6EB (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPTALK_get__world_mDBFAF7103358A39DBE2C75B240AD8842411B2BB3 (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTALK_set__world_m3D22E5073E555E91B328D6A21B7F9A537D7D5ADA (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPTALK_get_Current_m56C100AFA692E28CE73C374DBBE71A09AC4A3CE8 (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTALK_set_Current_m5FFC01B1E0D055E9A3202B0BA248F99375F31C61 (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTALK_Reset_m8E076736630FEEC2A7AC94C16243715B7AD7E5CF (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTALK__ctor_m07E45B8EE1D9A1CB0E709E76906252DE31350DD8 (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPTALK__ctor_m470599D158F66453F5173F331FA4FA089A950DAB (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPTALK_set_MY_mCC597EDE4E0930DC930733B72880EB50315E2407_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPTALK_set_THERE_m70AB55ACE6EE72664BFBA55A69BA96A229F1A6EB_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPTALK_set__world_m3D22E5073E555E91B328D6A21B7F9A537D7D5ADA_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPTALK_MoveNext_m454BB191E58F98F461E8587D8E06113E2AF44288 (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) 
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
		L_1 = TROPTALK_get__world_mDBFAF7103358A39DBE2C75B240AD8842411B2BB3_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___RANDOMTROP_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___RANDOMTROP_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = TROPTALK_get__world_mDBFAF7103358A39DBE2C75B240AD8842411B2BB3_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___RANDOMTROP_2;
		float L_8;
		L_8 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), L_8);
		RuntimeObject* L_9;
		L_9 = TROPTALK_get__world_mDBFAF7103358A39DBE2C75B240AD8842411B2BB3_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_4), (void*)L_10);
		RuntimeObject* L_11 = __this->___RANDOMTROP_4;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___RANDOMTROP_4_val = L_12;
		float L_13 = __this->___RANDOMTROP_4_val;
		bool L_14;
		L_14 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_13, (0.899999976f), NULL);
		if (L_14)
		{
			goto IL_00ed;
		}
	}
	{
		RuntimeObject* L_15;
		L_15 = TROPTALK_get__world_mDBFAF7103358A39DBE2C75B240AD8842411B2BB3_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_6), (void*)L_16);
		RuntimeObject* L_17 = __this->___RANDOMTROP_6;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (bool)1);
		__this->___RANDOMTROP_6_val = L_18;
		float L_19 = __this->___RANDOMTROP_6_val;
		bool L_20;
		L_20 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_19, (0.800000012f), NULL);
		if (L_20)
		{
			goto IL_013e;
		}
	}
	{
		return (bool)0;
	}

IL_00ed:
	{
		RuntimeObject* L_21;
		L_21 = TROPTALK_get__world_mDBFAF7103358A39DBE2C75B240AD8842411B2BB3_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)1466075648), (bool)1, (bool)1);
		__this->___TROP09SND_7 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP09SND_7), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = TROPTALK_get_MY_mCAD32D0BC515893BDCEB0915F4A8EEA3FFEDA607_inline(__this, NULL);
		__this->___MY_9 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_9), (void*)L_24);
		RuntimeObject* L_25;
		L_25 = TROPTALK_get__world_mDBFAF7103358A39DBE2C75B240AD8842411B2BB3_inline(__this, NULL);
		RuntimeObject* L_26 = __this->___TROP09SND_7;
		RuntimeObject* L_27 = __this->___MY_9;
		NullCheck(L_25);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, L_26, (0.300000012f), L_27, (100.0f), (100.0f));
		return (bool)0;
	}

IL_013e:
	{
		RuntimeObject* L_28;
		L_28 = TROPTALK_get__world_mDBFAF7103358A39DBE2C75B240AD8842411B2BB3_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)1465788152), (bool)1, (bool)1);
		__this->___TROP01SND_10 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP01SND_10), (void*)L_30);
		RuntimeObject* L_31;
		L_31 = TROPTALK_get_MY_mCAD32D0BC515893BDCEB0915F4A8EEA3FFEDA607_inline(__this, NULL);
		__this->___MY_12 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_12), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = TROPTALK_get__world_mDBFAF7103358A39DBE2C75B240AD8842411B2BB3_inline(__this, NULL);
		RuntimeObject* L_33 = __this->___TROP01SND_10;
		RuntimeObject* L_34 = __this->___MY_12;
		NullCheck(L_32);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, L_33, (0.300000012f), L_34, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOUT_get_MY_m9C260B56AD5E813B1E59FDFB3F4738B2A0D2CB63 (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOUT_set_MY_m13DF29026E1D52E983ABFCA8FB5A80961A3573EC (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOUT_get_THERE_m3FDF34D9A66E3370CC050250AA93B6D3FB79E505 (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOUT_set_THERE_mD0D225642ECF309376B15F05670917081EBF1E18 (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95 (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOUT_set__world_m66EE88614F44B5BC2AD9CB918E9FC146FC85904F (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOUT_get_Current_mAC595FF6F63842BE1FEC5230E7B1197F9DE07EBB (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOUT_set_Current_m1BEC8C5D31C45B094A5F57B10A4DE553B20C02C1 (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOUT_Reset_m4C219FB9BDFC2CD007408F2BB96AACCD8DE57780 (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOUT__ctor_m09D0B743C06CEB427D818500ADF8672CA8F9512B (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TROPSHOUT__ctor_m1E31EF6ED85BB7344EEC4BD17F031E6FBFC1B837 (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TROPSHOUT_set_MY_m13DF29026E1D52E983ABFCA8FB5A80961A3573EC_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TROPSHOUT_set_THERE_mD0D225642ECF309376B15F05670917081EBF1E18_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TROPSHOUT_set__world_m66EE88614F44B5BC2AD9CB918E9FC146FC85904F_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TROPSHOUT_MoveNext_mB73AA3DC75004D987EA7891E5B259891264641F3 (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) 
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
		L_1 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___RANDOMTROP_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___RANDOMTROP_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___RANDOMTROP_2;
		float L_8;
		L_8 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), L_8);
		RuntimeObject* L_9;
		L_9 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_4), (void*)L_10);
		RuntimeObject* L_11 = __this->___RANDOMTROP_4;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___RANDOMTROP_4_val = L_12;
		float L_13 = __this->___RANDOMTROP_4_val;
		bool L_14;
		L_14 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_13, (0.800000012f), NULL);
		if (L_14)
		{
			goto IL_0185;
		}
	}
	{
		RuntimeObject* L_15;
		L_15 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_6), (void*)L_16);
		RuntimeObject* L_17 = __this->___RANDOMTROP_6;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (bool)1);
		__this->___RANDOMTROP_6_val = L_18;
		float L_19 = __this->___RANDOMTROP_6_val;
		bool L_20;
		L_20 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_19, (0.400000006f), NULL);
		if (L_20)
		{
			goto IL_01d6;
		}
	}
	{
		RuntimeObject* L_21;
		L_21 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)1092120691));
		__this->___RANDOMTROP_8 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RANDOMTROP_8), (void*)L_22);
		RuntimeObject* L_23 = __this->___RANDOMTROP_8;
		NullCheck(L_23);
		float L_24;
		L_24 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), (bool)1);
		__this->___RANDOMTROP_8_val = L_24;
		float L_25 = __this->___RANDOMTROP_8_val;
		bool L_26;
		L_26 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_25, (0.100000001f), NULL);
		if (L_26)
		{
			goto IL_0227;
		}
	}
	{
		RuntimeObject* L_27;
		L_27 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)1465967837), (bool)1, (bool)1);
		__this->___TROP06SND_9 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP06SND_9), (void*)L_29);
		RuntimeObject* L_30;
		L_30 = TROPSHOUT_get_MY_m9C260B56AD5E813B1E59FDFB3F4738B2A0D2CB63_inline(__this, NULL);
		__this->___MY_11 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_30);
		RuntimeObject* L_31;
		L_31 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		RuntimeObject* L_32 = __this->___TROP06SND_9;
		RuntimeObject* L_33 = __this->___MY_11;
		NullCheck(L_31);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, L_32, (0.300000012f), L_33, (100.0f), (100.0f));
		return (bool)0;
	}

IL_0185:
	{
		RuntimeObject* L_34;
		L_34 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)1467010010), (bool)1, (bool)1);
		__this->___TROP12SND_12 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP12SND_12), (void*)L_36);
		RuntimeObject* L_37;
		L_37 = TROPSHOUT_get_MY_m9C260B56AD5E813B1E59FDFB3F4738B2A0D2CB63_inline(__this, NULL);
		__this->___MY_14 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_37);
		RuntimeObject* L_38;
		L_38 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		RuntimeObject* L_39 = __this->___TROP12SND_12;
		RuntimeObject* L_40 = __this->___MY_14;
		NullCheck(L_38);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, L_39, (0.400000006f), L_40, (100.0f), (100.0f));
		return (bool)0;
	}

IL_01d6:
	{
		RuntimeObject* L_41;
		L_41 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_41);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)1466938136), (bool)1, (bool)1);
		__this->___TROP10SND_15 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP10SND_15), (void*)L_43);
		RuntimeObject* L_44;
		L_44 = TROPSHOUT_get_MY_m9C260B56AD5E813B1E59FDFB3F4738B2A0D2CB63_inline(__this, NULL);
		__this->___MY_17 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		RuntimeObject* L_46 = __this->___TROP10SND_15;
		RuntimeObject* L_47 = __this->___MY_17;
		NullCheck(L_45);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, L_46, (0.300000012f), L_47, (100.0f), (100.0f));
		return (bool)0;
	}

IL_0227:
	{
		RuntimeObject* L_48;
		L_48 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)1465860026), (bool)1, (bool)1);
		__this->___TROP03SND_18 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP03SND_18), (void*)L_50);
		RuntimeObject* L_51;
		L_51 = TROPSHOUT_get_MY_m9C260B56AD5E813B1E59FDFB3F4738B2A0D2CB63_inline(__this, NULL);
		__this->___MY_20 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_51);
		RuntimeObject* L_52;
		L_52 = TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline(__this, NULL);
		RuntimeObject* L_53 = __this->___TROP03SND_18;
		RuntimeObject* L_54 = __this->___MY_20;
		NullCheck(L_52);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, L_53, (0.300000012f), L_54, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPAMMO_get_MY_m6DE3832C6838B809BDF0B0630BE4696C9ECAB58F (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPAMMO_set_MY_m3F3B4915C23D212F2445601D805EC6F5C6F8EEDD (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPAMMO_get_THERE_m8440A1F7EEF0C26C820E0C9DF9C3319809D60F65 (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPAMMO_set_THERE_mD07A4EF8FAD828EB8AF3515EDDE936ED7DA1154A (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPAMMO_set__world_m6AA082BE3A710F59B0510B0E4BAE6793664F3211 (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPAMMO_get_Current_m597835FCB431E8DFDBDE8494D68470132218AE03 (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPAMMO_set_Current_m767F87376F4DE946782988FCEE1CC5E3BAC69C18 (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPAMMO_Reset_mE5E1901D82F7767F5087E62FA4AE1B9A96D8E504 (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPAMMO__ctor_m52FF492433EA844694F487EBF71162D5CCD460FE (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPAMMO__ctor_m8C8A9C8F18FF68CE5382E463A58AD53BA04FE40A (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKTROPAMMO_set_MY_m3F3B4915C23D212F2445601D805EC6F5C6F8EEDD_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKTROPAMMO_set_THERE_mD07A4EF8FAD828EB8AF3515EDDE936ED7DA1154A_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKTROPAMMO_set__world_m6AA082BE3A710F59B0510B0E4BAE6793664F3211_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKTROPAMMO_MoveNext_m2B735738EA3B138D892A84E06F2A0DC24EA253D4 (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) 
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
		L_1 = PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline(__this, NULL);
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
		L_5 = PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline(__this, NULL);
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
		L_12 = PICKTROPAMMO_get_MY_m6DE3832C6838B809BDF0B0630BE4696C9ECAB58F_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_11, L_12);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_13 = L_11;
		RuntimeObject* L_14;
		L_14 = PICKTROPAMMO_get_THERE_m8440A1F7EEF0C26C820E0C9DF9C3319809D60F65_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_14);
		RuntimeObject* L_15;
		L_15 = PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_15);
		RuntimeObject* L_16;
		L_16 = PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_17 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_17);
		RuntimeObject* L_19;
		L_19 = PICKTROPAMMO_get_MY_m6DE3832C6838B809BDF0B0630BE4696C9ECAB58F_inline(__this, NULL);
		__this->___MY_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_5;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_21;
		L_21 = PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)2022635869), (bool)1, (bool)1);
		__this->___AMMO01SND_6 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO01SND_6), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline(__this, NULL);
		RuntimeObject* L_25 = __this->___AMMO01SND_6;
		NullCheck(L_24);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, L_25, (0.300000012f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_26;
		L_26 = PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)-1998983129), (bool)1, (bool)1);
		__this->___GET01STR_8 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET01STR_8), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline(__this, NULL);
		RuntimeObject* L_30 = __this->___GET01STR_8;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, ((int32_t)361798934), L_30);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_31 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_31, NULL);
		V_1 = L_31;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_32 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_33 = L_32;
		RuntimeObject* L_34;
		L_34 = PICKTROPAMMO_get_MY_m6DE3832C6838B809BDF0B0630BE4696C9ECAB58F_inline(__this, NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_33, L_34);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_35 = L_33;
		RuntimeObject* L_36;
		L_36 = PICKTROPAMMO_get_THERE_m8440A1F7EEF0C26C820E0C9DF9C3319809D60F65_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_36);
		RuntimeObject* L_37;
		L_37 = PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_37);
		RuntimeObject* L_38;
		L_38 = PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPARMOUR_get_MY_mCEDA773D5847F9114B998E2A586589FA186DA845 (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPARMOUR_set_MY_mBBA63943C951B5E2BF0989D17327A7EA8169887C (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPARMOUR_get_THERE_mF735820BFFB7F367E43E1FB85A110D9999E19300 (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPARMOUR_set_THERE_m8C4EFB4F69D91875002A3BD06802625963D4BB1C (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566 (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPARMOUR_set__world_m8A5A42AD0D0A3E129625DA7B97D55F26BBC9DCAF (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPARMOUR_get_Current_m95C43537B14F8FF1A5F92341E96C1E31CFCECFE3 (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPARMOUR_set_Current_m65941FCECD7B9995194F9E58B664FED1B8462943 (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPARMOUR_Reset_mFB7947E7CABD47495F1DB4E65CD2323638F2EBBA (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPARMOUR__ctor_m5B8786D80573C708EB13AA7A12B5B8CE83CBB498 (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKTROPARMOUR__ctor_mF991D0BA9795B3A16CBA9EC822BFA59A2C250994 (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKTROPARMOUR_set_MY_mBBA63943C951B5E2BF0989D17327A7EA8169887C_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKTROPARMOUR_set_THERE_m8C4EFB4F69D91875002A3BD06802625963D4BB1C_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKTROPARMOUR_set__world_m8A5A42AD0D0A3E129625DA7B97D55F26BBC9DCAF_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKTROPARMOUR_MoveNext_m76BC7A453E7A681AD28EEA5EDAF739452794AB58 (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) 
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
		L_1 = PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566_inline(__this, NULL);
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
		L_7 = PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566_inline(__this, NULL);
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
		L_11 = PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_4), (void*)L_12);
		RuntimeObject* L_13 = __this->___PLAYER_ARMOUR_4;
		float L_14 = __this->___PLAYER_ARMOUR_3_val;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)231), ((float)il2cpp_codegen_add(L_14, (20.0f))));
		RuntimeObject* L_15;
		L_15 = PICKTROPARMOUR_get_MY_mCEDA773D5847F9114B998E2A586589FA186DA845_inline(__this, NULL);
		__this->___MY_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_7), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_7;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_17;
		L_17 = PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)366485954), (bool)1, (bool)1);
		__this->___ARMO01SND_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ARMO01SND_8), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566_inline(__this, NULL);
		RuntimeObject* L_21 = __this->___ARMO01SND_8;
		NullCheck(L_20);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, L_21, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_22;
		L_22 = PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)-1997833145), (bool)1, (bool)1);
		__this->___GET10STR_10 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET10STR_10), (void*)L_24);
		RuntimeObject* L_25;
		L_25 = PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566_inline(__this, NULL);
		RuntimeObject* L_26 = __this->___GET10STR_10;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, ((int32_t)361798934), L_26);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_27 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_27, NULL);
		V_0 = L_27;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_28 = V_0;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_29 = L_28;
		RuntimeObject* L_30;
		L_30 = PICKTROPARMOUR_get_MY_mCEDA773D5847F9114B998E2A586589FA186DA845_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_31 = L_29;
		RuntimeObject* L_32;
		L_32 = PICKTROPARMOUR_get_THERE_mF735820BFFB7F367E43E1FB85A110D9999E19300_inline(__this, NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_31, L_32);
		RuntimeObject* L_33;
		L_33 = PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566_inline(__this, NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_31, L_33);
		RuntimeObject* L_34;
		L_34 = PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566_inline(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369 (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUMMERHIT_set_MY_mEDF3FBC5163BD8049181978429F23005EB2ACBD2 (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HUMMERHIT_get_THERE_m52F2C905AABEAF1CA41D01CE4C2C217230BEEC2D (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUMMERHIT_set_THERE_m0C28D2EB8CBB50CCBB296B81AC590AAECAD94ACF (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279 (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUMMERHIT_set__world_m634ED74E1C2FEC8081F7177A278859C73432C37F (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HUMMERHIT_get_Current_mD75A503C8C4AF58929D3CD350D285D0A08B84310 (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUMMERHIT_set_Current_m77168DD00D6C240D30997730A51D1F15CFB06C03 (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUMMERHIT_Reset_mE6F6D489D83E58FB9D8DF6F2961F7C9093C9FBE9 (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUMMERHIT__ctor_m293664E9A060073D317BE9BCD00A33F14C02E9C1 (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUMMERHIT__ctor_m1FC63C241257E83AA5B1FAA86BBF954168A2B947 (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		HUMMERHIT_set_MY_mEDF3FBC5163BD8049181978429F23005EB2ACBD2_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		HUMMERHIT_set_THERE_m0C28D2EB8CBB50CCBB296B81AC590AAECAD94ACF_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		HUMMERHIT_set__world_m634ED74E1C2FEC8081F7177A278859C73432C37F_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HUMMERHIT_MoveNext_m90F73C1C2429C7D8D802B942D8B267442EB6B586 (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, const RuntimeMethod* method) 
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
		L_1 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
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
		L_7 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
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
			goto IL_0336;
		}
	}
	{
		RuntimeObject* L_13;
		L_13 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
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
		if (!L_18)
		{
			goto IL_00c4;
		}
	}
	{
		return (bool)0;
	}

IL_00c4:
	{
		RuntimeObject* L_19;
		L_19 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)217512505));
		__this->___DISTX_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_6), (void*)L_20);
		RuntimeObject* L_21;
		L_21 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
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
		L_25 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_10 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_10;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)195), (bool)1);
		__this->___temp_11 = L_27;
		RuntimeObject* L_28;
		L_28 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
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
		L_32 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_20 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_20;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)195), (bool)1);
		__this->___temp_21 = L_34;
		RuntimeObject* L_35;
		L_35 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
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
		L_39 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_30 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_30;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)196), (bool)1);
		__this->___temp_31 = L_41;
		RuntimeObject* L_42;
		L_42 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
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
		L_46 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_40 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_40), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_40;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)196), (bool)1);
		__this->___temp_41 = L_48;
		RuntimeObject* L_49;
		L_49 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
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
		L_62 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
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
		L_66 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
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
		L_71 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
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
		if (!L_76)
		{
			goto IL_0336;
		}
	}
	{
		return (bool)0;
	}

IL_0336:
	{
		RuntimeObject* L_77;
		L_77 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
		NullCheck(L_77);
		RuntimeObject* L_78;
		L_78 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_77, 5, ((int32_t)441));
		__this->___SHOOT_FAC_52 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_52), (void*)L_78);
		RuntimeObject* L_79 = __this->___SHOOT_FAC_52;
		NullCheck(L_79);
		float L_80;
		L_80 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_79, ((int32_t)231), (bool)1);
		__this->___SHOOT_FAC_52_val = L_80;
		float L_81 = __this->___SHOOT_FAC_52_val;
		bool L_82;
		L_82 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_81, (9.0f), NULL);
		if (!L_82)
		{
			goto IL_0378;
		}
	}
	{
		return (bool)0;
	}

IL_0378:
	{
		RuntimeObject* L_83;
		L_83 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_55 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_55), (void*)L_83);
		RuntimeObject* L_84 = __this->___MY_55;
		NullCheck(L_84);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_84, ((int32_t)191), (RuntimeObject*)NULL);
		RuntimeObject* L_85;
		L_85 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_85);
		NullCheck(L_86);
		RuntimeObject* L_87;
		L_87 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)2089330692), (bool)1, (bool)1);
		__this->___MOVE_56 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_56), (void*)L_87);
		RuntimeObject* L_88;
		L_88 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_58 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_58), (void*)L_88);
		RuntimeObject* L_89 = __this->___MY_58;
		RuntimeObject* L_90 = __this->___MOVE_56;
		NullCheck(L_89);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)199), L_90);
		RuntimeObject* L_91;
		L_91 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_61 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_61), (void*)L_91);
		RuntimeObject* L_92 = __this->___MY_61;
		NullCheck(L_92);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)169), (0.5f));
		RuntimeObject* L_93;
		L_93 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_64 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_64), (void*)L_93);
		RuntimeObject* L_94 = __this->___MY_64;
		NullCheck(L_94);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_95;
		L_95 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_95);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_96, ((int32_t)89918285), (bool)1, (bool)1);
		__this->___HUMM04SND_65 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HUMM04SND_65), (void*)L_97);
		RuntimeObject* L_98;
		L_98 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_67 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_67), (void*)L_98);
		RuntimeObject* L_99;
		L_99 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
		RuntimeObject* L_100 = __this->___HUMM04SND_65;
		RuntimeObject* L_101 = __this->___MY_67;
		NullCheck(L_99);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_99, L_100, (0.5f), L_101, (100.0f), (100.0f));
		RuntimeObject* L_102;
		L_102 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_70 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_70), (void*)L_102);
		RuntimeObject* L_103 = __this->___MY_70;
		NullCheck(L_103);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_103, ((int32_t)213), (1.0f));
		RuntimeObject* L_104;
		L_104 = HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline(__this, NULL);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_104);
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_105, ((int32_t)1223307560), (bool)1, (bool)1);
		__this->___ACTORJUMPSTOP_71 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ACTORJUMPSTOP_71), (void*)L_106);
		RuntimeObject* L_107;
		L_107 = HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline(__this, NULL);
		__this->___MY_73 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_73), (void*)L_107);
		RuntimeObject* L_108 = __this->___MY_73;
		RuntimeObject* L_109 = __this->___ACTORJUMPSTOP_71;
		NullCheck(L_108);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_108, ((int32_t)189), L_109);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHTURN_get_MY_mFACFB1C8F35259E18426C86A6F9EE5E2B7B1BE8E (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTURN_set_MY_m5DE28D4ABBD4810FFCCE8EA4CB37F9B54986E1C4 (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHTURN_get_THERE_m0349DE703F3E14EC4A996CDE9D3A5C38B3974796 (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTURN_set_THERE_m28CD681391832F5E4C7A57CEB4F1A8F9E6F675FE (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTURN_set__world_m43EE7CD252CD04E3976A8C7A9B8DD7BF9AE179FF (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHTURN_get_Current_mC0543A298468D9288420E7EA96EFAE1905B3AD25 (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTURN_set_Current_mA7964CFB5B29CCEA045918B516F458E87379F6C2 (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTURN_Reset_m05F119864E86BFB47324F55936090C6F03CDC00D (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTURN__ctor_m9A6FB590CE445BD244186C1B4FE6C7F1AB003A81 (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTURN__ctor_m9EC34726A133E7A1B70397D7911E3AA3EDDA6714 (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHTURN_set_MY_m5DE28D4ABBD4810FFCCE8EA4CB37F9B54986E1C4_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHTURN_set_THERE_m28CD681391832F5E4C7A57CEB4F1A8F9E6F675FE_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHTURN_set__world_m43EE7CD252CD04E3976A8C7A9B8DD7BF9AE179FF_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHTURN_MoveNext_mEBCDC94D1ECA8A9C9463F5A5BF4CFEBA5878F3FE (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* V_0 = NULL;
	TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* V_1 = NULL;
	TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)33817649));
		__this->___WAITTIME_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAITTIME_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
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
		LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* L_11 = (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E*)il2cpp_codegen_object_new(LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E_il2cpp_TypeInfo_var);
		LNCHLISTEN__ctor_mD2CFC2157D48B8661DE8F4FE121E8F6353105C94(L_11, NULL);
		V_0 = L_11;
		LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* L_12 = V_0;
		LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* L_13 = L_12;
		RuntimeObject* L_14;
		L_14 = LNCHTURN_get_MY_mFACFB1C8F35259E18426C86A6F9EE5E2B7B1BE8E_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_14);
		LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* L_15 = L_13;
		RuntimeObject* L_16;
		L_16 = LNCHTURN_get_THERE_m0349DE703F3E14EC4A996CDE9D3A5C38B3974796_inline(__this, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_15, L_16);
		RuntimeObject* L_17;
		L_17 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_15, L_17);
		RuntimeObject* L_18;
		L_18 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
		LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* L_19 = V_0;
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
		L_23 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, 5, ((int32_t)16495097));
		__this->___RIGHTTURNLNCH_11 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNLNCH_11), (void*)L_24);
		RuntimeObject* L_25;
		L_25 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, 5, ((int32_t)16495097));
		__this->___RIGHTTURNLNCH_12 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNLNCH_12), (void*)L_26);
		RuntimeObject* L_27 = __this->___RIGHTTURNLNCH_12;
		NullCheck(L_27);
		float L_28;
		L_28 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNLNCH_12_val = L_28;
		RuntimeObject* L_29;
		L_29 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, 5, ((int32_t)16495097));
		__this->___RIGHTTURNLNCH_14 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNLNCH_14), (void*)L_30);
		RuntimeObject* L_31 = __this->___RIGHTTURNLNCH_14;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNLNCH_14_val = L_32;
		RuntimeObject* L_33;
		L_33 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)16495097));
		__this->___RIGHTTURNLNCH_20 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNLNCH_20), (void*)L_34);
		RuntimeObject* L_35 = __this->___RIGHTTURNLNCH_20;
		NullCheck(L_35);
		float L_36;
		L_36 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNLNCH_20_val = L_36;
		RuntimeObject* L_37 = __this->___RIGHTTURNLNCH_11;
		float L_38 = __this->___RIGHTTURNLNCH_14_val;
		float L_39 = __this->___RIGHTTURNLNCH_20_val;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_38, (1.0f))), ((float)il2cpp_codegen_subtract(L_39, (1.0f))))));
	}

IL_0196:
	{
		RuntimeObject* L_40;
		L_40 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_40, 5, ((int32_t)16495097));
		__this->___RIGHTTURNLNCH_24 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNLNCH_24), (void*)L_41);
		RuntimeObject* L_42 = __this->___RIGHTTURNLNCH_24;
		NullCheck(L_42);
		float L_43;
		L_43 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNLNCH_24_val = L_43;
		float L_44 = __this->___RIGHTTURNLNCH_24_val;
		RuntimeObject* L_45 = __this->___RIGHTTURNLNCH_24;
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
		L_50 = LNCHTURN_get_MY_mFACFB1C8F35259E18426C86A6F9EE5E2B7B1BE8E_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_51 = L_49;
		RuntimeObject* L_52;
		L_52 = LNCHTURN_get_THERE_m0349DE703F3E14EC4A996CDE9D3A5C38B3974796_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_52);
		RuntimeObject* L_53;
		L_53 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_53);
		RuntimeObject* L_54;
		L_54 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
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
		L_60 = LNCHTURN_get_MY_mFACFB1C8F35259E18426C86A6F9EE5E2B7B1BE8E_inline(__this, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_59, L_60);
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_61 = L_59;
		RuntimeObject* L_62;
		L_62 = LNCHTURN_get_THERE_m0349DE703F3E14EC4A996CDE9D3A5C38B3974796_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_62);
		RuntimeObject* L_63;
		L_63 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_63);
		RuntimeObject* L_64;
		L_64 = LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91 (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHBACKOFF_set_MY_m3F3BE113200A13DFD60F4ED1BE3E80DED6F93A63 (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHBACKOFF_get_THERE_m1AB36700DE6DBC9DA666953EDB7F6CB4DB513C28 (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHBACKOFF_set_THERE_mB1248FA8B6D33D097C7816A61CEF4C8202CE57F9 (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85 (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHBACKOFF_set__world_mA6EEB7D0EC2ECC3F3E64549F5959B0F65CBAB582 (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHBACKOFF_get_Current_m0D820B68807EED1E83A28BB8D3EC054F56079674 (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHBACKOFF_set_Current_m04B181A7BC20C24DDB55968317A504814809FD45 (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHBACKOFF_Reset_m413EB92AB1DD28B694AD57D4DA832A38F345F717 (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHBACKOFF__ctor_m665911F972D78C03D0EF36CFC1EB91893B35A7EA (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHBACKOFF__ctor_mEB2B3AC32221393E7609736007881B311B8087FB (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHBACKOFF_set_MY_m3F3BE113200A13DFD60F4ED1BE3E80DED6F93A63_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHBACKOFF_set_THERE_mB1248FA8B6D33D097C7816A61CEF4C8202CE57F9_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHBACKOFF_set__world_mA6EEB7D0EC2ECC3F3E64549F5959B0F65CBAB582_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHBACKOFF_MoveNext_m8836661761330EB23B03658973AAACEC323F9617 (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_1 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_2 = NULL;
	LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* V_3 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_4 = NULL;
	LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* V_5 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_03d7;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_2;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_5;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_8;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-256454125), (bool)1, (bool)1);
		__this->___CYCLELNCHBACK_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLELNCHBACK_9), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_11;
		RuntimeObject* L_14 = __this->___CYCLELNCHBACK_9;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_12 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_12), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_14 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_14;
		RuntimeObject* L_20 = __this->___LNCHHIT_12;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)209), L_20);
		RuntimeObject* L_21;
		L_21 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_17 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_17;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)207), (1.0f));
		RuntimeObject* L_23;
		L_23 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_20 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_20;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)176), (1.0f));
		RuntimeObject* L_25;
		L_25 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)-1258694892), (bool)1, (bool)1);
		__this->___LNCH1TEX_21 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH1TEX_21), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_23 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_23;
		RuntimeObject* L_30 = __this->___LNCH1TEX_21;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)164), L_30);
		RuntimeObject* L_31;
		L_31 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_26 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_26;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)168), (0.5f));
		RuntimeObject* L_33;
		L_33 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_27 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_27), (void*)L_35);
		RuntimeObject* L_36;
		L_36 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_29 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_29;
		RuntimeObject* L_38 = __this->___BULLET_27;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)199), L_38);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_39 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_39, NULL);
		V_1 = L_39;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_40 = V_1;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_41 = L_40;
		RuntimeObject* L_42;
		L_42 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_43 = L_41;
		RuntimeObject* L_44;
		L_44 = LNCHBACKOFF_get_THERE_m1AB36700DE6DBC9DA666953EDB7F6CB4DB513C28_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_44);
		RuntimeObject* L_45;
		L_45 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_45);
		RuntimeObject* L_46;
		L_46 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_47 = V_1;
		NullCheck(L_46);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_47);
		RuntimeObject* L_49;
		L_49 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_31 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_49);
		RuntimeObject* L_50;
		L_50 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_33 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_33), (void*)L_50);
		RuntimeObject* L_51 = __this->___MY_33;
		NullCheck(L_51);
		float L_52;
		L_52 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)194), (bool)1);
		__this->___temp_34 = L_52;
		RuntimeObject* L_53;
		L_53 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_36 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_36), (void*)L_53);
		RuntimeObject* L_54 = __this->___MY_36;
		NullCheck(L_54);
		float L_55;
		L_55 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)194), (bool)1);
		__this->___temp_37 = L_55;
		RuntimeObject* L_56 = __this->___MY_31;
		float L_57 = __this->___temp_37;
		float L_58;
		L_58 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_56);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_56, ((int32_t)194), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_57, L_58)), (0.5f))));
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_59 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_59, NULL);
		V_2 = L_59;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_60 = V_2;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_61 = L_60;
		RuntimeObject* L_62;
		L_62 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_62);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_63 = L_61;
		RuntimeObject* L_64;
		L_64 = LNCHBACKOFF_get_THERE_m1AB36700DE6DBC9DA666953EDB7F6CB4DB513C28_inline(__this, NULL);
		NullCheck(L_63);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_63, L_64);
		RuntimeObject* L_65;
		L_65 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		NullCheck(L_63);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_63, L_65);
		RuntimeObject* L_66;
		L_66 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_67 = V_2;
		NullCheck(L_66);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_67);
		float L_69;
		L_69 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_69;
		float L_70 = __this->___startTime1;
		float L_71;
		L_71 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)48), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_70, L_71));
		__this->____cursor = 1;
		goto IL_02e4;
	}

IL_02d7:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_72 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LNCHBACKOFF_set_Current_m04B181A7BC20C24DDB55968317A504814809FD45_inline(__this, L_72, NULL);
		return (bool)1;
	}

IL_02e4:
	{
		float L_73;
		L_73 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_74 = __this->___endTime1;
		if ((((float)L_73) < ((float)L_74)))
		{
			goto IL_02d7;
		}
	}
	{
		LNCHBACKOFF_set_Current_m04B181A7BC20C24DDB55968317A504814809FD45_inline(__this, NULL, NULL);
		RuntimeObject* L_75;
		L_75 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_45 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_45), (void*)L_75);
		RuntimeObject* L_76 = __this->___MY_45;
		NullCheck(L_76);
		float L_77;
		L_77 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)173), (bool)1);
		__this->___temp_46 = L_77;
		float L_78 = __this->___temp_46;
		bool L_79;
		L_79 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_78, (5.0f), NULL);
		if (!L_79)
		{
			goto IL_032f;
		}
	}
	{
		return (bool)0;
	}

IL_032f:
	{
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_80 = (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88*)il2cpp_codegen_object_new(LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88_il2cpp_TypeInfo_var);
		LNCHWANDER__ctor_mFC142C0C2F1F94DF484FD5C10AC8DE54505AA2B5(L_80, NULL);
		V_3 = L_80;
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_81 = V_3;
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_82 = L_81;
		RuntimeObject* L_83;
		L_83 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		NullCheck(L_82);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_82, L_83);
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_84 = L_82;
		RuntimeObject* L_85;
		L_85 = LNCHBACKOFF_get_THERE_m1AB36700DE6DBC9DA666953EDB7F6CB4DB513C28_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_85);
		RuntimeObject* L_86;
		L_86 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_86);
		RuntimeObject* L_87;
		L_87 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_88 = V_3;
		NullCheck(L_87);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_87, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_88);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_90 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_90, NULL);
		V_4 = L_90;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_91 = V_4;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_92 = L_91;
		RuntimeObject* L_93;
		L_93 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_93);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_94 = L_92;
		RuntimeObject* L_95;
		L_95 = LNCHBACKOFF_get_THERE_m1AB36700DE6DBC9DA666953EDB7F6CB4DB513C28_inline(__this, NULL);
		NullCheck(L_94);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_94, L_95);
		RuntimeObject* L_96;
		L_96 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		NullCheck(L_94);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_94, L_96);
		RuntimeObject* L_97;
		L_97 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_98 = V_4;
		NullCheck(L_97);
		RuntimeObject* L_99;
		L_99 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_97, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_98);
		float L_100;
		L_100 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_100;
		float L_101 = __this->___startTime2;
		float L_102;
		L_102 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)48), NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_101, L_102));
		__this->____cursor = 2;
		goto IL_03d7;
	}

IL_03ca:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_103 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LNCHBACKOFF_set_Current_m04B181A7BC20C24DDB55968317A504814809FD45_inline(__this, L_103, NULL);
		return (bool)1;
	}

IL_03d7:
	{
		float L_104;
		L_104 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_105 = __this->___endTime2;
		if ((((float)L_104) < ((float)L_105)))
		{
			goto IL_03ca;
		}
	}
	{
		LNCHBACKOFF_set_Current_m04B181A7BC20C24DDB55968317A504814809FD45_inline(__this, NULL, NULL);
		RuntimeObject* L_106;
		L_106 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		__this->___MY_50 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_50), (void*)L_106);
		RuntimeObject* L_107 = __this->___MY_50;
		NullCheck(L_107);
		float L_108;
		L_108 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)173), (bool)1);
		__this->___temp_51 = L_108;
		float L_109 = __this->___temp_51;
		bool L_110;
		L_110 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_109, (5.0f), NULL);
		if (!L_110)
		{
			goto IL_0422;
		}
	}
	{
		return (bool)0;
	}

IL_0422:
	{
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_111 = (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581*)il2cpp_codegen_object_new(LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581_il2cpp_TypeInfo_var);
		LNCHFOLLOWATTACK__ctor_m7C19A2158D0925A63FA649409F191FCC6BE32931(L_111, NULL);
		V_5 = L_111;
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_112 = V_5;
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_113 = L_112;
		RuntimeObject* L_114;
		L_114 = LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline(__this, NULL);
		NullCheck(L_113);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_113, L_114);
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_115 = L_113;
		RuntimeObject* L_116;
		L_116 = LNCHBACKOFF_get_THERE_m1AB36700DE6DBC9DA666953EDB7F6CB4DB513C28_inline(__this, NULL);
		NullCheck(L_115);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_115, L_116);
		RuntimeObject* L_117;
		L_117 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		NullCheck(L_115);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_115, L_117);
		RuntimeObject* L_118;
		L_118 = LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline(__this, NULL);
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_119 = V_5;
		NullCheck(L_118);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_118, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_119);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865 (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWAIT_set_MY_m489B02BA2080C671BCD5012C2B556F313BEF9136 (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHWAIT_get_THERE_m987B3AC04E1992E31A1AC8D7EB0C7CAEF27EE4B6 (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWAIT_set_THERE_mA7BCFC62E8A90A6E3CE05189DB14CBFA6D02693D (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHWAIT_get__world_mE0808BA77D0D2E2851F15D110B14296FB856F481 (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWAIT_set__world_m6A46D1C1F69B2FE0A59985B433D662DB87FEE377 (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHWAIT_get_Current_m90B4C2931D6156F142919CA65BE30C384DDEA135 (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWAIT_set_Current_m6AC4C190CAB5E4DAA395DB9FB59686F42B9DF122 (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWAIT_Reset_mFFED1CDD475B362C2961E281E3C12F055FA9A7FB (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWAIT__ctor_m4BA76E44D3F07A5759CAD531DDC2BBA48438C2DC (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWAIT__ctor_m94C06C50A6E8F157382DA3C7345DFB5A2BA5BCDC (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHWAIT_set_MY_m489B02BA2080C671BCD5012C2B556F313BEF9136_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHWAIT_set_THERE_mA7BCFC62E8A90A6E3CE05189DB14CBFA6D02693D_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHWAIT_set__world_m6A46D1C1F69B2FE0A59985B433D662DB87FEE377_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHWAIT_MoveNext_mEB920F5D748A4C23FBCD0CF792CF86B522207E57 (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, const RuntimeMethod* method) 
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
		L_1 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = LNCHWAIT_get__world_mE0808BA77D0D2E2851F15D110B14296FB856F481_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)-122756454), (bool)1, (bool)1);
		__this->___CYCLELNCHATTACK_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLELNCHATTACK_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___CYCLELNCHATTACK_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)190), L_12);
		RuntimeObject* L_13;
		L_13 = LNCHWAIT_get__world_mE0808BA77D0D2E2851F15D110B14296FB856F481_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_12), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_14;
		RuntimeObject* L_18 = __this->___LNCHHIT_12;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)209), L_18);
		RuntimeObject* L_19;
		L_19 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)207), (0.0f));
		RuntimeObject* L_21;
		L_21 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)213), (0.0f));
		RuntimeObject* L_23;
		L_23 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_23 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_23;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_25;
		L_25 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_26 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_26;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)176), (1.0f));
		RuntimeObject* L_27;
		L_27 = LNCHWAIT_get__world_mE0808BA77D0D2E2851F15D110B14296FB856F481_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)-1258730829), (bool)1, (bool)1);
		__this->___LNCH0TEX_27 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH0TEX_27), (void*)L_29);
		RuntimeObject* L_30;
		L_30 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_29 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_29;
		RuntimeObject* L_32 = __this->___LNCH0TEX_27;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)164), L_32);
		RuntimeObject* L_33;
		L_33 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_32 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_33);
		RuntimeObject* L_34 = __this->___MY_32;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)168), (0.0f));
		RuntimeObject* L_35;
		L_35 = LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline(__this, NULL);
		__this->___MY_35 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_35), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_35;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)199), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWANDER_set_MY_mD0CB4A9FF89C4926AADA8DC13491142979D537E6 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHWANDER_get_THERE_m495856B234BAFA2E958C59340AE499A0AA238BB0 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWANDER_set_THERE_m9E011D1C335D634E48935E2C11B77DEB89156325 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHWANDER_get__world_mEF867072EC8C8B76A027A641D66555018D94BCA0 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWANDER_set__world_m5CE5AE5718536FB1B106EA3D8C6EDC0A1265ACC5 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHWANDER_get_Current_mF51B4EC020CB41320B2DBC6D6C3A440AD5AF6E31 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWANDER_set_Current_m9C5130686EE7A5C2BCBD13997C7B21EC4FED669A (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWANDER_Reset_mE8630301297317B0C9D0B615AE96B594DDF47086 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWANDER__ctor_mFC142C0C2F1F94DF484FD5C10AC8DE54505AA2B5 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHWANDER__ctor_m5A9536BE9ABE20AB3B43897950127D205A141652 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHWANDER_set_MY_mD0CB4A9FF89C4926AADA8DC13491142979D537E6_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHWANDER_set_THERE_m9E011D1C335D634E48935E2C11B77DEB89156325_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHWANDER_set__world_m5CE5AE5718536FB1B106EA3D8C6EDC0A1265ACC5_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHWANDER_MoveNext_m2C94AECF0D24B351EFFD10F1B381B96FD521D959 (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = LNCHWANDER_get__world_mEF867072EC8C8B76A027A641D66555018D94BCA0_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)-122756454), (bool)1, (bool)1);
		__this->___CYCLELNCHATTACK_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLELNCHATTACK_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___CYCLELNCHATTACK_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)190), L_12);
		RuntimeObject* L_13;
		L_13 = LNCHWANDER_get__world_mEF867072EC8C8B76A027A641D66555018D94BCA0_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_12), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		__this->___MY_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_14;
		RuntimeObject* L_18 = __this->___LNCHHIT_12;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)209), L_18);
		RuntimeObject* L_19;
		L_19 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)207), (1.0f));
		RuntimeObject* L_21;
		L_21 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)219), (0.0f));
		RuntimeObject* L_23;
		L_23 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		__this->___MY_23 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_23;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)176), (1.0f));
		RuntimeObject* L_25;
		L_25 = LNCHWANDER_get__world_mEF867072EC8C8B76A027A641D66555018D94BCA0_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)-1258694892), (bool)1, (bool)1);
		__this->___LNCH1TEX_24 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH1TEX_24), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		__this->___MY_26 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_26;
		RuntimeObject* L_30 = __this->___LNCH1TEX_24;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)164), L_30);
		RuntimeObject* L_31;
		L_31 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		__this->___MY_29 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_29;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)168), (0.300000012f));
		RuntimeObject* L_33;
		L_33 = LNCHWANDER_get__world_mEF867072EC8C8B76A027A641D66555018D94BCA0_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_30 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_30), (void*)L_35);
		RuntimeObject* L_36;
		L_36 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		__this->___MY_32 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_32;
		RuntimeObject* L_38 = __this->___BULLET_30;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)199), L_38);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_39 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_39, NULL);
		V_0 = L_39;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_40 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_41 = L_40;
		RuntimeObject* L_42;
		L_42 = LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_43 = L_41;
		RuntimeObject* L_44;
		L_44 = LNCHWANDER_get_THERE_m495856B234BAFA2E958C59340AE499A0AA238BB0_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_44);
		RuntimeObject* L_45;
		L_45 = LNCHWANDER_get__world_mEF867072EC8C8B76A027A641D66555018D94BCA0_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_45);
		RuntimeObject* L_46;
		L_46 = LNCHWANDER_get__world_mEF867072EC8C8B76A027A641D66555018D94BCA0_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_47 = V_0;
		NullCheck(L_46);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_47);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014 (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSEARCH_set_MY_mD5425703A632E95D3DDFBF6D81F8E83298F6C517 (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSEARCH_get_THERE_mF0DC1A412ED7386B50B41B745CA2B5B78E572E8E (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSEARCH_set_THERE_mDD2BA39ADEEB8D50D824C576AF7C82A11DE5CB57 (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSEARCH_get__world_m0CB876F90891AB97DBF726BD83228E662A3FA2BB (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSEARCH_set__world_mAC8CEB7C0035D85B679B8F9F01C3DCF4E3FD2568 (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSEARCH_get_Current_mD9BD3A9D4840C9CCCDD086218B204CB9D00AF436 (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSEARCH_set_Current_m361C051658BB36159C14C4E879C3334ECA230CEF (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSEARCH_Reset_m534FB7E592B71A52578567F04394804155C355FE (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSEARCH__ctor_mD6ADF37B758F9F6F091B3BC6652C2AE3D598AAE1 (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSEARCH__ctor_mFEA06807CF2F07CBF4951FEF8AFFE355C921C447 (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHSEARCH_set_MY_mD5425703A632E95D3DDFBF6D81F8E83298F6C517_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHSEARCH_set_THERE_mDD2BA39ADEEB8D50D824C576AF7C82A11DE5CB57_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHSEARCH_set__world_mAC8CEB7C0035D85B679B8F9F01C3DCF4E3FD2568_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHSEARCH_MoveNext_m423925AB9A1E26E948974D8F09697D789FCAB03F (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = LNCHSEARCH_get__world_m0CB876F90891AB97DBF726BD83228E662A3FA2BB_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)-122756454), (bool)1, (bool)1);
		__this->___CYCLELNCHATTACK_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLELNCHATTACK_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___CYCLELNCHATTACK_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)190), L_12);
		RuntimeObject* L_13;
		L_13 = LNCHSEARCH_get__world_m0CB876F90891AB97DBF726BD83228E662A3FA2BB_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_12), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline(__this, NULL);
		__this->___MY_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_14;
		RuntimeObject* L_18 = __this->___LNCHHIT_12;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)209), L_18);
		RuntimeObject* L_19;
		L_19 = LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)207), (1.0f));
		RuntimeObject* L_21;
		L_21 = LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)219), (0.0f));
		RuntimeObject* L_23;
		L_23 = LNCHSEARCH_get__world_m0CB876F90891AB97DBF726BD83228E662A3FA2BB_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)-1258694892), (bool)1, (bool)1);
		__this->___LNCH1TEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH1TEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___LNCH1TEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.300000012f));
		RuntimeObject* L_31;
		L_31 = LNCHSEARCH_get__world_m0CB876F90891AB97DBF726BD83228E662A3FA2BB_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_27 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_27), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline(__this, NULL);
		__this->___MY_29 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_29;
		RuntimeObject* L_36 = __this->___BULLET_27;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)199), L_36);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_37 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_37, NULL);
		V_0 = L_37;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_38 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_39 = L_38;
		RuntimeObject* L_40;
		L_40 = LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = LNCHSEARCH_get_THERE_mF0DC1A412ED7386B50B41B745CA2B5B78E572E8E_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = LNCHSEARCH_get__world_m0CB876F90891AB97DBF726BD83228E662A3FA2BB_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = LNCHSEARCH_get__world_m0CB876F90891AB97DBF726BD83228E662A3FA2BB_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_45 = V_0;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIDE_set_MY_m1260A390D14FB7ABDBD8A6DAF751326C37E3B8BC (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIDE_get_THERE_mB8154252B2806AFC671E6F7D9EC0F422F5779EFB (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIDE_set_THERE_m2F178B8306201F1C24FFD463AEB4639523CD6FE7 (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048 (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIDE_set__world_mB61D1B2D465E85B5F6E2E6D63414D50B9E443CC0 (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIDE_get_Current_m748EE2F42E5DCB3EFCCB2C2F07F5AFA79FF133EC (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIDE_set_Current_m1902C6ECCDA4E72444219BB99AA44FF7919A72E6 (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIDE_Reset_mBB4A04E85F8E6253F3C934CFBC9FD7D2D8663AA7 (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIDE__ctor_m5B1B231F2C2E4328FEBFF8B3F415C1868359CF07 (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIDE__ctor_mF676FDA7E80BF517BF88E515CE020CFC2FCA0671 (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHHIDE_set_MY_m1260A390D14FB7ABDBD8A6DAF751326C37E3B8BC_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHHIDE_set_THERE_m2F178B8306201F1C24FFD463AEB4639523CD6FE7_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHHIDE_set__world_mB61D1B2D465E85B5F6E2E6D63414D50B9E443CC0_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHHIDE_MoveNext_m29D5A4D7157EE0FAF302E86FEBC170C9CAAD31F5 (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_031b;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)156169763), (bool)1, (bool)1);
		__this->___LNCHESCAPE_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHESCAPE_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___LNCHESCAPE_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)192), L_8);
		RuntimeObject* L_9;
		L_9 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_8;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_11;
		L_11 = LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-256229764), (bool)1, (bool)1);
		__this->___CYCLELNCHHIDE_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLELNCHHIDE_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___CYCLELNCHHIDE_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)190), L_16);
		RuntimeObject* L_17;
		L_17 = LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_12 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_12), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_14 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_20);
		RuntimeObject* L_21 = __this->___MY_14;
		RuntimeObject* L_22 = __this->___LNCHHIT_12;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)209), L_22);
		RuntimeObject* L_23;
		L_23 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_17;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)207), (1.0f));
		RuntimeObject* L_25;
		L_25 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_20;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)219), (0.0f));
		RuntimeObject* L_27;
		L_27 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_23 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_23;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)176), (4.0f));
		RuntimeObject* L_29;
		L_29 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_25 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_29);
		RuntimeObject* L_30;
		L_30 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_27 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_27;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)194), (bool)1);
		__this->___temp_28 = L_32;
		RuntimeObject* L_33;
		L_33 = LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)462));
		__this->___PLAYER_ANGLE_29 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ANGLE_29), (void*)L_34);
		RuntimeObject* L_35 = __this->___PLAYER_ANGLE_29;
		NullCheck(L_35);
		float L_36;
		L_36 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), (bool)1);
		__this->___PLAYER_ANGLE_29_val = L_36;
		RuntimeObject* L_37 = __this->___MY_25;
		float L_38 = __this->___PLAYER_ANGLE_29_val;
		float L_39;
		L_39 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)194), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_39, (0.5f))), (2.4000001f))))));
		RuntimeObject* L_40;
		L_40 = LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)-1258694892), (bool)1, (bool)1);
		__this->___LNCH1TEX_38 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH1TEX_38), (void*)L_42);
		RuntimeObject* L_43;
		L_43 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_40 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_40), (void*)L_43);
		RuntimeObject* L_44 = __this->___MY_40;
		RuntimeObject* L_45 = __this->___LNCH1TEX_38;
		NullCheck(L_44);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)164), L_45);
		RuntimeObject* L_46;
		L_46 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_43 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_43), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_43;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)172), (20.0f));
		RuntimeObject* L_48;
		L_48 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_46 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_48);
		RuntimeObject* L_49 = __this->___MY_46;
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)168), (0.600000024f));
		RuntimeObject* L_50;
		L_50 = LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_47 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_47), (void*)L_52);
		RuntimeObject* L_53;
		L_53 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_49 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_49), (void*)L_53);
		RuntimeObject* L_54 = __this->___MY_49;
		RuntimeObject* L_55 = __this->___BULLET_47;
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)199), L_55);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_56 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_56, NULL);
		V_0 = L_56;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_57 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_58 = L_57;
		RuntimeObject* L_59;
		L_59 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		NullCheck(L_58);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_58, L_59);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_60 = L_58;
		RuntimeObject* L_61;
		L_61 = LNCHHIDE_get_THERE_mB8154252B2806AFC671E6F7D9EC0F422F5779EFB_inline(__this, NULL);
		NullCheck(L_60);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_60, L_61);
		RuntimeObject* L_62;
		L_62 = LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline(__this, NULL);
		NullCheck(L_60);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_60, L_62);
		RuntimeObject* L_63;
		L_63 = LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_64 = V_0;
		NullCheck(L_63);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_64);
		float L_66;
		L_66 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_66;
		float L_67 = __this->___startTime1;
		float L_68;
		L_68 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)384), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_67, L_68));
		__this->____cursor = 1;
		goto IL_031b;
	}

IL_030e:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_69 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LNCHHIDE_set_Current_m1902C6ECCDA4E72444219BB99AA44FF7919A72E6_inline(__this, L_69, NULL);
		return (bool)1;
	}

IL_031b:
	{
		float L_70;
		L_70 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_71 = __this->___endTime1;
		if ((((float)L_70) < ((float)L_71)))
		{
			goto IL_030e;
		}
	}
	{
		LNCHHIDE_set_Current_m1902C6ECCDA4E72444219BB99AA44FF7919A72E6_inline(__this, NULL, NULL);
		RuntimeObject* L_72;
		L_72 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		__this->___MY_53 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_53), (void*)L_72);
		RuntimeObject* L_73 = __this->___MY_53;
		NullCheck(L_73);
		float L_74;
		L_74 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)173), (bool)1);
		__this->___temp_54 = L_74;
		float L_75 = __this->___temp_54;
		bool L_76;
		L_76 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_75, (9.0f), NULL);
		if (!L_76)
		{
			goto IL_039e;
		}
	}
	{
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_77 = (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88*)il2cpp_codegen_object_new(LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88_il2cpp_TypeInfo_var);
		LNCHWANDER__ctor_mFC142C0C2F1F94DF484FD5C10AC8DE54505AA2B5(L_77, NULL);
		V_1 = L_77;
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_78 = V_1;
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_79 = L_78;
		RuntimeObject* L_80;
		L_80 = LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_80);
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_81 = L_79;
		RuntimeObject* L_82;
		L_82 = LNCHHIDE_get_THERE_mB8154252B2806AFC671E6F7D9EC0F422F5779EFB_inline(__this, NULL);
		NullCheck(L_81);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_81, L_82);
		RuntimeObject* L_83;
		L_83 = LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline(__this, NULL);
		NullCheck(L_81);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_81, L_83);
		RuntimeObject* L_84;
		L_84 = LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline(__this, NULL);
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_85 = V_1;
		NullCheck(L_84);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_84, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_85);
		return (bool)0;
	}

IL_039e:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLISTEN_set_MY_mA43F570246BC56C3F614C2D1964CA52FC41697FC (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHLISTEN_get_THERE_m722701093708951D486A089FAF689D2A24491E10 (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLISTEN_set_THERE_m1DC28985F547A799282B3EAF5992C5DA8320BD31 (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHLISTEN_get__world_m9D40E1D4D94882ED10B8946C2A9F817323FBF11B (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLISTEN_set__world_mF37D299C9A106C1DE71D5F4CF69C6E3994134A99 (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHLISTEN_get_Current_m01D806D4E84CF66B37FEF0DC6481A06F3C69EF8D (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLISTEN_set_Current_m9F6B0A9B01AA7EBA5FA651F43465B0F57396517B (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLISTEN_Reset_mBA8A5EEFBC5F32F7B4117581AA6BF00DEC725AA7 (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLISTEN__ctor_mD2CFC2157D48B8661DE8F4FE121E8F6353105C94 (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLISTEN__ctor_m933C54AF2BE899117F76534E40C25676C49B7D5E (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHLISTEN_set_MY_mA43F570246BC56C3F614C2D1964CA52FC41697FC_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHLISTEN_set_THERE_m1DC28985F547A799282B3EAF5992C5DA8320BD31_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHLISTEN_set__world_mF37D299C9A106C1DE71D5F4CF69C6E3994134A99_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHLISTEN_MoveNext_m24EB9B0FFDD13F110CDD3E059A7514BD0BD5D90A (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = LNCHLISTEN_get__world_m9D40E1D4D94882ED10B8946C2A9F817323FBF11B_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)-122756454), (bool)1, (bool)1);
		__this->___CYCLELNCHATTACK_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLELNCHATTACK_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___CYCLELNCHATTACK_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = LNCHLISTEN_get__world_m9D40E1D4D94882ED10B8946C2A9F817323FBF11B_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___LNCHHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)207), (0.0f));
		RuntimeObject* L_19;
		L_19 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)219), (0.0f));
		RuntimeObject* L_21;
		L_21 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (0.0f));
		RuntimeObject* L_23;
		L_23 = LNCHLISTEN_get__world_m9D40E1D4D94882ED10B8946C2A9F817323FBF11B_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)-1258730829), (bool)1, (bool)1);
		__this->___LNCH0TEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH0TEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___LNCH0TEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.0f));
		RuntimeObject* L_31;
		L_31 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		__this->___MY_29 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_29;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)199), (RuntimeObject*)NULL);
		float L_33;
		L_33 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_33;
		float L_34 = __this->___startTime1;
		float L_35;
		L_35 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)120), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_34, L_35));
		__this->____cursor = 1;
		goto IL_01d9;
	}

IL_01cc:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_36 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LNCHLISTEN_set_Current_m9F6B0A9B01AA7EBA5FA651F43465B0F57396517B_inline(__this, L_36, NULL);
		return (bool)1;
	}

IL_01d9:
	{
		float L_37;
		L_37 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_38 = __this->___endTime1;
		if ((((float)L_37) < ((float)L_38)))
		{
			goto IL_01cc;
		}
	}
	{
		LNCHLISTEN_set_Current_m9F6B0A9B01AA7EBA5FA651F43465B0F57396517B_inline(__this, NULL, NULL);
		RuntimeObject* L_39;
		L_39 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		__this->___MY_33 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_33), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_33;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)173), (bool)1);
		__this->___temp_34 = L_41;
		float L_42 = __this->___temp_34;
		bool L_43;
		L_43 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_42, (9.0f), NULL);
		if (!L_43)
		{
			goto IL_025c;
		}
	}
	{
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_44 = (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88*)il2cpp_codegen_object_new(LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88_il2cpp_TypeInfo_var);
		LNCHWANDER__ctor_mFC142C0C2F1F94DF484FD5C10AC8DE54505AA2B5(L_44, NULL);
		V_0 = L_44;
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_45 = V_0;
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_46 = L_45;
		RuntimeObject* L_47;
		L_47 = LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline(__this, NULL);
		NullCheck(L_46);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_46, L_47);
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_48 = L_46;
		RuntimeObject* L_49;
		L_49 = LNCHLISTEN_get_THERE_m722701093708951D486A089FAF689D2A24491E10_inline(__this, NULL);
		NullCheck(L_48);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_48, L_49);
		RuntimeObject* L_50;
		L_50 = LNCHLISTEN_get__world_m9D40E1D4D94882ED10B8946C2A9F817323FBF11B_inline(__this, NULL);
		NullCheck(L_48);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_48, L_50);
		RuntimeObject* L_51;
		L_51 = LNCHLISTEN_get__world_m9D40E1D4D94882ED10B8946C2A9F817323FBF11B_inline(__this, NULL);
		LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* L_52 = V_0;
		NullCheck(L_51);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_51, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_52);
		return (bool)0;
	}

IL_025c:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634 (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLOOKFOR_set_MY_m5C70BFB75EBE6DDF9853729F8498ACC2AE7C58B0 (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHLOOKFOR_get_THERE_mAA3AF7B52832F3FD53F0FFBED3C49232F75C219E (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLOOKFOR_set_THERE_mC78AAC225D5046501821430AE90A5461C7A9AD31 (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHLOOKFOR_get__world_mC5E0AC58981DAB7272ED3421991685761B34725B (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLOOKFOR_set__world_m1E56ED1E440D04F43A768CFD3BDD0714FD6E6AD3 (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHLOOKFOR_get_Current_m50D4F79914A8DC80EDB446CE9B0D8F515A2832DB (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLOOKFOR_set_Current_m36D38986134FB0BEF3FAACC4507A0E096DC3D6A8 (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLOOKFOR_Reset_m157C177987EB5D01E34B81A2166815B367B2B317 (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLOOKFOR__ctor_m275F8760F6A6247B9F48BABB0BC353148133A289 (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHLOOKFOR__ctor_mF41FAFD769DE203F868E889211F740C679DCAD0B (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHLOOKFOR_set_MY_m5C70BFB75EBE6DDF9853729F8498ACC2AE7C58B0_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHLOOKFOR_set_THERE_mC78AAC225D5046501821430AE90A5461C7A9AD31_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHLOOKFOR_set__world_m1E56ED1E440D04F43A768CFD3BDD0714FD6E6AD3_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHLOOKFOR_MoveNext_m260DA36F95961588D989252FCB0C8AE4F0FAD7DF (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B6_0 = NULL;
	LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* G_B6_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* G_B5_1 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* G_B7_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
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
		L_6 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
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
		L_11 = LNCHLOOKFOR_get__world_mC5E0AC58981DAB7272ED3421991685761B34725B_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_8), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_10;
		RuntimeObject* L_16 = L_15;
		if (L_16)
		{
			G_B6_0 = L_16;
			G_B6_1 = __this;
			goto IL_00ac;
		}
		G_B5_0 = L_16;
		G_B5_1 = __this;
	}
	{
		G_B7_0 = ((RuntimeObject*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_00b8;
	}

IL_00ac:
	{
		NullCheck(G_B6_0);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B6_0, ((int32_t)199), (bool)1, (bool)1);
		G_B7_0 = L_17;
		G_B7_1 = G_B6_1;
	}

IL_00b8:
	{
		NullCheck(G_B7_1);
		G_B7_1->___temp_11 = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->___temp_11), (void*)G_B7_0);
		RuntimeObject* L_18 = __this->___temp_11;
		RuntimeObject* L_19 = __this->___FOLLOW_8;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_00d2;
		}
	}
	{
		return (bool)0;
	}

IL_00d2:
	{
		RuntimeObject* L_21;
		L_21 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_14 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_14;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)173), (bool)1);
		__this->___temp_15 = L_23;
		float L_24 = __this->___temp_15;
		bool L_25;
		L_25 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_24, (5.0f), NULL);
		if (!L_25)
		{
			goto IL_0109;
		}
	}
	{
		return (bool)0;
	}

IL_0109:
	{
		RuntimeObject* L_26;
		L_26 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_18 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_18;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_28;
		L_28 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_21 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_21;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_30;
		L_30 = LNCHLOOKFOR_get__world_mC5E0AC58981DAB7272ED3421991685761B34725B_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)687408584), (bool)1, (bool)1);
		__this->___LNCHSEARCH_22 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHSEARCH_22), (void*)L_32);
		RuntimeObject* L_33;
		L_33 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_24 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_33);
		RuntimeObject* L_34 = __this->___MY_24;
		RuntimeObject* L_35 = __this->___LNCHSEARCH_22;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)190), L_35);
		RuntimeObject* L_36;
		L_36 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_27 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_27;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)207), (0.0f));
		RuntimeObject* L_38;
		L_38 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_30 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_38);
		RuntimeObject* L_39 = __this->___MY_30;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)219), (0.0f));
		RuntimeObject* L_40;
		L_40 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_33 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_33), (void*)L_40);
		RuntimeObject* L_41 = __this->___MY_33;
		NullCheck(L_41);
		float L_42;
		L_42 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)202), (bool)1);
		__this->___temp_34 = L_42;
		float L_43 = __this->___temp_34;
		bool L_44;
		L_44 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_43, (40.0f), NULL);
		if (!L_44)
		{
			goto IL_0238;
		}
	}
	{
		RuntimeObject* L_45;
		L_45 = LNCHLOOKFOR_get__world_mC5E0AC58981DAB7272ED3421991685761B34725B_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_45);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)-214569699), (bool)1, (bool)1);
		__this->___LNCHFOLLOWATTACK_35 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHFOLLOWATTACK_35), (void*)L_47);
		RuntimeObject* L_48;
		L_48 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_37 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_37), (void*)L_48);
		RuntimeObject* L_49 = __this->___MY_37;
		RuntimeObject* L_50 = __this->___LNCHFOLLOWATTACK_35;
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)190), L_50);
	}

IL_0238:
	{
		RuntimeObject* L_51;
		L_51 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_40 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_40), (void*)L_51);
		RuntimeObject* L_52 = __this->___MY_40;
		NullCheck(L_52);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)176), (10.0f));
		RuntimeObject* L_53;
		L_53 = LNCHLOOKFOR_get__world_mC5E0AC58981DAB7272ED3421991685761B34725B_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_53);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)-1258694892), (bool)1, (bool)1);
		__this->___LNCH1TEX_41 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH1TEX_41), (void*)L_55);
		RuntimeObject* L_56;
		L_56 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_43 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_43), (void*)L_56);
		RuntimeObject* L_57 = __this->___MY_43;
		RuntimeObject* L_58 = __this->___LNCH1TEX_41;
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)164), L_58);
		RuntimeObject* L_59;
		L_59 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_46 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_46;
		NullCheck(L_60);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)168), (0.0f));
		RuntimeObject* L_61;
		L_61 = LNCHLOOKFOR_get__world_mC5E0AC58981DAB7272ED3421991685761B34725B_inline(__this, NULL);
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_61);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_47 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_47), (void*)L_63);
		RuntimeObject* L_64;
		L_64 = LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline(__this, NULL);
		__this->___MY_49 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_49), (void*)L_64);
		RuntimeObject* L_65 = __this->___MY_49;
		RuntimeObject* L_66 = __this->___BULLET_47;
		NullCheck(L_65);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)199), L_66);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOW_set_MY_m6F3D6DD260947046B51672DE112E991AD07532FF (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOW_get_THERE_m6A18AA78FDF3F1C8F77AAD60C4C9F7ED0CD46A1A (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOW_set_THERE_mC5584B71009D9BA8EB731D447F908F9C97CF4858 (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOW_get__world_m50825DDAFBCA38553B0C549E7E36C6561525723D (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOW_set__world_m1E4F5DB89E0DAF4ED0C71FECF5D15E19EC82C185 (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOW_get_Current_m727BF7A707BE387DAC8FA2E187207960C49FE4C1 (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOW_set_Current_mB300A24DB069FAAA2E4114BB5BD34CE3D3A054CA (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOW_Reset_m75F65828C08B2C48F151E905F000506B63073A16 (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOW__ctor_m50D2EF311AA209934B432DDE376AAFDF29161BEF (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOW__ctor_m2156CF8A1C6FE2575EBCAD64DA9CE4E517D968B3 (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHFOLLOW_set_MY_m6F3D6DD260947046B51672DE112E991AD07532FF_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHFOLLOW_set_THERE_mC5584B71009D9BA8EB731D447F908F9C97CF4858_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHFOLLOW_set__world_m1E4F5DB89E0DAF4ED0C71FECF5D15E19EC82C185_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHFOLLOW_MoveNext_m5CD502693D86784D113316D263C7E524ADF659A1 (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = LNCHFOLLOW_get__world_m50825DDAFBCA38553B0C549E7E36C6561525723D_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)-122756454), (bool)1, (bool)1);
		__this->___CYCLELNCHATTACK_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLELNCHATTACK_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___CYCLELNCHATTACK_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = LNCHFOLLOW_get__world_m50825DDAFBCA38553B0C549E7E36C6561525723D_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___LNCHHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)207), (1.0f));
		RuntimeObject* L_19;
		L_19 = LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)219), (0.0f));
		RuntimeObject* L_21;
		L_21 = LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (1.0f));
		RuntimeObject* L_23;
		L_23 = LNCHFOLLOW_get__world_m50825DDAFBCA38553B0C549E7E36C6561525723D_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)-1258694892), (bool)1, (bool)1);
		__this->___LNCH1TEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH1TEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___LNCH1TEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.400000006f));
		RuntimeObject* L_31;
		L_31 = LNCHFOLLOW_get__world_m50825DDAFBCA38553B0C549E7E36C6561525723D_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_27 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_27), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline(__this, NULL);
		__this->___MY_29 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_29;
		RuntimeObject* L_36 = __this->___FOLLOW_27;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)199), L_36);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_37 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_37, NULL);
		V_0 = L_37;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_38 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_39 = L_38;
		RuntimeObject* L_40;
		L_40 = LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = LNCHFOLLOW_get_THERE_m6A18AA78FDF3F1C8F77AAD60C4C9F7ED0CD46A1A_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = LNCHFOLLOW_get__world_m50825DDAFBCA38553B0C549E7E36C6561525723D_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = LNCHFOLLOW_get__world_m50825DDAFBCA38553B0C549E7E36C6561525723D_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_45 = V_0;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9 (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK_set_MY_m4817E16E88A8867C6BE2AA69DBE3A2A8A9E56AA5 (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOWATTACK_get_THERE_m0A25168F3CE4EEF6F5900EF6F7CE1A743F5F08B6 (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK_set_THERE_m6C51B576FACCE02BFF75E3190FBA293DE9F3F475 (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOWATTACK_get__world_mB21285301052D34D16B518880E585A12D1BBB231 (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK_set__world_m6A187908F0A346B87042243F90ADA1458156985D (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOWATTACK_get_Current_mF5956C08D9780A7F74E7B192BCFBB35DEB7D17A1 (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK_set_Current_m14A43658E71BD6685DE26036C3ECBB537552C0BC (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK_Reset_mFF32F04222EE1BA5FD4E3CB0BF51269D0EA8DBD0 (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK__ctor_m7C19A2158D0925A63FA649409F191FCC6BE32931 (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK__ctor_mC7B26C8B8CDC2A916390159708CA65758C32C973 (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHFOLLOWATTACK_set_MY_m4817E16E88A8867C6BE2AA69DBE3A2A8A9E56AA5_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHFOLLOWATTACK_set_THERE_m6C51B576FACCE02BFF75E3190FBA293DE9F3F475_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHFOLLOWATTACK_set__world_m6A187908F0A346B87042243F90ADA1458156985D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHFOLLOWATTACK_MoveNext_mAB32E1773F954FAB70912CA625BCF1A435627E36 (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = LNCHFOLLOWATTACK_get__world_mB21285301052D34D16B518880E585A12D1BBB231_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)147341967), (bool)1, (bool)1);
		__this->___CYCLELNCHSHOOT_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLELNCHSHOOT_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___CYCLELNCHSHOOT_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = LNCHFOLLOWATTACK_get__world_mB21285301052D34D16B518880E585A12D1BBB231_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___LNCHHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)207), (1.0f));
		RuntimeObject* L_19;
		L_19 = LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)219), (0.0f));
		RuntimeObject* L_21;
		L_21 = LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (2.0f));
		RuntimeObject* L_23;
		L_23 = LNCHFOLLOWATTACK_get__world_mB21285301052D34D16B518880E585A12D1BBB231_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)-1258694892), (bool)1, (bool)1);
		__this->___LNCH1TEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH1TEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___LNCH1TEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.400000006f));
		RuntimeObject* L_31;
		L_31 = LNCHFOLLOWATTACK_get__world_mB21285301052D34D16B518880E585A12D1BBB231_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_27 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_27), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline(__this, NULL);
		__this->___MY_29 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_29;
		RuntimeObject* L_36 = __this->___FOLLOW_27;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)199), L_36);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_37 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_37, NULL);
		V_0 = L_37;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_38 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_39 = L_38;
		RuntimeObject* L_40;
		L_40 = LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = LNCHFOLLOWATTACK_get_THERE_m0A25168F3CE4EEF6F5900EF6F7CE1A743F5F08B6_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = LNCHFOLLOWATTACK_get__world_mB21285301052D34D16B518880E585A12D1BBB231_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = LNCHFOLLOWATTACK_get__world_mB21285301052D34D16B518880E585A12D1BBB231_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_45 = V_0;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7 (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHAIM_set_MY_mEBAA1B69995F94BAEE3ACFA161303435CDCFFB65 (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHAIM_get_THERE_mAED9658A66A8617A8E757E57581A48A79AA1C166 (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHAIM_set_THERE_m62F5436526791AC1DDFD1B1038C6150388AC5EC8 (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHAIM_get__world_m6F7144DA2B8BF3C90C84250D322578D8D81ECE8F (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHAIM_set__world_m64F84993209AB0DD4B61E7C70509C33221143D56 (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHAIM_get_Current_m1D0979CB1F232750B99BE74A403AADA81151DD58 (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHAIM_set_Current_m82A937A99BE7EF00049ED7E35E4FD47878117519 (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHAIM_Reset_mD5CCFE4C6EBBFE480CEE7BAF22785389B204F9EA (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHAIM__ctor_mC29D7765E4EB239CC42B0E9130BA3C674DF28FE0 (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHAIM__ctor_m8A8968617EBCDBAA79F920DD78F0DDF82DD848B7 (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHAIM_set_MY_mEBAA1B69995F94BAEE3ACFA161303435CDCFFB65_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHAIM_set_THERE_m62F5436526791AC1DDFD1B1038C6150388AC5EC8_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHAIM_set__world_m64F84993209AB0DD4B61E7C70509C33221143D56_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHAIM_MoveNext_mEE5AD44019B68406938785EFEAA6B64C0EFD1033 (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = LNCHAIM_get__world_m6F7144DA2B8BF3C90C84250D322578D8D81ECE8F_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)1452610271), (bool)1, (bool)1);
		__this->___LNCHSHOOT_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHSHOOT_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___LNCHSHOOT_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = LNCHAIM_get__world_m6F7144DA2B8BF3C90C84250D322578D8D81ECE8F_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___LNCHHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)207), (0.0f));
		RuntimeObject* L_19;
		L_19 = LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)219), (0.0f));
		RuntimeObject* L_21;
		L_21 = LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (3.0f));
		RuntimeObject* L_23;
		L_23 = LNCHAIM_get__world_m6F7144DA2B8BF3C90C84250D322578D8D81ECE8F_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)1414414359), (bool)1, (bool)1);
		__this->___LNCH3ATEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH3ATEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___LNCH3ATEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.0f));
		RuntimeObject* L_31;
		L_31 = LNCHAIM_get__world_m6F7144DA2B8BF3C90C84250D322578D8D81ECE8F_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_27 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_27), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline(__this, NULL);
		__this->___MY_29 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_29;
		RuntimeObject* L_36 = __this->___FOLLOW_27;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)199), L_36);
		LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* L_37 = (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D*)il2cpp_codegen_object_new(LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D_il2cpp_TypeInfo_var);
		LNCHSHOUT__ctor_m6DCDFC4426614DE507EE0D7C1C16A5ED8671ECED(L_37, NULL);
		V_0 = L_37;
		LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* L_38 = V_0;
		LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* L_39 = L_38;
		RuntimeObject* L_40;
		L_40 = LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = LNCHAIM_get_THERE_mAED9658A66A8617A8E757E57581A48A79AA1C166_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = LNCHAIM_get__world_m6F7144DA2B8BF3C90C84250D322578D8D81ECE8F_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = LNCHAIM_get__world_m6F7144DA2B8BF3C90C84250D322578D8D81ECE8F_inline(__this, NULL);
		LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* L_45 = V_0;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69 (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOOT_set_MY_mE050CD1CB5BC8813603A040BD84683B09AEA6D4F (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOOT_get_THERE_mF1235C1E0702E64FCD504E40167DAC58740F5B04 (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOOT_set_THERE_m125B5A53DFD4EE9CBE88E7FFE6D003851CE43CAF (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157 (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOOT_set__world_m5EB76E589E284419FD6C978849318244BFA30C11 (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOOT_get_Current_m33D58F06F6A749F8D55683426CB0CEE4103A047C (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOOT_set_Current_m9F557C6C1DDEFA3E4584D247B9463BD7E0DB973A (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOOT_Reset_mC1BEF8DE21B0D10B743DACE351297E1E2CE69AB4 (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOOT__ctor_m828A5060AE068742A305CC8BDCF21B3D21780A7A (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOOT__ctor_mB24EBB983B294316147E9962F2E6EEF65F216D19 (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHSHOOT_set_MY_mE050CD1CB5BC8813603A040BD84683B09AEA6D4F_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHSHOOT_set_THERE_m125B5A53DFD4EE9CBE88E7FFE6D003851CE43CAF_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHSHOOT_set__world_m5EB76E589E284419FD6C978849318244BFA30C11_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHSHOOT_MoveNext_m7BDB176C1F888741C59D0FD8D4F8DF61FC019EE0 (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* V_0 = NULL;
	FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* V_1 = NULL;
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_2 = NULL;
	LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* V_3 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)575087582), (bool)1, (bool)1);
		__this->___LNCHBACKOFF_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHBACKOFF_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___LNCHBACKOFF_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___LNCHHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)207), (0.0f));
		RuntimeObject* L_19;
		L_19 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_17 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_17;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)219), (0.0f));
		CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* L_21 = (CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC*)il2cpp_codegen_object_new(CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC_il2cpp_TypeInfo_var);
		CHOOSEMISSILE__ctor_mBD8DA1CB945C24768E365325E3B95DCD5C03A11D(L_21, NULL);
		V_0 = L_21;
		CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* L_22 = V_0;
		CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* L_23 = L_22;
		RuntimeObject* L_24;
		L_24 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_24);
		CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* L_25 = L_23;
		RuntimeObject* L_26;
		L_26 = LNCHSHOOT_get_THERE_mF1235C1E0702E64FCD504E40167DAC58740F5B04_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_26);
		RuntimeObject* L_27;
		L_27 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_27);
		RuntimeObject* L_28;
		L_28 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		CHOOSEMISSILE_t9B7243CFEFB5F305A365BB9BA339392CA97E26AC* L_29 = V_0;
		NullCheck(L_28);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_29);
		RuntimeObject* L_31;
		L_31 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_19 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_19), (void*)L_32);
		RuntimeObject* L_33 = __this->___MISSILE_19;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_33, (RuntimeObject*)NULL, NULL);
		if (!L_34)
		{
			goto IL_0160;
		}
	}
	{
		return (bool)0;
	}

IL_0160:
	{
		RuntimeObject* L_35;
		L_35 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_22 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_22;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)176), (3.0f));
		RuntimeObject* L_37;
		L_37 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)-1258623018), (bool)1, (bool)1);
		__this->___LNCH3TEX_23 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH3TEX_23), (void*)L_39);
		RuntimeObject* L_40;
		L_40 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_25 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_40);
		RuntimeObject* L_41 = __this->___MY_25;
		RuntimeObject* L_42 = __this->___LNCH3TEX_23;
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)164), L_42);
		RuntimeObject* L_43;
		L_43 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_28 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_28), (void*)L_43);
		RuntimeObject* L_44 = __this->___MY_28;
		NullCheck(L_44);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)168), (0.0f));
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_45 = (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5*)il2cpp_codegen_object_new(FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0(L_45, NULL);
		V_1 = L_45;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_46 = V_1;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_47 = L_46;
		RuntimeObject* L_48;
		L_48 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_49 = L_47;
		RuntimeObject* L_50;
		L_50 = LNCHSHOOT_get_THERE_mF1235C1E0702E64FCD504E40167DAC58740F5B04_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		RuntimeObject* L_51;
		L_51 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_51);
		RuntimeObject* L_52;
		L_52 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_53 = V_1;
		NullCheck(L_52);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_53);
		RuntimeObject* L_55;
		L_55 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_55);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_56, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_29 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_29), (void*)L_57);
		RuntimeObject* L_58;
		L_58 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_31 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_58);
		RuntimeObject* L_59 = __this->___MY_31;
		RuntimeObject* L_60 = __this->___FOLLOW_29;
		NullCheck(L_59);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, ((int32_t)199), L_60);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_61 = (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511*)il2cpp_codegen_object_new(LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D(L_61, NULL);
		V_2 = L_61;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_62 = V_2;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_63 = L_62;
		RuntimeObject* L_64;
		L_64 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		NullCheck(L_63);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_63, L_64);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_65 = L_63;
		RuntimeObject* L_66;
		L_66 = LNCHSHOOT_get_THERE_mF1235C1E0702E64FCD504E40167DAC58740F5B04_inline(__this, NULL);
		NullCheck(L_65);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_65, L_66);
		RuntimeObject* L_67;
		L_67 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_65);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_65, L_67);
		RuntimeObject* L_68;
		L_68 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_69 = V_2;
		NullCheck(L_68);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_68, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_69);
		RuntimeObject* L_71;
		L_71 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_34 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_34), (void*)L_71);
		RuntimeObject* L_72 = __this->___MY_34;
		NullCheck(L_72);
		float L_73;
		L_73 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)181), (bool)1);
		__this->___temp_35 = L_73;
		float L_74 = __this->___temp_35;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_74, (0.0f), NULL);
		if (L_75)
		{
			goto IL_0874;
		}
	}
	{
		RuntimeObject* L_76;
		L_76 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_76, 5, ((int32_t)217512507));
		__this->___DISTZ_36 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_36), (void*)L_77);
		RuntimeObject* L_78;
		L_78 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_78);
		RuntimeObject* L_79;
		L_79 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_78, 5, ((int32_t)217512507));
		__this->___DISTZ_37 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_37), (void*)L_79);
		RuntimeObject* L_80 = __this->___DISTZ_37;
		NullCheck(L_80);
		float L_81;
		L_81 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_80, ((int32_t)231), (bool)1);
		__this->___DISTZ_37_val = L_81;
		RuntimeObject* L_82;
		L_82 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_82, 5, ((int32_t)567));
		__this->___FLOOR_HGT_38 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FLOOR_HGT_38), (void*)L_83);
		RuntimeObject* L_84 = __this->___FLOOR_HGT_38;
		NullCheck(L_84);
		float L_85;
		L_85 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_84, ((int32_t)231), (bool)1);
		__this->___FLOOR_HGT_38_val = L_85;
		RuntimeObject* L_86;
		L_86 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_41 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_41), (void*)L_86);
		RuntimeObject* L_87 = __this->___MY_41;
		NullCheck(L_87);
		float L_88;
		L_88 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_87, ((int32_t)200), (bool)1);
		__this->___temp_42 = L_88;
		RuntimeObject* L_89 = __this->___DISTZ_36;
		float L_90 = __this->___FLOOR_HGT_38_val;
		float L_91 = __this->___temp_42;
		NullCheck(L_89);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_90, L_91)));
		RuntimeObject* L_92;
		L_92 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_92);
		RuntimeObject* L_93;
		L_93 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_92, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_45 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_45), (void*)L_93);
		RuntimeObject* L_94 = __this->___MISSILE_45;
		NullCheck(L_94);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)213), (1.0f));
		RuntimeObject* L_95;
		L_95 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_95, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_48 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_48), (void*)L_96);
		RuntimeObject* L_97 = __this->___MISSILE_48;
		NullCheck(L_97);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_97, ((int32_t)168), (3.0f));
		RuntimeObject* L_98;
		L_98 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_98);
		RuntimeObject* L_99;
		L_99 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_98, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_51 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_51), (void*)L_99);
		RuntimeObject* L_100 = __this->___MISSILE_51;
		NullCheck(L_100);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)169), (0.100000001f));
		RuntimeObject* L_101;
		L_101 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_54 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_54), (void*)L_101);
		RuntimeObject* L_102 = __this->___MY_54;
		NullCheck(L_102);
		float L_103;
		L_103 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)202), (bool)1);
		__this->___temp_55 = L_103;
		float L_104 = __this->___temp_55;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_105;
		L_105 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_104, (0.0f), NULL);
		if (L_105)
		{
			goto IL_04ea;
		}
	}
	{
		RuntimeObject* L_106;
		L_106 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_106, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_57 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_57), (void*)L_107);
		RuntimeObject* L_108;
		L_108 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_108);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_108, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_59 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_59), (void*)L_109);
		RuntimeObject* L_110 = __this->___MISSILE_59;
		NullCheck(L_110);
		float L_111;
		L_111 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)169), (bool)1);
		__this->___temp_60 = L_111;
		RuntimeObject* L_112;
		L_112 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_112);
		RuntimeObject* L_113;
		L_113 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_112, 5, ((int32_t)217512507));
		__this->___DISTZ_61 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_61), (void*)L_113);
		RuntimeObject* L_114 = __this->___DISTZ_61;
		NullCheck(L_114);
		float L_115;
		L_115 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)231), (bool)1);
		__this->___DISTZ_61_val = L_115;
		RuntimeObject* L_116;
		L_116 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_64 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_64), (void*)L_116);
		RuntimeObject* L_117 = __this->___MY_64;
		NullCheck(L_117);
		float L_118;
		L_118 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_117, ((int32_t)202), (bool)1);
		__this->___temp_65 = L_118;
		RuntimeObject* L_119 = __this->___MISSILE_57;
		float L_120 = __this->___DISTZ_61_val;
		float L_121 = __this->___temp_65;
		NullCheck(L_119);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_119, ((int32_t)169), ((float)(L_120/L_121)));
	}

IL_04ea:
	{
		RuntimeObject* L_122;
		L_122 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_67 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_67), (void*)L_122);
		RuntimeObject* L_123 = __this->___MY_67;
		NullCheck(L_123);
		float L_124;
		L_124 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)195), (bool)1);
		__this->___temp_68 = L_124;
		RuntimeObject* L_125;
		L_125 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_125);
		RuntimeObject* L_126;
		L_126 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_125, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_70 = L_126;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_70), (void*)L_126);
		RuntimeObject* L_127 = __this->___MISSILE_70;
		float L_128 = __this->___temp_68;
		NullCheck(L_127);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_127, ((int32_t)195), L_128);
		RuntimeObject* L_129;
		L_129 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_72 = L_129;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_72), (void*)L_129);
		RuntimeObject* L_130 = __this->___MY_72;
		NullCheck(L_130);
		float L_131;
		L_131 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_130, ((int32_t)196), (bool)1);
		__this->___temp_73 = L_131;
		RuntimeObject* L_132;
		L_132 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_132);
		RuntimeObject* L_133;
		L_133 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_132, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_75 = L_133;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_75), (void*)L_133);
		RuntimeObject* L_134 = __this->___MISSILE_75;
		float L_135 = __this->___temp_73;
		NullCheck(L_134);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_134, ((int32_t)196), L_135);
		RuntimeObject* L_136;
		L_136 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_77 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_77), (void*)L_136);
		RuntimeObject* L_137 = __this->___MY_77;
		NullCheck(L_137);
		float L_138;
		L_138 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_137, ((int32_t)194), (bool)1);
		__this->___temp_78 = L_138;
		RuntimeObject* L_139;
		L_139 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_139);
		RuntimeObject* L_140;
		L_140 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_139, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_80 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_80), (void*)L_140);
		RuntimeObject* L_141 = __this->___MISSILE_80;
		float L_142 = __this->___temp_78;
		NullCheck(L_141);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)194), L_142);
		RuntimeObject* L_143;
		L_143 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_143);
		RuntimeObject* L_144;
		L_144 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_143, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_82 = L_144;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_82), (void*)L_144);
		RuntimeObject* L_145;
		L_145 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_145);
		RuntimeObject* L_146;
		L_146 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_145, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_84 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_84), (void*)L_146);
		RuntimeObject* L_147 = __this->___MISSILE_84;
		NullCheck(L_147);
		float L_148;
		L_148 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_147, ((int32_t)165), (bool)1);
		__this->___temp_85 = L_148;
		RuntimeObject* L_149;
		L_149 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		__this->___MY_87 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_87), (void*)L_149);
		RuntimeObject* L_150 = __this->___MY_87;
		NullCheck(L_150);
		float L_151;
		L_151 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_150, ((int32_t)200), (bool)1);
		__this->___temp_88 = L_151;
		RuntimeObject* L_152 = __this->___MISSILE_82;
		float L_153 = __this->___temp_88;
		NullCheck(L_152);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_152, ((int32_t)165), ((float)il2cpp_codegen_add(L_153, (3.20000005f))));
		RuntimeObject* L_154;
		L_154 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_154);
		RuntimeObject* L_155;
		L_155 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_154);
		NullCheck(L_155);
		RuntimeObject* L_156;
		L_156 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_155, ((int32_t)1181881291), (bool)1, (bool)1);
		__this->___MISS1TEX_91 = L_156;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISS1TEX_91), (void*)L_156);
		RuntimeObject* L_157;
		L_157 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_157);
		RuntimeObject* L_158;
		L_158 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_157, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_93 = L_158;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_93), (void*)L_158);
		RuntimeObject* L_159 = __this->___MISSILE_93;
		RuntimeObject* L_160 = __this->___MISS1TEX_91;
		NullCheck(L_159);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_159, ((int32_t)164), L_160);
		RuntimeObject* L_161;
		L_161 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_161);
		RuntimeObject* L_162;
		L_162 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_161);
		NullCheck(L_162);
		RuntimeObject* L_163;
		L_163 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_162, ((int32_t)-425949196), (bool)1, (bool)1);
		__this->___EXPLODEMISSILE_94 = L_163;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLODEMISSILE_94), (void*)L_163);
		RuntimeObject* L_164;
		L_164 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_164);
		RuntimeObject* L_165;
		L_165 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_164, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_96 = L_165;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_96), (void*)L_165);
		RuntimeObject* L_166 = __this->___MISSILE_96;
		RuntimeObject* L_167 = __this->___EXPLODEMISSILE_94;
		NullCheck(L_166);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_166, ((int32_t)209), L_167);
		RuntimeObject* L_168;
		L_168 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_168);
		RuntimeObject* L_169;
		L_169 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_168);
		NullCheck(L_169);
		RuntimeObject* L_170;
		L_170 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_169, ((int32_t)-425949196), (bool)1, (bool)1);
		__this->___EXPLODEMISSILE_97 = L_170;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLODEMISSILE_97), (void*)L_170);
		RuntimeObject* L_171;
		L_171 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_171);
		RuntimeObject* L_172;
		L_172 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_171, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_99 = L_172;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_99), (void*)L_172);
		RuntimeObject* L_173 = __this->___MISSILE_99;
		RuntimeObject* L_174 = __this->___EXPLODEMISSILE_97;
		NullCheck(L_173);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_173, ((int32_t)192), L_174);
		RuntimeObject* L_175;
		L_175 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_175);
		RuntimeObject* L_176;
		L_176 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_175);
		NullCheck(L_176);
		RuntimeObject* L_177;
		L_177 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_176, ((int32_t)-1050000571), (bool)1, (bool)1);
		__this->___EXPLODETARGET_100 = L_177;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLODETARGET_100), (void*)L_177);
		RuntimeObject* L_178;
		L_178 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_178);
		RuntimeObject* L_179;
		L_179 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_178, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_102 = L_179;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_102), (void*)L_179);
		RuntimeObject* L_180 = __this->___MISSILE_102;
		RuntimeObject* L_181 = __this->___EXPLODETARGET_100;
		NullCheck(L_180);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_180, ((int32_t)191), L_181);
		RuntimeObject* L_182;
		L_182 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_182);
		RuntimeObject* L_183;
		L_183 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_182);
		NullCheck(L_183);
		RuntimeObject* L_184;
		L_184 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_183, ((int32_t)1530892122), (bool)1, (bool)1);
		__this->___AIMMISSILE_103 = L_184;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AIMMISSILE_103), (void*)L_184);
		RuntimeObject* L_185;
		L_185 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_185, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_105 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_105), (void*)L_186);
		RuntimeObject* L_187 = __this->___MISSILE_105;
		RuntimeObject* L_188 = __this->___AIMMISSILE_103;
		NullCheck(L_187);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_187, ((int32_t)189), L_188);
		RuntimeObject* L_189;
		L_189 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_189);
		RuntimeObject* L_190;
		L_190 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_189, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_108 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_108), (void*)L_190);
		RuntimeObject* L_191 = __this->___MISSILE_108;
		NullCheck(L_191);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_191, ((int32_t)204), (0.0f));
		RuntimeObject* L_192;
		L_192 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_192);
		RuntimeObject* L_193;
		L_193 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_192);
		NullCheck(L_193);
		RuntimeObject* L_194;
		L_194 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_193, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_109 = L_194;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_109), (void*)L_194);
		RuntimeObject* L_195;
		L_195 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_195);
		RuntimeObject* L_196;
		L_196 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_195, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_111 = L_196;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_111), (void*)L_196);
		RuntimeObject* L_197 = __this->___MISSILE_111;
		RuntimeObject* L_198 = __this->___BULLET_109;
		NullCheck(L_197);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_197, ((int32_t)199), L_198);
		RuntimeObject* L_199;
		L_199 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_199);
		RuntimeObject* L_200;
		L_200 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_199, ((int32_t)-614911197), (bool)0);
		__this->___MISSILE_114 = L_200;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILE_114), (void*)L_200);
		RuntimeObject* L_201 = __this->___MISSILE_114;
		NullCheck(L_201);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_201, ((int32_t)206), (1.0f));
		return (bool)0;
	}

IL_0874:
	{
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_202 = (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581*)il2cpp_codegen_object_new(LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581_il2cpp_TypeInfo_var);
		LNCHFOLLOWATTACK__ctor_m7C19A2158D0925A63FA649409F191FCC6BE32931(L_202, NULL);
		V_3 = L_202;
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_203 = V_3;
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_204 = L_203;
		RuntimeObject* L_205;
		L_205 = LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline(__this, NULL);
		NullCheck(L_204);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_204, L_205);
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_206 = L_204;
		RuntimeObject* L_207;
		L_207 = LNCHSHOOT_get_THERE_mF1235C1E0702E64FCD504E40167DAC58740F5B04_inline(__this, NULL);
		NullCheck(L_206);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_206, L_207);
		RuntimeObject* L_208;
		L_208 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		NullCheck(L_206);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_206, L_208);
		RuntimeObject* L_209;
		L_209 = LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline(__this, NULL);
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_210 = V_3;
		NullCheck(L_209);
		RuntimeObject* L_211;
		L_211 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_209, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_210);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4 (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHESCAPE_set_MY_m463C80D13E7FAD77220910A5FD973B3D704612BF (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHESCAPE_get_THERE_m6B95F8EBB4ECDA1441DB1C1505DA43B9079CD566 (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHESCAPE_set_THERE_m9229F5E87CE2A40613A2F70EC13A700CD0A47F6F (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHESCAPE_get__world_m8FE87BEBE042D72CBC162224ED3D06089F954A48 (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHESCAPE_set__world_mCB4CAB73A8DEA73E4B91E9947D7CAA76BDC8AE25 (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHESCAPE_get_Current_m81B67861277A70A5F433F209B055E0835803AA3E (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHESCAPE_set_Current_mB07BCF4BBD3991ADC874F0467935526271BC0344 (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHESCAPE_Reset_m2AB62EFE1041E249050AAB412D7C19F1F0847841 (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHESCAPE__ctor_mE3B50B29F1C3A287CC106495A049F2B842356FE3 (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHESCAPE__ctor_m6FA60E1C4BB5F9F72162A6ED7F671D7F0CFC2612 (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHESCAPE_set_MY_m463C80D13E7FAD77220910A5FD973B3D704612BF_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHESCAPE_set_THERE_m9229F5E87CE2A40613A2F70EC13A700CD0A47F6F_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHESCAPE_set__world_mCB4CAB73A8DEA73E4B91E9947D7CAA76BDC8AE25_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHESCAPE_MoveNext_m2AFBBBD2924BA328791BC342B1873FB711409908 (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = LNCHESCAPE_get__world_m8FE87BEBE042D72CBC162224ED3D06089F954A48_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-1257880372), (bool)1, (bool)1);
		__this->___LNCHHIDE_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIDE_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___LNCHHIDE_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)193), L_8);
		RuntimeObject* L_9;
		L_9 = LNCHESCAPE_get__world_m8FE87BEBE042D72CBC162224ED3D06089F954A48_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-256229764), (bool)1, (bool)1);
		__this->___CYCLELNCHHIDE_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLELNCHHIDE_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___CYCLELNCHHIDE_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = LNCHESCAPE_get__world_m8FE87BEBE042D72CBC162224ED3D06089F954A48_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_9), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		__this->___MY_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_11;
		RuntimeObject* L_20 = __this->___LNCHHIT_9;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)209), L_20);
		RuntimeObject* L_21;
		L_21 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		__this->___MY_14 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_14;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)207), (1.0f));
		RuntimeObject* L_23;
		L_23 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		__this->___MY_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_17;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)219), (0.0f));
		RuntimeObject* L_25;
		L_25 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		__this->___MY_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_20;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)176), (4.0f));
		RuntimeObject* L_27;
		L_27 = LNCHESCAPE_get__world_m8FE87BEBE042D72CBC162224ED3D06089F954A48_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)-1258694892), (bool)1, (bool)1);
		__this->___LNCH1TEX_21 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH1TEX_21), (void*)L_29);
		RuntimeObject* L_30;
		L_30 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		__this->___MY_23 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_23;
		RuntimeObject* L_32 = __this->___LNCH1TEX_21;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)164), L_32);
		RuntimeObject* L_33;
		L_33 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		__this->___MY_26 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_33);
		RuntimeObject* L_34 = __this->___MY_26;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)172), (30.0f));
		RuntimeObject* L_35;
		L_35 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		__this->___MY_29 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_29;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)168), (0.400000006f));
		RuntimeObject* L_37;
		L_37 = LNCHESCAPE_get__world_m8FE87BEBE042D72CBC162224ED3D06089F954A48_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)233967877), (bool)1, (bool)1);
		__this->___REPEL_30 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPEL_30), (void*)L_39);
		RuntimeObject* L_40;
		L_40 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		__this->___MY_32 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_40);
		RuntimeObject* L_41 = __this->___MY_32;
		RuntimeObject* L_42 = __this->___REPEL_30;
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)199), L_42);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_43 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_43, NULL);
		V_0 = L_43;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_44 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_45 = L_44;
		RuntimeObject* L_46;
		L_46 = LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_46);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_47 = L_45;
		RuntimeObject* L_48;
		L_48 = LNCHESCAPE_get_THERE_m6B95F8EBB4ECDA1441DB1C1505DA43B9079CD566_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		RuntimeObject* L_49;
		L_49 = LNCHESCAPE_get__world_m8FE87BEBE042D72CBC162224ED3D06089F954A48_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_49);
		RuntimeObject* L_50;
		L_50 = LNCHESCAPE_get__world_m8FE87BEBE042D72CBC162224ED3D06089F954A48_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_51 = V_0;
		NullCheck(L_50);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_50, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_51);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6 (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDEAD_set_MY_m03149359B71F521B015FE1E894E01503CD93FBA0 (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDEAD_get_THERE_m758DB48B847F9773882515BECE817DBE6C1A48A0 (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDEAD_set_THERE_m68A0A0F61C23D59F7AE705A269C0E6A90C60DF6C (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDEAD_get__world_mB6587C3EF8BC4AC6832C48350A7B8056838E1896 (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDEAD_set__world_m031608488847DC440645E9007553FEE70704F8FE (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDEAD_get_Current_mCA381622CB137E7CC1D1A84AF02069003E966130 (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDEAD_set_Current_mABE02CA243CD32F4D2FE71AF95E96AFC4303C8A0 (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDEAD_Reset_m1094951DE0A0B9E3C608965BB9828CACDFF6A691 (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDEAD__ctor_m3511D5680CD481BC6F06373F349C944F4E10B589 (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDEAD__ctor_m5B46AA2C5CC0B97FB3798D253470264EF7377E29 (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHDEAD_set_MY_m03149359B71F521B015FE1E894E01503CD93FBA0_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHDEAD_set_THERE_m68A0A0F61C23D59F7AE705A269C0E6A90C60DF6C_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHDEAD_set__world_m031608488847DC440645E9007553FEE70704F8FE_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHDEAD_MoveNext_m1A86FFE677F2D0EBAE5CF72B887DCE25D621B647 (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, const RuntimeMethod* method) 
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
		L_1 = LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline(__this, NULL);
		__this->___MY_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_11;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)190), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline(__this, NULL);
		__this->___MY_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_14;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)176), (9.0f));
		RuntimeObject* L_11;
		L_11 = LNCHDEAD_get__world_mB6587C3EF8BC4AC6832C48350A7B8056838E1896_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-1258407396), (bool)1, (bool)1);
		__this->___LNCH9TEX_15 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH9TEX_15), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline(__this, NULL);
		__this->___MY_17 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_17;
		RuntimeObject* L_16 = __this->___LNCH9TEX_15;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)164), L_16);
		RuntimeObject* L_17;
		L_17 = LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline(__this, NULL);
		__this->___MY_20 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_20;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)168), (0.0f));
		RuntimeObject* L_19;
		L_19 = LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline(__this, NULL);
		__this->___MY_23 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_23;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)199), (RuntimeObject*)NULL);
		RuntimeObject* L_21;
		L_21 = LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline(__this, NULL);
		__this->___MY_26 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_26;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)206), (1.0f));
		RuntimeObject* L_23;
		L_23 = LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline(__this, NULL);
		__this->___MY_29 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_29;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)207), (0.0f));
		RuntimeObject* L_25;
		L_25 = LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline(__this, NULL);
		__this->___MY_32 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_32;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)219), (1.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299 (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDIE_set_MY_m7371021A99CD044F345761854947D76F272DC75D (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDIE_get_THERE_m53C3ED4CFA6255A250A850142E05E227E8FACB7A (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDIE_set_THERE_m2A17EEAD3A1AE277037557ECA1D9B99C839C14C7 (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDIE_get__world_mB6BC7AB1F9D7F887DA9A3074F6D4853DC24BEC31 (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDIE_set__world_m2BB78538434B395BD93C2A27F282AA40364B16EE (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDIE_get_Current_m96ACC2C8834000965ED352C2BFBCD9FF3F8979BB (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDIE_set_Current_m41FBB4EAFA35DFA16941273EF962BC6C28209C5A (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDIE_Reset_mC95D30A7771B605C08F444C6F3EA60B28C8B7225 (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDIE__ctor_m352FD5776F9ED1D68C10A7C22FC48EC572AC945D (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDIE__ctor_m85CFBEC49AF55E2AD767B642011534B902ABDA27 (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHDIE_set_MY_m7371021A99CD044F345761854947D76F272DC75D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHDIE_set_THERE_m2A17EEAD3A1AE277037557ECA1D9B99C839C14C7_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHDIE_set__world_m2BB78538434B395BD93C2A27F282AA40364B16EE_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHDIE_MoveNext_m932D30FAED8D166DEA407664172417AB4CDED716 (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)173), (10.0f));
		RuntimeObject* L_3;
		L_3 = LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline(__this, NULL);
		__this->___MY_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_11;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = LNCHDIE_get__world_mB6BC7AB1F9D7F887DA9A3074F6D4853DC24BEC31_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-1258028576), (bool)1, (bool)1);
		__this->___LNCHDEAD_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHDEAD_12), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline(__this, NULL);
		__this->___MY_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_14;
		RuntimeObject* L_14 = __this->___LNCHDEAD_12;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline(__this, NULL);
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
		LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* L_20 = (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112*)il2cpp_codegen_object_new(LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112_il2cpp_TypeInfo_var);
		LNCHDROPKEY__ctor_m5AB5B055F556C1E0EC0677FAC59BA54684783A51(L_20, NULL);
		V_0 = L_20;
		LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* L_21 = V_0;
		LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* L_22 = L_21;
		RuntimeObject* L_23;
		L_23 = LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_23);
		LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* L_24 = L_22;
		RuntimeObject* L_25;
		L_25 = LNCHDIE_get_THERE_m53C3ED4CFA6255A250A850142E05E227E8FACB7A_inline(__this, NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_24, L_25);
		RuntimeObject* L_26;
		L_26 = LNCHDIE_get__world_mB6BC7AB1F9D7F887DA9A3074F6D4853DC24BEC31_inline(__this, NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_24, L_26);
		RuntimeObject* L_27;
		L_27 = LNCHDIE_get__world_mB6BC7AB1F9D7F887DA9A3074F6D4853DC24BEC31_inline(__this, NULL);
		LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* L_28 = V_0;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_28);
	}

IL_012b:
	{
		RuntimeObject* L_30;
		L_30 = LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline(__this, NULL);
		__this->___MY_21 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_21;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)176), (8.0f));
		RuntimeObject* L_32;
		L_32 = LNCHDIE_get__world_mB6BC7AB1F9D7F887DA9A3074F6D4853DC24BEC31_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)-1258443333), (bool)1, (bool)1);
		__this->___LNCH8TEX_22 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH8TEX_22), (void*)L_34);
		RuntimeObject* L_35;
		L_35 = LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline(__this, NULL);
		__this->___MY_24 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_24;
		RuntimeObject* L_37 = __this->___LNCH8TEX_22;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)164), L_37);
		RuntimeObject* L_38;
		L_38 = LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline(__this, NULL);
		__this->___MY_27 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_38);
		RuntimeObject* L_39 = __this->___MY_27;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)168), (0.0f));
		RuntimeObject* L_40;
		L_40 = LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3 (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHIMPLODE_set_MY_mD2FCB74402D3211E1C86A798D5E2BDE2BD86F5EA (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHIMPLODE_get_THERE_mC158E69FE47EF7157D6CC027B5EEAD1D7DF551C0 (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHIMPLODE_set_THERE_m943BBF49847BD0E365EA50B7A14A386E9588FFDC (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85 (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHIMPLODE_set__world_m796A87AF7D6B3803123A2589F09BAD8D01238098 (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHIMPLODE_get_Current_m4129E84DC3C6B253F02A26B9869823F63FB27C98 (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHIMPLODE_set_Current_mFD6660B450AEDA4BF43D89E86EB89AC1905BFC59 (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHIMPLODE_Reset_m390922DDFDA0B3FE3665045FC2CA9ED227F63545 (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHIMPLODE__ctor_m446179CCE3979CC2267A43DB98665701DC1BCB21 (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHIMPLODE__ctor_m5138FAB3F4638B047D9408C38A8AEE6497C54714 (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHIMPLODE_set_MY_mD2FCB74402D3211E1C86A798D5E2BDE2BD86F5EA_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHIMPLODE_set_THERE_m943BBF49847BD0E365EA50B7A14A386E9588FFDC_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHIMPLODE_set__world_m796A87AF7D6B3803123A2589F09BAD8D01238098_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHIMPLODE_MoveNext_m0FA3519A18A2DB41F102DB0B5EB696E5C448BC0E (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* V_0 = NULL;
	LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)217512505));
		__this->___DISTX_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
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
		L_7 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_4;
		NullCheck(L_8);
		float L_9;
		L_9 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)195), (bool)1);
		__this->___temp_5 = L_9;
		RuntimeObject* L_10;
		L_10 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
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
		L_14 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_14;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)195), (bool)1);
		__this->___temp_15 = L_16;
		RuntimeObject* L_17;
		L_17 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
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
		L_21 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_24 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_24;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)196), (bool)1);
		__this->___temp_25 = L_23;
		RuntimeObject* L_24;
		L_24 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
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
		L_28 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_34 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_34), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_34;
		NullCheck(L_29);
		float L_30;
		L_30 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)196), (bool)1);
		__this->___temp_35 = L_30;
		RuntimeObject* L_31;
		L_31 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
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
		L_44 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
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
		L_48 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
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
		L_53 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)217512507));
		__this->___DISTZ_43 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_43), (void*)L_54);
		RuntimeObject* L_55;
		L_55 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
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
		L_59 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_46 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_46;
		NullCheck(L_60);
		float L_61;
		L_61 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)165), (bool)1);
		__this->___temp_47 = L_61;
		RuntimeObject* L_62;
		L_62 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
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
		L_69 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
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
		L_78 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		NullCheck(L_77);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_77, L_78);
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_79 = L_77;
		RuntimeObject* L_80;
		L_80 = LNCHIMPLODE_get_THERE_mC158E69FE47EF7157D6CC027B5EEAD1D7DF551C0_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_80);
		RuntimeObject* L_81;
		L_81 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_81);
		RuntimeObject* L_82;
		L_82 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_83 = V_0;
		NullCheck(L_82);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_82, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_83);
		return (bool)0;
	}

IL_0364:
	{
		RuntimeObject* L_85;
		L_85 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_56 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_56), (void*)L_85);
		RuntimeObject* L_86 = __this->___MY_56;
		NullCheck(L_86);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)206), (1.0f));
		RuntimeObject* L_87;
		L_87 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_59 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_59), (void*)L_87);
		RuntimeObject* L_88 = __this->___MY_59;
		NullCheck(L_88);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)207), (0.0f));
		RuntimeObject* L_89;
		L_89 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_62 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_62), (void*)L_89);
		RuntimeObject* L_90 = __this->___MY_62;
		NullCheck(L_90);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_90, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_91;
		L_91 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_65 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_65), (void*)L_91);
		RuntimeObject* L_92 = __this->___MY_65;
		NullCheck(L_92);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_93;
		L_93 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_68 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_68), (void*)L_93);
		RuntimeObject* L_94 = __this->___MY_68;
		NullCheck(L_94);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_95;
		L_95 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_95);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_96, ((int32_t)1333438470), (bool)1, (bool)1);
		__this->___VANISHFORGOOD_69 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VANISHFORGOOD_69), (void*)L_97);
		RuntimeObject* L_98;
		L_98 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_71 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_71), (void*)L_98);
		RuntimeObject* L_99 = __this->___MY_71;
		RuntimeObject* L_100 = __this->___VANISHFORGOOD_69;
		NullCheck(L_99);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)190), L_100);
		RuntimeObject* L_101;
		L_101 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_74 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_74), (void*)L_101);
		RuntimeObject* L_102 = __this->___MY_74;
		NullCheck(L_102);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)176), (8.0f));
		RuntimeObject* L_103;
		L_103 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_103);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_104, ((int32_t)1410856596), (bool)1, (bool)1);
		__this->___LNCH0ATEX_75 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH0ATEX_75), (void*)L_105);
		RuntimeObject* L_106;
		L_106 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_77 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_77), (void*)L_106);
		RuntimeObject* L_107 = __this->___MY_77;
		RuntimeObject* L_108 = __this->___LNCH0ATEX_75;
		NullCheck(L_107);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)164), L_108);
		RuntimeObject* L_109;
		L_109 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_80 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_80), (void*)L_109);
		RuntimeObject* L_110 = __this->___MY_80;
		NullCheck(L_110);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)168), (0.0f));
		RuntimeObject* L_111;
		L_111 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		__this->___MY_83 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_83), (void*)L_111);
		RuntimeObject* L_112 = __this->___MY_83;
		NullCheck(L_112);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_112, ((int32_t)199), (RuntimeObject*)NULL);
		RuntimeObject* L_113;
		L_113 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
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
		LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* L_118 = (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112*)il2cpp_codegen_object_new(LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112_il2cpp_TypeInfo_var);
		LNCHDROPKEY__ctor_m5AB5B055F556C1E0EC0677FAC59BA54684783A51(L_118, NULL);
		V_1 = L_118;
		LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* L_119 = V_1;
		LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* L_120 = L_119;
		RuntimeObject* L_121;
		L_121 = LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline(__this, NULL);
		NullCheck(L_120);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_120, L_121);
		LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* L_122 = L_120;
		RuntimeObject* L_123;
		L_123 = LNCHIMPLODE_get_THERE_mC158E69FE47EF7157D6CC027B5EEAD1D7DF551C0_inline(__this, NULL);
		NullCheck(L_122);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_122, L_123);
		RuntimeObject* L_124;
		L_124 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
		NullCheck(L_122);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_122, L_124);
		RuntimeObject* L_125;
		L_125 = LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline(__this, NULL);
		LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* L_126 = V_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIT_set_MY_mD7433D4CC0D3F45758C3E9F688FFE9BB9056BCE0 (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIT_get_THERE_m7902507382AAD25484B039BAFE9632B69C0D4710 (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIT_set_THERE_mE067EE4209263516214F4116CAC37820E101C5B3 (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6 (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIT_set__world_m0610F7DBEA166BDCE77B6054E97B72A52F0E12C1 (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIT_get_Current_mD29F6FCBDFF32CFE51EF764934F33BF01E39D11F (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIT_set_Current_m4C932A5C008756DC6C473507FCCFA2B8E9BF7EF5 (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIT_Reset_m0C3764F74091E4D1DC7B07FC5177E86ED287D660 (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIT__ctor_mA06E3E3746578473F9AD4DD9A137B12880C78109 (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHHIT__ctor_m606F7CB255663B6788E377EAE165ACCC62A7B068 (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHHIT_set_MY_mD7433D4CC0D3F45758C3E9F688FFE9BB9056BCE0_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHHIT_set_THERE_mE067EE4209263516214F4116CAC37820E101C5B3_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHHIT_set__world_m0610F7DBEA166BDCE77B6054E97B72A52F0E12C1_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHHIT_MoveNext_m0BED3B9754691744F7CD0A4EE6309CEFB6603FDA (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* V_0 = NULL;
	LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* V_1 = NULL;
	LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* V_2 = NULL;
	LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* V_3 = NULL;
	LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* V_4 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* G_B12_1 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* G_B11_1 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* G_B13_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_06a4;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
			goto IL_08e9;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
			goto IL_033e;
		}
	}
	{
		RuntimeObject* L_13;
		L_13 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
			goto IL_08e9;
		}
	}
	{
		RuntimeObject* L_19;
		L_19 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)217512505));
		__this->___DISTX_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_6), (void*)L_20);
		RuntimeObject* L_21;
		L_21 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
		L_25 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_10 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_10;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)195), (bool)1);
		__this->___temp_11 = L_27;
		RuntimeObject* L_28;
		L_28 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
		L_32 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_20 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_20;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)195), (bool)1);
		__this->___temp_21 = L_34;
		RuntimeObject* L_35;
		L_35 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
		L_39 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_30 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_30;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)196), (bool)1);
		__this->___temp_31 = L_41;
		RuntimeObject* L_42;
		L_42 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
		L_46 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_40 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_40), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_40;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)196), (bool)1);
		__this->___temp_41 = L_48;
		RuntimeObject* L_49;
		L_49 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
		L_62 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
		L_66 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
		L_71 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
			goto IL_08e9;
		}
	}

IL_033e:
	{
		RuntimeObject* L_77;
		L_77 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
			goto IL_03ed;
		}
	}
	{
		RuntimeObject* L_83;
		L_83 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
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
		LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* L_88 = (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295*)il2cpp_codegen_object_new(LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295_il2cpp_TypeInfo_var);
		LNCHIMPLODE__ctor_m446179CCE3979CC2267A43DB98665701DC1BCB21(L_88, NULL);
		V_0 = L_88;
		LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* L_89 = V_0;
		LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* L_90 = L_89;
		RuntimeObject* L_91;
		L_91 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		NullCheck(L_90);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_90, L_91);
		LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* L_92 = L_90;
		RuntimeObject* L_93;
		L_93 = LNCHHIT_get_THERE_m7902507382AAD25484B039BAFE9632B69C0D4710_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_93);
		RuntimeObject* L_94;
		L_94 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_94);
		RuntimeObject* L_95;
		L_95 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* L_96 = V_0;
		NullCheck(L_95);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_95, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_96);
		return (bool)0;
	}

IL_03ed:
	{
		RuntimeObject* L_98;
		L_98 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_58 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_58), (void*)L_98);
		RuntimeObject* L_99;
		L_99 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_60 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_60), (void*)L_99);
		RuntimeObject* L_100 = __this->___MY_60;
		NullCheck(L_100);
		float L_101;
		L_101 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)173), (bool)1);
		__this->___temp_61 = L_101;
		RuntimeObject* L_102;
		L_102 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_63 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_63), (void*)L_102);
		RuntimeObject* L_103 = __this->___MY_63;
		NullCheck(L_103);
		float L_104;
		L_104 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_103, ((int32_t)173), (bool)1);
		__this->___temp_64 = L_104;
		RuntimeObject* L_105;
		L_105 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
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
		RuntimeObject* L_109 = __this->___MY_58;
		float L_110 = __this->___temp_64;
		float L_111 = __this->___SHOOT_FAC_66_val;
		float L_112;
		L_112 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_109);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_109, ((int32_t)173), ((float)il2cpp_codegen_add(L_110, ((float)(((float)il2cpp_codegen_multiply(L_111, ((float)il2cpp_codegen_add(L_112, (2.0f)))))/(3.0f))))));
		RuntimeObject* L_113;
		L_113 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_77 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_77), (void*)L_113);
		RuntimeObject* L_114 = __this->___MY_77;
		NullCheck(L_114);
		float L_115;
		L_115 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)173), (bool)1);
		__this->___temp_78 = L_115;
		float L_116 = __this->___temp_78;
		bool L_117;
		L_117 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_116, (5.0f), NULL);
		if (L_117)
		{
			goto IL_088e;
		}
	}
	{
		float L_118;
		L_118 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_119;
		L_119 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_118, (0.0500000007f), NULL);
		if (L_119)
		{
			goto IL_088e;
		}
	}
	{
		RuntimeObject* L_120;
		L_120 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_82 = L_120;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_82), (void*)L_120);
		RuntimeObject* L_121 = __this->___MY_82;
		RuntimeObject* L_122 = L_121;
		if (L_122)
		{
			G_B12_0 = L_122;
			G_B12_1 = __this;
			goto IL_0502;
		}
		G_B11_0 = L_122;
		G_B11_1 = __this;
	}
	{
		G_B13_0 = ((RuntimeObject*)(NULL));
		G_B13_1 = G_B11_1;
		goto IL_050e;
	}

IL_0502:
	{
		NullCheck(G_B12_0);
		RuntimeObject* L_123;
		L_123 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B12_0, ((int32_t)164), (bool)1, (bool)1);
		G_B13_0 = L_123;
		G_B13_1 = G_B12_1;
	}

IL_050e:
	{
		NullCheck(G_B13_1);
		G_B13_1->___temp_83 = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___temp_83), (void*)G_B13_0);
		RuntimeObject* L_124;
		L_124 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		RuntimeObject* L_125 = __this->___temp_83;
		NullCheck(L_124);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_124, ((int32_t)-1257041790), L_125);
		RuntimeObject* L_126;
		L_126 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_126);
		RuntimeObject* L_127;
		L_127 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_126);
		NullCheck(L_127);
		RuntimeObject* L_128;
		L_128 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_127, ((int32_t)-1258551144), (bool)1, (bool)1);
		__this->___LNCH5TEX_85 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH5TEX_85), (void*)L_128);
		RuntimeObject* L_129;
		L_129 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_87 = L_129;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_87), (void*)L_129);
		RuntimeObject* L_130 = __this->___MY_87;
		RuntimeObject* L_131 = __this->___LNCH5TEX_85;
		NullCheck(L_130);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_130, ((int32_t)164), L_131);
		RuntimeObject* L_132;
		L_132 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_90 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_90), (void*)L_132);
		RuntimeObject* L_133 = __this->___MY_90;
		NullCheck(L_133);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_134;
		L_134 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_93 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_93), (void*)L_134);
		RuntimeObject* L_135 = __this->___MY_93;
		NullCheck(L_135);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_135, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_136;
		L_136 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_96 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_96), (void*)L_136);
		RuntimeObject* L_137 = __this->___MY_96;
		NullCheck(L_137);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_137, ((int32_t)209), (RuntimeObject*)NULL);
		float L_138;
		L_138 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_139;
		L_139 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_138, (0.800000012f), NULL);
		if (L_139)
		{
			goto IL_0621;
		}
	}
	{
		RuntimeObject* L_140;
		L_140 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_140);
		RuntimeObject* L_141;
		L_141 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_140);
		NullCheck(L_141);
		RuntimeObject* L_142;
		L_142 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)1465931900), (bool)1, (bool)1);
		__this->___TROP05SND_99 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP05SND_99), (void*)L_142);
		RuntimeObject* L_143;
		L_143 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_101 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_101), (void*)L_143);
		RuntimeObject* L_144;
		L_144 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		RuntimeObject* L_145 = __this->___TROP05SND_99;
		RuntimeObject* L_146 = __this->___MY_101;
		NullCheck(L_144);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_144, L_145, (0.200000003f), L_146, (100.0f), (100.0f));
		goto IL_0670;
	}

IL_0621:
	{
		RuntimeObject* L_147;
		L_147 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_147);
		RuntimeObject* L_148;
		L_148 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_147);
		NullCheck(L_148);
		RuntimeObject* L_149;
		L_149 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_148, ((int32_t)1466974073), (bool)1, (bool)1);
		__this->___TROP11SND_102 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP11SND_102), (void*)L_149);
		RuntimeObject* L_150;
		L_150 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_104 = L_150;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_104), (void*)L_150);
		RuntimeObject* L_151;
		L_151 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		RuntimeObject* L_152 = __this->___TROP11SND_102;
		RuntimeObject* L_153 = __this->___MY_104;
		NullCheck(L_151);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_151, L_152, (0.200000003f), L_153, (100.0f), (100.0f));
	}

IL_0670:
	{
		float L_154;
		L_154 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_154;
		float L_155 = __this->___startTime1;
		float L_156;
		L_156 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_155, L_156));
		__this->____cursor = 1;
		goto IL_06a4;
	}

IL_0697:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_157 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		LNCHHIT_set_Current_m4C932A5C008756DC6C473507FCCFA2B8E9BF7EF5_inline(__this, L_157, NULL);
		return (bool)1;
	}

IL_06a4:
	{
		float L_158;
		L_158 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_159 = __this->___endTime1;
		if ((((float)L_158) < ((float)L_159)))
		{
			goto IL_0697;
		}
	}
	{
		LNCHHIT_set_Current_m4C932A5C008756DC6C473507FCCFA2B8E9BF7EF5_inline(__this, NULL, NULL);
		RuntimeObject* L_160;
		L_160 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_160);
		RuntimeObject* L_161;
		L_161 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_160);
		NullCheck(L_161);
		RuntimeObject* L_162;
		L_162 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_161, ((int32_t)156169763), (bool)1, (bool)1);
		__this->___LNCHESCAPE_106 = L_162;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHESCAPE_106), (void*)L_162);
		RuntimeObject* L_163;
		L_163 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_108 = L_163;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_108), (void*)L_163);
		RuntimeObject* L_164 = __this->___MY_108;
		RuntimeObject* L_165 = __this->___LNCHESCAPE_106;
		NullCheck(L_164);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_164, ((int32_t)192), L_165);
		RuntimeObject* L_166;
		L_166 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_166);
		RuntimeObject* L_167;
		L_167 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_166);
		NullCheck(L_167);
		RuntimeObject* L_168;
		L_168 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_167, ((int32_t)-1257880372), (bool)1, (bool)1);
		__this->___LNCHHIDE_109 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIDE_109), (void*)L_168);
		RuntimeObject* L_169;
		L_169 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_111 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_111), (void*)L_169);
		RuntimeObject* L_170 = __this->___MY_111;
		RuntimeObject* L_171 = __this->___LNCHHIDE_109;
		NullCheck(L_170);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_170, ((int32_t)193), L_171);
		RuntimeObject* L_172;
		L_172 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_172);
		RuntimeObject* L_173;
		L_173 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_172);
		NullCheck(L_173);
		RuntimeObject* L_174;
		L_174 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_173, ((int32_t)-1730073417), (bool)1, (bool)1);
		__this->___LNCHHIT_112 = L_174;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCHHIT_112), (void*)L_174);
		RuntimeObject* L_175;
		L_175 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_114 = L_175;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_114), (void*)L_175);
		RuntimeObject* L_176 = __this->___MY_114;
		RuntimeObject* L_177 = __this->___LNCHHIT_112;
		NullCheck(L_176);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_176, ((int32_t)209), L_177);
		RuntimeObject* L_178;
		L_178 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_178);
		RuntimeObject* L_179;
		L_179 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_178, ((int32_t)-1257041790), (bool)0);
		__this->___LNCH_TEX_115 = L_179;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LNCH_TEX_115), (void*)L_179);
		RuntimeObject* L_180;
		L_180 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_117 = L_180;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_117), (void*)L_180);
		RuntimeObject* L_181 = __this->___MY_117;
		RuntimeObject* L_182 = __this->___LNCH_TEX_115;
		NullCheck(L_181);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_181, ((int32_t)164), L_182);
		RuntimeObject* L_183;
		L_183 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_120 = L_183;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_120), (void*)L_183);
		RuntimeObject* L_184 = __this->___MY_120;
		NullCheck(L_184);
		float L_185;
		L_185 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_184, ((int32_t)173), (bool)1);
		__this->___temp_121 = L_185;
		float L_186 = __this->___temp_121;
		bool L_187;
		L_187 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_186, (4.0f), NULL);
		if (!L_187)
		{
			goto IL_081d;
		}
	}
	{
		LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* L_188 = (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2*)il2cpp_codegen_object_new(LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2_il2cpp_TypeInfo_var);
		LNCHHIDE__ctor_m5B1B231F2C2E4328FEBFF8B3F415C1868359CF07(L_188, NULL);
		V_1 = L_188;
		LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* L_189 = V_1;
		LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* L_190 = L_189;
		RuntimeObject* L_191;
		L_191 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		NullCheck(L_190);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_190, L_191);
		LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* L_192 = L_190;
		RuntimeObject* L_193;
		L_193 = LNCHHIT_get_THERE_m7902507382AAD25484B039BAFE9632B69C0D4710_inline(__this, NULL);
		NullCheck(L_192);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_192, L_193);
		RuntimeObject* L_194;
		L_194 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_192);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_192, L_194);
		RuntimeObject* L_195;
		L_195 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* L_196 = V_1;
		NullCheck(L_195);
		RuntimeObject* L_197;
		L_197 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_195, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_196);
		return (bool)0;
	}

IL_081d:
	{
		RuntimeObject* L_198;
		L_198 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_124 = L_198;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_124), (void*)L_198);
		RuntimeObject* L_199 = __this->___MY_124;
		NullCheck(L_199);
		float L_200;
		L_200 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_199, ((int32_t)176), (bool)1);
		__this->___temp_125 = L_200;
		float L_201 = __this->___temp_125;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_202;
		L_202 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_201, (4.0f), NULL);
		if (L_202)
		{
			goto IL_088c;
		}
	}
	{
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_203 = (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581*)il2cpp_codegen_object_new(LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581_il2cpp_TypeInfo_var);
		LNCHFOLLOWATTACK__ctor_m7C19A2158D0925A63FA649409F191FCC6BE32931(L_203, NULL);
		V_2 = L_203;
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_204 = V_2;
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_205 = L_204;
		RuntimeObject* L_206;
		L_206 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		NullCheck(L_205);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_205, L_206);
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_207 = L_205;
		RuntimeObject* L_208;
		L_208 = LNCHHIT_get_THERE_m7902507382AAD25484B039BAFE9632B69C0D4710_inline(__this, NULL);
		NullCheck(L_207);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_207, L_208);
		RuntimeObject* L_209;
		L_209 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_207);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_207, L_209);
		RuntimeObject* L_210;
		L_210 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_211 = V_2;
		NullCheck(L_210);
		RuntimeObject* L_212;
		L_212 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_210, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_211);
		return (bool)0;
	}

IL_088c:
	{
		return (bool)0;
	}

IL_088e:
	{
		RuntimeObject* L_213;
		L_213 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		__this->___MY_128 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_128), (void*)L_213);
		RuntimeObject* L_214 = __this->___MY_128;
		NullCheck(L_214);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_214, ((int32_t)173), (10.0f));
		LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* L_215 = (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4*)il2cpp_codegen_object_new(LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4_il2cpp_TypeInfo_var);
		LNCHDIE__ctor_m352FD5776F9ED1D68C10A7C22FC48EC572AC945D(L_215, NULL);
		V_3 = L_215;
		LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* L_216 = V_3;
		LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* L_217 = L_216;
		RuntimeObject* L_218;
		L_218 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		NullCheck(L_217);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_217, L_218);
		LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* L_219 = L_217;
		RuntimeObject* L_220;
		L_220 = LNCHHIT_get_THERE_m7902507382AAD25484B039BAFE9632B69C0D4710_inline(__this, NULL);
		NullCheck(L_219);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_219, L_220);
		RuntimeObject* L_221;
		L_221 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_219);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_219, L_221);
		RuntimeObject* L_222;
		L_222 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* L_223 = V_3;
		NullCheck(L_222);
		RuntimeObject* L_224;
		L_224 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_222, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_223);
		return (bool)0;
	}

IL_08e9:
	{
		LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* L_225 = (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614*)il2cpp_codegen_object_new(LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614_il2cpp_TypeInfo_var);
		LNCHTURN__ctor_m9A6FB590CE445BD244186C1B4FE6C7F1AB003A81(L_225, NULL);
		V_4 = L_225;
		LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* L_226 = V_4;
		LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* L_227 = L_226;
		RuntimeObject* L_228;
		L_228 = LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline(__this, NULL);
		NullCheck(L_227);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_227, L_228);
		LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* L_229 = L_227;
		RuntimeObject* L_230;
		L_230 = LNCHHIT_get_THERE_m7902507382AAD25484B039BAFE9632B69C0D4710_inline(__this, NULL);
		NullCheck(L_229);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_229, L_230);
		RuntimeObject* L_231;
		L_231 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		NullCheck(L_229);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_229, L_231);
		RuntimeObject* L_232;
		L_232 = LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline(__this, NULL);
		LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* L_233 = V_4;
		NullCheck(L_232);
		RuntimeObject* L_234;
		L_234 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_232, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_233);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDROPKEY_get_MY_m86AD63D560307DC9883834A794C66246EF10794A (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDROPKEY_set_MY_m44785A46369EA5F2EA9776686FA7668AF177CB21 (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDROPKEY_get_THERE_m4D87E013EFE1703E1F86F6CA29E57D8D5E2F52F7 (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDROPKEY_set_THERE_m19740D24DA2D560A4A510AB3B674151B4F222943 (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83 (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDROPKEY_set__world_m5A8432DF4612FA1D1D381C005C8DA56CBA7F95E2 (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHDROPKEY_get_Current_m4847F52C30089534D38A4AA97FB60A9EF6795AD9 (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDROPKEY_set_Current_m97F3E917B96B5727DBB060100EE58937341D3019 (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDROPKEY_Reset_m227607B3E1078595A1792148140FFFC8D75A1C80 (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDROPKEY__ctor_m5AB5B055F556C1E0EC0677FAC59BA54684783A51 (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHDROPKEY__ctor_m45FA05BE965A2C1B44618D8C199E89BBC89EA206 (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHDROPKEY_set_MY_m44785A46369EA5F2EA9776686FA7668AF177CB21_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHDROPKEY_set_THERE_m19740D24DA2D560A4A510AB3B674151B4F222943_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHDROPKEY_set__world_m5A8432DF4612FA1D1D381C005C8DA56CBA7F95E2_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHDROPKEY_MoveNext_m8643B0992CCC43ED6D62222827591FFF426223AB (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) 
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
		L_1 = LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_1), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_3), (void*)L_6);
		RuntimeObject* L_7 = __this->___KEY2TNG_3;
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)195), (bool)1);
		__this->___temp_4 = L_8;
		RuntimeObject* L_9;
		L_9 = LNCHDROPKEY_get_MY_m86AD63D560307DC9883834A794C66246EF10794A_inline(__this, NULL);
		__this->___MY_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_6;
		NullCheck(L_10);
		float L_11;
		L_11 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)195), (bool)1);
		__this->___temp_7 = L_11;
		RuntimeObject* L_12 = __this->___KEY2TNG_1;
		float L_13 = __this->___temp_7;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)195), L_13);
		RuntimeObject* L_14;
		L_14 = LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_9), (void*)L_16);
		RuntimeObject* L_17;
		L_17 = LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_11 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_11), (void*)L_19);
		RuntimeObject* L_20 = __this->___KEY2TNG_11;
		NullCheck(L_20);
		float L_21;
		L_21 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)196), (bool)1);
		__this->___temp_12 = L_21;
		RuntimeObject* L_22;
		L_22 = LNCHDROPKEY_get_MY_m86AD63D560307DC9883834A794C66246EF10794A_inline(__this, NULL);
		__this->___MY_14 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_14;
		NullCheck(L_23);
		float L_24;
		L_24 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)196), (bool)1);
		__this->___temp_15 = L_24;
		RuntimeObject* L_25 = __this->___KEY2TNG_9;
		float L_26 = __this->___temp_15;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)196), L_26);
		RuntimeObject* L_27;
		L_27 = LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_18 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_18), (void*)L_29);
		RuntimeObject* L_30 = __this->___KEY2TNG_18;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)213), (1.0f));
		RuntimeObject* L_31;
		L_31 = LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_20 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_20), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83_inline(__this, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_22 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_22), (void*)L_36);
		RuntimeObject* L_37 = __this->___KEY2TNG_22;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)165), (bool)1);
		__this->___temp_23 = L_38;
		RuntimeObject* L_39;
		L_39 = LNCHDROPKEY_get_MY_m86AD63D560307DC9883834A794C66246EF10794A_inline(__this, NULL);
		__this->___MY_25 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_25;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)200), (bool)1);
		__this->___temp_26 = L_41;
		RuntimeObject* L_42 = __this->___KEY2TNG_20;
		float L_43 = __this->___temp_26;
		NullCheck(L_42);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)165), ((float)il2cpp_codegen_subtract(L_43, (0.00999999978f))));
		RuntimeObject* L_44;
		L_44 = LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_31 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_31), (void*)L_46);
		RuntimeObject* L_47 = __this->___KEY2TNG_31;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)204), (0.0f));
		RuntimeObject* L_48;
		L_48 = LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)946520241), (bool)1, (bool)1);
		__this->___KEY2TNG_34 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2TNG_34), (void*)L_50);
		RuntimeObject* L_51 = __this->___KEY2TNG_34;
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)213), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHATTACK_get_MY_m93155D6BB0514564BBB60C82DBB376AAABD1301D (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHATTACK_set_MY_m67BAB95BCE14DDD0E607BCFCCEB3BAC0BF543729 (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHATTACK_get_THERE_m44EF1E1D883007C168CA971CF28E3A07C775C143 (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHATTACK_set_THERE_m4351E3749762055C1E5FC17F28664E269E16B61C (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHATTACK_set__world_mDD7655E8F31F7F5B5325D1E8B1BCC7DB6D5FCF9B (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHATTACK_get_Current_m8DE513A3A2211FBE806E20D2A3584B5A574FEB06 (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHATTACK_set_Current_m4A2E4E494A25A816B1634E1E914AFEA74A840739 (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHATTACK_Reset_m32B37F1A8580564DC225693C56976F41F8164B75 (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHATTACK__ctor_mA14069B28D140088806384B1F67B4AA058C47451 (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHATTACK__ctor_mF2C3234707782324D10259F81523BDFE9B9A7497 (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLELNCHATTACK_set_MY_m67BAB95BCE14DDD0E607BCFCCEB3BAC0BF543729_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLELNCHATTACK_set_THERE_m4351E3749762055C1E5FC17F28664E269E16B61C_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLELNCHATTACK_set__world_mDD7655E8F31F7F5B5325D1E8B1BCC7DB6D5FCF9B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLELNCHATTACK_MoveNext_mCD342D733FD6D0F65199DA360B1B352339DBA7DA (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* V_1 = NULL;
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_2 = NULL;
	LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* V_3 = NULL;
	LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* V_4 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_1 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_1, NULL);
		V_0 = L_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_2 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLELNCHATTACK_get_MY_m93155D6BB0514564BBB60C82DBB376AAABD1301D_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLELNCHATTACK_get_THERE_m44EF1E1D883007C168CA971CF28E3A07C775C143_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, 5, ((int32_t)-922693617));
		__this->___SHOT_SOUND_ON_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOT_SOUND_ON_1), (void*)L_12);
		RuntimeObject* L_13 = __this->___SHOT_SOUND_ON_1;
		NullCheck(L_13);
		float L_14;
		L_14 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)231), (bool)1);
		__this->___SHOT_SOUND_ON_1_val = L_14;
		float L_15 = __this->___SHOT_SOUND_ON_1_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_15, (0.0f), NULL);
		if (L_16)
		{
			goto IL_00b7;
		}
	}
	{
		LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* L_17 = (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A*)il2cpp_codegen_object_new(LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A_il2cpp_TypeInfo_var);
		LNCHLOOKFOR__ctor_m275F8760F6A6247B9F48BABB0BC353148133A289(L_17, NULL);
		V_1 = L_17;
		LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* L_18 = V_1;
		LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* L_19 = L_18;
		RuntimeObject* L_20;
		L_20 = CYCLELNCHATTACK_get_MY_m93155D6BB0514564BBB60C82DBB376AAABD1301D_inline(__this, NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_19, L_20);
		LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* L_21 = L_19;
		RuntimeObject* L_22;
		L_22 = CYCLELNCHATTACK_get_THERE_m44EF1E1D883007C168CA971CF28E3A07C775C143_inline(__this, NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_21, L_22);
		RuntimeObject* L_23;
		L_23 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_21, L_23);
		RuntimeObject* L_24;
		L_24 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* L_25 = V_1;
		NullCheck(L_24);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_25);
	}

IL_00b7:
	{
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_27 = (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511*)il2cpp_codegen_object_new(LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D(L_27, NULL);
		V_2 = L_27;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_28 = V_2;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_29 = L_28;
		RuntimeObject* L_30;
		L_30 = CYCLELNCHATTACK_get_MY_m93155D6BB0514564BBB60C82DBB376AAABD1301D_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_31 = L_29;
		RuntimeObject* L_32;
		L_32 = CYCLELNCHATTACK_get_THERE_m44EF1E1D883007C168CA971CF28E3A07C775C143_inline(__this, NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_31, L_32);
		RuntimeObject* L_33;
		L_33 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_31, L_33);
		RuntimeObject* L_34;
		L_34 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_35 = V_2;
		NullCheck(L_34);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_34, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_35);
		RuntimeObject* L_37;
		L_37 = CYCLELNCHATTACK_get_MY_m93155D6BB0514564BBB60C82DBB376AAABD1301D_inline(__this, NULL);
		__this->___MY_4 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_37);
		RuntimeObject* L_38 = __this->___MY_4;
		NullCheck(L_38);
		float L_39;
		L_39 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)181), (bool)1);
		__this->___temp_5 = L_39;
		float L_40 = __this->___temp_5;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_40, (0.0f), NULL);
		if (!L_41)
		{
			goto IL_0126;
		}
	}
	{
		return (bool)0;
	}

IL_0126:
	{
		RuntimeObject* L_42;
		L_42 = CYCLELNCHATTACK_get_MY_m93155D6BB0514564BBB60C82DBB376AAABD1301D_inline(__this, NULL);
		__this->___MY_8 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_42);
		RuntimeObject* L_43 = __this->___MY_8;
		NullCheck(L_43);
		float L_44;
		L_44 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)182), (bool)1);
		__this->___temp_9 = L_44;
		float L_45 = __this->___temp_9;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_45, (0.0f), NULL);
		if (!L_46)
		{
			goto IL_019d;
		}
	}
	{
		RuntimeObject* L_47;
		L_47 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_11 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_11), (void*)L_48);
		RuntimeObject* L_49 = __this->___GUN_ON_11;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)231), (bool)1);
		__this->___GUN_ON_11_val = L_50;
		float L_51 = __this->___GUN_ON_11_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_51, (0.0f), NULL);
		if (!L_52)
		{
			goto IL_019d;
		}
	}
	{
		return (bool)0;
	}

IL_019d:
	{
		RuntimeObject* L_53;
		L_53 = CYCLELNCHATTACK_get_MY_m93155D6BB0514564BBB60C82DBB376AAABD1301D_inline(__this, NULL);
		__this->___MY_14 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_53);
		RuntimeObject* L_54 = __this->___MY_14;
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)182), (1.0f));
		LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* L_55 = (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C*)il2cpp_codegen_object_new(LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C_il2cpp_TypeInfo_var);
		LNCHTALK__ctor_m45FA220D6FA3BC5EACC9EB71A00DE5D55DF24141(L_55, NULL);
		V_3 = L_55;
		LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* L_56 = V_3;
		LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* L_57 = L_56;
		RuntimeObject* L_58;
		L_58 = CYCLELNCHATTACK_get_MY_m93155D6BB0514564BBB60C82DBB376AAABD1301D_inline(__this, NULL);
		NullCheck(L_57);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_57, L_58);
		LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* L_59 = L_57;
		RuntimeObject* L_60;
		L_60 = CYCLELNCHATTACK_get_THERE_m44EF1E1D883007C168CA971CF28E3A07C775C143_inline(__this, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_59, L_60);
		RuntimeObject* L_61;
		L_61 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_59, L_61);
		RuntimeObject* L_62;
		L_62 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* L_63 = V_3;
		NullCheck(L_62);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_63);
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_65 = (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581*)il2cpp_codegen_object_new(LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581_il2cpp_TypeInfo_var);
		LNCHFOLLOWATTACK__ctor_m7C19A2158D0925A63FA649409F191FCC6BE32931(L_65, NULL);
		V_4 = L_65;
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_66 = V_4;
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_67 = L_66;
		RuntimeObject* L_68;
		L_68 = CYCLELNCHATTACK_get_MY_m93155D6BB0514564BBB60C82DBB376AAABD1301D_inline(__this, NULL);
		NullCheck(L_67);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_67, L_68);
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_69 = L_67;
		RuntimeObject* L_70;
		L_70 = CYCLELNCHATTACK_get_THERE_m44EF1E1D883007C168CA971CF28E3A07C775C143_inline(__this, NULL);
		NullCheck(L_69);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_69, L_70);
		RuntimeObject* L_71;
		L_71 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		NullCheck(L_69);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_69, L_71);
		RuntimeObject* L_72;
		L_72 = CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline(__this, NULL);
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_73 = V_4;
		NullCheck(L_72);
		RuntimeObject* L_74;
		L_74 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_72, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_73);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679 (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHHIDE_set_MY_m699C8FE939DFA0FE229BB897FC2247CA80156846 (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHHIDE_get_THERE_m692D7551B5D5F1DE85DD2D9D2B278CFDCCD3AF3F (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHHIDE_set_THERE_mD17AEE04EF50497007D9459520DDD86B75B7C72D (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHHIDE_get__world_m753251BEF470C800D2068045B2BCC4CC8C2A696F (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHHIDE_set__world_mBDC49D458521075C0682FF9DD0A2AECB52B3E7C1 (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHHIDE_get_Current_mD6F6F69BC1CD670ABD801C6FF2E20CEA707F4C47 (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHHIDE_set_Current_mABACAC397896CDB91FCC43E805863F70DA8D1384 (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHHIDE_Reset_m19BBD3A779FA666B37501C3128F71814ECC5FCF3 (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHHIDE__ctor_mA62A7C3D1E5B99A2156E190B3686AD3970D7B1FE (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHHIDE__ctor_mDC7CE84E39DC10508D8535971E44844F8D1B9B06 (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLELNCHHIDE_set_MY_m699C8FE939DFA0FE229BB897FC2247CA80156846_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLELNCHHIDE_set_THERE_mD17AEE04EF50497007D9459520DDD86B75B7C72D_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLELNCHHIDE_set__world_mBDC49D458521075C0682FF9DD0A2AECB52B3E7C1_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLELNCHHIDE_MoveNext_m3C969D6228F47158B77FD8C6B913C45FFE90F214 (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) 
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
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_0 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)205), (bool)1);
		__this->___temp_3 = L_3;
		float L_4 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_4, (0.0f), NULL);
		if (L_5)
		{
			goto IL_018b;
		}
	}
	{
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_6 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_6, NULL);
		V_0 = L_6;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_7 = V_0;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_8 = L_7;
		RuntimeObject* L_9;
		L_9 = CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_8, L_9);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_10 = L_8;
		RuntimeObject* L_11;
		L_11 = CYCLELNCHHIDE_get_THERE_m692D7551B5D5F1DE85DD2D9D2B278CFDCCD3AF3F_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12;
		L_12 = CYCLELNCHHIDE_get__world_m753251BEF470C800D2068045B2BCC4CC8C2A696F_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_12);
		RuntimeObject* L_13;
		L_13 = CYCLELNCHHIDE_get__world_m753251BEF470C800D2068045B2BCC4CC8C2A696F_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_14 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_14);
		RuntimeObject* L_16;
		L_16 = CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline(__this, NULL);
		__this->___MY_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_16);
		RuntimeObject* L_17;
		L_17 = CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline(__this, NULL);
		__this->___MY_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_7), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_7;
		NullCheck(L_18);
		float L_19;
		L_19 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)194), (bool)1);
		__this->___temp_8 = L_19;
		RuntimeObject* L_20;
		L_20 = CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline(__this, NULL);
		__this->___MY_10 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_20);
		RuntimeObject* L_21 = __this->___MY_10;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)194), (bool)1);
		__this->___temp_11 = L_22;
		RuntimeObject* L_23 = __this->___MY_5;
		float L_24 = __this->___temp_11;
		float L_25;
		L_25 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)194), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply((2.0f), ((float)il2cpp_codegen_subtract(L_25, (0.5f))))))));
		RuntimeObject* L_26;
		L_26 = CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline(__this, NULL);
		__this->___MY_22 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_22;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)168), (0.600000024f));
		RuntimeObject* L_28;
		L_28 = CYCLELNCHHIDE_get__world_m753251BEF470C800D2068045B2BCC4CC8C2A696F_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_23 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_23), (void*)L_30);
		RuntimeObject* L_31;
		L_31 = CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline(__this, NULL);
		__this->___MY_25 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_25;
		RuntimeObject* L_33 = __this->___BULLET_23;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)199), L_33);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_34 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_34, NULL);
		V_1 = L_34;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_35 = V_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_36 = L_35;
		RuntimeObject* L_37;
		L_37 = CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline(__this, NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_36, L_37);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_38 = L_36;
		RuntimeObject* L_39;
		L_39 = CYCLELNCHHIDE_get_THERE_m692D7551B5D5F1DE85DD2D9D2B278CFDCCD3AF3F_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_39);
		RuntimeObject* L_40;
		L_40 = CYCLELNCHHIDE_get__world_m753251BEF470C800D2068045B2BCC4CC8C2A696F_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_40);
		RuntimeObject* L_41;
		L_41 = CYCLELNCHHIDE_get__world_m753251BEF470C800D2068045B2BCC4CC8C2A696F_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_42 = V_1;
		NullCheck(L_41);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_42);
		return (bool)0;
	}

IL_018b:
	{
		RuntimeObject* L_44;
		L_44 = CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline(__this, NULL);
		__this->___MY_28 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_28), (void*)L_44);
		RuntimeObject* L_45 = __this->___MY_28;
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)168), (0.0f));
		RuntimeObject* L_46;
		L_46 = CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline(__this, NULL);
		__this->___MY_31 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_31;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)199), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHBACK_get_MY_m3141A9F539655F836BBDA9F49F92EF67C6B44ADA (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHBACK_set_MY_mE7B0CB526E9C8B6E45016212011DB31D2F0DE12F (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHBACK_get_THERE_m9F39B0F0327FBD7CE80894EB09B16A06FE209ABF (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHBACK_set_THERE_mFCF8AD90F367D8377F397A217DE9102DC96546A0 (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHBACK_get__world_m2842EC2F2820508EBCC116752901ABD1F8D6A51A (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHBACK_set__world_m5531436B56E051FD3CA23272EA36AE4CA440E6C7 (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHBACK_get_Current_m0A7888D114B3A261BCCC751BB2945DD2F79B784D (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHBACK_set_Current_m1C646CAB365C62AB5D877D8C4D14F8A5CAD3AEC6 (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHBACK_Reset_m04C28F445388236DB9C91BC121CE62681E89E47C (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHBACK__ctor_m59DDBF284C095738582910ADC9A5C6DDF60017A4 (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHBACK__ctor_mA63F5381F12623E84B8A4AFE558918DB465F27F7 (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLELNCHBACK_set_MY_mE7B0CB526E9C8B6E45016212011DB31D2F0DE12F_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLELNCHBACK_set_THERE_mFCF8AD90F367D8377F397A217DE9102DC96546A0_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLELNCHBACK_set__world_m5531436B56E051FD3CA23272EA36AE4CA440E6C7_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLELNCHBACK_MoveNext_mEF8858B1847F8D8AB53B9A9667430F33D8FBF02F (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_1 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_1, NULL);
		V_0 = L_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_2 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLELNCHBACK_get_MY_m3141A9F539655F836BBDA9F49F92EF67C6B44ADA_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLELNCHBACK_get_THERE_m9F39B0F0327FBD7CE80894EB09B16A06FE209ABF_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLELNCHBACK_get__world_m2842EC2F2820508EBCC116752901ABD1F8D6A51A_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLELNCHBACK_get__world_m2842EC2F2820508EBCC116752901ABD1F8D6A51A_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_9 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750 (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT_set_MY_mE9540BA255D86376398D2F24336B490336D5AE73 (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHSHOOT_get_THERE_m84695A5D868039F06BE8BAE77C13B08A4566B9AF (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT_set_THERE_m90BDF701EE73B18FB74E809799626E9333F3BD95 (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146 (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT_set__world_mDC62144C4D9E42B4711AFA3974D5F89D9990C67B (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHSHOOT_get_Current_m26C4596DE3461E4E329BFB88DD938AEF96865A35 (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT_set_Current_m5C06CFC707FD2F227CF8B74860FBA7B4DFDC4152 (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT_Reset_mA4E61D455DEA1F79458354A8248B5CB6C853B017 (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT__ctor_mE6EED02639F45A615FE18269D9C60352334F5FFD (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT__ctor_mAC1C4181A46912564DADA483AA4E41BEB9DB62A8 (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLELNCHSHOOT_set_MY_mE9540BA255D86376398D2F24336B490336D5AE73_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLELNCHSHOOT_set_THERE_m90BDF701EE73B18FB74E809799626E9333F3BD95_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLELNCHSHOOT_set__world_mDC62144C4D9E42B4711AFA3974D5F89D9990C67B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLELNCHSHOOT_MoveNext_m6DE3CFB31001C5B4632F2BA28C72C3EA778385AF (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_0 = NULL;
	LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* V_1 = NULL;
	LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* V_2 = NULL;
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_3 = NULL;
	LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* V_4 = NULL;
	LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* V_5 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_1 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_1, NULL);
		V_0 = L_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_2 = V_0;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLELNCHSHOOT_get_THERE_m84695A5D868039F06BE8BAE77C13B08A4566B9AF_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750_inline(__this, NULL);
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
		LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* L_16 = (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4*)il2cpp_codegen_object_new(LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4_il2cpp_TypeInfo_var);
		LNCHDIE__ctor_m352FD5776F9ED1D68C10A7C22FC48EC572AC945D(L_16, NULL);
		V_1 = L_16;
		LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* L_17 = V_1;
		LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* L_18 = L_17;
		RuntimeObject* L_19;
		L_19 = CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_18, L_19);
		LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* L_20 = L_18;
		RuntimeObject* L_21;
		L_21 = CYCLELNCHSHOOT_get_THERE_m84695A5D868039F06BE8BAE77C13B08A4566B9AF_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		RuntimeObject* L_22;
		L_22 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_22);
		RuntimeObject* L_23;
		L_23 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* L_24 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_24);
		return (bool)0;
	}

IL_00ae:
	{
		RuntimeObject* L_26;
		L_26 = CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750_inline(__this, NULL);
		__this->___MY_6 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_6;
		NullCheck(L_27);
		float L_28;
		L_28 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)202), (bool)1);
		__this->___temp_7 = L_28;
		float L_29 = __this->___temp_7;
		bool L_30;
		L_30 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_29, (25.0f), NULL);
		if (!L_30)
		{
			goto IL_011d;
		}
	}
	{
		LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* L_31 = (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88*)il2cpp_codegen_object_new(LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88_il2cpp_TypeInfo_var);
		LNCHBACKOFF__ctor_m665911F972D78C03D0EF36CFC1EB91893B35A7EA(L_31, NULL);
		V_2 = L_31;
		LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* L_32 = V_2;
		LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* L_33 = L_32;
		RuntimeObject* L_34;
		L_34 = CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750_inline(__this, NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_33, L_34);
		LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* L_35 = L_33;
		RuntimeObject* L_36;
		L_36 = CYCLELNCHSHOOT_get_THERE_m84695A5D868039F06BE8BAE77C13B08A4566B9AF_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_36);
		RuntimeObject* L_37;
		L_37 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_35, L_37);
		RuntimeObject* L_38;
		L_38 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* L_39 = V_2;
		NullCheck(L_38);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_39);
		return (bool)0;
	}

IL_011d:
	{
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_41 = (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511*)il2cpp_codegen_object_new(LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D(L_41, NULL);
		V_3 = L_41;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_42 = V_3;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_43 = L_42;
		RuntimeObject* L_44;
		L_44 = CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_44);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_45 = L_43;
		RuntimeObject* L_46;
		L_46 = CYCLELNCHSHOOT_get_THERE_m84695A5D868039F06BE8BAE77C13B08A4566B9AF_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_46);
		RuntimeObject* L_47;
		L_47 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_47);
		RuntimeObject* L_48;
		L_48 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_49 = V_3;
		NullCheck(L_48);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_49);
		RuntimeObject* L_51;
		L_51 = CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750_inline(__this, NULL);
		__this->___MY_10 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_51);
		RuntimeObject* L_52 = __this->___MY_10;
		NullCheck(L_52);
		float L_53;
		L_53 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)181), (bool)1);
		__this->___temp_11 = L_53;
		float L_54 = __this->___temp_11;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_54, (0.0f), NULL);
		if (L_55)
		{
			goto IL_0222;
		}
	}
	{
		RuntimeObject* L_56;
		L_56 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, 5, ((int32_t)-922693617));
		__this->___SHOT_SOUND_ON_13 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOT_SOUND_ON_13), (void*)L_57);
		RuntimeObject* L_58 = __this->___SHOT_SOUND_ON_13;
		NullCheck(L_58);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)231), (1.0f));
		RuntimeObject* L_59;
		L_59 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, 5, ((int32_t)733093231));
		__this->___SHOTSECCOUNT_15 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOTSECCOUNT_15), (void*)L_60);
		RuntimeObject* L_61 = __this->___SHOTSECCOUNT_15;
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)231), (0.0f));
		LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* L_62 = (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57*)il2cpp_codegen_object_new(LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57_il2cpp_TypeInfo_var);
		LNCHAIM__ctor_mC29D7765E4EB239CC42B0E9130BA3C674DF28FE0(L_62, NULL);
		V_4 = L_62;
		LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* L_63 = V_4;
		LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* L_64 = L_63;
		RuntimeObject* L_65;
		L_65 = CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750_inline(__this, NULL);
		NullCheck(L_64);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_64, L_65);
		LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* L_66 = L_64;
		RuntimeObject* L_67;
		L_67 = CYCLELNCHSHOOT_get_THERE_m84695A5D868039F06BE8BAE77C13B08A4566B9AF_inline(__this, NULL);
		NullCheck(L_66);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_66, L_67);
		RuntimeObject* L_68;
		L_68 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		NullCheck(L_66);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_66, L_68);
		RuntimeObject* L_69;
		L_69 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* L_70 = V_4;
		NullCheck(L_69);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_69, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_70);
		return (bool)0;
	}

IL_0222:
	{
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_72 = (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581*)il2cpp_codegen_object_new(LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581_il2cpp_TypeInfo_var);
		LNCHFOLLOWATTACK__ctor_m7C19A2158D0925A63FA649409F191FCC6BE32931(L_72, NULL);
		V_5 = L_72;
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_73 = V_5;
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_74 = L_73;
		RuntimeObject* L_75;
		L_75 = CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750_inline(__this, NULL);
		NullCheck(L_74);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_74, L_75);
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_76 = L_74;
		RuntimeObject* L_77;
		L_77 = CYCLELNCHSHOOT_get_THERE_m84695A5D868039F06BE8BAE77C13B08A4566B9AF_inline(__this, NULL);
		NullCheck(L_76);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_76, L_77);
		RuntimeObject* L_78;
		L_78 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		NullCheck(L_76);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_76, L_78);
		RuntimeObject* L_79;
		L_79 = CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline(__this, NULL);
		LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* L_80 = V_5;
		NullCheck(L_79);
		RuntimeObject* L_81;
		L_81 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_79, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_80);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDROPKEY_set_MY_m0F4F950D545A36D35335C7D09A4C479F176C12C6_inline (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDROPKEY_set_THERE_mEE37B8A8AAD6C785027A2DD301E1A25309841FAF_inline (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPDROPKEY_set__world_m1CCDFF888B7BFCF1D262F1EAC312FC99D087FB88_inline (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDROPKEY_get__world_mE3FB76F1E5B41A0DB2C404FCF2BE6171DD24D967_inline (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPDROPKEY_get_MY_m343F67BA749A70A939840C5A674C38A020E016B4_inline (TROPDROPKEY_tABA1C576EE7111E2F8DB9721BB529EC6540FEE6A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPATTACK_set_MY_mB3ACA7A484EDB0D57CF55092F5D5D8FF516CE410_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPATTACK_set_THERE_mF989324295C0C9D41974624195442273AE091572_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPATTACK_set__world_m1ACAAA9C2942C4DA2F47F5392358B0122462BE37_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPATTACK_get_MY_m628A9D70AE3BCD7091CE0F458C5E209DC829FF81_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPATTACK_get_THERE_m9C0736F0C4EBBCD8D168717548B10F43247F86F6_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPATTACK_get__world_m3D09996FA3AF9A1A12BB927A8580098D1174EAAA_inline (CYCLETROPATTACK_t997D52A347CF11C14EE31E0481D49977F0E2FE82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPHIDE_set_MY_m72C1DD708DAC033A2DFBF962452A1117822597AC_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPHIDE_set_THERE_mA674AB3C4AB4376FC0AF058FC32BF765D2E60509_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPHIDE_set__world_m92018CB6FD368768062329C1731F4A9123834D1E_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPHIDE_get_MY_mBE72CE20C49F028DF46C960AF0DBB78247B524AF_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPHIDE_get_THERE_mF4EC6D2459CE92D830D19FF7E658F4213FD6896F_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPHIDE_get__world_mE01891FE25565B8C0BDF22D996238655D82CE8AE_inline (CYCLETROPHIDE_t48FB10E53108342DC95789CE3852AFD200AC7BEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPBACK_set_MY_m1B71F6146087CBA8E7102751A4D9C71C850A2755_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPBACK_set_THERE_m6052F5AD2A7BA3CF2F3F274DD90288DE133CE02D_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPBACK_set__world_m9E8A2A2A378350BA968D86A2DA27E6E5C173BA70_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPBACK_get_MY_mAE425DE5DBC57EB99B858332D58C1FA54A7350B8_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPBACK_get_THERE_m8540425D1CAAE217410FC10F41FE68D279CB42EF_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPBACK_get__world_m724CFDEA3764A00148A89DBEBD624349FEE9B737_inline (CYCLETROPBACK_tC9329D44217047376CC66D979164C6F39B5A864D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPSHOOT_set_MY_m4F0A67D7A1CE866A15990B24D8B33F7601BC5599_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPSHOOT_set_THERE_m4328ECCE3ED24999B325ABB78AFC1AD19495208E_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPSHOOT_set__world_m1B128EE9E27858C9252D953021592D6287F5777A_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPSHOOT_get_MY_mB323A410F2DD1DDAB7507375BD64BFC3F6928A14_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPSHOOT_get_THERE_m75067D8725F7022A1897642EE8669481411C1BDB_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPSHOOT_get__world_m35E7DC00155B422CBE25D632574BF5C34CC58CEA_inline (CYCLETROPSHOOT_t851DC2B5E17E9D9DB884F573488A07EEFA043595* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPWARNING_set_MY_m96E9C0304A5599FC00C3B0F9043373F9AED528EB_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPWARNING_set_THERE_m6BB0E3B950D9221E8B8DBB93EB9A7A6458402520_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLETROPWARNING_set__world_m6462F40CAAA893365D8EB50DBBE48D0A972834A6_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPWARNING_get_MY_m51084D47139D2508D5962777C9F86868979D4717_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPWARNING_get_THERE_m94E6F7F859E8921F3CAEF4F3A7EBEE069061DCFE_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLETROPWARNING_get__world_mC94A4CED50B534B169A9F932A226690BABE5DEE2_inline (CYCLETROPWARNING_t422E4644D1B978A98F312B45E73133B9910A2110* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTALK_set_MY_mCC597EDE4E0930DC930733B72880EB50315E2407_inline (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTALK_set_THERE_m70AB55ACE6EE72664BFBA55A69BA96A229F1A6EB_inline (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPTALK_set__world_m3D22E5073E555E91B328D6A21B7F9A537D7D5ADA_inline (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPTALK_get__world_mDBFAF7103358A39DBE2C75B240AD8842411B2BB3_inline (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPTALK_get_MY_mCAD32D0BC515893BDCEB0915F4A8EEA3FFEDA607_inline (TROPTALK_t138ADC72A57A6752720502D1A821B2D0E087DA3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOUT_set_MY_m13DF29026E1D52E983ABFCA8FB5A80961A3573EC_inline (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOUT_set_THERE_mD0D225642ECF309376B15F05670917081EBF1E18_inline (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TROPSHOUT_set__world_m66EE88614F44B5BC2AD9CB918E9FC146FC85904F_inline (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOUT_get__world_m9C0BF015F1FA696D784FEA7FC27A8094CF85BF95_inline (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TROPSHOUT_get_MY_m9C260B56AD5E813B1E59FDFB3F4738B2A0D2CB63_inline (TROPSHOUT_t34176B5F3B4267B4265B8E569BC5B9CC332FFCBA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPAMMO_set_MY_m3F3B4915C23D212F2445601D805EC6F5C6F8EEDD_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPAMMO_set_THERE_mD07A4EF8FAD828EB8AF3515EDDE936ED7DA1154A_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPAMMO_set__world_m6AA082BE3A710F59B0510B0E4BAE6793664F3211_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPAMMO_get__world_m11D6F416B752A5E370D7FC214ECDB288A7DDFEFF_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPAMMO_get_MY_m6DE3832C6838B809BDF0B0630BE4696C9ECAB58F_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPAMMO_get_THERE_m8440A1F7EEF0C26C820E0C9DF9C3319809D60F65_inline (PICKTROPAMMO_t0EA0917B79F94A6B003234A08449E4287E28DF81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPARMOUR_set_MY_mBBA63943C951B5E2BF0989D17327A7EA8169887C_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPARMOUR_set_THERE_m8C4EFB4F69D91875002A3BD06802625963D4BB1C_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKTROPARMOUR_set__world_m8A5A42AD0D0A3E129625DA7B97D55F26BBC9DCAF_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPARMOUR_get__world_mF6D18F0A80FC2C4321B2D239EC04BA91843E5566_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPARMOUR_get_MY_mCEDA773D5847F9114B998E2A586589FA186DA845_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKTROPARMOUR_get_THERE_mF735820BFFB7F367E43E1FB85A110D9999E19300_inline (PICKTROPARMOUR_tD79BF28A6B96869A72CCB300DACABA32E9E4E8C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HUMMERHIT_set_MY_mEDF3FBC5163BD8049181978429F23005EB2ACBD2_inline (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HUMMERHIT_set_THERE_m0C28D2EB8CBB50CCBB296B81AC590AAECAD94ACF_inline (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HUMMERHIT_set__world_m634ED74E1C2FEC8081F7177A278859C73432C37F_inline (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HUMMERHIT_get__world_m84A03CD4A99CDB2A46E664570A0D6CCD6065F279_inline (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HUMMERHIT_get_MY_mB62977ED5688649FEE27DDA60C34CCD6FDC79369_inline (HUMMERHIT_t605AD1F016DE86348DB09A46A3677780E793168D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTURN_set_MY_m5DE28D4ABBD4810FFCCE8EA4CB37F9B54986E1C4_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTURN_set_THERE_m28CD681391832F5E4C7A57CEB4F1A8F9E6F675FE_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTURN_set__world_m43EE7CD252CD04E3976A8C7A9B8DD7BF9AE179FF_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHTURN_get__world_m423DE703C25361B8D05BAE1661E4E5243224FC4C_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHTURN_get_MY_mFACFB1C8F35259E18426C86A6F9EE5E2B7B1BE8E_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHTURN_get_THERE_m0349DE703F3E14EC4A996CDE9D3A5C38B3974796_inline (LNCHTURN_tBD7C92B911214FE60953059FBA0BCE9E67582614* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHBACKOFF_set_MY_m3F3BE113200A13DFD60F4ED1BE3E80DED6F93A63_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHBACKOFF_set_THERE_mB1248FA8B6D33D097C7816A61CEF4C8202CE57F9_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHBACKOFF_set__world_mA6EEB7D0EC2ECC3F3E64549F5959B0F65CBAB582_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHBACKOFF_get_MY_m974D839A55FF0A9331FF4BE873FD3DBD9EAAED91_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHBACKOFF_get__world_m18ADDA8083C732D0774980FB70A7AD73CB1E9D85_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHBACKOFF_get_THERE_m1AB36700DE6DBC9DA666953EDB7F6CB4DB513C28_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHBACKOFF_set_Current_m04B181A7BC20C24DDB55968317A504814809FD45_inline (LNCHBACKOFF_t8925B18A20A6DF4B826449ADE80A9B1C49EA7F88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWAIT_set_MY_m489B02BA2080C671BCD5012C2B556F313BEF9136_inline (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWAIT_set_THERE_mA7BCFC62E8A90A6E3CE05189DB14CBFA6D02693D_inline (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWAIT_set__world_m6A46D1C1F69B2FE0A59985B433D662DB87FEE377_inline (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHWAIT_get_MY_m42D8628E62FD2D1B88784C5BBB43325738DAE865_inline (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHWAIT_get__world_mE0808BA77D0D2E2851F15D110B14296FB856F481_inline (LNCHWAIT_t6B864F6B5502C321FF037291E9D851BD3BB68F87* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWANDER_set_MY_mD0CB4A9FF89C4926AADA8DC13491142979D537E6_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWANDER_set_THERE_m9E011D1C335D634E48935E2C11B77DEB89156325_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHWANDER_set__world_m5CE5AE5718536FB1B106EA3D8C6EDC0A1265ACC5_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHWANDER_get_MY_mDE9DDB8A0EDDEA860BF778DB74B3FA3634B55C30_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHWANDER_get__world_mEF867072EC8C8B76A027A641D66555018D94BCA0_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHWANDER_get_THERE_m495856B234BAFA2E958C59340AE499A0AA238BB0_inline (LNCHWANDER_t40B284FDAC12BEC4F1978309A958A34DDDF8DE88* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSEARCH_set_MY_mD5425703A632E95D3DDFBF6D81F8E83298F6C517_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSEARCH_set_THERE_mDD2BA39ADEEB8D50D824C576AF7C82A11DE5CB57_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSEARCH_set__world_mAC8CEB7C0035D85B679B8F9F01C3DCF4E3FD2568_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSEARCH_get_MY_m0AEED8B66A442595DD25D8F8FC147743398E3014_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSEARCH_get__world_m0CB876F90891AB97DBF726BD83228E662A3FA2BB_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSEARCH_get_THERE_mF0DC1A412ED7386B50B41B745CA2B5B78E572E8E_inline (LNCHSEARCH_t946DFE4775551138FECB06B563450C2C692876F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIDE_set_MY_m1260A390D14FB7ABDBD8A6DAF751326C37E3B8BC_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIDE_set_THERE_m2F178B8306201F1C24FFD463AEB4639523CD6FE7_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIDE_set__world_mB61D1B2D465E85B5F6E2E6D63414D50B9E443CC0_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIDE_get_MY_m40B5540941762489468F05EA98D68EF3EFE5A13E_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIDE_get__world_mE57415EF887A9091CF0FFEA4E7D6351F4173E048_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIDE_get_THERE_mB8154252B2806AFC671E6F7D9EC0F422F5779EFB_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIDE_set_Current_m1902C6ECCDA4E72444219BB99AA44FF7919A72E6_inline (LNCHHIDE_tD65D35039229A792C5523354BBF309FA35517BB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLISTEN_set_MY_mA43F570246BC56C3F614C2D1964CA52FC41697FC_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLISTEN_set_THERE_m1DC28985F547A799282B3EAF5992C5DA8320BD31_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLISTEN_set__world_mF37D299C9A106C1DE71D5F4CF69C6E3994134A99_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHLISTEN_get_MY_mBF86F4AF0191597D2A9484CA49814FC02BB7C57B_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHLISTEN_get__world_m9D40E1D4D94882ED10B8946C2A9F817323FBF11B_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLISTEN_set_Current_m9F6B0A9B01AA7EBA5FA651F43465B0F57396517B_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHLISTEN_get_THERE_m722701093708951D486A089FAF689D2A24491E10_inline (LNCHLISTEN_t1EEB94BD79F5B1F6584C67E7BB7B17C1062E621E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLOOKFOR_set_MY_m5C70BFB75EBE6DDF9853729F8498ACC2AE7C58B0_inline (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLOOKFOR_set_THERE_mC78AAC225D5046501821430AE90A5461C7A9AD31_inline (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHLOOKFOR_set__world_m1E56ED1E440D04F43A768CFD3BDD0714FD6E6AD3_inline (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHLOOKFOR_get_MY_m53ADAD54752E57362C5A56B7AFAD18D270087634_inline (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHLOOKFOR_get__world_mC5E0AC58981DAB7272ED3421991685761B34725B_inline (LNCHLOOKFOR_tB61E2B9B5DB4A9B674E4D4C8394616081D3D722A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOW_set_MY_m6F3D6DD260947046B51672DE112E991AD07532FF_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOW_set_THERE_mC5584B71009D9BA8EB731D447F908F9C97CF4858_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOW_set__world_m1E4F5DB89E0DAF4ED0C71FECF5D15E19EC82C185_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOW_get_MY_m0766178443F0394DA21A3F9531514F8DBF6965CB_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOW_get__world_m50825DDAFBCA38553B0C549E7E36C6561525723D_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOW_get_THERE_m6A18AA78FDF3F1C8F77AAD60C4C9F7ED0CD46A1A_inline (LNCHFOLLOW_tC10E0ACF6681CD0918736D07B6786C74719B48CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK_set_MY_m4817E16E88A8867C6BE2AA69DBE3A2A8A9E56AA5_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK_set_THERE_m6C51B576FACCE02BFF75E3190FBA293DE9F3F475_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHFOLLOWATTACK_set__world_m6A187908F0A346B87042243F90ADA1458156985D_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOWATTACK_get_MY_mB9EC3B2F794DA5556A7364FDC87562D5C3EFABB9_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOWATTACK_get__world_mB21285301052D34D16B518880E585A12D1BBB231_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHFOLLOWATTACK_get_THERE_m0A25168F3CE4EEF6F5900EF6F7CE1A743F5F08B6_inline (LNCHFOLLOWATTACK_tC55EDC15CFB4DC6A1C9FCEAD4AB534989AAE6581* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHAIM_set_MY_mEBAA1B69995F94BAEE3ACFA161303435CDCFFB65_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHAIM_set_THERE_m62F5436526791AC1DDFD1B1038C6150388AC5EC8_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHAIM_set__world_m64F84993209AB0DD4B61E7C70509C33221143D56_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHAIM_get_MY_m11AD5195893F2CF630470E9EA08CB9952DEDFDA7_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHAIM_get__world_m6F7144DA2B8BF3C90C84250D322578D8D81ECE8F_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHAIM_get_THERE_mAED9658A66A8617A8E757E57581A48A79AA1C166_inline (LNCHAIM_tFD944EE63D3062ACC228B68459A2C5EE10A10B57* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOOT_set_MY_mE050CD1CB5BC8813603A040BD84683B09AEA6D4F_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOOT_set_THERE_m125B5A53DFD4EE9CBE88E7FFE6D003851CE43CAF_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOOT_set__world_m5EB76E589E284419FD6C978849318244BFA30C11_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOOT_get_MY_m5E2012783C594B1969C40BCB77DE0D44DAD85D69_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOOT_get__world_mC3714E96AC89B34BEC225DA82D6D5EA3F2BB6157_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOOT_get_THERE_mF1235C1E0702E64FCD504E40167DAC58740F5B04_inline (LNCHSHOOT_tC26A1FC98856A45B46C03762C94E61040E10C6DF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHESCAPE_set_MY_m463C80D13E7FAD77220910A5FD973B3D704612BF_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHESCAPE_set_THERE_m9229F5E87CE2A40613A2F70EC13A700CD0A47F6F_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHESCAPE_set__world_mCB4CAB73A8DEA73E4B91E9947D7CAA76BDC8AE25_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHESCAPE_get_MY_mE63CAF5F8D410F47F0A381973B52703A257F9CD4_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHESCAPE_get__world_m8FE87BEBE042D72CBC162224ED3D06089F954A48_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHESCAPE_get_THERE_m6B95F8EBB4ECDA1441DB1C1505DA43B9079CD566_inline (LNCHESCAPE_t0326D3FFECF960F3FAAA7AE21095D86D6590880E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDEAD_set_MY_m03149359B71F521B015FE1E894E01503CD93FBA0_inline (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDEAD_set_THERE_m68A0A0F61C23D59F7AE705A269C0E6A90C60DF6C_inline (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDEAD_set__world_m031608488847DC440645E9007553FEE70704F8FE_inline (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDEAD_get_MY_mFB770CC48EC63D230625474A267FFDC30762C4D6_inline (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDEAD_get__world_mB6587C3EF8BC4AC6832C48350A7B8056838E1896_inline (LNCHDEAD_tCCA80DEB46B8AA77F14FB05D3F364EB9733A9BAD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDIE_set_MY_m7371021A99CD044F345761854947D76F272DC75D_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDIE_set_THERE_m2A17EEAD3A1AE277037557ECA1D9B99C839C14C7_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDIE_set__world_m2BB78538434B395BD93C2A27F282AA40364B16EE_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDIE_get_MY_m87201DC86A80004EF6AB251CAF8AE7565C1F5299_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDIE_get__world_mB6BC7AB1F9D7F887DA9A3074F6D4853DC24BEC31_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDIE_get_THERE_m53C3ED4CFA6255A250A850142E05E227E8FACB7A_inline (LNCHDIE_tE54152933A2D2D8648C36E3CA32642DC2035B9A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHIMPLODE_set_MY_mD2FCB74402D3211E1C86A798D5E2BDE2BD86F5EA_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHIMPLODE_set_THERE_m943BBF49847BD0E365EA50B7A14A386E9588FFDC_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHIMPLODE_set__world_m796A87AF7D6B3803123A2589F09BAD8D01238098_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHIMPLODE_get__world_mBAAFD6F802D97496E7D53AA177CCB0664C7A2B85_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHIMPLODE_get_MY_mCBF0B2C95BED56D78D57E880C175FF4BE600A7B3_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHIMPLODE_get_THERE_mC158E69FE47EF7157D6CC027B5EEAD1D7DF551C0_inline (LNCHIMPLODE_t674BA8557425CB59F9D331FB8D4D11506ADF3295* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIT_set_MY_mD7433D4CC0D3F45758C3E9F688FFE9BB9056BCE0_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIT_set_THERE_mE067EE4209263516214F4116CAC37820E101C5B3_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIT_set__world_m0610F7DBEA166BDCE77B6054E97B72A52F0E12C1_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIT_get__world_m675ABFB2B9EBD6CD9FF89BE53FFCD583893387B6_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIT_get_MY_m2EAA89A635768813D06F99A63245067510635D8F_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHHIT_get_THERE_m7902507382AAD25484B039BAFE9632B69C0D4710_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHHIT_set_Current_m4C932A5C008756DC6C473507FCCFA2B8E9BF7EF5_inline (LNCHHIT_t964AF5F99A0F1B90F12DB7CFCC04164C26F8F32D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDROPKEY_set_MY_m44785A46369EA5F2EA9776686FA7668AF177CB21_inline (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDROPKEY_set_THERE_m19740D24DA2D560A4A510AB3B674151B4F222943_inline (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHDROPKEY_set__world_m5A8432DF4612FA1D1D381C005C8DA56CBA7F95E2_inline (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDROPKEY_get__world_mC2A9C6E26A3518C5EB1E156BC1772F2CA55D1E83_inline (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHDROPKEY_get_MY_m86AD63D560307DC9883834A794C66246EF10794A_inline (LNCHDROPKEY_tB4A5E6A275393F322F9224653BF3C7CAF8A87112* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHATTACK_set_MY_m67BAB95BCE14DDD0E607BCFCCEB3BAC0BF543729_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHATTACK_set_THERE_m4351E3749762055C1E5FC17F28664E269E16B61C_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHATTACK_set__world_mDD7655E8F31F7F5B5325D1E8B1BCC7DB6D5FCF9B_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHATTACK_get_MY_m93155D6BB0514564BBB60C82DBB376AAABD1301D_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHATTACK_get_THERE_m44EF1E1D883007C168CA971CF28E3A07C775C143_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHATTACK_get__world_m1FE5EAEC5D3CF92FE39F3025DAC74E0AAD386DAA_inline (CYCLELNCHATTACK_tE987C8BA8C89F178CF244617FF426191C6417D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHHIDE_set_MY_m699C8FE939DFA0FE229BB897FC2247CA80156846_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHHIDE_set_THERE_mD17AEE04EF50497007D9459520DDD86B75B7C72D_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHHIDE_set__world_mBDC49D458521075C0682FF9DD0A2AECB52B3E7C1_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHHIDE_get_MY_m73A3CB40FBE822A01789AF7746B1A89EB5A48679_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHHIDE_get_THERE_m692D7551B5D5F1DE85DD2D9D2B278CFDCCD3AF3F_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHHIDE_get__world_m753251BEF470C800D2068045B2BCC4CC8C2A696F_inline (CYCLELNCHHIDE_t4210B065DB0A0D76237BC922FD4CA060A22F3C13* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHBACK_set_MY_mE7B0CB526E9C8B6E45016212011DB31D2F0DE12F_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHBACK_set_THERE_mFCF8AD90F367D8377F397A217DE9102DC96546A0_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHBACK_set__world_m5531436B56E051FD3CA23272EA36AE4CA440E6C7_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHBACK_get_MY_m3141A9F539655F836BBDA9F49F92EF67C6B44ADA_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHBACK_get_THERE_m9F39B0F0327FBD7CE80894EB09B16A06FE209ABF_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHBACK_get__world_m2842EC2F2820508EBCC116752901ABD1F8D6A51A_inline (CYCLELNCHBACK_t6A256F049EAE9F7AA79FDFFE1CD20A6B70B04160* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT_set_MY_mE9540BA255D86376398D2F24336B490336D5AE73_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT_set_THERE_m90BDF701EE73B18FB74E809799626E9333F3BD95_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLELNCHSHOOT_set__world_mDC62144C4D9E42B4711AFA3974D5F89D9990C67B_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHSHOOT_get_MY_m68F5D30526A11B211CF17F4508A1C0EACD68D750_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHSHOOT_get_THERE_m84695A5D868039F06BE8BAE77C13B08A4566B9AF_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLELNCHSHOOT_get__world_m0F72374EACD0F98AF9DA670F3839B4CB89259146_inline (CYCLELNCHSHOOT_t3A89E3485448FC5A1C511E8A2E6A0790DFC4A0C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}

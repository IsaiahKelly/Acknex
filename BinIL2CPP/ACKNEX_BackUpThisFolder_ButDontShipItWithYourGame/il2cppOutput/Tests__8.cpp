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
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535;
struct IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
struct BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34;
struct CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E;
struct CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F;
struct CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4;
struct DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A;
struct DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370;
struct DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD;
struct INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E;
struct LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D;
struct LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C;
struct LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45;
struct LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511;
struct NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184;
struct NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C;
struct NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B;
struct NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C;
struct NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522;
struct NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F;
struct NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854;
struct NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B;
struct NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924;
struct NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C;
struct NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E;
struct PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176;
struct REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024;
struct REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E;
struct REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F;
struct REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285;
struct REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7;
struct REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854;
struct REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E;
struct REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8;
struct REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A;
struct REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7;
struct REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8;
struct REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737;
struct REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760;
struct REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29;
struct REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C;
struct REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC;
struct REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23;
struct REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E;
struct REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C;
struct TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518;
struct TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902;

IL2CPP_EXTERN_C RuntimeClass* BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C_il2cpp_TypeInfo_var;
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
struct CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E  : public RuntimeObject
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
	RuntimeObject* ___REPT02SND_25;
	RuntimeObject* ___MY_27;
};
struct CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F  : public RuntimeObject
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
	RuntimeObject* ___MY_24;
	RuntimeObject* ___MY_27;
};
struct CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4  : public RuntimeObject
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
	RuntimeObject* ___MY_29;
	float ___temp_30;
};
struct DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___WAITTIME_0;
	RuntimeObject* ___WAITTIME_1;
	float ___WAITTIME_1_val;
	RuntimeObject* ___RIGHTTURNDOCT_9;
	RuntimeObject* ___RIGHTTURNDOCT_10;
	float ___RIGHTTURNDOCT_10_val;
	RuntimeObject* ___RIGHTTURNDOCT_12;
	float ___RIGHTTURNDOCT_12_val;
	RuntimeObject* ___RIGHTTURNDOCT_18;
	float ___RIGHTTURNDOCT_18_val;
	RuntimeObject* ___RIGHTTURNDOCT_22;
	float ___RIGHTTURNDOCT_22_val;
};
struct DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___DOCTHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___DOCTTALK_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___DOCTCYCLE_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___DOCT0TEX_24;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
	RuntimeObject* ___MY_35;
};
struct DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___DOCTHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___DOCTCYCLE_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___DOCT1TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___BULLET_27;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
};
struct INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___INNOCENTS_1;
	float ___INNOCENTS_1_val;
	RuntimeObject* ___INNOCENTS_3;
	float ___INNOCENTS_3_val;
	RuntimeObject* ___INNOCENTS_4;
	RuntimeObject* ___INNOCENTS_6;
	float ___INNOCENTS_6_val;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___PLAYER_HEALTH_9;
	float ___PLAYER_HEALTH_9_val;
	RuntimeObject* ___INNOCENTS_11;
	RuntimeObject* ___END01STR_12;
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
struct NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184  : public RuntimeObject
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
	RuntimeObject* ___MY_18;
	float ___temp_19;
	RuntimeObject* ___MY_22;
	float ___temp_23;
	RuntimeObject* ___MY_25;
	RuntimeObject* ___MY_27;
	float ___temp_28;
	RuntimeObject* ___MY_30;
	float ___temp_31;
	RuntimeObject* ___GUN_ON_37;
	float ___GUN_ON_37_val;
	RuntimeObject* ___SHOT_SOUND_ON_39;
	float ___SHOT_SOUND_ON_39_val;
	RuntimeObject* ___EXPLOSION_ON_41;
	float ___EXPLOSION_ON_41_val;
};
struct NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C  : public RuntimeObject
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
	RuntimeObject* ___NURS9TEX_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
};
struct NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B  : public RuntimeObject
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
	RuntimeObject* ___NURSDEAD_18;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___NURS8TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___NURS04SND_30;
	RuntimeObject* ___MY_32;
	RuntimeObject* ___MY_35;
};
struct NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C  : public RuntimeObject
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
	RuntimeObject* ___NURSCYCLE_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___NURSHIT_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_19;
	RuntimeObject* ___MY_21;
	float ___temp_22;
	RuntimeObject* ___PLAYER_ANGLE_23;
	float ___PLAYER_ANGLE_23_val;
	RuntimeObject* ___NURS1TEX_32;
	RuntimeObject* ___MY_34;
	RuntimeObject* ___MY_37;
	RuntimeObject* ___MY_40;
	RuntimeObject* ___BULLET_41;
	RuntimeObject* ___MY_43;
	RuntimeObject* ___MY_46;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_50;
	float ___temp_51;
};
struct NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522  : public RuntimeObject
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
	RuntimeObject* ___SHOOT_FAC_57;
	float ___SHOOT_FAC_57_val;
	RuntimeObject* ___MY_59;
	float ___temp_60;
	RuntimeObject* ___MY_62;
	RuntimeObject* ___MY_65;
	float ___temp_66;
	RuntimeObject* ___MY_70;
	RuntimeObject* ___temp_71;
	RuntimeObject* ___NURS5TEX_73;
	RuntimeObject* ___MY_75;
	RuntimeObject* ___MY_78;
	RuntimeObject* ___MY_81;
	RuntimeObject* ___MY_84;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_88;
	RuntimeObject* ___MY_91;
	RuntimeObject* ___NURSHIT_92;
	RuntimeObject* ___MY_94;
	RuntimeObject* ___NURSE_TEX_95;
	RuntimeObject* ___MY_97;
	RuntimeObject* ___MY_100;
	RuntimeObject* ___MY_103;
	float ___temp_104;
	RuntimeObject* ___NURS02SND_107;
	RuntimeObject* ___MY_109;
};
struct NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F  : public RuntimeObject
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
	RuntimeObject* ___NURS0ATEX_72;
	RuntimeObject* ___MY_74;
	RuntimeObject* ___MY_77;
	RuntimeObject* ___MY_80;
};
struct NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___NURS03SND_2;
	RuntimeObject* ___MY_4;
	RuntimeObject* ___NURS05SND_5;
	RuntimeObject* ___MY_7;
};
struct NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B  : public RuntimeObject
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
	RuntimeObject* ___TALKNURS_9;
	float ___TALKNURS_9_val;
	RuntimeObject* ___TALKNURS_11;
	RuntimeObject* ___FOLLOW_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_21;
	RuntimeObject* ___NURS01SND_24;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___NURS02SND_27;
	RuntimeObject* ___MY_29;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___TALKNURS_32;
};
struct NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___WAITTIME_0;
	RuntimeObject* ___WAITTIME_1;
	float ___WAITTIME_1_val;
	RuntimeObject* ___RIGHTTURNNURS_9;
	RuntimeObject* ___RIGHTTURNNURS_10;
	float ___RIGHTTURNNURS_10_val;
	RuntimeObject* ___RIGHTTURNNURS_12;
	float ___RIGHTTURNNURS_12_val;
	RuntimeObject* ___RIGHTTURNNURS_18;
	float ___RIGHTTURNNURS_18_val;
	RuntimeObject* ___RIGHTTURNNURS_22;
	float ___RIGHTTURNNURS_22_val;
};
struct NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___NURSHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___NURSTALK_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___NURSCYCLE_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___NURS0TEX_24;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
	RuntimeObject* ___MY_35;
};
struct NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___NURSHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___NURSCYCLE_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___NURS1TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___BULLET_27;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
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
struct REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E  : public RuntimeObject
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
	RuntimeObject* ___REPT9TEX_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
};
struct REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F  : public RuntimeObject
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
	RuntimeObject* ___REPTDEAD_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___REPT8TEX_18;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
};
struct REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___REPTJUMP_0;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___REPTSEARCH_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___REPTAUPTEX_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___BULLET_18;
	RuntimeObject* ___MY_20;
};
struct REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___REPTHIDE_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLEREPTHIDE_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___REPTHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___REPT1TEX_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___REPEL_24;
	RuntimeObject* ___MY_26;
};
struct REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___REPTJUMP_0;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLEREPTSHOOT_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___REPTHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___REPT1TEX_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___FOLLOW_21;
	RuntimeObject* ___MY_23;
};
struct REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___REPTJUMP_0;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___REPTFOLLOWATTACK_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___REPTDOWN_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___REPT0TEX_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___FOLLOW_18;
	RuntimeObject* ___MY_20;
};
struct REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___REPTESCAPE_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___REPTHIT_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_22;
	RuntimeObject* ___MY_24;
	float ___temp_25;
	RuntimeObject* ___MY_27;
	float ___temp_28;
	RuntimeObject* ___REPT1TEX_37;
	RuntimeObject* ___MY_39;
	RuntimeObject* ___MY_42;
	RuntimeObject* ___MY_45;
	RuntimeObject* ___BULLET_46;
	RuntimeObject* ___MY_48;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_52;
	float ___temp_53;
	RuntimeObject* ___MY_56;
	float ___temp_57;
	RuntimeObject* ___MY_59;
};
struct REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A  : public RuntimeObject
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
	RuntimeObject* ___EXPLOSION_ON_7;
	float ___EXPLOSION_ON_7_val;
	RuntimeObject* ___MY_10;
	float ___temp_11;
	RuntimeObject* ___SHOOT_FAC_12;
	float ___SHOOT_FAC_12_val;
	RuntimeObject* ___MY_14;
	float ___temp_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	float ___temp_21;
	RuntimeObject* ___MY_25;
	RuntimeObject* ___temp_26;
	RuntimeObject* ___REPT5TEX_28;
	RuntimeObject* ___MY_30;
	RuntimeObject* ___MY_33;
	RuntimeObject* ___MY_36;
	RuntimeObject* ___MY_39;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___REPTHIT_41;
	RuntimeObject* ___MY_43;
	RuntimeObject* ___REPT_TEX_44;
	RuntimeObject* ___MY_46;
	RuntimeObject* ___REPT02SND_47;
	RuntimeObject* ___MY_49;
	RuntimeObject* ___MY_52;
};
struct REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7  : public RuntimeObject
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
	RuntimeObject* ___REPT0ATEX_75;
	RuntimeObject* ___MY_77;
	RuntimeObject* ___MY_80;
	RuntimeObject* ___MY_83;
};
struct REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8  : public RuntimeObject
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
};
struct REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLEREPTATTACK_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___REPTHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___REPT0TEX_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_27;
	float ___temp_28;
};
struct REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760  : public RuntimeObject
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
	RuntimeObject* ___REPTJUMP_24;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___REPTFOLLOWATTACK_27;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___REPTHEAR_30;
	RuntimeObject* ___MY_32;
	RuntimeObject* ___REPTHIT_33;
	RuntimeObject* ___MY_35;
	RuntimeObject* ___MY_38;
	RuntimeObject* ___REPTADNTEX_39;
	RuntimeObject* ___MY_41;
	RuntimeObject* ___MY_44;
	RuntimeObject* ___BULLET_45;
	RuntimeObject* ___MY_47;
};
struct REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___REPTHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	float ___temp_15;
};
struct REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___REPTFOLLOWATTACK_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___REPTHIDE_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___REPTHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___REPT0TEX_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___FOLLOW_21;
	RuntimeObject* ___MY_23;
};
struct REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___REPT01SND_2;
	RuntimeObject* ___MY_4;
	RuntimeObject* ___REPT02SND_7;
	RuntimeObject* ___MY_9;
};
struct REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___WAITTIME_0;
	RuntimeObject* ___WAITTIME_1;
	float ___WAITTIME_1_val;
	RuntimeObject* ___RIGHTTURNREPT_11;
	RuntimeObject* ___RIGHTTURNREPT_12;
	float ___RIGHTTURNREPT_12_val;
	RuntimeObject* ___RIGHTTURNREPT_14;
	float ___RIGHTTURNREPT_14_val;
	RuntimeObject* ___RIGHTTURNREPT_20;
	float ___RIGHTTURNREPT_20_val;
	RuntimeObject* ___RIGHTTURNREPT_24;
	float ___RIGHTTURNREPT_24_val;
};
struct REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___REPTJUMP_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___REPTFOLLOWATTACK_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___CYCLEREPTATTACK_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___REPTHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___REPT0TEX_24;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
};
struct REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___REPTJUMP_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___REPTFOLLOWATTACK_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___CYCLEREPTATTACK_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___REPTHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___REPT1TEX_18;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___BULLET_24;
	RuntimeObject* ___MY_26;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTALK_set_MY_mDFE6B5002EA9AFA24CD4CBDE094C1ADB984DB502_inline (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTALK_set_THERE_m5CA10817462740463424BD7FC0BE759AF3EF7671_inline (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTALK_set__world_m710F7B9469425417F77ED0E00BA58045B4C117AA_inline (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHTALK_get__world_m20350C4CDF747D149FBD4C93540E909E6CA6A801_inline (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHTALK_get_MY_m8A5EAE8C91923F65535B589FFD17C994DA00F40A_inline (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOUT_set_MY_m010050BB57FFE4E64506D53B33EA60F89890289D_inline (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOUT_set_THERE_mA226A79792AFB15DED46A464C8F68D324D89F818_inline (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOUT_set__world_mC524F528D3CCA38B0DEE89229D1209DA0A72FA44_inline (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOUT_get__world_mDC9D77DC1C076B1FAA0D21835EFE2FBD70280BEF_inline (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOUT_get_MY_m70BB41518164E1C2E776FEC7E185D356646EFA59_inline (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTURN_set_MY_mE6BDE8D06C7002764B492AE63E653318CAE35C5F_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTURN_set_THERE_m87A60842EA20256807DD56A1D326DE447A08CD11_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTURN_set__world_mA54AB029C1C84AA99FC9386CA133E0178E6959FD_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLISTEN__ctor_m1034124300BD54DF633FD67E9E17AC1CCD7A4FB8 (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTTURN_get_MY_m026D44E90DA3FF5286219DB00026B3D4870B140C_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTTURN_get_THERE_m63F9E36DF87400A91F30A4AFAF970D9230BED29A_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TURNRIGHT__ctor_mAD82B12963F20823A2CFE3E007E94496A56C8353 (TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TURNLEFT__ctor_m361003A6CB36C1059716F979D3822771D39CD395 (TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWAIT_set_MY_mBBF94C87B929BD4E77E09F9E9F3CCE80FAA511F0_inline (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWAIT_set_THERE_m9993ECB75B34D2C29AFBFF649C775144D54EFF02_inline (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWAIT_set__world_m7DC2B2A157CDE2578FFD7D331BEF823169121F19_inline (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTWAIT_get__world_mC8790079AC50BD3463F239FC606D519A5CDC236F_inline (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWANDER_set_MY_m432783D41A05AA1EB9EA96094759CA6A3199AA80_inline (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWANDER_set_THERE_m9E86D15CF4C6DCA37F18A6BB8A3204A09E5D7878_inline (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWANDER_set__world_m8B299C029AC86B5C035C57AFCA0BE832B722385D_inline (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5_inline (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTWANDER_get__world_mBEF9BD256827216A49517DCA43914E0B6B8B868E_inline (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSEARCH_set_MY_m3C21F9655FFB4F4C10EC7B46AE7ADFEB1A701CBB_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSEARCH_set_THERE_m1B3D2A92EFCB1A7E6F255A0C6E86E6B0BBE5AB11_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSEARCH_set__world_mBE540011073F43CF78BCDB22B89C8BED1C2FC07B_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTSEARCH_get_MY_mDBBCBB4DAF28B6A4F214BD9BF3E36FC722017E86_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTSEARCH_get__world_mBEF23E9789F92B1E1306A0873B9722D2C87A2945_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTSEARCH_get_THERE_m4462613AD72B7500286A06730E0C7D7AE42D9F5F_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWAIT__ctor_m38058FB40D9A5C36F053C9FDD3891C6CF19901C0 (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK__ctor_m850D312D9EC7230283ED3E48079C32944D1AD9A6 (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIDE_set_MY_m197829EFF71C4E0B0C9CFE72648AB8494278C7AA_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIDE_set_THERE_m865DB2851F12B3A293B437504109213E562F1D7A_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIDE_set__world_mDC94E333C7F28B8198EBC10B8EFFA778F6879AD9_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIDE_get__world_mC5AA8B86FB4FB0718CB4EE2D27C51C9A0C15AE2A_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934 (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIDE_get_THERE_m74F2206D78735605061161FB9B8F4C14FCE3AFDF_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3 (int32_t ___0_frames, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIDE_set_Current_m08BF7C3CF7188D3D997DC6E8E81C4C1AE532CA42_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWANDER__ctor_mE72FB9F0636B26DB53972E1CBCDC00AFB0553AC1 (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLISTEN_set_MY_m2136D2169505823659ADCBF914EBCFBA6B998652_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLISTEN_set_THERE_mEAB3E96CD1F4FA953F41E85E0C05F2328E875C70_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLISTEN_set__world_mDF4202CEA329158217B6ECE59ECECD70575C26C1_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTLISTEN_get__world_m5779970F2DD0BA7345A0ACD569DEA123FA96C82D_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLISTEN_set_Current_mA45F784C1BF228DF8B452A3794D3ED0D66AC711E_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTLISTEN_get_THERE_mE63D91C9C5BBA4E08CDF95AE302406F5F9B6499A_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTJUMP_set_MY_m5DD5F150E92D8A84919A570A6DE1ACA52C91EDC2_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTJUMP_set_THERE_mEFBAF2AE8DCBEC54FB0A53AC0CFF660E82111E6B_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTJUMP_set__world_m5F30C58E96C55C2B875E5B7D1B7C66E5152890BB_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTJUMP_get_MY_m7D8F1F25594C5A651F42B06D0AF32CA390E683A4_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTJUMP_get_THERE_m7D6B66A530C5B9CF299EFB334B24F16C44B32563_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTJUMP_get__world_mB1524072E29889D63CB1AA0C068B494C40C95DEC_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTALK__ctor_m7115B6714BE1D58B3DA30B6F071EC7E3428C41BB (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLOOKFOR_set_MY_mAB60BCF98327E1DF6E9D35E62CC8B40495E3282D_inline (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLOOKFOR_set_THERE_m8601475FD9667B579F3E0E0EDD1BCD696D3FCA73_inline (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLOOKFOR_set__world_m908CEF934F8AB8590A7663F76E47328162F35F76_inline (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTLOOKFOR_get__world_m04A55874A2F1B55B5521C0FC2802F01259CB5737_inline (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15 (RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHEAR_set_MY_mB883C068C6A0D377C48D170830B9E2DD4A06B018_inline (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHEAR_set_THERE_m6EF9555B1752A6939F2A9A5B0944D514F3FA5787_inline (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHEAR_set__world_mA803349A61F2B62B368AFCE0B94C00963062CE3A_inline (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHEAR_get__world_m9C65F7816C88B447059FFD0CCC1B00D2D6E18F0C_inline (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHEAR_get_MY_m675C839A3FEB14FF56E27992F973511BF974F83F_inline (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDOWN_set_MY_m3C150389E777DE97244135B625919AFE75D890AA_inline (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDOWN_set_THERE_m33827F66B83A423DF8BB0FF53B534E5B74C9AC9A_inline (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDOWN_set__world_m2784E7EA68060C856CDB9C7BA444377B30309994_inline (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDOWN_get__world_m84701734AB8E990E2FC9BFBECACFFA23E3B478CD_inline (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDOWN_get_MY_mA9F34758B012BD0C89B34D261C1B84730BB6581C_inline (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK_set_MY_mA1E1A6DF6418F8F70589CAFED68747AE7264DF90_inline (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK_set_THERE_m606DD395214B1E4CF0B9B330004C0249A93227FB_inline (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK_set__world_m3CFC398D794ED1E66CD5CC668A679D50918B86B5_inline (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTFOLLOWATTACK_get__world_m3BD4594EAADDE19A366736EF9BC10857E7DDA7CE_inline (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTFOLLOWATTACK_get_MY_m3A6E4638980BDD9A7C8FCC347126FAD14FBBBA5F_inline (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSHOOT_set_MY_mB5BA7606FF30A7386C04BED72FDE06EDF2FFA0BF_inline (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSHOOT_set_THERE_m58747B0785DA2EA809920702941EAE0B3010E4D5_inline (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSHOOT_set__world_m1E43CB001F0B06C8B4FC208F97F171191B81A70B_inline (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTSHOOT_get_MY_m39CB04047A319B375F2117216FACF8EFD2F02B04_inline (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTSHOOT_get__world_m697FECF0EEB2C3D0E02F1C2B96CF3CC79876C0E8_inline (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTESCAPE_set_MY_m2002F7C316592DB2DAE555B8608AA5BA3D9C6CBC_inline (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTESCAPE_set_THERE_mE99535C03332F11AAFF371238FB065011AA9AD73_inline (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTESCAPE_set__world_mD71ED796D46EFCFB63697D6C744E84BDCAA4656D_inline (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E_inline (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTESCAPE_get__world_m14D2E796970BBB4BBC7D4E8FFD4C46DC591AF76B_inline (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDEAD_set_MY_m38953045674B7A84440AAF567A2F0E65380F9A2E_inline (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDEAD_set_THERE_m6809F804293DF3B561111F709416716695B5594D_inline (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDEAD_set__world_mAFA79436A7D1D01032C398CFB3A7A8821467CEE5_inline (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDEAD_get__world_m64115E97486AF551971529D0E2294A0A7531DCA6_inline (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDIE_set_MY_m8A2831CFD59B2FDA3DFC6763562AE1D839F4569B_inline (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDIE_set_THERE_m8743595230F27D2BD82F13C95F049E91B0388E90_inline (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDIE_set__world_m29F88AF406B95EA9DB661A534388AFD89FEA0D65_inline (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDIE_get__world_m617FA08226A98BB6DFBE57C62F8A5987F7A9A5BF_inline (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTIMPLODE_set_MY_m43C556F1ABBA3EFF6BA281BA013BB7C160A26DDD_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTIMPLODE_set_THERE_m15D65B36FEFE2971C1C8461D54A4288A3F6EA489_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTIMPLODE_set__world_m3C450A9035FC27C1D11BCC00A790283E5E8344A9_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_Sqrt_mC66300CAE9A1433A25EE41C5837D731B05AABD25 (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAMREACT__ctor_mB0794040DFC34B2C1BE7A9198550A45C59AA4C17 (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTIMPLODE_get_THERE_mBF698039E83B4A6EE45391EDF57CF3B65460BC40_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIT_set_MY_m2E774C540246D19D7703AEDC44DF33EFE61E3176_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIT_set_THERE_mAAEDA228566183495CE003C5B5F17E1888CC9BEB_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIT_set__world_mADB00F954A3B145136AF5355D907BA8A79BFE956_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTIMPLODE__ctor_m110894602A2DD2B28BB0985BB5F9BD6B2A37A521 (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIT_get_THERE_mF22952168A70D856B6421B483AAD5BCDF1328344_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIT_set_Current_m1E9352862E64D9367F59E2F08F9A1CF48BECA375_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIDE__ctor_mBA7BC83979D18C547F3F97B59E9B5F7B019014F8 (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDIE__ctor_m7EBDA8478C5C934ED33442D565AE159E20DC3F33 (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTURN__ctor_mBBC3F0A8B50374421FDD6181D6AF615B089F2754 (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTATTACK_set_MY_mDA4DC70995AA4037AD5B961C0F7D025FCB6A6FA9_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTATTACK_set_THERE_mB73B2F47B019CB1F45CD3806F2225BAEFD185A9F_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTATTACK_set__world_mC3EA75C08F721B864883F28EEB74DB3733B2E498_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTATTACK_get_THERE_m76910EA212CC9C0E0AACE671F42B92FC5B0ACE51_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLOOKFOR__ctor_mB42D87700A209EF376D4F746945FDF19CAE4F6B5 (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTHIDE_set_MY_m0FA10EAACA142DCEA3B828E7602DD96271EA237B_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTHIDE_set_THERE_m1F92B3009F1DAE0D7FE3D4C7AE919FBBDDB17083_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTHIDE_set__world_m6509D7C19B7D9B828659ADBF17420480B086D0EF_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTHIDE_get_THERE_m8E8B5E27F1F33064719A289DD766946D5BC65AB4_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTHIDE_get__world_m58D29529D00979FFF8B1A5B99CE57232FDAA9FB5_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT_set_MY_m76152EC13D43BC4697920B462E77A2A413BE2D25_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT_set_THERE_m838CE3DE8A108EAC19309E7759800A9E87A94828_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT_set__world_mDEBD2B6452D6306471B9C3FA03EA9911DEDA5452_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTSHOOT_get_THERE_m248FD6A6BB743E89173F0AD177BC4D4E6653835D_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSHOOT__ctor_mCD9DB71C8040E016C9A617F2E10DB8911836148B (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTALK_set_MY_m7A6335E63BDD4C2A5E40A0D462FFEBA646EEB996_inline (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTALK_set_THERE_m1CA993858DAC2E40F3E885047A24775D5304387C_inline (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTALK_set__world_mC043876C2D769ABF028409FA1E38CFB4A6499ED8_inline (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTTALK_get__world_mD47EE13E6E69F79B679C8076E7A2421DDEBDB0F4_inline (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTTALK_get_MY_m38693FA2304955D46214101C3633572643FA2774_inline (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTURN_set_MY_mD18F4776B26CEAE2B9E3849569F956E13F605D21_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTURN_set_THERE_m4196098BA0531448AC8D31953CC18BAC82AB9F61_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTURN_set__world_mD7F872551D4E457A5657EEF8E40F9481FA323883_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSTURN_get_MY_m5A399738F357798DCC422BC265C3A4D841B36C66_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSTURN_get_THERE_mAD875B68492201CC2B5E0050C4E19C5D3246416E_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWAIT_set_MY_m2A044288DEF473806D35C3DEFFA4C1FC46E23657_inline (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWAIT_set_THERE_m0389A70A5920DF54BAEA2C189CA19836FE7EA1E3_inline (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWAIT_set__world_mC1852ED343E0F67F8592849EA919CEDCFE506F26_inline (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSWAIT_get__world_m7D99A02E7C2F8E2698D842C33D39FFDBBB4466BF_inline (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWANDER_set_MY_mCD40548E51EDFA631BFAEA4A37AD59F356D3A136_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWANDER_set_THERE_m332D14CA94E19D90C2015D21A8FBEFF0584AEAE7_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWANDER_set__world_m5CDF49A3450688FA41DF160CA9129FD43BF73801_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSWANDER_get__world_m2609BA3DBAB95E4E9876ED5F2C0E4EC3E945D9B8_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7 (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSWANDER_get_THERE_m0E21570CF07D455E0D7E17015EEF7321C744D1C6_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIDE_set_MY_m4F85BA19F9CBB4FE18B08643E09A4EE1E04D520A_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIDE_set_THERE_m60985E05BB351B742F0CEA2DBDEB7552E5D41393_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIDE_set__world_m3961A8AFE75D79852B4A96B60A6E91A150D06726_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSSCREAM__ctor_mDD5E9AAF395DA3750DC86F2DD1A22DB6A6AA0E24 (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIDE_get_THERE_m0A5144370D549737829B340A7B98C1D4E71DD1AF_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIDE_set_Current_mA7E632D309FF76C5FFF0C375AF85AAA34A5B5205_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWANDER__ctor_mB52B60273F6016660C3E23F482E89D645E1EA4BC (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDEAD_set_MY_m7B85464A923FA0A3BC456CF00680DC85CE91ED6C_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDEAD_set_THERE_m0A6ED7D3F80ACBBCD3663BCC66C591C0C096B64C_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDEAD_set__world_mB16AA976395233F383B1BD8300630497CA39FC62_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void INNOCENTKILLED__ctor_m319F3233B97738CBBFE730AE2AB5F354AF3F72E4 (INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSDEAD_get_THERE_mAEC6B9C59153C49DBD843FB4D1E60A829BBF46BA_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSDEAD_get__world_mB8BA85DDA64170DD6C1E9E1C2C9F2CFA554A48A4_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDIE_set_MY_m80654BD89A1707FFF4B6179443A6FE62263C7D59_inline (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDIE_set_THERE_m92FEE161CFFD0E34009DB1E49C120AFADCE4E9DB_inline (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDIE_set__world_m78B0D77A1F3073A4889CA5D1E8DCFBB40F02A5F7_inline (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSDIE_get__world_mF651525FA09370EEAD9D9373C8484C2514B64F47_inline (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSIMPLODE_set_MY_m8D78AD8D0BAF4118F1D15B9876DC36B189EB9D20_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSIMPLODE_set_THERE_mD4D4797CADE27613CB03253D520B5ED813F799D4_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSIMPLODE_set__world_m8770F7510D71127CC1D8C973ACBCA34752C6AF6D_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSIMPLODE_get_THERE_mFD08736E8483C3557EE83F40FE81E71BB95EA690_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIT_set_MY_mA04F3FBD9FDC5DB724D9DD50701A45BF2F838AA7_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIT_set_THERE_m82EC6E1A10206AB0C152C16829B7ADA1448FD60E_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIT_set__world_m258CD6098816AC1F6E80858E45CC2CFAD47FF96D_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSIMPLODE__ctor_mF78EE68A69D2015A27035A8C265531101A5D017F (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIT_get_THERE_mF9182ED2A7EC327E0C677619D78F3593E2141D2C_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIT_set_Current_m7FC20067B951BACDEA1BBBD683A20001CD59499F_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIDE__ctor_mF67BE577F90D25EE15921EE8C979F3A67BB1CD79 (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDIE__ctor_mAF40C77D4A2307C6134F40701DE611D4ADD42E56 (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTURN__ctor_mFE0554B1C8D3CB67EADB030D23EF0E108425C422 (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSCYCLE_set_MY_mBA64EAA1F96DDC22123DBDB0FCBC43727FB37625_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSCYCLE_set_THERE_m0E841704E6281F3AA4462E0E2069687E5C026FF9_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSCYCLE_set__world_m92CF7513B8D9E1DE7EB7257F21DA6D7BE94D7936_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSCYCLE_get_THERE_mF6D340E57401F9506300B264B74C5B361FFB34F2_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSSCREAM_set_MY_mD02D9AE54A9A3F68EDD068C564B9DF6FC62BAA77_inline (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSSCREAM_set_THERE_m23E6F3870D3F622C704F391A566523CDABFE6FF0_inline (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSSCREAM_set__world_m996827D4A2B67F782CAEFE3AD9CB75BDF75098AD_inline (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSSCREAM_get__world_mC2EB25D45DD7C522A91AE6C5CAEABDBC1782BBC2_inline (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSSCREAM_get_MY_m42088C4A5AF45F601BC256052E49721608287064_inline (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTALK_set_MY_m27DF4AD0A33E0D909A0B80043A626DDAA1CF1F3D_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTALK_set_THERE_mC11C8BFF054F5B9F2A7B2E00598F7E6D7D385CA2_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTALK_set__world_m3F0F874DC6AC24A5B3C1AB4A6FC094579ED62D01_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSTALK_get_MY_mCA768E365188FFA0DC655E0ED554ED380471518C_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSTALK_get__world_m7A8CB7AB9EEF29FE0E152BD9FE12B58B73BE2340_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTALK_set_Current_mB7D22ECF0B20CEDF4DD12D4E0A7E3C7D723122C8_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTTURN_set_MY_m5EE4F9E280350B8DF82D6D2B8FFD355F24437A44_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTTURN_set_THERE_m1A3A8E2D933C53795CE0242750B27B9EADBB2F63_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTTURN_set__world_m2BF703BCF6ED6A9ED55F2735B1BFB48B68BF0601_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTTURN_get_MY_m0517B539A078FC8FBC8CA07E55D7D927ED03057F_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTTURN_get_THERE_m617A6446C47D399216E317001D6B5C59F0035DCF_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWAIT_set_MY_m03ADC4B1EFF062A9388CA6C67CB1C15021D6C3CF_inline (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWAIT_set_THERE_mDDAFC2AEE40E9E1DAF4F4AA22F692A0FA2ED67D7_inline (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWAIT_set__world_m0C128E6B7639492AE17711446F9CEAF4C26F617D_inline (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTWAIT_get__world_m8F362B6F7F9505F8B528820477A596E7459F7B53_inline (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWANDER_set_MY_m30FB91B38D8536325F21FC00C499CC1643DB58A2_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWANDER_set_THERE_m2D7F068894EF6CD2AE3DD278F9819D746931D766_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWANDER_set__world_mF6B58775AD07C30A51AFB0135D864C4156E90321_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTWANDER_get__world_mB35B3A8532DA2E71EFDAB22F19D3AAB24BA7E848_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTWANDER_get_THERE_m65DDE87D46101419E6F9A47FEEE954ED5EF76B85_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHTALK_get_MY_m8A5EAE8C91923F65535B589FFD17C994DA00F40A (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTALK_set_MY_mDFE6B5002EA9AFA24CD4CBDE094C1ADB984DB502 (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHTALK_get_THERE_mBF3D0D8D8C043F57F1DB5CCB75C9DCA0BCF6BA7B (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTALK_set_THERE_m5CA10817462740463424BD7FC0BE759AF3EF7671 (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHTALK_get__world_m20350C4CDF747D149FBD4C93540E909E6CA6A801 (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTALK_set__world_m710F7B9469425417F77ED0E00BA58045B4C117AA (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHTALK_get_Current_m8B042A7676984C1F9504206FD1B70ED90CBFD608 (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTALK_set_Current_m0A67C36B9C1D086D6FDF6C595C96684D85C173ED (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTALK_Reset_mC3F145707541822274628209B3AD6B2A7C59BB65 (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTALK__ctor_m45FA220D6FA3BC5EACC9EB71A00DE5D55DF24141 (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHTALK__ctor_m6A83E5AEC83E5435ABC64933F05F4E929FA574CB (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHTALK_set_MY_mDFE6B5002EA9AFA24CD4CBDE094C1ADB984DB502_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHTALK_set_THERE_m5CA10817462740463424BD7FC0BE759AF3EF7671_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHTALK_set__world_m710F7B9469425417F77ED0E00BA58045B4C117AA_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHTALK_MoveNext_m7CF259557B1C757698562EC0A6A335352FF13680 (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) 
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
		L_2 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_1, (0.899999976f), NULL);
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		float L_3;
		L_3 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_4;
		L_4 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_3, (0.800000012f), NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		RuntimeObject* L_5;
		L_5 = LNCHTALK_get__world_m20350C4CDF747D149FBD4C93540E909E6CA6A801_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)1467010010), (bool)1, (bool)1);
		__this->___TROP12SND_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP12SND_4), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = LNCHTALK_get_MY_m8A5EAE8C91923F65535B589FFD17C994DA00F40A_inline(__this, NULL);
		__this->___MY_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_8);
		RuntimeObject* L_9;
		L_9 = LNCHTALK_get__world_m20350C4CDF747D149FBD4C93540E909E6CA6A801_inline(__this, NULL);
		RuntimeObject* L_10 = __this->___TROP12SND_4;
		RuntimeObject* L_11 = __this->___MY_6;
		NullCheck(L_9);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, L_10, (0.300000012f), L_11, (100.0f), (100.0f));
		return (bool)0;
	}

IL_007c:
	{
		RuntimeObject* L_12;
		L_12 = LNCHTALK_get__world_m20350C4CDF747D149FBD4C93540E909E6CA6A801_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)1466075648), (bool)1, (bool)1);
		__this->___TROP09SND_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP09SND_7), (void*)L_14);
		RuntimeObject* L_15;
		L_15 = LNCHTALK_get_MY_m8A5EAE8C91923F65535B589FFD17C994DA00F40A_inline(__this, NULL);
		__this->___MY_9 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_9), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = LNCHTALK_get__world_m20350C4CDF747D149FBD4C93540E909E6CA6A801_inline(__this, NULL);
		RuntimeObject* L_17 = __this->___TROP09SND_7;
		RuntimeObject* L_18 = __this->___MY_9;
		NullCheck(L_16);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, L_17, (0.300000012f), L_18, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOUT_get_MY_m70BB41518164E1C2E776FEC7E185D356646EFA59 (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOUT_set_MY_m010050BB57FFE4E64506D53B33EA60F89890289D (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOUT_get_THERE_m5AEADBD58D8C4B40822A9369A32C8D4E4B42A0CE (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOUT_set_THERE_mA226A79792AFB15DED46A464C8F68D324D89F818 (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOUT_get__world_mDC9D77DC1C076B1FAA0D21835EFE2FBD70280BEF (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOUT_set__world_mC524F528D3CCA38B0DEE89229D1209DA0A72FA44 (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOUT_get_Current_m030C1F34618B672A240156A5BBAC976AAEABFDC2 (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOUT_set_Current_m91CE8A0C0E840B44CD6FF903678ED5695C9FCED0 (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOUT_Reset_mDDD15B2043528D6D5EB665ACEE044A62949345E8 (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOUT__ctor_m6DCDFC4426614DE507EE0D7C1C16A5ED8671ECED (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LNCHSHOUT__ctor_m52C7F2D53C397E6EE20974C05D456DDF88EA7221 (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LNCHSHOUT_set_MY_m010050BB57FFE4E64506D53B33EA60F89890289D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LNCHSHOUT_set_THERE_mA226A79792AFB15DED46A464C8F68D324D89F818_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LNCHSHOUT_set__world_mC524F528D3CCA38B0DEE89229D1209DA0A72FA44_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LNCHSHOUT_MoveNext_mFEBBBEFCF759F4A407B289129A14CA1573BAFE15 (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) 
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
		L_2 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_1, (0.800000012f), NULL);
		if (L_2)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = LNCHSHOUT_get__world_mDC9D77DC1C076B1FAA0D21835EFE2FBD70280BEF_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)1465860026), (bool)1, (bool)1);
		__this->___TROP03SND_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP03SND_2), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = LNCHSHOUT_get_MY_m70BB41518164E1C2E776FEC7E185D356646EFA59_inline(__this, NULL);
		__this->___MY_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_6);
		RuntimeObject* L_7;
		L_7 = LNCHSHOUT_get__world_mDC9D77DC1C076B1FAA0D21835EFE2FBD70280BEF_inline(__this, NULL);
		RuntimeObject* L_8 = __this->___TROP03SND_2;
		RuntimeObject* L_9 = __this->___MY_4;
		NullCheck(L_7);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, L_8, (0.300000012f), L_9, (100.0f), (100.0f));
		return (bool)0;
	}

IL_0069:
	{
		RuntimeObject* L_10;
		L_10 = LNCHSHOUT_get__world_mDC9D77DC1C076B1FAA0D21835EFE2FBD70280BEF_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)1467010010), (bool)1, (bool)1);
		__this->___TROP12SND_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TROP12SND_5), (void*)L_12);
		RuntimeObject* L_13;
		L_13 = LNCHSHOUT_get_MY_m70BB41518164E1C2E776FEC7E185D356646EFA59_inline(__this, NULL);
		__this->___MY_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_7), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = LNCHSHOUT_get__world_mDC9D77DC1C076B1FAA0D21835EFE2FBD70280BEF_inline(__this, NULL);
		RuntimeObject* L_15 = __this->___TROP12SND_5;
		RuntimeObject* L_16 = __this->___MY_7;
		NullCheck(L_14);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, L_15, (0.300000012f), L_16, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTTURN_get_MY_m026D44E90DA3FF5286219DB00026B3D4870B140C (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTURN_set_MY_mE6BDE8D06C7002764B492AE63E653318CAE35C5F (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTTURN_get_THERE_m63F9E36DF87400A91F30A4AFAF970D9230BED29A (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTURN_set_THERE_m87A60842EA20256807DD56A1D326DE447A08CD11 (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027 (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTURN_set__world_mA54AB029C1C84AA99FC9386CA133E0178E6959FD (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTTURN_get_Current_m91739EFD610533BC68143FF5DB47611D686F2A0E (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTURN_set_Current_mF31E724A9F501173527634141E6D866B02CF160E (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTURN_Reset_m559734F5FB9279A926627C280728B2F1409B3E40 (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTURN__ctor_mBBC3F0A8B50374421FDD6181D6AF615B089F2754 (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTURN__ctor_m7E79DB7F910CF4377B6CADB34C13EC3FC3EF8062 (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTTURN_set_MY_mE6BDE8D06C7002764B492AE63E653318CAE35C5F_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTTURN_set_THERE_m87A60842EA20256807DD56A1D326DE447A08CD11_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTTURN_set__world_mA54AB029C1C84AA99FC9386CA133E0178E6959FD_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTTURN_MoveNext_mC61A1016EC1CE38C0AC3397AA001D4D130D87DE9 (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* V_0 = NULL;
	TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* V_1 = NULL;
	TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)33817649));
		__this->___WAITTIME_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAITTIME_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
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
		REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* L_11 = (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737*)il2cpp_codegen_object_new(REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737_il2cpp_TypeInfo_var);
		REPTLISTEN__ctor_m1034124300BD54DF633FD67E9E17AC1CCD7A4FB8(L_11, NULL);
		V_0 = L_11;
		REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* L_12 = V_0;
		REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* L_13 = L_12;
		RuntimeObject* L_14;
		L_14 = REPTTURN_get_MY_m026D44E90DA3FF5286219DB00026B3D4870B140C_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_14);
		REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* L_15 = L_13;
		RuntimeObject* L_16;
		L_16 = REPTTURN_get_THERE_m63F9E36DF87400A91F30A4AFAF970D9230BED29A_inline(__this, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_15, L_16);
		RuntimeObject* L_17;
		L_17 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_15, L_17);
		RuntimeObject* L_18;
		L_18 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
		REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* L_19 = V_0;
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
		L_23 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, 5, ((int32_t)16701359));
		__this->___RIGHTTURNREPT_11 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNREPT_11), (void*)L_24);
		RuntimeObject* L_25;
		L_25 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, 5, ((int32_t)16701359));
		__this->___RIGHTTURNREPT_12 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNREPT_12), (void*)L_26);
		RuntimeObject* L_27 = __this->___RIGHTTURNREPT_12;
		NullCheck(L_27);
		float L_28;
		L_28 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNREPT_12_val = L_28;
		RuntimeObject* L_29;
		L_29 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, 5, ((int32_t)16701359));
		__this->___RIGHTTURNREPT_14 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNREPT_14), (void*)L_30);
		RuntimeObject* L_31 = __this->___RIGHTTURNREPT_14;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNREPT_14_val = L_32;
		RuntimeObject* L_33;
		L_33 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)16701359));
		__this->___RIGHTTURNREPT_20 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNREPT_20), (void*)L_34);
		RuntimeObject* L_35 = __this->___RIGHTTURNREPT_20;
		NullCheck(L_35);
		float L_36;
		L_36 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNREPT_20_val = L_36;
		RuntimeObject* L_37 = __this->___RIGHTTURNREPT_11;
		float L_38 = __this->___RIGHTTURNREPT_14_val;
		float L_39 = __this->___RIGHTTURNREPT_20_val;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_38, (1.0f))), ((float)il2cpp_codegen_subtract(L_39, (1.0f))))));
	}

IL_0196:
	{
		RuntimeObject* L_40;
		L_40 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_40, 5, ((int32_t)16701359));
		__this->___RIGHTTURNREPT_24 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNREPT_24), (void*)L_41);
		RuntimeObject* L_42 = __this->___RIGHTTURNREPT_24;
		NullCheck(L_42);
		float L_43;
		L_43 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNREPT_24_val = L_43;
		float L_44 = __this->___RIGHTTURNREPT_24_val;
		RuntimeObject* L_45 = __this->___RIGHTTURNREPT_24;
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
		L_50 = REPTTURN_get_MY_m026D44E90DA3FF5286219DB00026B3D4870B140C_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_51 = L_49;
		RuntimeObject* L_52;
		L_52 = REPTTURN_get_THERE_m63F9E36DF87400A91F30A4AFAF970D9230BED29A_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_52);
		RuntimeObject* L_53;
		L_53 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_53);
		RuntimeObject* L_54;
		L_54 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
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
		L_60 = REPTTURN_get_MY_m026D44E90DA3FF5286219DB00026B3D4870B140C_inline(__this, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_59, L_60);
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_61 = L_59;
		RuntimeObject* L_62;
		L_62 = REPTTURN_get_THERE_m63F9E36DF87400A91F30A4AFAF970D9230BED29A_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_62);
		RuntimeObject* L_63;
		L_63 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_63);
		RuntimeObject* L_64;
		L_64 = REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69 (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWAIT_set_MY_mBBF94C87B929BD4E77E09F9E9F3CCE80FAA511F0 (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTWAIT_get_THERE_m5CF8B25A39D32292CDB5AD8F44BE3037BAF3E709 (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWAIT_set_THERE_m9993ECB75B34D2C29AFBFF649C775144D54EFF02 (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTWAIT_get__world_mC8790079AC50BD3463F239FC606D519A5CDC236F (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWAIT_set__world_m7DC2B2A157CDE2578FFD7D331BEF823169121F19 (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTWAIT_get_Current_mD32F24F973D67CFC9B6439B8594204CD646D078B (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWAIT_set_Current_m170F3CC57036930CFC93B8E35ACF826A5BFE3D26 (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWAIT_Reset_m129D84BC0B2350A8967719A31F7D1C3D22E16C63 (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWAIT__ctor_m38058FB40D9A5C36F053C9FDD3891C6CF19901C0 (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWAIT__ctor_m73EA2E844AA9BC6289DA8F76751007266C9228F6 (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTWAIT_set_MY_mBBF94C87B929BD4E77E09F9E9F3CCE80FAA511F0_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTWAIT_set_THERE_m9993ECB75B34D2C29AFBFF649C775144D54EFF02_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTWAIT_set__world_m7DC2B2A157CDE2578FFD7D331BEF823169121F19_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTWAIT_MoveNext_mC85BFD8C4F5EB83B5B4F3FDAC969BC185B6C9FF4 (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) 
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
		L_1 = REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = REPTWAIT_get__world_mC8790079AC50BD3463F239FC606D519A5CDC236F_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-1460493692), (bool)1, (bool)1);
		__this->___REPTJUMP_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTJUMP_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___REPTJUMP_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)192), L_8);
		RuntimeObject* L_9;
		L_9 = REPTWAIT_get__world_mC8790079AC50BD3463F239FC606D519A5CDC236F_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)967398355), (bool)1, (bool)1);
		__this->___REPTFOLLOWATTACK_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTFOLLOWATTACK_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___REPTFOLLOWATTACK_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)193), L_14);
		RuntimeObject* L_15;
		L_15 = REPTWAIT_get__world_mC8790079AC50BD3463F239FC606D519A5CDC236F_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)-1818167088), (bool)1, (bool)1);
		__this->___CYCLEREPTATTACK_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEREPTATTACK_9), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline(__this, NULL);
		__this->___MY_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_11;
		RuntimeObject* L_20 = __this->___CYCLEREPTATTACK_9;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)190), L_20);
		RuntimeObject* L_21;
		L_21 = REPTWAIT_get__world_mC8790079AC50BD3463F239FC606D519A5CDC236F_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)1387396781), (bool)1, (bool)1);
		__this->___REPTHIT_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIT_12), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline(__this, NULL);
		__this->___MY_14 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_24);
		RuntimeObject* L_25 = __this->___MY_14;
		RuntimeObject* L_26 = __this->___REPTHIT_12;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)209), L_26);
		RuntimeObject* L_27;
		L_27 = REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline(__this, NULL);
		__this->___MY_17 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_17;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)213), (0.0f));
		RuntimeObject* L_29;
		L_29 = REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline(__this, NULL);
		__this->___MY_20 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_20;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_31;
		L_31 = REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline(__this, NULL);
		__this->___MY_23 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_23;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)176), (0.0f));
		RuntimeObject* L_33;
		L_33 = REPTWAIT_get__world_mC8790079AC50BD3463F239FC606D519A5CDC236F_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)-1461429399), (bool)1, (bool)1);
		__this->___REPT0TEX_24 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT0TEX_24), (void*)L_35);
		RuntimeObject* L_36;
		L_36 = REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline(__this, NULL);
		__this->___MY_26 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_26;
		RuntimeObject* L_38 = __this->___REPT0TEX_24;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)164), L_38);
		RuntimeObject* L_39;
		L_39 = REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline(__this, NULL);
		__this->___MY_29 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_29;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)168), (0.0f));
		RuntimeObject* L_41;
		L_41 = REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline(__this, NULL);
		__this->___MY_32 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_41);
		RuntimeObject* L_42 = __this->___MY_32;
		NullCheck(L_42);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)199), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5 (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWANDER_set_MY_m432783D41A05AA1EB9EA96094759CA6A3199AA80 (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTWANDER_get_THERE_m33656E3E33B70DD69EDBA6A653C54F6C94D2B2EF (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWANDER_set_THERE_m9E86D15CF4C6DCA37F18A6BB8A3204A09E5D7878 (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTWANDER_get__world_mBEF9BD256827216A49517DCA43914E0B6B8B868E (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWANDER_set__world_m8B299C029AC86B5C035C57AFCA0BE832B722385D (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTWANDER_get_Current_m43C0E0B1B0EE23A90C319E1E3EF719A34685C288 (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWANDER_set_Current_mD4D6AB963A64215678796A393B26A94BE1F51977 (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWANDER_Reset_m2DD291A3EB0E3AEDE789165AFC5F0EFC54A38320 (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWANDER__ctor_mE72FB9F0636B26DB53972E1CBCDC00AFB0553AC1 (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTWANDER__ctor_m71845D00B6E7BA77211D5FA9786F7D962B3E650C (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTWANDER_set_MY_m432783D41A05AA1EB9EA96094759CA6A3199AA80_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTWANDER_set_THERE_m9E86D15CF4C6DCA37F18A6BB8A3204A09E5D7878_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTWANDER_set__world_m8B299C029AC86B5C035C57AFCA0BE832B722385D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTWANDER_MoveNext_mD66A84BA9D83A10F486CA14C3C95DEFA86623559 (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) 
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
		L_1 = REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = REPTWANDER_get__world_mBEF9BD256827216A49517DCA43914E0B6B8B868E_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-1460493692), (bool)1, (bool)1);
		__this->___REPTJUMP_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTJUMP_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___REPTJUMP_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)192), L_8);
		RuntimeObject* L_9;
		L_9 = REPTWANDER_get__world_mBEF9BD256827216A49517DCA43914E0B6B8B868E_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)967398355), (bool)1, (bool)1);
		__this->___REPTFOLLOWATTACK_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTFOLLOWATTACK_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___REPTFOLLOWATTACK_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)193), L_14);
		RuntimeObject* L_15;
		L_15 = REPTWANDER_get__world_mBEF9BD256827216A49517DCA43914E0B6B8B868E_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)-1818167088), (bool)1, (bool)1);
		__this->___CYCLEREPTATTACK_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEREPTATTACK_9), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5_inline(__this, NULL);
		__this->___MY_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_11;
		RuntimeObject* L_20 = __this->___CYCLEREPTATTACK_9;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)190), L_20);
		RuntimeObject* L_21;
		L_21 = REPTWANDER_get__world_mBEF9BD256827216A49517DCA43914E0B6B8B868E_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)1387396781), (bool)1, (bool)1);
		__this->___REPTHIT_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIT_12), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5_inline(__this, NULL);
		__this->___MY_14 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_24);
		RuntimeObject* L_25 = __this->___MY_14;
		RuntimeObject* L_26 = __this->___REPTHIT_12;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)209), L_26);
		RuntimeObject* L_27;
		L_27 = REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5_inline(__this, NULL);
		__this->___MY_17 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_17;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)176), (1.0f));
		RuntimeObject* L_29;
		L_29 = REPTWANDER_get__world_mBEF9BD256827216A49517DCA43914E0B6B8B868E_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)-1461393462), (bool)1, (bool)1);
		__this->___REPT1TEX_18 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT1TEX_18), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5_inline(__this, NULL);
		__this->___MY_20 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_20;
		RuntimeObject* L_34 = __this->___REPT1TEX_18;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)164), L_34);
		RuntimeObject* L_35;
		L_35 = REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5_inline(__this, NULL);
		__this->___MY_23 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_23;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)168), (0.300000012f));
		RuntimeObject* L_37;
		L_37 = REPTWANDER_get__world_mBEF9BD256827216A49517DCA43914E0B6B8B868E_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_24 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_24), (void*)L_39);
		RuntimeObject* L_40;
		L_40 = REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5_inline(__this, NULL);
		__this->___MY_26 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_40);
		RuntimeObject* L_41 = __this->___MY_26;
		RuntimeObject* L_42 = __this->___BULLET_24;
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)199), L_42);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTSEARCH_get_MY_mDBBCBB4DAF28B6A4F214BD9BF3E36FC722017E86 (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSEARCH_set_MY_m3C21F9655FFB4F4C10EC7B46AE7ADFEB1A701CBB (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTSEARCH_get_THERE_m4462613AD72B7500286A06730E0C7D7AE42D9F5F (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSEARCH_set_THERE_m1B3D2A92EFCB1A7E6F255A0C6E86E6B0BBE5AB11 (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTSEARCH_get__world_mBEF23E9789F92B1E1306A0873B9722D2C87A2945 (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSEARCH_set__world_mBE540011073F43CF78BCDB22B89C8BED1C2FC07B (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTSEARCH_get_Current_m73F8284E6CF8601B57951B147B08B619909ED238 (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSEARCH_set_Current_m925A28564D4B20C76BAC26DB13EED8846178390A (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSEARCH_Reset_m5DFD256F6E969C3059BE7574FBC5D5871661C050 (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSEARCH__ctor_m61D3D68EE835DF8E7FC478DE661B6D50BEF61F6B (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSEARCH__ctor_m2B0A852E453924BECB8B7D32ADA435CE2EB16666 (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTSEARCH_set_MY_m3C21F9655FFB4F4C10EC7B46AE7ADFEB1A701CBB_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTSEARCH_set_THERE_m1B3D2A92EFCB1A7E6F255A0C6E86E6B0BBE5AB11_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTSEARCH_set__world_mBE540011073F43CF78BCDB22B89C8BED1C2FC07B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTSEARCH_MoveNext_m9D28C31F9CB8698DCBFD393886DB0F69FE237CF9 (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_0 = NULL;
	REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* V_1 = NULL;
	REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = REPTSEARCH_get_MY_mDBBCBB4DAF28B6A4F214BD9BF3E36FC722017E86_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = REPTSEARCH_get_MY_mDBBCBB4DAF28B6A4F214BD9BF3E36FC722017E86_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = REPTSEARCH_get_MY_mDBBCBB4DAF28B6A4F214BD9BF3E36FC722017E86_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = REPTSEARCH_get__world_mBEF23E9789F92B1E1306A0873B9722D2C87A2945_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)1387396781), (bool)1, (bool)1);
		__this->___REPTHIT_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIT_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = REPTSEARCH_get_MY_mDBBCBB4DAF28B6A4F214BD9BF3E36FC722017E86_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___REPTHIT_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)209), L_12);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_13 = (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511*)il2cpp_codegen_object_new(LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D(L_13, NULL);
		V_0 = L_13;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_14 = V_0;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_15 = L_14;
		RuntimeObject* L_16;
		L_16 = REPTSEARCH_get_MY_mDBBCBB4DAF28B6A4F214BD9BF3E36FC722017E86_inline(__this, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_15, L_16);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_17 = L_15;
		RuntimeObject* L_18;
		L_18 = REPTSEARCH_get_THERE_m4462613AD72B7500286A06730E0C7D7AE42D9F5F_inline(__this, NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_17, L_18);
		RuntimeObject* L_19;
		L_19 = REPTSEARCH_get__world_mBEF23E9789F92B1E1306A0873B9722D2C87A2945_inline(__this, NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_17, L_19);
		RuntimeObject* L_20;
		L_20 = REPTSEARCH_get__world_mBEF23E9789F92B1E1306A0873B9722D2C87A2945_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_21 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_21);
		RuntimeObject* L_23;
		L_23 = REPTSEARCH_get_MY_mDBBCBB4DAF28B6A4F214BD9BF3E36FC722017E86_inline(__this, NULL);
		__this->___MY_14 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_14;
		NullCheck(L_24);
		float L_25;
		L_25 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)181), (bool)1);
		__this->___temp_15 = L_25;
		float L_26 = __this->___temp_15;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_26, (0.0f), NULL);
		if (!L_27)
		{
			goto IL_0144;
		}
	}
	{
		REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* L_28 = (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E*)il2cpp_codegen_object_new(REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E_il2cpp_TypeInfo_var);
		REPTWAIT__ctor_m38058FB40D9A5C36F053C9FDD3891C6CF19901C0(L_28, NULL);
		V_1 = L_28;
		REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* L_29 = V_1;
		REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* L_30 = L_29;
		RuntimeObject* L_31;
		L_31 = REPTSEARCH_get_MY_mDBBCBB4DAF28B6A4F214BD9BF3E36FC722017E86_inline(__this, NULL);
		NullCheck(L_30);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_30, L_31);
		REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* L_32 = L_30;
		RuntimeObject* L_33;
		L_33 = REPTSEARCH_get_THERE_m4462613AD72B7500286A06730E0C7D7AE42D9F5F_inline(__this, NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_32, L_33);
		RuntimeObject* L_34;
		L_34 = REPTSEARCH_get__world_mBEF23E9789F92B1E1306A0873B9722D2C87A2945_inline(__this, NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_32, L_34);
		RuntimeObject* L_35;
		L_35 = REPTSEARCH_get__world_mBEF23E9789F92B1E1306A0873B9722D2C87A2945_inline(__this, NULL);
		REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* L_36 = V_1;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_36);
		return (bool)0;
	}

IL_0144:
	{
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_38 = (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854*)il2cpp_codegen_object_new(REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854_il2cpp_TypeInfo_var);
		REPTFOLLOWATTACK__ctor_m850D312D9EC7230283ED3E48079C32944D1AD9A6(L_38, NULL);
		V_2 = L_38;
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_39 = V_2;
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_40 = L_39;
		RuntimeObject* L_41;
		L_41 = REPTSEARCH_get_MY_mDBBCBB4DAF28B6A4F214BD9BF3E36FC722017E86_inline(__this, NULL);
		NullCheck(L_40);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_40, L_41);
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_42 = L_40;
		RuntimeObject* L_43;
		L_43 = REPTSEARCH_get_THERE_m4462613AD72B7500286A06730E0C7D7AE42D9F5F_inline(__this, NULL);
		NullCheck(L_42);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_42, L_43);
		RuntimeObject* L_44;
		L_44 = REPTSEARCH_get__world_mBEF23E9789F92B1E1306A0873B9722D2C87A2945_inline(__this, NULL);
		NullCheck(L_42);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_42, L_44);
		RuntimeObject* L_45;
		L_45 = REPTSEARCH_get__world_mBEF23E9789F92B1E1306A0873B9722D2C87A2945_inline(__this, NULL);
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_46 = V_2;
		NullCheck(L_45);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_46);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98 (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIDE_set_MY_m197829EFF71C4E0B0C9CFE72648AB8494278C7AA (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHIDE_get_THERE_m74F2206D78735605061161FB9B8F4C14FCE3AFDF (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIDE_set_THERE_m865DB2851F12B3A293B437504109213E562F1D7A (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHIDE_get__world_mC5AA8B86FB4FB0718CB4EE2D27C51C9A0C15AE2A (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIDE_set__world_mDC94E333C7F28B8198EBC10B8EFFA778F6879AD9 (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHIDE_get_Current_m327974A4308A79278B5178D08C801B2A348E0FC1 (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIDE_set_Current_m08BF7C3CF7188D3D997DC6E8E81C4C1AE532CA42 (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIDE_Reset_mE2A66A08023695A14939F6F7E85EA2446CDA5F6C (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIDE__ctor_mBA7BC83979D18C547F3F97B59E9B5F7B019014F8 (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIDE__ctor_m6227A5CF39BD1EC69EB53E72EB9CA0524862BDD1 (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTHIDE_set_MY_m197829EFF71C4E0B0C9CFE72648AB8494278C7AA_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTHIDE_set_THERE_m865DB2851F12B3A293B437504109213E562F1D7A_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTHIDE_set__world_mDC94E333C7F28B8198EBC10B8EFFA778F6879AD9_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTHIDE_MoveNext_m52F8251B32951AA37D6F9856CF33CED18B25B5E3 (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_0 = NULL;
	REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_02cd;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)207), (1.0f));
		RuntimeObject* L_3;
		L_3 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = REPTHIDE_get__world_mC5AA8B86FB4FB0718CB4EE2D27C51C9A0C15AE2A_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)-1539240871), (bool)1, (bool)1);
		__this->___REPTESCAPE_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTESCAPE_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___REPTESCAPE_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)192), L_10);
		RuntimeObject* L_11;
		L_11 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_11;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_13;
		L_13 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_14;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)190), (RuntimeObject*)NULL);
		RuntimeObject* L_15;
		L_15 = REPTHIDE_get__world_mC5AA8B86FB4FB0718CB4EE2D27C51C9A0C15AE2A_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)1387396781), (bool)1, (bool)1);
		__this->___REPTHIT_15 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIT_15), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_17;
		RuntimeObject* L_20 = __this->___REPTHIT_15;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)209), L_20);
		RuntimeObject* L_21;
		L_21 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (4.0f));
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_23 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_23, NULL);
		V_0 = L_23;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_24 = V_0;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_25 = L_24;
		RuntimeObject* L_26;
		L_26 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_26);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_27 = L_25;
		RuntimeObject* L_28;
		L_28 = REPTHIDE_get_THERE_m74F2206D78735605061161FB9B8F4C14FCE3AFDF_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_28);
		RuntimeObject* L_29;
		L_29 = REPTHIDE_get__world_mC5AA8B86FB4FB0718CB4EE2D27C51C9A0C15AE2A_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_29);
		RuntimeObject* L_30;
		L_30 = REPTHIDE_get__world_mC5AA8B86FB4FB0718CB4EE2D27C51C9A0C15AE2A_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_31 = V_0;
		NullCheck(L_30);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_30, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_31);
		RuntimeObject* L_33;
		L_33 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_22 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_24 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_24;
		NullCheck(L_35);
		float L_36;
		L_36 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)194), (bool)1);
		__this->___temp_25 = L_36;
		RuntimeObject* L_37;
		L_37 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_27 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_37);
		RuntimeObject* L_38 = __this->___MY_27;
		NullCheck(L_38);
		float L_39;
		L_39 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)194), (bool)1);
		__this->___temp_28 = L_39;
		RuntimeObject* L_40 = __this->___MY_22;
		float L_41 = __this->___temp_28;
		float L_42;
		L_42 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)194), ((float)il2cpp_codegen_add(L_41, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_42, (0.5f))), (2.4000001f))))));
		RuntimeObject* L_43;
		L_43 = REPTHIDE_get__world_mC5AA8B86FB4FB0718CB4EE2D27C51C9A0C15AE2A_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_43);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)-1461393462), (bool)1, (bool)1);
		__this->___REPT1TEX_37 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT1TEX_37), (void*)L_45);
		RuntimeObject* L_46;
		L_46 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_39 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_39), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_39;
		RuntimeObject* L_48 = __this->___REPT1TEX_37;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)164), L_48);
		RuntimeObject* L_49;
		L_49 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_42 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_42), (void*)L_49);
		RuntimeObject* L_50 = __this->___MY_42;
		NullCheck(L_50);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)172), (20.0f));
		RuntimeObject* L_51;
		L_51 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_45 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_45), (void*)L_51);
		RuntimeObject* L_52 = __this->___MY_45;
		NullCheck(L_52);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)168), (0.5f));
		RuntimeObject* L_53;
		L_53 = REPTHIDE_get__world_mC5AA8B86FB4FB0718CB4EE2D27C51C9A0C15AE2A_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_53);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_46 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_46), (void*)L_55);
		RuntimeObject* L_56;
		L_56 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_48 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_48), (void*)L_56);
		RuntimeObject* L_57 = __this->___MY_48;
		RuntimeObject* L_58 = __this->___BULLET_46;
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)199), L_58);
		float L_59;
		L_59 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_59;
		float L_60 = __this->___startTime1;
		float L_61;
		L_61 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)384), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_60, L_61));
		__this->____cursor = 1;
		goto IL_02cd;
	}

IL_02c0:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_62 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		REPTHIDE_set_Current_m08BF7C3CF7188D3D997DC6E8E81C4C1AE532CA42_inline(__this, L_62, NULL);
		return (bool)1;
	}

IL_02cd:
	{
		float L_63;
		L_63 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_64 = __this->___endTime1;
		if ((((float)L_63) < ((float)L_64)))
		{
			goto IL_02c0;
		}
	}
	{
		REPTHIDE_set_Current_m08BF7C3CF7188D3D997DC6E8E81C4C1AE532CA42_inline(__this, NULL, NULL);
		RuntimeObject* L_65;
		L_65 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_52 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_52), (void*)L_65);
		RuntimeObject* L_66 = __this->___MY_52;
		NullCheck(L_66);
		float L_67;
		L_67 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)173), (bool)1);
		__this->___temp_53 = L_67;
		float L_68 = __this->___temp_53;
		bool L_69;
		L_69 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_68, (5.0f), NULL);
		if (!L_69)
		{
			goto IL_0318;
		}
	}
	{
		return (bool)0;
	}

IL_0318:
	{
		RuntimeObject* L_70;
		L_70 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_56 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_56), (void*)L_70);
		RuntimeObject* L_71 = __this->___MY_56;
		NullCheck(L_71);
		float L_72;
		L_72 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_71, ((int32_t)173), (bool)1);
		__this->___temp_57 = L_72;
		RuntimeObject* L_73;
		L_73 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		__this->___MY_59 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_59), (void*)L_73);
		RuntimeObject* L_74 = __this->___MY_59;
		float L_75 = __this->___temp_57;
		NullCheck(L_74);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_74, ((int32_t)173), ((float)il2cpp_codegen_add(L_75, (-2.0f))));
		REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* L_76 = (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C*)il2cpp_codegen_object_new(REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C_il2cpp_TypeInfo_var);
		REPTWANDER__ctor_mE72FB9F0636B26DB53972E1CBCDC00AFB0553AC1(L_76, NULL);
		V_1 = L_76;
		REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* L_77 = V_1;
		REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* L_78 = L_77;
		RuntimeObject* L_79;
		L_79 = REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline(__this, NULL);
		NullCheck(L_78);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_78, L_79);
		REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* L_80 = L_78;
		RuntimeObject* L_81;
		L_81 = REPTHIDE_get_THERE_m74F2206D78735605061161FB9B8F4C14FCE3AFDF_inline(__this, NULL);
		NullCheck(L_80);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_80, L_81);
		RuntimeObject* L_82;
		L_82 = REPTHIDE_get__world_mC5AA8B86FB4FB0718CB4EE2D27C51C9A0C15AE2A_inline(__this, NULL);
		NullCheck(L_80);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_80, L_82);
		RuntimeObject* L_83;
		L_83 = REPTHIDE_get__world_mC5AA8B86FB4FB0718CB4EE2D27C51C9A0C15AE2A_inline(__this, NULL);
		REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* L_84 = V_1;
		NullCheck(L_83);
		RuntimeObject* L_85;
		L_85 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_83, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_84);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528 (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLISTEN_set_MY_m2136D2169505823659ADCBF914EBCFBA6B998652 (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTLISTEN_get_THERE_mE63D91C9C5BBA4E08CDF95AE302406F5F9B6499A (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLISTEN_set_THERE_mEAB3E96CD1F4FA953F41E85E0C05F2328E875C70 (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTLISTEN_get__world_m5779970F2DD0BA7345A0ACD569DEA123FA96C82D (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLISTEN_set__world_mDF4202CEA329158217B6ECE59ECECD70575C26C1 (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTLISTEN_get_Current_mD9730C56683126F39A6E3A551E709762CD596EB8 (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLISTEN_set_Current_mA45F784C1BF228DF8B452A3794D3ED0D66AC711E (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLISTEN_Reset_m59764906B6A3A2AA36988EB29117C7F3571DD7ED (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLISTEN__ctor_m1034124300BD54DF633FD67E9E17AC1CCD7A4FB8 (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLISTEN__ctor_m9A43FDB26020206CD59296378DFB57ECA2718E7F (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTLISTEN_set_MY_m2136D2169505823659ADCBF914EBCFBA6B998652_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTLISTEN_set_THERE_mEAB3E96CD1F4FA953F41E85E0C05F2328E875C70_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTLISTEN_set__world_mDF4202CEA329158217B6ECE59ECECD70575C26C1_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTLISTEN_MoveNext_mBDCC6E908B0C4EB31BB3385E4EFF2E76DD18FC11 (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0197;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = REPTLISTEN_get__world_m5779970F2DD0BA7345A0ACD569DEA123FA96C82D_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)-1818167088), (bool)1, (bool)1);
		__this->___CYCLEREPTATTACK_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEREPTATTACK_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___CYCLEREPTATTACK_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)190), L_10);
		RuntimeObject* L_11;
		L_11 = REPTLISTEN_get__world_m5779970F2DD0BA7345A0ACD569DEA123FA96C82D_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)1387396781), (bool)1, (bool)1);
		__this->___REPTHIT_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIT_9), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline(__this, NULL);
		__this->___MY_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_11;
		RuntimeObject* L_16 = __this->___REPTHIT_9;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)209), L_16);
		RuntimeObject* L_17;
		L_17 = REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)176), (0.0f));
		RuntimeObject* L_19;
		L_19 = REPTLISTEN_get__world_m5779970F2DD0BA7345A0ACD569DEA123FA96C82D_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)-1461429399), (bool)1, (bool)1);
		__this->___REPT0TEX_15 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT0TEX_15), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline(__this, NULL);
		__this->___MY_17 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_17;
		RuntimeObject* L_24 = __this->___REPT0TEX_15;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)164), L_24);
		RuntimeObject* L_25;
		L_25 = REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline(__this, NULL);
		__this->___MY_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_20;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)168), (0.0f));
		RuntimeObject* L_27;
		L_27 = REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline(__this, NULL);
		__this->___MY_23 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_23;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)199), (RuntimeObject*)NULL);
		float L_29;
		L_29 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_29;
		float L_30 = __this->___startTime1;
		float L_31;
		L_31 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)120), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_30, L_31));
		__this->____cursor = 1;
		goto IL_0197;
	}

IL_018a:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_32 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		REPTLISTEN_set_Current_mA45F784C1BF228DF8B452A3794D3ED0D66AC711E_inline(__this, L_32, NULL);
		return (bool)1;
	}

IL_0197:
	{
		float L_33;
		L_33 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_34 = __this->___endTime1;
		if ((((float)L_33) < ((float)L_34)))
		{
			goto IL_018a;
		}
	}
	{
		REPTLISTEN_set_Current_mA45F784C1BF228DF8B452A3794D3ED0D66AC711E_inline(__this, NULL, NULL);
		RuntimeObject* L_35;
		L_35 = REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline(__this, NULL);
		__this->___MY_27 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_27;
		NullCheck(L_36);
		float L_37;
		L_37 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)173), (bool)1);
		__this->___temp_28 = L_37;
		float L_38 = __this->___temp_28;
		bool L_39;
		L_39 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_38, (9.0f), NULL);
		if (!L_39)
		{
			goto IL_021a;
		}
	}
	{
		REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* L_40 = (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C*)il2cpp_codegen_object_new(REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C_il2cpp_TypeInfo_var);
		REPTWANDER__ctor_mE72FB9F0636B26DB53972E1CBCDC00AFB0553AC1(L_40, NULL);
		V_0 = L_40;
		REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* L_41 = V_0;
		REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* L_42 = L_41;
		RuntimeObject* L_43;
		L_43 = REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline(__this, NULL);
		NullCheck(L_42);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_42, L_43);
		REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* L_44 = L_42;
		RuntimeObject* L_45;
		L_45 = REPTLISTEN_get_THERE_mE63D91C9C5BBA4E08CDF95AE302406F5F9B6499A_inline(__this, NULL);
		NullCheck(L_44);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_44, L_45);
		RuntimeObject* L_46;
		L_46 = REPTLISTEN_get__world_m5779970F2DD0BA7345A0ACD569DEA123FA96C82D_inline(__this, NULL);
		NullCheck(L_44);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_44, L_46);
		RuntimeObject* L_47;
		L_47 = REPTLISTEN_get__world_m5779970F2DD0BA7345A0ACD569DEA123FA96C82D_inline(__this, NULL);
		REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* L_48 = V_0;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_48);
		return (bool)0;
	}

IL_021a:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTJUMP_get_MY_m7D8F1F25594C5A651F42B06D0AF32CA390E683A4 (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTJUMP_set_MY_m5DD5F150E92D8A84919A570A6DE1ACA52C91EDC2 (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTJUMP_get_THERE_m7D6B66A530C5B9CF299EFB334B24F16C44B32563 (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTJUMP_set_THERE_mEFBAF2AE8DCBEC54FB0A53AC0CFF660E82111E6B (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTJUMP_get__world_mB1524072E29889D63CB1AA0C068B494C40C95DEC (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTJUMP_set__world_m5F30C58E96C55C2B875E5B7D1B7C66E5152890BB (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTJUMP_get_Current_m97F0CADD738FB1D94DF9361E790D48025B223F63 (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTJUMP_set_Current_mE91413AAD686CFA460539A8685ED95B485BE320D (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTJUMP_Reset_m3F53AAED87EE97EFB0072F7DED0CAECD3F278985 (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTJUMP__ctor_m88461E919B9B85A45D9059B5AA634C591B73D4BD (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTJUMP__ctor_mCDF94C0037215BB6896D60EC803E6F153FAFC33E (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTJUMP_set_MY_m5DD5F150E92D8A84919A570A6DE1ACA52C91EDC2_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTJUMP_set_THERE_mEFBAF2AE8DCBEC54FB0A53AC0CFF660E82111E6B_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTJUMP_set__world_m5F30C58E96C55C2B875E5B7D1B7C66E5152890BB_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTJUMP_MoveNext_m439F1902E9470A5056C622FA78EF53556BD0DD88 (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_0 = NULL;
	REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = REPTJUMP_get_MY_m7D8F1F25594C5A651F42B06D0AF32CA390E683A4_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)182), (bool)1);
		__this->___temp_3 = L_3;
		float L_4 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_4, (1.0f), NULL);
		if (L_5)
		{
			goto IL_00ab;
		}
	}
	{
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_6 = (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511*)il2cpp_codegen_object_new(LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D(L_6, NULL);
		V_0 = L_6;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_7 = V_0;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_8 = L_7;
		RuntimeObject* L_9;
		L_9 = REPTJUMP_get_MY_m7D8F1F25594C5A651F42B06D0AF32CA390E683A4_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_8, L_9);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_10 = L_8;
		RuntimeObject* L_11;
		L_11 = REPTJUMP_get_THERE_m7D6B66A530C5B9CF299EFB334B24F16C44B32563_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12;
		L_12 = REPTJUMP_get__world_mB1524072E29889D63CB1AA0C068B494C40C95DEC_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_12);
		RuntimeObject* L_13;
		L_13 = REPTJUMP_get__world_mB1524072E29889D63CB1AA0C068B494C40C95DEC_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_14 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_14);
		RuntimeObject* L_16;
		L_16 = REPTJUMP_get_MY_m7D8F1F25594C5A651F42B06D0AF32CA390E683A4_inline(__this, NULL);
		__this->___MY_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_6;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)181), (bool)1);
		__this->___temp_7 = L_18;
		float L_19 = __this->___temp_7;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_19, (0.0f), NULL);
		if (!L_20)
		{
			goto IL_00ab;
		}
	}
	{
		return (bool)0;
	}

IL_00ab:
	{
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_21 = (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC*)il2cpp_codegen_object_new(REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC_il2cpp_TypeInfo_var);
		REPTTALK__ctor_m7115B6714BE1D58B3DA30B6F071EC7E3428C41BB(L_21, NULL);
		V_1 = L_21;
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_22 = V_1;
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_23 = L_22;
		RuntimeObject* L_24;
		L_24 = REPTJUMP_get_MY_m7D8F1F25594C5A651F42B06D0AF32CA390E683A4_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_24);
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_25 = L_23;
		RuntimeObject* L_26;
		L_26 = REPTJUMP_get_THERE_m7D6B66A530C5B9CF299EFB334B24F16C44B32563_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_26);
		RuntimeObject* L_27;
		L_27 = REPTJUMP_get__world_mB1524072E29889D63CB1AA0C068B494C40C95DEC_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_27);
		RuntimeObject* L_28;
		L_28 = REPTJUMP_get__world_mB1524072E29889D63CB1AA0C068B494C40C95DEC_inline(__this, NULL);
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_29 = V_1;
		NullCheck(L_28);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_29);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7 (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLOOKFOR_set_MY_mAB60BCF98327E1DF6E9D35E62CC8B40495E3282D (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTLOOKFOR_get_THERE_m313A8527A80D4389533FF467C357D35A37A867F0 (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLOOKFOR_set_THERE_m8601475FD9667B579F3E0E0EDD1BCD696D3FCA73 (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTLOOKFOR_get__world_m04A55874A2F1B55B5521C0FC2802F01259CB5737 (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLOOKFOR_set__world_m908CEF934F8AB8590A7663F76E47328162F35F76 (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTLOOKFOR_get_Current_m23AF11BF6B53985BF19F124B450CB6B3AA8248DE (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLOOKFOR_set_Current_mF9B260A2C86116D323A40ACE0C76EC6F2C0B0C6A (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLOOKFOR_Reset_mBE503CC4E349BC34E8918BC87E4851726A9BFBC2 (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLOOKFOR__ctor_mB42D87700A209EF376D4F746945FDF19CAE4F6B5 (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTLOOKFOR__ctor_m787FBB34CC04D51F8D814C2C16AF2546B81743A4 (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTLOOKFOR_set_MY_mAB60BCF98327E1DF6E9D35E62CC8B40495E3282D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTLOOKFOR_set_THERE_m8601475FD9667B579F3E0E0EDD1BCD696D3FCA73_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTLOOKFOR_set__world_m908CEF934F8AB8590A7663F76E47328162F35F76_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTLOOKFOR_MoveNext_mFDEAC4D2FD82EDBD5990A7319A12F3BE1184F470 (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B10_0 = NULL;
	REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* G_B10_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* G_B9_1 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* G_B11_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
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
		L_5 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_4, (0.0f), NULL);
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
		L_6 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_6;
		NullCheck(L_7);
		float L_8;
		L_8 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)176), (bool)1);
		__this->___temp_7 = L_8;
		float L_9 = __this->___temp_7;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_9, (4.0f), NULL);
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
		L_11 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
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
		if (!L_15)
		{
			goto IL_00ac;
		}
	}
	{
		return (bool)0;
	}

IL_00ac:
	{
		RuntimeObject* L_16;
		L_16 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_14;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)176), (bool)1);
		__this->___temp_15 = L_18;
		float L_19 = __this->___temp_15;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_19, (10.0f), NULL);
		if (!L_20)
		{
			goto IL_00e3;
		}
	}
	{
		return (bool)0;
	}

IL_00e3:
	{
		RuntimeObject* L_21;
		L_21 = REPTLOOKFOR_get__world_m04A55874A2F1B55B5521C0FC2802F01259CB5737_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_16 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_16), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_18 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_24);
		RuntimeObject* L_25 = __this->___MY_18;
		RuntimeObject* L_26 = L_25;
		if (L_26)
		{
			G_B10_0 = L_26;
			G_B10_1 = __this;
			goto IL_011a;
		}
		G_B9_0 = L_26;
		G_B9_1 = __this;
	}
	{
		G_B11_0 = ((RuntimeObject*)(NULL));
		G_B11_1 = G_B9_1;
		goto IL_0126;
	}

IL_011a:
	{
		NullCheck(G_B10_0);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B10_0, ((int32_t)199), (bool)1, (bool)1);
		G_B11_0 = L_27;
		G_B11_1 = G_B10_1;
	}

IL_0126:
	{
		NullCheck(G_B11_1);
		G_B11_1->___temp_19 = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->___temp_19), (void*)G_B11_0);
		RuntimeObject* L_28 = __this->___temp_19;
		RuntimeObject* L_29 = __this->___FOLLOW_16;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_0140;
		}
	}
	{
		return (bool)0;
	}

IL_0140:
	{
		RuntimeObject* L_31;
		L_31 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_22 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_22;
		NullCheck(L_32);
		float L_33;
		L_33 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)173), (bool)1);
		__this->___temp_23 = L_33;
		float L_34 = __this->___temp_23;
		bool L_35;
		L_35 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_34, (5.0f), NULL);
		if (!L_35)
		{
			goto IL_0177;
		}
	}
	{
		return (bool)0;
	}

IL_0177:
	{
		RuntimeObject* L_36;
		L_36 = REPTLOOKFOR_get__world_m04A55874A2F1B55B5521C0FC2802F01259CB5737_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_36);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)-1460493692), (bool)1, (bool)1);
		__this->___REPTJUMP_24 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTJUMP_24), (void*)L_38);
		RuntimeObject* L_39;
		L_39 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_26 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_26;
		RuntimeObject* L_41 = __this->___REPTJUMP_24;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)192), L_41);
		RuntimeObject* L_42;
		L_42 = REPTLOOKFOR_get__world_m04A55874A2F1B55B5521C0FC2802F01259CB5737_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)967398355), (bool)1, (bool)1);
		__this->___REPTFOLLOWATTACK_27 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTFOLLOWATTACK_27), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_29 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_45);
		RuntimeObject* L_46 = __this->___MY_29;
		RuntimeObject* L_47 = __this->___REPTFOLLOWATTACK_27;
		NullCheck(L_46);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)193), L_47);
		RuntimeObject* L_48;
		L_48 = REPTLOOKFOR_get__world_m04A55874A2F1B55B5521C0FC2802F01259CB5737_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)-1460583384), (bool)1, (bool)1);
		__this->___REPTHEAR_30 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHEAR_30), (void*)L_50);
		RuntimeObject* L_51;
		L_51 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_32 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_51);
		RuntimeObject* L_52 = __this->___MY_32;
		RuntimeObject* L_53 = __this->___REPTHEAR_30;
		NullCheck(L_52);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)190), L_53);
		RuntimeObject* L_54;
		L_54 = REPTLOOKFOR_get__world_m04A55874A2F1B55B5521C0FC2802F01259CB5737_inline(__this, NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)1387396781), (bool)1, (bool)1);
		__this->___REPTHIT_33 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIT_33), (void*)L_56);
		RuntimeObject* L_57;
		L_57 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_35 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_35), (void*)L_57);
		RuntimeObject* L_58 = __this->___MY_35;
		RuntimeObject* L_59 = __this->___REPTHIT_33;
		NullCheck(L_58);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)209), L_59);
		RuntimeObject* L_60;
		L_60 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_38 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_38), (void*)L_60);
		RuntimeObject* L_61 = __this->___MY_38;
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)176), (0.0f));
		RuntimeObject* L_62;
		L_62 = REPTLOOKFOR_get__world_m04A55874A2F1B55B5521C0FC2802F01259CB5737_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_62);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_63, ((int32_t)-1713155604), (bool)1, (bool)1);
		__this->___REPTADNTEX_39 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTADNTEX_39), (void*)L_64);
		RuntimeObject* L_65;
		L_65 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_41 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_41), (void*)L_65);
		RuntimeObject* L_66 = __this->___MY_41;
		RuntimeObject* L_67 = __this->___REPTADNTEX_39;
		NullCheck(L_66);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)164), L_67);
		RuntimeObject* L_68;
		L_68 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_44 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_44), (void*)L_68);
		RuntimeObject* L_69 = __this->___MY_44;
		NullCheck(L_69);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)168), (0.0f));
		RuntimeObject* L_70;
		L_70 = REPTLOOKFOR_get__world_m04A55874A2F1B55B5521C0FC2802F01259CB5737_inline(__this, NULL);
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_70);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_71, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_45 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_45), (void*)L_72);
		RuntimeObject* L_73;
		L_73 = REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline(__this, NULL);
		__this->___MY_47 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_47), (void*)L_73);
		RuntimeObject* L_74 = __this->___MY_47;
		RuntimeObject* L_75 = __this->___BULLET_45;
		NullCheck(L_74);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_74, ((int32_t)199), L_75);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHEAR_get_MY_m675C839A3FEB14FF56E27992F973511BF974F83F (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHEAR_set_MY_mB883C068C6A0D377C48D170830B9E2DD4A06B018 (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHEAR_get_THERE_m610EA6CCDC595FD9FA7FCF20F524E8F8D9136EAC (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHEAR_set_THERE_m6EF9555B1752A6939F2A9A5B0944D514F3FA5787 (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHEAR_get__world_m9C65F7816C88B447059FFD0CCC1B00D2D6E18F0C (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHEAR_set__world_mA803349A61F2B62B368AFCE0B94C00963062CE3A (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHEAR_get_Current_mBA7B39D3CFA29C59E1EE462B644AA390350B4438 (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHEAR_set_Current_mA400B970F30B8320796B89F19D845FC22B65B287 (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHEAR_Reset_m0D99022588946224682DE14FD168FCF35D22BA89 (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHEAR__ctor_m87CDCFF2B5E2E1DBEBFD54C1B87799772D77DB7E (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHEAR__ctor_mC056AFA184905A8794458594A9F897187838C81A (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTHEAR_set_MY_mB883C068C6A0D377C48D170830B9E2DD4A06B018_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTHEAR_set_THERE_m6EF9555B1752A6939F2A9A5B0944D514F3FA5787_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTHEAR_set__world_mA803349A61F2B62B368AFCE0B94C00963062CE3A_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTHEAR_MoveNext_m8D84EC756B0D0898F4377D91F096B03A372C9854 (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, const RuntimeMethod* method) 
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
		L_1 = REPTHEAR_get__world_m9C65F7816C88B447059FFD0CCC1B00D2D6E18F0C_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-1460493692), (bool)1, (bool)1);
		__this->___REPTJUMP_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTJUMP_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = REPTHEAR_get_MY_m675C839A3FEB14FF56E27992F973511BF974F83F_inline(__this, NULL);
		__this->___MY_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_4);
		RuntimeObject* L_5 = __this->___MY_2;
		RuntimeObject* L_6 = __this->___REPTJUMP_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)192), L_6);
		RuntimeObject* L_7;
		L_7 = REPTHEAR_get__world_m9C65F7816C88B447059FFD0CCC1B00D2D6E18F0C_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)967398355), (bool)1, (bool)1);
		__this->___REPTFOLLOWATTACK_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTFOLLOWATTACK_3), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = REPTHEAR_get_MY_m675C839A3FEB14FF56E27992F973511BF974F83F_inline(__this, NULL);
		__this->___MY_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_5;
		RuntimeObject* L_12 = __this->___REPTFOLLOWATTACK_3;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)193), L_12);
		RuntimeObject* L_13;
		L_13 = REPTHEAR_get__world_m9C65F7816C88B447059FFD0CCC1B00D2D6E18F0C_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1460715520), (bool)1, (bool)1);
		__this->___REPTDOWN_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTDOWN_6), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = REPTHEAR_get_MY_m675C839A3FEB14FF56E27992F973511BF974F83F_inline(__this, NULL);
		__this->___MY_8 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_8;
		RuntimeObject* L_18 = __this->___REPTDOWN_6;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)190), L_18);
		RuntimeObject* L_19;
		L_19 = REPTHEAR_get_MY_m675C839A3FEB14FF56E27992F973511BF974F83F_inline(__this, NULL);
		__this->___MY_11 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_11;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)176), (0.0f));
		RuntimeObject* L_21;
		L_21 = REPTHEAR_get__world_m9C65F7816C88B447059FFD0CCC1B00D2D6E18F0C_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)-1461429399), (bool)1, (bool)1);
		__this->___REPT0TEX_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT0TEX_12), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = REPTHEAR_get_MY_m675C839A3FEB14FF56E27992F973511BF974F83F_inline(__this, NULL);
		__this->___MY_14 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_24);
		RuntimeObject* L_25 = __this->___MY_14;
		RuntimeObject* L_26 = __this->___REPT0TEX_12;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)164), L_26);
		RuntimeObject* L_27;
		L_27 = REPTHEAR_get_MY_m675C839A3FEB14FF56E27992F973511BF974F83F_inline(__this, NULL);
		__this->___MY_17 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_17;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)168), (0.0f));
		RuntimeObject* L_29;
		L_29 = REPTHEAR_get__world_m9C65F7816C88B447059FFD0CCC1B00D2D6E18F0C_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_18 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_18), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = REPTHEAR_get_MY_m675C839A3FEB14FF56E27992F973511BF974F83F_inline(__this, NULL);
		__this->___MY_20 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_20;
		RuntimeObject* L_34 = __this->___FOLLOW_18;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)199), L_34);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDOWN_get_MY_mA9F34758B012BD0C89B34D261C1B84730BB6581C (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDOWN_set_MY_m3C150389E777DE97244135B625919AFE75D890AA (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDOWN_get_THERE_m2A6D090D4453CEBA6D649E3DACAC188E7C66E6BB (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDOWN_set_THERE_m33827F66B83A423DF8BB0FF53B534E5B74C9AC9A (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDOWN_get__world_m84701734AB8E990E2FC9BFBECACFFA23E3B478CD (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDOWN_set__world_m2784E7EA68060C856CDB9C7BA444377B30309994 (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDOWN_get_Current_mFD8C05BA7AE49839226C72C3330D5313A5A3B375 (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDOWN_set_Current_m7BCDE0CBB5DAF65912047E454D11206FD5920140 (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDOWN_Reset_m45AC971D64831F2AC94A4D6C6345E4B1403D1BBF (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDOWN__ctor_mA56A2355B5CEE7D4253529426C404C058BAD0BA7 (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDOWN__ctor_m073174F10E622C8A6B2F3601EB88819F8A037AE7 (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTDOWN_set_MY_m3C150389E777DE97244135B625919AFE75D890AA_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTDOWN_set_THERE_m33827F66B83A423DF8BB0FF53B534E5B74C9AC9A_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTDOWN_set__world_m2784E7EA68060C856CDB9C7BA444377B30309994_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTDOWN_MoveNext_m32920CF31F65C2B4DB844FF535DE90CF5C9B9677 (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, const RuntimeMethod* method) 
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
		L_1 = REPTDOWN_get__world_m84701734AB8E990E2FC9BFBECACFFA23E3B478CD_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-1460493692), (bool)1, (bool)1);
		__this->___REPTJUMP_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTJUMP_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = REPTDOWN_get_MY_mA9F34758B012BD0C89B34D261C1B84730BB6581C_inline(__this, NULL);
		__this->___MY_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_4);
		RuntimeObject* L_5 = __this->___MY_2;
		RuntimeObject* L_6 = __this->___REPTJUMP_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)192), L_6);
		RuntimeObject* L_7;
		L_7 = REPTDOWN_get_MY_mA9F34758B012BD0C89B34D261C1B84730BB6581C_inline(__this, NULL);
		__this->___MY_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_5;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = REPTDOWN_get__world_m84701734AB8E990E2FC9BFBECACFFA23E3B478CD_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-1008002050), (bool)1, (bool)1);
		__this->___REPTSEARCH_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTSEARCH_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = REPTDOWN_get_MY_mA9F34758B012BD0C89B34D261C1B84730BB6581C_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___REPTSEARCH_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = REPTDOWN_get_MY_mA9F34758B012BD0C89B34D261C1B84730BB6581C_inline(__this, NULL);
		__this->___MY_11 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_11;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)176), (0.0f));
		RuntimeObject* L_17;
		L_17 = REPTDOWN_get__world_m84701734AB8E990E2FC9BFBECACFFA23E3B478CD_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)-1692923073), (bool)1, (bool)1);
		__this->___REPTAUPTEX_12 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTAUPTEX_12), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = REPTDOWN_get_MY_mA9F34758B012BD0C89B34D261C1B84730BB6581C_inline(__this, NULL);
		__this->___MY_14 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_20);
		RuntimeObject* L_21 = __this->___MY_14;
		RuntimeObject* L_22 = __this->___REPTAUPTEX_12;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)164), L_22);
		RuntimeObject* L_23;
		L_23 = REPTDOWN_get_MY_mA9F34758B012BD0C89B34D261C1B84730BB6581C_inline(__this, NULL);
		__this->___MY_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_17;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)168), (0.0f));
		RuntimeObject* L_25;
		L_25 = REPTDOWN_get__world_m84701734AB8E990E2FC9BFBECACFFA23E3B478CD_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_18 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_18), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = REPTDOWN_get_MY_mA9F34758B012BD0C89B34D261C1B84730BB6581C_inline(__this, NULL);
		__this->___MY_20 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_20;
		RuntimeObject* L_30 = __this->___BULLET_18;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)199), L_30);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTFOLLOWATTACK_get_MY_m3A6E4638980BDD9A7C8FCC347126FAD14FBBBA5F (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK_set_MY_mA1E1A6DF6418F8F70589CAFED68747AE7264DF90 (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTFOLLOWATTACK_get_THERE_m33FC8B4F0184D2A150A26FC316472A89EF754274 (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK_set_THERE_m606DD395214B1E4CF0B9B330004C0249A93227FB (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTFOLLOWATTACK_get__world_m3BD4594EAADDE19A366736EF9BC10857E7DDA7CE (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK_set__world_m3CFC398D794ED1E66CD5CC668A679D50918B86B5 (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTFOLLOWATTACK_get_Current_m90D97A76B23A374D348A5007AE4D1903B86139E6 (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK_set_Current_m098231DF7CF9D8696C26A034DE731643D560A20C (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK_Reset_mE8CE17B4FDD1D3C2A22B196609D8B4A3993624BC (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK__ctor_m850D312D9EC7230283ED3E48079C32944D1AD9A6 (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK__ctor_mB7205A2D3A5267DA00ADDF345A97CB70DC34AD33 (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTFOLLOWATTACK_set_MY_mA1E1A6DF6418F8F70589CAFED68747AE7264DF90_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTFOLLOWATTACK_set_THERE_m606DD395214B1E4CF0B9B330004C0249A93227FB_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTFOLLOWATTACK_set__world_m3CFC398D794ED1E66CD5CC668A679D50918B86B5_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTFOLLOWATTACK_MoveNext_m004BFC0E0320B63E5F7FC4D0C7BD190FC11B9A80 (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) 
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
		L_1 = REPTFOLLOWATTACK_get__world_m3BD4594EAADDE19A366736EF9BC10857E7DDA7CE_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-1460493692), (bool)1, (bool)1);
		__this->___REPTJUMP_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTJUMP_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = REPTFOLLOWATTACK_get_MY_m3A6E4638980BDD9A7C8FCC347126FAD14FBBBA5F_inline(__this, NULL);
		__this->___MY_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_4);
		RuntimeObject* L_5 = __this->___MY_2;
		RuntimeObject* L_6 = __this->___REPTJUMP_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)192), L_6);
		RuntimeObject* L_7;
		L_7 = REPTFOLLOWATTACK_get_MY_m3A6E4638980BDD9A7C8FCC347126FAD14FBBBA5F_inline(__this, NULL);
		__this->___MY_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_5;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = REPTFOLLOWATTACK_get__world_m3BD4594EAADDE19A366736EF9BC10857E7DDA7CE_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)2048223749), (bool)1, (bool)1);
		__this->___CYCLEREPTSHOOT_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEREPTSHOOT_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = REPTFOLLOWATTACK_get_MY_m3A6E4638980BDD9A7C8FCC347126FAD14FBBBA5F_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___CYCLEREPTSHOOT_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = REPTFOLLOWATTACK_get__world_m3BD4594EAADDE19A366736EF9BC10857E7DDA7CE_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)1387396781), (bool)1, (bool)1);
		__this->___REPTHIT_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIT_9), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = REPTFOLLOWATTACK_get_MY_m3A6E4638980BDD9A7C8FCC347126FAD14FBBBA5F_inline(__this, NULL);
		__this->___MY_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_11;
		RuntimeObject* L_20 = __this->___REPTHIT_9;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)209), L_20);
		RuntimeObject* L_21;
		L_21 = REPTFOLLOWATTACK_get_MY_m3A6E4638980BDD9A7C8FCC347126FAD14FBBBA5F_inline(__this, NULL);
		__this->___MY_14 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_14;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (2.0f));
		RuntimeObject* L_23;
		L_23 = REPTFOLLOWATTACK_get__world_m3BD4594EAADDE19A366736EF9BC10857E7DDA7CE_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)-1461393462), (bool)1, (bool)1);
		__this->___REPT1TEX_15 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT1TEX_15), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = REPTFOLLOWATTACK_get_MY_m3A6E4638980BDD9A7C8FCC347126FAD14FBBBA5F_inline(__this, NULL);
		__this->___MY_17 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_17;
		RuntimeObject* L_28 = __this->___REPT1TEX_15;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = REPTFOLLOWATTACK_get_MY_m3A6E4638980BDD9A7C8FCC347126FAD14FBBBA5F_inline(__this, NULL);
		__this->___MY_20 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_20;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.400000006f));
		RuntimeObject* L_31;
		L_31 = REPTFOLLOWATTACK_get__world_m3BD4594EAADDE19A366736EF9BC10857E7DDA7CE_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_21 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_21), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = REPTFOLLOWATTACK_get_MY_m3A6E4638980BDD9A7C8FCC347126FAD14FBBBA5F_inline(__this, NULL);
		__this->___MY_23 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_23;
		RuntimeObject* L_36 = __this->___FOLLOW_21;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)199), L_36);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTSHOOT_get_MY_m39CB04047A319B375F2117216FACF8EFD2F02B04 (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSHOOT_set_MY_mB5BA7606FF30A7386C04BED72FDE06EDF2FFA0BF (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTSHOOT_get_THERE_mF24120B50129789217D0DF3C6B7E175EF4E1DBAF (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSHOOT_set_THERE_m58747B0785DA2EA809920702941EAE0B3010E4D5 (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTSHOOT_get__world_m697FECF0EEB2C3D0E02F1C2B96CF3CC79876C0E8 (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSHOOT_set__world_m1E43CB001F0B06C8B4FC208F97F171191B81A70B (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTSHOOT_get_Current_mDE6A868B6CE4B9E5D640E731920C1916CB5B7C7C (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSHOOT_set_Current_mA48D4696703DADA2CD0C8917DED8D4D4592FFAED (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSHOOT_Reset_mF8EA5DFFD5555447D21408A3A769988BBE84CA57 (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSHOOT__ctor_mCD9DB71C8040E016C9A617F2E10DB8911836148B (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTSHOOT__ctor_m820C05E70FF74ADD8170D92D301C8E5724514C82 (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTSHOOT_set_MY_mB5BA7606FF30A7386C04BED72FDE06EDF2FFA0BF_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTSHOOT_set_THERE_m58747B0785DA2EA809920702941EAE0B3010E4D5_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTSHOOT_set__world_m1E43CB001F0B06C8B4FC208F97F171191B81A70B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTSHOOT_MoveNext_m8BE254438CCA15B47656A2560BCA31EAF5CBA461 (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) 
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
		L_1 = REPTSHOOT_get_MY_m39CB04047A319B375F2117216FACF8EFD2F02B04_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = REPTSHOOT_get__world_m697FECF0EEB2C3D0E02F1C2B96CF3CC79876C0E8_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)967398355), (bool)1, (bool)1);
		__this->___REPTFOLLOWATTACK_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTFOLLOWATTACK_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = REPTSHOOT_get_MY_m39CB04047A319B375F2117216FACF8EFD2F02B04_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___REPTFOLLOWATTACK_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)193), L_8);
		RuntimeObject* L_9;
		L_9 = REPTSHOOT_get__world_m697FECF0EEB2C3D0E02F1C2B96CF3CC79876C0E8_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-1460578942), (bool)1, (bool)1);
		__this->___REPTHIDE_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIDE_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = REPTSHOOT_get_MY_m39CB04047A319B375F2117216FACF8EFD2F02B04_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___REPTHIDE_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = REPTSHOOT_get__world_m697FECF0EEB2C3D0E02F1C2B96CF3CC79876C0E8_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)1387396781), (bool)1, (bool)1);
		__this->___REPTHIT_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIT_9), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = REPTSHOOT_get_MY_m39CB04047A319B375F2117216FACF8EFD2F02B04_inline(__this, NULL);
		__this->___MY_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_11;
		RuntimeObject* L_20 = __this->___REPTHIT_9;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)209), L_20);
		RuntimeObject* L_21;
		L_21 = REPTSHOOT_get_MY_m39CB04047A319B375F2117216FACF8EFD2F02B04_inline(__this, NULL);
		__this->___MY_14 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_14;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (3.0f));
		RuntimeObject* L_23;
		L_23 = REPTSHOOT_get__world_m697FECF0EEB2C3D0E02F1C2B96CF3CC79876C0E8_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)-1461429399), (bool)1, (bool)1);
		__this->___REPT0TEX_15 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT0TEX_15), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = REPTSHOOT_get_MY_m39CB04047A319B375F2117216FACF8EFD2F02B04_inline(__this, NULL);
		__this->___MY_17 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_17;
		RuntimeObject* L_28 = __this->___REPT0TEX_15;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = REPTSHOOT_get_MY_m39CB04047A319B375F2117216FACF8EFD2F02B04_inline(__this, NULL);
		__this->___MY_20 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_20;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.0f));
		RuntimeObject* L_31;
		L_31 = REPTSHOOT_get__world_m697FECF0EEB2C3D0E02F1C2B96CF3CC79876C0E8_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_21 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_21), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = REPTSHOOT_get_MY_m39CB04047A319B375F2117216FACF8EFD2F02B04_inline(__this, NULL);
		__this->___MY_23 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_23;
		RuntimeObject* L_36 = __this->___FOLLOW_21;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)199), L_36);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTESCAPE_set_MY_m2002F7C316592DB2DAE555B8608AA5BA3D9C6CBC (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTESCAPE_get_THERE_m8A3B50E23F838732CD48E7B16510B55C53273530 (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTESCAPE_set_THERE_mE99535C03332F11AAFF371238FB065011AA9AD73 (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTESCAPE_get__world_m14D2E796970BBB4BBC7D4E8FFD4C46DC591AF76B (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTESCAPE_set__world_mD71ED796D46EFCFB63697D6C744E84BDCAA4656D (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTESCAPE_get_Current_m5DFDE8271E789FA9B853939875E0D7FF4DED6A1E (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTESCAPE_set_Current_m46BE9D0FAECF5E86550F35324AAB568CB17BE967 (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTESCAPE_Reset_m49B25D05F9EE2ADFDA96078E306F870889D9F684 (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTESCAPE__ctor_m4B16ECE643FA48713E412EEB6067833C5A7F07C6 (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTESCAPE__ctor_mB638AFCC7F33FFA56D6B1D4B2EB5701B253A15F6 (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTESCAPE_set_MY_m2002F7C316592DB2DAE555B8608AA5BA3D9C6CBC_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTESCAPE_set_THERE_mE99535C03332F11AAFF371238FB065011AA9AD73_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTESCAPE_set__world_mD71ED796D46EFCFB63697D6C744E84BDCAA4656D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTESCAPE_MoveNext_m5519E656F21FC0716ED32CFAA43F5800AA5EECBA (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, const RuntimeMethod* method) 
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
		L_1 = REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = REPTESCAPE_get__world_m14D2E796970BBB4BBC7D4E8FFD4C46DC591AF76B_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-1460578942), (bool)1, (bool)1);
		__this->___REPTHIDE_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIDE_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___REPTHIDE_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)193), L_8);
		RuntimeObject* L_9;
		L_9 = REPTESCAPE_get__world_m14D2E796970BBB4BBC7D4E8FFD4C46DC591AF76B_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-458928334), (bool)1, (bool)1);
		__this->___CYCLEREPTHIDE_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEREPTHIDE_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___CYCLEREPTHIDE_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = REPTESCAPE_get__world_m14D2E796970BBB4BBC7D4E8FFD4C46DC591AF76B_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)1387396781), (bool)1, (bool)1);
		__this->___REPTHIT_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIT_9), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E_inline(__this, NULL);
		__this->___MY_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_11;
		RuntimeObject* L_20 = __this->___REPTHIT_9;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)209), L_20);
		RuntimeObject* L_21;
		L_21 = REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E_inline(__this, NULL);
		__this->___MY_14 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_14;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)176), (4.0f));
		RuntimeObject* L_23;
		L_23 = REPTESCAPE_get__world_m14D2E796970BBB4BBC7D4E8FFD4C46DC591AF76B_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)-1461393462), (bool)1, (bool)1);
		__this->___REPT1TEX_15 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT1TEX_15), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E_inline(__this, NULL);
		__this->___MY_17 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_17;
		RuntimeObject* L_28 = __this->___REPT1TEX_15;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E_inline(__this, NULL);
		__this->___MY_20 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_20;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)172), (30.0f));
		RuntimeObject* L_31;
		L_31 = REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E_inline(__this, NULL);
		__this->___MY_23 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_23;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)168), (0.400000006f));
		RuntimeObject* L_33;
		L_33 = REPTESCAPE_get__world_m14D2E796970BBB4BBC7D4E8FFD4C46DC591AF76B_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)233967877), (bool)1, (bool)1);
		__this->___REPEL_24 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPEL_24), (void*)L_35);
		RuntimeObject* L_36;
		L_36 = REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E_inline(__this, NULL);
		__this->___MY_26 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_26;
		RuntimeObject* L_38 = __this->___REPEL_24;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)199), L_38);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922 (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDEAD_set_MY_m38953045674B7A84440AAF567A2F0E65380F9A2E (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDEAD_get_THERE_m293095A6E6AE7B00ECABFC3E65CF82CE7787A02C (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDEAD_set_THERE_m6809F804293DF3B561111F709416716695B5594D (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDEAD_get__world_m64115E97486AF551971529D0E2294A0A7531DCA6 (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDEAD_set__world_mAFA79436A7D1D01032C398CFB3A7A8821467CEE5 (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDEAD_get_Current_mCA87236816C079D2D2902FEB035E61E928AAEBB3 (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDEAD_set_Current_mCDE00BD0BC8A30C03FAC1F773AAA20469AC3DBD7 (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDEAD_Reset_m276B5CFCB0A2F970FBB3B938B678178795F75B1A (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDEAD__ctor_mB2A21E14A327F5C128D3E14719621C383CF0090F (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDEAD__ctor_m58748E1D850D52EF9AACAED400BA880FF5C28973 (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTDEAD_set_MY_m38953045674B7A84440AAF567A2F0E65380F9A2E_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTDEAD_set_THERE_m6809F804293DF3B561111F709416716695B5594D_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTDEAD_set__world_mAFA79436A7D1D01032C398CFB3A7A8821467CEE5_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTDEAD_MoveNext_m4EE4F55B0D6BB81F3A624A9F2A5E4E614B77EE19 (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, const RuntimeMethod* method) 
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
		L_1 = REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline(__this, NULL);
		__this->___MY_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_11;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)190), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline(__this, NULL);
		__this->___MY_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_14;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)176), (9.0f));
		RuntimeObject* L_11;
		L_11 = REPTDEAD_get__world_m64115E97486AF551971529D0E2294A0A7531DCA6_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-1461105966), (bool)1, (bool)1);
		__this->___REPT9TEX_15 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT9TEX_15), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline(__this, NULL);
		__this->___MY_17 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_17;
		RuntimeObject* L_16 = __this->___REPT9TEX_15;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)164), L_16);
		RuntimeObject* L_17;
		L_17 = REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline(__this, NULL);
		__this->___MY_20 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_20;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)168), (0.0f));
		RuntimeObject* L_19;
		L_19 = REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline(__this, NULL);
		__this->___MY_23 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_23;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)199), (RuntimeObject*)NULL);
		RuntimeObject* L_21;
		L_21 = REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline(__this, NULL);
		__this->___MY_26 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_26;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)206), (1.0f));
		RuntimeObject* L_23;
		L_23 = REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline(__this, NULL);
		__this->___MY_29 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_29;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)207), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDIE_set_MY_m8A2831CFD59B2FDA3DFC6763562AE1D839F4569B (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDIE_get_THERE_m1987E14FE5F8024330D230BFD4A85A56344C367C (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDIE_set_THERE_m8743595230F27D2BD82F13C95F049E91B0388E90 (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDIE_get__world_m617FA08226A98BB6DFBE57C62F8A5987F7A9A5BF (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDIE_set__world_m29F88AF406B95EA9DB661A534388AFD89FEA0D65 (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTDIE_get_Current_mAB4E02B28E51E34D763EFA57BA9545B9046C13D2 (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDIE_set_Current_mC541B9040E1915AA918D1A4B20A212BE7AB2819A (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDIE_Reset_mE6B957BA264EBBB64C31884B64E3D404E28378B8 (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDIE__ctor_m7EBDA8478C5C934ED33442D565AE159E20DC3F33 (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTDIE__ctor_m718783E7CCCFC2A0FE792BC284E5B8B60871590F (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTDIE_set_MY_m8A2831CFD59B2FDA3DFC6763562AE1D839F4569B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTDIE_set_THERE_m8743595230F27D2BD82F13C95F049E91B0388E90_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTDIE_set__world_m29F88AF406B95EA9DB661A534388AFD89FEA0D65_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTDIE_MoveNext_mA72943EF61D25A250BAC63A0FFCC1A6323F7C08E (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) 
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
		L_1 = REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)173), (10.0f));
		RuntimeObject* L_3;
		L_3 = REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline(__this, NULL);
		__this->___MY_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_11;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = REPTDIE_get__world_m617FA08226A98BB6DFBE57C62F8A5987F7A9A5BF_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-1460727146), (bool)1, (bool)1);
		__this->___REPTDEAD_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTDEAD_12), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline(__this, NULL);
		__this->___MY_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_14;
		RuntimeObject* L_14 = __this->___REPTDEAD_12;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline(__this, NULL);
		__this->___MY_17 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_17;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)176), (8.0f));
		RuntimeObject* L_17;
		L_17 = REPTDIE_get__world_m617FA08226A98BB6DFBE57C62F8A5987F7A9A5BF_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)-1461141903), (bool)1, (bool)1);
		__this->___REPT8TEX_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT8TEX_18), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline(__this, NULL);
		__this->___MY_20 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_20);
		RuntimeObject* L_21 = __this->___MY_20;
		RuntimeObject* L_22 = __this->___REPT8TEX_18;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)164), L_22);
		RuntimeObject* L_23;
		L_23 = REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline(__this, NULL);
		__this->___MY_23 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_23;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)168), (0.0f));
		RuntimeObject* L_25;
		L_25 = REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline(__this, NULL);
		__this->___MY_26 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_26;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)213), (0.0f));
		RuntimeObject* L_27;
		L_27 = REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline(__this, NULL);
		__this->___MY_29 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_29;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_29;
		L_29 = REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline(__this, NULL);
		__this->___MY_32 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_32;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)199), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTIMPLODE_set_MY_m43C556F1ABBA3EFF6BA281BA013BB7C160A26DDD (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTIMPLODE_get_THERE_mBF698039E83B4A6EE45391EDF57CF3B65460BC40 (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTIMPLODE_set_THERE_m15D65B36FEFE2971C1C8461D54A4288A3F6EA489 (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8 (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTIMPLODE_set__world_m3C450A9035FC27C1D11BCC00A790283E5E8344A9 (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTIMPLODE_get_Current_mA6E9D151F75FB027CD0608F5181D3E50B3E60CBC (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTIMPLODE_set_Current_m4B3B1FA7C386831D399979E39F20EF51DD618AB3 (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTIMPLODE_Reset_mFCB5D04E85F631E6C7F4C4E72D2C486A1D92A1A5 (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTIMPLODE__ctor_m110894602A2DD2B28BB0985BB5F9BD6B2A37A521 (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTIMPLODE__ctor_m6044361E9C068E417E8A5501BD812398D1DD6F41 (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTIMPLODE_set_MY_m43C556F1ABBA3EFF6BA281BA013BB7C160A26DDD_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTIMPLODE_set_THERE_m15D65B36FEFE2971C1C8461D54A4288A3F6EA489_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTIMPLODE_set__world_m3C450A9035FC27C1D11BCC00A790283E5E8344A9_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTIMPLODE_MoveNext_mB234F91FF84EFBF0D5D2C3E2186156FBDD97E1F7 (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) 
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
		L_1 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)217512505));
		__this->___DISTX_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
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
		L_7 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_4;
		NullCheck(L_8);
		float L_9;
		L_9 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)195), (bool)1);
		__this->___temp_5 = L_9;
		RuntimeObject* L_10;
		L_10 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
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
		L_14 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_14;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)195), (bool)1);
		__this->___temp_15 = L_16;
		RuntimeObject* L_17;
		L_17 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
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
		L_21 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_24 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_24;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)196), (bool)1);
		__this->___temp_25 = L_23;
		RuntimeObject* L_24;
		L_24 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
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
		L_28 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_34 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_34), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_34;
		NullCheck(L_29);
		float L_30;
		L_30 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)196), (bool)1);
		__this->___temp_35 = L_30;
		RuntimeObject* L_31;
		L_31 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
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
		L_44 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
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
		L_48 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
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
		L_53 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)217512507));
		__this->___DISTZ_43 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_43), (void*)L_54);
		RuntimeObject* L_55;
		L_55 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
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
		L_59 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_46 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_46;
		NullCheck(L_60);
		float L_61;
		L_61 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)165), (bool)1);
		__this->___temp_47 = L_61;
		RuntimeObject* L_62;
		L_62 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
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
		L_69 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
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
		L_78 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		NullCheck(L_77);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_77, L_78);
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_79 = L_77;
		RuntimeObject* L_80;
		L_80 = REPTIMPLODE_get_THERE_mBF698039E83B4A6EE45391EDF57CF3B65460BC40_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_80);
		RuntimeObject* L_81;
		L_81 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_81);
		RuntimeObject* L_82;
		L_82 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_83 = V_0;
		NullCheck(L_82);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_82, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_83);
		return (bool)0;
	}

IL_0364:
	{
		RuntimeObject* L_85;
		L_85 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_56 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_56), (void*)L_85);
		RuntimeObject* L_86 = __this->___MY_56;
		NullCheck(L_86);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)206), (1.0f));
		RuntimeObject* L_87;
		L_87 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_59 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_59), (void*)L_87);
		RuntimeObject* L_88 = __this->___MY_59;
		NullCheck(L_88);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)207), (0.0f));
		RuntimeObject* L_89;
		L_89 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_62 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_62), (void*)L_89);
		RuntimeObject* L_90 = __this->___MY_62;
		NullCheck(L_90);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_90, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_91;
		L_91 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_65 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_65), (void*)L_91);
		RuntimeObject* L_92 = __this->___MY_65;
		NullCheck(L_92);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_93;
		L_93 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_68 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_68), (void*)L_93);
		RuntimeObject* L_94 = __this->___MY_68;
		NullCheck(L_94);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_95;
		L_95 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_95);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_96, ((int32_t)1333438470), (bool)1, (bool)1);
		__this->___VANISHFORGOOD_69 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VANISHFORGOOD_69), (void*)L_97);
		RuntimeObject* L_98;
		L_98 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_71 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_71), (void*)L_98);
		RuntimeObject* L_99 = __this->___MY_71;
		RuntimeObject* L_100 = __this->___VANISHFORGOOD_69;
		NullCheck(L_99);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)190), L_100);
		RuntimeObject* L_101;
		L_101 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_74 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_74), (void*)L_101);
		RuntimeObject* L_102 = __this->___MY_74;
		NullCheck(L_102);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)176), (9.0f));
		RuntimeObject* L_103;
		L_103 = REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline(__this, NULL);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_103);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_104, ((int32_t)-983228918), (bool)1, (bool)1);
		__this->___REPT0ATEX_75 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT0ATEX_75), (void*)L_105);
		RuntimeObject* L_106;
		L_106 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_77 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_77), (void*)L_106);
		RuntimeObject* L_107 = __this->___MY_77;
		RuntimeObject* L_108 = __this->___REPT0ATEX_75;
		NullCheck(L_107);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)164), L_108);
		RuntimeObject* L_109;
		L_109 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
		__this->___MY_80 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_80), (void*)L_109);
		RuntimeObject* L_110 = __this->___MY_80;
		NullCheck(L_110);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)168), (0.0f));
		RuntimeObject* L_111;
		L_111 = REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1 (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIT_set_MY_m2E774C540246D19D7703AEDC44DF33EFE61E3176 (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHIT_get_THERE_mF22952168A70D856B6421B483AAD5BCDF1328344 (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIT_set_THERE_mAAEDA228566183495CE003C5B5F17E1888CC9BEB (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIT_set__world_mADB00F954A3B145136AF5355D907BA8A79BFE956 (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTHIT_get_Current_m670A776E9C0025AC624CEB1FF017E4735FAD6442 (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIT_set_Current_m1E9352862E64D9367F59E2F08F9A1CF48BECA375 (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIT_Reset_mA0E373A12C68C58E010D411A52C40D6C7A3E55EF (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIT__ctor_mC9726361676673AD6051C73909580911FB5D07EB (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTHIT__ctor_mCFF4A199902BA2BEA3E86BC5616B4E66FB2C916D (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTHIT_set_MY_m2E774C540246D19D7703AEDC44DF33EFE61E3176_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTHIT_set_THERE_mAAEDA228566183495CE003C5B5F17E1888CC9BEB_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTHIT_set__world_mADB00F954A3B145136AF5355D907BA8A79BFE956_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTHIT_MoveNext_m586AAEB232BE1F7CB6B933934E9A27C829769FCD (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* V_0 = NULL;
	REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* V_1 = NULL;
	REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* V_2 = NULL;
	REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* V_3 = NULL;
	REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* V_4 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* G_B11_1 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* G_B10_1 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* G_B12_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0348;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
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
			goto IL_04b8;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
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
			goto IL_00c8;
		}
	}
	{
		RuntimeObject* L_13;
		L_13 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
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
			goto IL_04b8;
		}
	}

IL_00c8:
	{
		RuntimeObject* L_19;
		L_19 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_7), (void*)L_20);
		RuntimeObject* L_21 = __this->___EXPLOSION_ON_7;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), (bool)1);
		__this->___EXPLOSION_ON_7_val = L_22;
		float L_23 = __this->___EXPLOSION_ON_7_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_23, (2.0f), NULL);
		if (!L_24)
		{
			goto IL_0177;
		}
	}
	{
		RuntimeObject* L_25;
		L_25 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_10 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_10;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)205), (bool)1);
		__this->___temp_11 = L_27;
		float L_28 = __this->___temp_11;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_28, (1.0f), NULL);
		if (!L_29)
		{
			goto IL_0177;
		}
	}
	{
		REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* L_30 = (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7*)il2cpp_codegen_object_new(REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7_il2cpp_TypeInfo_var);
		REPTIMPLODE__ctor_m110894602A2DD2B28BB0985BB5F9BD6B2A37A521(L_30, NULL);
		V_0 = L_30;
		REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* L_31 = V_0;
		REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* L_32 = L_31;
		RuntimeObject* L_33;
		L_33 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_32, L_33);
		REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* L_34 = L_32;
		RuntimeObject* L_35;
		L_35 = REPTHIT_get_THERE_mF22952168A70D856B6421B483AAD5BCDF1328344_inline(__this, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_34, L_35);
		RuntimeObject* L_36;
		L_36 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_34, L_36);
		RuntimeObject* L_37;
		L_37 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* L_38 = V_0;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_37, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_38);
		return (bool)0;
	}

IL_0177:
	{
		RuntimeObject* L_40;
		L_40 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_40, 5, ((int32_t)441));
		__this->___SHOOT_FAC_12 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_12), (void*)L_41);
		RuntimeObject* L_42 = __this->___SHOOT_FAC_12;
		NullCheck(L_42);
		float L_43;
		L_43 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)231), (bool)1);
		__this->___SHOOT_FAC_12_val = L_43;
		RuntimeObject* L_44;
		L_44 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_14 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_44);
		RuntimeObject* L_45 = __this->___MY_14;
		NullCheck(L_45);
		float L_46;
		L_46 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)173), (bool)1);
		__this->___temp_15 = L_46;
		RuntimeObject* L_47;
		L_47 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_17 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_47);
		RuntimeObject* L_48 = __this->___MY_17;
		float L_49 = __this->___temp_15;
		float L_50 = __this->___SHOOT_FAC_12_val;
		NullCheck(L_48);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)173), ((float)il2cpp_codegen_add(L_49, L_50)));
		RuntimeObject* L_51;
		L_51 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_20 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_51);
		RuntimeObject* L_52 = __this->___MY_20;
		NullCheck(L_52);
		float L_53;
		L_53 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)173), (bool)1);
		__this->___temp_21 = L_53;
		float L_54 = __this->___temp_21;
		bool L_55;
		L_55 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_54, (5.0f), NULL);
		if (L_55)
		{
			goto IL_045d;
		}
	}
	{
		float L_56;
		L_56 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_57;
		L_57 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_56, (0.0500000007f), NULL);
		if (L_57)
		{
			goto IL_045d;
		}
	}
	{
		RuntimeObject* L_58;
		L_58 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_25 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_58);
		RuntimeObject* L_59 = __this->___MY_25;
		RuntimeObject* L_60 = L_59;
		if (L_60)
		{
			G_B11_0 = L_60;
			G_B11_1 = __this;
			goto IL_0257;
		}
		G_B10_0 = L_60;
		G_B10_1 = __this;
	}
	{
		G_B12_0 = ((RuntimeObject*)(NULL));
		G_B12_1 = G_B10_1;
		goto IL_0263;
	}

IL_0257:
	{
		NullCheck(G_B11_0);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B11_0, ((int32_t)164), (bool)1, (bool)1);
		G_B12_0 = L_61;
		G_B12_1 = G_B11_1;
	}

IL_0263:
	{
		NullCheck(G_B12_1);
		G_B12_1->___temp_26 = G_B12_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_1->___temp_26), (void*)G_B12_0);
		RuntimeObject* L_62;
		L_62 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		RuntimeObject* L_63 = __this->___temp_26;
		NullCheck(L_62);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, ((int32_t)-1459740360), L_63);
		RuntimeObject* L_64;
		L_64 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_64);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)-1461249714), (bool)1, (bool)1);
		__this->___REPT5TEX_28 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT5TEX_28), (void*)L_66);
		RuntimeObject* L_67;
		L_67 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_30 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_67);
		RuntimeObject* L_68 = __this->___MY_30;
		RuntimeObject* L_69 = __this->___REPT5TEX_28;
		NullCheck(L_68);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)164), L_69);
		RuntimeObject* L_70;
		L_70 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_33 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_33), (void*)L_70);
		RuntimeObject* L_71 = __this->___MY_33;
		NullCheck(L_71);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_71, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_72;
		L_72 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_36 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_36), (void*)L_72);
		RuntimeObject* L_73 = __this->___MY_36;
		NullCheck(L_73);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_74;
		L_74 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_39 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_39), (void*)L_74);
		RuntimeObject* L_75 = __this->___MY_39;
		NullCheck(L_75);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_75, ((int32_t)209), (RuntimeObject*)NULL);
		float L_76;
		L_76 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_76;
		float L_77 = __this->___startTime1;
		float L_78;
		L_78 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(6, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_77, L_78));
		__this->____cursor = 1;
		goto IL_0348;
	}

IL_033b:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_79 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		REPTHIT_set_Current_m1E9352862E64D9367F59E2F08F9A1CF48BECA375_inline(__this, L_79, NULL);
		return (bool)1;
	}

IL_0348:
	{
		float L_80;
		L_80 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_81 = __this->___endTime1;
		if ((((float)L_80) < ((float)L_81)))
		{
			goto IL_033b;
		}
	}
	{
		REPTHIT_set_Current_m1E9352862E64D9367F59E2F08F9A1CF48BECA375_inline(__this, NULL, NULL);
		RuntimeObject* L_82;
		L_82 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_82);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)1387396781), (bool)1, (bool)1);
		__this->___REPTHIT_41 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPTHIT_41), (void*)L_84);
		RuntimeObject* L_85;
		L_85 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_43 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_43), (void*)L_85);
		RuntimeObject* L_86 = __this->___MY_43;
		RuntimeObject* L_87 = __this->___REPTHIT_41;
		NullCheck(L_86);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)209), L_87);
		RuntimeObject* L_88;
		L_88 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		NullCheck(L_88);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_88, ((int32_t)-1459740360), (bool)0);
		__this->___REPT_TEX_44 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT_TEX_44), (void*)L_89);
		RuntimeObject* L_90;
		L_90 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_46 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_90);
		RuntimeObject* L_91 = __this->___MY_46;
		RuntimeObject* L_92 = __this->___REPT_TEX_44;
		NullCheck(L_91);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_91, ((int32_t)164), L_92);
		RuntimeObject* L_93;
		L_93 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		NullCheck(L_93);
		RuntimeObject* L_94;
		L_94 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_93);
		NullCheck(L_94);
		RuntimeObject* L_95;
		L_95 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)-983768785), (bool)1, (bool)1);
		__this->___REPT02SND_47 = L_95;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT02SND_47), (void*)L_95);
		RuntimeObject* L_96;
		L_96 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_49 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_49), (void*)L_96);
		RuntimeObject* L_97;
		L_97 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		RuntimeObject* L_98 = __this->___REPT02SND_47;
		RuntimeObject* L_99 = __this->___MY_49;
		NullCheck(L_97);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_97, L_98, (0.699999988f), L_99, (100.0f), (100.0f));
		REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* L_100 = (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8*)il2cpp_codegen_object_new(REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8_il2cpp_TypeInfo_var);
		REPTHIDE__ctor_mBA7BC83979D18C547F3F97B59E9B5F7B019014F8(L_100, NULL);
		V_1 = L_100;
		REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* L_101 = V_1;
		REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* L_102 = L_101;
		RuntimeObject* L_103;
		L_103 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		NullCheck(L_102);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_102, L_103);
		REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* L_104 = L_102;
		RuntimeObject* L_105;
		L_105 = REPTHIT_get_THERE_mF22952168A70D856B6421B483AAD5BCDF1328344_inline(__this, NULL);
		NullCheck(L_104);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_104, L_105);
		RuntimeObject* L_106;
		L_106 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		NullCheck(L_104);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_104, L_106);
		RuntimeObject* L_107;
		L_107 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* L_108 = V_1;
		NullCheck(L_107);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_107, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_108);
		return (bool)0;
	}

IL_045d:
	{
		RuntimeObject* L_110;
		L_110 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		__this->___MY_52 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_52), (void*)L_110);
		RuntimeObject* L_111 = __this->___MY_52;
		NullCheck(L_111);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_111, ((int32_t)173), (10.0f));
		REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* L_112 = (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F*)il2cpp_codegen_object_new(REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F_il2cpp_TypeInfo_var);
		REPTDIE__ctor_m7EBDA8478C5C934ED33442D565AE159E20DC3F33(L_112, NULL);
		V_2 = L_112;
		REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* L_113 = V_2;
		REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* L_114 = L_113;
		RuntimeObject* L_115;
		L_115 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		NullCheck(L_114);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_114, L_115);
		REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* L_116 = L_114;
		RuntimeObject* L_117;
		L_117 = REPTHIT_get_THERE_mF22952168A70D856B6421B483AAD5BCDF1328344_inline(__this, NULL);
		NullCheck(L_116);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_116, L_117);
		RuntimeObject* L_118;
		L_118 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		NullCheck(L_116);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_116, L_118);
		RuntimeObject* L_119;
		L_119 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* L_120 = V_2;
		NullCheck(L_119);
		RuntimeObject* L_121;
		L_121 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_119, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_120);
		return (bool)0;
	}

IL_04b8:
	{
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_122 = (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC*)il2cpp_codegen_object_new(REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC_il2cpp_TypeInfo_var);
		REPTTALK__ctor_m7115B6714BE1D58B3DA30B6F071EC7E3428C41BB(L_122, NULL);
		V_3 = L_122;
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_123 = V_3;
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_124 = L_123;
		RuntimeObject* L_125;
		L_125 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		NullCheck(L_124);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_124, L_125);
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_126 = L_124;
		RuntimeObject* L_127;
		L_127 = REPTHIT_get_THERE_mF22952168A70D856B6421B483AAD5BCDF1328344_inline(__this, NULL);
		NullCheck(L_126);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_126, L_127);
		RuntimeObject* L_128;
		L_128 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		NullCheck(L_126);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_126, L_128);
		RuntimeObject* L_129;
		L_129 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_130 = V_3;
		NullCheck(L_129);
		RuntimeObject* L_131;
		L_131 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_129, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_130);
		REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* L_132 = (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23*)il2cpp_codegen_object_new(REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23_il2cpp_TypeInfo_var);
		REPTTURN__ctor_mBBC3F0A8B50374421FDD6181D6AF615B089F2754(L_132, NULL);
		V_4 = L_132;
		REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* L_133 = V_4;
		REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* L_134 = L_133;
		RuntimeObject* L_135;
		L_135 = REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline(__this, NULL);
		NullCheck(L_134);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_134, L_135);
		REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* L_136 = L_134;
		RuntimeObject* L_137;
		L_137 = REPTHIT_get_THERE_mF22952168A70D856B6421B483AAD5BCDF1328344_inline(__this, NULL);
		NullCheck(L_136);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_136, L_137);
		RuntimeObject* L_138;
		L_138 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		NullCheck(L_136);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_136, L_138);
		RuntimeObject* L_139;
		L_139 = REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline(__this, NULL);
		REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* L_140 = V_4;
		NullCheck(L_139);
		RuntimeObject* L_141;
		L_141 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_139, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_140);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98 (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTATTACK_set_MY_mDA4DC70995AA4037AD5B961C0F7D025FCB6A6FA9 (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTATTACK_get_THERE_m76910EA212CC9C0E0AACE671F42B92FC5B0ACE51 (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTATTACK_set_THERE_mB73B2F47B019CB1F45CD3806F2225BAEFD185A9F (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTATTACK_set__world_mC3EA75C08F721B864883F28EEB74DB3733B2E498 (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTATTACK_get_Current_mA3FAA1F1B061616AF3D13FBE0A3B78A56B912DC5 (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTATTACK_set_Current_m02EB40A786998F7C7FEC6B8EBB67907785500F7F (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTATTACK_Reset_m0A65DF54F632B4B644FF608F91FF90721480C0B6 (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTATTACK__ctor_mD401FA1EDDBC045882C5B11FB3319CC480DCDB23 (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTATTACK__ctor_mE84ECA4ECB5C88238E1A033DBBBA7529652E7AF3 (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLEREPTATTACK_set_MY_mDA4DC70995AA4037AD5B961C0F7D025FCB6A6FA9_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLEREPTATTACK_set_THERE_mB73B2F47B019CB1F45CD3806F2225BAEFD185A9F_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLEREPTATTACK_set__world_mC3EA75C08F721B864883F28EEB74DB3733B2E498_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLEREPTATTACK_MoveNext_m69B2720ADE4B6BFA81E778221FB86B17C5742A82 (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_0 = NULL;
	REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* V_1 = NULL;
	REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* V_2 = NULL;
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_3 = NULL;
	REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* V_4 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_1 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_1, NULL);
		V_0 = L_1;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_2 = V_0;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLEREPTATTACK_get_THERE_m76910EA212CC9C0E0AACE671F42B92FC5B0ACE51_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
		__this->___MY_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_2;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)213), (0.0f));
		RuntimeObject* L_13;
		L_13 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
		__this->___MY_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_5;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_15;
		L_15 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
		__this->___MY_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_8;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)169), (0.0f));
		RuntimeObject* L_17;
		L_17 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
		__this->___MY_11 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_11;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)189), (RuntimeObject*)NULL);
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_19 = (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC*)il2cpp_codegen_object_new(REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC_il2cpp_TypeInfo_var);
		REPTTALK__ctor_m7115B6714BE1D58B3DA30B6F071EC7E3428C41BB(L_19, NULL);
		V_1 = L_19;
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_20 = V_1;
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_21 = L_20;
		RuntimeObject* L_22;
		L_22 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_21, L_22);
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_23 = L_21;
		RuntimeObject* L_24;
		L_24 = CYCLEREPTATTACK_get_THERE_m76910EA212CC9C0E0AACE671F42B92FC5B0ACE51_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_24);
		RuntimeObject* L_25;
		L_25 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_25);
		RuntimeObject* L_26;
		L_26 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* L_27 = V_1;
		NullCheck(L_26);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_26, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_27);
		RuntimeObject* L_29;
		L_29 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
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
		REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* L_35 = (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760*)il2cpp_codegen_object_new(REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760_il2cpp_TypeInfo_var);
		REPTLOOKFOR__ctor_mB42D87700A209EF376D4F746945FDF19CAE4F6B5(L_35, NULL);
		V_2 = L_35;
		REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* L_36 = V_2;
		REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* L_37 = L_36;
		RuntimeObject* L_38;
		L_38 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
		NullCheck(L_37);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_37, L_38);
		REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* L_39 = L_37;
		RuntimeObject* L_40;
		L_40 = CYCLEREPTATTACK_get_THERE_m76910EA212CC9C0E0AACE671F42B92FC5B0ACE51_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		RuntimeObject* L_41;
		L_41 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_41);
		RuntimeObject* L_42;
		L_42 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* L_43 = V_2;
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
		L_48 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_49 = L_47;
		RuntimeObject* L_50;
		L_50 = CYCLEREPTATTACK_get_THERE_m76910EA212CC9C0E0AACE671F42B92FC5B0ACE51_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		RuntimeObject* L_51;
		L_51 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_51);
		RuntimeObject* L_52;
		L_52 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_53 = V_3;
		NullCheck(L_52);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_53);
		RuntimeObject* L_55;
		L_55 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
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
		L_60 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
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
		L_65 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
		__this->___MY_24 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_65);
		RuntimeObject* L_66 = __this->___MY_24;
		NullCheck(L_66);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)182), (1.0f));
		RuntimeObject* L_67;
		L_67 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_67);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)-983768785), (bool)1, (bool)1);
		__this->___REPT02SND_25 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT02SND_25), (void*)L_69);
		RuntimeObject* L_70;
		L_70 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
		__this->___MY_27 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_70);
		RuntimeObject* L_71;
		L_71 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		RuntimeObject* L_72 = __this->___REPT02SND_25;
		RuntimeObject* L_73 = __this->___MY_27;
		NullCheck(L_71);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, L_72, (0.699999988f), L_73, (100.0f), (100.0f));
	}

IL_0283:
	{
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_74 = (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854*)il2cpp_codegen_object_new(REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854_il2cpp_TypeInfo_var);
		REPTFOLLOWATTACK__ctor_m850D312D9EC7230283ED3E48079C32944D1AD9A6(L_74, NULL);
		V_4 = L_74;
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_75 = V_4;
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_76 = L_75;
		RuntimeObject* L_77;
		L_77 = CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline(__this, NULL);
		NullCheck(L_76);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_76, L_77);
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_78 = L_76;
		RuntimeObject* L_79;
		L_79 = CYCLEREPTATTACK_get_THERE_m76910EA212CC9C0E0AACE671F42B92FC5B0ACE51_inline(__this, NULL);
		NullCheck(L_78);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_78, L_79);
		RuntimeObject* L_80;
		L_80 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		NullCheck(L_78);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_78, L_80);
		RuntimeObject* L_81;
		L_81 = CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline(__this, NULL);
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_82 = V_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTHIDE_set_MY_m0FA10EAACA142DCEA3B828E7602DD96271EA237B (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTHIDE_get_THERE_m8E8B5E27F1F33064719A289DD766946D5BC65AB4 (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTHIDE_set_THERE_m1F92B3009F1DAE0D7FE3D4C7AE919FBBDDB17083 (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTHIDE_get__world_m58D29529D00979FFF8B1A5B99CE57232FDAA9FB5 (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTHIDE_set__world_m6509D7C19B7D9B828659ADBF17420480B086D0EF (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTHIDE_get_Current_mD9A9281E0109AA955355A8812592121AC8F534C4 (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTHIDE_set_Current_mF171D1E42586965C6FB1BCF5C2F063A86E7D3D41 (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTHIDE_Reset_mA700E32946D4ACE1069D8E7C3C24B9E62D1D384D (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTHIDE__ctor_m3F9105FDEAB159609E50B2639D21D12C7A8001A6 (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTHIDE__ctor_m101928B52BA7AE8325A07190985A4AD767E12A0F (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLEREPTHIDE_set_MY_m0FA10EAACA142DCEA3B828E7602DD96271EA237B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLEREPTHIDE_set_THERE_m1F92B3009F1DAE0D7FE3D4C7AE919FBBDDB17083_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLEREPTHIDE_set__world_m6509D7C19B7D9B828659ADBF17420480B086D0EF_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLEREPTHIDE_MoveNext_m768E760573AA33132A0D6A74E0B6D60EB1ED1BF8 (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) 
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
		s_Il2CppMethodInitialized = true;
	}
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_1 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_1, NULL);
		V_0 = L_1;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_2 = V_0;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLEREPTHIDE_get_THERE_m8E8B5E27F1F33064719A289DD766946D5BC65AB4_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLEREPTHIDE_get__world_m58D29529D00979FFF8B1A5B99CE57232FDAA9FB5_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLEREPTHIDE_get__world_m58D29529D00979FFF8B1A5B99CE57232FDAA9FB5_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline(__this, NULL);
		__this->___MY_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_2;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)213), (0.0f));
		RuntimeObject* L_13;
		L_13 = CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline(__this, NULL);
		__this->___MY_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_5;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_15;
		L_15 = CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline(__this, NULL);
		__this->___MY_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_8;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)169), (0.0f));
		RuntimeObject* L_17;
		L_17 = CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline(__this, NULL);
		__this->___MY_11 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_11;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_19;
		L_19 = CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline(__this, NULL);
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
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_24;
		L_24 = CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline(__this, NULL);
		__this->___MY_18 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_24);
		RuntimeObject* L_25 = __this->___MY_18;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)168), (0.600000024f));
		RuntimeObject* L_26;
		L_26 = CYCLEREPTHIDE_get__world_m58D29529D00979FFF8B1A5B99CE57232FDAA9FB5_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_19 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_19), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline(__this, NULL);
		__this->___MY_21 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_21;
		RuntimeObject* L_31 = __this->___BULLET_19;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)199), L_31);
		return (bool)0;
	}

IL_0156:
	{
		RuntimeObject* L_32;
		L_32 = CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline(__this, NULL);
		__this->___MY_24 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_24;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)168), (0.0f));
		RuntimeObject* L_34;
		L_34 = CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline(__this, NULL);
		__this->___MY_27 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_27;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)199), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT_set_MY_m76152EC13D43BC4697920B462E77A2A413BE2D25 (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTSHOOT_get_THERE_m248FD6A6BB743E89173F0AD177BC4D4E6653835D (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT_set_THERE_m838CE3DE8A108EAC19309E7759800A9E87A94828 (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36 (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT_set__world_mDEBD2B6452D6306471B9C3FA03EA9911DEDA5452 (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTSHOOT_get_Current_m0C6AE6FD5022CCA4928C6BE94E031552BC0A0398 (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT_set_Current_m2121FF0F283F41E4ECD881DED23D701410B6AC3A (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT_Reset_m0D11D28C1A67B163907E0C533459DAD2C60A7F04 (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT__ctor_m55A9C9E494F3FD093D000B79D533E1536892704E (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT__ctor_m7C51BCE8B98B2C67C5376C922BB5CC955C9B2D65 (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CYCLEREPTSHOOT_set_MY_m76152EC13D43BC4697920B462E77A2A413BE2D25_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CYCLEREPTSHOOT_set_THERE_m838CE3DE8A108EAC19309E7759800A9E87A94828_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CYCLEREPTSHOOT_set__world_mDEBD2B6452D6306471B9C3FA03EA9911DEDA5452_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CYCLEREPTSHOOT_MoveNext_mF76341EE21C5B3B569A390E775EE68500739B236 (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_0 = NULL;
	REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* V_1 = NULL;
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_2 = NULL;
	REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* V_3 = NULL;
	REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* V_4 = NULL;
	REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* V_5 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_1 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_1, NULL);
		V_0 = L_1;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_2 = V_0;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = CYCLEREPTSHOOT_get_THERE_m248FD6A6BB743E89173F0AD177BC4D4E6653835D_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
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
		REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* L_16 = (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F*)il2cpp_codegen_object_new(REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F_il2cpp_TypeInfo_var);
		REPTDIE__ctor_m7EBDA8478C5C934ED33442D565AE159E20DC3F33(L_16, NULL);
		V_1 = L_16;
		REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* L_17 = V_1;
		REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* L_18 = L_17;
		RuntimeObject* L_19;
		L_19 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_18, L_19);
		REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* L_20 = L_18;
		RuntimeObject* L_21;
		L_21 = CYCLEREPTSHOOT_get_THERE_m248FD6A6BB743E89173F0AD177BC4D4E6653835D_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		RuntimeObject* L_22;
		L_22 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_22);
		RuntimeObject* L_23;
		L_23 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* L_24 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_24);
		return (bool)0;
	}

IL_00ae:
	{
		RuntimeObject* L_26;
		L_26 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
		__this->___MY_6 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_6;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)213), (0.0f));
		RuntimeObject* L_28;
		L_28 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
		__this->___MY_9 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_9), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_9;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_30;
		L_30 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
		__this->___MY_12 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_12), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_12;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)169), (0.0f));
		RuntimeObject* L_32;
		L_32 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
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
		L_37 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_36, L_37);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_38 = L_36;
		RuntimeObject* L_39;
		L_39 = CYCLEREPTSHOOT_get_THERE_m248FD6A6BB743E89173F0AD177BC4D4E6653835D_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_39);
		RuntimeObject* L_40;
		L_40 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_38, L_40);
		RuntimeObject* L_41;
		L_41 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_42 = V_2;
		NullCheck(L_41);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_42);
		RuntimeObject* L_44;
		L_44 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
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
		L_49 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
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
			goto IL_02a0;
		}
	}
	{
		REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* L_54 = (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E*)il2cpp_codegen_object_new(REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E_il2cpp_TypeInfo_var);
		REPTWAIT__ctor_m38058FB40D9A5C36F053C9FDD3891C6CF19901C0(L_54, NULL);
		V_3 = L_54;
		REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* L_55 = V_3;
		REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* L_56 = L_55;
		RuntimeObject* L_57;
		L_57 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
		NullCheck(L_56);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_56, L_57);
		REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* L_58 = L_56;
		RuntimeObject* L_59;
		L_59 = CYCLEREPTSHOOT_get_THERE_m248FD6A6BB743E89173F0AD177BC4D4E6653835D_inline(__this, NULL);
		NullCheck(L_58);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_58, L_59);
		RuntimeObject* L_60;
		L_60 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		NullCheck(L_58);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_58, L_60);
		RuntimeObject* L_61;
		L_61 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* L_62 = V_3;
		NullCheck(L_61);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_61, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_62);
		return (bool)0;
	}

IL_020d:
	{
		RuntimeObject* L_64;
		L_64 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
		__this->___MY_26 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_64);
		RuntimeObject* L_65 = __this->___MY_26;
		NullCheck(L_65);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)182), (1.0f));
		RuntimeObject* L_66;
		L_66 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
		__this->___MY_29 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_66);
		RuntimeObject* L_67 = __this->___MY_29;
		NullCheck(L_67);
		float L_68;
		L_68 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_67, ((int32_t)202), (bool)1);
		__this->___temp_30 = L_68;
		float L_69 = __this->___temp_30;
		bool L_70;
		L_70 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_69, (10.0f), NULL);
		if (L_70)
		{
			goto IL_02a0;
		}
	}
	{
		REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* L_71 = (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C*)il2cpp_codegen_object_new(REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C_il2cpp_TypeInfo_var);
		REPTSHOOT__ctor_mCD9DB71C8040E016C9A617F2E10DB8911836148B(L_71, NULL);
		V_4 = L_71;
		REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* L_72 = V_4;
		REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* L_73 = L_72;
		RuntimeObject* L_74;
		L_74 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
		NullCheck(L_73);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_73, L_74);
		REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* L_75 = L_73;
		RuntimeObject* L_76;
		L_76 = CYCLEREPTSHOOT_get_THERE_m248FD6A6BB743E89173F0AD177BC4D4E6653835D_inline(__this, NULL);
		NullCheck(L_75);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_75, L_76);
		RuntimeObject* L_77;
		L_77 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		NullCheck(L_75);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_75, L_77);
		RuntimeObject* L_78;
		L_78 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* L_79 = V_4;
		NullCheck(L_78);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_78, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_79);
		return (bool)0;
	}

IL_02a0:
	{
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_81 = (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854*)il2cpp_codegen_object_new(REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854_il2cpp_TypeInfo_var);
		REPTFOLLOWATTACK__ctor_m850D312D9EC7230283ED3E48079C32944D1AD9A6(L_81, NULL);
		V_5 = L_81;
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_82 = V_5;
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_83 = L_82;
		RuntimeObject* L_84;
		L_84 = CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline(__this, NULL);
		NullCheck(L_83);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_83, L_84);
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_85 = L_83;
		RuntimeObject* L_86;
		L_86 = CYCLEREPTSHOOT_get_THERE_m248FD6A6BB743E89173F0AD177BC4D4E6653835D_inline(__this, NULL);
		NullCheck(L_85);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_85, L_86);
		RuntimeObject* L_87;
		L_87 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		NullCheck(L_85);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_85, L_87);
		RuntimeObject* L_88;
		L_88 = CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline(__this, NULL);
		REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* L_89 = V_5;
		NullCheck(L_88);
		RuntimeObject* L_90;
		L_90 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_88, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_89);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTTALK_get_MY_m38693FA2304955D46214101C3633572643FA2774 (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTALK_set_MY_m7A6335E63BDD4C2A5E40A0D462FFEBA646EEB996 (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTTALK_get_THERE_m4A09BA593406652132BDF188BF6BBD471E0C43D4 (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTALK_set_THERE_m1CA993858DAC2E40F3E885047A24775D5304387C (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTTALK_get__world_mD47EE13E6E69F79B679C8076E7A2421DDEBDB0F4 (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTALK_set__world_mC043876C2D769ABF028409FA1E38CFB4A6499ED8 (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPTTALK_get_Current_mBB2A6B124C5C4AD8CA41C3D146AC2AF0848C62FD (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTALK_set_Current_m4026AF29D9D4500B8AB93B710E31311AA167BAD9 (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTALK_Reset_m8460C28752DB929FE282B985FAF7B1B57883623D (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTALK__ctor_m7115B6714BE1D58B3DA30B6F071EC7E3428C41BB (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPTTALK__ctor_m6ED876121CF8A142FB4D1AE6DAD42FEF35B73E08 (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPTTALK_set_MY_m7A6335E63BDD4C2A5E40A0D462FFEBA646EEB996_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPTTALK_set_THERE_m1CA993858DAC2E40F3E885047A24775D5304387C_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPTTALK_set__world_mC043876C2D769ABF028409FA1E38CFB4A6499ED8_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPTTALK_MoveNext_m1E5EDB76D439882ACB7F9F8F3D9C420E9A7A47D4 (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) 
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
		L_2 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_1, (0.899999976f), NULL);
		if (!L_2)
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = REPTTALK_get__world_mD47EE13E6E69F79B679C8076E7A2421DDEBDB0F4_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-983804722), (bool)1, (bool)1);
		__this->___REPT01SND_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT01SND_2), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = REPTTALK_get_MY_m38693FA2304955D46214101C3633572643FA2774_inline(__this, NULL);
		__this->___MY_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_6);
		RuntimeObject* L_7;
		L_7 = REPTTALK_get__world_mD47EE13E6E69F79B679C8076E7A2421DDEBDB0F4_inline(__this, NULL);
		RuntimeObject* L_8 = __this->___REPT01SND_2;
		RuntimeObject* L_9 = __this->___MY_4;
		NullCheck(L_7);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, L_8, (0.5f), L_9, (100.0f), (100.0f));
	}

IL_0067:
	{
		float L_10;
		L_10 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_11;
		L_11 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_10, (0.100000001f), NULL);
		if (!L_11)
		{
			goto IL_00c7;
		}
	}
	{
		RuntimeObject* L_12;
		L_12 = REPTTALK_get__world_mD47EE13E6E69F79B679C8076E7A2421DDEBDB0F4_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)-983768785), (bool)1, (bool)1);
		__this->___REPT02SND_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___REPT02SND_7), (void*)L_14);
		RuntimeObject* L_15;
		L_15 = REPTTALK_get_MY_m38693FA2304955D46214101C3633572643FA2774_inline(__this, NULL);
		__this->___MY_9 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_9), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = REPTTALK_get__world_mD47EE13E6E69F79B679C8076E7A2421DDEBDB0F4_inline(__this, NULL);
		RuntimeObject* L_17 = __this->___REPT02SND_7;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSTURN_get_MY_m5A399738F357798DCC422BC265C3A4D841B36C66 (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTURN_set_MY_mD18F4776B26CEAE2B9E3849569F956E13F605D21 (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSTURN_get_THERE_mAD875B68492201CC2B5E0050C4E19C5D3246416E (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTURN_set_THERE_m4196098BA0531448AC8D31953CC18BAC82AB9F61 (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85 (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTURN_set__world_mD7F872551D4E457A5657EEF8E40F9481FA323883 (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSTURN_get_Current_mAD9207170428D4D2775D678E6BA863EE46CD8AB3 (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTURN_set_Current_mA047779AA48DF5D3D6B14B91ED8D2232723120EA (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTURN_Reset_m0589B824B4EFDF62EB24477F953C5971E1313E71 (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTURN__ctor_mFE0554B1C8D3CB67EADB030D23EF0E108425C422 (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTURN__ctor_m982A17F0C6B91E44CC718126E8CE569CD63FA1CB (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		NURSTURN_set_MY_mD18F4776B26CEAE2B9E3849569F956E13F605D21_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		NURSTURN_set_THERE_m4196098BA0531448AC8D31953CC18BAC82AB9F61_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		NURSTURN_set__world_mD7F872551D4E457A5657EEF8E40F9481FA323883_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NURSTURN_MoveNext_m3785B9C7DB00BED8B8FFE41E3223B932CED251CE (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* V_0 = NULL;
	TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)33817649));
		__this->___WAITTIME_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAITTIME_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline(__this, NULL);
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
		L_10 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_9, (0.949999988f), NULL);
		if (!L_10)
		{
			goto IL_014b;
		}
	}
	{
		RuntimeObject* L_11;
		L_11 = NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, 5, ((int32_t)16575100));
		__this->___RIGHTTURNNURS_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNNURS_9), (void*)L_12);
		RuntimeObject* L_13;
		L_13 = NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)16575100));
		__this->___RIGHTTURNNURS_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNNURS_10), (void*)L_14);
		RuntimeObject* L_15 = __this->___RIGHTTURNNURS_10;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNNURS_10_val = L_16;
		RuntimeObject* L_17;
		L_17 = NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_17, 5, ((int32_t)16575100));
		__this->___RIGHTTURNNURS_12 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNNURS_12), (void*)L_18);
		RuntimeObject* L_19 = __this->___RIGHTTURNNURS_12;
		NullCheck(L_19);
		float L_20;
		L_20 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNNURS_12_val = L_20;
		RuntimeObject* L_21;
		L_21 = NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)16575100));
		__this->___RIGHTTURNNURS_18 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNNURS_18), (void*)L_22);
		RuntimeObject* L_23 = __this->___RIGHTTURNNURS_18;
		NullCheck(L_23);
		float L_24;
		L_24 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNNURS_18_val = L_24;
		RuntimeObject* L_25 = __this->___RIGHTTURNNURS_9;
		float L_26 = __this->___RIGHTTURNNURS_12_val;
		float L_27 = __this->___RIGHTTURNNURS_18_val;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)231), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, (1.0f))), ((float)il2cpp_codegen_subtract(L_27, (1.0f))))));
	}

IL_014b:
	{
		RuntimeObject* L_28;
		L_28 = NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, 5, ((int32_t)16575100));
		__this->___RIGHTTURNNURS_22 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNNURS_22), (void*)L_29);
		RuntimeObject* L_30 = __this->___RIGHTTURNNURS_22;
		NullCheck(L_30);
		float L_31;
		L_31 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNNURS_22_val = L_31;
		float L_32 = __this->___RIGHTTURNNURS_22_val;
		RuntimeObject* L_33 = __this->___RIGHTTURNNURS_22;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)233), (bool)1);
		if ((!(((float)L_32) > ((float)L_34))))
		{
			goto IL_01cc;
		}
	}
	{
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_35 = (TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902*)il2cpp_codegen_object_new(TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902_il2cpp_TypeInfo_var);
		TURNRIGHT__ctor_mAD82B12963F20823A2CFE3E007E94496A56C8353(L_35, NULL);
		V_0 = L_35;
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_36 = V_0;
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_37 = L_36;
		RuntimeObject* L_38;
		L_38 = NURSTURN_get_MY_m5A399738F357798DCC422BC265C3A4D841B36C66_inline(__this, NULL);
		NullCheck(L_37);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_37, L_38);
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_39 = L_37;
		RuntimeObject* L_40;
		L_40 = NURSTURN_get_THERE_mAD875B68492201CC2B5E0050C4E19C5D3246416E_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		RuntimeObject* L_41;
		L_41 = NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_41);
		RuntimeObject* L_42;
		L_42 = NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline(__this, NULL);
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_43 = V_0;
		NullCheck(L_42);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_42, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_43);
		return (bool)0;
	}

IL_01cc:
	{
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_45 = (TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518*)il2cpp_codegen_object_new(TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518_il2cpp_TypeInfo_var);
		TURNLEFT__ctor_m361003A6CB36C1059716F979D3822771D39CD395(L_45, NULL);
		V_1 = L_45;
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_46 = V_1;
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_47 = L_46;
		RuntimeObject* L_48;
		L_48 = NURSTURN_get_MY_m5A399738F357798DCC422BC265C3A4D841B36C66_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_49 = L_47;
		RuntimeObject* L_50;
		L_50 = NURSTURN_get_THERE_mAD875B68492201CC2B5E0050C4E19C5D3246416E_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		RuntimeObject* L_51;
		L_51 = NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_51);
		RuntimeObject* L_52;
		L_52 = NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline(__this, NULL);
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_53 = V_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4 (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWAIT_set_MY_m2A044288DEF473806D35C3DEFFA4C1FC46E23657 (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSWAIT_get_THERE_mC8A9B25131DA8FA0930818841F1EBF533635E703 (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWAIT_set_THERE_m0389A70A5920DF54BAEA2C189CA19836FE7EA1E3 (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSWAIT_get__world_m7D99A02E7C2F8E2698D842C33D39FFDBBB4466BF (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWAIT_set__world_mC1852ED343E0F67F8592849EA919CEDCFE506F26 (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSWAIT_get_Current_m903485C1CBD985A2C550E4FAEEE7DF223A11D2D9 (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWAIT_set_Current_mBFE690B1F9620FA4E77945495B71B42A06B02561 (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWAIT_Reset_mBC0EC746C80991A6A9A3FE122D49B9850EFB1AC7 (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWAIT__ctor_mD76032EA87233E9C3063214618A6E9C818BFE628 (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWAIT__ctor_mCA2DC9F0F744CFEC208EED30DE843B1EF2FC9C6E (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		NURSWAIT_set_MY_m2A044288DEF473806D35C3DEFFA4C1FC46E23657_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		NURSWAIT_set_THERE_m0389A70A5920DF54BAEA2C189CA19836FE7EA1E3_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		NURSWAIT_set__world_mC1852ED343E0F67F8592849EA919CEDCFE506F26_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NURSWAIT_MoveNext_mA043DE81847E2917B89FCE899CE90EC2B82463DD (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, const RuntimeMethod* method) 
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
		L_1 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)207), (0.0f));
		RuntimeObject* L_3;
		L_3 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = NURSWAIT_get__world_m7D99A02E7C2F8E2698D842C33D39FFDBBB4466BF_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)1144994394), (bool)1, (bool)1);
		__this->___NURSHIT_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURSHIT_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___NURSHIT_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)209), L_12);
		RuntimeObject* L_13;
		L_13 = NURSWAIT_get__world_m7D99A02E7C2F8E2698D842C33D39FFDBBB4466BF_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-869500319), (bool)1, (bool)1);
		__this->___NURSTALK_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURSTALK_12), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_14;
		RuntimeObject* L_18 = __this->___NURSTALK_12;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)192), L_18);
		RuntimeObject* L_19;
		L_19 = NURSWAIT_get__world_m7D99A02E7C2F8E2698D842C33D39FFDBBB4466BF_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)1351920677), (bool)1, (bool)1);
		__this->___NURSCYCLE_15 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURSCYCLE_15), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_17 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_17;
		RuntimeObject* L_24 = __this->___NURSCYCLE_15;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)190), L_24);
		RuntimeObject* L_25;
		L_25 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_20;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)213), (0.0f));
		RuntimeObject* L_27;
		L_27 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_23 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_23;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_29;
		L_29 = NURSWAIT_get__world_m7D99A02E7C2F8E2698D842C33D39FFDBBB4466BF_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)-870773578), (bool)1, (bool)1);
		__this->___NURS0TEX_24 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS0TEX_24), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_26 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_26;
		RuntimeObject* L_34 = __this->___NURS0TEX_24;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)164), L_34);
		RuntimeObject* L_35;
		L_35 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_29 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_29;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)168), (0.0f));
		RuntimeObject* L_37;
		L_37 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_32 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_37);
		RuntimeObject* L_38 = __this->___MY_32;
		NullCheck(L_38);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)199), (RuntimeObject*)NULL);
		RuntimeObject* L_39;
		L_39 = NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline(__this, NULL);
		__this->___MY_35 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_35), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_35;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)176), (1.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779 (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWANDER_set_MY_mCD40548E51EDFA631BFAEA4A37AD59F356D3A136 (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSWANDER_get_THERE_m0E21570CF07D455E0D7E17015EEF7321C744D1C6 (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWANDER_set_THERE_m332D14CA94E19D90C2015D21A8FBEFF0584AEAE7 (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSWANDER_get__world_m2609BA3DBAB95E4E9876ED5F2C0E4EC3E945D9B8 (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWANDER_set__world_m5CDF49A3450688FA41DF160CA9129FD43BF73801 (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSWANDER_get_Current_m993D5D10EB8161713724ABC8C7A7393169E84D25 (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWANDER_set_Current_m37EF8736F1E51958EB6AF32FD83D596926A8113B (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWANDER_Reset_mD2996054D33D0B77838B9237584BC4BCB58B6157 (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWANDER__ctor_mB52B60273F6016660C3E23F482E89D645E1EA4BC (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSWANDER__ctor_m2F25DBAFA9181A92C4299A21EF57A70C710D1DB8 (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		NURSWANDER_set_MY_mCD40548E51EDFA631BFAEA4A37AD59F356D3A136_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		NURSWANDER_set_THERE_m332D14CA94E19D90C2015D21A8FBEFF0584AEAE7_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		NURSWANDER_set__world_m5CDF49A3450688FA41DF160CA9129FD43BF73801_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NURSWANDER_MoveNext_m2A1735D2D8F929AB47A764E29DCC998BC981F649 (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) 
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
		L_1 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)207), (1.0f));
		RuntimeObject* L_3;
		L_3 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = NURSWANDER_get__world_m2609BA3DBAB95E4E9876ED5F2C0E4EC3E945D9B8_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)1144994394), (bool)1, (bool)1);
		__this->___NURSHIT_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURSHIT_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___NURSHIT_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)209), L_12);
		RuntimeObject* L_13;
		L_13 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
		__this->___MY_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_14;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_15;
		L_15 = NURSWANDER_get__world_m2609BA3DBAB95E4E9876ED5F2C0E4EC3E945D9B8_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)1351920677), (bool)1, (bool)1);
		__this->___NURSCYCLE_15 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURSCYCLE_15), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
		__this->___MY_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_17;
		RuntimeObject* L_20 = __this->___NURSCYCLE_15;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)190), L_20);
		RuntimeObject* L_21;
		L_21 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)213), (0.0f));
		RuntimeObject* L_23;
		L_23 = NURSWANDER_get__world_m2609BA3DBAB95E4E9876ED5F2C0E4EC3E945D9B8_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)-870737641), (bool)1, (bool)1);
		__this->___NURS1TEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS1TEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___NURS1TEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.400000006f));
		RuntimeObject* L_31;
		L_31 = NURSWANDER_get__world_m2609BA3DBAB95E4E9876ED5F2C0E4EC3E945D9B8_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_27 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_27), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
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
		L_40 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = NURSWANDER_get_THERE_m0E21570CF07D455E0D7E17015EEF7321C744D1C6_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = NURSWANDER_get__world_m2609BA3DBAB95E4E9876ED5F2C0E4EC3E945D9B8_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = NURSWANDER_get__world_m2609BA3DBAB95E4E9876ED5F2C0E4EC3E945D9B8_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_45 = V_0;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
		RuntimeObject* L_47;
		L_47 = NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline(__this, NULL);
		__this->___MY_32 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_47);
		RuntimeObject* L_48 = __this->___MY_32;
		NullCheck(L_48);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)176), (1.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572 (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIDE_set_MY_m4F85BA19F9CBB4FE18B08643E09A4EE1E04D520A (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSHIDE_get_THERE_m0A5144370D549737829B340A7B98C1D4E71DD1AF (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIDE_set_THERE_m60985E05BB351B742F0CEA2DBDEB7552E5D41393 (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36 (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIDE_set__world_m3961A8AFE75D79852B4A96B60A6E91A150D06726 (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSHIDE_get_Current_m7360DB616620201795FA438718D767C71DC79595 (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIDE_set_Current_mA7E632D309FF76C5FFF0C375AF85AAA34A5B5205 (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIDE_Reset_mC6ACBC48A29E25085B60C0A1C110BFDFEBDD2AEA (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIDE__ctor_mF67BE577F90D25EE15921EE8C979F3A67BB1CD79 (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIDE__ctor_m0AF10144D649F0EB962337CA85D2C4A2300FABEF (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		NURSHIDE_set_MY_m4F85BA19F9CBB4FE18B08643E09A4EE1E04D520A_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		NURSHIDE_set_THERE_m60985E05BB351B742F0CEA2DBDEB7552E5D41393_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		NURSHIDE_set__world_m3961A8AFE75D79852B4A96B60A6E91A150D06726_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NURSHIDE_MoveNext_m3078A97FBDF2522E5E010930F8143D1590C39AD3 (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* V_0 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_1 = NULL;
	NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0310;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)207), (1.0f));
		RuntimeObject* L_3;
		L_3 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_11;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)1351920677), (bool)1, (bool)1);
		__this->___NURSCYCLE_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURSCYCLE_12), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_14;
		RuntimeObject* L_14 = __this->___NURSCYCLE_12;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)1144994394), (bool)1, (bool)1);
		__this->___NURSHIT_15 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURSHIT_15), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_17;
		RuntimeObject* L_20 = __this->___NURSHIT_15;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)209), L_20);
		NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* L_21 = (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854*)il2cpp_codegen_object_new(NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854_il2cpp_TypeInfo_var);
		NURSSCREAM__ctor_mDD5E9AAF395DA3750DC86F2DD1A22DB6A6AA0E24(L_21, NULL);
		V_0 = L_21;
		NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* L_22 = V_0;
		NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* L_23 = L_22;
		RuntimeObject* L_24;
		L_24 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_24);
		NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* L_25 = L_23;
		RuntimeObject* L_26;
		L_26 = NURSHIDE_get_THERE_m0A5144370D549737829B340A7B98C1D4E71DD1AF_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_26);
		RuntimeObject* L_27;
		L_27 = NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_27);
		RuntimeObject* L_28;
		L_28 = NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline(__this, NULL);
		NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* L_29 = V_0;
		NullCheck(L_28);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_29);
		RuntimeObject* L_31;
		L_31 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_19 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_19), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_21 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_21;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)194), (bool)1);
		__this->___temp_22 = L_34;
		RuntimeObject* L_35;
		L_35 = NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)462));
		__this->___PLAYER_ANGLE_23 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ANGLE_23), (void*)L_36);
		RuntimeObject* L_37 = __this->___PLAYER_ANGLE_23;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (bool)1);
		__this->___PLAYER_ANGLE_23_val = L_38;
		RuntimeObject* L_39 = __this->___MY_19;
		float L_40 = __this->___PLAYER_ANGLE_23_val;
		float L_41;
		L_41 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)194), ((float)il2cpp_codegen_add(L_40, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((0.5f), L_41)), (2.4000001f))))));
		RuntimeObject* L_42;
		L_42 = NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)-870737641), (bool)1, (bool)1);
		__this->___NURS1TEX_32 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS1TEX_32), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_34 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_34), (void*)L_45);
		RuntimeObject* L_46 = __this->___MY_34;
		RuntimeObject* L_47 = __this->___NURS1TEX_32;
		NullCheck(L_46);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)164), L_47);
		RuntimeObject* L_48;
		L_48 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_37 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_37), (void*)L_48);
		RuntimeObject* L_49 = __this->___MY_37;
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)168), (0.600000024f));
		RuntimeObject* L_50;
		L_50 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_40 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_40), (void*)L_50);
		RuntimeObject* L_51 = __this->___MY_40;
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)172), (20.0f));
		RuntimeObject* L_52;
		L_52 = NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_41 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_41), (void*)L_54);
		RuntimeObject* L_55;
		L_55 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_43 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_43), (void*)L_55);
		RuntimeObject* L_56 = __this->___MY_43;
		RuntimeObject* L_57 = __this->___BULLET_41;
		NullCheck(L_56);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_56, ((int32_t)199), L_57);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_58 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_58, NULL);
		V_1 = L_58;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_59 = V_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_60 = L_59;
		RuntimeObject* L_61;
		L_61 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		NullCheck(L_60);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_60, L_61);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_62 = L_60;
		RuntimeObject* L_63;
		L_63 = NURSHIDE_get_THERE_m0A5144370D549737829B340A7B98C1D4E71DD1AF_inline(__this, NULL);
		NullCheck(L_62);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_62, L_63);
		RuntimeObject* L_64;
		L_64 = NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline(__this, NULL);
		NullCheck(L_62);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_62, L_64);
		RuntimeObject* L_65;
		L_65 = NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_66 = V_1;
		NullCheck(L_65);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_65, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_66);
		RuntimeObject* L_68;
		L_68 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_46 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_68);
		RuntimeObject* L_69 = __this->___MY_46;
		NullCheck(L_69);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)176), (4.0f));
		float L_70;
		L_70 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_70;
		float L_71 = __this->___startTime1;
		float L_72;
		L_72 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)480), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_71, L_72));
		__this->____cursor = 1;
		goto IL_0310;
	}

IL_0303:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_73 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		NURSHIDE_set_Current_mA7E632D309FF76C5FFF0C375AF85AAA34A5B5205_inline(__this, L_73, NULL);
		return (bool)1;
	}

IL_0310:
	{
		float L_74;
		L_74 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_75 = __this->___endTime1;
		if ((((float)L_74) < ((float)L_75)))
		{
			goto IL_0303;
		}
	}
	{
		NURSHIDE_set_Current_mA7E632D309FF76C5FFF0C375AF85AAA34A5B5205_inline(__this, NULL, NULL);
		RuntimeObject* L_76;
		L_76 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		__this->___MY_50 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_50), (void*)L_76);
		RuntimeObject* L_77 = __this->___MY_50;
		NullCheck(L_77);
		float L_78;
		L_78 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_77, ((int32_t)173), (bool)1);
		__this->___temp_51 = L_78;
		float L_79 = __this->___temp_51;
		bool L_80;
		L_80 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_79, (2.0f), NULL);
		if (!L_80)
		{
			goto IL_0393;
		}
	}
	{
		NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* L_81 = (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E*)il2cpp_codegen_object_new(NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E_il2cpp_TypeInfo_var);
		NURSWANDER__ctor_mB52B60273F6016660C3E23F482E89D645E1EA4BC(L_81, NULL);
		V_2 = L_81;
		NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* L_82 = V_2;
		NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* L_83 = L_82;
		RuntimeObject* L_84;
		L_84 = NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline(__this, NULL);
		NullCheck(L_83);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_83, L_84);
		NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* L_85 = L_83;
		RuntimeObject* L_86;
		L_86 = NURSHIDE_get_THERE_m0A5144370D549737829B340A7B98C1D4E71DD1AF_inline(__this, NULL);
		NullCheck(L_85);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_85, L_86);
		RuntimeObject* L_87;
		L_87 = NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline(__this, NULL);
		NullCheck(L_85);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_85, L_87);
		RuntimeObject* L_88;
		L_88 = NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline(__this, NULL);
		NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* L_89 = V_2;
		NullCheck(L_88);
		RuntimeObject* L_90;
		L_90 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_88, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_89);
		return (bool)0;
	}

IL_0393:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDEAD_set_MY_m7B85464A923FA0A3BC456CF00680DC85CE91ED6C (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSDEAD_get_THERE_mAEC6B9C59153C49DBD843FB4D1E60A829BBF46BA (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDEAD_set_THERE_m0A6ED7D3F80ACBBCD3663BCC66C591C0C096B64C (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSDEAD_get__world_mB8BA85DDA64170DD6C1E9E1C2C9F2CFA554A48A4 (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDEAD_set__world_mB16AA976395233F383B1BD8300630497CA39FC62 (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSDEAD_get_Current_mC8F08081186C7AE71AB3598A88E033D38C5B27E1 (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDEAD_set_Current_m2386920D6D04E3E01E698BDDF3E58A684278A17B (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDEAD_Reset_mB560B444DBF56EC5663DCC907F1C43163BDC5CB6 (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDEAD__ctor_m71EFA43EDDE2466DA7583EAB7B62DC0F40E57F05 (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDEAD__ctor_mD7A1ACD1E538BB9DC3F90E487D432699096D5C00 (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		NURSDEAD_set_MY_m7B85464A923FA0A3BC456CF00680DC85CE91ED6C_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		NURSDEAD_set_THERE_m0A6ED7D3F80ACBBCD3663BCC66C591C0C096B64C_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		NURSDEAD_set__world_mB16AA976395233F383B1BD8300630497CA39FC62_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NURSDEAD_MoveNext_m41EBEB39083431CFA1C27FBAB88A4059DDCB1353 (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline(__this, NULL);
		__this->___MY_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_11;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)190), (RuntimeObject*)NULL);
		INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E* L_9 = (INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E*)il2cpp_codegen_object_new(INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E_il2cpp_TypeInfo_var);
		INNOCENTKILLED__ctor_m319F3233B97738CBBFE730AE2AB5F354AF3F72E4(L_9, NULL);
		V_0 = L_9;
		INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E* L_10 = V_0;
		INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E* L_11 = L_10;
		RuntimeObject* L_12;
		L_12 = NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_11, L_12);
		INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E* L_13 = L_11;
		RuntimeObject* L_14;
		L_14 = NURSDEAD_get_THERE_mAEC6B9C59153C49DBD843FB4D1E60A829BBF46BA_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_14);
		RuntimeObject* L_15;
		L_15 = NURSDEAD_get__world_mB8BA85DDA64170DD6C1E9E1C2C9F2CFA554A48A4_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_15);
		RuntimeObject* L_16;
		L_16 = NURSDEAD_get__world_mB8BA85DDA64170DD6C1E9E1C2C9F2CFA554A48A4_inline(__this, NULL);
		INNOCENTKILLED_t56B731452631064B97123E2EC9ABA9471241056E* L_17 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_17);
		RuntimeObject* L_19;
		L_19 = NURSDEAD_get__world_mB8BA85DDA64170DD6C1E9E1C2C9F2CFA554A48A4_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)-870450145), (bool)1, (bool)1);
		__this->___NURS9TEX_12 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS9TEX_12), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline(__this, NULL);
		__this->___MY_14 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_14;
		RuntimeObject* L_24 = __this->___NURS9TEX_12;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)164), L_24);
		RuntimeObject* L_25;
		L_25 = NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline(__this, NULL);
		__this->___MY_17 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_17;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)168), (0.0f));
		RuntimeObject* L_27;
		L_27 = NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline(__this, NULL);
		__this->___MY_20 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_20;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)199), (RuntimeObject*)NULL);
		RuntimeObject* L_29;
		L_29 = NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline(__this, NULL);
		__this->___MY_23 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_23;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)206), (1.0f));
		RuntimeObject* L_31;
		L_31 = NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline(__this, NULL);
		__this->___MY_26 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_26;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)207), (0.0f));
		RuntimeObject* L_33;
		L_33 = NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline(__this, NULL);
		__this->___MY_29 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_33);
		RuntimeObject* L_34 = __this->___MY_29;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)176), (8.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0 (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDIE_set_MY_m80654BD89A1707FFF4B6179443A6FE62263C7D59 (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSDIE_get_THERE_mE22C79319903084CF8E10874CAEC9CEE6CA1C0FB (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDIE_set_THERE_m92FEE161CFFD0E34009DB1E49C120AFADCE4E9DB (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSDIE_get__world_mF651525FA09370EEAD9D9373C8484C2514B64F47 (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDIE_set__world_m78B0D77A1F3073A4889CA5D1E8DCFBB40F02A5F7 (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSDIE_get_Current_mD8DAA8F5CFCF7446B682D3D0E8088F9C02765055 (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDIE_set_Current_m1F998ACA9C2E19D609F322CACF4A6FE72938F3B6 (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDIE_Reset_m4037549682D1A09FA0C1A33D1F61557672A46938 (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDIE__ctor_mAF40C77D4A2307C6134F40701DE611D4ADD42E56 (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSDIE__ctor_m1C2A038C532496BFAD36FC8DB7F860617695C5F3 (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		NURSDIE_set_MY_m80654BD89A1707FFF4B6179443A6FE62263C7D59_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		NURSDIE_set_THERE_m92FEE161CFFD0E34009DB1E49C120AFADCE4E9DB_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		NURSDIE_set__world_m78B0D77A1F3073A4889CA5D1E8DCFBB40F02A5F7_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NURSDIE_MoveNext_m36DF0A3C1C352192C035E2FA8FA5089F9410672A (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) 
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
		L_1 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)173), (10.0f));
		RuntimeObject* L_3;
		L_3 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)206), (1.0f));
		RuntimeObject* L_5;
		L_5 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)207), (0.0f));
		RuntimeObject* L_7;
		L_7 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_11;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_14;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_11;
		L_11 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_17 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_17;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_13;
		L_13 = NURSDIE_get__world_mF651525FA09370EEAD9D9373C8484C2514B64F47_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-870071325), (bool)1, (bool)1);
		__this->___NURSDEAD_18 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURSDEAD_18), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_20 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_20;
		RuntimeObject* L_18 = __this->___NURSDEAD_18;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)190), L_18);
		RuntimeObject* L_19;
		L_19 = NURSDIE_get__world_mF651525FA09370EEAD9D9373C8484C2514B64F47_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)-870486082), (bool)1, (bool)1);
		__this->___NURS8TEX_21 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS8TEX_21), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_23 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_23;
		RuntimeObject* L_24 = __this->___NURS8TEX_21;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)164), L_24);
		RuntimeObject* L_25;
		L_25 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_26 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_26;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)168), (0.0f));
		RuntimeObject* L_27;
		L_27 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_29 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_29;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)199), (RuntimeObject*)NULL);
		RuntimeObject* L_29;
		L_29 = NURSDIE_get__world_mF651525FA09370EEAD9D9373C8484C2514B64F47_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)1328075998), (bool)1, (bool)1);
		__this->___NURS04SND_30 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS04SND_30), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_32 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_32);
		RuntimeObject* L_33;
		L_33 = NURSDIE_get__world_mF651525FA09370EEAD9D9373C8484C2514B64F47_inline(__this, NULL);
		RuntimeObject* L_34 = __this->___NURS04SND_30;
		RuntimeObject* L_35 = __this->___MY_32;
		NullCheck(L_33);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, L_34, (0.400000006f), L_35, (100.0f), (100.0f));
		RuntimeObject* L_36;
		L_36 = NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline(__this, NULL);
		__this->___MY_35 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_35), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_35;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)176), (8.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSIMPLODE_set_MY_m8D78AD8D0BAF4118F1D15B9876DC36B189EB9D20 (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSIMPLODE_get_THERE_mFD08736E8483C3557EE83F40FE81E71BB95EA690 (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSIMPLODE_set_THERE_mD4D4797CADE27613CB03253D520B5ED813F799D4 (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSIMPLODE_set__world_m8770F7510D71127CC1D8C973ACBCA34752C6AF6D (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSIMPLODE_get_Current_m38C0D7E1E2297A96CA4AA416F946684358332DFD (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSIMPLODE_set_Current_m77AA876B8440AD53A4034038E5A2E6C61836C708 (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSIMPLODE_Reset_m812B84D06DEC34AC3D616D7958680C896AC60B1C (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSIMPLODE__ctor_mF78EE68A69D2015A27035A8C265531101A5D017F (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSIMPLODE__ctor_mAC139DCE02266287C460C896650053CAE65CCE55 (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		NURSIMPLODE_set_MY_m8D78AD8D0BAF4118F1D15B9876DC36B189EB9D20_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		NURSIMPLODE_set_THERE_mD4D4797CADE27613CB03253D520B5ED813F799D4_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		NURSIMPLODE_set__world_m8770F7510D71127CC1D8C973ACBCA34752C6AF6D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NURSIMPLODE_MoveNext_m3FEF841AEA4AB2B046BA697FD129D11267DA4B10 (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) 
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
		L_1 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)217512505));
		__this->___DISTX_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
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
		L_7 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_4;
		NullCheck(L_8);
		float L_9;
		L_9 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)195), (bool)1);
		__this->___temp_5 = L_9;
		RuntimeObject* L_10;
		L_10 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
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
		L_14 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_14;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)195), (bool)1);
		__this->___temp_15 = L_16;
		RuntimeObject* L_17;
		L_17 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
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
		L_21 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_24 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_24;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)196), (bool)1);
		__this->___temp_25 = L_23;
		RuntimeObject* L_24;
		L_24 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
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
		L_28 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_34 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_34), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_34;
		NullCheck(L_29);
		float L_30;
		L_30 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)196), (bool)1);
		__this->___temp_35 = L_30;
		RuntimeObject* L_31;
		L_31 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
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
		L_44 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
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
		L_48 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
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
		L_53 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)217512507));
		__this->___DISTZ_43 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_43), (void*)L_54);
		RuntimeObject* L_55;
		L_55 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
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
		L_59 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_46 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_46;
		NullCheck(L_60);
		float L_61;
		L_61 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)200), (bool)1);
		__this->___temp_47 = L_61;
		RuntimeObject* L_62;
		L_62 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_50 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_50), (void*)L_63);
		RuntimeObject* L_64 = __this->___EXPLOSION_CENTER_50;
		NullCheck(L_64);
		float L_65;
		L_65 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)200), (bool)1);
		__this->___temp_51 = L_65;
		RuntimeObject* L_66 = __this->___DISTZ_43;
		float L_67 = __this->___temp_47;
		float L_68 = __this->___temp_51;
		NullCheck(L_66);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_67, L_68)));
		RuntimeObject* L_69;
		L_69 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
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
		L_78 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		NullCheck(L_77);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_77, L_78);
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_79 = L_77;
		RuntimeObject* L_80;
		L_80 = NURSIMPLODE_get_THERE_mFD08736E8483C3557EE83F40FE81E71BB95EA690_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_80);
		RuntimeObject* L_81;
		L_81 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_79, L_81);
		RuntimeObject* L_82;
		L_82 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
		BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* L_83 = V_0;
		NullCheck(L_82);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_82, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_83);
		return (bool)0;
	}

IL_0364:
	{
		RuntimeObject* L_85;
		L_85 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_56 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_56), (void*)L_85);
		RuntimeObject* L_86 = __this->___MY_56;
		NullCheck(L_86);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)206), (1.0f));
		RuntimeObject* L_87;
		L_87 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_59 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_59), (void*)L_87);
		RuntimeObject* L_88 = __this->___MY_59;
		NullCheck(L_88);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)207), (0.0f));
		RuntimeObject* L_89;
		L_89 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_62 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_62), (void*)L_89);
		RuntimeObject* L_90 = __this->___MY_62;
		NullCheck(L_90);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_90, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_91;
		L_91 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_65 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_65), (void*)L_91);
		RuntimeObject* L_92 = __this->___MY_65;
		NullCheck(L_92);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_93;
		L_93 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_68 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_68), (void*)L_93);
		RuntimeObject* L_94 = __this->___MY_68;
		NullCheck(L_94);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_95;
		L_95 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_95);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_96, ((int32_t)1333438470), (bool)1, (bool)1);
		__this->___VANISHFORGOOD_69 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VANISHFORGOOD_69), (void*)L_97);
		RuntimeObject* L_98;
		L_98 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_71 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_71), (void*)L_98);
		RuntimeObject* L_99 = __this->___MY_71;
		RuntimeObject* L_100 = __this->___VANISHFORGOOD_69;
		NullCheck(L_99);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)190), L_100);
		RuntimeObject* L_101;
		L_101 = NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline(__this, NULL);
		NullCheck(L_101);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_101);
		NullCheck(L_102);
		RuntimeObject* L_103;
		L_103 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)1328543991), (bool)1, (bool)1);
		__this->___NURS0ATEX_72 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS0ATEX_72), (void*)L_103);
		RuntimeObject* L_104;
		L_104 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_74 = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_74), (void*)L_104);
		RuntimeObject* L_105 = __this->___MY_74;
		RuntimeObject* L_106 = __this->___NURS0ATEX_72;
		NullCheck(L_105);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_105, ((int32_t)164), L_106);
		RuntimeObject* L_107;
		L_107 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_77 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_77), (void*)L_107);
		RuntimeObject* L_108 = __this->___MY_77;
		NullCheck(L_108);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_108, ((int32_t)168), (0.0f));
		RuntimeObject* L_109;
		L_109 = NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline(__this, NULL);
		__this->___MY_80 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_80), (void*)L_109);
		RuntimeObject* L_110 = __this->___MY_80;
		NullCheck(L_110);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)199), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIT_set_MY_mA04F3FBD9FDC5DB724D9DD50701A45BF2F838AA7 (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSHIT_get_THERE_mF9182ED2A7EC327E0C677619D78F3593E2141D2C (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIT_set_THERE_m82EC6E1A10206AB0C152C16829B7ADA1448FD60E (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8 (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIT_set__world_m258CD6098816AC1F6E80858E45CC2CFAD47FF96D (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSHIT_get_Current_mDFE531786E23169374D5B2B8762DD04E8338F09A (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIT_set_Current_m7FC20067B951BACDEA1BBBD683A20001CD59499F (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIT_Reset_mF999F97A07B23AE9F94ED458198A4C391568CF73 (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIT__ctor_m220E00BC1530CDD157ED34F4F6ECE5A4003E28C5 (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSHIT__ctor_m353DB173099D70C98A87CCAF578CEE655D53F38C (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		NURSHIT_set_MY_mA04F3FBD9FDC5DB724D9DD50701A45BF2F838AA7_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		NURSHIT_set_THERE_m82EC6E1A10206AB0C152C16829B7ADA1448FD60E_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		NURSHIT_set__world_m258CD6098816AC1F6E80858E45CC2CFAD47FF96D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NURSHIT_MoveNext_m3A80C43552DAD372D6FFD4522E74269221501FB2 (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* V_0 = NULL;
	NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* V_1 = NULL;
	NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* V_2 = NULL;
	NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* V_3 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* G_B12_1 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* G_B11_1 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* G_B13_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_05be;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
			goto IL_0719;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
		L_13 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
			goto IL_0719;
		}
	}
	{
		RuntimeObject* L_19;
		L_19 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)217512505));
		__this->___DISTX_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_6), (void*)L_20);
		RuntimeObject* L_21;
		L_21 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
		L_25 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_10 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_10;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)195), (bool)1);
		__this->___temp_11 = L_27;
		RuntimeObject* L_28;
		L_28 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
		L_32 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_20 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_20;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)195), (bool)1);
		__this->___temp_21 = L_34;
		RuntimeObject* L_35;
		L_35 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
		L_39 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_30 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_30;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)196), (bool)1);
		__this->___temp_31 = L_41;
		RuntimeObject* L_42;
		L_42 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
		L_46 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_40 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_40), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_40;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)196), (bool)1);
		__this->___temp_41 = L_48;
		RuntimeObject* L_49;
		L_49 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
		L_62 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
		L_66 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
		L_71 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
			goto IL_0719;
		}
	}

IL_033e:
	{
		RuntimeObject* L_77;
		L_77 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
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
		L_83 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
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
		NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* L_88 = (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F*)il2cpp_codegen_object_new(NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F_il2cpp_TypeInfo_var);
		NURSIMPLODE__ctor_mF78EE68A69D2015A27035A8C265531101A5D017F(L_88, NULL);
		V_0 = L_88;
		NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* L_89 = V_0;
		NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* L_90 = L_89;
		RuntimeObject* L_91;
		L_91 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		NullCheck(L_90);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_90, L_91);
		NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* L_92 = L_90;
		RuntimeObject* L_93;
		L_93 = NURSHIT_get_THERE_mF9182ED2A7EC327E0C677619D78F3593E2141D2C_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_93);
		RuntimeObject* L_94;
		L_94 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_94);
		RuntimeObject* L_95;
		L_95 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* L_96 = V_0;
		NullCheck(L_95);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_95, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_96);
		return (bool)0;
	}

IL_03ed:
	{
		RuntimeObject* L_98;
		L_98 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NullCheck(L_98);
		RuntimeObject* L_99;
		L_99 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_98, 5, ((int32_t)441));
		__this->___SHOOT_FAC_57 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_57), (void*)L_99);
		RuntimeObject* L_100 = __this->___SHOOT_FAC_57;
		NullCheck(L_100);
		float L_101;
		L_101 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)231), (bool)1);
		__this->___SHOOT_FAC_57_val = L_101;
		RuntimeObject* L_102;
		L_102 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_59 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_59), (void*)L_102);
		RuntimeObject* L_103 = __this->___MY_59;
		NullCheck(L_103);
		float L_104;
		L_104 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_103, ((int32_t)173), (bool)1);
		__this->___temp_60 = L_104;
		RuntimeObject* L_105;
		L_105 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_62 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_62), (void*)L_105);
		RuntimeObject* L_106 = __this->___MY_62;
		float L_107 = __this->___temp_60;
		float L_108 = __this->___SHOOT_FAC_57_val;
		NullCheck(L_106);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_106, ((int32_t)173), ((float)il2cpp_codegen_add(L_107, L_108)));
		RuntimeObject* L_109;
		L_109 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_65 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_65), (void*)L_109);
		RuntimeObject* L_110 = __this->___MY_65;
		NullCheck(L_110);
		float L_111;
		L_111 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)173), (bool)1);
		__this->___temp_66 = L_111;
		float L_112 = __this->___temp_66;
		bool L_113;
		L_113 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_112, (2.0f), NULL);
		if (L_113)
		{
			goto IL_06be;
		}
	}
	{
		float L_114;
		L_114 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_115;
		L_115 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_114, (0.300000012f), NULL);
		if (L_115)
		{
			goto IL_06be;
		}
	}
	{
		RuntimeObject* L_116;
		L_116 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_70 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_70), (void*)L_116);
		RuntimeObject* L_117 = __this->___MY_70;
		RuntimeObject* L_118 = L_117;
		if (L_118)
		{
			G_B12_0 = L_118;
			G_B12_1 = __this;
			goto IL_04cd;
		}
		G_B11_0 = L_118;
		G_B11_1 = __this;
	}
	{
		G_B13_0 = ((RuntimeObject*)(NULL));
		G_B13_1 = G_B11_1;
		goto IL_04d9;
	}

IL_04cd:
	{
		NullCheck(G_B12_0);
		RuntimeObject* L_119;
		L_119 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B12_0, ((int32_t)164), (bool)1, (bool)1);
		G_B13_0 = L_119;
		G_B13_1 = G_B12_1;
	}

IL_04d9:
	{
		NullCheck(G_B13_1);
		G_B13_1->___temp_71 = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___temp_71), (void*)G_B13_0);
		RuntimeObject* L_120;
		L_120 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		RuntimeObject* L_121 = __this->___temp_71;
		NullCheck(L_120);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_120, ((int32_t)1354526442), L_121);
		RuntimeObject* L_122;
		L_122 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_122);
		NullCheck(L_123);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)-870593893), (bool)1, (bool)1);
		__this->___NURS5TEX_73 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS5TEX_73), (void*)L_124);
		RuntimeObject* L_125;
		L_125 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_75 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_75), (void*)L_125);
		RuntimeObject* L_126 = __this->___MY_75;
		RuntimeObject* L_127 = __this->___NURS5TEX_73;
		NullCheck(L_126);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_126, ((int32_t)164), L_127);
		RuntimeObject* L_128;
		L_128 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_78 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_78), (void*)L_128);
		RuntimeObject* L_129 = __this->___MY_78;
		NullCheck(L_129);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_129, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_130;
		L_130 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_81 = L_130;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_81), (void*)L_130);
		RuntimeObject* L_131 = __this->___MY_81;
		NullCheck(L_131);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_131, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_132;
		L_132 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_84 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_84), (void*)L_132);
		RuntimeObject* L_133 = __this->___MY_84;
		NullCheck(L_133);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)209), (RuntimeObject*)NULL);
		float L_134;
		L_134 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_134;
		float L_135 = __this->___startTime1;
		float L_136;
		L_136 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_135, L_136));
		__this->____cursor = 1;
		goto IL_05be;
	}

IL_05b1:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_137 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		NURSHIT_set_Current_m7FC20067B951BACDEA1BBBD683A20001CD59499F_inline(__this, L_137, NULL);
		return (bool)1;
	}

IL_05be:
	{
		float L_138;
		L_138 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_139 = __this->___endTime1;
		if ((((float)L_138) < ((float)L_139)))
		{
			goto IL_05b1;
		}
	}
	{
		NURSHIT_set_Current_m7FC20067B951BACDEA1BBBD683A20001CD59499F_inline(__this, NULL, NULL);
		RuntimeObject* L_140;
		L_140 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_88 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_88), (void*)L_140);
		RuntimeObject* L_141 = __this->___MY_88;
		NullCheck(L_141);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_142;
		L_142 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_91 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_91), (void*)L_142);
		RuntimeObject* L_143 = __this->___MY_91;
		NullCheck(L_143);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_143, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_144;
		L_144 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NullCheck(L_144);
		RuntimeObject* L_145;
		L_145 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_144);
		NullCheck(L_145);
		RuntimeObject* L_146;
		L_146 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_145, ((int32_t)1144994394), (bool)1, (bool)1);
		__this->___NURSHIT_92 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURSHIT_92), (void*)L_146);
		RuntimeObject* L_147;
		L_147 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_94 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_94), (void*)L_147);
		RuntimeObject* L_148 = __this->___MY_94;
		RuntimeObject* L_149 = __this->___NURSHIT_92;
		NullCheck(L_148);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_148, ((int32_t)209), L_149);
		RuntimeObject* L_150;
		L_150 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NullCheck(L_150);
		RuntimeObject* L_151;
		L_151 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_150, ((int32_t)1354526442), (bool)0);
		__this->___NURSE_TEX_95 = L_151;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURSE_TEX_95), (void*)L_151);
		RuntimeObject* L_152;
		L_152 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_97 = L_152;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_97), (void*)L_152);
		RuntimeObject* L_153 = __this->___MY_97;
		RuntimeObject* L_154 = __this->___NURSE_TEX_95;
		NullCheck(L_153);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_153, ((int32_t)164), L_154);
		NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* L_155 = (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C*)il2cpp_codegen_object_new(NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C_il2cpp_TypeInfo_var);
		NURSHIDE__ctor_mF67BE577F90D25EE15921EE8C979F3A67BB1CD79(L_155, NULL);
		V_1 = L_155;
		NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* L_156 = V_1;
		NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* L_157 = L_156;
		RuntimeObject* L_158;
		L_158 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		NullCheck(L_157);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_157, L_158);
		NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* L_159 = L_157;
		RuntimeObject* L_160;
		L_160 = NURSHIT_get_THERE_mF9182ED2A7EC327E0C677619D78F3593E2141D2C_inline(__this, NULL);
		NullCheck(L_159);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_159, L_160);
		RuntimeObject* L_161;
		L_161 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NullCheck(L_159);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_159, L_161);
		RuntimeObject* L_162;
		L_162 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* L_163 = V_1;
		NullCheck(L_162);
		RuntimeObject* L_164;
		L_164 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_162, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_163);
		return (bool)0;
	}

IL_06be:
	{
		RuntimeObject* L_165;
		L_165 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_100 = L_165;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_100), (void*)L_165);
		RuntimeObject* L_166 = __this->___MY_100;
		NullCheck(L_166);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_166, ((int32_t)173), (10.0f));
		NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* L_167 = (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B*)il2cpp_codegen_object_new(NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B_il2cpp_TypeInfo_var);
		NURSDIE__ctor_mAF40C77D4A2307C6134F40701DE611D4ADD42E56(L_167, NULL);
		V_2 = L_167;
		NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* L_168 = V_2;
		NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* L_169 = L_168;
		RuntimeObject* L_170;
		L_170 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		NullCheck(L_169);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_169, L_170);
		NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* L_171 = L_169;
		RuntimeObject* L_172;
		L_172 = NURSHIT_get_THERE_mF9182ED2A7EC327E0C677619D78F3593E2141D2C_inline(__this, NULL);
		NullCheck(L_171);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_171, L_172);
		RuntimeObject* L_173;
		L_173 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NullCheck(L_171);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_171, L_173);
		RuntimeObject* L_174;
		L_174 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* L_175 = V_2;
		NullCheck(L_174);
		RuntimeObject* L_176;
		L_176 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_174, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_175);
		return (bool)0;
	}

IL_0719:
	{
		RuntimeObject* L_177;
		L_177 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_103 = L_177;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_103), (void*)L_177);
		RuntimeObject* L_178 = __this->___MY_103;
		NullCheck(L_178);
		float L_179;
		L_179 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_178, ((int32_t)176), (bool)1);
		__this->___temp_104 = L_179;
		float L_180 = __this->___temp_104;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_181;
		L_181 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_180, (1.0f), NULL);
		if (!L_181)
		{
			goto IL_07ae;
		}
	}
	{
		float L_182;
		L_182 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_183;
		L_183 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_182, (0.970000029f), NULL);
		if (!L_183)
		{
			goto IL_07ae;
		}
	}
	{
		RuntimeObject* L_184;
		L_184 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NullCheck(L_184);
		RuntimeObject* L_185;
		L_185 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_184);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_185, ((int32_t)1328004124), (bool)1, (bool)1);
		__this->___NURS02SND_107 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS02SND_107), (void*)L_186);
		RuntimeObject* L_187;
		L_187 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		__this->___MY_109 = L_187;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_109), (void*)L_187);
		RuntimeObject* L_188;
		L_188 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		RuntimeObject* L_189 = __this->___NURS02SND_107;
		RuntimeObject* L_190 = __this->___MY_109;
		NullCheck(L_188);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_188, L_189, (0.300000012f), L_190, (100.0f), (100.0f));
	}

IL_07ae:
	{
		NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* L_191 = (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924*)il2cpp_codegen_object_new(NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924_il2cpp_TypeInfo_var);
		NURSTURN__ctor_mFE0554B1C8D3CB67EADB030D23EF0E108425C422(L_191, NULL);
		V_3 = L_191;
		NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* L_192 = V_3;
		NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* L_193 = L_192;
		RuntimeObject* L_194;
		L_194 = NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline(__this, NULL);
		NullCheck(L_193);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_193, L_194);
		NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* L_195 = L_193;
		RuntimeObject* L_196;
		L_196 = NURSHIT_get_THERE_mF9182ED2A7EC327E0C677619D78F3593E2141D2C_inline(__this, NULL);
		NullCheck(L_195);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_195, L_196);
		RuntimeObject* L_197;
		L_197 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NullCheck(L_195);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_195, L_197);
		RuntimeObject* L_198;
		L_198 = NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline(__this, NULL);
		NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* L_199 = V_3;
		NullCheck(L_198);
		RuntimeObject* L_200;
		L_200 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_198, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_199);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSCYCLE_set_MY_mBA64EAA1F96DDC22123DBDB0FCBC43727FB37625 (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSCYCLE_get_THERE_mF6D340E57401F9506300B264B74C5B361FFB34F2 (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSCYCLE_set_THERE_m0E841704E6281F3AA4462E0E2069687E5C026FF9 (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23 (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSCYCLE_set__world_m92CF7513B8D9E1DE7EB7257F21DA6D7BE94D7936 (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSCYCLE_get_Current_m66880A03F8AAFD2675D1214C48AB7D4F157D6D0D (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSCYCLE_set_Current_mD039EF2D23B8C0F21DB39728CF7C9B03FE3FD60A (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSCYCLE_Reset_m1A73FC53566C337C65D520BFFE99BA32A7D6ED8A (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSCYCLE__ctor_m2F0895CE0B912983B50266524C3D7048EE213E4A (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSCYCLE__ctor_m286509C99BDB97B33244A93FED93A15C24169530 (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		NURSCYCLE_set_MY_mBA64EAA1F96DDC22123DBDB0FCBC43727FB37625_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		NURSCYCLE_set_THERE_m0E841704E6281F3AA4462E0E2069687E5C026FF9_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		NURSCYCLE_set__world_m92CF7513B8D9E1DE7EB7257F21DA6D7BE94D7936_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NURSCYCLE_MoveNext_m1C3E3A9F9195792281611331B9BED7B53CFD3315 (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_0 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_1 = NULL;
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_2 = NULL;
	PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* V_3 = NULL;
	NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* V_4 = NULL;
	NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* V_5 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
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
			goto IL_0125;
		}
	}
	{
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_6 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_6, NULL);
		V_0 = L_6;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_7 = V_0;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_8 = L_7;
		RuntimeObject* L_9;
		L_9 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_8, L_9);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_10 = L_8;
		RuntimeObject* L_11;
		L_11 = NURSCYCLE_get_THERE_mF6D340E57401F9506300B264B74C5B361FFB34F2_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12;
		L_12 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_12);
		RuntimeObject* L_13;
		L_13 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_14 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_14);
		RuntimeObject* L_16;
		L_16 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		__this->___MY_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_16);
		RuntimeObject* L_17;
		L_17 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		__this->___MY_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_7), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_7;
		NullCheck(L_18);
		float L_19;
		L_19 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)194), (bool)1);
		__this->___temp_8 = L_19;
		RuntimeObject* L_20;
		L_20 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
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
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)194), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_24, L_25)), (0.5f))));
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_26 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_26, NULL);
		V_1 = L_26;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_27 = V_1;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_28 = L_27;
		RuntimeObject* L_29;
		L_29 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		NullCheck(L_28);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_28, L_29);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_30 = L_28;
		RuntimeObject* L_31;
		L_31 = NURSCYCLE_get_THERE_mF6D340E57401F9506300B264B74C5B361FFB34F2_inline(__this, NULL);
		NullCheck(L_30);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_30, L_31);
		RuntimeObject* L_32;
		L_32 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		NullCheck(L_30);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_30, L_32);
		RuntimeObject* L_33;
		L_33 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_34 = V_1;
		NullCheck(L_33);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_34);
		return (bool)0;
	}

IL_0125:
	{
		RuntimeObject* L_36;
		L_36 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		__this->___MY_18 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_18;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)202), (bool)1);
		__this->___temp_19 = L_38;
		float L_39 = __this->___temp_19;
		bool L_40;
		L_40 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_39, (4.0f), NULL);
		if (L_40)
		{
			goto IL_0241;
		}
	}
	{
		RuntimeObject* L_41;
		L_41 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		__this->___MY_22 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_41);
		RuntimeObject* L_42 = __this->___MY_22;
		NullCheck(L_42);
		float L_43;
		L_43 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)168), (bool)1);
		__this->___temp_23 = L_43;
		float L_44 = __this->___temp_23;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_44, (0.0f), NULL);
		if (L_45)
		{
			goto IL_0241;
		}
	}
	{
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_46 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_46, NULL);
		V_2 = L_46;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_47 = V_2;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_48 = L_47;
		RuntimeObject* L_49;
		L_49 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		NullCheck(L_48);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_48, L_49);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_50 = L_48;
		RuntimeObject* L_51;
		L_51 = NURSCYCLE_get_THERE_mF6D340E57401F9506300B264B74C5B361FFB34F2_inline(__this, NULL);
		NullCheck(L_50);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_50, L_51);
		RuntimeObject* L_52;
		L_52 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		NullCheck(L_50);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_50, L_52);
		RuntimeObject* L_53;
		L_53 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_54 = V_2;
		NullCheck(L_53);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_54);
		RuntimeObject* L_56;
		L_56 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		__this->___MY_25 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_56);
		RuntimeObject* L_57;
		L_57 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		__this->___MY_27 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_57);
		RuntimeObject* L_58 = __this->___MY_27;
		NullCheck(L_58);
		float L_59;
		L_59 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)194), (bool)1);
		__this->___temp_28 = L_59;
		RuntimeObject* L_60;
		L_60 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		__this->___MY_30 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_60);
		RuntimeObject* L_61 = __this->___MY_30;
		NullCheck(L_61);
		float L_62;
		L_62 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)194), (bool)1);
		__this->___temp_31 = L_62;
		RuntimeObject* L_63 = __this->___MY_25;
		float L_64 = __this->___temp_31;
		float L_65;
		L_65 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_63);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_63, ((int32_t)194), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_64, L_65)), (0.5f))));
	}

IL_0241:
	{
		RuntimeObject* L_66;
		L_66 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_37 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_37), (void*)L_67);
		RuntimeObject* L_68 = __this->___GUN_ON_37;
		NullCheck(L_68);
		float L_69;
		L_69 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)231), (bool)1);
		__this->___GUN_ON_37_val = L_69;
		float L_70 = __this->___GUN_ON_37_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_70, (0.0f), NULL);
		if (!L_71)
		{
			goto IL_033e;
		}
	}
	{
		RuntimeObject* L_72;
		L_72 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_72, 5, ((int32_t)-922693617));
		__this->___SHOT_SOUND_ON_39 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOT_SOUND_ON_39), (void*)L_73);
		RuntimeObject* L_74 = __this->___SHOT_SOUND_ON_39;
		NullCheck(L_74);
		float L_75;
		L_75 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_74, ((int32_t)231), (bool)1);
		__this->___SHOT_SOUND_ON_39_val = L_75;
		float L_76 = __this->___SHOT_SOUND_ON_39_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_76, (0.0f), NULL);
		if (!L_77)
		{
			goto IL_033e;
		}
	}
	{
		RuntimeObject* L_78;
		L_78 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		NullCheck(L_78);
		RuntimeObject* L_79;
		L_79 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_78, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_41 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_41), (void*)L_79);
		RuntimeObject* L_80 = __this->___EXPLOSION_ON_41;
		NullCheck(L_80);
		float L_81;
		L_81 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_80, ((int32_t)231), (bool)1);
		__this->___EXPLOSION_ON_41_val = L_81;
		float L_82 = __this->___EXPLOSION_ON_41_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_83;
		L_83 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_82, (0.0f), NULL);
		if (!L_83)
		{
			goto IL_033e;
		}
	}
	{
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_84 = (PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176*)il2cpp_codegen_object_new(PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176_il2cpp_TypeInfo_var);
		PROBE__ctor_mFD2393A54F37117080787F1F4BECB042D0600FC7(L_84, NULL);
		V_3 = L_84;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_85 = V_3;
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_86 = L_85;
		RuntimeObject* L_87;
		L_87 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		NullCheck(L_86);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_86, L_87);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_88 = L_86;
		RuntimeObject* L_89;
		L_89 = NURSCYCLE_get_THERE_mF6D340E57401F9506300B264B74C5B361FFB34F2_inline(__this, NULL);
		NullCheck(L_88);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_88, L_89);
		RuntimeObject* L_90;
		L_90 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		NullCheck(L_88);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_88, L_90);
		RuntimeObject* L_91;
		L_91 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_92 = V_3;
		NullCheck(L_91);
		RuntimeObject* L_93;
		L_93 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_91, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_92);
		return (bool)0;
	}

IL_033e:
	{
		NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* L_94 = (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854*)il2cpp_codegen_object_new(NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854_il2cpp_TypeInfo_var);
		NURSSCREAM__ctor_mDD5E9AAF395DA3750DC86F2DD1A22DB6A6AA0E24(L_94, NULL);
		V_4 = L_94;
		NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* L_95 = V_4;
		NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* L_96 = L_95;
		RuntimeObject* L_97;
		L_97 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		NullCheck(L_96);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_96, L_97);
		NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* L_98 = L_96;
		RuntimeObject* L_99;
		L_99 = NURSCYCLE_get_THERE_mF6D340E57401F9506300B264B74C5B361FFB34F2_inline(__this, NULL);
		NullCheck(L_98);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_98, L_99);
		RuntimeObject* L_100;
		L_100 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		NullCheck(L_98);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_98, L_100);
		RuntimeObject* L_101;
		L_101 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* L_102 = V_4;
		NullCheck(L_101);
		RuntimeObject* L_103;
		L_103 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_101, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_102);
		NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* L_104 = (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C*)il2cpp_codegen_object_new(NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C_il2cpp_TypeInfo_var);
		NURSHIDE__ctor_mF67BE577F90D25EE15921EE8C979F3A67BB1CD79(L_104, NULL);
		V_5 = L_104;
		NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* L_105 = V_5;
		NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* L_106 = L_105;
		RuntimeObject* L_107;
		L_107 = NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline(__this, NULL);
		NullCheck(L_106);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_106, L_107);
		NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* L_108 = L_106;
		RuntimeObject* L_109;
		L_109 = NURSCYCLE_get_THERE_mF6D340E57401F9506300B264B74C5B361FFB34F2_inline(__this, NULL);
		NullCheck(L_108);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_108, L_109);
		RuntimeObject* L_110;
		L_110 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		NullCheck(L_108);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_108, L_110);
		RuntimeObject* L_111;
		L_111 = NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline(__this, NULL);
		NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* L_112 = V_5;
		NullCheck(L_111);
		RuntimeObject* L_113;
		L_113 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_111, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_112);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSSCREAM_get_MY_m42088C4A5AF45F601BC256052E49721608287064 (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSSCREAM_set_MY_mD02D9AE54A9A3F68EDD068C564B9DF6FC62BAA77 (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSSCREAM_get_THERE_m1C6E469B2D323C2D0CA7D0464641E252255BA5EE (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSSCREAM_set_THERE_m23E6F3870D3F622C704F391A566523CDABFE6FF0 (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSSCREAM_get__world_mC2EB25D45DD7C522A91AE6C5CAEABDBC1782BBC2 (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSSCREAM_set__world_m996827D4A2B67F782CAEFE3AD9CB75BDF75098AD (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSSCREAM_get_Current_m06DE09D18C8F3794213083ED86DA4E3223A24A29 (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSSCREAM_set_Current_mBD6FD30FB9AA1473188D604D7FC926FEA9746FE6 (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSSCREAM_Reset_mF08502A0E6B31256E133B68D638E415F6E172883 (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSSCREAM__ctor_mDD5E9AAF395DA3750DC86F2DD1A22DB6A6AA0E24 (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSSCREAM__ctor_m4F52B6E5E4CFB8C2E14FBBECDF2338044FA34C2D (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		NURSSCREAM_set_MY_mD02D9AE54A9A3F68EDD068C564B9DF6FC62BAA77_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		NURSSCREAM_set_THERE_m23E6F3870D3F622C704F391A566523CDABFE6FF0_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		NURSSCREAM_set__world_m996827D4A2B67F782CAEFE3AD9CB75BDF75098AD_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NURSSCREAM_MoveNext_m15F60E421CB4D8ABAB233FA53315E962AEBD939B (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) 
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
		L_2 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_1, (0.400000006f), NULL);
		if (L_2)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = NURSSCREAM_get__world_mC2EB25D45DD7C522A91AE6C5CAEABDBC1782BBC2_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)1328040061), (bool)1, (bool)1);
		__this->___NURS03SND_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS03SND_2), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = NURSSCREAM_get_MY_m42088C4A5AF45F601BC256052E49721608287064_inline(__this, NULL);
		__this->___MY_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_6);
		RuntimeObject* L_7;
		L_7 = NURSSCREAM_get__world_mC2EB25D45DD7C522A91AE6C5CAEABDBC1782BBC2_inline(__this, NULL);
		RuntimeObject* L_8 = __this->___NURS03SND_2;
		RuntimeObject* L_9 = __this->___MY_4;
		NullCheck(L_7);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, L_8, (0.300000012f), L_9, (100.0f), (100.0f));
		return (bool)0;
	}

IL_0069:
	{
		RuntimeObject* L_10;
		L_10 = NURSSCREAM_get__world_mC2EB25D45DD7C522A91AE6C5CAEABDBC1782BBC2_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)1328111935), (bool)1, (bool)1);
		__this->___NURS05SND_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS05SND_5), (void*)L_12);
		RuntimeObject* L_13;
		L_13 = NURSSCREAM_get_MY_m42088C4A5AF45F601BC256052E49721608287064_inline(__this, NULL);
		__this->___MY_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_7), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = NURSSCREAM_get__world_mC2EB25D45DD7C522A91AE6C5CAEABDBC1782BBC2_inline(__this, NULL);
		RuntimeObject* L_15 = __this->___NURS05SND_5;
		RuntimeObject* L_16 = __this->___MY_7;
		NullCheck(L_14);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, L_15, (0.300000012f), L_16, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSTALK_get_MY_mCA768E365188FFA0DC655E0ED554ED380471518C (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTALK_set_MY_m27DF4AD0A33E0D909A0B80043A626DDAA1CF1F3D (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSTALK_get_THERE_mA4AFB6B1AD17C834A6E0A0CCA469BA42A759F9F3 (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTALK_set_THERE_mC11C8BFF054F5B9F2A7B2E00598F7E6D7D385CA2 (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSTALK_get__world_m7A8CB7AB9EEF29FE0E152BD9FE12B58B73BE2340 (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTALK_set__world_m3F0F874DC6AC24A5B3C1AB4A6FC094579ED62D01 (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NURSTALK_get_Current_m6474CF595DF68B07BD69E9E20226E81C7DE421D8 (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTALK_set_Current_mB7D22ECF0B20CEDF4DD12D4E0A7E3C7D723122C8 (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTALK_Reset_m3C444FCA79153F97AF36FD31F703D5FE9F86A45C (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTALK__ctor_m47F34FF8C7B08C4519494D5E8C5A7AA3525A972B (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NURSTALK__ctor_m16C01429EB5CAA2FCBAC718206E11D8D613656E9 (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		NURSTALK_set_MY_m27DF4AD0A33E0D909A0B80043A626DDAA1CF1F3D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		NURSTALK_set_THERE_mC11C8BFF054F5B9F2A7B2E00598F7E6D7D385CA2_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		NURSTALK_set__world_m3F0F874DC6AC24A5B3C1AB4A6FC094579ED62D01_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NURSTALK_MoveNext_m2486897C1F9679263425E4A9C17D98B8E9059E24 (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, const RuntimeMethod* method) 
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
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_02a3;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = NURSTALK_get_MY_mCA768E365188FFA0DC655E0ED554ED380471518C_inline(__this, NULL);
		__this->___MY_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_2;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)205), (bool)1);
		__this->___temp_3 = L_5;
		float L_6 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_6, (1.0f), NULL);
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_004c:
	{
		RuntimeObject* L_8;
		L_8 = NURSTALK_get_MY_mCA768E365188FFA0DC655E0ED554ED380471518C_inline(__this, NULL);
		__this->___MY_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_6;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)176), (bool)1);
		__this->___temp_7 = L_10;
		float L_11 = __this->___temp_7;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_11, (4.0f), NULL);
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		return (bool)0;
	}

IL_0083:
	{
		RuntimeObject* L_13;
		L_13 = NURSTALK_get__world_m7A8CB7AB9EEF29FE0E152BD9FE12B58B73BE2340_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)1134038113));
		__this->___TALKNURS_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TALKNURS_9), (void*)L_14);
		RuntimeObject* L_15 = __this->___TALKNURS_9;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)231), (bool)1);
		__this->___TALKNURS_9_val = L_16;
		float L_17 = __this->___TALKNURS_9_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_17, (0.0f), NULL);
		if (L_18)
		{
			goto IL_00c5;
		}
	}
	{
		return (bool)0;
	}

IL_00c5:
	{
		RuntimeObject* L_19;
		L_19 = NURSTALK_get__world_m7A8CB7AB9EEF29FE0E152BD9FE12B58B73BE2340_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)1134038113));
		__this->___TALKNURS_11 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TALKNURS_11), (void*)L_20);
		RuntimeObject* L_21 = __this->___TALKNURS_11;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), (1.0f));
		RuntimeObject* L_22;
		L_22 = NURSTALK_get__world_m7A8CB7AB9EEF29FE0E152BD9FE12B58B73BE2340_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_12 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_12), (void*)L_24);
		RuntimeObject* L_25;
		L_25 = NURSTALK_get_MY_mCA768E365188FFA0DC655E0ED554ED380471518C_inline(__this, NULL);
		__this->___MY_14 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_14;
		RuntimeObject* L_27 = __this->___FOLLOW_12;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)199), L_27);
		RuntimeObject* L_28;
		L_28 = NURSTALK_get_MY_mCA768E365188FFA0DC655E0ED554ED380471518C_inline(__this, NULL);
		__this->___MY_17 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_17;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)168), (0.0500000007f));
		float L_30;
		L_30 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_30;
		float L_31 = __this->___startTime1;
		float L_32;
		L_32 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_31, L_32));
		__this->____cursor = 1;
		goto IL_0185;
	}

IL_0178:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_33 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		NURSTALK_set_Current_mB7D22ECF0B20CEDF4DD12D4E0A7E3C7D723122C8_inline(__this, L_33, NULL);
		return (bool)1;
	}

IL_0185:
	{
		float L_34;
		L_34 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_35 = __this->___endTime1;
		if ((((float)L_34) < ((float)L_35)))
		{
			goto IL_0178;
		}
	}
	{
		NURSTALK_set_Current_mB7D22ECF0B20CEDF4DD12D4E0A7E3C7D723122C8_inline(__this, NULL, NULL);
		RuntimeObject* L_36;
		L_36 = NURSTALK_get_MY_mCA768E365188FFA0DC655E0ED554ED380471518C_inline(__this, NULL);
		__this->___MY_21 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_21;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)168), (0.0f));
		float L_38;
		L_38 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_39;
		L_39 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_38, (0.300000012f), NULL);
		if (L_39)
		{
			goto IL_021c;
		}
	}
	{
		RuntimeObject* L_40;
		L_40 = NURSTALK_get__world_m7A8CB7AB9EEF29FE0E152BD9FE12B58B73BE2340_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)1327968187), (bool)1, (bool)1);
		__this->___NURS01SND_24 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS01SND_24), (void*)L_42);
		RuntimeObject* L_43;
		L_43 = NURSTALK_get_MY_mCA768E365188FFA0DC655E0ED554ED380471518C_inline(__this, NULL);
		__this->___MY_26 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_43);
		RuntimeObject* L_44;
		L_44 = NURSTALK_get__world_m7A8CB7AB9EEF29FE0E152BD9FE12B58B73BE2340_inline(__this, NULL);
		RuntimeObject* L_45 = __this->___NURS01SND_24;
		RuntimeObject* L_46 = __this->___MY_26;
		NullCheck(L_44);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, L_45, (0.25f), L_46, (100.0f), (100.0f));
		goto IL_026b;
	}

IL_021c:
	{
		RuntimeObject* L_47;
		L_47 = NURSTALK_get__world_m7A8CB7AB9EEF29FE0E152BD9FE12B58B73BE2340_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_47);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)1328004124), (bool)1, (bool)1);
		__this->___NURS02SND_27 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NURS02SND_27), (void*)L_49);
		RuntimeObject* L_50;
		L_50 = NURSTALK_get_MY_mCA768E365188FFA0DC655E0ED554ED380471518C_inline(__this, NULL);
		__this->___MY_29 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_50);
		RuntimeObject* L_51;
		L_51 = NURSTALK_get__world_m7A8CB7AB9EEF29FE0E152BD9FE12B58B73BE2340_inline(__this, NULL);
		RuntimeObject* L_52 = __this->___NURS02SND_27;
		RuntimeObject* L_53 = __this->___MY_29;
		NullCheck(L_51);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_51, L_52, (0.25f), L_53, (100.0f), (100.0f));
	}

IL_026b:
	{
		float L_54;
		L_54 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_54;
		float L_55 = __this->___startTime2;
		float L_56;
		L_56 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)128), NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_55, L_56));
		__this->____cursor = 2;
		goto IL_02a3;
	}

IL_0296:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_57 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		NURSTALK_set_Current_mB7D22ECF0B20CEDF4DD12D4E0A7E3C7D723122C8_inline(__this, L_57, NULL);
		return (bool)1;
	}

IL_02a3:
	{
		float L_58;
		L_58 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_59 = __this->___endTime2;
		if ((((float)L_58) < ((float)L_59)))
		{
			goto IL_0296;
		}
	}
	{
		NURSTALK_set_Current_mB7D22ECF0B20CEDF4DD12D4E0A7E3C7D723122C8_inline(__this, NULL, NULL);
		RuntimeObject* L_60;
		L_60 = NURSTALK_get__world_m7A8CB7AB9EEF29FE0E152BD9FE12B58B73BE2340_inline(__this, NULL);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_60, 5, ((int32_t)1134038113));
		__this->___TALKNURS_32 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TALKNURS_32), (void*)L_61);
		RuntimeObject* L_62 = __this->___TALKNURS_32;
		NullCheck(L_62);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTTURN_get_MY_m0517B539A078FC8FBC8CA07E55D7D927ED03057F (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTTURN_set_MY_m5EE4F9E280350B8DF82D6D2B8FFD355F24437A44 (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTTURN_get_THERE_m617A6446C47D399216E317001D6B5C59F0035DCF (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTTURN_set_THERE_m1A3A8E2D933C53795CE0242750B27B9EADBB2F63 (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTTURN_set__world_m2BF703BCF6ED6A9ED55F2735B1BFB48B68BF0601 (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTTURN_get_Current_m4BF16F3833FD23A452D5B869F9608A90291B9325 (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTTURN_set_Current_mF117104CA66EE191E98627E77737DF3D6A3B2C13 (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTTURN_Reset_m47F9F3FB528F6C3E23FCA96444C473544C4272EB (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTTURN__ctor_mCF55B5C1079B55995558CBDA7D95D03DB9078F45 (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTTURN__ctor_mDB458BCAFB08A4C183BE65B07F8ACCD161C39668 (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DOCTTURN_set_MY_m5EE4F9E280350B8DF82D6D2B8FFD355F24437A44_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DOCTTURN_set_THERE_m1A3A8E2D933C53795CE0242750B27B9EADBB2F63_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DOCTTURN_set__world_m2BF703BCF6ED6A9ED55F2735B1BFB48B68BF0601_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DOCTTURN_MoveNext_mA95E34C0F5B327F97CB734DD55B8B06BE2BDBE57 (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* V_0 = NULL;
	TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)33817649));
		__this->___WAITTIME_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAITTIME_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline(__this, NULL);
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
		L_10 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_9, (0.949999988f), NULL);
		if (!L_10)
		{
			goto IL_014b;
		}
	}
	{
		RuntimeObject* L_11;
		L_11 = DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, 5, ((int32_t)16208702));
		__this->___RIGHTTURNDOCT_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNDOCT_9), (void*)L_12);
		RuntimeObject* L_13;
		L_13 = DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)16208702));
		__this->___RIGHTTURNDOCT_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNDOCT_10), (void*)L_14);
		RuntimeObject* L_15 = __this->___RIGHTTURNDOCT_10;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNDOCT_10_val = L_16;
		RuntimeObject* L_17;
		L_17 = DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_17, 5, ((int32_t)16208702));
		__this->___RIGHTTURNDOCT_12 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNDOCT_12), (void*)L_18);
		RuntimeObject* L_19 = __this->___RIGHTTURNDOCT_12;
		NullCheck(L_19);
		float L_20;
		L_20 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNDOCT_12_val = L_20;
		RuntimeObject* L_21;
		L_21 = DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)16208702));
		__this->___RIGHTTURNDOCT_18 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNDOCT_18), (void*)L_22);
		RuntimeObject* L_23 = __this->___RIGHTTURNDOCT_18;
		NullCheck(L_23);
		float L_24;
		L_24 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNDOCT_18_val = L_24;
		RuntimeObject* L_25 = __this->___RIGHTTURNDOCT_9;
		float L_26 = __this->___RIGHTTURNDOCT_12_val;
		float L_27 = __this->___RIGHTTURNDOCT_18_val;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)231), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, (1.0f))), ((float)il2cpp_codegen_subtract(L_27, (1.0f))))));
	}

IL_014b:
	{
		RuntimeObject* L_28;
		L_28 = DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, 5, ((int32_t)16208702));
		__this->___RIGHTTURNDOCT_22 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNDOCT_22), (void*)L_29);
		RuntimeObject* L_30 = __this->___RIGHTTURNDOCT_22;
		NullCheck(L_30);
		float L_31;
		L_31 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNDOCT_22_val = L_31;
		float L_32 = __this->___RIGHTTURNDOCT_22_val;
		RuntimeObject* L_33 = __this->___RIGHTTURNDOCT_22;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)233), (bool)1);
		if ((!(((float)L_32) > ((float)L_34))))
		{
			goto IL_01cc;
		}
	}
	{
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_35 = (TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902*)il2cpp_codegen_object_new(TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902_il2cpp_TypeInfo_var);
		TURNRIGHT__ctor_mAD82B12963F20823A2CFE3E007E94496A56C8353(L_35, NULL);
		V_0 = L_35;
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_36 = V_0;
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_37 = L_36;
		RuntimeObject* L_38;
		L_38 = DOCTTURN_get_MY_m0517B539A078FC8FBC8CA07E55D7D927ED03057F_inline(__this, NULL);
		NullCheck(L_37);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_37, L_38);
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_39 = L_37;
		RuntimeObject* L_40;
		L_40 = DOCTTURN_get_THERE_m617A6446C47D399216E317001D6B5C59F0035DCF_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		RuntimeObject* L_41;
		L_41 = DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_41);
		RuntimeObject* L_42;
		L_42 = DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline(__this, NULL);
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_43 = V_0;
		NullCheck(L_42);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_42, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_43);
		return (bool)0;
	}

IL_01cc:
	{
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_45 = (TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518*)il2cpp_codegen_object_new(TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518_il2cpp_TypeInfo_var);
		TURNLEFT__ctor_m361003A6CB36C1059716F979D3822771D39CD395(L_45, NULL);
		V_1 = L_45;
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_46 = V_1;
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_47 = L_46;
		RuntimeObject* L_48;
		L_48 = DOCTTURN_get_MY_m0517B539A078FC8FBC8CA07E55D7D927ED03057F_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_49 = L_47;
		RuntimeObject* L_50;
		L_50 = DOCTTURN_get_THERE_m617A6446C47D399216E317001D6B5C59F0035DCF_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		RuntimeObject* L_51;
		L_51 = DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_51);
		RuntimeObject* L_52;
		L_52 = DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline(__this, NULL);
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_53 = V_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8 (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWAIT_set_MY_m03ADC4B1EFF062A9388CA6C67CB1C15021D6C3CF (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTWAIT_get_THERE_m5F14F8506C3E094D777DCAFC6108E6FE4EBB5B39 (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWAIT_set_THERE_mDDAFC2AEE40E9E1DAF4F4AA22F692A0FA2ED67D7 (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTWAIT_get__world_m8F362B6F7F9505F8B528820477A596E7459F7B53 (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWAIT_set__world_m0C128E6B7639492AE17711446F9CEAF4C26F617D (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTWAIT_get_Current_mF882209122A3C16B63178D8B3134B5C8CA095510 (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWAIT_set_Current_mC70B6D654CBECF371553AC942EA0B44309950CF9 (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWAIT_Reset_m3B66608FEF8B70675E62710CAC6147EA7505FD78 (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWAIT__ctor_mF1C2BF67D8549183FD91B710A5C392FFFE83F5E8 (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWAIT__ctor_mAA7388200CEC97BBE9C2EF352FA9A5B9275A1550 (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DOCTWAIT_set_MY_m03ADC4B1EFF062A9388CA6C67CB1C15021D6C3CF_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DOCTWAIT_set_THERE_mDDAFC2AEE40E9E1DAF4F4AA22F692A0FA2ED67D7_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DOCTWAIT_set__world_m0C128E6B7639492AE17711446F9CEAF4C26F617D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DOCTWAIT_MoveNext_m491874FE1ECA684804F317D5ECDA2BC7BCEC7CDB (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, const RuntimeMethod* method) 
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
		L_1 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)207), (0.0f));
		RuntimeObject* L_3;
		L_3 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = DOCTWAIT_get__world_m8F362B6F7F9505F8B528820477A596E7459F7B53_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)862651356), (bool)1, (bool)1);
		__this->___DOCTHIT_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DOCTHIT_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___DOCTHIT_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)209), L_12);
		RuntimeObject* L_13;
		L_13 = DOCTWAIT_get__world_m8F362B6F7F9505F8B528820477A596E7459F7B53_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1596885981), (bool)1, (bool)1);
		__this->___DOCTTALK_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DOCTTALK_12), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_14;
		RuntimeObject* L_18 = __this->___DOCTTALK_12;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)192), L_18);
		RuntimeObject* L_19;
		L_19 = DOCTWAIT_get__world_m8F362B6F7F9505F8B528820477A596E7459F7B53_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)-1176969689), (bool)1, (bool)1);
		__this->___DOCTCYCLE_15 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DOCTCYCLE_15), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_17 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_17;
		RuntimeObject* L_24 = __this->___DOCTCYCLE_15;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)190), L_24);
		RuntimeObject* L_25;
		L_25 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_20;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)213), (0.0f));
		RuntimeObject* L_27;
		L_27 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_23 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_23;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_29;
		L_29 = DOCTWAIT_get__world_m8F362B6F7F9505F8B528820477A596E7459F7B53_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)-1598159240), (bool)1, (bool)1);
		__this->___DOCT0TEX_24 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DOCT0TEX_24), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_26 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_26;
		RuntimeObject* L_34 = __this->___DOCT0TEX_24;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)164), L_34);
		RuntimeObject* L_35;
		L_35 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_29 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_29;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)168), (0.0f));
		RuntimeObject* L_37;
		L_37 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_32 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_37);
		RuntimeObject* L_38 = __this->___MY_32;
		NullCheck(L_38);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)199), (RuntimeObject*)NULL);
		RuntimeObject* L_39;
		L_39 = DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline(__this, NULL);
		__this->___MY_35 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_35), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_35;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)176), (1.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887 (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWANDER_set_MY_m30FB91B38D8536325F21FC00C499CC1643DB58A2 (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTWANDER_get_THERE_m65DDE87D46101419E6F9A47FEEE954ED5EF76B85 (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWANDER_set_THERE_m2D7F068894EF6CD2AE3DD278F9819D746931D766 (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTWANDER_get__world_mB35B3A8532DA2E71EFDAB22F19D3AAB24BA7E848 (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWANDER_set__world_mF6B58775AD07C30A51AFB0135D864C4156E90321 (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOCTWANDER_get_Current_mBB968E2CB688F4C41F0BB26EBEEBDB9FA13C18AF (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWANDER_set_Current_m330B4F11B9C7BB4802DAB85511AAFBCAB80198A7 (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWANDER_Reset_m313CCD6B277E672C2D4208B05AC229AF9D5596B5 (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWANDER__ctor_m3AAE8FC04174618FDBB2F4041FC11CF8784FFBE4 (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOCTWANDER__ctor_m6F1B3DAC52B81854B126D0470D56333FAE25701F (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DOCTWANDER_set_MY_m30FB91B38D8536325F21FC00C499CC1643DB58A2_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DOCTWANDER_set_THERE_m2D7F068894EF6CD2AE3DD278F9819D746931D766_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DOCTWANDER_set__world_mF6B58775AD07C30A51AFB0135D864C4156E90321_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DOCTWANDER_MoveNext_m8E61BAB5BF4A9755FB04E5308BC58FF2B1AB3C00 (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) 
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
		L_1 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)207), (1.0f));
		RuntimeObject* L_3;
		L_3 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = DOCTWANDER_get__world_mB35B3A8532DA2E71EFDAB22F19D3AAB24BA7E848_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)862651356), (bool)1, (bool)1);
		__this->___DOCTHIT_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DOCTHIT_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___DOCTHIT_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)209), L_12);
		RuntimeObject* L_13;
		L_13 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
		__this->___MY_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_14;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_15;
		L_15 = DOCTWANDER_get__world_mB35B3A8532DA2E71EFDAB22F19D3AAB24BA7E848_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)-1176969689), (bool)1, (bool)1);
		__this->___DOCTCYCLE_15 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DOCTCYCLE_15), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
		__this->___MY_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_17;
		RuntimeObject* L_20 = __this->___DOCTCYCLE_15;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)190), L_20);
		RuntimeObject* L_21;
		L_21 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
		__this->___MY_20 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_20;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)213), (0.0f));
		RuntimeObject* L_23;
		L_23 = DOCTWANDER_get__world_mB35B3A8532DA2E71EFDAB22F19D3AAB24BA7E848_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)-1598123303), (bool)1, (bool)1);
		__this->___DOCT1TEX_21 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DOCT1TEX_21), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
		__this->___MY_23 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_23;
		RuntimeObject* L_28 = __this->___DOCT1TEX_21;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)164), L_28);
		RuntimeObject* L_29;
		L_29 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
		__this->___MY_26 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_26;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)168), (0.400000006f));
		RuntimeObject* L_31;
		L_31 = DOCTWANDER_get__world_mB35B3A8532DA2E71EFDAB22F19D3AAB24BA7E848_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_27 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_27), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
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
		L_40 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = DOCTWANDER_get_THERE_m65DDE87D46101419E6F9A47FEEE954ED5EF76B85_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = DOCTWANDER_get__world_mB35B3A8532DA2E71EFDAB22F19D3AAB24BA7E848_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = DOCTWANDER_get__world_mB35B3A8532DA2E71EFDAB22F19D3AAB24BA7E848_inline(__this, NULL);
		PROBE_t6446CA854ECBEF9A28D05EB8268BE95DBD03D176* L_45 = V_0;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
		RuntimeObject* L_47;
		L_47 = DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline(__this, NULL);
		__this->___MY_32 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_47);
		RuntimeObject* L_48 = __this->___MY_32;
		NullCheck(L_48);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)176), (1.0f));
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTALK_set_MY_mDFE6B5002EA9AFA24CD4CBDE094C1ADB984DB502_inline (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTALK_set_THERE_m5CA10817462740463424BD7FC0BE759AF3EF7671_inline (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHTALK_set__world_m710F7B9469425417F77ED0E00BA58045B4C117AA_inline (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHTALK_get__world_m20350C4CDF747D149FBD4C93540E909E6CA6A801_inline (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHTALK_get_MY_m8A5EAE8C91923F65535B589FFD17C994DA00F40A_inline (LNCHTALK_t8F1F18049FC7CA984F5167603116A5579F83D43C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOUT_set_MY_m010050BB57FFE4E64506D53B33EA60F89890289D_inline (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOUT_set_THERE_mA226A79792AFB15DED46A464C8F68D324D89F818_inline (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LNCHSHOUT_set__world_mC524F528D3CCA38B0DEE89229D1209DA0A72FA44_inline (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOUT_get__world_mDC9D77DC1C076B1FAA0D21835EFE2FBD70280BEF_inline (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LNCHSHOUT_get_MY_m70BB41518164E1C2E776FEC7E185D356646EFA59_inline (LNCHSHOUT_tA8A491E3E91039B1E378DCB2C0F64E46EC14F59D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTURN_set_MY_mE6BDE8D06C7002764B492AE63E653318CAE35C5F_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTURN_set_THERE_m87A60842EA20256807DD56A1D326DE447A08CD11_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTURN_set__world_mA54AB029C1C84AA99FC9386CA133E0178E6959FD_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTTURN_get__world_m6B0997D45112B537BF0682EBE1D16A638CE26027_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTTURN_get_MY_m026D44E90DA3FF5286219DB00026B3D4870B140C_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTTURN_get_THERE_m63F9E36DF87400A91F30A4AFAF970D9230BED29A_inline (REPTTURN_t255E3EDCBC4A0FDFA77016E8809724CD07045C23* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWAIT_set_MY_mBBF94C87B929BD4E77E09F9E9F3CCE80FAA511F0_inline (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWAIT_set_THERE_m9993ECB75B34D2C29AFBFF649C775144D54EFF02_inline (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWAIT_set__world_m7DC2B2A157CDE2578FFD7D331BEF823169121F19_inline (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTWAIT_get_MY_m5D889A483EAD85ABE209629BFB07BD4628E0DB69_inline (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTWAIT_get__world_mC8790079AC50BD3463F239FC606D519A5CDC236F_inline (REPTWAIT_t7B2F975EFB0FB0DF65E050644AAEE884B2F0B80E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWANDER_set_MY_m432783D41A05AA1EB9EA96094759CA6A3199AA80_inline (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWANDER_set_THERE_m9E86D15CF4C6DCA37F18A6BB8A3204A09E5D7878_inline (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTWANDER_set__world_m8B299C029AC86B5C035C57AFCA0BE832B722385D_inline (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTWANDER_get_MY_mAA55E51D17E918A2AF6DC84FF03CF5ED148A20E5_inline (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTWANDER_get__world_mBEF9BD256827216A49517DCA43914E0B6B8B868E_inline (REPTWANDER_t33DD666AB95879B89C91F618DD6DE8C04CA0532C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSEARCH_set_MY_m3C21F9655FFB4F4C10EC7B46AE7ADFEB1A701CBB_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSEARCH_set_THERE_m1B3D2A92EFCB1A7E6F255A0C6E86E6B0BBE5AB11_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSEARCH_set__world_mBE540011073F43CF78BCDB22B89C8BED1C2FC07B_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTSEARCH_get_MY_mDBBCBB4DAF28B6A4F214BD9BF3E36FC722017E86_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTSEARCH_get__world_mBEF23E9789F92B1E1306A0873B9722D2C87A2945_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTSEARCH_get_THERE_m4462613AD72B7500286A06730E0C7D7AE42D9F5F_inline (REPTSEARCH_t3FCFA40446B69BA3C358D8C74BF819A15AFA8E29* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIDE_set_MY_m197829EFF71C4E0B0C9CFE72648AB8494278C7AA_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIDE_set_THERE_m865DB2851F12B3A293B437504109213E562F1D7A_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIDE_set__world_mDC94E333C7F28B8198EBC10B8EFFA778F6879AD9_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIDE_get_MY_m927815DAD501B30270F2807A85BCB7C1B726DC98_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIDE_get__world_mC5AA8B86FB4FB0718CB4EE2D27C51C9A0C15AE2A_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIDE_get_THERE_m74F2206D78735605061161FB9B8F4C14FCE3AFDF_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIDE_set_Current_m08BF7C3CF7188D3D997DC6E8E81C4C1AE532CA42_inline (REPTHIDE_t7B10014060FB2048C45A81BD4FCDDE4DEAF301B8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLISTEN_set_MY_m2136D2169505823659ADCBF914EBCFBA6B998652_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLISTEN_set_THERE_mEAB3E96CD1F4FA953F41E85E0C05F2328E875C70_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLISTEN_set__world_mDF4202CEA329158217B6ECE59ECECD70575C26C1_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTLISTEN_get_MY_mE4C3B749ED1751D50DA2BD23819E77EC46706528_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTLISTEN_get__world_m5779970F2DD0BA7345A0ACD569DEA123FA96C82D_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLISTEN_set_Current_mA45F784C1BF228DF8B452A3794D3ED0D66AC711E_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTLISTEN_get_THERE_mE63D91C9C5BBA4E08CDF95AE302406F5F9B6499A_inline (REPTLISTEN_tCB7AA5EC7BDF97FB689F23BDFD30235A051F7737* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTJUMP_set_MY_m5DD5F150E92D8A84919A570A6DE1ACA52C91EDC2_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTJUMP_set_THERE_mEFBAF2AE8DCBEC54FB0A53AC0CFF660E82111E6B_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTJUMP_set__world_m5F30C58E96C55C2B875E5B7D1B7C66E5152890BB_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTJUMP_get_MY_m7D8F1F25594C5A651F42B06D0AF32CA390E683A4_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTJUMP_get_THERE_m7D6B66A530C5B9CF299EFB334B24F16C44B32563_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTJUMP_get__world_mB1524072E29889D63CB1AA0C068B494C40C95DEC_inline (REPTJUMP_t5D988865F52D0898EE116B1F1F8D4152298B43D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLOOKFOR_set_MY_mAB60BCF98327E1DF6E9D35E62CC8B40495E3282D_inline (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLOOKFOR_set_THERE_m8601475FD9667B579F3E0E0EDD1BCD696D3FCA73_inline (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTLOOKFOR_set__world_m908CEF934F8AB8590A7663F76E47328162F35F76_inline (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTLOOKFOR_get_MY_mFE696DDB0FC97940EA8194F02FD4EB0994C63DD7_inline (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTLOOKFOR_get__world_m04A55874A2F1B55B5521C0FC2802F01259CB5737_inline (REPTLOOKFOR_tA5F2523025DA92ECDBBB87250BE5C567E3F15760* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHEAR_set_MY_mB883C068C6A0D377C48D170830B9E2DD4A06B018_inline (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHEAR_set_THERE_m6EF9555B1752A6939F2A9A5B0944D514F3FA5787_inline (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHEAR_set__world_mA803349A61F2B62B368AFCE0B94C00963062CE3A_inline (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHEAR_get__world_m9C65F7816C88B447059FFD0CCC1B00D2D6E18F0C_inline (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHEAR_get_MY_m675C839A3FEB14FF56E27992F973511BF974F83F_inline (REPTHEAR_tC815B5A554680E8AB71BC83B2B9A939717CC0A7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDOWN_set_MY_m3C150389E777DE97244135B625919AFE75D890AA_inline (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDOWN_set_THERE_m33827F66B83A423DF8BB0FF53B534E5B74C9AC9A_inline (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDOWN_set__world_m2784E7EA68060C856CDB9C7BA444377B30309994_inline (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDOWN_get__world_m84701734AB8E990E2FC9BFBECACFFA23E3B478CD_inline (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDOWN_get_MY_mA9F34758B012BD0C89B34D261C1B84730BB6581C_inline (REPTDOWN_tE2BCBE716C8EA12ACCDB3B66F8B3378984496285* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK_set_MY_mA1E1A6DF6418F8F70589CAFED68747AE7264DF90_inline (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK_set_THERE_m606DD395214B1E4CF0B9B330004C0249A93227FB_inline (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTFOLLOWATTACK_set__world_m3CFC398D794ED1E66CD5CC668A679D50918B86B5_inline (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTFOLLOWATTACK_get__world_m3BD4594EAADDE19A366736EF9BC10857E7DDA7CE_inline (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTFOLLOWATTACK_get_MY_m3A6E4638980BDD9A7C8FCC347126FAD14FBBBA5F_inline (REPTFOLLOWATTACK_t9E5E52BB01B75DBCB60A23D4F56D9DD452289854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSHOOT_set_MY_mB5BA7606FF30A7386C04BED72FDE06EDF2FFA0BF_inline (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSHOOT_set_THERE_m58747B0785DA2EA809920702941EAE0B3010E4D5_inline (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTSHOOT_set__world_m1E43CB001F0B06C8B4FC208F97F171191B81A70B_inline (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTSHOOT_get_MY_m39CB04047A319B375F2117216FACF8EFD2F02B04_inline (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTSHOOT_get__world_m697FECF0EEB2C3D0E02F1C2B96CF3CC79876C0E8_inline (REPTSHOOT_tE75EB6847B0753ECB5ED33C7BC5047F17BAE8C3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTESCAPE_set_MY_m2002F7C316592DB2DAE555B8608AA5BA3D9C6CBC_inline (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTESCAPE_set_THERE_mE99535C03332F11AAFF371238FB065011AA9AD73_inline (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTESCAPE_set__world_mD71ED796D46EFCFB63697D6C744E84BDCAA4656D_inline (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTESCAPE_get_MY_m4114D4DE34EBD568400A790F7CEC50668B3D3F2E_inline (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTESCAPE_get__world_m14D2E796970BBB4BBC7D4E8FFD4C46DC591AF76B_inline (REPTESCAPE_t4076583DFAB6DDC85E3ECA08287BD03EB58373F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDEAD_set_MY_m38953045674B7A84440AAF567A2F0E65380F9A2E_inline (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDEAD_set_THERE_m6809F804293DF3B561111F709416716695B5594D_inline (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDEAD_set__world_mAFA79436A7D1D01032C398CFB3A7A8821467CEE5_inline (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDEAD_get_MY_m7A5B6E04E061315A65A9DEA1622D6738A3ECA922_inline (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDEAD_get__world_m64115E97486AF551971529D0E2294A0A7531DCA6_inline (REPTDEAD_tB52276BA0DBE3CF67472DB6C4060722DCFD6544E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDIE_set_MY_m8A2831CFD59B2FDA3DFC6763562AE1D839F4569B_inline (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDIE_set_THERE_m8743595230F27D2BD82F13C95F049E91B0388E90_inline (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTDIE_set__world_m29F88AF406B95EA9DB661A534388AFD89FEA0D65_inline (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDIE_get_MY_m72F0ED9E5EA6B14D1CD3D57872B80DA07A46248B_inline (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTDIE_get__world_m617FA08226A98BB6DFBE57C62F8A5987F7A9A5BF_inline (REPTDIE_t855343E468FBFDA106D46E7520D412F1BD4D7F1F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTIMPLODE_set_MY_m43C556F1ABBA3EFF6BA281BA013BB7C160A26DDD_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTIMPLODE_set_THERE_m15D65B36FEFE2971C1C8461D54A4288A3F6EA489_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTIMPLODE_set__world_m3C450A9035FC27C1D11BCC00A790283E5E8344A9_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTIMPLODE_get__world_m0C114C255352B3DD8545FB076FB04923B21125C8_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTIMPLODE_get_MY_m5BDF376477E608571BDEB980A1324B0F3FCB4F7C_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTIMPLODE_get_THERE_mBF698039E83B4A6EE45391EDF57CF3B65460BC40_inline (REPTIMPLODE_t41D16E5AEAE55A74D72198927FFF356C58F4B2F7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIT_set_MY_m2E774C540246D19D7703AEDC44DF33EFE61E3176_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIT_set_THERE_mAAEDA228566183495CE003C5B5F17E1888CC9BEB_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIT_set__world_mADB00F954A3B145136AF5355D907BA8A79BFE956_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIT_get__world_mFE7193AF6B8CEF53A1B65564DC77B88CCF624F9E_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIT_get_MY_m059D2D1767A7A693F87F7C780AE59CB2E5D7D8C1_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTHIT_get_THERE_mF22952168A70D856B6421B483AAD5BCDF1328344_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTHIT_set_Current_m1E9352862E64D9367F59E2F08F9A1CF48BECA375_inline (REPTHIT_t19C59D094F9B9E2E50465F2DE7BA8EC494BFF75A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTATTACK_set_MY_mDA4DC70995AA4037AD5B961C0F7D025FCB6A6FA9_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTATTACK_set_THERE_mB73B2F47B019CB1F45CD3806F2225BAEFD185A9F_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTATTACK_set__world_mC3EA75C08F721B864883F28EEB74DB3733B2E498_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTATTACK_get_MY_m94BA9BB42F5A0BCFF676A3F77D6ECF0CACFBAF98_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTATTACK_get_THERE_m76910EA212CC9C0E0AACE671F42B92FC5B0ACE51_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTATTACK_get__world_m5F5822667C9FBD7C0E5065450C41669E4E6D618B_inline (CYCLEREPTATTACK_t977CE1CC178FC6FDA555387AE2C6E07100B35D3E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTHIDE_set_MY_m0FA10EAACA142DCEA3B828E7602DD96271EA237B_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTHIDE_set_THERE_m1F92B3009F1DAE0D7FE3D4C7AE919FBBDDB17083_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTHIDE_set__world_m6509D7C19B7D9B828659ADBF17420480B086D0EF_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTHIDE_get_MY_m553901815B6F8427AD61D08E84E5657A5909BA5A_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTHIDE_get_THERE_m8E8B5E27F1F33064719A289DD766946D5BC65AB4_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTHIDE_get__world_m58D29529D00979FFF8B1A5B99CE57232FDAA9FB5_inline (CYCLEREPTHIDE_t813D9E62A9FD860B4296C5DA1CBD592345379F0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT_set_MY_m76152EC13D43BC4697920B462E77A2A413BE2D25_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT_set_THERE_m838CE3DE8A108EAC19309E7759800A9E87A94828_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CYCLEREPTSHOOT_set__world_mDEBD2B6452D6306471B9C3FA03EA9911DEDA5452_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTSHOOT_get_MY_mE4E5CE69C3D1D093EC760714E60F3190BAFE959A_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTSHOOT_get_THERE_m248FD6A6BB743E89173F0AD177BC4D4E6653835D_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CYCLEREPTSHOOT_get__world_mDFAC351F376193A5EA8447BF0A6F55F41CA9FB36_inline (CYCLEREPTSHOOT_t2E39487C86CF2685217A8A1F5FF7751CF0AED1A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTALK_set_MY_m7A6335E63BDD4C2A5E40A0D462FFEBA646EEB996_inline (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTALK_set_THERE_m1CA993858DAC2E40F3E885047A24775D5304387C_inline (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPTTALK_set__world_mC043876C2D769ABF028409FA1E38CFB4A6499ED8_inline (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTTALK_get__world_mD47EE13E6E69F79B679C8076E7A2421DDEBDB0F4_inline (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPTTALK_get_MY_m38693FA2304955D46214101C3633572643FA2774_inline (REPTTALK_t7F69CFC48764070488681D671377D30A8DBAC1DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTURN_set_MY_mD18F4776B26CEAE2B9E3849569F956E13F605D21_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTURN_set_THERE_m4196098BA0531448AC8D31953CC18BAC82AB9F61_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTURN_set__world_mD7F872551D4E457A5657EEF8E40F9481FA323883_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSTURN_get__world_m96BF92079C7D278EBA5CBBEC9CFEFCF52EAC2C85_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSTURN_get_MY_m5A399738F357798DCC422BC265C3A4D841B36C66_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSTURN_get_THERE_mAD875B68492201CC2B5E0050C4E19C5D3246416E_inline (NURSTURN_tBDF5BF0DC0182C4A833A70D455DB2CC355114924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWAIT_set_MY_m2A044288DEF473806D35C3DEFFA4C1FC46E23657_inline (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWAIT_set_THERE_m0389A70A5920DF54BAEA2C189CA19836FE7EA1E3_inline (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWAIT_set__world_mC1852ED343E0F67F8592849EA919CEDCFE506F26_inline (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSWAIT_get_MY_mD7364B661C9513B24F1E9EB4656664F080E926E4_inline (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSWAIT_get__world_m7D99A02E7C2F8E2698D842C33D39FFDBBB4466BF_inline (NURSWAIT_t351BB7D6B01686CD08FFF62F01178D996E71110C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWANDER_set_MY_mCD40548E51EDFA631BFAEA4A37AD59F356D3A136_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWANDER_set_THERE_m332D14CA94E19D90C2015D21A8FBEFF0584AEAE7_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSWANDER_set__world_m5CDF49A3450688FA41DF160CA9129FD43BF73801_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSWANDER_get_MY_m1B3E6108CBEBE1EDFB389867BDB9D31314C46779_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSWANDER_get__world_m2609BA3DBAB95E4E9876ED5F2C0E4EC3E945D9B8_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSWANDER_get_THERE_m0E21570CF07D455E0D7E17015EEF7321C744D1C6_inline (NURSWANDER_t3DB4F5F531BA9294A66276036731AD0FE6E1E06E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIDE_set_MY_m4F85BA19F9CBB4FE18B08643E09A4EE1E04D520A_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIDE_set_THERE_m60985E05BB351B742F0CEA2DBDEB7552E5D41393_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIDE_set__world_m3961A8AFE75D79852B4A96B60A6E91A150D06726_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIDE_get_MY_m253BEAF132B0B28C06F6B5CC609F3648C5777572_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIDE_get__world_mAC8EC3BBE2048DBB313A119F815044574A9A5B36_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIDE_get_THERE_m0A5144370D549737829B340A7B98C1D4E71DD1AF_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIDE_set_Current_mA7E632D309FF76C5FFF0C375AF85AAA34A5B5205_inline (NURSHIDE_t89B17D3471471867051F7C7E7B9D077D0114EB0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDEAD_set_MY_m7B85464A923FA0A3BC456CF00680DC85CE91ED6C_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDEAD_set_THERE_m0A6ED7D3F80ACBBCD3663BCC66C591C0C096B64C_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDEAD_set__world_mB16AA976395233F383B1BD8300630497CA39FC62_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSDEAD_get_MY_mD7EBCF97920CE3C0CCDAEC91FDAB2A7A0F01F39C_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSDEAD_get_THERE_mAEC6B9C59153C49DBD843FB4D1E60A829BBF46BA_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSDEAD_get__world_mB8BA85DDA64170DD6C1E9E1C2C9F2CFA554A48A4_inline (NURSDEAD_t611771B0D8D76239A2AE079DEE32F5EC93AB8B5C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDIE_set_MY_m80654BD89A1707FFF4B6179443A6FE62263C7D59_inline (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDIE_set_THERE_m92FEE161CFFD0E34009DB1E49C120AFADCE4E9DB_inline (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSDIE_set__world_m78B0D77A1F3073A4889CA5D1E8DCFBB40F02A5F7_inline (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSDIE_get_MY_mF7354E212D4009BCEBFB7C41953C5CBD87BDDFF0_inline (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSDIE_get__world_mF651525FA09370EEAD9D9373C8484C2514B64F47_inline (NURSDIE_tC234B34A34D1D7F64A683CD8A3532A3E50ECBA6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSIMPLODE_set_MY_m8D78AD8D0BAF4118F1D15B9876DC36B189EB9D20_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSIMPLODE_set_THERE_mD4D4797CADE27613CB03253D520B5ED813F799D4_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSIMPLODE_set__world_m8770F7510D71127CC1D8C973ACBCA34752C6AF6D_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSIMPLODE_get__world_mB4A47CBFA394DABF71803B62C913D2A2F35CA46A_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSIMPLODE_get_MY_mC2C361640598A2429B829862CA721559B946F9EE_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSIMPLODE_get_THERE_mFD08736E8483C3557EE83F40FE81E71BB95EA690_inline (NURSIMPLODE_tC330CFA8D980ABA821CEC211C758BFAC91879E6F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIT_set_MY_mA04F3FBD9FDC5DB724D9DD50701A45BF2F838AA7_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIT_set_THERE_m82EC6E1A10206AB0C152C16829B7ADA1448FD60E_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIT_set__world_m258CD6098816AC1F6E80858E45CC2CFAD47FF96D_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIT_get__world_m91E185CD0D8B8AFC8661422F3A6D16DAE7268AC8_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIT_get_MY_m4BA6BEB7DEE3FD1C70AE2A0CE96D5BBD57F13B5A_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSHIT_get_THERE_mF9182ED2A7EC327E0C677619D78F3593E2141D2C_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSHIT_set_Current_m7FC20067B951BACDEA1BBBD683A20001CD59499F_inline (NURSHIT_t5C4886DE03236386D04664FA68B25FEE65140522* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSCYCLE_set_MY_mBA64EAA1F96DDC22123DBDB0FCBC43727FB37625_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSCYCLE_set_THERE_m0E841704E6281F3AA4462E0E2069687E5C026FF9_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSCYCLE_set__world_m92CF7513B8D9E1DE7EB7257F21DA6D7BE94D7936_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSCYCLE_get_MY_m69079C109E03FF7F96B6C4A093ED1C2A628066AC_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSCYCLE_get_THERE_mF6D340E57401F9506300B264B74C5B361FFB34F2_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSCYCLE_get__world_mDE355886320C2B1CAF4F52E0F00512C90B26AE23_inline (NURSCYCLE_t190D91E667589EC45E7F8C97542301D9F5C16184* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSSCREAM_set_MY_mD02D9AE54A9A3F68EDD068C564B9DF6FC62BAA77_inline (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSSCREAM_set_THERE_m23E6F3870D3F622C704F391A566523CDABFE6FF0_inline (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSSCREAM_set__world_m996827D4A2B67F782CAEFE3AD9CB75BDF75098AD_inline (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSSCREAM_get__world_mC2EB25D45DD7C522A91AE6C5CAEABDBC1782BBC2_inline (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSSCREAM_get_MY_m42088C4A5AF45F601BC256052E49721608287064_inline (NURSSCREAM_tBDFF1F618FA6ACF1FD26633C23D8E4C7FABBB854* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTALK_set_MY_m27DF4AD0A33E0D909A0B80043A626DDAA1CF1F3D_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTALK_set_THERE_mC11C8BFF054F5B9F2A7B2E00598F7E6D7D385CA2_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTALK_set__world_m3F0F874DC6AC24A5B3C1AB4A6FC094579ED62D01_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSTALK_get_MY_mCA768E365188FFA0DC655E0ED554ED380471518C_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NURSTALK_get__world_m7A8CB7AB9EEF29FE0E152BD9FE12B58B73BE2340_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NURSTALK_set_Current_mB7D22ECF0B20CEDF4DD12D4E0A7E3C7D723122C8_inline (NURSTALK_t0834E74BC16617FAD6AF56BAE868E449DEB7938B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTTURN_set_MY_m5EE4F9E280350B8DF82D6D2B8FFD355F24437A44_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTTURN_set_THERE_m1A3A8E2D933C53795CE0242750B27B9EADBB2F63_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTTURN_set__world_m2BF703BCF6ED6A9ED55F2735B1BFB48B68BF0601_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTTURN_get__world_m0D0C0EA4818C11E1CC56C4435C03886B755C566F_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTTURN_get_MY_m0517B539A078FC8FBC8CA07E55D7D927ED03057F_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTTURN_get_THERE_m617A6446C47D399216E317001D6B5C59F0035DCF_inline (DOCTTURN_t681BEFD223C1973BA8E99A4A6FA35EE56C38FF9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWAIT_set_MY_m03ADC4B1EFF062A9388CA6C67CB1C15021D6C3CF_inline (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWAIT_set_THERE_mDDAFC2AEE40E9E1DAF4F4AA22F692A0FA2ED67D7_inline (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWAIT_set__world_m0C128E6B7639492AE17711446F9CEAF4C26F617D_inline (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTWAIT_get_MY_m29B1B0EFEF559E33F396C4C55A5650998B37E9D8_inline (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTWAIT_get__world_m8F362B6F7F9505F8B528820477A596E7459F7B53_inline (DOCTWAIT_t978D96991C8419D17018689F4FCD46A91BFA5370* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWANDER_set_MY_m30FB91B38D8536325F21FC00C499CC1643DB58A2_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWANDER_set_THERE_m2D7F068894EF6CD2AE3DD278F9819D746931D766_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DOCTWANDER_set__world_mF6B58775AD07C30A51AFB0135D864C4156E90321_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTWANDER_get_MY_mD9B549EF54E45171C2750435C078C854F7368887_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTWANDER_get__world_mB35B3A8532DA2E71EFDAB22F19D3AAB24BA7E848_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DOCTWANDER_get_THERE_m65DDE87D46101419E6F9A47FEEE954ED5EF76B85_inline (DOCTWANDER_t9CAD9B6FDD719CE1C81039EA17D7CAEC759E93CD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}

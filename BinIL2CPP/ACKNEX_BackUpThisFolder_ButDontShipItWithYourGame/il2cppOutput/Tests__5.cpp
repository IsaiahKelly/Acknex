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
struct DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04;
struct DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36;
struct DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9;
struct DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F;
struct DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543;
struct DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64;
struct DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E;
struct DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2;
struct DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705;
struct DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1;
struct DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C;
struct DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA;
struct DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664;
struct DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1;
struct DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05;
struct DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A;
struct ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A;
struct ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958;
struct FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5;
struct HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4;
struct LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45;
struct LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511;
struct LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2;
struct MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432;
struct PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF;
struct PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8;
struct PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27;
struct PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF;
struct PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F;
struct RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8;
struct REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E;
struct REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024;
struct SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327;
struct SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615;
struct SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF;
struct SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910;
struct SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674;
struct SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F;
struct SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D;
struct SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72;
struct SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89;
struct SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD;
struct TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A;
struct TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33;
struct TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518;
struct TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902;
struct ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE;
struct ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D;

IL2CPP_EXTERN_C RuntimeClass* DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902_il2cpp_TypeInfo_var;
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
struct DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36  : public RuntimeObject
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
	RuntimeObject* ___DRKL9TEX_18;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___MY_29;
	RuntimeObject* ___MY_32;
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
struct DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___DRKLJUMP_0;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___DRKLSEARCH_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___DRKL0DNTEX_15;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___BULLET_21;
	RuntimeObject* ___MY_23;
};
struct DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___DRKLHIDE_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___CYCLEDRKLHIDE_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___DRKLHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___DRKL1TEX_18;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___BULLET_27;
	RuntimeObject* ___MY_29;
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
struct DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___DRKLJUMP_0;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___DRKLFOLLOWATTACK_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___DRKLDOWN_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___DRKL0TEX_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___FOLLOW_18;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___MY_23;
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
struct DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1  : public RuntimeObject
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
	RuntimeObject* ___CYCLEDRKLATTACK_22;
	RuntimeObject* ___MY_24;
	RuntimeObject* ___DRKLHIT_25;
	RuntimeObject* ___MY_27;
	RuntimeObject* ___MY_30;
	RuntimeObject* ___MY_33;
	RuntimeObject* ___DRKL0TEX_34;
	RuntimeObject* ___MY_36;
	RuntimeObject* ___MY_39;
	RuntimeObject* ___MY_42;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___MY_46;
	float ___temp_47;
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
struct DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___DRKLHIT_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	float ___temp_18;
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
struct DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___DRKLJUMP_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___DRKLFOLLOWATTACK_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___CYCLEDRKLATTACK_9;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___DRKLHIT_12;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_20;
	RuntimeObject* ___DRKL1TEX_21;
	RuntimeObject* ___MY_23;
	RuntimeObject* ___MY_26;
	RuntimeObject* ___BULLET_27;
	RuntimeObject* ___MY_29;
};
struct ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MOVE_MODE_1;
	RuntimeObject* ___BLACK_2;
	RuntimeObject* ___BIP03SND_4;
	RuntimeObject* ___MENUITEM_7;
	RuntimeObject* ___MAXMENUITEM_9;
	RuntimeObject* ___HIDEMENU_10;
	RuntimeObject* ___MENUPANEL_20;
	RuntimeObject* ___PLEASEWAITTEXT_23;
	RuntimeObject* ___LEVEL_STRING_27;
	RuntimeObject* ___LOAD08STR_28;
	RuntimeObject* ___PLAYER_HEALTH_31;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___PLAYER_HEALTH_34;
	RuntimeObject* ___LOAD_STRING_41;
	float ___startTime2;
	float ___endTime2;
};
struct ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___ENDPHASE_0;
	RuntimeObject* ___temp_3;
	RuntimeObject* ___MY_6;
	RuntimeObject* ___ENDPHASE_7;
	RuntimeObject* ___SHOT_SOUND_ON_11;
	float ___SHOT_SOUND_ON_11_val;
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
struct HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___temp_1;
	RuntimeObject* ___temp_5;
	RuntimeObject* ___temp_9;
	RuntimeObject* ___temp_13;
	RuntimeObject* ___temp_16;
	RuntimeObject* ___temp_19;
	RuntimeObject* ___temp_22;
	RuntimeObject* ___temp_25;
	RuntimeObject* ___temp_28;
	RuntimeObject* ___temp_31;
	RuntimeObject* ___temp_34;
	RuntimeObject* ___MAP_MODE_36;
	float ___MAP_MODE_36_val;
	RuntimeObject* ___MAPMODE_37;
	RuntimeObject* ___MAP_MODE_68;
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
struct MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MOUSE_MODE_0;
	RuntimeObject* ___MOUSE_MODE_1;
	float ___MOUSE_MODE_1_val;
};
struct PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___PDATEXT_2;
	RuntimeObject* ___SHOWMAINMENU_3;
	RuntimeObject* ___SELECTTRICORDER_5;
	RuntimeObject* ___SELECTNONE_7;
	RuntimeObject* ___SELECTNONE_9;
	RuntimeObject* ___SELECTMP5_11;
	RuntimeObject* ___SELECTMP5BURST_13;
	RuntimeObject* ___SELECTSTINGER_15;
	RuntimeObject* ___SELECTGRANADE_17;
	RuntimeObject* ___SELECTQUANTUM_19;
	RuntimeObject* ___BLANKSTR_24;
};
struct PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___TICKETSND_3;
	RuntimeObject* ___KEY1_6;
	RuntimeObject* ___GET03STR_7;
};
struct PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___KEYSND_3;
	RuntimeObject* ___KEY2_6;
	RuntimeObject* ___GET04STR_7;
};
struct PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
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
struct REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SECCOUNTER_1;
	float ___SECCOUNTER_1_val;
	RuntimeObject* ___SECCOUNTER_3;
	float ___SECCOUNTER_3_val;
	RuntimeObject* ___SECCOUNTER_4;
	RuntimeObject* ___CDTRACKTIME_5;
	float ___CDTRACKTIME_5_val;
	RuntimeObject* ___SECCOUNTER_6;
	float ___SECCOUNTER_6_val;
	RuntimeObject* ___SECCOUNTER_8;
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
struct SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615  : public RuntimeObject
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
	RuntimeObject* ___HAS_GRANADE_5;
	float ___HAS_GRANADE_5_val;
	RuntimeObject* ___WRN03STR_6;
	RuntimeObject* ___WEAPONSEL_9;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___GUNFIRING_32;
	float ___GUNFIRING_32_val;
	RuntimeObject* ___AMMO_GRANADE_34;
	float ___AMMO_GRANADE_34_val;
	RuntimeObject* ___MY_GUN_36;
	RuntimeObject* ___MY_GUN_39;
	float ___temp_40;
	RuntimeObject* ___MAP_MODE_42;
	RuntimeObject* ___MY_GUN_47;
	RuntimeObject* ___MY_GUN_50;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___MY_GUN_54;
	float ___temp_55;
	RuntimeObject* ___GRANACT_56;
	RuntimeObject* ___MY_GUN_60;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___MY_GUN_64;
	float ___temp_65;
	RuntimeObject* ___GRAN00OVL_66;
	RuntimeObject* ___THROW_69;
	RuntimeObject* ___THROW_71;
	RuntimeObject* ___GUN_ON_74;
	RuntimeObject* ___RENDER_MODE_76;
	RuntimeObject* ___MP_501SND_77;
	RuntimeObject* ___SELECTTRICORDER_79;
	RuntimeObject* ___SELECTNONE_81;
	RuntimeObject* ___SELECTNONE_83;
	RuntimeObject* ___SELECTMP5_85;
	RuntimeObject* ___SELECTMP5BURST_87;
	RuntimeObject* ___SELECTGRANADE_89;
	RuntimeObject* ___SELECTSTINGER_91;
	RuntimeObject* ___SELECTQUANTUM_93;
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
struct SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SOUND_VOL_BUFFER_0;
	float ___SOUND_VOL_BUFFER_0_val;
	RuntimeObject* ___SOUND_VOL_1;
	RuntimeObject* ___CDAUDIO_VOL_BUFFER_2;
	float ___CDAUDIO_VOL_BUFFER_2_val;
	RuntimeObject* ___CDAUDIO_VOL_3;
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
struct SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___temp_3;
	RuntimeObject* ___GUNFIRING_5;
	float ___GUNFIRING_5_val;
	RuntimeObject* ___WEAPONSEL_7;
	RuntimeObject* ___MAP_MODE_9;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___TRICACT_22;
	RuntimeObject* ___MY_GUN_26;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___MY_GUN_30;
	float ___temp_31;
	RuntimeObject* ___TRIC01SND_32;
	RuntimeObject* ___BRIEFING_TEXT_34;
	RuntimeObject* ___PDATEXT_36;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___PDATEXT_36_array;
	int32_t ___PDATEXT_36_index;
	RuntimeObject* ___TRIC01OVL_37;
	RuntimeObject* ___PDATEXT_42;
	RuntimeObject* ___PDAMESSAGEOFF_43;
	RuntimeObject* ___GUN_ON_46;
	RuntimeObject* ___HLP03STR_47;
	RuntimeObject* ___BLACK_49;
	RuntimeObject* ___RENDER_MODE_52;
	float ___startTime4;
	float ___endTime4;
	RuntimeObject* ___MOVE_MODE_55;
};
struct SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___ALARM03SND_0;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___temp_5;
	RuntimeObject* ___GUNFIRING_7;
	float ___GUNFIRING_7_val;
	RuntimeObject* ___WEAPONSEL_9;
	RuntimeObject* ___MAP_MODE_11;
	float ___startTime2;
	float ___endTime2;
	RuntimeObject* ___TRICACT_22;
	RuntimeObject* ___MY_GUN_26;
	float ___startTime3;
	float ___endTime3;
	RuntimeObject* ___MY_GUN_30;
	float ___temp_31;
	RuntimeObject* ___ALARM03SND_32;
	RuntimeObject* ___GAMEOVER_TEXT_34;
	RuntimeObject* ___PDATEXT_36;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___PDATEXT_36_array;
	int32_t ___PDATEXT_36_index;
	RuntimeObject* ___TRIC01OVL_39;
	RuntimeObject* ___PDATEXT_44;
	RuntimeObject* ___PDAMESSAGEOFF_45;
	RuntimeObject* ___GUN_ON_48;
	RuntimeObject* ___HLP04STR_49;
	RuntimeObject* ___BLACK_51;
	RuntimeObject* ___RENDER_MODE_54;
	float ___startTime4;
	float ___endTime4;
	RuntimeObject* ___MOVE_MODE_57;
};
struct SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___FIRE_GUN_0;
	RuntimeObject* ___FIRE_GUN_2;
	RuntimeObject* ___LAYER12_4;
	RuntimeObject* ___LAYER13_7;
	RuntimeObject* ___LAYER16_10;
	RuntimeObject* ___SEL_TRIC_13;
	RuntimeObject* ___SEL_NONE_15;
	RuntimeObject* ___SEL_NONE_17;
	RuntimeObject* ___SEL_MP5_19;
	RuntimeObject* ___SEL_BURST_21;
	RuntimeObject* ___SEL_GRAN_23;
	RuntimeObject* ___SEL_STNG_25;
	RuntimeObject* ___SEL_QGUN_27;
	RuntimeObject* ___MAPMODE_29;
	float ___MAPMODE_29_val;
	RuntimeObject* ___MAP_MODE_30;
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
struct ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MAP_MODE_1;
	float ___MAP_MODE_1_val;
	RuntimeObject* ___MAP_SCALE_3;
	float ___MAP_SCALE_3_val;
	RuntimeObject* ___MAP_SCALE_4;
	RuntimeObject* ___MAP_SCALE_5;
	float ___MAP_SCALE_5_val;
	RuntimeObject* ___MAP_SCALE_6;
	float ___MAP_SCALE_6_val;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___KEY_INS_11;
	float ___KEY_INS_11_val;
};
struct ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MAP_MODE_1;
	float ___MAP_MODE_1_val;
	RuntimeObject* ___MAP_SCALE_3;
	float ___MAP_SCALE_3_val;
	RuntimeObject* ___MAP_SCALE_4;
	RuntimeObject* ___MAP_SCALE_5;
	float ___MAP_SCALE_5_val;
	RuntimeObject* ___MAP_SCALE_6;
	float ___MAP_SCALE_6_val;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___KEY_DEL_11;
	float ___KEY_DEL_11_val;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTGRANADE_set_MY_m00CEFC30058D6D21E081EFA320B9473491F0951D_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTGRANADE_set_THERE_mD6AD4EDED85BC54CEABD299B520BE4AABA4DFBBD_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTGRANADE_set__world_m5A5D264B63E6B5F96FDCE4D664B0C80574AF0E0C_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9 (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTGRANADE_get_MY_m7236DC3DD56B5A416A415A99F9E4312642C1FBA6_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTGRANADE_get_THERE_mB08DB1BA570DBBDF00014E56DAE648D1FD8EB5A1_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F (int32_t ___0_ticks, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTGRANADE_set_Current_m949107A7B43DAF6069476FCA4CEB6EA9B95036BC_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15 (RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETOFF__ctor_mADB3318ADA9DFCAC4F053B73F0CE4BE26016FFC7 (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4 (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOWER__ctor_m2CCAB60402636B5DDB62FD9BD5FF9D7F3EEBBE55 (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3 (int32_t ___0_frames, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RAISE__ctor_mC9CDF6F146498172B72D6E63718BA1D065CC3E95 (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTSTINGER_set_MY_m3CD2208F8F6A9F64458DFC5553F6B26DEB2BCA69_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTSTINGER_set_THERE_m81AE916FCBF6C65ABB988F798E74BF5E31BD9EE7_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTSTINGER_set__world_mFD9E58202C5E4359E56E957036BA79081D0097FE_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTSTINGER_get_MY_mFE40B59F31C31B1093FA1665E4D46A9F807AB035_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTSTINGER_get_THERE_mEBAC00357932E7B1960C75C646C092243860D84B_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTSTINGER_set_Current_m75B7B18207FFDC373B056613F3F58D049F84474A_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TARGETON__ctor_m515D11DEBB4E550106AF681B3007629ABBCD5FAA (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTQUANTUM_set_MY_m8D3325359CC01DF2EE7A05CC468D4FF17255E4C6_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTQUANTUM_set_THERE_m0B7E850AC9F3B8124472F0752E2A9400F1022E2B_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTQUANTUM_set__world_m06D4B5E0112E7383B54A751600E76618F702EDD9_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTQUANTUM_get_MY_m6B680135C1F2A6A43D0627E398EA5598BC730F4C_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTQUANTUM_get_THERE_m79983BE7718EF17114AA1B679341B8CD0FE61AD5_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTQUANTUM_set_Current_mEE5C863A05E5F44796984C635BA27BC0F604A6DC_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPIN_set_MY_mE1D4DAE0AF9CA3533599F6F83D40087A98E35A15_inline (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPIN_set_THERE_mF06923BBFB92EC8A74BAE5C0D0BE0DF932FD6491_inline (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPIN_set__world_m22F556FA32817B9EC3736647D4DFF966E848CEA8_inline (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPIN_get__world_m9B22B216430898828C41EC561308CF5383709D84_inline (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPIN_set_Current_mFBC34E06C35C2FBD1D1EF78C1DF98EE0727CDBE0_inline (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set_MY_m95808AA57B335735DC3FAEEE28064E53787FDF56_inline (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set_THERE_mD0DFE7F969C2CFD1B340CD0F90415ED0B7E662EA_inline (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set__world_m3B84D2C7902555789D8B52201531D704780B4875_inline (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPOUT_get__world_m60943875030437202490B4A4347867F74CDFCEBE_inline (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set_Current_m8B695B97C6902775E3B601944A15446FD693C613_inline (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set_MY_m86F3A4773AC146E408C8161D7026BE581071939B_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set_THERE_m5963796893EDAA641EDD5C5D2ECECF8CDFE163B2_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set__world_m2A3AB01E9B6EDD594CE07D62D596D5B5B8C2D4D6_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTNONE__ctor_mFF1135D9058921B26DEC652619B7A667380D5451 (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDABRIEFING_get_MY_m45E7BABFBDCCA9C1822D28D7C33D1AFA370E7BA2_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDABRIEFING_get_THERE_m9D21046D9EDC81B28E59859963E7A19BE099F10A_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set_Current_m13FD63BC830F7F33FCB72E8020559A48A39203D7_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEWEAPON__ctor_mE7F3B061F612EE76C318C507736D03D078E8E680 (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, const RuntimeMethod* method) ;
inline void List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213 (List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set_MY_mDB614BD089FDA259564A3B079DB21959CF60396B_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set_THERE_m897D8AFAFF53B1E4FB47182E1276EF2663AAB61B_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set__world_m746FEE7BA2278BFB21FEF78C2A158586A46AB102_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDAGAMEOVER_get_MY_mDA4A410B292E47E8AF70B83415E77B057A6A8452_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDAGAMEOVER_get_THERE_mB946A2E52ABCE92A005F5C4D920058E677BE6D3A_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set_Current_m65825765DB4EC2DF6366FC4E93AE8182D190B78E_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PDAMESSAGEOFF_set_MY_m3273D96C453EAEDB3E7AF09C2A2D2274FF5E8576_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PDAMESSAGEOFF_set_THERE_m1A07336DD3D30C02554BEA46F76B464542A0E430_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PDAMESSAGEOFF_set__world_mBABBD9BBAEA4A7032C0FFCA81C45CC83661FC0DB_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PDAMESSAGEOFF_get_MY_m7AA9C09B02028FFC41C82120C25B16EF40452994_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PDAMESSAGEOFF_get_THERE_m7451E6E0B7E27172ECE267F46109F89446DE27C8_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWWEAPON__ctor_m10112909615282BE73D82296C8A4E36231C295CD (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDOFLEVEL__ctor_m38A99CE3219D7292F2047E5A82BE6FDF35D76E2A (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPEATMUSIC_set_MY_m7CB550FE526258DCABC236BE6E982A52E1C44D5E_inline (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPEATMUSIC_set_THERE_mA0872F60EBBC1F0DEF57D437D78E22BD3A6E1A51_inline (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPEATMUSIC_set__world_m1A77505F29C1DDD4FE5AD98FE30B9529AF07E52D_inline (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPEATMUSIC_get__world_mA6AE373909CCBEA0FAA10527EFF61A41ACA3C8FB_inline (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETSOUNDVOL_set_MY_m65A99CBB916529325C93F9C5F379055D90D954FD_inline (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETSOUNDVOL_set_THERE_mF506D2935706B328517B14551B79887198D70C40_inline (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETSOUNDVOL_set__world_mD0BA6FEB93132F86A7C1469E12230848608B10E0_inline (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SETSOUNDVOL_get__world_m40C84DBEDC491D29EAAB7C41675B8491DB7D5A6F_inline (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOUSE_TOGGLE_set_MY_m7FD02CA6FD917ADD9C7FA9D0D21922948EA9F960_inline (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOUSE_TOGGLE_set_THERE_m825576062A98EDFA45D3AFC9D61D2A0C910342CA_inline (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOUSE_TOGGLE_set__world_m255DB775C45850AF6E81C7D7BB194535FC1925E5_inline (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MOUSE_TOGGLE_get__world_m48AEB2BA620EAC65D9B1AA05C973A123B7A2F288_inline (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SCAN_OBJ_set_MY_m15BE4726451AD6F2445F3707D027545147DBBAB0_inline (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SCAN_OBJ_set_THERE_m466095617BD65BD32A59DDBA7FF2516DD3210096_inline (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SCAN_OBJ_set__world_m089FAEDAC3FFB51F594CF45D7E30ACD59F3F40AC_inline (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY1_set_MY_m3017F54D40D2596EEAB47207B827A7BA42995910_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY1_set_THERE_m0AB74752128F3E398B8D484302C72CCB5EDBF26B_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY1_set__world_m77F256F2D3844F57FF105E3C7C423BFB161D29C9_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY1_get_MY_m14E81584D27B15F3E2C9EB5C7C87DA17A4AC00A8_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY1_get__world_mF73C5244ED752E699E22BCFE72E10CCE40B0565A_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY1_get_THERE_m823B4E7B8DD3533344F4DD00F9FAF91DE17A5584_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY2_set_MY_m85E33F21C5D10E806E1D8C33EE5AA5C54899AC69_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY2_set_THERE_m78C151F45293AED07BCF00263E84109774C46818_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY2_set__world_m4CE5C132865282B46DA79D72E74DA24A48C914DE_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY2_get_MY_mF4BF4229BF6FF5A64F6CCF7A3D7DE4B42B1885AE_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY2_get__world_mDFB51ECAE0162BA5D7A6D43AA09E45E94F5925E3_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY2_get_THERE_mEF3CE8275FB4DAACB941EBFC1D50A9EAC74738B8_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPLOCALMP5_set_MY_m612F6D212DCC322839627CAA01E285EFDE1CBC94_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPLOCALMP5_set_THERE_m2C78775F6658818CC2623B10B46C6ED4BAFE4CD1_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPLOCALMP5_set__world_m8D0070BB90D88599438CF2DB6D8FB1425EFB862E_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPMP5__ctor_m2E2DB8B07BB588612F5378E57F6E5D0FDFED2E8E (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPLOCALMP5_get_MY_mA9C7A8C5D33F2EE7242527E905AED48106368280_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPLOCALMP5_get_THERE_m325965C8F285A423C1BD781B5BA23A04EC128AF2_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPLOCALMP5_get__world_mCD7ECD792058E3F871C3E9F87D103FFF60080278_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDPHASE_set_MY_m1AD1EEC1FE2AC0986892CAFA82793C663AD84AD4_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDPHASE_set_THERE_mCA2ECC076AE20C100124547F506BB69A51A29A8E_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDPHASE_set__world_mDF8AA195379FB34DE9DCB9396B3F976C0A03CFDD_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDPHASE_get__world_m5A82849C2C37134DE80626F2DE9802E85D824878_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDPHASE_get_MY_mFA2D59E510AA391B59A32617D7A8BEE170974A60_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDABRIEFING__ctor_m85066EB3F6155ACA96FD1F97DF8B12BE4683C913 (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDPHASE_get_THERE_m0012FD34F2D107D631FB809C345FBDD59632340E_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTURN_set_MY_mA923BECBF50B0E01BE2E3D3935B34814C1FF3348_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTURN_set_THERE_mC5E940D2F1D1C897265A9E2E346F2B81CC1BD9DF_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTURN_set__world_mA9A3239DC7D10C929E8775D49BE62965776AE924_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLISTEN__ctor_m2B65F7F011FDAE58B2EAE5E8B2B3E0B3959BC6F3 (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLTURN_get_MY_m6ABD140CDA26AF33D825E861E8FB774F6CCE30C8_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLTURN_get_THERE_m7B7CCFEB7E3BAA1E9DFD30E1394C3F26442610F2_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TURNRIGHT__ctor_mAD82B12963F20823A2CFE3E007E94496A56C8353 (TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TURNLEFT__ctor_m361003A6CB36C1059716F979D3822771D39CD395 (TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWAIT_set_MY_m0263A93B77DC2B3AB4C51EBAE73EF03E8848FB31_inline (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWAIT_set_THERE_m6DC367E037AB88D31046EE53689A77CCE2445694_inline (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWAIT_set__world_mB55DC5478EE0D7F6F5CD36C8167D21027DAE1A7C_inline (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLWAIT_get__world_m487170D31C9932109D6E292E15456A106B6945DF_inline (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWANDER_set_MY_m00176394F14408AEE96DA3C562DEFEFC9A06BEB6_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWANDER_set_THERE_m72F305A4E933B31C5C991A8AF053A40949C184C5_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWANDER_set__world_m8C7DC54D12B51DCC7CECC212CE0D84F88825A9BC_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLWANDER_get__world_m7E49C615139C77DDFBF5980BD92D6AA4371DA6FF_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLWANDER_get_THERE_m9A1FE047806F5B164B41D3482280DD711578342C_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSEARCH_set_MY_m2C2D80C9474DB900A7FBF07E6399FE25DB482439_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSEARCH_set_THERE_mC11856FBC19B2077D5A0641075A90A93918369DD_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSEARCH_set__world_m750BC843823DE2F7B3A310C94B8D0BD40C8C7125_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLSEARCH_get_THERE_m5FFD36A9A0679E8FEBF82FC14C8461E98CD264D6_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWAIT__ctor_m8BAB37DB1D838558EB3A52AE4EC89D99D3DE1705 (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK__ctor_m321A738364A5B7E7FCE9F3684787C52F7C3B76B1 (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIDE_set_MY_mDBF84DE6A841C7EFC6D6C46C306D398D08A7752D_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIDE_set_THERE_m11A4A9D26F753955795874989CC67D270D2A95A8_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIDE_set__world_m262EC28723EB4F317C1448816C943AF1FC71FBEE_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIDE_get_THERE_m47AF3245DB1E5C4242055F823AD3C1FFDC1E9822_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIDE_set_Current_mD470036FE8B3ED7B768E39E56C8DC4F1E229EFB6_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWANDER__ctor_m87BC0E7CD5879BA412FDDB320AFF374F21ECF1AD (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLISTEN_set_MY_m775C1CC2F0E4EF76C1187CCDFD69BE93F3146C5F_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLISTEN_set_THERE_mCDD4EE556FAF554CF095E6E9A83E78B5BD962775_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLISTEN_set__world_mB55685A08976C9076F4A8E0C23C6131A4EB0BA87_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLISTEN_get__world_m67AB444A15CA0D3AF8C8E07FA19B6116C94A0B35_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLISTEN_set_Current_m615B0E8B6502997D2B30BAE7D9654B3CFEFEEB3E_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLISTEN_get_THERE_m9427596E9C4BFD0E15C2495580F0C37399C9FE2A_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLJUMP_set_MY_mAB50B51F792717D5687A0B0B1EF1C17DF0E75D2F_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLJUMP_set_THERE_m847CD5634B351BD4E990FD9456F3A44A8086B9FF_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLJUMP_set__world_m6B4ADF895CF1D70A1249B451FD89DE8D321DC4D2_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLJUMP_get_THERE_m08B26502D4740B9633220D0C233E7D854DB65B3B_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLJUMP_get__world_mCF35B443CA36D3A27047FADF71065723EAA39D22_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLOOKFOR_set_MY_m31CB5504BC827998152153E790DD918EB34D96B9_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLOOKFOR_set_THERE_mF20CA9E93BA2E906D82AB632912EEF689ADF66D0_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLOOKFOR_set__world_m360E33A7D06925D2FC841B74037AA56CF49C6EAF_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLOOKFOR_get_THERE_m50CA84B226C3D2C5B56A7A58E01D59785A03E5AD_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHEAR_set_MY_m2D782F3BC3DA5E62EFB38BDC892693F5C085D0F7_inline (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHEAR_set_THERE_m0AEB688A67F91D44F8A7C4BA5431B205473DF32C_inline (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHEAR_set__world_mEA742B135C42B4198D28F78262BEFF55D8A2AC2D_inline (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHEAR_get__world_m0AF465C30A1A793653D0C82E139B79FD372ABF55_inline (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHEAR_get_MY_m836EBC07AD78367B0274CD47E9573EDADD751CD1_inline (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDOWN_set_MY_m3ED1794DE5D3493BFE46A8E95DE0C70F433D9D18_inline (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDOWN_set_THERE_m72418400F6FE617923FF107FE09FEB49F1926F0E_inline (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDOWN_set__world_m196E14F1070C930C744C900C2E09C3E35B3D3E3C_inline (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDOWN_get__world_m962A79B3B6B7BA11B5A98DB74068163C4FBDF6DA_inline (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDOWN_get_MY_mD06A816677F047B999136C3AD07F05347C1252E1_inline (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK_set_MY_m796754BF5CAFC6C1DA19118EB31CF280580C57C1_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK_set_THERE_m0B5AF339087E7C45B0C37B1B6BBE3353C43306C0_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK_set__world_mB27C9A3AEB71E16D9AE70F5BBBA6B3F51F2EDEC5_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLFOLLOWATTACK_get_THERE_mFBCB23C9A03B92ED753CBFB24A8ECE2372C951D6_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0 (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSHOOT_set_MY_m1F1FEF2F85417342BB78463405AE97FC78C2AC3A_inline (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSHOOT_set_THERE_m764C11CF7005ECE1D3731E0597D9576623FFD190_inline (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSHOOT_set__world_mAA44003B5A9E298AE2093DC7BF4B551CD66A66CE_inline (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590_inline (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLSHOOT_get__world_mDC50DCA76428E38A9A262226C157680D7F3F6885_inline (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLESCAPE_set_MY_mF60FE76417CA5E9574A3960704C8A0E3A592B873_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLESCAPE_set_THERE_mEFEDBA735EBAE7F008DA63F479350A6173FED2F6_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLESCAPE_set__world_mF2870894E9A36FEFB4D4CB595FE2C43C7DC38903_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLESCAPE_get_THERE_m6B92313A2E5A08615850881ACA33F78397037EE4_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934 (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDEAD_set_MY_mCC2910DC1DD5D165D7A06E4A654D61854A2D7B99_inline (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDEAD_set_THERE_m3F8E02B68FBC3216FB3BD651967350841F4CE8D4_inline (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDEAD_set__world_m4F00FAB6846DC605C629D4284DA786F19A1117FE_inline (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDEAD_get__world_m95456679C098879BA83A2FAD2014941DD30950C2_inline (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDIE_set_MY_m0A494CBCD83236C56296C4A21C07AD0024E2C638_inline (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDIE_set_THERE_m8E0123BE6D8B053E7BFD8F8895FE8C7F725271E1_inline (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDIE_set__world_m1ADAB60B0F7F09F892437A2644323705EA0240C1_inline (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDIE_get__world_mC47A5A83E020269023E5FE6E9C7C493B9A61F4CB_inline (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTGRANADE_get_MY_m7236DC3DD56B5A416A415A99F9E4312642C1FBA6 (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTGRANADE_set_MY_m00CEFC30058D6D21E081EFA320B9473491F0951D (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTGRANADE_get_THERE_mB08DB1BA570DBBDF00014E56DAE648D1FD8EB5A1 (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTGRANADE_set_THERE_mD6AD4EDED85BC54CEABD299B520BE4AABA4DFBBD (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTGRANADE_set__world_m5A5D264B63E6B5F96FDCE4D664B0C80574AF0E0C (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTGRANADE_get_Current_mB5A454CDBDFFD290774085F5F31B155A6FE7ECB6 (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTGRANADE_set_Current_m949107A7B43DAF6069476FCA4CEB6EA9B95036BC (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTGRANADE_Reset_mFBEFB2F10F348B210ECD60F9820B3F3EAEC2B8F8 (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTGRANADE__ctor_mC8D0AA11765EB0AA18B2CBBD9C35CE09FA83CA57 (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTGRANADE__ctor_mF3D195BDAD2B932E68FDE5451AC4BC0F5C3764DB (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SELECTGRANADE_set_MY_m00CEFC30058D6D21E081EFA320B9473491F0951D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SELECTGRANADE_set_THERE_mD6AD4EDED85BC54CEABD299B520BE4AABA4DFBBD_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SELECTGRANADE_set__world_m5A5D264B63E6B5F96FDCE4D664B0C80574AF0E0C_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SELECTGRANADE_MoveNext_mF802AF26BF959C259A637A965BACFDB1B4F3673C (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_1 = NULL;
	TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* V_2 = NULL;
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
				goto IL_026a;
			}
			case 1:
			{
				goto IL_04e1;
			}
			case 2:
			{
				goto IL_0606;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
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
		L_8 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
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
		L_13 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_12, (3.0f), NULL);
		if (!L_13)
		{
			goto IL_009f;
		}
	}
	{
		return (bool)0;
	}

IL_009f:
	{
		RuntimeObject* L_14;
		L_14 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, 5, ((int32_t)40123194));
		__this->___HAS_GRANADE_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_GRANADE_5), (void*)L_15);
		RuntimeObject* L_16 = __this->___HAS_GRANADE_5;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)231), (bool)1);
		__this->___HAS_GRANADE_5_val = L_17;
		float L_18 = __this->___HAS_GRANADE_5_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_18, (0.0f), NULL);
		if (!L_19)
		{
			goto IL_014c;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)665745664), (bool)1, (bool)1);
		__this->___WRN03STR_6 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN03STR_6), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		RuntimeObject* L_24 = __this->___WRN03STR_6;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, ((int32_t)361798934), L_24);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_25 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_25, NULL);
		V_1 = L_25;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_26 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_27 = L_26;
		RuntimeObject* L_28;
		L_28 = SELECTGRANADE_get_MY_m7236DC3DD56B5A416A415A99F9E4312642C1FBA6_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_28);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_29 = L_27;
		RuntimeObject* L_30;
		L_30 = SELECTGRANADE_get_THERE_mB08DB1BA570DBBDF00014E56DAE648D1FD8EB5A1_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		RuntimeObject* L_31;
		L_31 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_31);
		RuntimeObject* L_32;
		L_32 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_33 = V_1;
		NullCheck(L_32);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_33);
		return (bool)0;
	}

IL_014c:
	{
		RuntimeObject* L_35;
		L_35 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_9 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_9), (void*)L_36);
		RuntimeObject* L_37 = __this->___WEAPONSEL_9;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (3.0f));
		RuntimeObject* L_38;
		L_38 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_40;
		L_40 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)97), (RuntimeObject*)NULL);
		RuntimeObject* L_42;
		L_42 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)104), (RuntimeObject*)NULL);
		RuntimeObject* L_44;
		L_44 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)39), (RuntimeObject*)NULL);
		RuntimeObject* L_46;
		L_46 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)92), (RuntimeObject*)NULL);
		RuntimeObject* L_48;
		L_48 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)40), (RuntimeObject*)NULL);
		RuntimeObject* L_50;
		L_50 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)41), (RuntimeObject*)NULL);
		RuntimeObject* L_52;
		L_52 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)42), (RuntimeObject*)NULL);
		RuntimeObject* L_54;
		L_54 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)43), (RuntimeObject*)NULL);
		RuntimeObject* L_56;
		L_56 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)44), (RuntimeObject*)NULL);
	}

IL_0236:
	{
		float L_58;
		L_58 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_58;
		float L_59 = __this->___startTime1;
		float L_60;
		L_60 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_59, L_60));
		__this->____cursor = 1;
		goto IL_026a;
	}

IL_025d:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_61 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTGRANADE_set_Current_m949107A7B43DAF6069476FCA4CEB6EA9B95036BC_inline(__this, L_61, NULL);
		return (bool)1;
	}

IL_026a:
	{
		float L_62;
		L_62 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_63 = __this->___endTime1;
		if ((((float)L_62) < ((float)L_63)))
		{
			goto IL_025d;
		}
	}
	{
		SELECTGRANADE_set_Current_m949107A7B43DAF6069476FCA4CEB6EA9B95036BC_inline(__this, NULL, NULL);
		RuntimeObject* L_64;
		L_64 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
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
			goto IL_0236;
		}
	}
	{
		RuntimeObject* L_70;
		L_70 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_70, 5, ((int32_t)-691764920));
		__this->___AMMO_GRANADE_34 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AMMO_GRANADE_34), (void*)L_71);
		RuntimeObject* L_72 = __this->___AMMO_GRANADE_34;
		NullCheck(L_72);
		float L_73;
		L_73 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)231), (bool)1);
		__this->___AMMO_GRANADE_34_val = L_73;
		float L_74 = __this->___AMMO_GRANADE_34_val;
		bool L_75;
		L_75 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_74, (1.0f), NULL);
		if (L_75)
		{
			goto IL_0795;
		}
	}
	{
		RuntimeObject* L_76;
		L_76 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_76, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_36 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_36), (void*)L_77);
		RuntimeObject* L_78 = __this->___MY_GUN_36;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_78, (RuntimeObject*)NULL, NULL);
		if (L_79)
		{
			goto IL_036c;
		}
	}
	{
		RuntimeObject* L_80;
		L_80 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_80, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_39 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_39), (void*)L_81);
		RuntimeObject* L_82 = __this->___MY_GUN_39;
		NullCheck(L_82);
		float L_83;
		L_83 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_82, ((int32_t)204), (bool)1);
		__this->___temp_40 = L_83;
		float L_84 = __this->___temp_40;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_85;
		L_85 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_84, (1.0f), NULL);
		if (!L_85)
		{
			goto IL_0236;
		}
	}

IL_036c:
	{
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_86 = (TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A*)il2cpp_codegen_object_new(TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A_il2cpp_TypeInfo_var);
		TARGETOFF__ctor_mADB3318ADA9DFCAC4F053B73F0CE4BE26016FFC7(L_86, NULL);
		V_2 = L_86;
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_87 = V_2;
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_88 = L_87;
		RuntimeObject* L_89;
		L_89 = SELECTGRANADE_get_MY_m7236DC3DD56B5A416A415A99F9E4312642C1FBA6_inline(__this, NULL);
		NullCheck(L_88);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_88, L_89);
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_90 = L_88;
		RuntimeObject* L_91;
		L_91 = SELECTGRANADE_get_THERE_mB08DB1BA570DBBDF00014E56DAE648D1FD8EB5A1_inline(__this, NULL);
		NullCheck(L_90);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_90, L_91);
		RuntimeObject* L_92;
		L_92 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_90);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_90, L_92);
		RuntimeObject* L_93;
		L_93 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		TARGETOFF_tC432EE30AC00349AC1988295FB2C541C7E61DA7A* L_94 = V_2;
		NullCheck(L_93);
		RuntimeObject* L_95;
		L_95 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_93, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_94);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_96 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_96, NULL);
		V_3 = L_96;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_97 = V_3;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_98 = L_97;
		RuntimeObject* L_99;
		L_99 = SELECTGRANADE_get_MY_m7236DC3DD56B5A416A415A99F9E4312642C1FBA6_inline(__this, NULL);
		NullCheck(L_98);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_98, L_99);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_100 = L_98;
		RuntimeObject* L_101;
		L_101 = SELECTGRANADE_get_THERE_mB08DB1BA570DBBDF00014E56DAE648D1FD8EB5A1_inline(__this, NULL);
		NullCheck(L_100);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_100, L_101);
		RuntimeObject* L_102;
		L_102 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_100);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_100, L_102);
		RuntimeObject* L_103;
		L_103 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_104 = V_3;
		NullCheck(L_103);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_103, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_104);
		RuntimeObject* L_106;
		L_106 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_106, 5, ((int32_t)380));
		__this->___MAP_MODE_42 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_42), (void*)L_107);
		RuntimeObject* L_108 = __this->___MAP_MODE_42;
		NullCheck(L_108);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_108, ((int32_t)231), (0.0f));
		RuntimeObject* L_109;
		L_109 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_109);
		RuntimeObject* L_110;
		L_110 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_109);
		NullCheck(L_110);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)158), (RuntimeObject*)NULL);
		RuntimeObject* L_111;
		L_111 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_111);
		RuntimeObject* L_112;
		L_112 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_111, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_47 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_47), (void*)L_112);
		RuntimeObject* L_113 = __this->___MY_GUN_47;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_114;
		L_114 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_113, (RuntimeObject*)NULL, NULL);
		if (L_114)
		{
			goto IL_0538;
		}
	}
	{
		RuntimeObject* L_115;
		L_115 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_115);
		RuntimeObject* L_116;
		L_116 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_115, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_50 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_50), (void*)L_116);
		RuntimeObject* L_117 = __this->___MY_GUN_50;
		NullCheck(L_117);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_117, ((int32_t)204), (0.0f));
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_118 = (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2*)il2cpp_codegen_object_new(LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var);
		LOWER__ctor_m2CCAB60402636B5DDB62FD9BD5FF9D7F3EEBBE55(L_118, NULL);
		V_4 = L_118;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_119 = V_4;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_120 = L_119;
		RuntimeObject* L_121;
		L_121 = SELECTGRANADE_get_MY_m7236DC3DD56B5A416A415A99F9E4312642C1FBA6_inline(__this, NULL);
		NullCheck(L_120);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_120, L_121);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_122 = L_120;
		RuntimeObject* L_123;
		L_123 = SELECTGRANADE_get_THERE_mB08DB1BA570DBBDF00014E56DAE648D1FD8EB5A1_inline(__this, NULL);
		NullCheck(L_122);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_122, L_123);
		RuntimeObject* L_124;
		L_124 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_122);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_122, L_124);
		RuntimeObject* L_125;
		L_125 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_126 = V_4;
		NullCheck(L_125);
		RuntimeObject* L_127;
		L_127 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_125, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_126);
	}

IL_04ad:
	{
		float L_128;
		L_128 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_128;
		float L_129 = __this->___startTime2;
		float L_130;
		L_130 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(2, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_129, L_130));
		__this->____cursor = 2;
		goto IL_04e1;
	}

IL_04d4:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_131 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTGRANADE_set_Current_m949107A7B43DAF6069476FCA4CEB6EA9B95036BC_inline(__this, L_131, NULL);
		return (bool)1;
	}

IL_04e1:
	{
		float L_132;
		L_132 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_133 = __this->___endTime2;
		if ((((float)L_132) < ((float)L_133)))
		{
			goto IL_04d4;
		}
	}
	{
		SELECTGRANADE_set_Current_m949107A7B43DAF6069476FCA4CEB6EA9B95036BC_inline(__this, NULL, NULL);
		RuntimeObject* L_134;
		L_134 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_134);
		RuntimeObject* L_135;
		L_135 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_134, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_54 = L_135;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_54), (void*)L_135);
		RuntimeObject* L_136 = __this->___MY_GUN_54;
		NullCheck(L_136);
		float L_137;
		L_137 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_136, ((int32_t)204), (bool)1);
		__this->___temp_55 = L_137;
		float L_138 = __this->___temp_55;
		bool L_139;
		L_139 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_138, (1.0f), NULL);
		if (L_139)
		{
			goto IL_04ad;
		}
	}

IL_0538:
	{
		RuntimeObject* L_140;
		L_140 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_140);
		RuntimeObject* L_141;
		L_141 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_140);
		NullCheck(L_141);
		RuntimeObject* L_142;
		L_142 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)556898861), (bool)1, (bool)1);
		__this->___GRANACT_56 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRANACT_56), (void*)L_142);
		RuntimeObject* L_143;
		L_143 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		RuntimeObject* L_144 = __this->___GRANACT_56;
		NullCheck(L_143);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_143, ((int32_t)-1040443588), L_144);
		RuntimeObject* L_145;
		L_145 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_145);
		RuntimeObject* L_146;
		L_146 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_145, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_60 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_60), (void*)L_146);
		RuntimeObject* L_147 = __this->___MY_GUN_60;
		NullCheck(L_147);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_147, ((int32_t)204), (0.0f));
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_148 = (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8*)il2cpp_codegen_object_new(RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		RAISE__ctor_mC9CDF6F146498172B72D6E63718BA1D065CC3E95(L_148, NULL);
		V_5 = L_148;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_149 = V_5;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_150 = L_149;
		RuntimeObject* L_151;
		L_151 = SELECTGRANADE_get_MY_m7236DC3DD56B5A416A415A99F9E4312642C1FBA6_inline(__this, NULL);
		NullCheck(L_150);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_150, L_151);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_152 = L_150;
		RuntimeObject* L_153;
		L_153 = SELECTGRANADE_get_THERE_mB08DB1BA570DBBDF00014E56DAE648D1FD8EB5A1_inline(__this, NULL);
		NullCheck(L_152);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_152, L_153);
		RuntimeObject* L_154;
		L_154 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_152);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_152, L_154);
		RuntimeObject* L_155;
		L_155 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_156 = V_5;
		NullCheck(L_155);
		RuntimeObject* L_157;
		L_157 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_155, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_156);
	}

IL_05d2:
	{
		float L_158;
		L_158 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_158;
		float L_159 = __this->___startTime3;
		float L_160;
		L_160 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_159, L_160));
		__this->____cursor = 3;
		goto IL_0606;
	}

IL_05f9:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_161 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTGRANADE_set_Current_m949107A7B43DAF6069476FCA4CEB6EA9B95036BC_inline(__this, L_161, NULL);
		return (bool)1;
	}

IL_0606:
	{
		float L_162;
		L_162 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_163 = __this->___endTime3;
		if ((((float)L_162) < ((float)L_163)))
		{
			goto IL_05f9;
		}
	}
	{
		SELECTGRANADE_set_Current_m949107A7B43DAF6069476FCA4CEB6EA9B95036BC_inline(__this, NULL, NULL);
		RuntimeObject* L_164;
		L_164 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_164);
		RuntimeObject* L_165;
		L_165 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_164, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_64 = L_165;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_64), (void*)L_165);
		RuntimeObject* L_166 = __this->___MY_GUN_64;
		NullCheck(L_166);
		float L_167;
		L_167 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_166, ((int32_t)204), (bool)1);
		__this->___temp_65 = L_167;
		float L_168 = __this->___temp_65;
		bool L_169;
		L_169 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_168, (1.0f), NULL);
		if (L_169)
		{
			goto IL_05d2;
		}
	}
	{
		RuntimeObject* L_170;
		L_170 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_170);
		RuntimeObject* L_171;
		L_171 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_170);
		NullCheck(L_171);
		RuntimeObject* L_172;
		L_172 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_171, ((int32_t)850536902), (bool)1, (bool)1);
		__this->___GRAN00OVL_66 = L_172;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GRAN00OVL_66), (void*)L_172);
		RuntimeObject* L_173;
		L_173 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_173);
		RuntimeObject* L_174;
		L_174 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_173);
		RuntimeObject* L_175 = __this->___GRAN00OVL_66;
		NullCheck(L_174);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_174, ((int32_t)158), L_175);
		RuntimeObject* L_176;
		L_176 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_176);
		RuntimeObject* L_177;
		L_177 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_176);
		NullCheck(L_177);
		RuntimeObject* L_178;
		L_178 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_177, ((int32_t)236450049), (bool)1, (bool)1);
		__this->___THROW_69 = L_178;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___THROW_69), (void*)L_178);
		RuntimeObject* L_179;
		L_179 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_179);
		RuntimeObject* L_180;
		L_180 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_179);
		RuntimeObject* L_181 = __this->___THROW_69;
		NullCheck(L_180);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_180, ((int32_t)78), L_181);
		RuntimeObject* L_182;
		L_182 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_182);
		RuntimeObject* L_183;
		L_183 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_182);
		NullCheck(L_183);
		RuntimeObject* L_184;
		L_184 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_183, ((int32_t)236450049), (bool)1, (bool)1);
		__this->___THROW_71 = L_184;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___THROW_71), (void*)L_184);
		RuntimeObject* L_185;
		L_185 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_185);
		RuntimeObject* L_187 = __this->___THROW_71;
		NullCheck(L_186);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_186, ((int32_t)97), L_187);
		RuntimeObject* L_188;
		L_188 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_188);
		RuntimeObject* L_189;
		L_189 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_188, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_74 = L_189;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_74), (void*)L_189);
		RuntimeObject* L_190 = __this->___GUN_ON_74;
		NullCheck(L_190);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_190, ((int32_t)231), (1.0f));
		RuntimeObject* L_191;
		L_191 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_191);
		RuntimeObject* L_192;
		L_192 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_191, 5, ((int32_t)361));
		__this->___RENDER_MODE_76 = L_192;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RENDER_MODE_76), (void*)L_192);
		RuntimeObject* L_193 = __this->___RENDER_MODE_76;
		NullCheck(L_193);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_193, ((int32_t)231), (1.0f));
		RuntimeObject* L_194;
		L_194 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_194);
		RuntimeObject* L_195;
		L_195 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_194);
		NullCheck(L_195);
		RuntimeObject* L_196;
		L_196 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_195, ((int32_t)-535041724), (bool)1, (bool)1);
		__this->___MP_501SND_77 = L_196;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MP_501SND_77), (void*)L_196);
		RuntimeObject* L_197;
		L_197 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		RuntimeObject* L_198 = __this->___MP_501SND_77;
		NullCheck(L_197);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_197, L_198, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
	}

IL_0795:
	{
		RuntimeObject* L_199;
		L_199 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_199);
		RuntimeObject* L_200;
		L_200 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_199);
		NullCheck(L_200);
		RuntimeObject* L_201;
		L_201 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_200, ((int32_t)-109360261), (bool)1, (bool)1);
		__this->___SELECTTRICORDER_79 = L_201;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTTRICORDER_79), (void*)L_201);
		RuntimeObject* L_202;
		L_202 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_202);
		RuntimeObject* L_203;
		L_203 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_202);
		RuntimeObject* L_204 = __this->___SELECTTRICORDER_79;
		NullCheck(L_203);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_203, ((int32_t)104), L_204);
		RuntimeObject* L_205;
		L_205 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_205);
		RuntimeObject* L_206;
		L_206 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_205);
		NullCheck(L_206);
		RuntimeObject* L_207;
		L_207 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_206, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_81 = L_207;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_81), (void*)L_207);
		RuntimeObject* L_208;
		L_208 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_208);
		RuntimeObject* L_209;
		L_209 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_208);
		RuntimeObject* L_210 = __this->___SELECTNONE_81;
		NullCheck(L_209);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_209, ((int32_t)39), L_210);
		RuntimeObject* L_211;
		L_211 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_211);
		RuntimeObject* L_212;
		L_212 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_211);
		NullCheck(L_212);
		RuntimeObject* L_213;
		L_213 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_212, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_83 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_83), (void*)L_213);
		RuntimeObject* L_214;
		L_214 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_214);
		RuntimeObject* L_215;
		L_215 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_214);
		RuntimeObject* L_216 = __this->___SELECTNONE_83;
		NullCheck(L_215);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_215, ((int32_t)92), L_216);
		RuntimeObject* L_217;
		L_217 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_217);
		RuntimeObject* L_218;
		L_218 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_217);
		NullCheck(L_218);
		RuntimeObject* L_219;
		L_219 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_218, ((int32_t)-463643937), (bool)1, (bool)1);
		__this->___SELECTMP5_85 = L_219;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5_85), (void*)L_219);
		RuntimeObject* L_220;
		L_220 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_220);
		RuntimeObject* L_221;
		L_221 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_220);
		RuntimeObject* L_222 = __this->___SELECTMP5_85;
		NullCheck(L_221);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_221, ((int32_t)40), L_222);
		RuntimeObject* L_223;
		L_223 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_223);
		RuntimeObject* L_224;
		L_224 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_223);
		NullCheck(L_224);
		RuntimeObject* L_225;
		L_225 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_224, ((int32_t)120038031), (bool)1, (bool)1);
		__this->___SELECTMP5BURST_87 = L_225;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5BURST_87), (void*)L_225);
		RuntimeObject* L_226;
		L_226 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_226);
		RuntimeObject* L_227;
		L_227 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_226);
		RuntimeObject* L_228 = __this->___SELECTMP5BURST_87;
		NullCheck(L_227);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_227, ((int32_t)41), L_228);
		RuntimeObject* L_229;
		L_229 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_229);
		RuntimeObject* L_230;
		L_230 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_229);
		NullCheck(L_230);
		RuntimeObject* L_231;
		L_231 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_230, ((int32_t)677375039), (bool)1, (bool)1);
		__this->___SELECTGRANADE_89 = L_231;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTGRANADE_89), (void*)L_231);
		RuntimeObject* L_232;
		L_232 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_232);
		RuntimeObject* L_233;
		L_233 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_232);
		RuntimeObject* L_234 = __this->___SELECTGRANADE_89;
		NullCheck(L_233);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_233, ((int32_t)42), L_234);
		RuntimeObject* L_235;
		L_235 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_235);
		RuntimeObject* L_236;
		L_236 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_235);
		NullCheck(L_236);
		RuntimeObject* L_237;
		L_237 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_236, ((int32_t)-917113783), (bool)1, (bool)1);
		__this->___SELECTSTINGER_91 = L_237;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTSTINGER_91), (void*)L_237);
		RuntimeObject* L_238;
		L_238 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_238);
		RuntimeObject* L_239;
		L_239 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_238);
		RuntimeObject* L_240 = __this->___SELECTSTINGER_91;
		NullCheck(L_239);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_239, ((int32_t)43), L_240);
		RuntimeObject* L_241;
		L_241 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_241);
		RuntimeObject* L_242;
		L_242 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_241);
		NullCheck(L_242);
		RuntimeObject* L_243;
		L_243 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_242, ((int32_t)824580280), (bool)1, (bool)1);
		__this->___SELECTQUANTUM_93 = L_243;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTQUANTUM_93), (void*)L_243);
		RuntimeObject* L_244;
		L_244 = SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline(__this, NULL);
		NullCheck(L_244);
		RuntimeObject* L_245;
		L_245 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_244);
		RuntimeObject* L_246 = __this->___SELECTQUANTUM_93;
		NullCheck(L_245);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_245, ((int32_t)44), L_246);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTSTINGER_get_MY_mFE40B59F31C31B1093FA1665E4D46A9F807AB035 (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTSTINGER_set_MY_m3CD2208F8F6A9F64458DFC5553F6B26DEB2BCA69 (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTSTINGER_get_THERE_mEBAC00357932E7B1960C75C646C092243860D84B (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTSTINGER_set_THERE_m81AE916FCBF6C65ABB988F798E74BF5E31BD9EE7 (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0 (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTSTINGER_set__world_mFD9E58202C5E4359E56E957036BA79081D0097FE (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTSTINGER_get_Current_mCA8355A21E9CD3C3AFCB40C35B13BA536BCCA625 (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTSTINGER_set_Current_m75B7B18207FFDC373B056613F3F58D049F84474A (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTSTINGER_Reset_m9881CEAB42D5A494631FFBCC74D41F99B1E24360 (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTSTINGER__ctor_m49968978A40DC25E5587097774FAFAD9F8A6ED15 (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTSTINGER__ctor_m81A40E175B29D4961FB7DAD89E99891A1F1052AE (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SELECTSTINGER_set_MY_m3CD2208F8F6A9F64458DFC5553F6B26DEB2BCA69_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SELECTSTINGER_set_THERE_m81AE916FCBF6C65ABB988F798E74BF5E31BD9EE7_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SELECTSTINGER_set__world_mFD9E58202C5E4359E56E957036BA79081D0097FE_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SELECTSTINGER_MoveNext_m51BA7D8214D60EE0AA69FC05A159EB0CA0E86C60 (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) 
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
				goto IL_026a;
			}
			case 1:
			{
				goto IL_04ca;
			}
			case 2:
			{
				goto IL_05ef;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
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
		L_8 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
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
		L_13 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_12, (4.0f), NULL);
		if (!L_13)
		{
			goto IL_009f;
		}
	}
	{
		return (bool)0;
	}

IL_009f:
	{
		RuntimeObject* L_14;
		L_14 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, 5, ((int32_t)-1554365628));
		__this->___HAS_STINGER_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_STINGER_5), (void*)L_15);
		RuntimeObject* L_16 = __this->___HAS_STINGER_5;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)231), (bool)1);
		__this->___HAS_STINGER_5_val = L_17;
		float L_18 = __this->___HAS_STINGER_5_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_18, (0.0f), NULL);
		if (!L_19)
		{
			goto IL_014c;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)665745664), (bool)1, (bool)1);
		__this->___WRN03STR_6 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN03STR_6), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		RuntimeObject* L_24 = __this->___WRN03STR_6;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, ((int32_t)361798934), L_24);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_25 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_25, NULL);
		V_1 = L_25;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_26 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_27 = L_26;
		RuntimeObject* L_28;
		L_28 = SELECTSTINGER_get_MY_mFE40B59F31C31B1093FA1665E4D46A9F807AB035_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_28);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_29 = L_27;
		RuntimeObject* L_30;
		L_30 = SELECTSTINGER_get_THERE_mEBAC00357932E7B1960C75C646C092243860D84B_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		RuntimeObject* L_31;
		L_31 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_31);
		RuntimeObject* L_32;
		L_32 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_33 = V_1;
		NullCheck(L_32);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_33);
		return (bool)0;
	}

IL_014c:
	{
		RuntimeObject* L_35;
		L_35 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_9 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_9), (void*)L_36);
		RuntimeObject* L_37 = __this->___WEAPONSEL_9;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (4.0f));
		RuntimeObject* L_38;
		L_38 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_40;
		L_40 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)97), (RuntimeObject*)NULL);
		RuntimeObject* L_42;
		L_42 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)104), (RuntimeObject*)NULL);
		RuntimeObject* L_44;
		L_44 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)39), (RuntimeObject*)NULL);
		RuntimeObject* L_46;
		L_46 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)92), (RuntimeObject*)NULL);
		RuntimeObject* L_48;
		L_48 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)40), (RuntimeObject*)NULL);
		RuntimeObject* L_50;
		L_50 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)41), (RuntimeObject*)NULL);
		RuntimeObject* L_52;
		L_52 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)42), (RuntimeObject*)NULL);
		RuntimeObject* L_54;
		L_54 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)43), (RuntimeObject*)NULL);
		RuntimeObject* L_56;
		L_56 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)44), (RuntimeObject*)NULL);
	}

IL_0236:
	{
		float L_58;
		L_58 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_58;
		float L_59 = __this->___startTime1;
		float L_60;
		L_60 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_59, L_60));
		__this->____cursor = 1;
		goto IL_026a;
	}

IL_025d:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_61 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTSTINGER_set_Current_m75B7B18207FFDC373B056613F3F58D049F84474A_inline(__this, L_61, NULL);
		return (bool)1;
	}

IL_026a:
	{
		float L_62;
		L_62 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_63 = __this->___endTime1;
		if ((((float)L_62) < ((float)L_63)))
		{
			goto IL_025d;
		}
	}
	{
		SELECTSTINGER_set_Current_m75B7B18207FFDC373B056613F3F58D049F84474A_inline(__this, NULL, NULL);
		RuntimeObject* L_64;
		L_64 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
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
			goto IL_0236;
		}
	}
	{
		RuntimeObject* L_70;
		L_70 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
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
			goto IL_0329;
		}
	}
	{
		RuntimeObject* L_74;
		L_74 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
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
			goto IL_0236;
		}
	}

IL_0329:
	{
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_80 = (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33*)il2cpp_codegen_object_new(TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33_il2cpp_TypeInfo_var);
		TARGETON__ctor_m515D11DEBB4E550106AF681B3007629ABBCD5FAA(L_80, NULL);
		V_2 = L_80;
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_81 = V_2;
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_82 = L_81;
		RuntimeObject* L_83;
		L_83 = SELECTSTINGER_get_MY_mFE40B59F31C31B1093FA1665E4D46A9F807AB035_inline(__this, NULL);
		NullCheck(L_82);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_82, L_83);
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_84 = L_82;
		RuntimeObject* L_85;
		L_85 = SELECTSTINGER_get_THERE_mEBAC00357932E7B1960C75C646C092243860D84B_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_85);
		RuntimeObject* L_86;
		L_86 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_86);
		RuntimeObject* L_87;
		L_87 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_88 = V_2;
		NullCheck(L_87);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_87, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_88);
		RuntimeObject* L_90;
		L_90 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_90);
		RuntimeObject* L_91;
		L_91 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_90, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_40 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_40), (void*)L_91);
		RuntimeObject* L_92 = __this->___WEAPONSEL_40;
		NullCheck(L_92);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)231), (4.0f));
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_93 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_93, NULL);
		V_3 = L_93;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_94 = V_3;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_95 = L_94;
		RuntimeObject* L_96;
		L_96 = SELECTSTINGER_get_MY_mFE40B59F31C31B1093FA1665E4D46A9F807AB035_inline(__this, NULL);
		NullCheck(L_95);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_95, L_96);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_97 = L_95;
		RuntimeObject* L_98;
		L_98 = SELECTSTINGER_get_THERE_mEBAC00357932E7B1960C75C646C092243860D84B_inline(__this, NULL);
		NullCheck(L_97);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_97, L_98);
		RuntimeObject* L_99;
		L_99 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_97);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_97, L_99);
		RuntimeObject* L_100;
		L_100 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_101 = V_3;
		NullCheck(L_100);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_100, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_101);
		RuntimeObject* L_103;
		L_103 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_103, 5, ((int32_t)380));
		__this->___MAP_MODE_42 = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_42), (void*)L_104);
		RuntimeObject* L_105 = __this->___MAP_MODE_42;
		NullCheck(L_105);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_105, ((int32_t)231), (0.0f));
		RuntimeObject* L_106;
		L_106 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_106);
		NullCheck(L_107);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)158), (RuntimeObject*)NULL);
		RuntimeObject* L_108;
		L_108 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_108);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_108, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_47 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_47), (void*)L_109);
		RuntimeObject* L_110 = __this->___MY_GUN_47;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_110, (RuntimeObject*)NULL, NULL);
		if (L_111)
		{
			goto IL_0521;
		}
	}
	{
		RuntimeObject* L_112;
		L_112 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_112);
		RuntimeObject* L_113;
		L_113 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_112, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_50 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_50), (void*)L_113);
		RuntimeObject* L_114 = __this->___MY_GUN_50;
		NullCheck(L_114);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)204), (0.0f));
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_115 = (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2*)il2cpp_codegen_object_new(LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var);
		LOWER__ctor_m2CCAB60402636B5DDB62FD9BD5FF9D7F3EEBBE55(L_115, NULL);
		V_4 = L_115;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_116 = V_4;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_117 = L_116;
		RuntimeObject* L_118;
		L_118 = SELECTSTINGER_get_MY_mFE40B59F31C31B1093FA1665E4D46A9F807AB035_inline(__this, NULL);
		NullCheck(L_117);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_117, L_118);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_119 = L_117;
		RuntimeObject* L_120;
		L_120 = SELECTSTINGER_get_THERE_mEBAC00357932E7B1960C75C646C092243860D84B_inline(__this, NULL);
		NullCheck(L_119);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_119, L_120);
		RuntimeObject* L_121;
		L_121 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_119);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_119, L_121);
		RuntimeObject* L_122;
		L_122 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_123 = V_4;
		NullCheck(L_122);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_122, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_123);
	}

IL_0496:
	{
		float L_125;
		L_125 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_125;
		float L_126 = __this->___startTime2;
		float L_127;
		L_127 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(2, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_126, L_127));
		__this->____cursor = 2;
		goto IL_04ca;
	}

IL_04bd:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_128 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTSTINGER_set_Current_m75B7B18207FFDC373B056613F3F58D049F84474A_inline(__this, L_128, NULL);
		return (bool)1;
	}

IL_04ca:
	{
		float L_129;
		L_129 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_130 = __this->___endTime2;
		if ((((float)L_129) < ((float)L_130)))
		{
			goto IL_04bd;
		}
	}
	{
		SELECTSTINGER_set_Current_m75B7B18207FFDC373B056613F3F58D049F84474A_inline(__this, NULL, NULL);
		RuntimeObject* L_131;
		L_131 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_131);
		RuntimeObject* L_132;
		L_132 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_131, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_54 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_54), (void*)L_132);
		RuntimeObject* L_133 = __this->___MY_GUN_54;
		NullCheck(L_133);
		float L_134;
		L_134 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)204), (bool)1);
		__this->___temp_55 = L_134;
		float L_135 = __this->___temp_55;
		bool L_136;
		L_136 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_135, (1.0f), NULL);
		if (L_136)
		{
			goto IL_0496;
		}
	}

IL_0521:
	{
		RuntimeObject* L_137;
		L_137 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_137);
		RuntimeObject* L_138;
		L_138 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_137);
		NullCheck(L_138);
		RuntimeObject* L_139;
		L_139 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_138, ((int32_t)-1031918495), (bool)1, (bool)1);
		__this->___STNGACT_56 = L_139;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STNGACT_56), (void*)L_139);
		RuntimeObject* L_140;
		L_140 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		RuntimeObject* L_141 = __this->___STNGACT_56;
		NullCheck(L_140);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_140, ((int32_t)-1040443588), L_141);
		RuntimeObject* L_142;
		L_142 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_142);
		RuntimeObject* L_143;
		L_143 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_142, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_60 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_60), (void*)L_143);
		RuntimeObject* L_144 = __this->___MY_GUN_60;
		NullCheck(L_144);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_144, ((int32_t)204), (0.0f));
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_145 = (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8*)il2cpp_codegen_object_new(RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		RAISE__ctor_mC9CDF6F146498172B72D6E63718BA1D065CC3E95(L_145, NULL);
		V_5 = L_145;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_146 = V_5;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_147 = L_146;
		RuntimeObject* L_148;
		L_148 = SELECTSTINGER_get_MY_mFE40B59F31C31B1093FA1665E4D46A9F807AB035_inline(__this, NULL);
		NullCheck(L_147);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_147, L_148);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_149 = L_147;
		RuntimeObject* L_150;
		L_150 = SELECTSTINGER_get_THERE_mEBAC00357932E7B1960C75C646C092243860D84B_inline(__this, NULL);
		NullCheck(L_149);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_149, L_150);
		RuntimeObject* L_151;
		L_151 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_149);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_149, L_151);
		RuntimeObject* L_152;
		L_152 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_153 = V_5;
		NullCheck(L_152);
		RuntimeObject* L_154;
		L_154 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_152, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_153);
	}

IL_05bb:
	{
		float L_155;
		L_155 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_155;
		float L_156 = __this->___startTime3;
		float L_157;
		L_157 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_156, L_157));
		__this->____cursor = 3;
		goto IL_05ef;
	}

IL_05e2:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_158 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTSTINGER_set_Current_m75B7B18207FFDC373B056613F3F58D049F84474A_inline(__this, L_158, NULL);
		return (bool)1;
	}

IL_05ef:
	{
		float L_159;
		L_159 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_160 = __this->___endTime3;
		if ((((float)L_159) < ((float)L_160)))
		{
			goto IL_05e2;
		}
	}
	{
		SELECTSTINGER_set_Current_m75B7B18207FFDC373B056613F3F58D049F84474A_inline(__this, NULL, NULL);
		RuntimeObject* L_161;
		L_161 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_161);
		RuntimeObject* L_162;
		L_162 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_161, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_64 = L_162;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_64), (void*)L_162);
		RuntimeObject* L_163 = __this->___MY_GUN_64;
		NullCheck(L_163);
		float L_164;
		L_164 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_163, ((int32_t)204), (bool)1);
		__this->___temp_65 = L_164;
		float L_165 = __this->___temp_65;
		bool L_166;
		L_166 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_165, (1.0f), NULL);
		if (L_166)
		{
			goto IL_05bb;
		}
	}
	{
		RuntimeObject* L_167;
		L_167 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_167);
		RuntimeObject* L_168;
		L_168 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_167);
		NullCheck(L_168);
		RuntimeObject* L_169;
		L_169 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_168, ((int32_t)1500256506), (bool)1, (bool)1);
		__this->___STNG00OVL_66 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STNG00OVL_66), (void*)L_169);
		RuntimeObject* L_170;
		L_170 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_170);
		RuntimeObject* L_171;
		L_171 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_170);
		RuntimeObject* L_172 = __this->___STNG00OVL_66;
		NullCheck(L_171);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_171, ((int32_t)158), L_172);
		RuntimeObject* L_173;
		L_173 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_173);
		RuntimeObject* L_174;
		L_174 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_173);
		NullCheck(L_174);
		RuntimeObject* L_175;
		L_175 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_174, ((int32_t)-1108393432), (bool)1, (bool)1);
		__this->___LAUNCH_69 = L_175;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAUNCH_69), (void*)L_175);
		RuntimeObject* L_176;
		L_176 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_176);
		RuntimeObject* L_177;
		L_177 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_176);
		RuntimeObject* L_178 = __this->___LAUNCH_69;
		NullCheck(L_177);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_177, ((int32_t)78), L_178);
		RuntimeObject* L_179;
		L_179 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_179);
		RuntimeObject* L_180;
		L_180 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_179);
		NullCheck(L_180);
		RuntimeObject* L_181;
		L_181 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_180, ((int32_t)-1108393432), (bool)1, (bool)1);
		__this->___LAUNCH_71 = L_181;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAUNCH_71), (void*)L_181);
		RuntimeObject* L_182;
		L_182 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_182);
		RuntimeObject* L_183;
		L_183 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_182);
		RuntimeObject* L_184 = __this->___LAUNCH_71;
		NullCheck(L_183);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_183, ((int32_t)97), L_184);
		RuntimeObject* L_185;
		L_185 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_185, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_74 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_74), (void*)L_186);
		RuntimeObject* L_187 = __this->___GUN_ON_74;
		NullCheck(L_187);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_187, ((int32_t)231), (1.0f));
		RuntimeObject* L_188;
		L_188 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_188);
		RuntimeObject* L_189;
		L_189 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_188, 5, ((int32_t)361));
		__this->___RENDER_MODE_76 = L_189;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RENDER_MODE_76), (void*)L_189);
		RuntimeObject* L_190 = __this->___RENDER_MODE_76;
		NullCheck(L_190);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_190, ((int32_t)231), (1.0f));
		RuntimeObject* L_191;
		L_191 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_191);
		RuntimeObject* L_192;
		L_192 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_191);
		NullCheck(L_192);
		RuntimeObject* L_193;
		L_193 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_192, ((int32_t)1500296527), (bool)1, (bool)1);
		__this->___STNG01SND_77 = L_193;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___STNG01SND_77), (void*)L_193);
		RuntimeObject* L_194;
		L_194 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		RuntimeObject* L_195 = __this->___STNG01SND_77;
		NullCheck(L_194);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_194, L_195, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_196;
		L_196 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_196);
		RuntimeObject* L_197;
		L_197 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_196);
		NullCheck(L_197);
		RuntimeObject* L_198;
		L_198 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_197, ((int32_t)-109360261), (bool)1, (bool)1);
		__this->___SELECTTRICORDER_79 = L_198;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTTRICORDER_79), (void*)L_198);
		RuntimeObject* L_199;
		L_199 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_199);
		RuntimeObject* L_200;
		L_200 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_199);
		RuntimeObject* L_201 = __this->___SELECTTRICORDER_79;
		NullCheck(L_200);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_200, ((int32_t)104), L_201);
		RuntimeObject* L_202;
		L_202 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_202);
		RuntimeObject* L_203;
		L_203 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_202);
		NullCheck(L_203);
		RuntimeObject* L_204;
		L_204 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_203, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_81 = L_204;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_81), (void*)L_204);
		RuntimeObject* L_205;
		L_205 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_205);
		RuntimeObject* L_206;
		L_206 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_205);
		RuntimeObject* L_207 = __this->___SELECTNONE_81;
		NullCheck(L_206);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_206, ((int32_t)39), L_207);
		RuntimeObject* L_208;
		L_208 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_208);
		RuntimeObject* L_209;
		L_209 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_208);
		NullCheck(L_209);
		RuntimeObject* L_210;
		L_210 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_209, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_83 = L_210;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_83), (void*)L_210);
		RuntimeObject* L_211;
		L_211 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_211);
		RuntimeObject* L_212;
		L_212 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_211);
		RuntimeObject* L_213 = __this->___SELECTNONE_83;
		NullCheck(L_212);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_212, ((int32_t)92), L_213);
		RuntimeObject* L_214;
		L_214 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_214);
		RuntimeObject* L_215;
		L_215 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_214);
		NullCheck(L_215);
		RuntimeObject* L_216;
		L_216 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_215, ((int32_t)-463643937), (bool)1, (bool)1);
		__this->___SELECTMP5_85 = L_216;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5_85), (void*)L_216);
		RuntimeObject* L_217;
		L_217 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_217);
		RuntimeObject* L_218;
		L_218 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_217);
		RuntimeObject* L_219 = __this->___SELECTMP5_85;
		NullCheck(L_218);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_218, ((int32_t)40), L_219);
		RuntimeObject* L_220;
		L_220 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_220);
		RuntimeObject* L_221;
		L_221 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_220);
		NullCheck(L_221);
		RuntimeObject* L_222;
		L_222 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_221, ((int32_t)120038031), (bool)1, (bool)1);
		__this->___SELECTMP5BURST_87 = L_222;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5BURST_87), (void*)L_222);
		RuntimeObject* L_223;
		L_223 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_223);
		RuntimeObject* L_224;
		L_224 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_223);
		RuntimeObject* L_225 = __this->___SELECTMP5BURST_87;
		NullCheck(L_224);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_224, ((int32_t)41), L_225);
		RuntimeObject* L_226;
		L_226 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_226);
		RuntimeObject* L_227;
		L_227 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_226);
		NullCheck(L_227);
		RuntimeObject* L_228;
		L_228 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_227, ((int32_t)677375039), (bool)1, (bool)1);
		__this->___SELECTGRANADE_89 = L_228;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTGRANADE_89), (void*)L_228);
		RuntimeObject* L_229;
		L_229 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_229);
		RuntimeObject* L_230;
		L_230 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_229);
		RuntimeObject* L_231 = __this->___SELECTGRANADE_89;
		NullCheck(L_230);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_230, ((int32_t)42), L_231);
		RuntimeObject* L_232;
		L_232 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_232);
		RuntimeObject* L_233;
		L_233 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_232);
		NullCheck(L_233);
		RuntimeObject* L_234;
		L_234 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_233, ((int32_t)-917113783), (bool)1, (bool)1);
		__this->___SELECTSTINGER_91 = L_234;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTSTINGER_91), (void*)L_234);
		RuntimeObject* L_235;
		L_235 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_235);
		RuntimeObject* L_236;
		L_236 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_235);
		RuntimeObject* L_237 = __this->___SELECTSTINGER_91;
		NullCheck(L_236);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_236, ((int32_t)43), L_237);
		RuntimeObject* L_238;
		L_238 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_238);
		RuntimeObject* L_239;
		L_239 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_238);
		NullCheck(L_239);
		RuntimeObject* L_240;
		L_240 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_239, ((int32_t)824580280), (bool)1, (bool)1);
		__this->___SELECTQUANTUM_93 = L_240;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTQUANTUM_93), (void*)L_240);
		RuntimeObject* L_241;
		L_241 = SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline(__this, NULL);
		NullCheck(L_241);
		RuntimeObject* L_242;
		L_242 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_241);
		RuntimeObject* L_243 = __this->___SELECTQUANTUM_93;
		NullCheck(L_242);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_242, ((int32_t)44), L_243);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTQUANTUM_get_MY_m6B680135C1F2A6A43D0627E398EA5598BC730F4C (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTQUANTUM_set_MY_m8D3325359CC01DF2EE7A05CC468D4FF17255E4C6 (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTQUANTUM_get_THERE_m79983BE7718EF17114AA1B679341B8CD0FE61AD5 (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTQUANTUM_set_THERE_m0B7E850AC9F3B8124472F0752E2A9400F1022E2B (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTQUANTUM_set__world_m06D4B5E0112E7383B54A751600E76618F702EDD9 (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SELECTQUANTUM_get_Current_m1E20A0642A6C667334019698D4BD34F067143AAF (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTQUANTUM_set_Current_mEE5C863A05E5F44796984C635BA27BC0F604A6DC (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTQUANTUM_Reset_mAC6DA0B0FDE02865747916EC270FE2F30A35EB63 (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTQUANTUM__ctor_m3DA061CD2F6830B261DAE3FE177BF104D341C699 (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SELECTQUANTUM__ctor_mECB396308D6952189C1DCC791F70D94FDBEBD872 (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SELECTQUANTUM_set_MY_m8D3325359CC01DF2EE7A05CC468D4FF17255E4C6_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SELECTQUANTUM_set_THERE_m0B7E850AC9F3B8124472F0752E2A9400F1022E2B_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SELECTQUANTUM_set__world_m06D4B5E0112E7383B54A751600E76618F702EDD9_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SELECTQUANTUM_MoveNext_mF01356C8DF6A3872403BA37C33AC18A9EDCA5C87 (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) 
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
				goto IL_026a;
			}
			case 1:
			{
				goto IL_04ca;
			}
			case 2:
			{
				goto IL_05ef;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
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
		L_8 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
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
		L_13 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_12, (5.0f), NULL);
		if (!L_13)
		{
			goto IL_009f;
		}
	}
	{
		return (bool)0;
	}

IL_009f:
	{
		RuntimeObject* L_14;
		L_14 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, 5, ((int32_t)187328435));
		__this->___HAS_QUANTUM_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HAS_QUANTUM_5), (void*)L_15);
		RuntimeObject* L_16 = __this->___HAS_QUANTUM_5;
		NullCheck(L_16);
		float L_17;
		L_17 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)231), (bool)1);
		__this->___HAS_QUANTUM_5_val = L_17;
		float L_18 = __this->___HAS_QUANTUM_5_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_18, (0.0f), NULL);
		if (!L_19)
		{
			goto IL_014c;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)665745664), (bool)1, (bool)1);
		__this->___WRN03STR_6 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WRN03STR_6), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		RuntimeObject* L_24 = __this->___WRN03STR_6;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, ((int32_t)361798934), L_24);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_25 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_25, NULL);
		V_1 = L_25;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_26 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_27 = L_26;
		RuntimeObject* L_28;
		L_28 = SELECTQUANTUM_get_MY_m6B680135C1F2A6A43D0627E398EA5598BC730F4C_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_28);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_29 = L_27;
		RuntimeObject* L_30;
		L_30 = SELECTQUANTUM_get_THERE_m79983BE7718EF17114AA1B679341B8CD0FE61AD5_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		RuntimeObject* L_31;
		L_31 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_31);
		RuntimeObject* L_32;
		L_32 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_33 = V_1;
		NullCheck(L_32);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_33);
		return (bool)0;
	}

IL_014c:
	{
		RuntimeObject* L_35;
		L_35 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_9 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_9), (void*)L_36);
		RuntimeObject* L_37 = __this->___WEAPONSEL_9;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (5.0f));
		RuntimeObject* L_38;
		L_38 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_40;
		L_40 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)97), (RuntimeObject*)NULL);
		RuntimeObject* L_42;
		L_42 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)104), (RuntimeObject*)NULL);
		RuntimeObject* L_44;
		L_44 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)39), (RuntimeObject*)NULL);
		RuntimeObject* L_46;
		L_46 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)92), (RuntimeObject*)NULL);
		RuntimeObject* L_48;
		L_48 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)40), (RuntimeObject*)NULL);
		RuntimeObject* L_50;
		L_50 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)41), (RuntimeObject*)NULL);
		RuntimeObject* L_52;
		L_52 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)42), (RuntimeObject*)NULL);
		RuntimeObject* L_54;
		L_54 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)43), (RuntimeObject*)NULL);
		RuntimeObject* L_56;
		L_56 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)44), (RuntimeObject*)NULL);
	}

IL_0236:
	{
		float L_58;
		L_58 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_58;
		float L_59 = __this->___startTime1;
		float L_60;
		L_60 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_59, L_60));
		__this->____cursor = 1;
		goto IL_026a;
	}

IL_025d:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_61 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTQUANTUM_set_Current_mEE5C863A05E5F44796984C635BA27BC0F604A6DC_inline(__this, L_61, NULL);
		return (bool)1;
	}

IL_026a:
	{
		float L_62;
		L_62 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_63 = __this->___endTime1;
		if ((((float)L_62) < ((float)L_63)))
		{
			goto IL_025d;
		}
	}
	{
		SELECTQUANTUM_set_Current_mEE5C863A05E5F44796984C635BA27BC0F604A6DC_inline(__this, NULL, NULL);
		RuntimeObject* L_64;
		L_64 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
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
			goto IL_0236;
		}
	}
	{
		RuntimeObject* L_70;
		L_70 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
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
			goto IL_0329;
		}
	}
	{
		RuntimeObject* L_74;
		L_74 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
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
			goto IL_0236;
		}
	}

IL_0329:
	{
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_80 = (TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33*)il2cpp_codegen_object_new(TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33_il2cpp_TypeInfo_var);
		TARGETON__ctor_m515D11DEBB4E550106AF681B3007629ABBCD5FAA(L_80, NULL);
		V_2 = L_80;
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_81 = V_2;
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_82 = L_81;
		RuntimeObject* L_83;
		L_83 = SELECTQUANTUM_get_MY_m6B680135C1F2A6A43D0627E398EA5598BC730F4C_inline(__this, NULL);
		NullCheck(L_82);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_82, L_83);
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_84 = L_82;
		RuntimeObject* L_85;
		L_85 = SELECTQUANTUM_get_THERE_m79983BE7718EF17114AA1B679341B8CD0FE61AD5_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_85);
		RuntimeObject* L_86;
		L_86 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_86);
		RuntimeObject* L_87;
		L_87 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		TARGETON_t33A4BF077EA5C6811811096E3423FB1FF72AAD33* L_88 = V_2;
		NullCheck(L_87);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_87, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_88);
		RuntimeObject* L_90;
		L_90 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_90);
		RuntimeObject* L_91;
		L_91 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_90, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_40 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_40), (void*)L_91);
		RuntimeObject* L_92 = __this->___WEAPONSEL_40;
		NullCheck(L_92);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)231), (5.0f));
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_93 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_93, NULL);
		V_3 = L_93;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_94 = V_3;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_95 = L_94;
		RuntimeObject* L_96;
		L_96 = SELECTQUANTUM_get_MY_m6B680135C1F2A6A43D0627E398EA5598BC730F4C_inline(__this, NULL);
		NullCheck(L_95);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_95, L_96);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_97 = L_95;
		RuntimeObject* L_98;
		L_98 = SELECTQUANTUM_get_THERE_m79983BE7718EF17114AA1B679341B8CD0FE61AD5_inline(__this, NULL);
		NullCheck(L_97);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_97, L_98);
		RuntimeObject* L_99;
		L_99 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_97);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_97, L_99);
		RuntimeObject* L_100;
		L_100 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_101 = V_3;
		NullCheck(L_100);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_100, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_101);
		RuntimeObject* L_103;
		L_103 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_103, 5, ((int32_t)380));
		__this->___MAP_MODE_42 = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_42), (void*)L_104);
		RuntimeObject* L_105 = __this->___MAP_MODE_42;
		NullCheck(L_105);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_105, ((int32_t)231), (0.0f));
		RuntimeObject* L_106;
		L_106 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_106);
		NullCheck(L_107);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)158), (RuntimeObject*)NULL);
		RuntimeObject* L_108;
		L_108 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_108);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_108, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_47 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_47), (void*)L_109);
		RuntimeObject* L_110 = __this->___MY_GUN_47;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_110, (RuntimeObject*)NULL, NULL);
		if (L_111)
		{
			goto IL_0521;
		}
	}
	{
		RuntimeObject* L_112;
		L_112 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_112);
		RuntimeObject* L_113;
		L_113 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_112, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_50 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_50), (void*)L_113);
		RuntimeObject* L_114 = __this->___MY_GUN_50;
		NullCheck(L_114);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)204), (0.0f));
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_115 = (LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2*)il2cpp_codegen_object_new(LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2_il2cpp_TypeInfo_var);
		LOWER__ctor_m2CCAB60402636B5DDB62FD9BD5FF9D7F3EEBBE55(L_115, NULL);
		V_4 = L_115;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_116 = V_4;
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_117 = L_116;
		RuntimeObject* L_118;
		L_118 = SELECTQUANTUM_get_MY_m6B680135C1F2A6A43D0627E398EA5598BC730F4C_inline(__this, NULL);
		NullCheck(L_117);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_117, L_118);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_119 = L_117;
		RuntimeObject* L_120;
		L_120 = SELECTQUANTUM_get_THERE_m79983BE7718EF17114AA1B679341B8CD0FE61AD5_inline(__this, NULL);
		NullCheck(L_119);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_119, L_120);
		RuntimeObject* L_121;
		L_121 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_119);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_119, L_121);
		RuntimeObject* L_122;
		L_122 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		LOWER_t79CED2138BAFC52230049D09C2EAA1916B0E18F2* L_123 = V_4;
		NullCheck(L_122);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_122, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_123);
	}

IL_0496:
	{
		float L_125;
		L_125 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_125;
		float L_126 = __this->___startTime2;
		float L_127;
		L_127 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(2, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_126, L_127));
		__this->____cursor = 2;
		goto IL_04ca;
	}

IL_04bd:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_128 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTQUANTUM_set_Current_mEE5C863A05E5F44796984C635BA27BC0F604A6DC_inline(__this, L_128, NULL);
		return (bool)1;
	}

IL_04ca:
	{
		float L_129;
		L_129 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_130 = __this->___endTime2;
		if ((((float)L_129) < ((float)L_130)))
		{
			goto IL_04bd;
		}
	}
	{
		SELECTQUANTUM_set_Current_mEE5C863A05E5F44796984C635BA27BC0F604A6DC_inline(__this, NULL, NULL);
		RuntimeObject* L_131;
		L_131 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_131);
		RuntimeObject* L_132;
		L_132 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_131, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_54 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_54), (void*)L_132);
		RuntimeObject* L_133 = __this->___MY_GUN_54;
		NullCheck(L_133);
		float L_134;
		L_134 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)204), (bool)1);
		__this->___temp_55 = L_134;
		float L_135 = __this->___temp_55;
		bool L_136;
		L_136 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_135, (1.0f), NULL);
		if (L_136)
		{
			goto IL_0496;
		}
	}

IL_0521:
	{
		RuntimeObject* L_137;
		L_137 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_137);
		RuntimeObject* L_138;
		L_138 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_137);
		NullCheck(L_138);
		RuntimeObject* L_139;
		L_139 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_138, ((int32_t)179905760), (bool)1, (bool)1);
		__this->___QGUNACT_56 = L_139;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUNACT_56), (void*)L_139);
		RuntimeObject* L_140;
		L_140 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		RuntimeObject* L_141 = __this->___QGUNACT_56;
		NullCheck(L_140);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_140, ((int32_t)-1040443588), L_141);
		RuntimeObject* L_142;
		L_142 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_142);
		RuntimeObject* L_143;
		L_143 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_142, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_60 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_60), (void*)L_143);
		RuntimeObject* L_144 = __this->___MY_GUN_60;
		NullCheck(L_144);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_144, ((int32_t)204), (0.0f));
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_145 = (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8*)il2cpp_codegen_object_new(RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		RAISE__ctor_mC9CDF6F146498172B72D6E63718BA1D065CC3E95(L_145, NULL);
		V_5 = L_145;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_146 = V_5;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_147 = L_146;
		RuntimeObject* L_148;
		L_148 = SELECTQUANTUM_get_MY_m6B680135C1F2A6A43D0627E398EA5598BC730F4C_inline(__this, NULL);
		NullCheck(L_147);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_147, L_148);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_149 = L_147;
		RuntimeObject* L_150;
		L_150 = SELECTQUANTUM_get_THERE_m79983BE7718EF17114AA1B679341B8CD0FE61AD5_inline(__this, NULL);
		NullCheck(L_149);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_149, L_150);
		RuntimeObject* L_151;
		L_151 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_149);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_149, L_151);
		RuntimeObject* L_152;
		L_152 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_153 = V_5;
		NullCheck(L_152);
		RuntimeObject* L_154;
		L_154 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_152, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_153);
	}

IL_05bb:
	{
		float L_155;
		L_155 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_155;
		float L_156 = __this->___startTime3;
		float L_157;
		L_157 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_156, L_157));
		__this->____cursor = 3;
		goto IL_05ef;
	}

IL_05e2:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_158 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SELECTQUANTUM_set_Current_mEE5C863A05E5F44796984C635BA27BC0F604A6DC_inline(__this, L_158, NULL);
		return (bool)1;
	}

IL_05ef:
	{
		float L_159;
		L_159 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_160 = __this->___endTime3;
		if ((((float)L_159) < ((float)L_160)))
		{
			goto IL_05e2;
		}
	}
	{
		SELECTQUANTUM_set_Current_mEE5C863A05E5F44796984C635BA27BC0F604A6DC_inline(__this, NULL, NULL);
		RuntimeObject* L_161;
		L_161 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_161);
		RuntimeObject* L_162;
		L_162 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_161, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_64 = L_162;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_64), (void*)L_162);
		RuntimeObject* L_163 = __this->___MY_GUN_64;
		NullCheck(L_163);
		float L_164;
		L_164 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_163, ((int32_t)204), (bool)1);
		__this->___temp_65 = L_164;
		float L_165 = __this->___temp_65;
		bool L_166;
		L_166 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_165, (1.0f), NULL);
		if (L_166)
		{
			goto IL_05bb;
		}
	}
	{
		RuntimeObject* L_167;
		L_167 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_167);
		RuntimeObject* L_168;
		L_168 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_167);
		NullCheck(L_168);
		RuntimeObject* L_169;
		L_169 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_168, ((int32_t)-1673056967), (bool)1, (bool)1);
		__this->___QGUN00OVL_66 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN00OVL_66), (void*)L_169);
		RuntimeObject* L_170;
		L_170 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_170);
		RuntimeObject* L_171;
		L_171 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_170);
		RuntimeObject* L_172 = __this->___QGUN00OVL_66;
		NullCheck(L_171);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_171, ((int32_t)158), L_172);
		RuntimeObject* L_173;
		L_173 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_173);
		RuntimeObject* L_174;
		L_174 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_173);
		NullCheck(L_174);
		RuntimeObject* L_175;
		L_175 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_174, ((int32_t)2088923810), (bool)1, (bool)1);
		__this->___BEAM_69 = L_175;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BEAM_69), (void*)L_175);
		RuntimeObject* L_176;
		L_176 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_176);
		RuntimeObject* L_177;
		L_177 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_176);
		RuntimeObject* L_178 = __this->___BEAM_69;
		NullCheck(L_177);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_177, ((int32_t)78), L_178);
		RuntimeObject* L_179;
		L_179 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_179);
		RuntimeObject* L_180;
		L_180 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_179);
		NullCheck(L_180);
		RuntimeObject* L_181;
		L_181 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_180, ((int32_t)2088923810), (bool)1, (bool)1);
		__this->___BEAM_71 = L_181;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BEAM_71), (void*)L_181);
		RuntimeObject* L_182;
		L_182 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_182);
		RuntimeObject* L_183;
		L_183 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_182);
		RuntimeObject* L_184 = __this->___BEAM_71;
		NullCheck(L_183);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_183, ((int32_t)97), L_184);
		RuntimeObject* L_185;
		L_185 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_185, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_74 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_74), (void*)L_186);
		RuntimeObject* L_187 = __this->___GUN_ON_74;
		NullCheck(L_187);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_187, ((int32_t)231), (1.0f));
		RuntimeObject* L_188;
		L_188 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_188);
		RuntimeObject* L_189;
		L_189 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_188, 5, ((int32_t)361));
		__this->___RENDER_MODE_76 = L_189;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RENDER_MODE_76), (void*)L_189);
		RuntimeObject* L_190 = __this->___RENDER_MODE_76;
		NullCheck(L_190);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_190, ((int32_t)231), (1.0f));
		RuntimeObject* L_191;
		L_191 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_191);
		RuntimeObject* L_192;
		L_192 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_191);
		NullCheck(L_192);
		RuntimeObject* L_193;
		L_193 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_192, ((int32_t)-1673016946), (bool)1, (bool)1);
		__this->___QGUN01SND_77 = L_193;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN01SND_77), (void*)L_193);
		RuntimeObject* L_194;
		L_194 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		RuntimeObject* L_195 = __this->___QGUN01SND_77;
		NullCheck(L_194);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_194, L_195, (0.400000006f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_196;
		L_196 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_196);
		RuntimeObject* L_197;
		L_197 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_196);
		NullCheck(L_197);
		RuntimeObject* L_198;
		L_198 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_197, ((int32_t)-109360261), (bool)1, (bool)1);
		__this->___SELECTTRICORDER_79 = L_198;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTTRICORDER_79), (void*)L_198);
		RuntimeObject* L_199;
		L_199 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_199);
		RuntimeObject* L_200;
		L_200 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_199);
		RuntimeObject* L_201 = __this->___SELECTTRICORDER_79;
		NullCheck(L_200);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_200, ((int32_t)104), L_201);
		RuntimeObject* L_202;
		L_202 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_202);
		RuntimeObject* L_203;
		L_203 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_202);
		NullCheck(L_203);
		RuntimeObject* L_204;
		L_204 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_203, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_81 = L_204;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_81), (void*)L_204);
		RuntimeObject* L_205;
		L_205 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_205);
		RuntimeObject* L_206;
		L_206 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_205);
		RuntimeObject* L_207 = __this->___SELECTNONE_81;
		NullCheck(L_206);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_206, ((int32_t)39), L_207);
		RuntimeObject* L_208;
		L_208 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_208);
		RuntimeObject* L_209;
		L_209 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_208);
		NullCheck(L_209);
		RuntimeObject* L_210;
		L_210 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_209, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_83 = L_210;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_83), (void*)L_210);
		RuntimeObject* L_211;
		L_211 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_211);
		RuntimeObject* L_212;
		L_212 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_211);
		RuntimeObject* L_213 = __this->___SELECTNONE_83;
		NullCheck(L_212);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_212, ((int32_t)92), L_213);
		RuntimeObject* L_214;
		L_214 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_214);
		RuntimeObject* L_215;
		L_215 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_214);
		NullCheck(L_215);
		RuntimeObject* L_216;
		L_216 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_215, ((int32_t)-463643937), (bool)1, (bool)1);
		__this->___SELECTMP5_85 = L_216;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5_85), (void*)L_216);
		RuntimeObject* L_217;
		L_217 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_217);
		RuntimeObject* L_218;
		L_218 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_217);
		RuntimeObject* L_219 = __this->___SELECTMP5_85;
		NullCheck(L_218);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_218, ((int32_t)40), L_219);
		RuntimeObject* L_220;
		L_220 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_220);
		RuntimeObject* L_221;
		L_221 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_220);
		NullCheck(L_221);
		RuntimeObject* L_222;
		L_222 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_221, ((int32_t)120038031), (bool)1, (bool)1);
		__this->___SELECTMP5BURST_87 = L_222;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5BURST_87), (void*)L_222);
		RuntimeObject* L_223;
		L_223 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_223);
		RuntimeObject* L_224;
		L_224 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_223);
		RuntimeObject* L_225 = __this->___SELECTMP5BURST_87;
		NullCheck(L_224);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_224, ((int32_t)41), L_225);
		RuntimeObject* L_226;
		L_226 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_226);
		RuntimeObject* L_227;
		L_227 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_226);
		NullCheck(L_227);
		RuntimeObject* L_228;
		L_228 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_227, ((int32_t)677375039), (bool)1, (bool)1);
		__this->___SELECTGRANADE_89 = L_228;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTGRANADE_89), (void*)L_228);
		RuntimeObject* L_229;
		L_229 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_229);
		RuntimeObject* L_230;
		L_230 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_229);
		RuntimeObject* L_231 = __this->___SELECTGRANADE_89;
		NullCheck(L_230);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_230, ((int32_t)42), L_231);
		RuntimeObject* L_232;
		L_232 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_232);
		RuntimeObject* L_233;
		L_233 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_232);
		NullCheck(L_233);
		RuntimeObject* L_234;
		L_234 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_233, ((int32_t)-917113783), (bool)1, (bool)1);
		__this->___SELECTSTINGER_91 = L_234;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTSTINGER_91), (void*)L_234);
		RuntimeObject* L_235;
		L_235 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_235);
		RuntimeObject* L_236;
		L_236 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_235);
		RuntimeObject* L_237 = __this->___SELECTSTINGER_91;
		NullCheck(L_236);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_236, ((int32_t)43), L_237);
		RuntimeObject* L_238;
		L_238 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_238);
		RuntimeObject* L_239;
		L_239 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_238);
		NullCheck(L_239);
		RuntimeObject* L_240;
		L_240 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_239, ((int32_t)824580280), (bool)1, (bool)1);
		__this->___SELECTQUANTUM_93 = L_240;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTQUANTUM_93), (void*)L_240);
		RuntimeObject* L_241;
		L_241 = SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline(__this, NULL);
		NullCheck(L_241);
		RuntimeObject* L_242;
		L_242 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_241);
		RuntimeObject* L_243 = __this->___SELECTQUANTUM_93;
		NullCheck(L_242);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_242, ((int32_t)44), L_243);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPIN_get_MY_m7070F912A40B46911FB2E74BB70442F8AEEF3457 (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPIN_set_MY_mE1D4DAE0AF9CA3533599F6F83D40087A98E35A15 (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPIN_get_THERE_m8E60313CA8A4206BBA331BB5B4ED124DAA9BAB7E (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPIN_set_THERE_mF06923BBFB92EC8A74BAE5C0D0BE0DF932FD6491 (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPIN_get__world_m9B22B216430898828C41EC561308CF5383709D84 (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPIN_set__world_m22F556FA32817B9EC3736647D4DFF966E848CEA8 (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPIN_get_Current_mA429C32300F1CE036C9C3A2FFD754B65EF50F78E (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPIN_set_Current_mFBC34E06C35C2FBD1D1EF78C1DF98EE0727CDBE0 (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPIN_Reset_m22601248922946DAB77465DAC366DB83DBFB9894 (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPIN__ctor_m4CEA47017B4BAF1EE241FA0E343AC3CB724A0C35 (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPIN__ctor_m9DB2D97346CBC3A9309E97D1AA17341CC4A9E056 (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		ZOOMMAPIN_set_MY_mE1D4DAE0AF9CA3533599F6F83D40087A98E35A15_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		ZOOMMAPIN_set_THERE_mF06923BBFB92EC8A74BAE5C0D0BE0DF932FD6491_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		ZOOMMAPIN_set__world_m22F556FA32817B9EC3736647D4DFF966E848CEA8_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZOOMMAPIN_MoveNext_m03CA36C0911411AA786074D5A3D041F2064DFB01 (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0154;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = ZOOMMAPIN_get__world_m9B22B216430898828C41EC561308CF5383709D84_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)380));
		__this->___MAP_MODE_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___MAP_MODE_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___MAP_MODE_1_val = L_4;
		float L_5 = __this->___MAP_MODE_1_val;
		bool L_6;
		L_6 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_5, (0.100000001f), NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_004e:
	{
		RuntimeObject* L_7;
		L_7 = ZOOMMAPIN_get__world_m9B22B216430898828C41EC561308CF5383709D84_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)379));
		__this->___MAP_SCALE_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_SCALE_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___MAP_SCALE_3;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___MAP_SCALE_3_val = L_10;
		float L_11 = __this->___MAP_SCALE_3_val;
		bool L_12;
		L_12 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_11, (20.0f), NULL);
		if (!L_12)
		{
			goto IL_0120;
		}
	}
	{
		RuntimeObject* L_13;
		L_13 = ZOOMMAPIN_get__world_m9B22B216430898828C41EC561308CF5383709D84_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)379));
		__this->___MAP_SCALE_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_SCALE_4), (void*)L_14);
		RuntimeObject* L_15;
		L_15 = ZOOMMAPIN_get__world_m9B22B216430898828C41EC561308CF5383709D84_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)379));
		__this->___MAP_SCALE_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_SCALE_5), (void*)L_16);
		RuntimeObject* L_17 = __this->___MAP_SCALE_5;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (bool)1);
		__this->___MAP_SCALE_5_val = L_18;
		RuntimeObject* L_19;
		L_19 = ZOOMMAPIN_get__world_m9B22B216430898828C41EC561308CF5383709D84_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)379));
		__this->___MAP_SCALE_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_SCALE_6), (void*)L_20);
		RuntimeObject* L_21 = __this->___MAP_SCALE_6;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), (bool)1);
		__this->___MAP_SCALE_6_val = L_22;
		RuntimeObject* L_23 = __this->___MAP_SCALE_4;
		float L_24 = __this->___MAP_SCALE_6_val;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), ((float)il2cpp_codegen_multiply(L_24, (1.10000002f))));
	}

IL_0120:
	{
		float L_25;
		L_25 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_25;
		float L_26 = __this->___startTime1;
		float L_27;
		L_27 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_26, L_27));
		__this->____cursor = 1;
		goto IL_0154;
	}

IL_0147:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_28 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		ZOOMMAPIN_set_Current_mFBC34E06C35C2FBD1D1EF78C1DF98EE0727CDBE0_inline(__this, L_28, NULL);
		return (bool)1;
	}

IL_0154:
	{
		float L_29;
		L_29 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_30 = __this->___endTime1;
		if ((((float)L_29) < ((float)L_30)))
		{
			goto IL_0147;
		}
	}
	{
		ZOOMMAPIN_set_Current_mFBC34E06C35C2FBD1D1EF78C1DF98EE0727CDBE0_inline(__this, NULL, NULL);
		RuntimeObject* L_31;
		L_31 = ZOOMMAPIN_get__world_m9B22B216430898828C41EC561308CF5383709D84_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, 5, ((int32_t)541));
		__this->___KEY_INS_11 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_INS_11), (void*)L_32);
		RuntimeObject* L_33 = __this->___KEY_INS_11;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)231), (bool)1);
		__this->___KEY_INS_11_val = L_34;
		float L_35 = __this->___KEY_INS_11_val;
		bool L_36;
		L_36 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_35, (0.0f), NULL);
		if (L_36)
		{
			goto IL_004e;
		}
	}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPOUT_get_MY_mCC7B38CADFE359B75C7AC7B0EBB09205DA82B8D7 (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set_MY_m95808AA57B335735DC3FAEEE28064E53787FDF56 (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPOUT_get_THERE_m52C9FC445F86A83973BE41266DE962043CF3619D (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set_THERE_mD0DFE7F969C2CFD1B340CD0F90415ED0B7E662EA (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPOUT_get__world_m60943875030437202490B4A4347867F74CDFCEBE (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set__world_m3B84D2C7902555789D8B52201531D704780B4875 (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPOUT_get_Current_m537B98900B0A0FF394A35339A49BDA6070893553 (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set_Current_m8B695B97C6902775E3B601944A15446FD693C613 (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPOUT_Reset_mDC3F50E8A4F8924EB85A09112687DEE4B2A613F2 (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPOUT__ctor_m4C6EA18859788FE954CB2045D0C2ABA5CFC872CC (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOOMMAPOUT__ctor_m604498F719853997C2C22BC2A1DBAC52405ABB73 (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		ZOOMMAPOUT_set_MY_m95808AA57B335735DC3FAEEE28064E53787FDF56_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		ZOOMMAPOUT_set_THERE_mD0DFE7F969C2CFD1B340CD0F90415ED0B7E662EA_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		ZOOMMAPOUT_set__world_m3B84D2C7902555789D8B52201531D704780B4875_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZOOMMAPOUT_MoveNext_m812CD033D1C0507158CBC724FBEE54370DB02B1C (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0154;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = ZOOMMAPOUT_get__world_m60943875030437202490B4A4347867F74CDFCEBE_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)380));
		__this->___MAP_MODE_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___MAP_MODE_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___MAP_MODE_1_val = L_4;
		float L_5 = __this->___MAP_MODE_1_val;
		bool L_6;
		L_6 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_5, (0.100000001f), NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_004e:
	{
		RuntimeObject* L_7;
		L_7 = ZOOMMAPOUT_get__world_m60943875030437202490B4A4347867F74CDFCEBE_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)379));
		__this->___MAP_SCALE_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_SCALE_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___MAP_SCALE_3;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___MAP_SCALE_3_val = L_10;
		float L_11 = __this->___MAP_SCALE_3_val;
		bool L_12;
		L_12 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_11, (1.0f), NULL);
		if (!L_12)
		{
			goto IL_0120;
		}
	}
	{
		RuntimeObject* L_13;
		L_13 = ZOOMMAPOUT_get__world_m60943875030437202490B4A4347867F74CDFCEBE_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)379));
		__this->___MAP_SCALE_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_SCALE_4), (void*)L_14);
		RuntimeObject* L_15;
		L_15 = ZOOMMAPOUT_get__world_m60943875030437202490B4A4347867F74CDFCEBE_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)379));
		__this->___MAP_SCALE_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_SCALE_5), (void*)L_16);
		RuntimeObject* L_17 = __this->___MAP_SCALE_5;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (bool)1);
		__this->___MAP_SCALE_5_val = L_18;
		RuntimeObject* L_19;
		L_19 = ZOOMMAPOUT_get__world_m60943875030437202490B4A4347867F74CDFCEBE_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)379));
		__this->___MAP_SCALE_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_SCALE_6), (void*)L_20);
		RuntimeObject* L_21 = __this->___MAP_SCALE_6;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), (bool)1);
		__this->___MAP_SCALE_6_val = L_22;
		RuntimeObject* L_23 = __this->___MAP_SCALE_4;
		float L_24 = __this->___MAP_SCALE_6_val;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), ((float)il2cpp_codegen_multiply(L_24, (0.899999976f))));
	}

IL_0120:
	{
		float L_25;
		L_25 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_25;
		float L_26 = __this->___startTime1;
		float L_27;
		L_27 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_26, L_27));
		__this->____cursor = 1;
		goto IL_0154;
	}

IL_0147:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_28 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		ZOOMMAPOUT_set_Current_m8B695B97C6902775E3B601944A15446FD693C613_inline(__this, L_28, NULL);
		return (bool)1;
	}

IL_0154:
	{
		float L_29;
		L_29 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_30 = __this->___endTime1;
		if ((((float)L_29) < ((float)L_30)))
		{
			goto IL_0147;
		}
	}
	{
		ZOOMMAPOUT_set_Current_m8B695B97C6902775E3B601944A15446FD693C613_inline(__this, NULL, NULL);
		RuntimeObject* L_31;
		L_31 = ZOOMMAPOUT_get__world_m60943875030437202490B4A4347867F74CDFCEBE_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, 5, ((int32_t)527));
		__this->___KEY_DEL_11 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_DEL_11), (void*)L_32);
		RuntimeObject* L_33 = __this->___KEY_DEL_11;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)231), (bool)1);
		__this->___KEY_DEL_11_val = L_34;
		float L_35 = __this->___KEY_DEL_11_val;
		bool L_36;
		L_36 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_35, (0.0f), NULL);
		if (L_36)
		{
			goto IL_004e;
		}
	}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDABRIEFING_get_MY_m45E7BABFBDCCA9C1822D28D7C33D1AFA370E7BA2 (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set_MY_m86F3A4773AC146E408C8161D7026BE581071939B (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDABRIEFING_get_THERE_m9D21046D9EDC81B28E59859963E7A19BE099F10A (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set_THERE_m5963796893EDAA641EDD5C5D2ECECF8CDFE163B2 (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4 (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set__world_m2A3AB01E9B6EDD594CE07D62D596D5B5B8C2D4D6 (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDABRIEFING_get_Current_mC472CA8E6FD7D843D468F395EFA9B4C625DD330F (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set_Current_m13FD63BC830F7F33FCB72E8020559A48A39203D7 (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_Reset_mD48F8D76D6D0EB713128375177EBD93E80462062 (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDABRIEFING__ctor_m85066EB3F6155ACA96FD1F97DF8B12BE4683C913 (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDABRIEFING__ctor_m6769D393BA42D2E8AB71E2888AFDB7969F331FA5 (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SHOWPDABRIEFING_set_MY_m86F3A4773AC146E408C8161D7026BE581071939B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SHOWPDABRIEFING_set_THERE_m5963796893EDAA641EDD5C5D2ECECF8CDFE163B2_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SHOWPDABRIEFING_set__world_m2A3AB01E9B6EDD594CE07D62D596D5B5B8C2D4D6_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SHOWPDABRIEFING_MoveNext_m6233B9996FB9A76BF4EFCD57A465B7A5C79BE325 (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* V_1 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* V_2 = NULL;
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_3 = NULL;
	RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* V_4 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_5 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* G_B7_1 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* G_B6_1 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* G_B8_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_008b;
			}
			case 1:
			{
				goto IL_026f;
			}
			case 2:
			{
				goto IL_0351;
			}
			case 3:
			{
				goto IL_0639;
			}
		}
	}
	{
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_2 = (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF*)il2cpp_codegen_object_new(SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		SELECTNONE__ctor_mFF1135D9058921B26DEC652619B7A667380D5451(L_2, NULL);
		V_1 = L_2;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_3 = V_1;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_4 = L_3;
		RuntimeObject* L_5;
		L_5 = SHOWPDABRIEFING_get_MY_m45E7BABFBDCCA9C1822D28D7C33D1AFA370E7BA2_inline(__this, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_4, L_5);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_6 = L_4;
		RuntimeObject* L_7;
		L_7 = SHOWPDABRIEFING_get_THERE_m9D21046D9EDC81B28E59859963E7A19BE099F10A_inline(__this, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8;
		L_8 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_6, L_8);
		RuntimeObject* L_9;
		L_9 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_10 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_10);
	}

IL_0057:
	{
		float L_12;
		L_12 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_12;
		float L_13 = __this->___startTime1;
		float L_14;
		L_14 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(2, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_13, L_14));
		__this->____cursor = 1;
		goto IL_008b;
	}

IL_007e:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_15 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SHOWPDABRIEFING_set_Current_m13FD63BC830F7F33FCB72E8020559A48A39203D7_inline(__this, L_15, NULL);
		return (bool)1;
	}

IL_008b:
	{
		float L_16;
		L_16 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_17 = __this->___endTime1;
		if ((((float)L_16) < ((float)L_17)))
		{
			goto IL_007e;
		}
	}
	{
		SHOWPDABRIEFING_set_Current_m13FD63BC830F7F33FCB72E8020559A48A39203D7_inline(__this, NULL, NULL);
		RuntimeObject* L_18;
		L_18 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B7_0 = L_20;
			G_B7_1 = __this;
			goto IL_00b2;
		}
		G_B6_0 = L_20;
		G_B6_1 = __this;
	}
	{
		G_B8_0 = ((RuntimeObject*)(NULL));
		G_B8_1 = G_B6_1;
		goto IL_00bb;
	}

IL_00b2:
	{
		NullCheck(G_B7_0);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B7_0, ((int32_t)40), (bool)1, (bool)1);
		G_B8_0 = L_21;
		G_B8_1 = G_B7_1;
	}

IL_00bb:
	{
		NullCheck(G_B8_1);
		G_B8_1->___temp_3 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___temp_3), (void*)G_B8_0);
		RuntimeObject* L_22 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_22, (RuntimeObject*)NULL, NULL);
		if (L_23)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_24;
		L_24 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_5 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_5), (void*)L_25);
		RuntimeObject* L_26 = __this->___GUNFIRING_5;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (bool)1);
		__this->___GUNFIRING_5_val = L_27;
		float L_28 = __this->___GUNFIRING_5_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_28, (1.0f), NULL);
		if (L_29)
		{
			goto IL_0057;
		}
	}
	{
		HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* L_30 = (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4*)il2cpp_codegen_object_new(HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4_il2cpp_TypeInfo_var);
		HIDEWEAPON__ctor_mE7F3B061F612EE76C318C507736D03D078E8E680(L_30, NULL);
		V_2 = L_30;
		HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* L_31 = V_2;
		HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* L_32 = L_31;
		RuntimeObject* L_33;
		L_33 = SHOWPDABRIEFING_get_MY_m45E7BABFBDCCA9C1822D28D7C33D1AFA370E7BA2_inline(__this, NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_32, L_33);
		HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* L_34 = L_32;
		RuntimeObject* L_35;
		L_35 = SHOWPDABRIEFING_get_THERE_m9D21046D9EDC81B28E59859963E7A19BE099F10A_inline(__this, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_34, L_35);
		RuntimeObject* L_36;
		L_36 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_34, L_36);
		RuntimeObject* L_37;
		L_37 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* L_38 = V_2;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_37, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_38);
		RuntimeObject* L_40;
		L_40 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_40, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_7 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_7), (void*)L_41);
		RuntimeObject* L_42 = __this->___WEAPONSEL_7;
		NullCheck(L_42);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)231), (1.0f));
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_43 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_43, NULL);
		V_3 = L_43;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_44 = V_3;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_45 = L_44;
		RuntimeObject* L_46;
		L_46 = SHOWPDABRIEFING_get_MY_m45E7BABFBDCCA9C1822D28D7C33D1AFA370E7BA2_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_46);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_47 = L_45;
		RuntimeObject* L_48;
		L_48 = SHOWPDABRIEFING_get_THERE_m9D21046D9EDC81B28E59859963E7A19BE099F10A_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		RuntimeObject* L_49;
		L_49 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_49);
		RuntimeObject* L_50;
		L_50 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_51 = V_3;
		NullCheck(L_50);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_50, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_51);
		RuntimeObject* L_53;
		L_53 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)380));
		__this->___MAP_MODE_9 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_9), (void*)L_54);
		RuntimeObject* L_55 = __this->___MAP_MODE_9;
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)231), (0.0f));
		RuntimeObject* L_56;
		L_56 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_56);
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)158), (RuntimeObject*)NULL);
		RuntimeObject* L_58;
		L_58 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_59);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_60;
		L_60 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_60);
		NullCheck(L_61);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)97), (RuntimeObject*)NULL);
		RuntimeObject* L_62;
		L_62 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_62);
		NullCheck(L_63);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_63, ((int32_t)82), (RuntimeObject*)NULL);
		RuntimeObject* L_64;
		L_64 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_64);
		NullCheck(L_65);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)81), (RuntimeObject*)NULL);
		float L_66;
		L_66 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_66;
		float L_67 = __this->___startTime2;
		float L_68;
		L_68 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(4, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_67, L_68));
		__this->____cursor = 2;
		goto IL_026f;
	}

IL_0262:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_69 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SHOWPDABRIEFING_set_Current_m13FD63BC830F7F33FCB72E8020559A48A39203D7_inline(__this, L_69, NULL);
		return (bool)1;
	}

IL_026f:
	{
		float L_70;
		L_70 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_71 = __this->___endTime2;
		if ((((float)L_70) < ((float)L_71)))
		{
			goto IL_0262;
		}
	}
	{
		SHOWPDABRIEFING_set_Current_m13FD63BC830F7F33FCB72E8020559A48A39203D7_inline(__this, NULL, NULL);
		RuntimeObject* L_72;
		L_72 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_72);
		NullCheck(L_73);
		RuntimeObject* L_74;
		L_74 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)175205335), (bool)1, (bool)1);
		__this->___TRICACT_22 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TRICACT_22), (void*)L_74);
		RuntimeObject* L_75;
		L_75 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		RuntimeObject* L_76 = __this->___TRICACT_22;
		NullCheck(L_75);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_75, ((int32_t)-1040443588), L_76);
		RuntimeObject* L_77;
		L_77 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_77);
		RuntimeObject* L_78;
		L_78 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_77, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_26 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_26), (void*)L_78);
		RuntimeObject* L_79 = __this->___MY_GUN_26;
		NullCheck(L_79);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_79, ((int32_t)204), (0.0f));
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_80 = (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8*)il2cpp_codegen_object_new(RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		RAISE__ctor_mC9CDF6F146498172B72D6E63718BA1D065CC3E95(L_80, NULL);
		V_4 = L_80;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_81 = V_4;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_82 = L_81;
		RuntimeObject* L_83;
		L_83 = SHOWPDABRIEFING_get_MY_m45E7BABFBDCCA9C1822D28D7C33D1AFA370E7BA2_inline(__this, NULL);
		NullCheck(L_82);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_82, L_83);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_84 = L_82;
		RuntimeObject* L_85;
		L_85 = SHOWPDABRIEFING_get_THERE_m9D21046D9EDC81B28E59859963E7A19BE099F10A_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_85);
		RuntimeObject* L_86;
		L_86 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_84);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_84, L_86);
		RuntimeObject* L_87;
		L_87 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_88 = V_4;
		NullCheck(L_87);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_87, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_88);
	}

IL_031d:
	{
		float L_90;
		L_90 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_90;
		float L_91 = __this->___startTime3;
		float L_92;
		L_92 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(2, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_91, L_92));
		__this->____cursor = 3;
		goto IL_0351;
	}

IL_0344:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_93 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SHOWPDABRIEFING_set_Current_m13FD63BC830F7F33FCB72E8020559A48A39203D7_inline(__this, L_93, NULL);
		return (bool)1;
	}

IL_0351:
	{
		float L_94;
		L_94 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_95 = __this->___endTime3;
		if ((((float)L_94) < ((float)L_95)))
		{
			goto IL_0344;
		}
	}
	{
		SHOWPDABRIEFING_set_Current_m13FD63BC830F7F33FCB72E8020559A48A39203D7_inline(__this, NULL, NULL);
		RuntimeObject* L_96;
		L_96 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_96, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_30 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_30), (void*)L_97);
		RuntimeObject* L_98 = __this->___MY_GUN_30;
		NullCheck(L_98);
		float L_99;
		L_99 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_98, ((int32_t)204), (bool)1);
		__this->___temp_31 = L_99;
		float L_100 = __this->___temp_31;
		bool L_101;
		L_101 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_100, (1.0f), NULL);
		if (L_101)
		{
			goto IL_031d;
		}
	}
	{
		RuntimeObject* L_102;
		L_102 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_102);
		RuntimeObject* L_103;
		L_103 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_102);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_103, ((int32_t)1798154821), (bool)1, (bool)1);
		__this->___TRIC01SND_32 = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TRIC01SND_32), (void*)L_104);
		RuntimeObject* L_105;
		L_105 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		RuntimeObject* L_106 = __this->___TRIC01SND_32;
		NullCheck(L_105);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_105, L_106, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_107;
		L_107 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_107);
		RuntimeObject* L_108;
		L_108 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_107, ((int32_t)155729303), (bool)0);
		__this->___BRIEFING_TEXT_34 = L_108;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BRIEFING_TEXT_34), (void*)L_108);
		RuntimeObject* L_109;
		L_109 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_109);
		RuntimeObject* L_110;
		L_110 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_109);
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)-1252466137), (bool)1, (bool)1);
		__this->___PDATEXT_36 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PDATEXT_36), (void*)L_111);
		RuntimeObject* L_112 = __this->___PDATEXT_36;
		NullCheck(L_112);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_113;
		L_113 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_112, ((int32_t)293), (bool)1);
		__this->___PDATEXT_36_array = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PDATEXT_36_array), (void*)L_113);
		RuntimeObject* L_114 = __this->___PDATEXT_36;
		NullCheck(L_114);
		int32_t L_115;
		L_115 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_114, ((int32_t)295), (bool)1);
		__this->___PDATEXT_36_index = L_115;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_116 = __this->___PDATEXT_36_array;
		int32_t L_117 = __this->___PDATEXT_36_index;
		RuntimeObject* L_118 = __this->___BRIEFING_TEXT_34;
		NullCheck(L_116);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_116, ((int32_t)il2cpp_codegen_subtract(L_117, 1)), L_118, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_119 = __this->___PDATEXT_36;
		NullCheck(L_119);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_119, (bool)1);
		RuntimeObject* L_120;
		L_120 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_120);
		RuntimeObject* L_121;
		L_121 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_120);
		NullCheck(L_121);
		RuntimeObject* L_122;
		L_122 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_121, ((int32_t)1798150737), (bool)1, (bool)1);
		__this->___TRIC01OVL_37 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TRIC01OVL_37), (void*)L_122);
		RuntimeObject* L_123;
		L_123 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_123);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_123);
		RuntimeObject* L_125 = __this->___TRIC01OVL_37;
		NullCheck(L_124);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_124, ((int32_t)158), L_125);
		RuntimeObject* L_126;
		L_126 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_126);
		RuntimeObject* L_127;
		L_127 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_126);
		NullCheck(L_127);
		RuntimeObject* L_128;
		L_128 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_127, ((int32_t)-1252466137), (bool)1, (bool)1);
		__this->___PDATEXT_42 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PDATEXT_42), (void*)L_128);
		RuntimeObject* L_129 = __this->___PDATEXT_42;
		NullCheck(L_129);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_129, ((int32_t)205), (1.0f));
		RuntimeObject* L_130;
		L_130 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_130);
		RuntimeObject* L_131;
		L_131 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_130);
		NullCheck(L_131);
		RuntimeObject* L_132;
		L_132 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_131, ((int32_t)-539343742), (bool)1, (bool)1);
		__this->___PDAMESSAGEOFF_43 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PDAMESSAGEOFF_43), (void*)L_132);
		RuntimeObject* L_133;
		L_133 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_133);
		RuntimeObject* L_134;
		L_134 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_133);
		RuntimeObject* L_135 = __this->___PDAMESSAGEOFF_43;
		NullCheck(L_134);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_134, ((int32_t)82), L_135);
		RuntimeObject* L_136;
		L_136 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_136);
		RuntimeObject* L_137;
		L_137 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_136, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_46 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_46), (void*)L_137);
		RuntimeObject* L_138 = __this->___GUN_ON_46;
		NullCheck(L_138);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_138, ((int32_t)231), (0.0f));
		RuntimeObject* L_139;
		L_139 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_139);
		RuntimeObject* L_140;
		L_140 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_139);
		NullCheck(L_140);
		RuntimeObject* L_141;
		L_141 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_140, ((int32_t)-2036341619), (bool)1, (bool)1);
		__this->___HLP03STR_47 = L_141;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HLP03STR_47), (void*)L_141);
		RuntimeObject* L_142;
		L_142 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		RuntimeObject* L_143 = __this->___HLP03STR_47;
		NullCheck(L_142);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_142, ((int32_t)361798934), L_143);
		RuntimeObject* L_144;
		L_144 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_144);
		RuntimeObject* L_145;
		L_145 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_144);
		NullCheck(L_145);
		RuntimeObject* L_146;
		L_146 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_145, ((int32_t)215228298), (bool)1, (bool)1);
		__this->___BLACK_49 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLACK_49), (void*)L_146);
		RuntimeObject* L_147;
		L_147 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		RuntimeObject* L_148 = __this->___BLACK_49;
		NullCheck(L_147);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_147, L_148, (0.400000006f));
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_149 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_149, NULL);
		V_5 = L_149;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_150 = V_5;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_151 = L_150;
		RuntimeObject* L_152;
		L_152 = SHOWPDABRIEFING_get_MY_m45E7BABFBDCCA9C1822D28D7C33D1AFA370E7BA2_inline(__this, NULL);
		NullCheck(L_151);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_151, L_152);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_153 = L_151;
		RuntimeObject* L_154;
		L_154 = SHOWPDABRIEFING_get_THERE_m9D21046D9EDC81B28E59859963E7A19BE099F10A_inline(__this, NULL);
		NullCheck(L_153);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_153, L_154);
		RuntimeObject* L_155;
		L_155 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_153);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_153, L_155);
		RuntimeObject* L_156;
		L_156 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_157 = V_5;
		NullCheck(L_156);
		RuntimeObject* L_158;
		L_158 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_156, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_157);
		RuntimeObject* L_159;
		L_159 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_159);
		RuntimeObject* L_160;
		L_160 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_159, 5, ((int32_t)361));
		__this->___RENDER_MODE_52 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RENDER_MODE_52), (void*)L_160);
		RuntimeObject* L_161 = __this->___RENDER_MODE_52;
		NullCheck(L_161);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_161, ((int32_t)231), (1.0f));
		float L_162;
		L_162 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime4 = L_162;
		float L_163 = __this->___startTime4;
		float L_164;
		L_164 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(1, NULL);
		__this->___endTime4 = ((float)il2cpp_codegen_add(L_163, L_164));
		__this->____cursor = 4;
		goto IL_0639;
	}

IL_062c:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_165 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SHOWPDABRIEFING_set_Current_m13FD63BC830F7F33FCB72E8020559A48A39203D7_inline(__this, L_165, NULL);
		return (bool)1;
	}

IL_0639:
	{
		float L_166;
		L_166 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_167 = __this->___endTime4;
		if ((((float)L_166) < ((float)L_167)))
		{
			goto IL_062c;
		}
	}
	{
		SHOWPDABRIEFING_set_Current_m13FD63BC830F7F33FCB72E8020559A48A39203D7_inline(__this, NULL, NULL);
		RuntimeObject* L_168;
		L_168 = SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline(__this, NULL);
		NullCheck(L_168);
		RuntimeObject* L_169;
		L_169 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_168, 5, ((int32_t)362));
		__this->___MOVE_MODE_55 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_MODE_55), (void*)L_169);
		RuntimeObject* L_170 = __this->___MOVE_MODE_55;
		NullCheck(L_170);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_170, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDAGAMEOVER_get_MY_mDA4A410B292E47E8AF70B83415E77B057A6A8452 (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set_MY_mDB614BD089FDA259564A3B079DB21959CF60396B (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDAGAMEOVER_get_THERE_mB946A2E52ABCE92A005F5C4D920058E677BE6D3A (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set_THERE_m897D8AFAFF53B1E4FB47182E1276EF2663AAB61B (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set__world_m746FEE7BA2278BFB21FEF78C2A158586A46AB102 (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDAGAMEOVER_get_Current_m44A3999B0214AB22AFE5F7236879D9B396E5025E (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set_Current_m65825765DB4EC2DF6366FC4E93AE8182D190B78E (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_Reset_m6CDF2DE7478EC20FD1695D8B2E1A595E577C1C27 (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER__ctor_mBC11F4D61AF008D3C823FBEEE858CC700DD64F0B (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER__ctor_mA77DCCCA2FD14B640FA8B51D99CB9D6DE5F8A972 (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SHOWPDAGAMEOVER_set_MY_mDB614BD089FDA259564A3B079DB21959CF60396B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SHOWPDAGAMEOVER_set_THERE_m897D8AFAFF53B1E4FB47182E1276EF2663AAB61B_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SHOWPDAGAMEOVER_set__world_m746FEE7BA2278BFB21FEF78C2A158586A46AB102_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SHOWPDAGAMEOVER_MoveNext_m4D4BF652DD87B5425D09EBF25A4274AFDFAA18DD (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* V_1 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* V_2 = NULL;
	SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* V_3 = NULL;
	RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* V_4 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_5 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* G_B7_1 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* G_B6_1 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* G_B8_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_00c9;
			}
			case 1:
			{
				goto IL_029a;
			}
			case 2:
			{
				goto IL_037c;
			}
			case 3:
			{
				goto IL_0675;
			}
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)759955234), (bool)1, (bool)1);
		__this->___ALARM03SND_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ALARM03SND_0), (void*)L_4);
		RuntimeObject* L_5;
		L_5 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		RuntimeObject* L_6 = __this->___ALARM03SND_0;
		NullCheck(L_5);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, L_6, (0.699999988f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_7 = (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF*)il2cpp_codegen_object_new(SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		SELECTNONE__ctor_mFF1135D9058921B26DEC652619B7A667380D5451(L_7, NULL);
		V_1 = L_7;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_8 = V_1;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_9 = L_8;
		RuntimeObject* L_10;
		L_10 = SHOWPDAGAMEOVER_get_MY_mDA4A410B292E47E8AF70B83415E77B057A6A8452_inline(__this, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_9, L_10);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_11 = L_9;
		RuntimeObject* L_12;
		L_12 = SHOWPDAGAMEOVER_get_THERE_mB946A2E52ABCE92A005F5C4D920058E677BE6D3A_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_11, L_12);
		RuntimeObject* L_13;
		L_13 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_11, L_13);
		RuntimeObject* L_14;
		L_14 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_15);
	}

IL_0095:
	{
		float L_17;
		L_17 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_17;
		float L_18 = __this->___startTime1;
		float L_19;
		L_19 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(2, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_18, L_19));
		__this->____cursor = 1;
		goto IL_00c9;
	}

IL_00bc:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_20 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SHOWPDAGAMEOVER_set_Current_m65825765DB4EC2DF6366FC4E93AE8182D190B78E_inline(__this, L_20, NULL);
		return (bool)1;
	}

IL_00c9:
	{
		float L_21;
		L_21 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_22 = __this->___endTime1;
		if ((((float)L_21) < ((float)L_22)))
		{
			goto IL_00bc;
		}
	}
	{
		SHOWPDAGAMEOVER_set_Current_m65825765DB4EC2DF6366FC4E93AE8182D190B78E_inline(__this, NULL, NULL);
		RuntimeObject* L_23;
		L_23 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		RuntimeObject* L_25 = L_24;
		if (L_25)
		{
			G_B7_0 = L_25;
			G_B7_1 = __this;
			goto IL_00f0;
		}
		G_B6_0 = L_25;
		G_B6_1 = __this;
	}
	{
		G_B8_0 = ((RuntimeObject*)(NULL));
		G_B8_1 = G_B6_1;
		goto IL_00f9;
	}

IL_00f0:
	{
		NullCheck(G_B7_0);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B7_0, ((int32_t)40), (bool)1, (bool)1);
		G_B8_0 = L_26;
		G_B8_1 = G_B7_1;
	}

IL_00f9:
	{
		NullCheck(G_B8_1);
		G_B8_1->___temp_5 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___temp_5), (void*)G_B8_0);
		RuntimeObject* L_27 = __this->___temp_5;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_27, (RuntimeObject*)NULL, NULL);
		if (L_28)
		{
			goto IL_0095;
		}
	}
	{
		RuntimeObject* L_29;
		L_29 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, 5, ((int32_t)-816158698));
		__this->___GUNFIRING_7 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUNFIRING_7), (void*)L_30);
		RuntimeObject* L_31 = __this->___GUNFIRING_7;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), (bool)1);
		__this->___GUNFIRING_7_val = L_32;
		float L_33 = __this->___GUNFIRING_7_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_33, (1.0f), NULL);
		if (L_34)
		{
			goto IL_0095;
		}
	}
	{
		HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* L_35 = (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4*)il2cpp_codegen_object_new(HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4_il2cpp_TypeInfo_var);
		HIDEWEAPON__ctor_mE7F3B061F612EE76C318C507736D03D078E8E680(L_35, NULL);
		V_2 = L_35;
		HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* L_36 = V_2;
		HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* L_37 = L_36;
		RuntimeObject* L_38;
		L_38 = SHOWPDAGAMEOVER_get_MY_mDA4A410B292E47E8AF70B83415E77B057A6A8452_inline(__this, NULL);
		NullCheck(L_37);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_37, L_38);
		HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* L_39 = L_37;
		RuntimeObject* L_40;
		L_40 = SHOWPDAGAMEOVER_get_THERE_mB946A2E52ABCE92A005F5C4D920058E677BE6D3A_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		RuntimeObject* L_41;
		L_41 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_41);
		RuntimeObject* L_42;
		L_42 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* L_43 = V_2;
		NullCheck(L_42);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_42, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_43);
		RuntimeObject* L_45;
		L_45 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, 5, ((int32_t)-2113063557));
		__this->___WEAPONSEL_9 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WEAPONSEL_9), (void*)L_46);
		RuntimeObject* L_47 = __this->___WEAPONSEL_9;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)231), (1.0f));
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_48 = (SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D*)il2cpp_codegen_object_new(SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D_il2cpp_TypeInfo_var);
		SHOWAMMO__ctor_mA388845B8FB9DB4669A881F0CAB43754A12F97F4(L_48, NULL);
		V_3 = L_48;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_49 = V_3;
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_50 = L_49;
		RuntimeObject* L_51;
		L_51 = SHOWPDAGAMEOVER_get_MY_mDA4A410B292E47E8AF70B83415E77B057A6A8452_inline(__this, NULL);
		NullCheck(L_50);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_50, L_51);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_52 = L_50;
		RuntimeObject* L_53;
		L_53 = SHOWPDAGAMEOVER_get_THERE_mB946A2E52ABCE92A005F5C4D920058E677BE6D3A_inline(__this, NULL);
		NullCheck(L_52);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_52, L_53);
		RuntimeObject* L_54;
		L_54 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_52);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_52, L_54);
		RuntimeObject* L_55;
		L_55 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		SHOWAMMO_t15E4B8D1258FA8DD86FA6ADC1CB1C578F0A07D6D* L_56 = V_3;
		NullCheck(L_55);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_56);
		RuntimeObject* L_58;
		L_58 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_58, 5, ((int32_t)380));
		__this->___MAP_MODE_11 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_11), (void*)L_59);
		RuntimeObject* L_60 = __this->___MAP_MODE_11;
		NullCheck(L_60);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)231), (0.0f));
		RuntimeObject* L_61;
		L_61 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_61);
		NullCheck(L_62);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)158), (RuntimeObject*)NULL);
		RuntimeObject* L_63;
		L_63 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_63);
		NullCheck(L_64);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_65;
		L_65 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_65);
		NullCheck(L_66);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)97), (RuntimeObject*)NULL);
		RuntimeObject* L_67;
		L_67 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_67);
		NullCheck(L_68);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)82), (RuntimeObject*)NULL);
		float L_69;
		L_69 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_69;
		float L_70 = __this->___startTime2;
		float L_71;
		L_71 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(2, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_70, L_71));
		__this->____cursor = 2;
		goto IL_029a;
	}

IL_028d:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_72 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SHOWPDAGAMEOVER_set_Current_m65825765DB4EC2DF6366FC4E93AE8182D190B78E_inline(__this, L_72, NULL);
		return (bool)1;
	}

IL_029a:
	{
		float L_73;
		L_73 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_74 = __this->___endTime2;
		if ((((float)L_73) < ((float)L_74)))
		{
			goto IL_028d;
		}
	}
	{
		SHOWPDAGAMEOVER_set_Current_m65825765DB4EC2DF6366FC4E93AE8182D190B78E_inline(__this, NULL, NULL);
		RuntimeObject* L_75;
		L_75 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_75);
		RuntimeObject* L_76;
		L_76 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_75);
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)175205335), (bool)1, (bool)1);
		__this->___TRICACT_22 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TRICACT_22), (void*)L_77);
		RuntimeObject* L_78;
		L_78 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		RuntimeObject* L_79 = __this->___TRICACT_22;
		NullCheck(L_78);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_78, ((int32_t)-1040443588), L_79);
		RuntimeObject* L_80;
		L_80 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_80, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_26 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_26), (void*)L_81);
		RuntimeObject* L_82 = __this->___MY_GUN_26;
		NullCheck(L_82);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_82, ((int32_t)204), (0.0f));
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_83 = (RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8*)il2cpp_codegen_object_new(RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8_il2cpp_TypeInfo_var);
		RAISE__ctor_mC9CDF6F146498172B72D6E63718BA1D065CC3E95(L_83, NULL);
		V_4 = L_83;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_84 = V_4;
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_85 = L_84;
		RuntimeObject* L_86;
		L_86 = SHOWPDAGAMEOVER_get_MY_mDA4A410B292E47E8AF70B83415E77B057A6A8452_inline(__this, NULL);
		NullCheck(L_85);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_85, L_86);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_87 = L_85;
		RuntimeObject* L_88;
		L_88 = SHOWPDAGAMEOVER_get_THERE_mB946A2E52ABCE92A005F5C4D920058E677BE6D3A_inline(__this, NULL);
		NullCheck(L_87);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_87, L_88);
		RuntimeObject* L_89;
		L_89 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_87);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_87, L_89);
		RuntimeObject* L_90;
		L_90 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		RAISE_t72ACA91E5D001ACDD85165C7B20525B1E3118BA8* L_91 = V_4;
		NullCheck(L_90);
		RuntimeObject* L_92;
		L_92 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_90, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_91);
	}

IL_0348:
	{
		float L_93;
		L_93 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime3 = L_93;
		float L_94 = __this->___startTime3;
		float L_95;
		L_95 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(2, NULL);
		__this->___endTime3 = ((float)il2cpp_codegen_add(L_94, L_95));
		__this->____cursor = 3;
		goto IL_037c;
	}

IL_036f:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_96 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SHOWPDAGAMEOVER_set_Current_m65825765DB4EC2DF6366FC4E93AE8182D190B78E_inline(__this, L_96, NULL);
		return (bool)1;
	}

IL_037c:
	{
		float L_97;
		L_97 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_98 = __this->___endTime3;
		if ((((float)L_97) < ((float)L_98)))
		{
			goto IL_036f;
		}
	}
	{
		SHOWPDAGAMEOVER_set_Current_m65825765DB4EC2DF6366FC4E93AE8182D190B78E_inline(__this, NULL, NULL);
		RuntimeObject* L_99;
		L_99 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_99);
		RuntimeObject* L_100;
		L_100 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_99, ((int32_t)-1040443588), (bool)0);
		__this->___MY_GUN_30 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_GUN_30), (void*)L_100);
		RuntimeObject* L_101 = __this->___MY_GUN_30;
		NullCheck(L_101);
		float L_102;
		L_102 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_101, ((int32_t)204), (bool)1);
		__this->___temp_31 = L_102;
		float L_103 = __this->___temp_31;
		bool L_104;
		L_104 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_103, (1.0f), NULL);
		if (L_104)
		{
			goto IL_0348;
		}
	}
	{
		RuntimeObject* L_105;
		L_105 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_105);
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_106, ((int32_t)759955234), (bool)1, (bool)1);
		__this->___ALARM03SND_32 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ALARM03SND_32), (void*)L_107);
		RuntimeObject* L_108;
		L_108 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		RuntimeObject* L_109 = __this->___ALARM03SND_32;
		NullCheck(L_108);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_108, L_109, (0.699999988f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_110;
		L_110 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_110, ((int32_t)-402558137), (bool)0);
		__this->___GAMEOVER_TEXT_34 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GAMEOVER_TEXT_34), (void*)L_111);
		RuntimeObject* L_112;
		L_112 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_112);
		RuntimeObject* L_113;
		L_113 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_112);
		NullCheck(L_113);
		RuntimeObject* L_114;
		L_114 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_113, ((int32_t)-1252466137), (bool)1, (bool)1);
		__this->___PDATEXT_36 = L_114;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PDATEXT_36), (void*)L_114);
		RuntimeObject* L_115 = __this->___PDATEXT_36;
		NullCheck(L_115);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_116;
		L_116 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_115, ((int32_t)293), (bool)1);
		__this->___PDATEXT_36_array = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PDATEXT_36_array), (void*)L_116);
		RuntimeObject* L_117 = __this->___PDATEXT_36;
		NullCheck(L_117);
		int32_t L_118;
		L_118 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_117, ((int32_t)295), (bool)1);
		__this->___PDATEXT_36_index = L_118;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_119 = __this->___PDATEXT_36_array;
		int32_t L_120 = __this->___PDATEXT_36_index;
		RuntimeObject* L_121 = __this->___GAMEOVER_TEXT_34;
		NullCheck(L_119);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_119, ((int32_t)il2cpp_codegen_subtract(L_120, 1)), L_121, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_122 = __this->___PDATEXT_36;
		NullCheck(L_122);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_122, (bool)1);
		RuntimeObject* L_123;
		L_123 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_123);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_123, ((int32_t)270057211), (RuntimeObject*)NULL);
		RuntimeObject* L_124;
		L_124 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_124);
		RuntimeObject* L_125;
		L_125 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_124);
		NullCheck(L_125);
		RuntimeObject* L_126;
		L_126 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_125, ((int32_t)1798150737), (bool)1, (bool)1);
		__this->___TRIC01OVL_39 = L_126;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TRIC01OVL_39), (void*)L_126);
		RuntimeObject* L_127;
		L_127 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_127);
		RuntimeObject* L_128;
		L_128 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_127);
		RuntimeObject* L_129 = __this->___TRIC01OVL_39;
		NullCheck(L_128);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_128, ((int32_t)158), L_129);
		RuntimeObject* L_130;
		L_130 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_130);
		RuntimeObject* L_131;
		L_131 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_130);
		NullCheck(L_131);
		RuntimeObject* L_132;
		L_132 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_131, ((int32_t)-1252466137), (bool)1, (bool)1);
		__this->___PDATEXT_44 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PDATEXT_44), (void*)L_132);
		RuntimeObject* L_133 = __this->___PDATEXT_44;
		NullCheck(L_133);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)205), (1.0f));
		RuntimeObject* L_134;
		L_134 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_134);
		RuntimeObject* L_135;
		L_135 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_134);
		NullCheck(L_135);
		RuntimeObject* L_136;
		L_136 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_135, ((int32_t)-539343742), (bool)1, (bool)1);
		__this->___PDAMESSAGEOFF_45 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PDAMESSAGEOFF_45), (void*)L_136);
		RuntimeObject* L_137;
		L_137 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_137);
		RuntimeObject* L_138;
		L_138 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_137);
		RuntimeObject* L_139 = __this->___PDAMESSAGEOFF_45;
		NullCheck(L_138);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_138, ((int32_t)82), L_139);
		RuntimeObject* L_140;
		L_140 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_140);
		RuntimeObject* L_141;
		L_141 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_140, 5, ((int32_t)-1280584621));
		__this->___GUN_ON_48 = L_141;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GUN_ON_48), (void*)L_141);
		RuntimeObject* L_142 = __this->___GUN_ON_48;
		NullCheck(L_142);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_142, ((int32_t)231), (0.0f));
		RuntimeObject* L_143;
		L_143 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_143);
		RuntimeObject* L_144;
		L_144 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_143);
		NullCheck(L_144);
		RuntimeObject* L_145;
		L_145 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_144, ((int32_t)-2036305682), (bool)1, (bool)1);
		__this->___HLP04STR_49 = L_145;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HLP04STR_49), (void*)L_145);
		RuntimeObject* L_146;
		L_146 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		RuntimeObject* L_147 = __this->___HLP04STR_49;
		NullCheck(L_146);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_146, ((int32_t)361798934), L_147);
		RuntimeObject* L_148;
		L_148 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_148);
		RuntimeObject* L_149;
		L_149 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_148);
		NullCheck(L_149);
		RuntimeObject* L_150;
		L_150 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_149, ((int32_t)215228298), (bool)1, (bool)1);
		__this->___BLACK_51 = L_150;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLACK_51), (void*)L_150);
		RuntimeObject* L_151;
		L_151 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		RuntimeObject* L_152 = __this->___BLACK_51;
		NullCheck(L_151);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_151, L_152, (0.400000006f));
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_153 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_153, NULL);
		V_5 = L_153;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_154 = V_5;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_155 = L_154;
		RuntimeObject* L_156;
		L_156 = SHOWPDAGAMEOVER_get_MY_mDA4A410B292E47E8AF70B83415E77B057A6A8452_inline(__this, NULL);
		NullCheck(L_155);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_155, L_156);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_157 = L_155;
		RuntimeObject* L_158;
		L_158 = SHOWPDAGAMEOVER_get_THERE_mB946A2E52ABCE92A005F5C4D920058E677BE6D3A_inline(__this, NULL);
		NullCheck(L_157);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_157, L_158);
		RuntimeObject* L_159;
		L_159 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_157);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_157, L_159);
		RuntimeObject* L_160;
		L_160 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_161 = V_5;
		NullCheck(L_160);
		RuntimeObject* L_162;
		L_162 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_160, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_161);
		RuntimeObject* L_163;
		L_163 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_163);
		RuntimeObject* L_164;
		L_164 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_163, 5, ((int32_t)361));
		__this->___RENDER_MODE_54 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RENDER_MODE_54), (void*)L_164);
		RuntimeObject* L_165 = __this->___RENDER_MODE_54;
		NullCheck(L_165);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_165, ((int32_t)231), (1.0f));
		float L_166;
		L_166 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime4 = L_166;
		float L_167 = __this->___startTime4;
		float L_168;
		L_168 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(2, NULL);
		__this->___endTime4 = ((float)il2cpp_codegen_add(L_167, L_168));
		__this->____cursor = 4;
		goto IL_0675;
	}

IL_0668:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_169 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SHOWPDAGAMEOVER_set_Current_m65825765DB4EC2DF6366FC4E93AE8182D190B78E_inline(__this, L_169, NULL);
		return (bool)1;
	}

IL_0675:
	{
		float L_170;
		L_170 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_171 = __this->___endTime4;
		if ((((float)L_170) < ((float)L_171)))
		{
			goto IL_0668;
		}
	}
	{
		SHOWPDAGAMEOVER_set_Current_m65825765DB4EC2DF6366FC4E93AE8182D190B78E_inline(__this, NULL, NULL);
		RuntimeObject* L_172;
		L_172 = SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline(__this, NULL);
		NullCheck(L_172);
		RuntimeObject* L_173;
		L_173 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_172, 5, ((int32_t)362));
		__this->___MOVE_MODE_57 = L_173;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_MODE_57), (void*)L_173);
		RuntimeObject* L_174 = __this->___MOVE_MODE_57;
		NullCheck(L_174);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_174, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PDAMESSAGEOFF_get_MY_m7AA9C09B02028FFC41C82120C25B16EF40452994 (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PDAMESSAGEOFF_set_MY_m3273D96C453EAEDB3E7AF09C2A2D2274FF5E8576 (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PDAMESSAGEOFF_get_THERE_m7451E6E0B7E27172ECE267F46109F89446DE27C8 (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PDAMESSAGEOFF_set_THERE_m1A07336DD3D30C02554BEA46F76B464542A0E430 (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682 (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PDAMESSAGEOFF_set__world_mBABBD9BBAEA4A7032C0FFCA81C45CC83661FC0DB (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PDAMESSAGEOFF_get_Current_mA7B3C616742B0A863E28AEF1018EEE80840525A8 (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PDAMESSAGEOFF_set_Current_m138B70A0F4EC67297767D0C9223733A46868665B (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PDAMESSAGEOFF_Reset_mB1B7A93D552BA2B1286F092372322043B52E2871 (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PDAMESSAGEOFF__ctor_m0E308906F800F8CD8FE00D17A9488C22B42C5B60 (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PDAMESSAGEOFF__ctor_mEC10493E7CEC08F1D3DBB81A3958D28297E7C6BB (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PDAMESSAGEOFF_set_MY_m3273D96C453EAEDB3E7AF09C2A2D2274FF5E8576_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PDAMESSAGEOFF_set_THERE_m1A07336DD3D30C02554BEA46F76B464542A0E430_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PDAMESSAGEOFF_set__world_mBABBD9BBAEA4A7032C0FFCA81C45CC83661FC0DB_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PDAMESSAGEOFF_MoveNext_mE480B2E3336E9327BD28F18230AE11C87B1DA1D0 (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* V_0 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_1 = NULL;
	SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* V_2 = NULL;
	SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* V_3 = NULL;
	ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* V_4 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-1252466137), (bool)1, (bool)1);
		__this->___PDATEXT_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PDATEXT_2), (void*)L_3);
		RuntimeObject* L_4 = __this->___PDATEXT_2;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)205), (0.0f));
		RuntimeObject* L_5;
		L_5 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)-629660504), (bool)1, (bool)1);
		__this->___SHOWMAINMENU_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOWMAINMENU_3), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_8);
		RuntimeObject* L_10 = __this->___SHOWMAINMENU_3;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)82), L_10);
		RuntimeObject* L_11;
		L_11 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-109360261), (bool)1, (bool)1);
		__this->___SELECTTRICORDER_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTTRICORDER_5), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_14);
		RuntimeObject* L_16 = __this->___SELECTTRICORDER_5;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)104), L_16);
		RuntimeObject* L_17;
		L_17 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_7 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_7), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		RuntimeObject* L_22 = __this->___SELECTNONE_7;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)39), L_22);
		RuntimeObject* L_23;
		L_23 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)1879623005), (bool)1, (bool)1);
		__this->___SELECTNONE_9 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTNONE_9), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_26);
		RuntimeObject* L_28 = __this->___SELECTNONE_9;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)92), L_28);
		RuntimeObject* L_29;
		L_29 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)-463643937), (bool)1, (bool)1);
		__this->___SELECTMP5_11 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5_11), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		RuntimeObject* L_34 = __this->___SELECTMP5_11;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)40), L_34);
		RuntimeObject* L_35;
		L_35 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)120038031), (bool)1, (bool)1);
		__this->___SELECTMP5BURST_13 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTMP5BURST_13), (void*)L_37);
		RuntimeObject* L_38;
		L_38 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_38);
		RuntimeObject* L_40 = __this->___SELECTMP5BURST_13;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)41), L_40);
		RuntimeObject* L_41;
		L_41 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_41);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)-917113783), (bool)1, (bool)1);
		__this->___SELECTSTINGER_15 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTSTINGER_15), (void*)L_43);
		RuntimeObject* L_44;
		L_44 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		RuntimeObject* L_46 = __this->___SELECTSTINGER_15;
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)43), L_46);
		RuntimeObject* L_47;
		L_47 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_47);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)677375039), (bool)1, (bool)1);
		__this->___SELECTGRANADE_17 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTGRANADE_17), (void*)L_49);
		RuntimeObject* L_50;
		L_50 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_50);
		RuntimeObject* L_52 = __this->___SELECTGRANADE_17;
		NullCheck(L_51);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)42), L_52);
		RuntimeObject* L_53;
		L_53 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_53);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)824580280), (bool)1, (bool)1);
		__this->___SELECTQUANTUM_19 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SELECTQUANTUM_19), (void*)L_55);
		RuntimeObject* L_56;
		L_56 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_56);
		RuntimeObject* L_58 = __this->___SELECTQUANTUM_19;
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)44), L_58);
		RuntimeObject* L_59;
		L_59 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_59);
		NullCheck(L_60);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)145), (RuntimeObject*)NULL);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_61 = (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF*)il2cpp_codegen_object_new(SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		SELECTNONE__ctor_mFF1135D9058921B26DEC652619B7A667380D5451(L_61, NULL);
		V_0 = L_61;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_62 = V_0;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_63 = L_62;
		RuntimeObject* L_64;
		L_64 = PDAMESSAGEOFF_get_MY_m7AA9C09B02028FFC41C82120C25B16EF40452994_inline(__this, NULL);
		NullCheck(L_63);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_63, L_64);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_65 = L_63;
		RuntimeObject* L_66;
		L_66 = PDAMESSAGEOFF_get_THERE_m7451E6E0B7E27172ECE267F46109F89446DE27C8_inline(__this, NULL);
		NullCheck(L_65);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_65, L_66);
		RuntimeObject* L_67;
		L_67 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_65);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_65, L_67);
		RuntimeObject* L_68;
		L_68 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_69 = V_0;
		NullCheck(L_68);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_68, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_69);
		RuntimeObject* L_71;
		L_71 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_71);
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)-599552498), (bool)1, (bool)1);
		__this->___BLANKSTR_24 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLANKSTR_24), (void*)L_73);
		RuntimeObject* L_74;
		L_74 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		RuntimeObject* L_75 = __this->___BLANKSTR_24;
		NullCheck(L_74);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_74, ((int32_t)361798934), L_75);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_76 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_76, NULL);
		V_1 = L_76;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_77 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_78 = L_77;
		RuntimeObject* L_79;
		L_79 = PDAMESSAGEOFF_get_MY_m7AA9C09B02028FFC41C82120C25B16EF40452994_inline(__this, NULL);
		NullCheck(L_78);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_78, L_79);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_80 = L_78;
		RuntimeObject* L_81;
		L_81 = PDAMESSAGEOFF_get_THERE_m7451E6E0B7E27172ECE267F46109F89446DE27C8_inline(__this, NULL);
		NullCheck(L_80);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_80, L_81);
		RuntimeObject* L_82;
		L_82 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_80);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_80, L_82);
		RuntimeObject* L_83;
		L_83 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_84 = V_1;
		NullCheck(L_83);
		RuntimeObject* L_85;
		L_85 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_83, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_84);
		SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* L_86 = (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD*)il2cpp_codegen_object_new(SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD_il2cpp_TypeInfo_var);
		SHOWWEAPON__ctor_m10112909615282BE73D82296C8A4E36231C295CD(L_86, NULL);
		V_2 = L_86;
		SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* L_87 = V_2;
		SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* L_88 = L_87;
		RuntimeObject* L_89;
		L_89 = PDAMESSAGEOFF_get_MY_m7AA9C09B02028FFC41C82120C25B16EF40452994_inline(__this, NULL);
		NullCheck(L_88);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_88, L_89);
		SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* L_90 = L_88;
		RuntimeObject* L_91;
		L_91 = PDAMESSAGEOFF_get_THERE_m7451E6E0B7E27172ECE267F46109F89446DE27C8_inline(__this, NULL);
		NullCheck(L_90);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_90, L_91);
		RuntimeObject* L_92;
		L_92 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_90);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_90, L_92);
		RuntimeObject* L_93;
		L_93 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* L_94 = V_2;
		NullCheck(L_93);
		RuntimeObject* L_95;
		L_95 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_93, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_94);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_96 = (SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF*)il2cpp_codegen_object_new(SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF_il2cpp_TypeInfo_var);
		SELECTNONE__ctor_mFF1135D9058921B26DEC652619B7A667380D5451(L_96, NULL);
		V_3 = L_96;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_97 = V_3;
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_98 = L_97;
		RuntimeObject* L_99;
		L_99 = PDAMESSAGEOFF_get_MY_m7AA9C09B02028FFC41C82120C25B16EF40452994_inline(__this, NULL);
		NullCheck(L_98);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_98, L_99);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_100 = L_98;
		RuntimeObject* L_101;
		L_101 = PDAMESSAGEOFF_get_THERE_m7451E6E0B7E27172ECE267F46109F89446DE27C8_inline(__this, NULL);
		NullCheck(L_100);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_100, L_101);
		RuntimeObject* L_102;
		L_102 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_100);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_100, L_102);
		RuntimeObject* L_103;
		L_103 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		SELECTNONE_t1235AF1CD200F240EB74748CEC7819390667D1CF* L_104 = V_3;
		NullCheck(L_103);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_103, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_104);
		ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* L_106 = (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A*)il2cpp_codegen_object_new(ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A_il2cpp_TypeInfo_var);
		ENDOFLEVEL__ctor_m38A99CE3219D7292F2047E5A82BE6FDF35D76E2A(L_106, NULL);
		V_4 = L_106;
		ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* L_107 = V_4;
		ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* L_108 = L_107;
		RuntimeObject* L_109;
		L_109 = PDAMESSAGEOFF_get_MY_m7AA9C09B02028FFC41C82120C25B16EF40452994_inline(__this, NULL);
		NullCheck(L_108);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_108, L_109);
		ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* L_110 = L_108;
		RuntimeObject* L_111;
		L_111 = PDAMESSAGEOFF_get_THERE_m7451E6E0B7E27172ECE267F46109F89446DE27C8_inline(__this, NULL);
		NullCheck(L_110);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_110, L_111);
		RuntimeObject* L_112;
		L_112 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		NullCheck(L_110);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_110, L_112);
		RuntimeObject* L_113;
		L_113 = PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline(__this, NULL);
		ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* L_114 = V_4;
		NullCheck(L_113);
		RuntimeObject* L_115;
		L_115 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_113, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_114);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPEATMUSIC_get_MY_mC88B935C53FC00F26F22A9E680E2C8F6FE8B3ED6 (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPEATMUSIC_set_MY_m7CB550FE526258DCABC236BE6E982A52E1C44D5E (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPEATMUSIC_get_THERE_mEE87B019E806C7AC79070CD107876AACA7A232CD (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPEATMUSIC_set_THERE_mA0872F60EBBC1F0DEF57D437D78E22BD3A6E1A51 (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPEATMUSIC_get__world_mA6AE373909CCBEA0FAA10527EFF61A41ACA3C8FB (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPEATMUSIC_set__world_m1A77505F29C1DDD4FE5AD98FE30B9529AF07E52D (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* REPEATMUSIC_get_Current_m5DA8E5834B51E535C122FDEE11EC396447973CFB (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPEATMUSIC_set_Current_m848B52B3344B73D4F34604AC00EB3FB8EA99E3C8 (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPEATMUSIC_Reset_m3C31BA7169153876BAABF99F0F8C4BFBEC8A7A86 (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPEATMUSIC__ctor_m01ECBF5F8BD90A5E0C5C80D018E44C51F69B917A (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void REPEATMUSIC__ctor_m007A94C215E08D56E6354EB184FFDBF5F778F487 (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		REPEATMUSIC_set_MY_m7CB550FE526258DCABC236BE6E982A52E1C44D5E_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		REPEATMUSIC_set_THERE_mA0872F60EBBC1F0DEF57D437D78E22BD3A6E1A51_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		REPEATMUSIC_set__world_m1A77505F29C1DDD4FE5AD98FE30B9529AF07E52D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool REPEATMUSIC_MoveNext_mAB2D58DA1B3A5D2CB9DE0BFBDFEBF193220D9B7C (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = REPEATMUSIC_get__world_mA6AE373909CCBEA0FAA10527EFF61A41ACA3C8FB_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-1546394584));
		__this->___SECCOUNTER_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SECCOUNTER_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___SECCOUNTER_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___SECCOUNTER_1_val = L_4;
		float L_5 = __this->___SECCOUNTER_1_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_5, (0.0f), NULL);
		RuntimeObject* L_7;
		L_7 = REPEATMUSIC_get__world_mA6AE373909CCBEA0FAA10527EFF61A41ACA3C8FB_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)-1546394584));
		__this->___SECCOUNTER_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SECCOUNTER_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___SECCOUNTER_3;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___SECCOUNTER_3_val = L_10;
		RuntimeObject* L_11;
		L_11 = REPEATMUSIC_get__world_mA6AE373909CCBEA0FAA10527EFF61A41ACA3C8FB_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, 5, ((int32_t)-1546394584));
		__this->___SECCOUNTER_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SECCOUNTER_4), (void*)L_12);
		RuntimeObject* L_13 = __this->___SECCOUNTER_4;
		float L_14 = __this->___SECCOUNTER_3_val;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)231), ((float)il2cpp_codegen_add(L_14, (1.0f))));
		RuntimeObject* L_15;
		L_15 = REPEATMUSIC_get__world_mA6AE373909CCBEA0FAA10527EFF61A41ACA3C8FB_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)-122250632));
		__this->___CDTRACKTIME_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDTRACKTIME_5), (void*)L_16);
		RuntimeObject* L_17 = __this->___CDTRACKTIME_5;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (bool)1);
		__this->___CDTRACKTIME_5_val = L_18;
		RuntimeObject* L_19;
		L_19 = REPEATMUSIC_get__world_mA6AE373909CCBEA0FAA10527EFF61A41ACA3C8FB_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)-1546394584));
		__this->___SECCOUNTER_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SECCOUNTER_6), (void*)L_20);
		RuntimeObject* L_21 = __this->___SECCOUNTER_6;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), (bool)1);
		__this->___SECCOUNTER_6_val = L_22;
		float L_23 = __this->___SECCOUNTER_6_val;
		float L_24 = __this->___CDTRACKTIME_5_val;
		bool L_25;
		L_25 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_23, L_24, NULL);
		if (!L_25)
		{
			goto IL_0142;
		}
	}
	{
		RuntimeObject* L_26;
		L_26 = REPEATMUSIC_get__world_mA6AE373909CCBEA0FAA10527EFF61A41ACA3C8FB_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_26, 5, ((int32_t)-1546394584));
		__this->___SECCOUNTER_8 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SECCOUNTER_8), (void*)L_27);
		RuntimeObject* L_28 = __this->___SECCOUNTER_8;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)231), (0.0f));
	}

IL_0142:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETSOUNDVOL_get_MY_m985861D509557C005ABFBBE5D7105BA3D59DCB84 (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETSOUNDVOL_set_MY_m65A99CBB916529325C93F9C5F379055D90D954FD (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETSOUNDVOL_get_THERE_mDCE97CF5DA92DF414C0E7DBCDE87CCA62758B994 (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETSOUNDVOL_set_THERE_mF506D2935706B328517B14551B79887198D70C40 (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETSOUNDVOL_get__world_m40C84DBEDC491D29EAAB7C41675B8491DB7D5A6F (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETSOUNDVOL_set__world_mD0BA6FEB93132F86A7C1469E12230848608B10E0 (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SETSOUNDVOL_get_Current_mA3F411E435FF3C52374EDC8D05C61F8834E373B0 (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETSOUNDVOL_set_Current_m2C95129DB4D3B43F2985681F1117A418EE472548 (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETSOUNDVOL_Reset_m8E8EB78280E00E497B8998AA4CE4BBC86B2B3FEA (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETSOUNDVOL__ctor_m001722664AF9478DF59BA1AD23EFDC1F7FB11D7B (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SETSOUNDVOL__ctor_mAC37A266CE542C128536E4F9BB5D4B4F4F16398A (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SETSOUNDVOL_set_MY_m65A99CBB916529325C93F9C5F379055D90D954FD_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SETSOUNDVOL_set_THERE_mF506D2935706B328517B14551B79887198D70C40_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SETSOUNDVOL_set__world_mD0BA6FEB93132F86A7C1469E12230848608B10E0_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SETSOUNDVOL_MoveNext_m4955378A311A3B6BAADE768B8CEC600DD45A38EC (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, const RuntimeMethod* method) 
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
		L_1 = SETSOUNDVOL_get__world_m40C84DBEDC491D29EAAB7C41675B8491DB7D5A6F_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)299848383));
		__this->___SOUND_VOL_BUFFER_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_BUFFER_0), (void*)L_2);
		RuntimeObject* L_3 = __this->___SOUND_VOL_BUFFER_0;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___SOUND_VOL_BUFFER_0_val = L_4;
		RuntimeObject* L_5;
		L_5 = SETSOUNDVOL_get__world_m40C84DBEDC491D29EAAB7C41675B8491DB7D5A6F_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)405));
		__this->___SOUND_VOL_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_1), (void*)L_6);
		RuntimeObject* L_7 = __this->___SOUND_VOL_1;
		float L_8 = __this->___SOUND_VOL_BUFFER_0_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), L_8);
		RuntimeObject* L_9;
		L_9 = SETSOUNDVOL_get__world_m40C84DBEDC491D29EAAB7C41675B8491DB7D5A6F_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)-1700001905));
		__this->___CDAUDIO_VOL_BUFFER_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_BUFFER_2), (void*)L_10);
		RuntimeObject* L_11 = __this->___CDAUDIO_VOL_BUFFER_2;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___CDAUDIO_VOL_BUFFER_2_val = L_12;
		RuntimeObject* L_13;
		L_13 = SETSOUNDVOL_get__world_m40C84DBEDC491D29EAAB7C41675B8491DB7D5A6F_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)407));
		__this->___CDAUDIO_VOL_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_3), (void*)L_14);
		RuntimeObject* L_15 = __this->___CDAUDIO_VOL_3;
		float L_16 = __this->___CDAUDIO_VOL_BUFFER_2_val;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)231), L_16);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MOUSE_TOGGLE_get_MY_mEB0DCD586EA242DBE56CF50E44F1F4BEEEB29644 (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOUSE_TOGGLE_set_MY_m7FD02CA6FD917ADD9C7FA9D0D21922948EA9F960 (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MOUSE_TOGGLE_get_THERE_m4B1A2F6AA4D9FF72ABC38385CE795BCAD355D7D6 (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOUSE_TOGGLE_set_THERE_m825576062A98EDFA45D3AFC9D61D2A0C910342CA (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MOUSE_TOGGLE_get__world_m48AEB2BA620EAC65D9B1AA05C973A123B7A2F288 (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOUSE_TOGGLE_set__world_m255DB775C45850AF6E81C7D7BB194535FC1925E5 (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MOUSE_TOGGLE_get_Current_m04627BBB469D83408BEFCB57DCD1EC33D5E5397E (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOUSE_TOGGLE_set_Current_m3B2D63C2B7DA2C2DFF80236526C3ECF550E3E80D (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOUSE_TOGGLE_Reset_m474AD16439BC77C0FE9E6362B125D49CC3EA3E07 (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOUSE_TOGGLE__ctor_mF2606507860BF1D51AFE405E08DFB3AFC611B3F6 (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MOUSE_TOGGLE__ctor_mBEDB91D7A8787545B8E8D807D6B88868BD4DDB99 (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		MOUSE_TOGGLE_set_MY_m7FD02CA6FD917ADD9C7FA9D0D21922948EA9F960_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		MOUSE_TOGGLE_set_THERE_m825576062A98EDFA45D3AFC9D61D2A0C910342CA_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		MOUSE_TOGGLE_set__world_m255DB775C45850AF6E81C7D7BB194535FC1925E5_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MOUSE_TOGGLE_MoveNext_m1B22799AD900CC51DA7E071B99CDCE169B0F67C4 (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, const RuntimeMethod* method) 
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
		L_1 = MOUSE_TOGGLE_get__world_m48AEB2BA620EAC65D9B1AA05C973A123B7A2F288_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)388));
		__this->___MOUSE_MODE_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOUSE_MODE_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = MOUSE_TOGGLE_get__world_m48AEB2BA620EAC65D9B1AA05C973A123B7A2F288_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_3, 5, ((int32_t)388));
		__this->___MOUSE_MODE_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOUSE_MODE_1), (void*)L_4);
		RuntimeObject* L_5 = __this->___MOUSE_MODE_1;
		NullCheck(L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)231), (bool)1);
		__this->___MOUSE_MODE_1_val = L_6;
		RuntimeObject* L_7 = __this->___MOUSE_MODE_0;
		float L_8 = __this->___MOUSE_MODE_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (2.0f))));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SCAN_OBJ_get_MY_m7B779D3B0AFDBE9EFAF7F2177ADF565475692D5A (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCAN_OBJ_set_MY_m15BE4726451AD6F2445F3707D027545147DBBAB0 (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SCAN_OBJ_get_THERE_m74DF5DAC1A1AA1DD350046105EC28A23D68C3105 (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCAN_OBJ_set_THERE_m466095617BD65BD32A59DDBA7FF2516DD3210096 (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SCAN_OBJ_get__world_m9589B093A4AA81ADA1748A6090EA1B8E6963EDCF (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCAN_OBJ_set__world_m089FAEDAC3FFB51F594CF45D7E30ACD59F3F40AC (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SCAN_OBJ_get_Current_m75CA18265D29E51D5C8B2A82559AAB6B104A3365 (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCAN_OBJ_set_Current_m31CB7F2C873D7EC41096B72C8DBAD00712462F3E (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCAN_OBJ_Reset_m93C00C45D3F115E8696088E1317A13CB85256901 (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCAN_OBJ__ctor_m69C5451C73F4D0C3F4B0B9E8A97ADAAE9C18B3A0 (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCAN_OBJ__ctor_m29F9AA5BCDC82DE3845187ACC03A382AA6B51A14 (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SCAN_OBJ_set_MY_m15BE4726451AD6F2445F3707D027545147DBBAB0_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SCAN_OBJ_set_THERE_m466095617BD65BD32A59DDBA7FF2516DD3210096_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SCAN_OBJ_set__world_m089FAEDAC3FFB51F594CF45D7E30ACD59F3F40AC_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SCAN_OBJ_MoveNext_m79EF17626B22CDDCE4A27C2C7A0D393A415DCB69 (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____cursor;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY1_get_MY_m14E81584D27B15F3E2C9EB5C7C87DA17A4AC00A8 (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY1_set_MY_m3017F54D40D2596EEAB47207B827A7BA42995910 (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY1_get_THERE_m823B4E7B8DD3533344F4DD00F9FAF91DE17A5584 (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY1_set_THERE_m0AB74752128F3E398B8D484302C72CCB5EDBF26B (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY1_get__world_mF73C5244ED752E699E22BCFE72E10CCE40B0565A (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY1_set__world_m77F256F2D3844F57FF105E3C7C423BFB161D29C9 (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY1_get_Current_mF7CB981A0DE1311BC9BE674D6CD86E9005126102 (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY1_set_Current_m8D8A67687916399C2109B852683EF4B2FD066DBB (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY1_Reset_mF0B08FFE6FC89DD0C41368B832F383EFE281D12B (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY1__ctor_mA2A38C6BFE0E2C9166C44AB37B3E532E81503BBA (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY1__ctor_m97E7A41A6658C10EBE616D577CF274821518AEA4 (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKKEY1_set_MY_m3017F54D40D2596EEAB47207B827A7BA42995910_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKKEY1_set_THERE_m0AB74752128F3E398B8D484302C72CCB5EDBF26B_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKKEY1_set__world_m77F256F2D3844F57FF105E3C7C423BFB161D29C9_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKKEY1_MoveNext_m8E1A4CF2EC43B002934AAF44990CB96FB2BC523E (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) 
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
		L_1 = PICKKEY1_get_MY_m14E81584D27B15F3E2C9EB5C7C87DA17A4AC00A8_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)204), (1.0f));
		RuntimeObject* L_3;
		L_3 = PICKKEY1_get__world_mF73C5244ED752E699E22BCFE72E10CCE40B0565A_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)1664629430), (bool)1, (bool)1);
		__this->___TICKETSND_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TICKETSND_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = PICKKEY1_get__world_mF73C5244ED752E699E22BCFE72E10CCE40B0565A_inline(__this, NULL);
		RuntimeObject* L_7 = __this->___TICKETSND_3;
		NullCheck(L_6);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_6, L_7, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_8;
		L_8 = PICKKEY1_get__world_mF73C5244ED752E699E22BCFE72E10CCE40B0565A_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)2089248007));
		__this->___KEY1_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY1_6), (void*)L_9);
		RuntimeObject* L_10 = __this->___KEY1_6;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), (1.0f));
		RuntimeObject* L_11;
		L_11 = PICKKEY1_get__world_mF73C5244ED752E699E22BCFE72E10CCE40B0565A_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-1998911255), (bool)1, (bool)1);
		__this->___GET03STR_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET03STR_7), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = PICKKEY1_get__world_mF73C5244ED752E699E22BCFE72E10CCE40B0565A_inline(__this, NULL);
		RuntimeObject* L_15 = __this->___GET03STR_7;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, ((int32_t)361798934), L_15);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_16 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_16, NULL);
		V_0 = L_16;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_17 = V_0;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_18 = L_17;
		RuntimeObject* L_19;
		L_19 = PICKKEY1_get_MY_m14E81584D27B15F3E2C9EB5C7C87DA17A4AC00A8_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_18, L_19);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_20 = L_18;
		RuntimeObject* L_21;
		L_21 = PICKKEY1_get_THERE_m823B4E7B8DD3533344F4DD00F9FAF91DE17A5584_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		RuntimeObject* L_22;
		L_22 = PICKKEY1_get__world_mF73C5244ED752E699E22BCFE72E10CCE40B0565A_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_22);
		RuntimeObject* L_23;
		L_23 = PICKKEY1_get__world_mF73C5244ED752E699E22BCFE72E10CCE40B0565A_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_24 = V_0;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_24);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY2_get_MY_mF4BF4229BF6FF5A64F6CCF7A3D7DE4B42B1885AE (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY2_set_MY_m85E33F21C5D10E806E1D8C33EE5AA5C54899AC69 (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY2_get_THERE_mEF3CE8275FB4DAACB941EBFC1D50A9EAC74738B8 (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY2_set_THERE_m78C151F45293AED07BCF00263E84109774C46818 (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY2_get__world_mDFB51ECAE0162BA5D7A6D43AA09E45E94F5925E3 (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY2_set__world_m4CE5C132865282B46DA79D72E74DA24A48C914DE (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY2_get_Current_m293B5C6E133243C07908F07D5B2CDE9272CB8EB3 (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY2_set_Current_mCAB5F1BF84F4C1BF9D223FB1C2341D9462436614 (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY2_Reset_mB0DC58895C06D50F624F31C6080D58464CFF0007 (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY2__ctor_mDE44529AF74E45D8BA64902DE7FEB48881ECDB1F (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKKEY2__ctor_m0A975E8B4F67F9A8665CCD4D0F6C32F35D5BB937 (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKKEY2_set_MY_m85E33F21C5D10E806E1D8C33EE5AA5C54899AC69_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKKEY2_set_THERE_m78C151F45293AED07BCF00263E84109774C46818_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKKEY2_set__world_m4CE5C132865282B46DA79D72E74DA24A48C914DE_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKKEY2_MoveNext_m32112ECFC0E3A12FE4BBA62F2CF39A6CE9C59E4C (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) 
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
		L_1 = PICKKEY2_get_MY_mF4BF4229BF6FF5A64F6CCF7A3D7DE4B42B1885AE_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)204), (1.0f));
		RuntimeObject* L_3;
		L_3 = PICKKEY2_get__world_mDFB51ECAE0162BA5D7A6D43AA09E45E94F5925E3_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-1142635589), (bool)1, (bool)1);
		__this->___KEYSND_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEYSND_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = PICKKEY2_get__world_mDFB51ECAE0162BA5D7A6D43AA09E45E94F5925E3_inline(__this, NULL);
		RuntimeObject* L_7 = __this->___KEYSND_3;
		NullCheck(L_6);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_6, L_7, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_8;
		L_8 = PICKKEY2_get__world_mDFB51ECAE0162BA5D7A6D43AA09E45E94F5925E3_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)2089248008));
		__this->___KEY2_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY2_6), (void*)L_9);
		RuntimeObject* L_10 = __this->___KEY2_6;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), (1.0f));
		RuntimeObject* L_11;
		L_11 = PICKKEY2_get__world_mDFB51ECAE0162BA5D7A6D43AA09E45E94F5925E3_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)-1998875318), (bool)1, (bool)1);
		__this->___GET04STR_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GET04STR_7), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = PICKKEY2_get__world_mDFB51ECAE0162BA5D7A6D43AA09E45E94F5925E3_inline(__this, NULL);
		RuntimeObject* L_15 = __this->___GET04STR_7;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, ((int32_t)361798934), L_15);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_16 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_16, NULL);
		V_0 = L_16;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_17 = V_0;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_18 = L_17;
		RuntimeObject* L_19;
		L_19 = PICKKEY2_get_MY_mF4BF4229BF6FF5A64F6CCF7A3D7DE4B42B1885AE_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_18, L_19);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_20 = L_18;
		RuntimeObject* L_21;
		L_21 = PICKKEY2_get_THERE_mEF3CE8275FB4DAACB941EBFC1D50A9EAC74738B8_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_21);
		RuntimeObject* L_22;
		L_22 = PICKKEY2_get__world_mDFB51ECAE0162BA5D7A6D43AA09E45E94F5925E3_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_20, L_22);
		RuntimeObject* L_23;
		L_23 = PICKKEY2_get__world_mDFB51ECAE0162BA5D7A6D43AA09E45E94F5925E3_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_24 = V_0;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_24);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPLOCALMP5_get_MY_mA9C7A8C5D33F2EE7242527E905AED48106368280 (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPLOCALMP5_set_MY_m612F6D212DCC322839627CAA01E285EFDE1CBC94 (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPLOCALMP5_get_THERE_m325965C8F285A423C1BD781B5BA23A04EC128AF2 (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPLOCALMP5_set_THERE_m2C78775F6658818CC2623B10B46C6ED4BAFE4CD1 (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPLOCALMP5_get__world_mCD7ECD792058E3F871C3E9F87D103FFF60080278 (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPLOCALMP5_set__world_m8D0070BB90D88599438CF2DB6D8FB1425EFB862E (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PICKUPLOCALMP5_get_Current_m3F8F8BC1271B653D2FA7CC0F1BE3295E65692F81 (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPLOCALMP5_set_Current_m34F7D5A18FE89557850797D0C4BF19B1C8FF9DC6 (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPLOCALMP5_Reset_m1896A71FCE793293E5060709FEE391693A7DF125 (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPLOCALMP5__ctor_mA819198100CBF69A788BFA1F3DB85A62B58589EC (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PICKUPLOCALMP5__ctor_m1D1F62F7D6EAAD81A880C4E37FEEA892F54208C5 (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		PICKUPLOCALMP5_set_MY_m612F6D212DCC322839627CAA01E285EFDE1CBC94_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		PICKUPLOCALMP5_set_THERE_m2C78775F6658818CC2623B10B46C6ED4BAFE4CD1_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		PICKUPLOCALMP5_set__world_m8D0070BB90D88599438CF2DB6D8FB1425EFB862E_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PICKUPLOCALMP5_MoveNext_m0CEC6B6F0813C5F439A299EAF8F55F8B6D0682AE (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* L_1 = (PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F*)il2cpp_codegen_object_new(PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F_il2cpp_TypeInfo_var);
		PICKUPMP5__ctor_m2E2DB8B07BB588612F5378E57F6E5D0FDFED2E8E(L_1, NULL);
		V_0 = L_1;
		PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* L_2 = V_0;
		PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = PICKUPLOCALMP5_get_MY_mA9C7A8C5D33F2EE7242527E905AED48106368280_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = PICKUPLOCALMP5_get_THERE_m325965C8F285A423C1BD781B5BA23A04EC128AF2_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = PICKUPLOCALMP5_get__world_mCD7ECD792058E3F871C3E9F87D103FFF60080278_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = PICKUPLOCALMP5_get__world_mCD7ECD792058E3F871C3E9F87D103FFF60080278_inline(__this, NULL);
		PICKUPMP5_tC59AE4364B23AB6E70051A0A114097696048E44F* L_9 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENDPHASE_get_MY_mFA2D59E510AA391B59A32617D7A8BEE170974A60 (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDPHASE_set_MY_m1AD1EEC1FE2AC0986892CAFA82793C663AD84AD4 (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENDPHASE_get_THERE_m0012FD34F2D107D631FB809C345FBDD59632340E (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDPHASE_set_THERE_mCA2ECC076AE20C100124547F506BB69A51A29A8E (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENDPHASE_get__world_m5A82849C2C37134DE80626F2DE9802E85D824878 (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDPHASE_set__world_mDF8AA195379FB34DE9DCB9396B3F976C0A03CFDD (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENDPHASE_get_Current_mF53E5C0F5306E4697CEF1A2C416DE9ED83449D40 (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDPHASE_set_Current_m853DFBF431223168E9B0FD1344ADFBB40E14E69D (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDPHASE_Reset_mB4DF74BAE313D3F985B2B2946D32A9152E1DF408 (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDPHASE__ctor_m2D24FBE510364FEAE4A0FE7AAA2569A8A0871DDD (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDPHASE__ctor_m04808CAF26A4C404311891FB4E8E7077FAA9EDDF (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		ENDPHASE_set_MY_m1AD1EEC1FE2AC0986892CAFA82793C663AD84AD4_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		ENDPHASE_set_THERE_mCA2ECC076AE20C100124547F506BB69A51A29A8E_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		ENDPHASE_set__world_mDF8AA195379FB34DE9DCB9396B3F976C0A03CFDD_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ENDPHASE_MoveNext_mF6F31A8D662CCE57B344CDB2310DB3353EA917FE (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* G_B1_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = ENDPHASE_get__world_m5A82849C2C37134DE80626F2DE9802E85D824878_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)1109344053), (bool)1, (bool)1);
		__this->___ENDPHASE_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ENDPHASE_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = ENDPHASE_get__world_m5A82849C2C37134DE80626F2DE9802E85D824878_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = L_5;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = __this;
			goto IL_0037;
		}
		G_B1_0 = L_6;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0040;
	}

IL_0037:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B2_0, ((int32_t)22), (bool)1, (bool)1);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_0040:
	{
		NullCheck(G_B3_1);
		G_B3_1->___temp_3 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___temp_3), (void*)G_B3_0);
		RuntimeObject* L_8 = __this->___temp_3;
		RuntimeObject* L_9 = __this->___ENDPHASE_0;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_11;
		L_11 = ENDPHASE_get_MY_mFA2D59E510AA391B59A32617D7A8BEE170974A60_inline(__this, NULL);
		__this->___MY_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_6;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_13;
		L_13 = ENDPHASE_get__world_m5A82849C2C37134DE80626F2DE9802E85D824878_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)1109344053), (bool)1, (bool)1);
		__this->___ENDPHASE_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ENDPHASE_7), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = ENDPHASE_get__world_m5A82849C2C37134DE80626F2DE9802E85D824878_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_16);
		RuntimeObject* L_18 = __this->___ENDPHASE_7;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)22), L_18);
	}

IL_00aa:
	{
		RuntimeObject* L_19;
		L_19 = ENDPHASE_get__world_m5A82849C2C37134DE80626F2DE9802E85D824878_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)-922693617));
		__this->___SHOT_SOUND_ON_11 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOT_SOUND_ON_11), (void*)L_20);
		RuntimeObject* L_21 = __this->___SHOT_SOUND_ON_11;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), (bool)1);
		__this->___SHOT_SOUND_ON_11_val = L_22;
		float L_23 = __this->___SHOT_SOUND_ON_11_val;
		bool L_24;
		L_24 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_23, (0.0f), NULL);
		if (!L_24)
		{
			goto IL_00ec;
		}
	}
	{
		return (bool)0;
	}

IL_00ec:
	{
		SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* L_25 = (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72*)il2cpp_codegen_object_new(SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72_il2cpp_TypeInfo_var);
		SHOWPDABRIEFING__ctor_m85066EB3F6155ACA96FD1F97DF8B12BE4683C913(L_25, NULL);
		V_0 = L_25;
		SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* L_26 = V_0;
		SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* L_27 = L_26;
		RuntimeObject* L_28;
		L_28 = ENDPHASE_get_MY_mFA2D59E510AA391B59A32617D7A8BEE170974A60_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_28);
		SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* L_29 = L_27;
		RuntimeObject* L_30;
		L_30 = ENDPHASE_get_THERE_m0012FD34F2D107D631FB809C345FBDD59632340E_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		RuntimeObject* L_31;
		L_31 = ENDPHASE_get__world_m5A82849C2C37134DE80626F2DE9802E85D824878_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_31);
		RuntimeObject* L_32;
		L_32 = ENDPHASE_get__world_m5A82849C2C37134DE80626F2DE9802E85D824878_inline(__this, NULL);
		SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* L_33 = V_0;
		NullCheck(L_32);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_33);
		RuntimeObject* L_35;
		L_35 = ENDPHASE_get__world_m5A82849C2C37134DE80626F2DE9802E85D824878_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)22), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLTURN_get_MY_m6ABD140CDA26AF33D825E861E8FB774F6CCE30C8 (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTURN_set_MY_mA923BECBF50B0E01BE2E3D3935B34814C1FF3348 (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLTURN_get_THERE_m7B7CCFEB7E3BAA1E9DFD30E1394C3F26442610F2 (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTURN_set_THERE_mC5E940D2F1D1C897265A9E2E346F2B81CC1BD9DF (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTURN_set__world_mA9A3239DC7D10C929E8775D49BE62965776AE924 (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLTURN_get_Current_m11DCC048DD1854C447CE2567ECDAE18A95820BE5 (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTURN_set_Current_m47FE6B043D0EB8D1A34D81209884DD52610380FC (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTURN_Reset_m8D5A2D12A8C11203695A060BF182E453132DFBA6 (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTURN__ctor_m1B0F49541BC45C24C4AC8F92D90601ADB0BC8E29 (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLTURN__ctor_m29DC47FD43AFFCB6CE512227ACEADC97E787333D (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLTURN_set_MY_mA923BECBF50B0E01BE2E3D3935B34814C1FF3348_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLTURN_set_THERE_mC5E940D2F1D1C897265A9E2E346F2B81CC1BD9DF_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLTURN_set__world_mA9A3239DC7D10C929E8775D49BE62965776AE924_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLTURN_MoveNext_m368A22B9F720E260AF34B4D15C590167CB5F54CA (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* V_0 = NULL;
	TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* V_1 = NULL;
	TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)33817649));
		__this->___WAITTIME_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WAITTIME_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
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
		DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* L_11 = (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1*)il2cpp_codegen_object_new(DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1_il2cpp_TypeInfo_var);
		DRKLLISTEN__ctor_m2B65F7F011FDAE58B2EAE5E8B2B3E0B3959BC6F3(L_11, NULL);
		V_0 = L_11;
		DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* L_12 = V_0;
		DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* L_13 = L_12;
		RuntimeObject* L_14;
		L_14 = DRKLTURN_get_MY_m6ABD140CDA26AF33D825E861E8FB774F6CCE30C8_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_14);
		DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* L_15 = L_13;
		RuntimeObject* L_16;
		L_16 = DRKLTURN_get_THERE_m7B7CCFEB7E3BAA1E9DFD30E1394C3F26442610F2_inline(__this, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_15, L_16);
		RuntimeObject* L_17;
		L_17 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_15, L_17);
		RuntimeObject* L_18;
		L_18 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
		DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* L_19 = V_0;
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
		L_23 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, 5, ((int32_t)16212225));
		__this->___RIGHTTURNDRKL_11 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNDRKL_11), (void*)L_24);
		RuntimeObject* L_25;
		L_25 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_25, 5, ((int32_t)16212225));
		__this->___RIGHTTURNDRKL_12 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNDRKL_12), (void*)L_26);
		RuntimeObject* L_27 = __this->___RIGHTTURNDRKL_12;
		NullCheck(L_27);
		float L_28;
		L_28 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNDRKL_12_val = L_28;
		RuntimeObject* L_29;
		L_29 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, 5, ((int32_t)16212225));
		__this->___RIGHTTURNDRKL_14 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNDRKL_14), (void*)L_30);
		RuntimeObject* L_31 = __this->___RIGHTTURNDRKL_14;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNDRKL_14_val = L_32;
		RuntimeObject* L_33;
		L_33 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)16212225));
		__this->___RIGHTTURNDRKL_20 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNDRKL_20), (void*)L_34);
		RuntimeObject* L_35 = __this->___RIGHTTURNDRKL_20;
		NullCheck(L_35);
		float L_36;
		L_36 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNDRKL_20_val = L_36;
		RuntimeObject* L_37 = __this->___RIGHTTURNDRKL_11;
		float L_38 = __this->___RIGHTTURNDRKL_14_val;
		float L_39 = __this->___RIGHTTURNDRKL_20_val;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_38, (1.0f))), ((float)il2cpp_codegen_subtract(L_39, (1.0f))))));
	}

IL_0196:
	{
		RuntimeObject* L_40;
		L_40 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_40, 5, ((int32_t)16212225));
		__this->___RIGHTTURNDRKL_24 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RIGHTTURNDRKL_24), (void*)L_41);
		RuntimeObject* L_42 = __this->___RIGHTTURNDRKL_24;
		NullCheck(L_42);
		float L_43;
		L_43 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)231), (bool)1);
		__this->___RIGHTTURNDRKL_24_val = L_43;
		float L_44 = __this->___RIGHTTURNDRKL_24_val;
		RuntimeObject* L_45 = __this->___RIGHTTURNDRKL_24;
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
		L_50 = DRKLTURN_get_MY_m6ABD140CDA26AF33D825E861E8FB774F6CCE30C8_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		TURNRIGHT_t6808F551C9165AFEE1F182B494BF436242AEC902* L_51 = L_49;
		RuntimeObject* L_52;
		L_52 = DRKLTURN_get_THERE_m7B7CCFEB7E3BAA1E9DFD30E1394C3F26442610F2_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_52);
		RuntimeObject* L_53;
		L_53 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_53);
		RuntimeObject* L_54;
		L_54 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
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
		L_60 = DRKLTURN_get_MY_m6ABD140CDA26AF33D825E861E8FB774F6CCE30C8_inline(__this, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_59, L_60);
		TURNLEFT_tE13DAB1053F822D54E9ED4A896047AE232D85518* L_61 = L_59;
		RuntimeObject* L_62;
		L_62 = DRKLTURN_get_THERE_m7B7CCFEB7E3BAA1E9DFD30E1394C3F26442610F2_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_62);
		RuntimeObject* L_63;
		L_63 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_63);
		RuntimeObject* L_64;
		L_64 = DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009 (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWAIT_set_MY_m0263A93B77DC2B3AB4C51EBAE73EF03E8848FB31 (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLWAIT_get_THERE_mF0CC83BC5ECD10BCA817921B18AF248218D9471A (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWAIT_set_THERE_m6DC367E037AB88D31046EE53689A77CCE2445694 (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLWAIT_get__world_m487170D31C9932109D6E292E15456A106B6945DF (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWAIT_set__world_mB55DC5478EE0D7F6F5CD36C8167D21027DAE1A7C (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLWAIT_get_Current_m360812DE5AEA0CFEC1540E881111249508B237EB (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWAIT_set_Current_m0553267EBF72DF7815D2A0F40C09FFB6CC93F902 (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWAIT_Reset_mEF969F94C9949E0C8337E5560019CBD33170A4C5 (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWAIT__ctor_m8BAB37DB1D838558EB3A52AE4EC89D99D3DE1705 (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWAIT__ctor_m8A3A6FDD547EA042F1B8B9A22FFB43A6E35884DC (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLWAIT_set_MY_m0263A93B77DC2B3AB4C51EBAE73EF03E8848FB31_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLWAIT_set_THERE_m6DC367E037AB88D31046EE53689A77CCE2445694_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLWAIT_set__world_mB55DC5478EE0D7F6F5CD36C8167D21027DAE1A7C_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLWAIT_MoveNext_m17FA959F970C7E0B715AE6A8730E40957E2F8752 (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) 
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
		L_1 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
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
		L_6 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
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
		L_11 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
		__this->___MY_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_10;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_13;
		L_13 = DRKLWAIT_get__world_m487170D31C9932109D6E292E15456A106B6945DF_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1714191146), (bool)1, (bool)1);
		__this->___DRKLJUMP_11 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLJUMP_11), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
		__this->___MY_13 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_13), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_13;
		RuntimeObject* L_18 = __this->___DRKLJUMP_11;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)192), L_18);
		RuntimeObject* L_19;
		L_19 = DRKLWAIT_get__world_m487170D31C9932109D6E292E15456A106B6945DF_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)908617765), (bool)1, (bool)1);
		__this->___DRKLFOLLOWATTACK_14 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLFOLLOWATTACK_14), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
		__this->___MY_16 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_16), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_16;
		RuntimeObject* L_24 = __this->___DRKLFOLLOWATTACK_14;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)193), L_24);
		RuntimeObject* L_25;
		L_25 = DRKLWAIT_get__world_m487170D31C9932109D6E292E15456A106B6945DF_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)1078179746), (bool)1, (bool)1);
		__this->___CYCLEDRKLATTACK_17 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEDRKLATTACK_17), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
		__this->___MY_19 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_19), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_19;
		RuntimeObject* L_30 = __this->___CYCLEDRKLATTACK_17;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)190), L_30);
		RuntimeObject* L_31;
		L_31 = DRKLWAIT_get__world_m487170D31C9932109D6E292E15456A106B6945DF_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)989257407), (bool)1, (bool)1);
		__this->___DRKLHIT_20 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHIT_20), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
		__this->___MY_22 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_22;
		RuntimeObject* L_36 = __this->___DRKLHIT_20;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)209), L_36);
		RuntimeObject* L_37;
		L_37 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
		__this->___MY_25 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_37);
		RuntimeObject* L_38 = __this->___MY_25;
		NullCheck(L_38);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)213), (0.0f));
		RuntimeObject* L_39;
		L_39 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
		__this->___MY_28 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_28), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_28;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_41;
		L_41 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
		__this->___MY_31 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_41);
		RuntimeObject* L_42 = __this->___MY_31;
		NullCheck(L_42);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)176), (0.0f));
		RuntimeObject* L_43;
		L_43 = DRKLWAIT_get__world_m487170D31C9932109D6E292E15456A106B6945DF_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_43);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)-1715126853), (bool)1, (bool)1);
		__this->___DRKL0TEX_32 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL0TEX_32), (void*)L_45);
		RuntimeObject* L_46;
		L_46 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
		__this->___MY_34 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_34), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_34;
		RuntimeObject* L_48 = __this->___DRKL0TEX_32;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)164), L_48);
		RuntimeObject* L_49;
		L_49 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
		__this->___MY_37 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_37), (void*)L_49);
		RuntimeObject* L_50 = __this->___MY_37;
		NullCheck(L_50);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)168), (0.0f));
		RuntimeObject* L_51;
		L_51 = DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline(__this, NULL);
		__this->___MY_40 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_40), (void*)L_51);
		RuntimeObject* L_52 = __this->___MY_40;
		NullCheck(L_52);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)199), (RuntimeObject*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWANDER_set_MY_m00176394F14408AEE96DA3C562DEFEFC9A06BEB6 (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLWANDER_get_THERE_m9A1FE047806F5B164B41D3482280DD711578342C (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWANDER_set_THERE_m72F305A4E933B31C5C991A8AF053A40949C184C5 (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLWANDER_get__world_m7E49C615139C77DDFBF5980BD92D6AA4371DA6FF (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWANDER_set__world_m8C7DC54D12B51DCC7CECC212CE0D84F88825A9BC (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLWANDER_get_Current_m0B4252FA48919F6907BDC4DA0ABA6D9084AEEA04 (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWANDER_set_Current_m8A67B28DA71DDC425BCFAD131DC696F6ED258B5D (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWANDER_Reset_m56175A799F32C211E6FFC97FF4A19BFA09CE45BD (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWANDER__ctor_m87BC0E7CD5879BA412FDDB320AFF374F21ECF1AD (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLWANDER__ctor_m400E9F2AD52E036CB425060E5218B52899F7E301 (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLWANDER_set_MY_m00176394F14408AEE96DA3C562DEFEFC9A06BEB6_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLWANDER_set_THERE_m72F305A4E933B31C5C991A8AF053A40949C184C5_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLWANDER_set__world_m8C7DC54D12B51DCC7CECC212CE0D84F88825A9BC_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLWANDER_MoveNext_m310667726B3789A16844AC7F05D441A23E66E51C (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
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
		RuntimeObject* L_1;
		L_1 = DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = DRKLWANDER_get__world_m7E49C615139C77DDFBF5980BD92D6AA4371DA6FF_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-1714191146), (bool)1, (bool)1);
		__this->___DRKLJUMP_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLJUMP_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___DRKLJUMP_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)192), L_8);
		RuntimeObject* L_9;
		L_9 = DRKLWANDER_get__world_m7E49C615139C77DDFBF5980BD92D6AA4371DA6FF_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)908617765), (bool)1, (bool)1);
		__this->___DRKLFOLLOWATTACK_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLFOLLOWATTACK_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___DRKLFOLLOWATTACK_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)193), L_14);
		RuntimeObject* L_15;
		L_15 = DRKLWANDER_get__world_m7E49C615139C77DDFBF5980BD92D6AA4371DA6FF_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)1078179746), (bool)1, (bool)1);
		__this->___CYCLEDRKLATTACK_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEDRKLATTACK_9), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline(__this, NULL);
		__this->___MY_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_11;
		RuntimeObject* L_20 = __this->___CYCLEDRKLATTACK_9;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)190), L_20);
		RuntimeObject* L_21;
		L_21 = DRKLWANDER_get__world_m7E49C615139C77DDFBF5980BD92D6AA4371DA6FF_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)989257407), (bool)1, (bool)1);
		__this->___DRKLHIT_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHIT_12), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline(__this, NULL);
		__this->___MY_14 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_24);
		RuntimeObject* L_25 = __this->___MY_14;
		RuntimeObject* L_26 = __this->___DRKLHIT_12;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)209), L_26);
		RuntimeObject* L_27;
		L_27 = DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline(__this, NULL);
		__this->___MY_17 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_17;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)213), (0.0f));
		RuntimeObject* L_29;
		L_29 = DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline(__this, NULL);
		__this->___MY_20 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_29);
		RuntimeObject* L_30 = __this->___MY_20;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)176), (1.0f));
		RuntimeObject* L_31;
		L_31 = DRKLWANDER_get__world_m7E49C615139C77DDFBF5980BD92D6AA4371DA6FF_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1715090916), (bool)1, (bool)1);
		__this->___DRKL1TEX_21 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL1TEX_21), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline(__this, NULL);
		__this->___MY_23 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_23;
		RuntimeObject* L_36 = __this->___DRKL1TEX_21;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)164), L_36);
		RuntimeObject* L_37;
		L_37 = DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline(__this, NULL);
		__this->___MY_26 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_37);
		RuntimeObject* L_38 = __this->___MY_26;
		NullCheck(L_38);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)168), (1.0f));
		RuntimeObject* L_39;
		L_39 = DRKLWANDER_get__world_m7E49C615139C77DDFBF5980BD92D6AA4371DA6FF_inline(__this, NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_39);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_27 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_27), (void*)L_41);
		RuntimeObject* L_42;
		L_42 = DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline(__this, NULL);
		__this->___MY_29 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_42);
		RuntimeObject* L_43 = __this->___MY_29;
		RuntimeObject* L_44 = __this->___BULLET_27;
		NullCheck(L_43);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)199), L_44);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_45 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_45, NULL);
		V_0 = L_45;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_46 = V_0;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_47 = L_46;
		RuntimeObject* L_48;
		L_48 = DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_49 = L_47;
		RuntimeObject* L_50;
		L_50 = DRKLWANDER_get_THERE_m9A1FE047806F5B164B41D3482280DD711578342C_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_50);
		RuntimeObject* L_51;
		L_51 = DRKLWANDER_get__world_m7E49C615139C77DDFBF5980BD92D6AA4371DA6FF_inline(__this, NULL);
		NullCheck(L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_49, L_51);
		RuntimeObject* L_52;
		L_52 = DRKLWANDER_get__world_m7E49C615139C77DDFBF5980BD92D6AA4371DA6FF_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_53 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSEARCH_set_MY_m2C2D80C9474DB900A7FBF07E6399FE25DB482439 (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLSEARCH_get_THERE_m5FFD36A9A0679E8FEBF82FC14C8461E98CD264D6 (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSEARCH_set_THERE_mC11856FBC19B2077D5A0641075A90A93918369DD (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557 (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSEARCH_set__world_m750BC843823DE2F7B3A310C94B8D0BD40C8C7125 (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLSEARCH_get_Current_mAB3C95206FB5E1555E6B366D74BD70A6CFECC1E9 (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSEARCH_set_Current_mF31ABFB816E066F8705730F93338A3C4754FDE4D (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSEARCH_Reset_m7AD2264ECD2ED1E44C9B81AAF68AF6F634AA2959 (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSEARCH__ctor_mBA9D972974AA919D9AEBDB3EAD4B397ED1E46627 (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSEARCH__ctor_m2DE7FFD2B9177642FC42BA16F3A5A7C92F6DEAF8 (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLSEARCH_set_MY_m2C2D80C9474DB900A7FBF07E6399FE25DB482439_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLSEARCH_set_THERE_mC11856FBC19B2077D5A0641075A90A93918369DD_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLSEARCH_set__world_m750BC843823DE2F7B3A310C94B8D0BD40C8C7125_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLSEARCH_MoveNext_m13889D9344D09F693B34FC7F27549B672A0F29E7 (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_0 = NULL;
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_1 = NULL;
	DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* V_2 = NULL;
	DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* V_3 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)989257407), (bool)1, (bool)1);
		__this->___DRKLHIT_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHIT_9), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline(__this, NULL);
		__this->___MY_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_11;
		RuntimeObject* L_12 = __this->___DRKLHIT_9;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)209), L_12);
		RuntimeObject* L_13;
		L_13 = DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline(__this, NULL);
		__this->___MY_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_14;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)213), (0.0f));
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_15 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_15, NULL);
		V_0 = L_15;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_16 = V_0;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_17 = L_16;
		RuntimeObject* L_18;
		L_18 = DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline(__this, NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_17, L_18);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_19 = L_17;
		RuntimeObject* L_20;
		L_20 = DRKLSEARCH_get_THERE_m5FFD36A9A0679E8FEBF82FC14C8461E98CD264D6_inline(__this, NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_19, L_20);
		RuntimeObject* L_21;
		L_21 = DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557_inline(__this, NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_19, L_21);
		RuntimeObject* L_22;
		L_22 = DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_23 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_22, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_23);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_25 = (LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511*)il2cpp_codegen_object_new(LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511_il2cpp_TypeInfo_var);
		LOOKPLAYER__ctor_mEA2E7E4ECA7138F40E45790BE744D6A04768277D(L_25, NULL);
		V_1 = L_25;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_26 = V_1;
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_27 = L_26;
		RuntimeObject* L_28;
		L_28 = DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_28);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_29 = L_27;
		RuntimeObject* L_30;
		L_30 = DRKLSEARCH_get_THERE_m5FFD36A9A0679E8FEBF82FC14C8461E98CD264D6_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		RuntimeObject* L_31;
		L_31 = DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_31);
		RuntimeObject* L_32;
		L_32 = DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_33 = V_1;
		NullCheck(L_32);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_33);
		RuntimeObject* L_35;
		L_35 = DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline(__this, NULL);
		__this->___MY_17 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_17;
		NullCheck(L_36);
		float L_37;
		L_37 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)181), (bool)1);
		__this->___temp_18 = L_37;
		float L_38 = __this->___temp_18;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_38, (0.0f), NULL);
		if (!L_39)
		{
			goto IL_019d;
		}
	}
	{
		DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* L_40 = (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05*)il2cpp_codegen_object_new(DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05_il2cpp_TypeInfo_var);
		DRKLWAIT__ctor_m8BAB37DB1D838558EB3A52AE4EC89D99D3DE1705(L_40, NULL);
		V_2 = L_40;
		DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* L_41 = V_2;
		DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* L_42 = L_41;
		RuntimeObject* L_43;
		L_43 = DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline(__this, NULL);
		NullCheck(L_42);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_42, L_43);
		DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* L_44 = L_42;
		RuntimeObject* L_45;
		L_45 = DRKLSEARCH_get_THERE_m5FFD36A9A0679E8FEBF82FC14C8461E98CD264D6_inline(__this, NULL);
		NullCheck(L_44);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_44, L_45);
		RuntimeObject* L_46;
		L_46 = DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557_inline(__this, NULL);
		NullCheck(L_44);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_44, L_46);
		RuntimeObject* L_47;
		L_47 = DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557_inline(__this, NULL);
		DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* L_48 = V_2;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_48);
		return (bool)0;
	}

IL_019d:
	{
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_50 = (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64*)il2cpp_codegen_object_new(DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var);
		DRKLFOLLOWATTACK__ctor_m321A738364A5B7E7FCE9F3684787C52F7C3B76B1(L_50, NULL);
		V_3 = L_50;
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_51 = V_3;
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_52 = L_51;
		RuntimeObject* L_53;
		L_53 = DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline(__this, NULL);
		NullCheck(L_52);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_52, L_53);
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_54 = L_52;
		RuntimeObject* L_55;
		L_55 = DRKLSEARCH_get_THERE_m5FFD36A9A0679E8FEBF82FC14C8461E98CD264D6_inline(__this, NULL);
		NullCheck(L_54);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_54, L_55);
		RuntimeObject* L_56;
		L_56 = DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557_inline(__this, NULL);
		NullCheck(L_54);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_54, L_56);
		RuntimeObject* L_57;
		L_57 = DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557_inline(__this, NULL);
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_58 = V_3;
		NullCheck(L_57);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_57, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_58);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIDE_set_MY_mDBF84DE6A841C7EFC6D6C46C306D398D08A7752D (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIDE_get_THERE_m47AF3245DB1E5C4242055F823AD3C1FFDC1E9822 (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIDE_set_THERE_m11A4A9D26F753955795874989CC67D270D2A95A8 (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2 (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIDE_set__world_m262EC28723EB4F317C1448816C943AF1FC71FBEE (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIDE_get_Current_m38B944B6A6B05DC1FF55F9A4945CCFF5228AAED0 (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIDE_set_Current_mD470036FE8B3ED7B768E39E56C8DC4F1E229EFB6 (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIDE_Reset_mF32068A1603A845E70AA4C1AF7D254719C0C8086 (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIDE__ctor_m5E6B1C3472D82E73A747CA60385EC1FA626813D0 (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHIDE__ctor_mEBC3D95038BBCAD26E9366F35F4EA85CDBB92D1F (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLHIDE_set_MY_mDBF84DE6A841C7EFC6D6C46C306D398D08A7752D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLHIDE_set_THERE_m11A4A9D26F753955795874989CC67D270D2A95A8_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLHIDE_set__world_m262EC28723EB4F317C1448816C943AF1FC71FBEE_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLHIDE_MoveNext_m6F03DDB54D51DBF26E85952DEDD2FA325584AE3B (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_0 = NULL;
	DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0353;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)207), (1.0f));
		RuntimeObject* L_3;
		L_3 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)1357105963), (bool)1, (bool)1);
		__this->___DRKLESCAPE_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLESCAPE_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_8);
		RuntimeObject* L_9 = __this->___MY_8;
		RuntimeObject* L_10 = __this->___DRKLESCAPE_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)192), L_10);
		RuntimeObject* L_11;
		L_11 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_11;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_13;
		L_13 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-712625788), (bool)1, (bool)1);
		__this->___CYCLEDRKLHIDE_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEDRKLHIDE_12), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_14;
		RuntimeObject* L_18 = __this->___CYCLEDRKLHIDE_12;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)190), L_18);
		RuntimeObject* L_19;
		L_19 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)989257407), (bool)1, (bool)1);
		__this->___DRKLHIT_15 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHIT_15), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_17 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_17;
		RuntimeObject* L_24 = __this->___DRKLHIT_15;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)209), L_24);
		RuntimeObject* L_25;
		L_25 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_20;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)213), (0.0f));
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_27 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_27, NULL);
		V_0 = L_27;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_28 = V_0;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_29 = L_28;
		RuntimeObject* L_30;
		L_30 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_31 = L_29;
		RuntimeObject* L_32;
		L_32 = DRKLHIDE_get_THERE_m47AF3245DB1E5C4242055F823AD3C1FFDC1E9822_inline(__this, NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_31, L_32);
		RuntimeObject* L_33;
		L_33 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_31, L_33);
		RuntimeObject* L_34;
		L_34 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_35 = V_0;
		NullCheck(L_34);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_34, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_35);
		RuntimeObject* L_37;
		L_37 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_23 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_37);
		RuntimeObject* L_38 = __this->___MY_23;
		NullCheck(L_38);
		float L_39;
		L_39 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)176), (bool)1);
		__this->___temp_24 = L_39;
		float L_40 = __this->___temp_24;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_40, (4.0f), NULL);
		if (L_41)
		{
			goto IL_0423;
		}
	}
	{
		RuntimeObject* L_42;
		L_42 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_27 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_42);
		RuntimeObject* L_43 = __this->___MY_27;
		NullCheck(L_43);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)176), (4.0f));
		RuntimeObject* L_44;
		L_44 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_29 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_31 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_45);
		RuntimeObject* L_46 = __this->___MY_31;
		NullCheck(L_46);
		float L_47;
		L_47 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)194), (bool)1);
		__this->___temp_32 = L_47;
		RuntimeObject* L_48;
		L_48 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, 5, ((int32_t)462));
		__this->___PLAYER_ANGLE_33 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ANGLE_33), (void*)L_49);
		RuntimeObject* L_50 = __this->___PLAYER_ANGLE_33;
		NullCheck(L_50);
		float L_51;
		L_51 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)231), (bool)1);
		__this->___PLAYER_ANGLE_33_val = L_51;
		RuntimeObject* L_52 = __this->___MY_29;
		float L_53 = __this->___PLAYER_ANGLE_33_val;
		float L_54;
		L_54 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_52);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)194), ((float)il2cpp_codegen_add(L_53, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_54, (0.5f))), (2.4000001f))))));
		RuntimeObject* L_55;
		L_55 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_55);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_56, ((int32_t)-1715090916), (bool)1, (bool)1);
		__this->___DRKL1TEX_42 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL1TEX_42), (void*)L_57);
		RuntimeObject* L_58;
		L_58 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_44 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_44), (void*)L_58);
		RuntimeObject* L_59 = __this->___MY_44;
		RuntimeObject* L_60 = __this->___DRKL1TEX_42;
		NullCheck(L_59);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, ((int32_t)164), L_60);
		RuntimeObject* L_61;
		L_61 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_47 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_47), (void*)L_61);
		RuntimeObject* L_62 = __this->___MY_47;
		NullCheck(L_62);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)172), (20.0f));
		RuntimeObject* L_63;
		L_63 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_50 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_50), (void*)L_63);
		RuntimeObject* L_64 = __this->___MY_50;
		NullCheck(L_64);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)168), (0.600000024f));
		RuntimeObject* L_65;
		L_65 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_65);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_51 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_51), (void*)L_67);
		RuntimeObject* L_68;
		L_68 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_53 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_53), (void*)L_68);
		RuntimeObject* L_69 = __this->___MY_53;
		RuntimeObject* L_70 = __this->___BULLET_51;
		NullCheck(L_69);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)199), L_70);
		float L_71;
		L_71 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_71;
		float L_72 = __this->___startTime1;
		float L_73;
		L_73 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)384), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_72, L_73));
		__this->____cursor = 1;
		goto IL_0353;
	}

IL_0346:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_74 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		DRKLHIDE_set_Current_mD470036FE8B3ED7B768E39E56C8DC4F1E229EFB6_inline(__this, L_74, NULL);
		return (bool)1;
	}

IL_0353:
	{
		float L_75;
		L_75 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_76 = __this->___endTime1;
		if ((((float)L_75) < ((float)L_76)))
		{
			goto IL_0346;
		}
	}
	{
		DRKLHIDE_set_Current_mD470036FE8B3ED7B768E39E56C8DC4F1E229EFB6_inline(__this, NULL, NULL);
		RuntimeObject* L_77;
		L_77 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_57 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_57), (void*)L_77);
		RuntimeObject* L_78 = __this->___MY_57;
		NullCheck(L_78);
		float L_79;
		L_79 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_78, ((int32_t)173), (bool)1);
		__this->___temp_58 = L_79;
		float L_80 = __this->___temp_58;
		bool L_81;
		L_81 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_80, (5.0f), NULL);
		if (!L_81)
		{
			goto IL_039e;
		}
	}
	{
		return (bool)0;
	}

IL_039e:
	{
		RuntimeObject* L_82;
		L_82 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_61 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_61), (void*)L_82);
		RuntimeObject* L_83 = __this->___MY_61;
		NullCheck(L_83);
		float L_84;
		L_84 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)173), (bool)1);
		__this->___temp_62 = L_84;
		RuntimeObject* L_85;
		L_85 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_64 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_64), (void*)L_85);
		RuntimeObject* L_86 = __this->___MY_64;
		float L_87 = __this->___temp_62;
		NullCheck(L_86);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)173), ((float)il2cpp_codegen_add(L_87, (-2.0f))));
		DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* L_88 = (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A*)il2cpp_codegen_object_new(DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A_il2cpp_TypeInfo_var);
		DRKLWANDER__ctor_m87BC0E7CD5879BA412FDDB320AFF374F21ECF1AD(L_88, NULL);
		V_1 = L_88;
		DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* L_89 = V_1;
		DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* L_90 = L_89;
		RuntimeObject* L_91;
		L_91 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		NullCheck(L_90);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_90, L_91);
		DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* L_92 = L_90;
		RuntimeObject* L_93;
		L_93 = DRKLHIDE_get_THERE_m47AF3245DB1E5C4242055F823AD3C1FFDC1E9822_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_93);
		RuntimeObject* L_94;
		L_94 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		NullCheck(L_92);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_92, L_94);
		RuntimeObject* L_95;
		L_95 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* L_96 = V_1;
		NullCheck(L_95);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_95, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_96);
		return (bool)0;
	}

IL_0423:
	{
		RuntimeObject* L_98;
		L_98 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_66 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_66), (void*)L_98);
		RuntimeObject* L_99;
		L_99 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_68 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_68), (void*)L_99);
		RuntimeObject* L_100 = __this->___MY_68;
		NullCheck(L_100);
		float L_101;
		L_101 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)194), (bool)1);
		__this->___temp_69 = L_101;
		RuntimeObject* L_102;
		L_102 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		NullCheck(L_102);
		RuntimeObject* L_103;
		L_103 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_102, 5, ((int32_t)462));
		__this->___PLAYER_ANGLE_70 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ANGLE_70), (void*)L_103);
		RuntimeObject* L_104 = __this->___PLAYER_ANGLE_70;
		NullCheck(L_104);
		float L_105;
		L_105 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_104, ((int32_t)231), (bool)1);
		__this->___PLAYER_ANGLE_70_val = L_105;
		RuntimeObject* L_106 = __this->___MY_66;
		float L_107 = __this->___PLAYER_ANGLE_70_val;
		float L_108;
		L_108 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_106);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_106, ((int32_t)194), ((float)il2cpp_codegen_add(L_107, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_108, (0.5f))), (2.4000001f))))));
		RuntimeObject* L_109;
		L_109 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		NullCheck(L_109);
		RuntimeObject* L_110;
		L_110 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_109);
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_110, ((int32_t)-1715090916), (bool)1, (bool)1);
		__this->___DRKL1TEX_79 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL1TEX_79), (void*)L_111);
		RuntimeObject* L_112;
		L_112 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_81 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_81), (void*)L_112);
		RuntimeObject* L_113 = __this->___MY_81;
		RuntimeObject* L_114 = __this->___DRKL1TEX_79;
		NullCheck(L_113);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_113, ((int32_t)164), L_114);
		RuntimeObject* L_115;
		L_115 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_84 = L_115;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_84), (void*)L_115);
		RuntimeObject* L_116 = __this->___MY_84;
		NullCheck(L_116);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_116, ((int32_t)172), (20.0f));
		RuntimeObject* L_117;
		L_117 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_87 = L_117;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_87), (void*)L_117);
		RuntimeObject* L_118 = __this->___MY_87;
		NullCheck(L_118);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_118, ((int32_t)168), (0.600000024f));
		RuntimeObject* L_119;
		L_119 = DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline(__this, NULL);
		NullCheck(L_119);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_119);
		NullCheck(L_120);
		RuntimeObject* L_121;
		L_121 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_120, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_88 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_88), (void*)L_121);
		RuntimeObject* L_122;
		L_122 = DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline(__this, NULL);
		__this->___MY_90 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_90), (void*)L_122);
		RuntimeObject* L_123 = __this->___MY_90;
		RuntimeObject* L_124 = __this->___BULLET_88;
		NullCheck(L_123);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)199), L_124);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLISTEN_set_MY_m775C1CC2F0E4EF76C1187CCDFD69BE93F3146C5F (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLLISTEN_get_THERE_m9427596E9C4BFD0E15C2495580F0C37399C9FE2A (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLISTEN_set_THERE_mCDD4EE556FAF554CF095E6E9A83E78B5BD962775 (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLLISTEN_get__world_m67AB444A15CA0D3AF8C8E07FA19B6116C94A0B35 (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLISTEN_set__world_mB55685A08976C9076F4A8E0C23C6131A4EB0BA87 (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLLISTEN_get_Current_m3E35DAED1E01C13C637699D2D821CB112730E14B (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLISTEN_set_Current_m615B0E8B6502997D2B30BAE7D9654B3CFEFEEB3E (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLISTEN_Reset_mDE0B27429D2C0CBD833021F6D3ACC7A4B3047AB4 (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLISTEN__ctor_m2B65F7F011FDAE58B2EAE5E8B2B3E0B3959BC6F3 (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLISTEN__ctor_m27C5C16D4EB1043DF41EA5BCED7A1A79971E0151 (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLLISTEN_set_MY_m775C1CC2F0E4EF76C1187CCDFD69BE93F3146C5F_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLLISTEN_set_THERE_mCDD4EE556FAF554CF095E6E9A83E78B5BD962775_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLLISTEN_set__world_mB55685A08976C9076F4A8E0C23C6131A4EB0BA87_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLLISTEN_MoveNext_mACF6F76956196B05B905C6B404D4BBB7DBDA42B5 (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0290;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
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
		L_6 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
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
		L_11 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
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
		L_16 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
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
		L_21 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
		__this->___MY_18 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_18;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_23;
		L_23 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
		__this->___MY_21 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_21;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_25;
		L_25 = DRKLLISTEN_get__world_m67AB444A15CA0D3AF8C8E07FA19B6116C94A0B35_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)1078179746), (bool)1, (bool)1);
		__this->___CYCLEDRKLATTACK_22 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEDRKLATTACK_22), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
		__this->___MY_24 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_24;
		RuntimeObject* L_30 = __this->___CYCLEDRKLATTACK_22;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)190), L_30);
		RuntimeObject* L_31;
		L_31 = DRKLLISTEN_get__world_m67AB444A15CA0D3AF8C8E07FA19B6116C94A0B35_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)989257407), (bool)1, (bool)1);
		__this->___DRKLHIT_25 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHIT_25), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
		__this->___MY_27 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_27;
		RuntimeObject* L_36 = __this->___DRKLHIT_25;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)209), L_36);
		RuntimeObject* L_37;
		L_37 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
		__this->___MY_30 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_37);
		RuntimeObject* L_38 = __this->___MY_30;
		NullCheck(L_38);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)213), (0.0f));
		RuntimeObject* L_39;
		L_39 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
		__this->___MY_33 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_33), (void*)L_39);
		RuntimeObject* L_40 = __this->___MY_33;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)176), (0.0f));
		RuntimeObject* L_41;
		L_41 = DRKLLISTEN_get__world_m67AB444A15CA0D3AF8C8E07FA19B6116C94A0B35_inline(__this, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_41);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)-1715126853), (bool)1, (bool)1);
		__this->___DRKL0TEX_34 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL0TEX_34), (void*)L_43);
		RuntimeObject* L_44;
		L_44 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
		__this->___MY_36 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_36), (void*)L_44);
		RuntimeObject* L_45 = __this->___MY_36;
		RuntimeObject* L_46 = __this->___DRKL0TEX_34;
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)164), L_46);
		RuntimeObject* L_47;
		L_47 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
		__this->___MY_39 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_39), (void*)L_47);
		RuntimeObject* L_48 = __this->___MY_39;
		NullCheck(L_48);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)168), (0.0f));
		RuntimeObject* L_49;
		L_49 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
		__this->___MY_42 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_42), (void*)L_49);
		RuntimeObject* L_50 = __this->___MY_42;
		NullCheck(L_50);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)199), (RuntimeObject*)NULL);
		float L_51;
		L_51 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_51;
		float L_52 = __this->___startTime1;
		float L_53;
		L_53 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(((int32_t)120), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_52, L_53));
		__this->____cursor = 1;
		goto IL_0290;
	}

IL_0283:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_54 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		DRKLLISTEN_set_Current_m615B0E8B6502997D2B30BAE7D9654B3CFEFEEB3E_inline(__this, L_54, NULL);
		return (bool)1;
	}

IL_0290:
	{
		float L_55;
		L_55 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_56 = __this->___endTime1;
		if ((((float)L_55) < ((float)L_56)))
		{
			goto IL_0283;
		}
	}
	{
		DRKLLISTEN_set_Current_m615B0E8B6502997D2B30BAE7D9654B3CFEFEEB3E_inline(__this, NULL, NULL);
		RuntimeObject* L_57;
		L_57 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
		__this->___MY_46 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_46), (void*)L_57);
		RuntimeObject* L_58 = __this->___MY_46;
		NullCheck(L_58);
		float L_59;
		L_59 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)173), (bool)1);
		__this->___temp_47 = L_59;
		float L_60 = __this->___temp_47;
		bool L_61;
		L_61 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_60, (9.0f), NULL);
		if (!L_61)
		{
			goto IL_0313;
		}
	}
	{
		DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* L_62 = (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A*)il2cpp_codegen_object_new(DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A_il2cpp_TypeInfo_var);
		DRKLWANDER__ctor_m87BC0E7CD5879BA412FDDB320AFF374F21ECF1AD(L_62, NULL);
		V_0 = L_62;
		DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* L_63 = V_0;
		DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* L_64 = L_63;
		RuntimeObject* L_65;
		L_65 = DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline(__this, NULL);
		NullCheck(L_64);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_64, L_65);
		DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* L_66 = L_64;
		RuntimeObject* L_67;
		L_67 = DRKLLISTEN_get_THERE_m9427596E9C4BFD0E15C2495580F0C37399C9FE2A_inline(__this, NULL);
		NullCheck(L_66);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_66, L_67);
		RuntimeObject* L_68;
		L_68 = DRKLLISTEN_get__world_m67AB444A15CA0D3AF8C8E07FA19B6116C94A0B35_inline(__this, NULL);
		NullCheck(L_66);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_66, L_68);
		RuntimeObject* L_69;
		L_69 = DRKLLISTEN_get__world_m67AB444A15CA0D3AF8C8E07FA19B6116C94A0B35_inline(__this, NULL);
		DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* L_70 = V_0;
		NullCheck(L_69);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_69, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_70);
		return (bool)0;
	}

IL_0313:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLJUMP_set_MY_mAB50B51F792717D5687A0B0B1EF1C17DF0E75D2F (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLJUMP_get_THERE_m08B26502D4740B9633220D0C233E7D854DB65B3B (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLJUMP_set_THERE_m847CD5634B351BD4E990FD9456F3A44A8086B9FF (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLJUMP_get__world_mCF35B443CA36D3A27047FADF71065723EAA39D22 (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLJUMP_set__world_m6B4ADF895CF1D70A1249B451FD89DE8D321DC4D2 (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLJUMP_get_Current_m192A3597CEB2E874B0204789A77098D49C7323E0 (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLJUMP_set_Current_m7D3CD53A475D04A032439BC2D13BF6C258502597 (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLJUMP_Reset_mD67CB3E90777B761632C7F7EDF9E3CBFBED89D92 (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLJUMP__ctor_mB9100E5430292974FA97B99E1868021FD8C14597 (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLJUMP__ctor_m2EA45C5357F3BD70AE9A7994EEF3077D9BEB30A3 (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLJUMP_set_MY_mAB50B51F792717D5687A0B0B1EF1C17DF0E75D2F_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLJUMP_set_THERE_m847CD5634B351BD4E990FD9456F3A44A8086B9FF_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLJUMP_set__world_m6B4ADF895CF1D70A1249B451FD89DE8D321DC4D2_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLJUMP_MoveNext_mDB20A6C1A963DF6D845CAF8BDC2B95DFA3009B99 (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) 
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
		s_Il2CppMethodInitialized = true;
	}
	LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
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
		L_9 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_8, L_9);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_10 = L_8;
		RuntimeObject* L_11;
		L_11 = DRKLJUMP_get_THERE_m08B26502D4740B9633220D0C233E7D854DB65B3B_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12;
		L_12 = DRKLJUMP_get__world_mCF35B443CA36D3A27047FADF71065723EAA39D22_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_10, L_12);
		RuntimeObject* L_13;
		L_13 = DRKLJUMP_get__world_mCF35B443CA36D3A27047FADF71065723EAA39D22_inline(__this, NULL);
		LOOKPLAYER_tA56C9D149341BE7D721B38DFFA197F89F6DF8511* L_14 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_14);
		RuntimeObject* L_16;
		L_16 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
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
		RuntimeObject* L_21;
		L_21 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		__this->___MY_10 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_10;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_23;
		L_23 = DRKLJUMP_get__world_mCF35B443CA36D3A27047FADF71065723EAA39D22_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)908617765), (bool)1, (bool)1);
		__this->___DRKLFOLLOWATTACK_11 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLFOLLOWATTACK_11), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		__this->___MY_13 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_13), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_13;
		RuntimeObject* L_28 = __this->___DRKLFOLLOWATTACK_11;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)193), L_28);
		RuntimeObject* L_29;
		L_29 = DRKLJUMP_get__world_mCF35B443CA36D3A27047FADF71065723EAA39D22_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)-2028824937), (bool)1, (bool)1);
		__this->___CYCLEDRKLSHOOT_14 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEDRKLSHOOT_14), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		__this->___MY_16 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_16), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_16;
		RuntimeObject* L_34 = __this->___CYCLEDRKLSHOOT_14;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)190), L_34);
		RuntimeObject* L_35;
		L_35 = DRKLJUMP_get__world_mCF35B443CA36D3A27047FADF71065723EAA39D22_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)1531531490), (bool)1, (bool)1);
		__this->___ACTORJUMP_17 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ACTORJUMP_17), (void*)L_37);
		RuntimeObject* L_38;
		L_38 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		__this->___MY_19 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_19), (void*)L_38);
		RuntimeObject* L_39 = __this->___MY_19;
		RuntimeObject* L_40 = __this->___ACTORJUMP_17;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)189), L_40);
		RuntimeObject* L_41;
		L_41 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		__this->___MY_22 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_41);
		RuntimeObject* L_42 = __this->___MY_22;
		NullCheck(L_42);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)176), (0.0f));
		RuntimeObject* L_43;
		L_43 = DRKLJUMP_get__world_mCF35B443CA36D3A27047FADF71065723EAA39D22_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_43);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)-1715054979), (bool)1, (bool)1);
		__this->___DRKL2TEX_23 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL2TEX_23), (void*)L_45);
		RuntimeObject* L_46;
		L_46 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		__this->___MY_25 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_25), (void*)L_46);
		RuntimeObject* L_47 = __this->___MY_25;
		RuntimeObject* L_48 = __this->___DRKL2TEX_23;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)164), L_48);
		float L_49;
		L_49 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		bool L_50;
		L_50 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_49, (0.5f), NULL);
		if (!L_50)
		{
			goto IL_0235;
		}
	}
	{
		RuntimeObject* L_51;
		L_51 = DRKLJUMP_get__world_mCF35B443CA36D3A27047FADF71065723EAA39D22_inline(__this, NULL);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_51);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)-762938466), (bool)1, (bool)1);
		__this->___DRKL2ATEX_28 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL2ATEX_28), (void*)L_53);
		RuntimeObject* L_54;
		L_54 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		__this->___MY_30 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_54);
		RuntimeObject* L_55 = __this->___MY_30;
		RuntimeObject* L_56 = __this->___DRKL2ATEX_28;
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)164), L_56);
	}

IL_0235:
	{
		RuntimeObject* L_57;
		L_57 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		__this->___MY_33 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_33), (void*)L_57);
		RuntimeObject* L_58 = __this->___MY_33;
		NullCheck(L_58);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)168), (1.5f));
		RuntimeObject* L_59;
		L_59 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		__this->___MY_36 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_36), (void*)L_59);
		RuntimeObject* L_60 = __this->___MY_36;
		NullCheck(L_60);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)169), (0.5f));
		RuntimeObject* L_61;
		L_61 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		__this->___MY_39 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_39), (void*)L_61);
		RuntimeObject* L_62 = __this->___MY_39;
		NullCheck(L_62);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)213), (1.0f));
		RuntimeObject* L_63;
		L_63 = DRKLJUMP_get__world_mCF35B443CA36D3A27047FADF71065723EAA39D22_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_63);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)2089330692), (bool)1, (bool)1);
		__this->___MOVE_40 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_40), (void*)L_65);
		RuntimeObject* L_66;
		L_66 = DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline(__this, NULL);
		__this->___MY_42 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_42), (void*)L_66);
		RuntimeObject* L_67 = __this->___MY_42;
		RuntimeObject* L_68 = __this->___MOVE_40;
		NullCheck(L_67);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_67, ((int32_t)199), L_68);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357 (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLOOKFOR_set_MY_m31CB5504BC827998152153E790DD918EB34D96B9 (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLLOOKFOR_get_THERE_m50CA84B226C3D2C5B56A7A58E01D59785A03E5AD (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLOOKFOR_set_THERE_mF20CA9E93BA2E906D82AB632912EEF689ADF66D0 (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLOOKFOR_set__world_m360E33A7D06925D2FC841B74037AA56CF49C6EAF (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLLOOKFOR_get_Current_mD8465EB32FEC8D705A31E56AF30CCB81E3C33C59 (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLOOKFOR_set_Current_mFE07EF6EDD12B138557A6B7AA9FA51D3FF7700AF (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLOOKFOR_Reset_m6ED164B18E672DD5CFF68CFA2A70F5BB1610DB6D (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLOOKFOR__ctor_m1F9E365D4BF8B79F3F2C51E712437974A98C1C97 (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLLOOKFOR__ctor_m63099E7B09BCBC368E4683C048A4E31E512EC2F0 (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLLOOKFOR_set_MY_m31CB5504BC827998152153E790DD918EB34D96B9_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLLOOKFOR_set_THERE_mF20CA9E93BA2E906D82AB632912EEF689ADF66D0_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLLOOKFOR_set__world_m360E33A7D06925D2FC841B74037AA56CF49C6EAF_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLLOOKFOR_MoveNext_m68B6F00342BCD781397A2F9EB1308AF57CAC06E3 (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* V_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* G_B10_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* G_B9_1 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* G_B11_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
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
		L_6 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
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
		L_11 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
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
		L_16 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
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
		L_20 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_19, (1.0f), NULL);
		if (!L_20)
		{
			goto IL_011b;
		}
	}
	{
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_21 = (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64*)il2cpp_codegen_object_new(DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64_il2cpp_TypeInfo_var);
		DRKLFOLLOWATTACK__ctor_m321A738364A5B7E7FCE9F3684787C52F7C3B76B1(L_21, NULL);
		V_0 = L_21;
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_22 = V_0;
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_23 = L_22;
		RuntimeObject* L_24;
		L_24 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_24);
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_25 = L_23;
		RuntimeObject* L_26;
		L_26 = DRKLLOOKFOR_get_THERE_m50CA84B226C3D2C5B56A7A58E01D59785A03E5AD_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_26);
		RuntimeObject* L_27;
		L_27 = DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_27);
		RuntimeObject* L_28;
		L_28 = DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A_inline(__this, NULL);
		DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* L_29 = V_0;
		NullCheck(L_28);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_29);
		return (bool)0;
	}

IL_011b:
	{
		RuntimeObject* L_31;
		L_31 = DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_16 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_16), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		__this->___MY_18 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_18;
		RuntimeObject* L_36 = L_35;
		if (L_36)
		{
			G_B10_0 = L_36;
			G_B10_1 = __this;
			goto IL_0152;
		}
		G_B9_0 = L_36;
		G_B9_1 = __this;
	}
	{
		G_B11_0 = ((RuntimeObject*)(NULL));
		G_B11_1 = G_B9_1;
		goto IL_015e;
	}

IL_0152:
	{
		NullCheck(G_B10_0);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B10_0, ((int32_t)199), (bool)1, (bool)1);
		G_B11_0 = L_37;
		G_B11_1 = G_B10_1;
	}

IL_015e:
	{
		NullCheck(G_B11_1);
		G_B11_1->___temp_19 = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->___temp_19), (void*)G_B11_0);
		RuntimeObject* L_38 = __this->___temp_19;
		RuntimeObject* L_39 = __this->___FOLLOW_16;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_38, L_39, NULL);
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
		L_41 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		__this->___MY_22 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_22), (void*)L_41);
		RuntimeObject* L_42 = __this->___MY_22;
		NullCheck(L_42);
		float L_43;
		L_43 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)173), (bool)1);
		__this->___temp_23 = L_43;
		float L_44 = __this->___temp_23;
		bool L_45;
		L_45 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_44, (5.0f), NULL);
		if (!L_45)
		{
			goto IL_01af;
		}
	}
	{
		return (bool)0;
	}

IL_01af:
	{
		RuntimeObject* L_46;
		L_46 = DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)-1714191146), (bool)1, (bool)1);
		__this->___DRKLJUMP_24 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLJUMP_24), (void*)L_48);
		RuntimeObject* L_49;
		L_49 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		__this->___MY_26 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_49);
		RuntimeObject* L_50 = __this->___MY_26;
		RuntimeObject* L_51 = __this->___DRKLJUMP_24;
		NullCheck(L_50);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)192), L_51);
		RuntimeObject* L_52;
		L_52 = DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)908617765), (bool)1, (bool)1);
		__this->___DRKLFOLLOWATTACK_27 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLFOLLOWATTACK_27), (void*)L_54);
		RuntimeObject* L_55;
		L_55 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		__this->___MY_29 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_55);
		RuntimeObject* L_56 = __this->___MY_29;
		RuntimeObject* L_57 = __this->___DRKLFOLLOWATTACK_27;
		NullCheck(L_56);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_56, ((int32_t)193), L_57);
		RuntimeObject* L_58;
		L_58 = DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, ((int32_t)-1714280838), (bool)1, (bool)1);
		__this->___DRKLHEAR_30 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHEAR_30), (void*)L_60);
		RuntimeObject* L_61;
		L_61 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		__this->___MY_32 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_61);
		RuntimeObject* L_62 = __this->___MY_32;
		RuntimeObject* L_63 = __this->___DRKLHEAR_30;
		NullCheck(L_62);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_62, ((int32_t)190), L_63);
		RuntimeObject* L_64;
		L_64 = DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_64);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)989257407), (bool)1, (bool)1);
		__this->___DRKLHIT_33 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHIT_33), (void*)L_66);
		RuntimeObject* L_67;
		L_67 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		__this->___MY_35 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_35), (void*)L_67);
		RuntimeObject* L_68 = __this->___MY_35;
		RuntimeObject* L_69 = __this->___DRKLHIT_33;
		NullCheck(L_68);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)209), L_69);
		RuntimeObject* L_70;
		L_70 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		__this->___MY_38 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_38), (void*)L_70);
		RuntimeObject* L_71 = __this->___MY_38;
		NullCheck(L_71);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_71, ((int32_t)213), (0.0f));
		RuntimeObject* L_72;
		L_72 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		__this->___MY_41 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_41), (void*)L_72);
		RuntimeObject* L_73 = __this->___MY_41;
		NullCheck(L_73);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)176), (10.0f));
		RuntimeObject* L_74;
		L_74 = DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A_inline(__this, NULL);
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_74);
		NullCheck(L_75);
		RuntimeObject* L_76;
		L_76 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_75, ((int32_t)538122080), (bool)1, (bool)1);
		__this->___DRKL0UPTEX_42 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL0UPTEX_42), (void*)L_76);
		RuntimeObject* L_77;
		L_77 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		__this->___MY_44 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_44), (void*)L_77);
		RuntimeObject* L_78 = __this->___MY_44;
		RuntimeObject* L_79 = __this->___DRKL0UPTEX_42;
		NullCheck(L_78);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_78, ((int32_t)164), L_79);
		RuntimeObject* L_80;
		L_80 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		__this->___MY_47 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_47), (void*)L_80);
		RuntimeObject* L_81 = __this->___MY_47;
		NullCheck(L_81);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_81, ((int32_t)168), (0.0f));
		RuntimeObject* L_82;
		L_82 = DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A_inline(__this, NULL);
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_82);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_48 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_48), (void*)L_84);
		RuntimeObject* L_85;
		L_85 = DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline(__this, NULL);
		__this->___MY_50 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_50), (void*)L_85);
		RuntimeObject* L_86 = __this->___MY_50;
		RuntimeObject* L_87 = __this->___BULLET_48;
		NullCheck(L_86);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)199), L_87);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHEAR_get_MY_m836EBC07AD78367B0274CD47E9573EDADD751CD1 (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHEAR_set_MY_m2D782F3BC3DA5E62EFB38BDC892693F5C085D0F7 (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHEAR_get_THERE_m1F7AB8262DF5BCEA37B963C58F018AA3BE824DD3 (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHEAR_set_THERE_m0AEB688A67F91D44F8A7C4BA5431B205473DF32C (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHEAR_get__world_m0AF465C30A1A793653D0C82E139B79FD372ABF55 (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHEAR_set__world_mEA742B135C42B4198D28F78262BEFF55D8A2AC2D (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLHEAR_get_Current_mA605F5CDD35D2FA6D667B649B07984D09B2100ED (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHEAR_set_Current_mF9BFD0369F4F0C1F91AC00DDA3AFDDD19D921CA2 (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHEAR_Reset_mD9B4DCD9DF16E242497D00F5A42FBCAEF81E6E15 (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHEAR__ctor_mBDEBD79ED5AFBFC4C3C65356E818E68AB3B7B655 (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLHEAR__ctor_m0FC1886DBE8CB5F09B95D1E0F610B26C0242BA4D (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLHEAR_set_MY_m2D782F3BC3DA5E62EFB38BDC892693F5C085D0F7_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLHEAR_set_THERE_m0AEB688A67F91D44F8A7C4BA5431B205473DF32C_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLHEAR_set__world_mEA742B135C42B4198D28F78262BEFF55D8A2AC2D_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLHEAR_MoveNext_m6D5A5E65D52AE18B9AB689FEBA0992C2C8936F1B (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, const RuntimeMethod* method) 
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
		L_1 = DRKLHEAR_get__world_m0AF465C30A1A793653D0C82E139B79FD372ABF55_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-1714191146), (bool)1, (bool)1);
		__this->___DRKLJUMP_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLJUMP_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = DRKLHEAR_get_MY_m836EBC07AD78367B0274CD47E9573EDADD751CD1_inline(__this, NULL);
		__this->___MY_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_4);
		RuntimeObject* L_5 = __this->___MY_2;
		RuntimeObject* L_6 = __this->___DRKLJUMP_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)192), L_6);
		RuntimeObject* L_7;
		L_7 = DRKLHEAR_get__world_m0AF465C30A1A793653D0C82E139B79FD372ABF55_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)908617765), (bool)1, (bool)1);
		__this->___DRKLFOLLOWATTACK_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLFOLLOWATTACK_3), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = DRKLHEAR_get_MY_m836EBC07AD78367B0274CD47E9573EDADD751CD1_inline(__this, NULL);
		__this->___MY_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_5;
		RuntimeObject* L_12 = __this->___DRKLFOLLOWATTACK_3;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)193), L_12);
		RuntimeObject* L_13;
		L_13 = DRKLHEAR_get__world_m0AF465C30A1A793653D0C82E139B79FD372ABF55_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1714412974), (bool)1, (bool)1);
		__this->___DRKLDOWN_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLDOWN_6), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = DRKLHEAR_get_MY_m836EBC07AD78367B0274CD47E9573EDADD751CD1_inline(__this, NULL);
		__this->___MY_8 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_8;
		RuntimeObject* L_18 = __this->___DRKLDOWN_6;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)190), L_18);
		RuntimeObject* L_19;
		L_19 = DRKLHEAR_get_MY_m836EBC07AD78367B0274CD47E9573EDADD751CD1_inline(__this, NULL);
		__this->___MY_11 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_11;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)176), (10.0f));
		RuntimeObject* L_21;
		L_21 = DRKLHEAR_get__world_m0AF465C30A1A793653D0C82E139B79FD372ABF55_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)-1715126853), (bool)1, (bool)1);
		__this->___DRKL0TEX_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL0TEX_12), (void*)L_23);
		RuntimeObject* L_24;
		L_24 = DRKLHEAR_get_MY_m836EBC07AD78367B0274CD47E9573EDADD751CD1_inline(__this, NULL);
		__this->___MY_14 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_24);
		RuntimeObject* L_25 = __this->___MY_14;
		RuntimeObject* L_26 = __this->___DRKL0TEX_12;
		NullCheck(L_25);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)164), L_26);
		RuntimeObject* L_27;
		L_27 = DRKLHEAR_get_MY_m836EBC07AD78367B0274CD47E9573EDADD751CD1_inline(__this, NULL);
		__this->___MY_17 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_17;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)168), (0.0f));
		RuntimeObject* L_29;
		L_29 = DRKLHEAR_get__world_m0AF465C30A1A793653D0C82E139B79FD372ABF55_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_18 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_18), (void*)L_31);
		RuntimeObject* L_32;
		L_32 = DRKLHEAR_get_MY_m836EBC07AD78367B0274CD47E9573EDADD751CD1_inline(__this, NULL);
		__this->___MY_20 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_20;
		RuntimeObject* L_34 = __this->___FOLLOW_18;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)199), L_34);
		RuntimeObject* L_35;
		L_35 = DRKLHEAR_get_MY_m836EBC07AD78367B0274CD47E9573EDADD751CD1_inline(__this, NULL);
		__this->___MY_23 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_35);
		RuntimeObject* L_36 = __this->___MY_23;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)213), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDOWN_get_MY_mD06A816677F047B999136C3AD07F05347C1252E1 (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDOWN_set_MY_m3ED1794DE5D3493BFE46A8E95DE0C70F433D9D18 (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDOWN_get_THERE_m2DC747111701A93084C3017D99FCA7B5E2B96083 (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDOWN_set_THERE_m72418400F6FE617923FF107FE09FEB49F1926F0E (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDOWN_get__world_m962A79B3B6B7BA11B5A98DB74068163C4FBDF6DA (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDOWN_set__world_m196E14F1070C930C744C900C2E09C3E35B3D3E3C (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDOWN_get_Current_m511F99E1D003E2576F760DDD313D309100A4B0E0 (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDOWN_set_Current_m1C440F19C75E1BBAEA972D91D97D464A765F923B (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDOWN_Reset_m1FADC639CFADFBD2E3F6A380226AC7D69B40A785 (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDOWN__ctor_m4DCA6EBB18A55FBCECD5D8D26795314D68D1FB55 (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDOWN__ctor_mC88CE8394494E62DECF3B0D61FF9079562A5CDE7 (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLDOWN_set_MY_m3ED1794DE5D3493BFE46A8E95DE0C70F433D9D18_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLDOWN_set_THERE_m72418400F6FE617923FF107FE09FEB49F1926F0E_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLDOWN_set__world_m196E14F1070C930C744C900C2E09C3E35B3D3E3C_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLDOWN_MoveNext_m1DB47B0D368BF2E19C25797973CB72B91C884E5C (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, const RuntimeMethod* method) 
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
		L_1 = DRKLDOWN_get__world_m962A79B3B6B7BA11B5A98DB74068163C4FBDF6DA_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-1714191146), (bool)1, (bool)1);
		__this->___DRKLJUMP_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLJUMP_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = DRKLDOWN_get_MY_mD06A816677F047B999136C3AD07F05347C1252E1_inline(__this, NULL);
		__this->___MY_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_4);
		RuntimeObject* L_5 = __this->___MY_2;
		RuntimeObject* L_6 = __this->___DRKLJUMP_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)192), L_6);
		RuntimeObject* L_7;
		L_7 = DRKLDOWN_get_MY_mD06A816677F047B999136C3AD07F05347C1252E1_inline(__this, NULL);
		__this->___MY_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_5;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = DRKLDOWN_get__world_m962A79B3B6B7BA11B5A98DB74068163C4FBDF6DA_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)1888344784), (bool)1, (bool)1);
		__this->___DRKLSEARCH_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLSEARCH_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = DRKLDOWN_get_MY_mD06A816677F047B999136C3AD07F05347C1252E1_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___DRKLSEARCH_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = DRKLDOWN_get_MY_mD06A816677F047B999136C3AD07F05347C1252E1_inline(__this, NULL);
		__this->___MY_11 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_11;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)213), (0.0f));
		RuntimeObject* L_17;
		L_17 = DRKLDOWN_get_MY_mD06A816677F047B999136C3AD07F05347C1252E1_inline(__this, NULL);
		__this->___MY_14 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_14;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)176), (10.0f));
		RuntimeObject* L_19;
		L_19 = DRKLDOWN_get__world_m962A79B3B6B7BA11B5A98DB74068163C4FBDF6DA_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)517889549), (bool)1, (bool)1);
		__this->___DRKL0DNTEX_15 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL0DNTEX_15), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = DRKLDOWN_get_MY_mD06A816677F047B999136C3AD07F05347C1252E1_inline(__this, NULL);
		__this->___MY_17 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_17;
		RuntimeObject* L_24 = __this->___DRKL0DNTEX_15;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)164), L_24);
		RuntimeObject* L_25;
		L_25 = DRKLDOWN_get_MY_mD06A816677F047B999136C3AD07F05347C1252E1_inline(__this, NULL);
		__this->___MY_20 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_20;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)168), (0.0f));
		RuntimeObject* L_27;
		L_27 = DRKLDOWN_get__world_m962A79B3B6B7BA11B5A98DB74068163C4FBDF6DA_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_21 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_21), (void*)L_29);
		RuntimeObject* L_30;
		L_30 = DRKLDOWN_get_MY_mD06A816677F047B999136C3AD07F05347C1252E1_inline(__this, NULL);
		__this->___MY_23 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_23;
		RuntimeObject* L_32 = __this->___BULLET_21;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)199), L_32);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825 (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK_set_MY_m796754BF5CAFC6C1DA19118EB31CF280580C57C1 (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLFOLLOWATTACK_get_THERE_mFBCB23C9A03B92ED753CBFB24A8ECE2372C951D6 (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK_set_THERE_m0B5AF339087E7C45B0C37B1B6BBE3353C43306C0 (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63 (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK_set__world_mB27C9A3AEB71E16D9AE70F5BBBA6B3F51F2EDEC5 (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLFOLLOWATTACK_get_Current_m3892B2BECA2449E54FFC734321A9FA663543CAEA (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK_set_Current_mB0502865FA4C3CC7612FFD00541F3A8003759606 (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK_Reset_m016C66607086E97648502E56C620B0CDD828643A (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK__ctor_m321A738364A5B7E7FCE9F3684787C52F7C3B76B1 (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK__ctor_mCFD613D98146BFD79DD1313F6DDFE31A0545017B (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLFOLLOWATTACK_set_MY_m796754BF5CAFC6C1DA19118EB31CF280580C57C1_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLFOLLOWATTACK_set_THERE_m0B5AF339087E7C45B0C37B1B6BBE3353C43306C0_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLFOLLOWATTACK_set__world_mB27C9A3AEB71E16D9AE70F5BBBA6B3F51F2EDEC5_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLFOLLOWATTACK_MoveNext_m20E82BACD557F2B03B074F58442D338612F8342C (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) 
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
		s_Il2CppMethodInitialized = true;
	}
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_0 = NULL;
	FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-1714191146), (bool)1, (bool)1);
		__this->___DRKLJUMP_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLJUMP_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline(__this, NULL);
		__this->___MY_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_4);
		RuntimeObject* L_5 = __this->___MY_2;
		RuntimeObject* L_6 = __this->___DRKLJUMP_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)192), L_6);
		RuntimeObject* L_7;
		L_7 = DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline(__this, NULL);
		__this->___MY_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_5;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-2028824937), (bool)1, (bool)1);
		__this->___CYCLEDRKLSHOOT_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEDRKLSHOOT_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___CYCLEDRKLSHOOT_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)989257407), (bool)1, (bool)1);
		__this->___DRKLHIT_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHIT_9), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline(__this, NULL);
		__this->___MY_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_11;
		RuntimeObject* L_20 = __this->___DRKLHIT_9;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)209), L_20);
		RuntimeObject* L_21;
		L_21 = DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline(__this, NULL);
		__this->___MY_14 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_14;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)213), (0.0f));
		RuntimeObject* L_23;
		L_23 = DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline(__this, NULL);
		__this->___MY_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_17;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)176), (2.0f));
		RuntimeObject* L_25;
		L_25 = DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)-1715090916), (bool)1, (bool)1);
		__this->___DRKL1TEX_18 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL1TEX_18), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline(__this, NULL);
		__this->___MY_20 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_20;
		RuntimeObject* L_30 = __this->___DRKL1TEX_18;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)164), L_30);
		RuntimeObject* L_31;
		L_31 = DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline(__this, NULL);
		__this->___MY_23 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_23;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)168), (1.20000005f));
		RuntimeObject* L_33;
		L_33 = DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_24 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_24), (void*)L_35);
		RuntimeObject* L_36;
		L_36 = DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline(__this, NULL);
		__this->___MY_26 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_26;
		RuntimeObject* L_38 = __this->___BULLET_24;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)199), L_38);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_39 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_39, NULL);
		V_0 = L_39;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_40 = V_0;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_41 = L_40;
		RuntimeObject* L_42;
		L_42 = DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_43 = L_41;
		RuntimeObject* L_44;
		L_44 = DRKLFOLLOWATTACK_get_THERE_mFBCB23C9A03B92ED753CBFB24A8ECE2372C951D6_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_44);
		RuntimeObject* L_45;
		L_45 = DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_45);
		RuntimeObject* L_46;
		L_46 = DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_47 = V_0;
		NullCheck(L_46);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_47);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_49 = (FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5*)il2cpp_codegen_object_new(FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5_il2cpp_TypeInfo_var);
		FOLLOWANGLE__ctor_m301051518A5EBB502882C692D25C8A34042E4CA0(L_49, NULL);
		V_1 = L_49;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_50 = V_1;
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_51 = L_50;
		RuntimeObject* L_52;
		L_52 = DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline(__this, NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_51, L_52);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_53 = L_51;
		RuntimeObject* L_54;
		L_54 = DRKLFOLLOWATTACK_get_THERE_mFBCB23C9A03B92ED753CBFB24A8ECE2372C951D6_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_54);
		RuntimeObject* L_55;
		L_55 = DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_55);
		RuntimeObject* L_56;
		L_56 = DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63_inline(__this, NULL);
		FOLLOWANGLE_t81D6DF4AED49F85A124961A19B25E782E462CFD5* L_57 = V_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590 (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSHOOT_set_MY_m1F1FEF2F85417342BB78463405AE97FC78C2AC3A (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLSHOOT_get_THERE_m8C367067D417EAAE1989484DCE0A0D68647032D3 (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSHOOT_set_THERE_m764C11CF7005ECE1D3731E0597D9576623FFD190 (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLSHOOT_get__world_mDC50DCA76428E38A9A262226C157680D7F3F6885 (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSHOOT_set__world_mAA44003B5A9E298AE2093DC7BF4B551CD66A66CE (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLSHOOT_get_Current_m165B951A750C2FCF104DBA96BAD5FF15417C75CA (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSHOOT_set_Current_m71E48CC494A34AABBAF9DF2AE51826E0D2D863DB (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSHOOT_Reset_m4D64EF2D80718267EEFB353B701AB290A11534C0 (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSHOOT__ctor_m5136D2F1894C947482B2D151A5CC19D9E49AD793 (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLSHOOT__ctor_mF88B61A422B7BA0253CF8841FDA1E5881DC6C9F5 (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLSHOOT_set_MY_m1F1FEF2F85417342BB78463405AE97FC78C2AC3A_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLSHOOT_set_THERE_m764C11CF7005ECE1D3731E0597D9576623FFD190_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLSHOOT_set__world_mAA44003B5A9E298AE2093DC7BF4B551CD66A66CE_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLSHOOT_MoveNext_m30304113B85E34BF8AF7C845468E392C5FD0FAA0 (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) 
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
		L_1 = DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = DRKLSHOOT_get__world_mDC50DCA76428E38A9A262226C157680D7F3F6885_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)908617765), (bool)1, (bool)1);
		__this->___DRKLFOLLOWATTACK_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLFOLLOWATTACK_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___DRKLFOLLOWATTACK_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)193), L_8);
		RuntimeObject* L_9;
		L_9 = DRKLSHOOT_get__world_mDC50DCA76428E38A9A262226C157680D7F3F6885_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-2028824937), (bool)1, (bool)1);
		__this->___CYCLEDRKLSHOOT_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEDRKLSHOOT_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___CYCLEDRKLSHOOT_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = DRKLSHOOT_get__world_mDC50DCA76428E38A9A262226C157680D7F3F6885_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)989257407), (bool)1, (bool)1);
		__this->___DRKLHIT_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHIT_9), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590_inline(__this, NULL);
		__this->___MY_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_11;
		RuntimeObject* L_20 = __this->___DRKLHIT_9;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)209), L_20);
		RuntimeObject* L_21;
		L_21 = DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590_inline(__this, NULL);
		__this->___MY_14 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_14;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)213), (0.0f));
		RuntimeObject* L_23;
		L_23 = DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590_inline(__this, NULL);
		__this->___MY_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_17;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)176), (3.0f));
		RuntimeObject* L_25;
		L_25 = DRKLSHOOT_get__world_mDC50DCA76428E38A9A262226C157680D7F3F6885_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)-1715019042), (bool)1, (bool)1);
		__this->___DRKL3TEX_18 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL3TEX_18), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590_inline(__this, NULL);
		__this->___MY_20 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_20;
		RuntimeObject* L_30 = __this->___DRKL3TEX_18;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)164), L_30);
		RuntimeObject* L_31;
		L_31 = DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590_inline(__this, NULL);
		__this->___MY_23 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_23;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)168), (0.0f));
		RuntimeObject* L_33;
		L_33 = DRKLSHOOT_get__world_mDC50DCA76428E38A9A262226C157680D7F3F6885_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_24 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_24), (void*)L_35);
		RuntimeObject* L_36;
		L_36 = DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590_inline(__this, NULL);
		__this->___MY_26 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_26;
		RuntimeObject* L_38 = __this->___FOLLOW_24;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLESCAPE_set_MY_mF60FE76417CA5E9574A3960704C8A0E3A592B873 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLESCAPE_get_THERE_m6B92313A2E5A08615850881ACA33F78397037EE4 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLESCAPE_set_THERE_mEFEDBA735EBAE7F008DA63F479350A6173FED2F6 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLESCAPE_set__world_mF2870894E9A36FEFB4D4CB595FE2C43C7DC38903 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLESCAPE_get_Current_mF1C018F1B1E0FEBF83C6395327BC7631012EEFB7 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLESCAPE_set_Current_mE6D4EB812CC4C2A87F9E5776B824F3C2C9F18214 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLESCAPE_Reset_m6A8D86986CA9A8A51970A28A313F5DB1E8C90A12 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLESCAPE__ctor_m51CF40EA2110D3404EC07C89C20F19AD5F53E2E1 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLESCAPE__ctor_m85BCF392A3CAB486883DE1C555EEA6C011A6F830 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLESCAPE_set_MY_mF60FE76417CA5E9574A3960704C8A0E3A592B873_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLESCAPE_set_THERE_mEFEDBA735EBAE7F008DA63F479350A6173FED2F6_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLESCAPE_set__world_mF2870894E9A36FEFB4D4CB595FE2C43C7DC38903_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLESCAPE_MoveNext_mE21CDC2D3358E96EB1660053C9B7E86A2D5F1625 (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_0 = NULL;
	REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-1714276396), (bool)1, (bool)1);
		__this->___DRKLHIDE_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHIDE_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___DRKLHIDE_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)193), L_8);
		RuntimeObject* L_9;
		L_9 = DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-712625788), (bool)1, (bool)1);
		__this->___CYCLEDRKLHIDE_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CYCLEDRKLHIDE_6), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		__this->___MY_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_8;
		RuntimeObject* L_14 = __this->___CYCLEDRKLHIDE_6;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)989257407), (bool)1, (bool)1);
		__this->___DRKLHIT_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLHIT_9), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		__this->___MY_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_18);
		RuntimeObject* L_19 = __this->___MY_11;
		RuntimeObject* L_20 = __this->___DRKLHIT_9;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)209), L_20);
		RuntimeObject* L_21;
		L_21 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		__this->___MY_14 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_14;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)213), (0.0f));
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_23 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_23, NULL);
		V_0 = L_23;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_24 = V_0;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_25 = L_24;
		RuntimeObject* L_26;
		L_26 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_26);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_27 = L_25;
		RuntimeObject* L_28;
		L_28 = DRKLESCAPE_get_THERE_m6B92313A2E5A08615850881ACA33F78397037EE4_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_28);
		RuntimeObject* L_29;
		L_29 = DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_29);
		RuntimeObject* L_30;
		L_30 = DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_31 = V_0;
		NullCheck(L_30);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_30, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_31);
		RuntimeObject* L_33;
		L_33 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		__this->___MY_17 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_33);
		RuntimeObject* L_34 = __this->___MY_17;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)176), (4.0f));
		RuntimeObject* L_35;
		L_35 = DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)-1715090916), (bool)1, (bool)1);
		__this->___DRKL1TEX_18 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL1TEX_18), (void*)L_37);
		RuntimeObject* L_38;
		L_38 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		__this->___MY_20 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_38);
		RuntimeObject* L_39 = __this->___MY_20;
		RuntimeObject* L_40 = __this->___DRKL1TEX_18;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)164), L_40);
		RuntimeObject* L_41;
		L_41 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		__this->___MY_23 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_41);
		RuntimeObject* L_42 = __this->___MY_23;
		NullCheck(L_42);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)172), (30.0f));
		RuntimeObject* L_43;
		L_43 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		__this->___MY_26 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_43);
		RuntimeObject* L_44 = __this->___MY_26;
		NullCheck(L_44);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)168), (0.400000006f));
		RuntimeObject* L_45;
		L_45 = DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_45);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_27 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_27), (void*)L_47);
		RuntimeObject* L_48;
		L_48 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		__this->___MY_29 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_48);
		RuntimeObject* L_49 = __this->___MY_29;
		RuntimeObject* L_50 = __this->___BULLET_27;
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)199), L_50);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_51 = (REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024*)il2cpp_codegen_object_new(REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024_il2cpp_TypeInfo_var);
		REPELANGLE__ctor_m758839F160743B3C15CBCB3BF9D8DDCDB3BF4934(L_51, NULL);
		V_1 = L_51;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_52 = V_1;
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_53 = L_52;
		RuntimeObject* L_54;
		L_54 = DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline(__this, NULL);
		NullCheck(L_53);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_53, L_54);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_55 = L_53;
		RuntimeObject* L_56;
		L_56 = DRKLESCAPE_get_THERE_m6B92313A2E5A08615850881ACA33F78397037EE4_inline(__this, NULL);
		NullCheck(L_55);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_55, L_56);
		RuntimeObject* L_57;
		L_57 = DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48_inline(__this, NULL);
		NullCheck(L_55);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_55, L_57);
		RuntimeObject* L_58;
		L_58 = DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48_inline(__this, NULL);
		REPELANGLE_tEE2A7A825745B39FF92784FC5EC077B3AD1BA024* L_59 = V_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6 (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDEAD_set_MY_mCC2910DC1DD5D165D7A06E4A654D61854A2D7B99 (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDEAD_get_THERE_m68457444BA5AA29FEC3BDFD5F3A125AB4601E861 (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDEAD_set_THERE_m3F8E02B68FBC3216FB3BD651967350841F4CE8D4 (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDEAD_get__world_m95456679C098879BA83A2FAD2014941DD30950C2 (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDEAD_set__world_m4F00FAB6846DC605C629D4284DA786F19A1117FE (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDEAD_get_Current_mD074EA51CCB14DCB6EF8D0505E59CF51D2F2F5C7 (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDEAD_set_Current_m8CF502D1CE4EBCCEAD153F982C4C1B193B1D52A4 (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDEAD_Reset_mEC22A441B20622B6307874CCEE1E33A8B367D01D (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDEAD__ctor_mB1254207B5CCD2621895F18F1AAB9670BC1459EA (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDEAD__ctor_mFFC7ACBA4780AAA09927750A2B11AB03B638BF0D (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLDEAD_set_MY_mCC2910DC1DD5D165D7A06E4A654D61854A2D7B99_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLDEAD_set_THERE_m3F8E02B68FBC3216FB3BD651967350841F4CE8D4_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLDEAD_set__world_m4F00FAB6846DC605C629D4284DA786F19A1117FE_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLDEAD_MoveNext_m1E4EF3C7B387AF0B5D2C1EBEA2FFE0273BCD590F (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, const RuntimeMethod* method) 
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
		L_1 = DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline(__this, NULL);
		__this->___MY_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_11;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)190), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline(__this, NULL);
		__this->___MY_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_14;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)213), (0.0f));
		RuntimeObject* L_11;
		L_11 = DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline(__this, NULL);
		__this->___MY_17 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_17;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)176), (9.0f));
		RuntimeObject* L_13;
		L_13 = DRKLDEAD_get__world_m95456679C098879BA83A2FAD2014941DD30950C2_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1714803420), (bool)1, (bool)1);
		__this->___DRKL9TEX_18 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL9TEX_18), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline(__this, NULL);
		__this->___MY_20 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_20;
		RuntimeObject* L_18 = __this->___DRKL9TEX_18;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)164), L_18);
		RuntimeObject* L_19;
		L_19 = DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline(__this, NULL);
		__this->___MY_23 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_23;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)168), (0.0f));
		RuntimeObject* L_21;
		L_21 = DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline(__this, NULL);
		__this->___MY_26 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_26;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)199), (RuntimeObject*)NULL);
		RuntimeObject* L_23;
		L_23 = DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline(__this, NULL);
		__this->___MY_29 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_29;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)206), (1.0f));
		RuntimeObject* L_25;
		L_25 = DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline(__this, NULL);
		__this->___MY_32 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_32), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_32;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)207), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6 (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDIE_set_MY_m0A494CBCD83236C56296C4A21C07AD0024E2C638 (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDIE_get_THERE_mABF72E557E771948EB6DEF0F16BFC882953077FD (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDIE_set_THERE_m8E0123BE6D8B053E7BFD8F8895FE8C7F725271E1 (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDIE_get__world_mC47A5A83E020269023E5FE6E9C7C493B9A61F4CB (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDIE_set__world_m1ADAB60B0F7F09F892437A2644323705EA0240C1 (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DRKLDIE_get_Current_m5380DFBF2FB3008273D26F149E20E1495800C723 (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDIE_set_Current_m3099473E9CCCE75BA2DCF9E3BA0182C1C47758C4 (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDIE_Reset_m447F69EE486ED5D4F983D915E4CF7E00B6AE2F2B (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDIE__ctor_m535A1D8E9811F289EB2C79D78AF3E1E92E8AF675 (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DRKLDIE__ctor_m962EA91B962C4A662BFE3ED22891370A2F39DF61 (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		DRKLDIE_set_MY_m0A494CBCD83236C56296C4A21C07AD0024E2C638_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		DRKLDIE_set_THERE_m8E0123BE6D8B053E7BFD8F8895FE8C7F725271E1_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		DRKLDIE_set__world_m1ADAB60B0F7F09F892437A2644323705EA0240C1_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DRKLDIE_MoveNext_m11E1FC422BA6ED8D1FA27214D7891798CC965A55 (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) 
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
		L_1 = DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)173), (10.0f));
		RuntimeObject* L_3;
		L_3 = DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline(__this, NULL);
		__this->___MY_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_5);
		RuntimeObject* L_6 = __this->___MY_8;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)193), (RuntimeObject*)NULL);
		RuntimeObject* L_7;
		L_7 = DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline(__this, NULL);
		__this->___MY_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_11;
		NullCheck(L_8);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_9;
		L_9 = DRKLDIE_get__world_mC47A5A83E020269023E5FE6E9C7C493B9A61F4CB_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)-1714424600), (bool)1, (bool)1);
		__this->___DRKLDEAD_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKLDEAD_12), (void*)L_11);
		RuntimeObject* L_12;
		L_12 = DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline(__this, NULL);
		__this->___MY_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_14;
		RuntimeObject* L_14 = __this->___DRKLDEAD_12;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)190), L_14);
		RuntimeObject* L_15;
		L_15 = DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline(__this, NULL);
		__this->___MY_17 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_17;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)176), (8.0f));
		RuntimeObject* L_17;
		L_17 = DRKLDIE_get__world_mC47A5A83E020269023E5FE6E9C7C493B9A61F4CB_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)-1714839357), (bool)1, (bool)1);
		__this->___DRKL8TEX_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DRKL8TEX_18), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline(__this, NULL);
		__this->___MY_20 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_20), (void*)L_20);
		RuntimeObject* L_21 = __this->___MY_20;
		RuntimeObject* L_22 = __this->___DRKL8TEX_18;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)164), L_22);
		RuntimeObject* L_23;
		L_23 = DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline(__this, NULL);
		__this->___MY_23 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_23;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)168), (0.0f));
		RuntimeObject* L_25;
		L_25 = DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline(__this, NULL);
		__this->___MY_26 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_26), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_26;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)213), (0.0f));
		RuntimeObject* L_27;
		L_27 = DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline(__this, NULL);
		__this->___MY_29 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_29), (void*)L_27);
		RuntimeObject* L_28 = __this->___MY_29;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_29;
		L_29 = DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTGRANADE_set_MY_m00CEFC30058D6D21E081EFA320B9473491F0951D_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTGRANADE_set_THERE_mD6AD4EDED85BC54CEABD299B520BE4AABA4DFBBD_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTGRANADE_set__world_m5A5D264B63E6B5F96FDCE4D664B0C80574AF0E0C_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTGRANADE_get__world_mCCF2BC14730A8AC875DC98282F4E1884C129506D_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTGRANADE_get_MY_m7236DC3DD56B5A416A415A99F9E4312642C1FBA6_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTGRANADE_get_THERE_mB08DB1BA570DBBDF00014E56DAE648D1FD8EB5A1_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTGRANADE_set_Current_m949107A7B43DAF6069476FCA4CEB6EA9B95036BC_inline (SELECTGRANADE_tADF80A9F9969E3E5C06463BD8456BE331130B615* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTSTINGER_set_MY_m3CD2208F8F6A9F64458DFC5553F6B26DEB2BCA69_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTSTINGER_set_THERE_m81AE916FCBF6C65ABB988F798E74BF5E31BD9EE7_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTSTINGER_set__world_mFD9E58202C5E4359E56E957036BA79081D0097FE_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTSTINGER_get__world_m28B4CCE70C97BE0A5EFA15C2A102821B4D2F60B0_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTSTINGER_get_MY_mFE40B59F31C31B1093FA1665E4D46A9F807AB035_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTSTINGER_get_THERE_mEBAC00357932E7B1960C75C646C092243860D84B_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTSTINGER_set_Current_m75B7B18207FFDC373B056613F3F58D049F84474A_inline (SELECTSTINGER_tA24F935BB09B7DCB6F8F58692E9ED700B7453674* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTQUANTUM_set_MY_m8D3325359CC01DF2EE7A05CC468D4FF17255E4C6_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTQUANTUM_set_THERE_m0B7E850AC9F3B8124472F0752E2A9400F1022E2B_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTQUANTUM_set__world_m06D4B5E0112E7383B54A751600E76618F702EDD9_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTQUANTUM_get__world_mD4A4963AFED7F143E42FE187D88A29BE144B71DD_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTQUANTUM_get_MY_m6B680135C1F2A6A43D0627E398EA5598BC730F4C_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SELECTQUANTUM_get_THERE_m79983BE7718EF17114AA1B679341B8CD0FE61AD5_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SELECTQUANTUM_set_Current_mEE5C863A05E5F44796984C635BA27BC0F604A6DC_inline (SELECTQUANTUM_t261CBFC3B28628A89469D1D77109B62A59AE4910* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPIN_set_MY_mE1D4DAE0AF9CA3533599F6F83D40087A98E35A15_inline (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPIN_set_THERE_mF06923BBFB92EC8A74BAE5C0D0BE0DF932FD6491_inline (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPIN_set__world_m22F556FA32817B9EC3736647D4DFF966E848CEA8_inline (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPIN_get__world_m9B22B216430898828C41EC561308CF5383709D84_inline (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPIN_set_Current_mFBC34E06C35C2FBD1D1EF78C1DF98EE0727CDBE0_inline (ZOOMMAPIN_t1F6DF59EB137DB73442B0EFF12B20E64B3A14CBE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set_MY_m95808AA57B335735DC3FAEEE28064E53787FDF56_inline (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set_THERE_mD0DFE7F969C2CFD1B340CD0F90415ED0B7E662EA_inline (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set__world_m3B84D2C7902555789D8B52201531D704780B4875_inline (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ZOOMMAPOUT_get__world_m60943875030437202490B4A4347867F74CDFCEBE_inline (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZOOMMAPOUT_set_Current_m8B695B97C6902775E3B601944A15446FD693C613_inline (ZOOMMAPOUT_t1C38DB504689F7E31454ADAAE3B9D0FBA5642E1D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set_MY_m86F3A4773AC146E408C8161D7026BE581071939B_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set_THERE_m5963796893EDAA641EDD5C5D2ECECF8CDFE163B2_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set__world_m2A3AB01E9B6EDD594CE07D62D596D5B5B8C2D4D6_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDABRIEFING_get_MY_m45E7BABFBDCCA9C1822D28D7C33D1AFA370E7BA2_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDABRIEFING_get_THERE_m9D21046D9EDC81B28E59859963E7A19BE099F10A_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDABRIEFING_get__world_m956932EFF0CF100BED8DF9C4297B9AF412D324F4_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDABRIEFING_set_Current_m13FD63BC830F7F33FCB72E8020559A48A39203D7_inline (SHOWPDABRIEFING_t844499EB7C25B138C639618E25218D14C4CA3A72* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set_MY_mDB614BD089FDA259564A3B079DB21959CF60396B_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set_THERE_m897D8AFAFF53B1E4FB47182E1276EF2663AAB61B_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set__world_m746FEE7BA2278BFB21FEF78C2A158586A46AB102_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDAGAMEOVER_get__world_mD41C7BEA2EE9749B69C11A5E50786CCF5047AA0D_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDAGAMEOVER_get_MY_mDA4A410B292E47E8AF70B83415E77B057A6A8452_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWPDAGAMEOVER_get_THERE_mB946A2E52ABCE92A005F5C4D920058E677BE6D3A_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWPDAGAMEOVER_set_Current_m65825765DB4EC2DF6366FC4E93AE8182D190B78E_inline (SHOWPDAGAMEOVER_t40F4D2B992FDCFDA004278BD9DC0A65912FBAE89* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PDAMESSAGEOFF_set_MY_m3273D96C453EAEDB3E7AF09C2A2D2274FF5E8576_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PDAMESSAGEOFF_set_THERE_m1A07336DD3D30C02554BEA46F76B464542A0E430_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PDAMESSAGEOFF_set__world_mBABBD9BBAEA4A7032C0FFCA81C45CC83661FC0DB_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PDAMESSAGEOFF_get__world_m89B53B4C44CC35B3FE8B5396CD3D7A9D2C3D5682_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PDAMESSAGEOFF_get_MY_m7AA9C09B02028FFC41C82120C25B16EF40452994_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PDAMESSAGEOFF_get_THERE_m7451E6E0B7E27172ECE267F46109F89446DE27C8_inline (PDAMESSAGEOFF_t985994D291B64EE47C67C16E9E82D77A25C603FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPEATMUSIC_set_MY_m7CB550FE526258DCABC236BE6E982A52E1C44D5E_inline (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPEATMUSIC_set_THERE_mA0872F60EBBC1F0DEF57D437D78E22BD3A6E1A51_inline (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void REPEATMUSIC_set__world_m1A77505F29C1DDD4FE5AD98FE30B9529AF07E52D_inline (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* REPEATMUSIC_get__world_mA6AE373909CCBEA0FAA10527EFF61A41ACA3C8FB_inline (REPEATMUSIC_tF411DA252041D6B0D4020996E979E44ABB88593E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETSOUNDVOL_set_MY_m65A99CBB916529325C93F9C5F379055D90D954FD_inline (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETSOUNDVOL_set_THERE_mF506D2935706B328517B14551B79887198D70C40_inline (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SETSOUNDVOL_set__world_mD0BA6FEB93132F86A7C1469E12230848608B10E0_inline (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SETSOUNDVOL_get__world_m40C84DBEDC491D29EAAB7C41675B8491DB7D5A6F_inline (SETSOUNDVOL_tFF987D9D5CB1B966C4D3B9B13AF421F2C2A5630F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOUSE_TOGGLE_set_MY_m7FD02CA6FD917ADD9C7FA9D0D21922948EA9F960_inline (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOUSE_TOGGLE_set_THERE_m825576062A98EDFA45D3AFC9D61D2A0C910342CA_inline (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MOUSE_TOGGLE_set__world_m255DB775C45850AF6E81C7D7BB194535FC1925E5_inline (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MOUSE_TOGGLE_get__world_m48AEB2BA620EAC65D9B1AA05C973A123B7A2F288_inline (MOUSE_TOGGLE_tE62A28E1324BCC67666E642A663D2DF4E65C8432* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SCAN_OBJ_set_MY_m15BE4726451AD6F2445F3707D027545147DBBAB0_inline (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SCAN_OBJ_set_THERE_m466095617BD65BD32A59DDBA7FF2516DD3210096_inline (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SCAN_OBJ_set__world_m089FAEDAC3FFB51F594CF45D7E30ACD59F3F40AC_inline (SCAN_OBJ_t7330B77C0562E58C4D662348887E2EF71ED8C327* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY1_set_MY_m3017F54D40D2596EEAB47207B827A7BA42995910_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY1_set_THERE_m0AB74752128F3E398B8D484302C72CCB5EDBF26B_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY1_set__world_m77F256F2D3844F57FF105E3C7C423BFB161D29C9_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY1_get_MY_m14E81584D27B15F3E2C9EB5C7C87DA17A4AC00A8_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY1_get__world_mF73C5244ED752E699E22BCFE72E10CCE40B0565A_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY1_get_THERE_m823B4E7B8DD3533344F4DD00F9FAF91DE17A5584_inline (PICKKEY1_tC3C99AA5AC30336CEE263D74E3BE5CFE278C8EE8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY2_set_MY_m85E33F21C5D10E806E1D8C33EE5AA5C54899AC69_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY2_set_THERE_m78C151F45293AED07BCF00263E84109774C46818_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKKEY2_set__world_m4CE5C132865282B46DA79D72E74DA24A48C914DE_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY2_get_MY_mF4BF4229BF6FF5A64F6CCF7A3D7DE4B42B1885AE_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY2_get__world_mDFB51ECAE0162BA5D7A6D43AA09E45E94F5925E3_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKKEY2_get_THERE_mEF3CE8275FB4DAACB941EBFC1D50A9EAC74738B8_inline (PICKKEY2_tBB64BA3EFEFD5BA9DC6E5E9E03D2D71328740C27* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPLOCALMP5_set_MY_m612F6D212DCC322839627CAA01E285EFDE1CBC94_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPLOCALMP5_set_THERE_m2C78775F6658818CC2623B10B46C6ED4BAFE4CD1_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PICKUPLOCALMP5_set__world_m8D0070BB90D88599438CF2DB6D8FB1425EFB862E_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPLOCALMP5_get_MY_mA9C7A8C5D33F2EE7242527E905AED48106368280_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPLOCALMP5_get_THERE_m325965C8F285A423C1BD781B5BA23A04EC128AF2_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PICKUPLOCALMP5_get__world_mCD7ECD792058E3F871C3E9F87D103FFF60080278_inline (PICKUPLOCALMP5_t3A6D90DB70F1942A373BBF37575CFB51529530BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDPHASE_set_MY_m1AD1EEC1FE2AC0986892CAFA82793C663AD84AD4_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDPHASE_set_THERE_mCA2ECC076AE20C100124547F506BB69A51A29A8E_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDPHASE_set__world_mDF8AA195379FB34DE9DCB9396B3F976C0A03CFDD_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDPHASE_get__world_m5A82849C2C37134DE80626F2DE9802E85D824878_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDPHASE_get_MY_mFA2D59E510AA391B59A32617D7A8BEE170974A60_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDPHASE_get_THERE_m0012FD34F2D107D631FB809C345FBDD59632340E_inline (ENDPHASE_tD8A0C2608082C778F36DFB612DB6BED4BB7F7958* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTURN_set_MY_mA923BECBF50B0E01BE2E3D3935B34814C1FF3348_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTURN_set_THERE_mC5E940D2F1D1C897265A9E2E346F2B81CC1BD9DF_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLTURN_set__world_mA9A3239DC7D10C929E8775D49BE62965776AE924_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLTURN_get__world_m1EDAC117622B539B7A3137452F32AF69EEA379EF_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLTURN_get_MY_m6ABD140CDA26AF33D825E861E8FB774F6CCE30C8_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLTURN_get_THERE_m7B7CCFEB7E3BAA1E9DFD30E1394C3F26442610F2_inline (DRKLTURN_t29A11622C0B14C9738955A3B0FF9F9B3029D60D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWAIT_set_MY_m0263A93B77DC2B3AB4C51EBAE73EF03E8848FB31_inline (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWAIT_set_THERE_m6DC367E037AB88D31046EE53689A77CCE2445694_inline (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWAIT_set__world_mB55DC5478EE0D7F6F5CD36C8167D21027DAE1A7C_inline (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLWAIT_get_MY_m4254ECB832EEDD628C6073FD8B070A477F5BF009_inline (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLWAIT_get__world_m487170D31C9932109D6E292E15456A106B6945DF_inline (DRKLWAIT_t69DD8C6B056450F9FF3C279FE8A0E394B531CF05* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWANDER_set_MY_m00176394F14408AEE96DA3C562DEFEFC9A06BEB6_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWANDER_set_THERE_m72F305A4E933B31C5C991A8AF053A40949C184C5_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLWANDER_set__world_m8C7DC54D12B51DCC7CECC212CE0D84F88825A9BC_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLWANDER_get_MY_m3D471C36DA811827F39568F12B49064967B187AC_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLWANDER_get__world_m7E49C615139C77DDFBF5980BD92D6AA4371DA6FF_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLWANDER_get_THERE_m9A1FE047806F5B164B41D3482280DD711578342C_inline (DRKLWANDER_tE9296640D685F3B53610F9A9177F1ED79927C27A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSEARCH_set_MY_m2C2D80C9474DB900A7FBF07E6399FE25DB482439_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSEARCH_set_THERE_mC11856FBC19B2077D5A0641075A90A93918369DD_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSEARCH_set__world_m750BC843823DE2F7B3A310C94B8D0BD40C8C7125_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLSEARCH_get_MY_m06F924F228C39A712BB66341E18489D70A8B4DEC_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLSEARCH_get__world_mF35C519281182D56675A345A1A2DE5E34E903557_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLSEARCH_get_THERE_m5FFD36A9A0679E8FEBF82FC14C8461E98CD264D6_inline (DRKLSEARCH_t075C72F456752CB9D01C267EC19656C0BB3A97EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIDE_set_MY_mDBF84DE6A841C7EFC6D6C46C306D398D08A7752D_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIDE_set_THERE_m11A4A9D26F753955795874989CC67D270D2A95A8_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIDE_set__world_m262EC28723EB4F317C1448816C943AF1FC71FBEE_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIDE_get_MY_mE1DCA852E0009FA70EA47EA3EA82E5941246853C_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIDE_get__world_m0845DA86A7F8CCCA97AA7FF6520D2995F2EEE5C2_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHIDE_get_THERE_m47AF3245DB1E5C4242055F823AD3C1FFDC1E9822_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHIDE_set_Current_mD470036FE8B3ED7B768E39E56C8DC4F1E229EFB6_inline (DRKLHIDE_tB2B58CDE2DB7365C0570560F623607D2CA0CD5C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLISTEN_set_MY_m775C1CC2F0E4EF76C1187CCDFD69BE93F3146C5F_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLISTEN_set_THERE_mCDD4EE556FAF554CF095E6E9A83E78B5BD962775_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLISTEN_set__world_mB55685A08976C9076F4A8E0C23C6131A4EB0BA87_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLISTEN_get_MY_m08468F4F4660B4169D9B2597D93B6E28242D626C_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLISTEN_get__world_m67AB444A15CA0D3AF8C8E07FA19B6116C94A0B35_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLISTEN_set_Current_m615B0E8B6502997D2B30BAE7D9654B3CFEFEEB3E_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLISTEN_get_THERE_m9427596E9C4BFD0E15C2495580F0C37399C9FE2A_inline (DRKLLISTEN_t5D712FCDB2C95244EC315B8135B27FD7515FBBA1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLJUMP_set_MY_mAB50B51F792717D5687A0B0B1EF1C17DF0E75D2F_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLJUMP_set_THERE_m847CD5634B351BD4E990FD9456F3A44A8086B9FF_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLJUMP_set__world_m6B4ADF895CF1D70A1249B451FD89DE8D321DC4D2_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLJUMP_get_MY_m7506FE65AF8066F36E0C3B7630C703BE6725E3DE_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLJUMP_get_THERE_m08B26502D4740B9633220D0C233E7D854DB65B3B_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLJUMP_get__world_mCF35B443CA36D3A27047FADF71065723EAA39D22_inline (DRKLJUMP_t709E539F4AE666BB80056699E365475C5C727705* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLOOKFOR_set_MY_m31CB5504BC827998152153E790DD918EB34D96B9_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLOOKFOR_set_THERE_mF20CA9E93BA2E906D82AB632912EEF689ADF66D0_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLLOOKFOR_set__world_m360E33A7D06925D2FC841B74037AA56CF49C6EAF_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLOOKFOR_get_MY_m873088A333321A7E00E38CF01387E3F3A37BD357_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLOOKFOR_get_THERE_m50CA84B226C3D2C5B56A7A58E01D59785A03E5AD_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLLOOKFOR_get__world_m02B444656F694DEAB81762D0825139119142E63A_inline (DRKLLOOKFOR_tF71027A56AB939ACBB527A48033084BC7BE51C2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHEAR_set_MY_m2D782F3BC3DA5E62EFB38BDC892693F5C085D0F7_inline (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHEAR_set_THERE_m0AEB688A67F91D44F8A7C4BA5431B205473DF32C_inline (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLHEAR_set__world_mEA742B135C42B4198D28F78262BEFF55D8A2AC2D_inline (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHEAR_get__world_m0AF465C30A1A793653D0C82E139B79FD372ABF55_inline (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLHEAR_get_MY_m836EBC07AD78367B0274CD47E9573EDADD751CD1_inline (DRKLHEAR_t52916874193FD11302F748BB435B73F0D2EF3A5E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDOWN_set_MY_m3ED1794DE5D3493BFE46A8E95DE0C70F433D9D18_inline (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDOWN_set_THERE_m72418400F6FE617923FF107FE09FEB49F1926F0E_inline (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDOWN_set__world_m196E14F1070C930C744C900C2E09C3E35B3D3E3C_inline (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDOWN_get__world_m962A79B3B6B7BA11B5A98DB74068163C4FBDF6DA_inline (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDOWN_get_MY_mD06A816677F047B999136C3AD07F05347C1252E1_inline (DRKLDOWN_tC9401535FEAF94B3569CEB18EE5F61D34EC8E42F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK_set_MY_m796754BF5CAFC6C1DA19118EB31CF280580C57C1_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK_set_THERE_m0B5AF339087E7C45B0C37B1B6BBE3353C43306C0_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLFOLLOWATTACK_set__world_mB27C9A3AEB71E16D9AE70F5BBBA6B3F51F2EDEC5_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLFOLLOWATTACK_get__world_m24F0EB172E967F473296F4680319B4A66E802A63_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLFOLLOWATTACK_get_MY_m30864F1E3D72E67A9D0D6B17F36F5A3A9BD2D825_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLFOLLOWATTACK_get_THERE_mFBCB23C9A03B92ED753CBFB24A8ECE2372C951D6_inline (DRKLFOLLOWATTACK_tF50714B6F005BF17EB635151CF97F09441A11C64* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSHOOT_set_MY_m1F1FEF2F85417342BB78463405AE97FC78C2AC3A_inline (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSHOOT_set_THERE_m764C11CF7005ECE1D3731E0597D9576623FFD190_inline (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLSHOOT_set__world_mAA44003B5A9E298AE2093DC7BF4B551CD66A66CE_inline (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLSHOOT_get_MY_mFB2C631E5C2C0CF4AF493084F68216F0A9F28590_inline (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLSHOOT_get__world_mDC50DCA76428E38A9A262226C157680D7F3F6885_inline (DRKLSHOOT_t4DC4A724A39735E58B7000FE60312E1C04D58664* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLESCAPE_set_MY_mF60FE76417CA5E9574A3960704C8A0E3A592B873_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLESCAPE_set_THERE_mEFEDBA735EBAE7F008DA63F479350A6173FED2F6_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLESCAPE_set__world_mF2870894E9A36FEFB4D4CB595FE2C43C7DC38903_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLESCAPE_get_MY_m020388AAF0A2CDD37F7B951344359A5030D28FD7_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLESCAPE_get__world_m2902C913BCAC55809BD186631D8736FCA4357A48_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLESCAPE_get_THERE_m6B92313A2E5A08615850881ACA33F78397037EE4_inline (DRKLESCAPE_t1C662F0C7C6A0F42B4326B28BDA9695DEB043543* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDEAD_set_MY_mCC2910DC1DD5D165D7A06E4A654D61854A2D7B99_inline (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDEAD_set_THERE_m3F8E02B68FBC3216FB3BD651967350841F4CE8D4_inline (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDEAD_set__world_m4F00FAB6846DC605C629D4284DA786F19A1117FE_inline (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDEAD_get_MY_m1E9C8F7A7F2D80633A049FA752E8369449E54AC6_inline (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDEAD_get__world_m95456679C098879BA83A2FAD2014941DD30950C2_inline (DRKLDEAD_t2B936CF8A5751DCCA5BFA6DFF5B6E925F5169E36* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDIE_set_MY_m0A494CBCD83236C56296C4A21C07AD0024E2C638_inline (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDIE_set_THERE_m8E0123BE6D8B053E7BFD8F8895FE8C7F725271E1_inline (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DRKLDIE_set__world_m1ADAB60B0F7F09F892437A2644323705EA0240C1_inline (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDIE_get_MY_mC87ED7B0B33E7B17AE3D70D837B6D529D5FBB6A6_inline (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DRKLDIE_get__world_mC47A5A83E020269023E5FE6E9C7C493B9A61F4CB_inline (DRKLDIE_t88078C1E64453E88E485BA8ADE25F9531047FFE9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}

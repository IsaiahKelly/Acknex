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
struct AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD;
struct ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A;
struct BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34;
struct CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366;
struct CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255;
struct CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A;
struct DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04;
struct ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A;
struct EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC;
struct EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B;
struct EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5;
struct EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401;
struct EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2;
struct EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA;
struct FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB;
struct FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6;
struct HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A;
struct HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4;
struct HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25;
struct IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0;
struct IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399;
struct IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2;
struct IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0;
struct IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE;
struct LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45;
struct LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC;
struct LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758;
struct MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D;
struct MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91;
struct RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63;
struct SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B;
struct SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A;
struct SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365;
struct SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6;
struct SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE;
struct SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD;
struct SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60;
struct SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1;
struct TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4;
struct TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA;
struct VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602;
struct VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2;
struct VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C;

IL2CPP_EXTERN_C RuntimeClass* ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602_il2cpp_TypeInfo_var;
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
struct AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MISSILECOUNTER_1;
	float ___MISSILECOUNTER_1_val;
	RuntimeObject* ___MISSILECOUNTER_2;
	RuntimeObject* ___MISSILECOUNTER_4;
	float ___MISSILECOUNTER_4_val;
	RuntimeObject* ___MY_7;
	RuntimeObject* ___MISSILECOUNTER_9;
	float ___MISSILECOUNTER_9_val;
	RuntimeObject* ___BULLET_10;
	RuntimeObject* ___MY_12;
	RuntimeObject* ___MISSILECOUNTER_14;
	float ___MISSILECOUNTER_14_val;
	RuntimeObject* ___MISSILECOUNTER_16;
	RuntimeObject* ___MY_19;
	float ___temp_20;
};
struct ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___BIP03SND_0;
	RuntimeObject* ___ASKFOREXITTEXT_2;
	RuntimeObject* ___EXITGAME_13;
	RuntimeObject* ___EXITGAME_15;
	RuntimeObject* ___RESETANSWER_17;
	RuntimeObject* ___HLP02STR_19;
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
struct CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SUBMENUITEM_1;
	float ___SUBMENUITEM_1_val;
	RuntimeObject* ___SUBMENUITEM_3;
	float ___SUBMENUITEM_3_val;
	RuntimeObject* ___BIP02SND_4;
	RuntimeObject* ___MOVE_MODE_9;
	float ___startTime1;
	float ___endTime1;
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
struct CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MENUITEM_1;
	float ___MENUITEM_1_val;
	RuntimeObject* ___MENUITEM_3;
	float ___MENUITEM_3_val;
	RuntimeObject* ___MENUITEM_7;
	float ___MENUITEM_7_val;
	RuntimeObject* ___MENUITEM_9;
	float ___MENUITEM_9_val;
	RuntimeObject* ___MENUITEM_11;
	float ___MENUITEM_11_val;
	RuntimeObject* ___MENUITEM_13;
	float ___MENUITEM_13_val;
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
struct EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MOVE_MODE_1;
	float ___startTime1;
	float ___endTime1;
};
struct EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___EXPLOSIONSTART_0;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
	RuntimeObject* ___MY_17;
	RuntimeObject* ___MY_18;
	RuntimeObject* ___EXPLOSION_ON_21;
	RuntimeObject* ___SHOOT_SECTOR_23;
	RuntimeObject* ___SHOOT_RANGE_25;
	RuntimeObject* ___SHOOT_FAC_27;
	RuntimeObject* ___MY_28;
	RuntimeObject* ___HIT_DIST_30;
	float ___HIT_DIST_30_val;
	RuntimeObject* ___RESULT_31;
	float ___RESULT_31_val;
	RuntimeObject* ___PLAYER_RESULT_32;
	RuntimeObject* ___SHOOT_FAC_34;
	RuntimeObject* ___SHOOT_RANGE_36;
	RuntimeObject* ___MY_37;
	RuntimeObject* ___HIT_DIST_39;
	float ___HIT_DIST_39_val;
	RuntimeObject* ___MY_42;
	RuntimeObject* ___MY_45;
	RuntimeObject* ___MY_48;
	RuntimeObject* ___MY_51;
	RuntimeObject* ___EXP01TEX_52;
	RuntimeObject* ___MY_54;
	RuntimeObject* ___MY_57;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___EXPLOSION_ON_60;
};
struct EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___temp_3;
	RuntimeObject* ___SQRTARGETDIST_4;
	RuntimeObject* ___SQRTARGETDIST_5;
	float ___SQRTARGETDIST_5_val;
	RuntimeObject* ___MY_9;
	float ___temp_10;
	RuntimeObject* ___MY_13;
	float ___temp_14;
	RuntimeObject* ___MY_19;
	float ___temp_20;
	RuntimeObject* ___MY_23;
	float ___temp_24;
	RuntimeObject* ___MY_31;
	float ___temp_32;
	RuntimeObject* ___MY_35;
	float ___temp_36;
	RuntimeObject* ___MY_41;
	float ___temp_42;
	RuntimeObject* ___MY_45;
	float ___temp_46;
	RuntimeObject* ___SQRTARGETDIST_50;
	float ___SQRTARGETDIST_50_val;
};
struct EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
};
struct EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___EXP01ATEX_0;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___EXPLOSIONEND_3;
	RuntimeObject* ___MY_5;
};
struct EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___EXPLOSIONSMOKE_3;
	RuntimeObject* ___MY_5;
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
struct HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SHOWMAINMENU_6;
	RuntimeObject* ___UNDERWATER_17;
	float ___UNDERWATER_17_val;
	RuntimeObject* ___BLACK_18;
	RuntimeObject* ___MOVE_MODE_21;
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
struct IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_6;
	RuntimeObject* ___FOLLOW_8;
	RuntimeObject* ___MY_10;
	RuntimeObject* ___temp_11;
	RuntimeObject* ___EXPLOSION_ON_13;
	RuntimeObject* ___SHOOT_RANGE_15;
	RuntimeObject* ___SHOOT_FAC_17;
	RuntimeObject* ___MY_18;
	RuntimeObject* ___MY_21;
	RuntimeObject* ___MY_24;
	RuntimeObject* ___MY_27;
	RuntimeObject* ___MY_30;
	float ___temp_31;
	RuntimeObject* ___MY_33;
	RuntimeObject* ___IMPL01TEX_34;
	RuntimeObject* ___MY_36;
	RuntimeObject* ___IMPLOSIONSTART_37;
	RuntimeObject* ___MY_39;
	RuntimeObject* ___MY_42;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___EXPLOSION_ON_45;
};
struct IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___IMPL01ATEX_0;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___IMPLODELIGHT_3;
	RuntimeObject* ___IMPLOSIONFLARE_6;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
};
struct IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___MY_3;
	RuntimeObject* ___FOLLOW_5;
	RuntimeObject* ___MY_7;
	RuntimeObject* ___temp_8;
	RuntimeObject* ___EXPLOSION_ON_10;
	RuntimeObject* ___SHOOT_RANGE_12;
	RuntimeObject* ___SHOOT_FAC_14;
	RuntimeObject* ___MY_15;
	RuntimeObject* ___MY_18;
	RuntimeObject* ___MY_21;
	float ___temp_22;
	RuntimeObject* ___RENDER_MODE_24;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___EXPLOSION_ON_27;
};
struct IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___IMPL01BTEX_0;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___IMPLOSIONEND_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
};
struct IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	RuntimeObject* ___IMPLOSIONCRUSH_3;
	RuntimeObject* ___MY_5;
	RuntimeObject* ___MY_8;
	RuntimeObject* ___MY_11;
	RuntimeObject* ___MY_14;
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
struct LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SHOOT_RANGE_1;
	RuntimeObject* ___SHOOT_FAC_3;
	RuntimeObject* ___MY_4;
	RuntimeObject* ___HIT_MINDIST_6;
	float ___HIT_MINDIST_6_val;
	RuntimeObject* ___HIT_9;
	float ___temp_10;
	RuntimeObject* ___HIT_12;
	RuntimeObject* ___HIT_13;
	RuntimeObject* ___MY_15;
	RuntimeObject* ___DISTX_16;
	RuntimeObject* ___DISTX_17;
	float ___DISTX_17_val;
	RuntimeObject* ___HIT_X_19;
	float ___HIT_X_19_val;
	RuntimeObject* ___EXPLOSION_CENTER_22;
	float ___temp_23;
	RuntimeObject* ___HIT_X_27;
	float ___HIT_X_27_val;
	RuntimeObject* ___EXPLOSION_CENTER_30;
	float ___temp_31;
	RuntimeObject* ___HIT_Y_35;
	float ___HIT_Y_35_val;
	RuntimeObject* ___EXPLOSION_CENTER_38;
	float ___temp_39;
	RuntimeObject* ___HIT_Y_43;
	float ___HIT_Y_43_val;
	RuntimeObject* ___EXPLOSION_CENTER_46;
	float ___temp_47;
	RuntimeObject* ___DISTX_49;
	float ___DISTX_49_val;
	RuntimeObject* ___DISTX_50;
	RuntimeObject* ___DISTZ_51;
	RuntimeObject* ___DISTZ_52;
	float ___DISTZ_52_val;
	RuntimeObject* ___HIT_54;
	float ___temp_55;
	RuntimeObject* ___MY_58;
	float ___temp_59;
	RuntimeObject* ___DISTX_61;
	float ___DISTX_61_val;
	RuntimeObject* ___MY_63;
	RuntimeObject* ___MY_65;
	float ___temp_66;
	RuntimeObject* ___DISTZ_67;
	float ___DISTZ_67_val;
	RuntimeObject* ___DISTX_69;
	float ___DISTX_69_val;
	RuntimeObject* ___MY_72;
	float ___temp_73;
	RuntimeObject* ___MY_75;
	RuntimeObject* ___MY_77;
	float ___temp_78;
	RuntimeObject* ___MY_81;
	float ___temp_82;
	RuntimeObject* ___MY_85;
	float ___temp_86;
	RuntimeObject* ___MY_89;
	float ___temp_90;
};
struct LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MY_2;
	float ___temp_3;
	RuntimeObject* ___PLAYER_ARMOUR_4;
	RuntimeObject* ___PLAYER_ARMOUR_5;
	float ___PLAYER_ARMOUR_5_val;
	RuntimeObject* ___PLAYER_ARMOUR_6;
	float ___PLAYER_ARMOUR_6_val;
	RuntimeObject* ___PLAYER_RESULT_9;
	RuntimeObject* ___PLAYER_RESULT_10;
	float ___PLAYER_RESULT_10_val;
	RuntimeObject* ___QGUN04SND_18;
};
struct MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MENUITEM_1;
	float ___MENUITEM_1_val;
	RuntimeObject* ___MENUITEM_2;
	RuntimeObject* ___MAXMENUITEM_3;
	float ___MAXMENUITEM_3_val;
	RuntimeObject* ___MENUITEM_4;
	float ___MENUITEM_4_val;
	RuntimeObject* ___MENUITEM_6;
	RuntimeObject* ___BIP01SND_7;
};
struct MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___MENUITEM_1;
	float ___MENUITEM_1_val;
	RuntimeObject* ___MENUITEM_2;
	RuntimeObject* ___MENUITEM_4;
	float ___MENUITEM_4_val;
	RuntimeObject* ___MAXMENUITEM_5;
	float ___MAXMENUITEM_5_val;
	RuntimeObject* ___MENUITEM_6;
	RuntimeObject* ___BIP01SND_7;
};
struct RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___BIP02SND_0;
};
struct SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	float ___startTime1;
	float ___endTime1;
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
struct SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___HIDEMENU_0;
	RuntimeObject* ___MOVE_MODE_3;
	RuntimeObject* ___MAXMENUITEM_5;
	RuntimeObject* ___SUBMENUUP_6;
	RuntimeObject* ___SUBMENUDOWN_8;
	RuntimeObject* ___SUBMENUUP_10;
	RuntimeObject* ___SUBMENUDOWN_12;
	RuntimeObject* ___BIP02SND_14;
	RuntimeObject* ___LOADSAVETEXT_18;
	RuntimeObject* ___SAVEDGAME01_19;
	RuntimeObject* ___LOADSAVETEXT_21;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___LOADSAVETEXT_21_array;
	int32_t ___LOADSAVETEXT_21_index;
	RuntimeObject* ___LOADSAVETEXT_24;
	RuntimeObject* ___SAVEDGAME02_25;
	RuntimeObject* ___LOADSAVETEXT_27;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___LOADSAVETEXT_27_array;
	int32_t ___LOADSAVETEXT_27_index;
	RuntimeObject* ___LOADSAVETEXT_30;
	RuntimeObject* ___SAVEDGAME03_31;
	RuntimeObject* ___LOADSAVETEXT_33;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___LOADSAVETEXT_33_array;
	int32_t ___LOADSAVETEXT_33_index;
	RuntimeObject* ___LOADSAVETEXT_36;
	RuntimeObject* ___SAVEDGAME04_37;
	RuntimeObject* ___LOADSAVETEXT_39;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___LOADSAVETEXT_39_array;
	int32_t ___LOADSAVETEXT_39_index;
	RuntimeObject* ___CHOOSEGAME_40;
	RuntimeObject* ___SUBMENUPANEL_42;
	RuntimeObject* ___LOADSAVETEXT_45;
	RuntimeObject* ___HLP01STR_48;
};
struct SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___HIDEMENU_0;
	RuntimeObject* ___MOVE_MODE_3;
	RuntimeObject* ___MAXMENUITEM_5;
	RuntimeObject* ___SUBMENUUP_6;
	RuntimeObject* ___SUBMENUDOWN_8;
	RuntimeObject* ___SUBMENUUP_10;
	RuntimeObject* ___SUBMENUDOWN_12;
	RuntimeObject* ___BIP02SND_14;
	RuntimeObject* ___LOADSAVETEXT_18;
	RuntimeObject* ___SAVEDGAME01_19;
	RuntimeObject* ___LOADSAVETEXT_21;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___LOADSAVETEXT_21_array;
	int32_t ___LOADSAVETEXT_21_index;
	RuntimeObject* ___LOADSAVETEXT_24;
	RuntimeObject* ___SAVEDGAME02_25;
	RuntimeObject* ___LOADSAVETEXT_27;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___LOADSAVETEXT_27_array;
	int32_t ___LOADSAVETEXT_27_index;
	RuntimeObject* ___LOADSAVETEXT_30;
	RuntimeObject* ___SAVEDGAME03_31;
	RuntimeObject* ___LOADSAVETEXT_33;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___LOADSAVETEXT_33_array;
	int32_t ___LOADSAVETEXT_33_index;
	RuntimeObject* ___LOADSAVETEXT_36;
	RuntimeObject* ___SAVEDGAME04_37;
	RuntimeObject* ___LOADSAVETEXT_39;
	List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* ___LOADSAVETEXT_39_array;
	int32_t ___LOADSAVETEXT_39_index;
	RuntimeObject* ___TYPEGAME_40;
	RuntimeObject* ___SUBMENUPANEL_42;
	RuntimeObject* ___LOADSAVETEXT_45;
	RuntimeObject* ___HLP01STR_48;
};
struct SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___BIP02SND_0;
	RuntimeObject* ___HIDEMENU_2;
	RuntimeObject* ___MOVE_MODE_5;
	RuntimeObject* ___MAXMENUITEM_7;
	RuntimeObject* ___SUBMENUUP_8;
	RuntimeObject* ___SUBMENUDOWN_10;
	RuntimeObject* ___VOLUMEUP_12;
	RuntimeObject* ___VOLUMEDOWN_14;
	RuntimeObject* ___HIDEMENU_16;
	RuntimeObject* ___SOUNDVOLUMEPANEL_18;
	RuntimeObject* ___SOUNDVOLUMETEXT_21;
	RuntimeObject* ___HLP01STR_24;
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
struct SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SUBMENUITEM_1;
	float ___SUBMENUITEM_1_val;
	RuntimeObject* ___SUBMENUITEM_2;
	RuntimeObject* ___MAXMENUITEM_3;
	float ___MAXMENUITEM_3_val;
	RuntimeObject* ___SUBMENUITEM_4;
	float ___SUBMENUITEM_4_val;
	RuntimeObject* ___SUBMENUITEM_6;
	RuntimeObject* ___BIP01SND_7;
};
struct SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SUBMENUITEM_1;
	float ___SUBMENUITEM_1_val;
	RuntimeObject* ___SUBMENUITEM_2;
	RuntimeObject* ___SUBMENUITEM_4;
	float ___SUBMENUITEM_4_val;
	RuntimeObject* ___MAXMENUITEM_5;
	float ___MAXMENUITEM_5_val;
	RuntimeObject* ___SUBMENUITEM_6;
	RuntimeObject* ___BIP01SND_7;
};
struct TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4  : public RuntimeObject
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
};
struct TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SUBMENUITEM_1;
	float ___SUBMENUITEM_1_val;
	RuntimeObject* ___SUBMENUITEM_3;
	float ___SUBMENUITEM_3_val;
	RuntimeObject* ___BIP02SND_4;
	RuntimeObject* ___temp_9;
	RuntimeObject* ___HERE_14;
	RuntimeObject* ___temp_15;
	RuntimeObject* ___LIFTSOUND_19;
	RuntimeObject* ___MOVE_MODE_21;
	RuntimeObject* ___SUBMENUITEM_23;
	float ___SUBMENUITEM_23_val;
	RuntimeObject* ___SAVEDGAME01_24;
	RuntimeObject* ___SUBMENUITEM_26;
	float ___SUBMENUITEM_26_val;
	RuntimeObject* ___SAVEDGAME02_27;
	RuntimeObject* ___SUBMENUITEM_29;
	float ___SUBMENUITEM_29_val;
	RuntimeObject* ___SAVEDGAME03_30;
	RuntimeObject* ___SUBMENUITEM_32;
	float ___SUBMENUITEM_32_val;
	RuntimeObject* ___SAVEDGAME04_33;
	RuntimeObject* ___IFESC_34;
	RuntimeObject* ___RESULT_37;
	float ___RESULT_37_val;
	float ___startTime1;
	float ___endTime1;
	RuntimeObject* ___SHOWMAINMENU_45;
	RuntimeObject* ___FIRE_GUN_55;
	RuntimeObject* ___FIRE_GUN_57;
	RuntimeObject* ___LAYER12_59;
	RuntimeObject* ___LAYER13_62;
	RuntimeObject* ___LAYER16_65;
	RuntimeObject* ___SEL_TRIC_68;
	RuntimeObject* ___SEL_NONE_70;
	RuntimeObject* ___SEL_MP5_72;
	RuntimeObject* ___SEL_BURST_74;
	RuntimeObject* ___SEL_GRAN_76;
	RuntimeObject* ___SEL_STNG_78;
	RuntimeObject* ___SEL_QGUN_80;
	RuntimeObject* ___MAPMODE_82;
	float ___MAPMODE_82_val;
	RuntimeObject* ___MAP_MODE_83;
	RuntimeObject* ___SECCOUNTER_85;
	RuntimeObject* ___MOVE_MODE_87;
	RuntimeObject* ___BLACK_88;
};
struct VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602  : public RuntimeObject
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
};
struct VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SUBMENUITEM_1;
	float ___SUBMENUITEM_1_val;
	RuntimeObject* ___SUBMENUITEM_3;
	float ___SUBMENUITEM_3_val;
	RuntimeObject* ___BIP01SND_4;
	RuntimeObject* ___SOUND_VOL_7;
	float ___SOUND_VOL_7_val;
	RuntimeObject* ___SOUND_VOL_9;
	float ___SOUND_VOL_9_val;
	RuntimeObject* ___SOUND_VOL_10;
	RuntimeObject* ___SOUND_VOL_11;
	float ___SOUND_VOL_11_val;
	RuntimeObject* ___SOUND_VOL_BUFFER_12;
	RuntimeObject* ___BIP01SND_13;
	RuntimeObject* ___CDAUDIO_VOL_16;
	float ___CDAUDIO_VOL_16_val;
	RuntimeObject* ___CDAUDIO_VOL_18;
	float ___CDAUDIO_VOL_18_val;
	RuntimeObject* ___CDAUDIO_VOL_19;
	RuntimeObject* ___CDAUDIO_VOL_20;
	float ___CDAUDIO_VOL_20_val;
	RuntimeObject* ___CDAUDIO_VOL_BUFFER_21;
	RuntimeObject* ___TOUGHNESS_23;
	float ___TOUGHNESS_23_val;
	RuntimeObject* ___TOUGHNESS_24;
	RuntimeObject* ___BIP01SND_25;
};
struct VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C  : public RuntimeObject
{
	int32_t ____cursor;
	RuntimeObject* ___U3CMYU3Ek__BackingField;
	RuntimeObject* ___U3CTHEREU3Ek__BackingField;
	RuntimeObject* ___U3C_worldU3Ek__BackingField;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
	RuntimeObject* ___SUBMENUITEM_1;
	float ___SUBMENUITEM_1_val;
	RuntimeObject* ___SUBMENUITEM_3;
	float ___SUBMENUITEM_3_val;
	RuntimeObject* ___BIP01SND_4;
	RuntimeObject* ___SOUND_VOL_7;
	float ___SOUND_VOL_7_val;
	RuntimeObject* ___SOUND_VOL_9;
	float ___SOUND_VOL_9_val;
	RuntimeObject* ___SOUND_VOL_10;
	RuntimeObject* ___SOUND_VOL_11;
	float ___SOUND_VOL_11_val;
	RuntimeObject* ___SOUND_VOL_BUFFER_12;
	RuntimeObject* ___BIP01SND_13;
	RuntimeObject* ___CDAUDIO_VOL_16;
	float ___CDAUDIO_VOL_16_val;
	RuntimeObject* ___CDAUDIO_VOL_18;
	float ___CDAUDIO_VOL_18_val;
	RuntimeObject* ___CDAUDIO_VOL_19;
	RuntimeObject* ___CDAUDIO_VOL_20;
	float ___CDAUDIO_VOL_20_val;
	RuntimeObject* ___CDAUDIO_VOL_BUFFER_21;
	RuntimeObject* ___TOUGHNESS_23;
	float ___TOUGHNESS_23_val;
	RuntimeObject* ___TOUGHNESS_24;
	RuntimeObject* ___BIP01SND_25;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSAVEMENU_set_MY_m7173D12D13BC534C0658B5E595C30086B278B3D3_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSAVEMENU_set_THERE_m46ADC615F4B6978E54B98670F62042B3EB804901_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSAVEMENU_set__world_mC62EAD66DA5208341112763152FECCFDBBE9EE2C_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) ;
inline void List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213 (List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9 (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSAVEMENU_get_MY_mDBA2D6017CB6D2EFA26018316C8C500CF2CD922E_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSAVEMENU_get_THERE_m5630B5CDEB30539132A4BE6E22CF09E9EACBFF3A_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWLOADMENU_set_MY_m5967B56FE6155B2B0E8227CDE01EFA1E5CF52A9E_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWLOADMENU_set_THERE_mB2639C05646DA4023BFAE9F18C7D27CA3AD83DC3_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWLOADMENU_set__world_m43823B5308C410F16409F6915A8DD1EC5EB12BFB_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWLOADMENU_get_MY_m8519010AEDC2A494998B553CFF1AE8BFC3BBD32D_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWLOADMENU_get_THERE_mF44729B4EDD642DB902108B5C48A0EEB553928FF_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU_set_MY_mDBDEF688FAA4DAE07CB88C395F17F92D471459CB_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU_set_THERE_m4E6048A9A518632C4C033B612D66FF73084EA505_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU_set__world_m74D96618BFC9397B056BF33B0BC25F4102F37428_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSOUNDVOLUMEMENU_get_MY_m4B19CF921FE0C61B3A34E3EEFD935321CCC17287_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSOUNDVOLUMEMENU_get_THERE_mC6776904B2172F2FB5258658CF48F8DCBA1DDC65_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEMENU_set_MY_m6CA6A0E3BC085AFD01D7BAB34CCC762C99BCEB25_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEMENU_set_THERE_m4D9F2CA17FC2801EDAD960FF359E9C38F1DF0957_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEMENU_set__world_mDD69EFB1C840354FF635781EC16A29FD5D9164C8_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SET_BLUE__ctor_m398E7AA8C854CA036D788D740731EC3AA3B5C19F (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HIDEMENU_get_MY_mA809949EB726C158A559D63C0E42CD1D18B24F9C_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HIDEMENU_get_THERE_m140C5A91B7004628B5F8B7D7CA03647EAFDD6907_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWWEAPON__ctor_m10112909615282BE73D82296C8A4E36231C295CD (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUUP_set_MY_mDCFE5C508EE9ADC08BB1B5049AA224F3C5959E0F_inline (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUUP_set_THERE_mECDC89DE95A2983E21AC34255320C6B65BFA1CE9_inline (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUUP_set__world_m0A8A6D82D86F87881F10BC3B4F5ED600589D7A89_inline (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MENUUP_get__world_mE7AEB40C28530C4DF214F2B1B3151DD3A12FBC9A_inline (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUDOWN_set_MY_m4644C5F6942820CB294F56EF042BC803709A07C4_inline (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUDOWN_set_THERE_mFAB776E31CBECC0A705B46219963F21209A5ADEC_inline (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUDOWN_set__world_mE9E66138A56C21DB1A5BDBAA442554E6D88FD95A_inline (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MENUDOWN_get__world_m19F1C88DBBB471B7AE25BF745400329CA0B3DE70_inline (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4 (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUUP_set_MY_mC22DEC83495D941A87038A6E74644BDE6F1FC9F1_inline (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUUP_set_THERE_mB3F4B35030F7448CC9400F8716118EC508D1A027_inline (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUUP_set__world_mBDB356FFFE562BF01F9B8C1E3DED566B087E819A_inline (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUUP_get__world_m329FE1D0FD979551E86AEEE5464B4398D13BFFE5_inline (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUDOWN_set_MY_m03F34FE8A947549338B263FD18722708F2C21D0E_inline (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUDOWN_set_THERE_m77BE279DEB0FFF6D10B79DEB6BC003534497F386_inline (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUDOWN_set__world_mA22748DCCF2F48E0FE9B9B22446A65F02F110D7B_inline (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUDOWN_get__world_m668E4ACA97DBCE650318B64FC01BFAB2F77CDB80_inline (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEUP_set_MY_m9ED35C9BFAFAD7601A48861CA3C2BF474B71A53D_inline (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEUP_set_THERE_mFCED82953CE99725B4F51358AF15F58D912FF112_inline (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEUP_set__world_m14F106017196FB08A545A7B907F0587CF3AFEAAB_inline (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEDOWN_set_MY_mB11140190F3C37F0C2EFEE8895BBF9FF39EE2544_inline (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEDOWN_set_THERE_mBB5C3FFA6C63131F00E4F174CD9E2AE3816E24E4_inline (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEDOWN_set__world_m0DE0BCFDF3B1E0A15A7EDEDCD11D4047B0DC644F_inline (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEWEAPON_set_MY_m782DDF9401BB88C6B13FCDF4ECF6F64405CECF10_inline (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEWEAPON_set_THERE_mC336C3971A558129857606F5F8044EC10546D9E5_inline (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEWEAPON_set__world_m988A107AB864B59B7B7A8F2C23F49380AA127D5F_inline (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWWEAPON_set_MY_m725FF656BE336C1AEBBCF57F4D3375004750372C_inline (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWWEAPON_set_THERE_m6B116142203C49CC0CB7FAAE926967F554D04240_inline (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWWEAPON_set__world_mF83DB7390B231C456FD62FD21ACA0CC293568FCA_inline (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TYPEGAME_set_MY_mBAF7BC89DF9749EF01252E3DE2EB1A635DB0CEF0_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TYPEGAME_set_THERE_mFBBE5DED3B83C972EC254C9F3B3DD210CC4F5FB4_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TYPEGAME_set__world_mD00FC4301828E478F3929B5A40A59B95E46DA06A_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE__ctor_m4C73C0F25D7EE0EF07CAEE68B9EA4BF18A4F636C (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TYPEGAME_get_MY_m17489F8E2846DE825CF644AF6CA9E7D9E11AA511_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TYPEGAME_get_THERE_mC02388C0DF9CFAD2BD9A01D97DF54654014B08AD_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F (int32_t ___0_ticks, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TYPEGAME_set_Current_mE6C11CDE53336E818B0765F39BA723F309D70D34_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGAME_set_MY_m0227DBF3679E495D61A6A03BE2C104F19D46F678_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGAME_set_THERE_mEF39E75013192C8D1A77982D443E65D460869183_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGAME_set__world_mC664A95E5FD94543C20E0942F85D4DFB23270E0F_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGAME_get__world_m9D1E0B4D256C97693510165D725889A4C65282EC_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEMENU__ctor_mDD24C5A9C8F592A3C7E4CAF984260858CDF76851 (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGAME_get_MY_m4665B8349BBD4DFA23B685E683DF8893842771B8_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGAME_get_THERE_m910741DCF98D09CA58B4B1512026AEE91B0DE625_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGAME_set_Current_mFFD0F5EEC4B21D451D28620D5978A47C05199101_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSESUBMENU_set_MY_mFBECCAB8EBCCAD2C78AB7DE405B807849C21A4F7_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSESUBMENU_set_THERE_m6A299B236930BC100934D9860A4226387880285F_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSESUBMENU_set__world_m923AD95C5ACB1FB4DBC0C4F1D874D37ED12FA666_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU__ctor_m8AD2233DAB721CBE9E8A160AE5359BD11B42F982 (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSESUBMENU_get_MY_mFF7455D77CD47DDFCE07302351BA476B7A1F134D_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSESUBMENU_get_THERE_m87F95DD5BA8D5907698CA4B08CC58DC8B9852E43_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSAVEMENU__ctor_m730E61A258C5909A7AAD68B2816C3AF7FB34D4BF (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWLOADMENU__ctor_m0DA6BF91E4E8E1C6392C30322F84512D7059DE21 (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASKFOREXIT__ctor_m492C18B4DD6F45959EFB8ABD9DB3084C03196990 (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set_MY_m1184B941EDAAF921E19A1748158BB8406094D7BF_inline (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set_THERE_mB092CB296642E4B7699BB695A128BC140AAEE473_inline (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set__world_m18893C72495CA39B621FA360A969EBE808CD06C3_inline (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3 (int32_t ___0_frames, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set_Current_m3526C84D707F7675ACD73E83C6B1B930881CF10F_inline (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXITGAME_set_MY_mC35AC2A3D2358E7A3CDFED9CCFD8BE8E87ED9146_inline (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXITGAME_set_THERE_m64C5CBFDC25E1BF8D3F8B7F05114D603A0E86093_inline (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXITGAME_set__world_mCA151536C4B47CC5DD09B0710AC895485FECB6FA_inline (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXITGAME_get__world_m377DD7BD4EF224D154473DC40CB056E1ABDBD443_inline (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXITGAME_set_Current_m2BE9F988A298E4CAB15D610531B91E6CE570C9C6_inline (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESETANSWER_set_MY_m3CF5D8CA33642338735DA3A839DA19532D382CFD_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESETANSWER_set_THERE_m03045DBFC2AB06E687C14666AEB83ACAED4D7660_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESETANSWER_set__world_m9C0C837D76E832479176BECBF8385105D7E38C5F_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RESETANSWER_get__world_mF799DC6155BEADC933B9559C6AD326E6CCA8D4F9_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RESETANSWER_get_MY_mA522E634FC9A607BF118F7704683FB9833B4BBBE_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RESETANSWER_get_THERE_mF4032FF2552FA2B6BE266A7F1B8C7FAEB5DF0EF2_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ASKFOREXIT_set_MY_m2A63FC5A387D9FBC2EB0A1B0DB2DB5F50797F010_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ASKFOREXIT_set_THERE_m4261B0FFEEE6437E575D185F11CBD7F54664AB29_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ASKFOREXIT_set__world_m12A9C0E2FB16483C27310D89073097AE499F85C0_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ASKFOREXIT_get_MY_m95ACA3F4FD0092A81AA8C34078D8CCD2BE9107B5_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ASKFOREXIT_get_THERE_mCF79AA89EB968931AFEEBC9664947FFE97C2593E_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDOFLEVEL_set_MY_mEA7689E7F5246E6B71B10D89E90AA5F11E8D4CB9_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDOFLEVEL_set_THERE_mADC9069F76DF25EBE1B03E7CB4A02F272FFD5C90_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDOFLEVEL_set__world_m22B431F389865B18D58B48ED0E7F8D67C06C2997_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15 (RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDOFLEVEL_get_MY_m12E825EE690DCA3907B10F6DBE1D004A5B565D37_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDOFLEVEL_get_THERE_m8B60CDFD95470C2C6BA4A460F893C469EB922A18_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDOFLEVEL_set_Current_m4CC0583F26B094287ADA5E60512375DF83DC8868_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSTART_set_MY_m0C0C4FD5EB3CDA58B36764C0FDE95B0C52B80B1F_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSTART_set_THERE_m744F2BA6111DA88171C00B5C787942CC72F6C0B2_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSTART_set__world_m24F2250A093C17BE32CD8D9F9ED8BE3A6EEE69B4_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSTART_get_MY_m2768FB807EB449405DB98121F0AD9C996F4ABAB8_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSTART_get__world_mE18F913F2A207ED83B4CC37B1A29DD982323C719_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHREGION__ctor_m0F7AECCE826CDDBE2B9C873B5123CF3EEE577CCF (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSTART_get_THERE_m33BB782EF7A64CF8AD39A2B1E59DE30CCD0B567E_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE_set_MY_m291420F8932BDF7FC7FC07C0BCA82F114F7B2067_inline (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE_set_THERE_m9F733AEBB9349B2A711CB100846A236828AD629F_inline (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE_set__world_m9A1FADCCC5558FCA3E89FD66D905DEDD7C17D81F_inline (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSMOKE_get__world_mA9374F58A6A106F84AF0CDF85D9C7D20D0C1C9CC_inline (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSMOKE_get_MY_mC538E97C93C95D2E42993FEE28FAF1C372D9BC4C_inline (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONEND_set_MY_m15A6EB7C5298C0306A50A6BD8169EEAC1C4A67F2_inline (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONEND_set_THERE_mE1EA0A58BFD6812F5E6E38C05DB0DFAF951EB5D6_inline (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONEND_set__world_mA2B7CC47933CDDAD574A0607577C1571AE2C6515_inline (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONEND_get_MY_m14801B9751E55813203AED53A990E3DBC6A64B1D_inline (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODETARGET_set_MY_m18625CFB1D3D11D7F22E82BBDE5A5A297B2AD340_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODETARGET_set_THERE_m972CA3D7666368A5C2A4EACE25D020A706A3FA0A_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODETARGET_set__world_mF51C11DDA7C1F576D27D6B1B17C305B3A6352590_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODETARGET_get__world_m4BDCE32CF9DE3ECC889FD48FC4C6CC6F10671E1B_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODEMISSILE__ctor_m8D3480E700813C5D23B32445C9F12E831418C2CD (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODETARGET_get_THERE_m63FA45BCC9DAA2DC34F5FA7C7432E1C9F89B40AE_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set_MY_mE5638C5A55A475F5E85B13C8A314B41643AD3F9E_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set_THERE_mD71A2141ADA22454FC04909DB9AC2AB7FE09B355_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set__world_mE29389DDF0E7729CAC53A6CF6A53E73ACAAA9F45_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODEMISSILE_get_THERE_mF81904D64263EFC0C4687825610AFAC5C3C7674D_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HITPLAYERDELAY__ctor_m0514506CB908F8A27C7CFF9BB10718987C144B25 (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set_Current_mC6F43E9C44C1BE2615CE60F8A4AF3DDE9FE7E2CB_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AIMMISSILE_set_MY_mA95083A7B27199CA96ABEAF3114E8418C3567A90_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AIMMISSILE_set_THERE_mE144A71013880F151220AD4C03D0C8DE1B9B3B43_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AIMMISSILE_set__world_mB14CB1DA5263E88824C047804822213A5D2FDF0B_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AIMMISSILE_get_MY_mD7C9AFE3FE7C983588C034750D85B509DD885381_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VANISHSTOP__ctor_m2608AFB1D24FBDA9CEF6CCE09CD2F1961E3AF94B (VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AIMMISSILE_get_THERE_m4F850BABA8D0E9A54BE935296D0D428560ADEA39_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONSTART_set_MY_m57EC2077F79106611238E31ED19E699EE720BAFC_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONSTART_set_THERE_mDE7487F72FF950D8BF92E9B5D07B93762DF4FB5B_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONSTART_set__world_mBB5EE6CDFC345580E2775716A71254364C49D78B_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONSTART_get_MY_mD17428D6D14CB24E337FD158D8C32A43AAED5928_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONSTART_get__world_mFB39315AD7C159F61B98FD481A3F4F34D7FE5A6A_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONSTART_get_THERE_mD2AFBEBB836F957875F2DA0F21ED466D790F3777_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH_set_MY_m714B8F47D880E6A474388F47DFE662251888DFD6_inline (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH_set_THERE_m8F2EF4061C48A3EDE3753EBD3E02E7834E560C6E_inline (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH_set__world_mA83B18E7E0D5F310A8DA4E22676ED17FE791E506_inline (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONCRUSH_get__world_m7B6AA6D60C06396CF92A614D46EF16D05112B3FB_inline (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONCRUSH_get_MY_m880A8C55013EC1D3AB95A56BC906EF9D491300C4_inline (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONFLARE_set_MY_m71729FCB4DD61056C8C6DE12F934990ADC8EBF9B_inline (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONFLARE_set_THERE_mA01FCE0E8C5A607D567CC3709F499B80F5E31159_inline (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONFLARE_set__world_m8669F37FC9901537CE7B930E6FAF595FFA35084C_inline (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONFLARE_get__world_m155D41820B2056D40970871E00E4806DE3ED3185_inline (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONFLARE_get_MY_m1FDA72856C155E7007A7F98D95B8F715CF9A6BE6_inline (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONEND_set_MY_m8D3372ACA4F27919095A3A91CD7042DB4DAFA76C_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONEND_set_THERE_mE04C4D7BD7426ED072A56933D4E2F714EBBB4F80_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONEND_set__world_mB7C60A963D01C93641F0F49132DA92E0C3498C72_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONEND_get_MY_mCDE9580BB4AFEA1DE0C145E9DADA4D44421835B5_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONEND_get__world_m1A89741933843046265F0C52756271A241774D57_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONEND_get_THERE_m50640595723D624F3B464ABCE73FE3284C68658A_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONEND_set_Current_mFE73FBB9B39CD413C274619604596CC08AA4208A_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set_MY_mCA7B1F3F8BEFC1FC12A46B50C1590AF463FAC731_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set_THERE_mC121BA7807BFE3421E3CB59F7130F3B1C42272B7_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set__world_m0C5295E5E35BBF4093D73B53974472870C9AC6EA_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLODEPARTICLE_get_THERE_mCA182BE8506C8BE3CEB1554164A4A0A43F751565_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set_Current_m28DD4FAA43AA65473DAB09754B3238725DF7678E_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAMREACT_set_MY_m763A8A1C93ADEEF32C78BF0C46620D64B0DD3FED_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAMREACT_set_THERE_m11C82C8CF69D6DC2B46B8F399E0CDF8484485E8E_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAMREACT_set__world_m1437C914B9A391726E153E4A61792ED9F1A77670_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEPARTICLE__ctor_m7ED1B9A37FC131618164D6259BA23BBC833BA65E (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAMREACT_get_MY_mECBC88F4BFB77211DD640C2895419E5CEF84985B_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAMREACT_get_THERE_m2A471DED10D9E8EC1E6ACD515F047449F5A940E3_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPARTICLE_set_MY_m2F8C10FE0917FE9BDE2156F2AEB20C12D87F7306_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPARTICLE_set_THERE_m306E15431DF9ECA642F0CBFD7F96A8923F441CA2_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPARTICLE_set__world_m08491EBBF20DC951F2346027C4C569E1E436BE75_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPARTICLE_get_THERE_m0C2533241534C5B24054FE74B0669B7299D19C1C_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_Sqrt_mC66300CAE9A1433A25EE41C5837D731B05AABD25 (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE_set_MY_mE8CEAA756757A55B9B478ED2AA09A82456DBF1EB_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE_set_THERE_mED24C9F8AFF89608FE8919D4C70A1EC005A00968_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE_set__world_m0CC1151C176DEB582490DADC0472968DEB9F7BF6_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPLAYERPARTICLE_get_MY_m2FAB34915D943AE5F28A2AB6D429F0C4BB3FB070_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLASHPLAYER__ctor_m03EDF2F6FD700301DD3211FC21701356026BA6A9 (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPLAYERPARTICLE_get_THERE_m2B9C7E72F3B79C521DA6124AF3248D9468A2EEB3_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE_set_MY_mD9BE48D2119858B9D2DE1EDC5E4FC887E990B544_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE_set_THERE_m12ABFBA6ACD9FFA90C383C07A196FEBE3F1E6630_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE_set__world_mBD0A229437F7D9971FD924C46DD75F19274466A3_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TIMEOUTPARTICLE_get_MY_mB522222CFFC6D324849D56BCD82BAE9A2960C5BC_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODEPARTICLE__ctor_m64AB1890C132CCEBB13F48C9419062F1A56327C4 (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TIMEOUTPARTICLE_get_THERE_mA66801E9F617C93290CB26527112819F1615B254_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TIMEOUTPARTICLE_get__world_m747B08282C0B673669AB2A08D0693B445A375B5F_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWSAVEMENU_get_MY_mDBA2D6017CB6D2EFA26018316C8C500CF2CD922E (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSAVEMENU_set_MY_m7173D12D13BC534C0658B5E595C30086B278B3D3 (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWSAVEMENU_get_THERE_m5630B5CDEB30539132A4BE6E22CF09E9EACBFF3A (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSAVEMENU_set_THERE_m46ADC615F4B6978E54B98670F62042B3EB804901 (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9 (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSAVEMENU_set__world_mC62EAD66DA5208341112763152FECCFDBBE9EE2C (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWSAVEMENU_get_Current_mDB9DD306BBF5D468F782F4AFAAEB958CF30C8646 (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSAVEMENU_set_Current_m070607F52D73C5D96B710BD6706AC64DBEC8EDF8 (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSAVEMENU_Reset_mD824447DEECFA922CD8A0D555F764E5E39516BF4 (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSAVEMENU__ctor_m730E61A258C5909A7AAD68B2816C3AF7FB34D4BF (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSAVEMENU__ctor_mA6273358DBCD0B3F63ED490B4918781A081893FE (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SHOWSAVEMENU_set_MY_m7173D12D13BC534C0658B5E595C30086B278B3D3_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SHOWSAVEMENU_set_THERE_m46ADC615F4B6978E54B98670F62042B3EB804901_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SHOWSAVEMENU_set__world_mC62EAD66DA5208341112763152FECCFDBBE9EE2C_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SHOWSAVEMENU_MoveNext_m79271D2EF1B40CD84AC037BD2DDD382BA5D91479 (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-2059579684), (bool)1, (bool)1);
		__this->___HIDEMENU_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIDEMENU_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = __this->___HIDEMENU_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)82), L_6);
		RuntimeObject* L_7;
		L_7 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)362));
		__this->___MOVE_MODE_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_MODE_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___MOVE_MODE_3;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (-0.5f));
		RuntimeObject* L_10;
		L_10 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_10, 5, ((int32_t)-1524669481));
		__this->___MAXMENUITEM_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAXMENUITEM_5), (void*)L_11);
		RuntimeObject* L_12 = __this->___MAXMENUITEM_5;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)231), (4.0f));
		RuntimeObject* L_13;
		L_13 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1182885903), (bool)1, (bool)1);
		__this->___SUBMENUUP_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUUP_6), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_16);
		RuntimeObject* L_18 = __this->___SUBMENUUP_6;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)105), L_18);
		RuntimeObject* L_19;
		L_19 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)325743364), (bool)1, (bool)1);
		__this->___SUBMENUDOWN_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUDOWN_8), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_22);
		RuntimeObject* L_24 = __this->___SUBMENUDOWN_8;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)106), L_24);
		RuntimeObject* L_25;
		L_25 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)-1182885903), (bool)1, (bool)1);
		__this->___SUBMENUUP_10 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUUP_10), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_28);
		RuntimeObject* L_30 = __this->___SUBMENUUP_10;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)107), L_30);
		RuntimeObject* L_31;
		L_31 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)325743364), (bool)1, (bool)1);
		__this->___SUBMENUDOWN_12 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUDOWN_12), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_34);
		RuntimeObject* L_36 = __this->___SUBMENUDOWN_12;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)108), L_36);
		RuntimeObject* L_37;
		L_37 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)371565519), (bool)1, (bool)1);
		__this->___BIP02SND_14 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP02SND_14), (void*)L_39);
		RuntimeObject* L_40;
		L_40 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		RuntimeObject* L_41 = __this->___BIP02SND_14;
		NullCheck(L_40);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_40, L_41, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_42;
		L_42 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_18 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_18), (void*)L_44);
		RuntimeObject* L_45 = __this->___LOADSAVETEXT_18;
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)295), (1.0f));
		RuntimeObject* L_46;
		L_46 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)462276091), (bool)1, (bool)1);
		__this->___SAVEDGAME01_19 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME01_19), (void*)L_48);
		RuntimeObject* L_49;
		L_49 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_49);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_21 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_21), (void*)L_51);
		RuntimeObject* L_52 = __this->___LOADSAVETEXT_21;
		NullCheck(L_52);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_53;
		L_53 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_52, ((int32_t)293), (bool)1);
		__this->___LOADSAVETEXT_21_array = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_21_array), (void*)L_53);
		RuntimeObject* L_54 = __this->___LOADSAVETEXT_21;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)295), (bool)1);
		__this->___LOADSAVETEXT_21_index = L_55;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_56 = __this->___LOADSAVETEXT_21_array;
		int32_t L_57 = __this->___LOADSAVETEXT_21_index;
		RuntimeObject* L_58 = __this->___SAVEDGAME01_19;
		NullCheck(L_56);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_56, ((int32_t)il2cpp_codegen_subtract(L_57, 1)), L_58, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_59 = __this->___LOADSAVETEXT_21;
		NullCheck(L_59);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, (bool)1);
		RuntimeObject* L_60;
		L_60 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_60);
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_24 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_24), (void*)L_62);
		RuntimeObject* L_63 = __this->___LOADSAVETEXT_24;
		NullCheck(L_63);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_63, ((int32_t)295), (2.0f));
		RuntimeObject* L_64;
		L_64 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_64);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)462276092), (bool)1, (bool)1);
		__this->___SAVEDGAME02_25 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME02_25), (void*)L_66);
		RuntimeObject* L_67;
		L_67 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_67);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_27 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_27), (void*)L_69);
		RuntimeObject* L_70 = __this->___LOADSAVETEXT_27;
		NullCheck(L_70);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_71;
		L_71 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_70, ((int32_t)293), (bool)1);
		__this->___LOADSAVETEXT_27_array = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_27_array), (void*)L_71);
		RuntimeObject* L_72 = __this->___LOADSAVETEXT_27;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)295), (bool)1);
		__this->___LOADSAVETEXT_27_index = L_73;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_74 = __this->___LOADSAVETEXT_27_array;
		int32_t L_75 = __this->___LOADSAVETEXT_27_index;
		RuntimeObject* L_76 = __this->___SAVEDGAME02_25;
		NullCheck(L_74);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_74, ((int32_t)il2cpp_codegen_subtract(L_75, 1)), L_76, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_77 = __this->___LOADSAVETEXT_27;
		NullCheck(L_77);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_77, (bool)1);
		RuntimeObject* L_78;
		L_78 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_78);
		RuntimeObject* L_79;
		L_79 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_78);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_79, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_30 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_30), (void*)L_80);
		RuntimeObject* L_81 = __this->___LOADSAVETEXT_30;
		NullCheck(L_81);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_81, ((int32_t)295), (3.0f));
		RuntimeObject* L_82;
		L_82 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_82);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)462276093), (bool)1, (bool)1);
		__this->___SAVEDGAME03_31 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME03_31), (void*)L_84);
		RuntimeObject* L_85;
		L_85 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_85);
		NullCheck(L_86);
		RuntimeObject* L_87;
		L_87 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_33 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_33), (void*)L_87);
		RuntimeObject* L_88 = __this->___LOADSAVETEXT_33;
		NullCheck(L_88);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_89;
		L_89 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_88, ((int32_t)293), (bool)1);
		__this->___LOADSAVETEXT_33_array = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_33_array), (void*)L_89);
		RuntimeObject* L_90 = __this->___LOADSAVETEXT_33;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_90, ((int32_t)295), (bool)1);
		__this->___LOADSAVETEXT_33_index = L_91;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_92 = __this->___LOADSAVETEXT_33_array;
		int32_t L_93 = __this->___LOADSAVETEXT_33_index;
		RuntimeObject* L_94 = __this->___SAVEDGAME03_31;
		NullCheck(L_92);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_92, ((int32_t)il2cpp_codegen_subtract(L_93, 1)), L_94, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_95 = __this->___LOADSAVETEXT_33;
		NullCheck(L_95);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_95, (bool)1);
		RuntimeObject* L_96;
		L_96 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_96);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_97, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_36 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_36), (void*)L_98);
		RuntimeObject* L_99 = __this->___LOADSAVETEXT_36;
		NullCheck(L_99);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)295), (4.0f));
		RuntimeObject* L_100;
		L_100 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_100);
		NullCheck(L_101);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_101, ((int32_t)462276094), (bool)1, (bool)1);
		__this->___SAVEDGAME04_37 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME04_37), (void*)L_102);
		RuntimeObject* L_103;
		L_103 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_103);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_104, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_39 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_39), (void*)L_105);
		RuntimeObject* L_106 = __this->___LOADSAVETEXT_39;
		NullCheck(L_106);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_107;
		L_107 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_106, ((int32_t)293), (bool)1);
		__this->___LOADSAVETEXT_39_array = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_39_array), (void*)L_107);
		RuntimeObject* L_108 = __this->___LOADSAVETEXT_39;
		NullCheck(L_108);
		int32_t L_109;
		L_109 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_108, ((int32_t)295), (bool)1);
		__this->___LOADSAVETEXT_39_index = L_109;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_110 = __this->___LOADSAVETEXT_39_array;
		int32_t L_111 = __this->___LOADSAVETEXT_39_index;
		RuntimeObject* L_112 = __this->___SAVEDGAME04_37;
		NullCheck(L_110);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_110, ((int32_t)il2cpp_codegen_subtract(L_111, 1)), L_112, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_113 = __this->___LOADSAVETEXT_39;
		NullCheck(L_113);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_113, (bool)1);
		RuntimeObject* L_114;
		L_114 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_114);
		RuntimeObject* L_115;
		L_115 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_114);
		NullCheck(L_115);
		RuntimeObject* L_116;
		L_116 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_115, ((int32_t)-2081316471), (bool)1, (bool)1);
		__this->___TYPEGAME_40 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TYPEGAME_40), (void*)L_116);
		RuntimeObject* L_117;
		L_117 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_117);
		RuntimeObject* L_118;
		L_118 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_117);
		RuntimeObject* L_119 = __this->___TYPEGAME_40;
		NullCheck(L_118);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_118, ((int32_t)81), L_119);
		RuntimeObject* L_120;
		L_120 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_120);
		RuntimeObject* L_121;
		L_121 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_120);
		NullCheck(L_121);
		RuntimeObject* L_122;
		L_122 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_121, ((int32_t)-2121684964), (bool)1, (bool)1);
		__this->___SUBMENUPANEL_42 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUPANEL_42), (void*)L_122);
		RuntimeObject* L_123;
		L_123 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_123);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_123);
		RuntimeObject* L_125 = __this->___SUBMENUPANEL_42;
		NullCheck(L_124);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_124, ((int32_t)145), L_125);
		RuntimeObject* L_126;
		L_126 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_126);
		RuntimeObject* L_127;
		L_127 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_126);
		NullCheck(L_127);
		RuntimeObject* L_128;
		L_128 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_127, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_45 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_45), (void*)L_128);
		RuntimeObject* L_129;
		L_129 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_129);
		RuntimeObject* L_130;
		L_130 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_129);
		RuntimeObject* L_131 = __this->___LOADSAVETEXT_45;
		NullCheck(L_130);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_130, ((int32_t)129), L_131);
		RuntimeObject* L_132;
		L_132 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_132);
		RuntimeObject* L_133;
		L_133 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_132);
		NullCheck(L_133);
		RuntimeObject* L_134;
		L_134 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)-2036413493), (bool)1, (bool)1);
		__this->___HLP01STR_48 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HLP01STR_48), (void*)L_134);
		RuntimeObject* L_135;
		L_135 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		RuntimeObject* L_136 = __this->___HLP01STR_48;
		NullCheck(L_135);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_135, ((int32_t)361798934), L_136);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_137 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_137, NULL);
		V_0 = L_137;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_138 = V_0;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_139 = L_138;
		RuntimeObject* L_140;
		L_140 = SHOWSAVEMENU_get_MY_mDBA2D6017CB6D2EFA26018316C8C500CF2CD922E_inline(__this, NULL);
		NullCheck(L_139);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_139, L_140);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_141 = L_139;
		RuntimeObject* L_142;
		L_142 = SHOWSAVEMENU_get_THERE_m5630B5CDEB30539132A4BE6E22CF09E9EACBFF3A_inline(__this, NULL);
		NullCheck(L_141);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_141, L_142);
		RuntimeObject* L_143;
		L_143 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		NullCheck(L_141);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_141, L_143);
		RuntimeObject* L_144;
		L_144 = SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_145 = V_0;
		NullCheck(L_144);
		RuntimeObject* L_146;
		L_146 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_144, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_145);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWLOADMENU_get_MY_m8519010AEDC2A494998B553CFF1AE8BFC3BBD32D (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWLOADMENU_set_MY_m5967B56FE6155B2B0E8227CDE01EFA1E5CF52A9E (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWLOADMENU_get_THERE_mF44729B4EDD642DB902108B5C48A0EEB553928FF (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWLOADMENU_set_THERE_mB2639C05646DA4023BFAE9F18C7D27CA3AD83DC3 (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWLOADMENU_set__world_m43823B5308C410F16409F6915A8DD1EC5EB12BFB (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWLOADMENU_get_Current_mDA085788472689B3D7208BA96A2BFEED428D41C0 (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWLOADMENU_set_Current_mC76C53FD1243A6A0002BF01A51E8AB4B6CE507E4 (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWLOADMENU_Reset_m333C79852AC6DC3C44DE9A7FD97ED7AA63D16F3A (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWLOADMENU__ctor_m0DA6BF91E4E8E1C6392C30322F84512D7059DE21 (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWLOADMENU__ctor_m587F3F45C51AD4ECE9EAEFF6ECBF4A185C54F8AF (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SHOWLOADMENU_set_MY_m5967B56FE6155B2B0E8227CDE01EFA1E5CF52A9E_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SHOWLOADMENU_set_THERE_mB2639C05646DA4023BFAE9F18C7D27CA3AD83DC3_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SHOWLOADMENU_set__world_m43823B5308C410F16409F6915A8DD1EC5EB12BFB_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SHOWLOADMENU_MoveNext_mC95F8AD5C097B805855B1252676F73C9A460A547 (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-2059579684), (bool)1, (bool)1);
		__this->___HIDEMENU_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIDEMENU_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = __this->___HIDEMENU_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)82), L_6);
		RuntimeObject* L_7;
		L_7 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)362));
		__this->___MOVE_MODE_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_MODE_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___MOVE_MODE_3;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (-0.5f));
		RuntimeObject* L_10;
		L_10 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_10, 5, ((int32_t)-1524669481));
		__this->___MAXMENUITEM_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAXMENUITEM_5), (void*)L_11);
		RuntimeObject* L_12 = __this->___MAXMENUITEM_5;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)231), (4.0f));
		RuntimeObject* L_13;
		L_13 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1182885903), (bool)1, (bool)1);
		__this->___SUBMENUUP_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUUP_6), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_16);
		RuntimeObject* L_18 = __this->___SUBMENUUP_6;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)105), L_18);
		RuntimeObject* L_19;
		L_19 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)325743364), (bool)1, (bool)1);
		__this->___SUBMENUDOWN_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUDOWN_8), (void*)L_21);
		RuntimeObject* L_22;
		L_22 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_22);
		RuntimeObject* L_24 = __this->___SUBMENUDOWN_8;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)106), L_24);
		RuntimeObject* L_25;
		L_25 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)-1182885903), (bool)1, (bool)1);
		__this->___SUBMENUUP_10 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUUP_10), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_28);
		RuntimeObject* L_30 = __this->___SUBMENUUP_10;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)107), L_30);
		RuntimeObject* L_31;
		L_31 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)325743364), (bool)1, (bool)1);
		__this->___SUBMENUDOWN_12 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUDOWN_12), (void*)L_33);
		RuntimeObject* L_34;
		L_34 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_34);
		RuntimeObject* L_36 = __this->___SUBMENUDOWN_12;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)108), L_36);
		RuntimeObject* L_37;
		L_37 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)371565519), (bool)1, (bool)1);
		__this->___BIP02SND_14 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP02SND_14), (void*)L_39);
		RuntimeObject* L_40;
		L_40 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		RuntimeObject* L_41 = __this->___BIP02SND_14;
		NullCheck(L_40);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_40, L_41, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_42;
		L_42 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_18 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_18), (void*)L_44);
		RuntimeObject* L_45 = __this->___LOADSAVETEXT_18;
		NullCheck(L_45);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)295), (1.0f));
		RuntimeObject* L_46;
		L_46 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)462276091), (bool)1, (bool)1);
		__this->___SAVEDGAME01_19 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME01_19), (void*)L_48);
		RuntimeObject* L_49;
		L_49 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_49);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_50, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_21 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_21), (void*)L_51);
		RuntimeObject* L_52 = __this->___LOADSAVETEXT_21;
		NullCheck(L_52);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_53;
		L_53 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_52, ((int32_t)293), (bool)1);
		__this->___LOADSAVETEXT_21_array = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_21_array), (void*)L_53);
		RuntimeObject* L_54 = __this->___LOADSAVETEXT_21;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)295), (bool)1);
		__this->___LOADSAVETEXT_21_index = L_55;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_56 = __this->___LOADSAVETEXT_21_array;
		int32_t L_57 = __this->___LOADSAVETEXT_21_index;
		RuntimeObject* L_58 = __this->___SAVEDGAME01_19;
		NullCheck(L_56);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_56, ((int32_t)il2cpp_codegen_subtract(L_57, 1)), L_58, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_59 = __this->___LOADSAVETEXT_21;
		NullCheck(L_59);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, (bool)1);
		RuntimeObject* L_60;
		L_60 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_60);
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_24 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_24), (void*)L_62);
		RuntimeObject* L_63 = __this->___LOADSAVETEXT_24;
		NullCheck(L_63);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_63, ((int32_t)295), (2.0f));
		RuntimeObject* L_64;
		L_64 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_64);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)462276092), (bool)1, (bool)1);
		__this->___SAVEDGAME02_25 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME02_25), (void*)L_66);
		RuntimeObject* L_67;
		L_67 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_67);
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_27 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_27), (void*)L_69);
		RuntimeObject* L_70 = __this->___LOADSAVETEXT_27;
		NullCheck(L_70);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_71;
		L_71 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_70, ((int32_t)293), (bool)1);
		__this->___LOADSAVETEXT_27_array = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_27_array), (void*)L_71);
		RuntimeObject* L_72 = __this->___LOADSAVETEXT_27;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)295), (bool)1);
		__this->___LOADSAVETEXT_27_index = L_73;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_74 = __this->___LOADSAVETEXT_27_array;
		int32_t L_75 = __this->___LOADSAVETEXT_27_index;
		RuntimeObject* L_76 = __this->___SAVEDGAME02_25;
		NullCheck(L_74);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_74, ((int32_t)il2cpp_codegen_subtract(L_75, 1)), L_76, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_77 = __this->___LOADSAVETEXT_27;
		NullCheck(L_77);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_77, (bool)1);
		RuntimeObject* L_78;
		L_78 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_78);
		RuntimeObject* L_79;
		L_79 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_78);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_79, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_30 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_30), (void*)L_80);
		RuntimeObject* L_81 = __this->___LOADSAVETEXT_30;
		NullCheck(L_81);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_81, ((int32_t)295), (3.0f));
		RuntimeObject* L_82;
		L_82 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_82);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_83, ((int32_t)462276093), (bool)1, (bool)1);
		__this->___SAVEDGAME03_31 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME03_31), (void*)L_84);
		RuntimeObject* L_85;
		L_85 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_85);
		NullCheck(L_86);
		RuntimeObject* L_87;
		L_87 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_33 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_33), (void*)L_87);
		RuntimeObject* L_88 = __this->___LOADSAVETEXT_33;
		NullCheck(L_88);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_89;
		L_89 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_88, ((int32_t)293), (bool)1);
		__this->___LOADSAVETEXT_33_array = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_33_array), (void*)L_89);
		RuntimeObject* L_90 = __this->___LOADSAVETEXT_33;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_90, ((int32_t)295), (bool)1);
		__this->___LOADSAVETEXT_33_index = L_91;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_92 = __this->___LOADSAVETEXT_33_array;
		int32_t L_93 = __this->___LOADSAVETEXT_33_index;
		RuntimeObject* L_94 = __this->___SAVEDGAME03_31;
		NullCheck(L_92);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_92, ((int32_t)il2cpp_codegen_subtract(L_93, 1)), L_94, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_95 = __this->___LOADSAVETEXT_33;
		NullCheck(L_95);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_95, (bool)1);
		RuntimeObject* L_96;
		L_96 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_96);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_97, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_36 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_36), (void*)L_98);
		RuntimeObject* L_99 = __this->___LOADSAVETEXT_36;
		NullCheck(L_99);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_99, ((int32_t)295), (4.0f));
		RuntimeObject* L_100;
		L_100 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_100);
		NullCheck(L_101);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_101, ((int32_t)462276094), (bool)1, (bool)1);
		__this->___SAVEDGAME04_37 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME04_37), (void*)L_102);
		RuntimeObject* L_103;
		L_103 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_103);
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_104, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_39 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_39), (void*)L_105);
		RuntimeObject* L_106 = __this->___LOADSAVETEXT_39;
		NullCheck(L_106);
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_107;
		L_107 = GenericInterfaceFuncInvoker2< List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE*, uint32_t, bool >::Invoke(IAcknexObject_GetObject_TisList_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE_m4D1E2EADCECE842C70FDAE4073AAD5CF001EFC15_RuntimeMethod_var, L_106, ((int32_t)293), (bool)1);
		__this->___LOADSAVETEXT_39_array = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_39_array), (void*)L_107);
		RuntimeObject* L_108 = __this->___LOADSAVETEXT_39;
		NullCheck(L_108);
		int32_t L_109;
		L_109 = InterfaceFuncInvoker2< int32_t, int32_t, bool >::Invoke(30, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_108, ((int32_t)295), (bool)1);
		__this->___LOADSAVETEXT_39_index = L_109;
		List_1_t87AE9CB5ECA429217FDC0FBB519184F2644896AE* L_110 = __this->___LOADSAVETEXT_39_array;
		int32_t L_111 = __this->___LOADSAVETEXT_39_index;
		RuntimeObject* L_112 = __this->___SAVEDGAME04_37;
		NullCheck(L_110);
		List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213(L_110, ((int32_t)il2cpp_codegen_subtract(L_111, 1)), L_112, List_1_set_Item_m87FED0368136046156EA94A98B9ECE1B7D741213_RuntimeMethod_var);
		RuntimeObject* L_113 = __this->___LOADSAVETEXT_39;
		NullCheck(L_113);
		InterfaceActionInvoker1< bool >::Invoke(18, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_113, (bool)1);
		RuntimeObject* L_114;
		L_114 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_114);
		RuntimeObject* L_115;
		L_115 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_114);
		NullCheck(L_115);
		RuntimeObject* L_116;
		L_116 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_115, ((int32_t)2006969512), (bool)1, (bool)1);
		__this->___CHOOSEGAME_40 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CHOOSEGAME_40), (void*)L_116);
		RuntimeObject* L_117;
		L_117 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_117);
		RuntimeObject* L_118;
		L_118 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_117);
		RuntimeObject* L_119 = __this->___CHOOSEGAME_40;
		NullCheck(L_118);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_118, ((int32_t)81), L_119);
		RuntimeObject* L_120;
		L_120 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_120);
		RuntimeObject* L_121;
		L_121 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_120);
		NullCheck(L_121);
		RuntimeObject* L_122;
		L_122 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_121, ((int32_t)-2121684964), (bool)1, (bool)1);
		__this->___SUBMENUPANEL_42 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUPANEL_42), (void*)L_122);
		RuntimeObject* L_123;
		L_123 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_123);
		RuntimeObject* L_124;
		L_124 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_123);
		RuntimeObject* L_125 = __this->___SUBMENUPANEL_42;
		NullCheck(L_124);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_124, ((int32_t)145), L_125);
		RuntimeObject* L_126;
		L_126 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_126);
		RuntimeObject* L_127;
		L_127 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_126);
		NullCheck(L_127);
		RuntimeObject* L_128;
		L_128 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_127, ((int32_t)-221756991), (bool)1, (bool)1);
		__this->___LOADSAVETEXT_45 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOADSAVETEXT_45), (void*)L_128);
		RuntimeObject* L_129;
		L_129 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_129);
		RuntimeObject* L_130;
		L_130 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_129);
		RuntimeObject* L_131 = __this->___LOADSAVETEXT_45;
		NullCheck(L_130);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_130, ((int32_t)129), L_131);
		RuntimeObject* L_132;
		L_132 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_132);
		RuntimeObject* L_133;
		L_133 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_132);
		NullCheck(L_133);
		RuntimeObject* L_134;
		L_134 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)-2036413493), (bool)1, (bool)1);
		__this->___HLP01STR_48 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HLP01STR_48), (void*)L_134);
		RuntimeObject* L_135;
		L_135 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		RuntimeObject* L_136 = __this->___HLP01STR_48;
		NullCheck(L_135);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_135, ((int32_t)361798934), L_136);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_137 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_137, NULL);
		V_0 = L_137;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_138 = V_0;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_139 = L_138;
		RuntimeObject* L_140;
		L_140 = SHOWLOADMENU_get_MY_m8519010AEDC2A494998B553CFF1AE8BFC3BBD32D_inline(__this, NULL);
		NullCheck(L_139);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_139, L_140);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_141 = L_139;
		RuntimeObject* L_142;
		L_142 = SHOWLOADMENU_get_THERE_mF44729B4EDD642DB902108B5C48A0EEB553928FF_inline(__this, NULL);
		NullCheck(L_141);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_141, L_142);
		RuntimeObject* L_143;
		L_143 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		NullCheck(L_141);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_141, L_143);
		RuntimeObject* L_144;
		L_144 = SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_145 = V_0;
		NullCheck(L_144);
		RuntimeObject* L_146;
		L_146 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_144, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_145);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWSOUNDVOLUMEMENU_get_MY_m4B19CF921FE0C61B3A34E3EEFD935321CCC17287 (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU_set_MY_mDBDEF688FAA4DAE07CB88C395F17F92D471459CB (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWSOUNDVOLUMEMENU_get_THERE_mC6776904B2172F2FB5258658CF48F8DCBA1DDC65 (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU_set_THERE_m4E6048A9A518632C4C033B612D66FF73084EA505 (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943 (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU_set__world_m74D96618BFC9397B056BF33B0BC25F4102F37428 (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWSOUNDVOLUMEMENU_get_Current_m983ACD937D85A5B965CC82B5F514EF724D62A585 (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU_set_Current_m0D0B3CF8226C8CE8A38F1FB2BB7F666285B8FD3D (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU_Reset_m7BEF4B97D823BFCCCBD9FEB5EEB45E1CECF4F71E (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU__ctor_m8AD2233DAB721CBE9E8A160AE5359BD11B42F982 (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU__ctor_m71E01763B48118739C2768A0426342FB8F26E76D (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SHOWSOUNDVOLUMEMENU_set_MY_mDBDEF688FAA4DAE07CB88C395F17F92D471459CB_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SHOWSOUNDVOLUMEMENU_set_THERE_m4E6048A9A518632C4C033B612D66FF73084EA505_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SHOWSOUNDVOLUMEMENU_set__world_m74D96618BFC9397B056BF33B0BC25F4102F37428_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SHOWSOUNDVOLUMEMENU_MoveNext_m78E3329C091B41DC558A712F426876EC4AE17332 (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) 
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
		L_1 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)371565519), (bool)1, (bool)1);
		__this->___BIP02SND_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP02SND_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		RuntimeObject* L_5 = __this->___BIP02SND_0;
		NullCheck(L_4);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, L_5, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_6;
		L_6 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)-2059579684), (bool)1, (bool)1);
		__this->___HIDEMENU_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIDEMENU_2), (void*)L_8);
		RuntimeObject* L_9;
		L_9 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_11 = __this->___HIDEMENU_2;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)82), L_11);
		RuntimeObject* L_12;
		L_12 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)362));
		__this->___MOVE_MODE_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_MODE_5), (void*)L_13);
		RuntimeObject* L_14 = __this->___MOVE_MODE_5;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (-0.5f));
		RuntimeObject* L_15;
		L_15 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)-1524669481));
		__this->___MAXMENUITEM_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAXMENUITEM_7), (void*)L_16);
		RuntimeObject* L_17 = __this->___MAXMENUITEM_7;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (3.0f));
		RuntimeObject* L_18;
		L_18 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)-1182885903), (bool)1, (bool)1);
		__this->___SUBMENUUP_8 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUUP_8), (void*)L_20);
		RuntimeObject* L_21;
		L_21 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_21);
		RuntimeObject* L_23 = __this->___SUBMENUUP_8;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)105), L_23);
		RuntimeObject* L_24;
		L_24 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)325743364), (bool)1, (bool)1);
		__this->___SUBMENUDOWN_10 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUDOWN_10), (void*)L_26);
		RuntimeObject* L_27;
		L_27 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_27);
		RuntimeObject* L_29 = __this->___SUBMENUDOWN_10;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_28, ((int32_t)106), L_29);
		RuntimeObject* L_30;
		L_30 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)1384066474), (bool)1, (bool)1);
		__this->___VOLUMEUP_12 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VOLUMEUP_12), (void*)L_32);
		RuntimeObject* L_33;
		L_33 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		RuntimeObject* L_35 = __this->___VOLUMEUP_12;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)107), L_35);
		RuntimeObject* L_36;
		L_36 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_36);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)-286827779), (bool)1, (bool)1);
		__this->___VOLUMEDOWN_14 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VOLUMEDOWN_14), (void*)L_38);
		RuntimeObject* L_39;
		L_39 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_39);
		RuntimeObject* L_41 = __this->___VOLUMEDOWN_14;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)108), L_41);
		RuntimeObject* L_42;
		L_42 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)-2059579684), (bool)1, (bool)1);
		__this->___HIDEMENU_16 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIDEMENU_16), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_45);
		RuntimeObject* L_47 = __this->___HIDEMENU_16;
		NullCheck(L_46);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)81), L_47);
		RuntimeObject* L_48;
		L_48 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)-751287714), (bool)1, (bool)1);
		__this->___SOUNDVOLUMEPANEL_18 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUNDVOLUMEPANEL_18), (void*)L_50);
		RuntimeObject* L_51;
		L_51 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_51);
		RuntimeObject* L_53 = __this->___SOUNDVOLUMEPANEL_18;
		NullCheck(L_52);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)145), L_53);
		RuntimeObject* L_54;
		L_54 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)1018587315), (bool)1, (bool)1);
		__this->___SOUNDVOLUMETEXT_21 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUNDVOLUMETEXT_21), (void*)L_56);
		RuntimeObject* L_57;
		L_57 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_57);
		RuntimeObject* L_59 = __this->___SOUNDVOLUMETEXT_21;
		NullCheck(L_58);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_58, ((int32_t)129), L_59);
		RuntimeObject* L_60;
		L_60 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_60);
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)-2036413493), (bool)1, (bool)1);
		__this->___HLP01STR_24 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HLP01STR_24), (void*)L_62);
		RuntimeObject* L_63;
		L_63 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		RuntimeObject* L_64 = __this->___HLP01STR_24;
		NullCheck(L_63);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, ((int32_t)361798934), L_64);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_65 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_65, NULL);
		V_0 = L_65;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_66 = V_0;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_67 = L_66;
		RuntimeObject* L_68;
		L_68 = SHOWSOUNDVOLUMEMENU_get_MY_m4B19CF921FE0C61B3A34E3EEFD935321CCC17287_inline(__this, NULL);
		NullCheck(L_67);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_67, L_68);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_69 = L_67;
		RuntimeObject* L_70;
		L_70 = SHOWSOUNDVOLUMEMENU_get_THERE_mC6776904B2172F2FB5258658CF48F8DCBA1DDC65_inline(__this, NULL);
		NullCheck(L_69);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_69, L_70);
		RuntimeObject* L_71;
		L_71 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		NullCheck(L_69);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_69, L_71);
		RuntimeObject* L_72;
		L_72 = SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_73 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HIDEMENU_get_MY_mA809949EB726C158A559D63C0E42CD1D18B24F9C (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEMENU_set_MY_m6CA6A0E3BC085AFD01D7BAB34CCC762C99BCEB25 (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HIDEMENU_get_THERE_m140C5A91B7004628B5F8B7D7CA03647EAFDD6907 (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEMENU_set_THERE_m4D9F2CA17FC2801EDAD960FF359E9C38F1DF0957 (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEMENU_set__world_mDD69EFB1C840354FF635781EC16A29FD5D9164C8 (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HIDEMENU_get_Current_m14B0783E1FE59660684FE4F42A4ECA4D0298160F (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEMENU_set_Current_m2762445BDC9B53037B40DC45C4651C6102DE1AEA (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEMENU_Reset_m02E0120EC41EF280282DBE8C7DA7A9BDBFD51163 (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEMENU__ctor_mDD24C5A9C8F592A3C7E4CAF984260858CDF76851 (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEMENU__ctor_m20372A165E4219F732E7CA73CD9C923B0AED9FBB (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		HIDEMENU_set_MY_m6CA6A0E3BC085AFD01D7BAB34CCC762C99BCEB25_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		HIDEMENU_set_THERE_m4D9F2CA17FC2801EDAD960FF359E9C38F1DF0957_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		HIDEMENU_set__world_mDD69EFB1C840354FF635781EC16A29FD5D9164C8_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HIDEMENU_MoveNext_m9F2D0933F562880A582622E53802F152DED7CF6E (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* V_0 = NULL;
	SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)145), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)129), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)-629660504), (bool)1, (bool)1);
		__this->___SHOWMAINMENU_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOWMAINMENU_6), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_8);
		RuntimeObject* L_10 = __this->___SHOWMAINMENU_6;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)82), L_10);
		RuntimeObject* L_11;
		L_11 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)105), (RuntimeObject*)NULL);
		RuntimeObject* L_13;
		L_13 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)106), (RuntimeObject*)NULL);
		RuntimeObject* L_15;
		L_15 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)107), (RuntimeObject*)NULL);
		RuntimeObject* L_17;
		L_17 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)108), (RuntimeObject*)NULL);
		RuntimeObject* L_19;
		L_19 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)1369167822));
		__this->___UNDERWATER_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UNDERWATER_17), (void*)L_20);
		RuntimeObject* L_21 = __this->___UNDERWATER_17;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), (bool)1);
		__this->___UNDERWATER_17_val = L_22;
		float L_23 = __this->___UNDERWATER_17_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_23, (0.0f), NULL);
		if (L_24)
		{
			goto IL_012e;
		}
	}
	{
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_25 = (SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A*)il2cpp_codegen_object_new(SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A_il2cpp_TypeInfo_var);
		SET_BLUE__ctor_m398E7AA8C854CA036D788D740731EC3AA3B5C19F(L_25, NULL);
		V_0 = L_25;
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_26 = V_0;
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_27 = L_26;
		RuntimeObject* L_28;
		L_28 = HIDEMENU_get_MY_mA809949EB726C158A559D63C0E42CD1D18B24F9C_inline(__this, NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_27, L_28);
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_29 = L_27;
		RuntimeObject* L_30;
		L_30 = HIDEMENU_get_THERE_m140C5A91B7004628B5F8B7D7CA03647EAFDD6907_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_30);
		RuntimeObject* L_31;
		L_31 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_29, L_31);
		RuntimeObject* L_32;
		L_32 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		SET_BLUE_t29F179A8099821B5135C6B9841E0A3E76B2C899A* L_33 = V_0;
		NullCheck(L_32);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_33);
		goto IL_0161;
	}

IL_012e:
	{
		RuntimeObject* L_35;
		L_35 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)215228298), (bool)1, (bool)1);
		__this->___BLACK_18 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLACK_18), (void*)L_37);
		RuntimeObject* L_38;
		L_38 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		RuntimeObject* L_39 = __this->___BLACK_18;
		NullCheck(L_38);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, L_39, (0.0f));
	}

IL_0161:
	{
		SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* L_40 = (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD*)il2cpp_codegen_object_new(SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD_il2cpp_TypeInfo_var);
		SHOWWEAPON__ctor_m10112909615282BE73D82296C8A4E36231C295CD(L_40, NULL);
		V_1 = L_40;
		SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* L_41 = V_1;
		SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* L_42 = L_41;
		RuntimeObject* L_43;
		L_43 = HIDEMENU_get_MY_mA809949EB726C158A559D63C0E42CD1D18B24F9C_inline(__this, NULL);
		NullCheck(L_42);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_42, L_43);
		SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* L_44 = L_42;
		RuntimeObject* L_45;
		L_45 = HIDEMENU_get_THERE_m140C5A91B7004628B5F8B7D7CA03647EAFDD6907_inline(__this, NULL);
		NullCheck(L_44);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_44, L_45);
		RuntimeObject* L_46;
		L_46 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_44);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_44, L_46);
		RuntimeObject* L_47;
		L_47 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* L_48 = V_1;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_48);
		RuntimeObject* L_50;
		L_50 = HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_50, 5, ((int32_t)362));
		__this->___MOVE_MODE_21 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_MODE_21), (void*)L_51);
		RuntimeObject* L_52 = __this->___MOVE_MODE_21;
		NullCheck(L_52);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)231), (1.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MENUUP_get_MY_m1131C898009166FEB8425F17A1A92CC7FD45D851 (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUUP_set_MY_mDCFE5C508EE9ADC08BB1B5049AA224F3C5959E0F (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MENUUP_get_THERE_mF5D5F73564FE0029CC0A8052A9D7895B61475211 (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUUP_set_THERE_mECDC89DE95A2983E21AC34255320C6B65BFA1CE9 (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MENUUP_get__world_mE7AEB40C28530C4DF214F2B1B3151DD3A12FBC9A (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUUP_set__world_m0A8A6D82D86F87881F10BC3B4F5ED600589D7A89 (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MENUUP_get_Current_m11A00177C5FDDD60AAA3573145A5A27011B314D8 (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUUP_set_Current_m1B1A0856D711F912623DDC64BBF4A5B4B9F17856 (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUUP_Reset_m5A37831B078D69FD2814EF7F5A4A19F9F9B88A87 (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUUP__ctor_m43B17E6D71A2F6D3A391B873DC8C1DA3E99A8745 (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUUP__ctor_mFFE32EF02A50DAB6E88327FB4F8EEE609DEB9539 (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		MENUUP_set_MY_mDCFE5C508EE9ADC08BB1B5049AA224F3C5959E0F_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		MENUUP_set_THERE_mECDC89DE95A2983E21AC34255320C6B65BFA1CE9_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		MENUUP_set__world_m0A8A6D82D86F87881F10BC3B4F5ED600589D7A89_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MENUUP_MoveNext_mB5577AB4A1DB3E5B081FD5A6F2B6BC9534797DB7 (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, const RuntimeMethod* method) 
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
		L_1 = MENUUP_get__world_mE7AEB40C28530C4DF214F2B1B3151DD3A12FBC9A_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)118534065));
		__this->___MENUITEM_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___MENUITEM_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___MENUITEM_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = MENUUP_get__world_mE7AEB40C28530C4DF214F2B1B3151DD3A12FBC9A_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)118534065));
		__this->___MENUITEM_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___MENUITEM_2;
		float L_8 = __this->___MENUITEM_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (-1.0f))));
		RuntimeObject* L_9;
		L_9 = MENUUP_get__world_mE7AEB40C28530C4DF214F2B1B3151DD3A12FBC9A_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)118534065));
		__this->___MENUITEM_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_4), (void*)L_10);
		RuntimeObject* L_11 = __this->___MENUITEM_4;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___MENUITEM_4_val = L_12;
		float L_13 = __this->___MENUITEM_4_val;
		bool L_14;
		L_14 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_13, (1.0f), NULL);
		if (!L_14)
		{
			goto IL_0103;
		}
	}
	{
		RuntimeObject* L_15;
		L_15 = MENUUP_get__world_mE7AEB40C28530C4DF214F2B1B3151DD3A12FBC9A_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)-1524669481));
		__this->___MAXMENUITEM_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAXMENUITEM_5), (void*)L_16);
		RuntimeObject* L_17 = __this->___MAXMENUITEM_5;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (bool)1);
		__this->___MAXMENUITEM_5_val = L_18;
		RuntimeObject* L_19;
		L_19 = MENUUP_get__world_mE7AEB40C28530C4DF214F2B1B3151DD3A12FBC9A_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)118534065));
		__this->___MENUITEM_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_6), (void*)L_20);
		RuntimeObject* L_21 = __this->___MENUITEM_6;
		float L_22 = __this->___MAXMENUITEM_5_val;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), L_22);
	}

IL_0103:
	{
		RuntimeObject* L_23;
		L_23 = MENUUP_get__world_mE7AEB40C28530C4DF214F2B1B3151DD3A12FBC9A_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)371529582), (bool)1, (bool)1);
		__this->___BIP01SND_7 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP01SND_7), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = MENUUP_get__world_mE7AEB40C28530C4DF214F2B1B3151DD3A12FBC9A_inline(__this, NULL);
		RuntimeObject* L_27 = __this->___BIP01SND_7;
		NullCheck(L_26);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_26, L_27, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MENUDOWN_get_MY_mA30B6C91143A358D471E885EDC9C0585F4C10D68 (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUDOWN_set_MY_m4644C5F6942820CB294F56EF042BC803709A07C4 (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MENUDOWN_get_THERE_mC96FBD659B2703E0EBA7DB5299FE1F80BC6DDC87 (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUDOWN_set_THERE_mFAB776E31CBECC0A705B46219963F21209A5ADEC (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MENUDOWN_get__world_m19F1C88DBBB471B7AE25BF745400329CA0B3DE70 (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUDOWN_set__world_mE9E66138A56C21DB1A5BDBAA442554E6D88FD95A (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MENUDOWN_get_Current_m01A77DDF3F6BAC572110BEEA306BE2D3D2B1B12E (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUDOWN_set_Current_mD8B81D4C489FEF6A35FFB992D003D55D20EB406D (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUDOWN_Reset_m15996D3707A5383B6B5DD769B81FD06F42AFA34C (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUDOWN__ctor_m8310F54E08F6B53555109BB3EF14C08AE81A9F73 (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MENUDOWN__ctor_m308E4E3710837428293292E4E01D7565C70209D3 (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		MENUDOWN_set_MY_m4644C5F6942820CB294F56EF042BC803709A07C4_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		MENUDOWN_set_THERE_mFAB776E31CBECC0A705B46219963F21209A5ADEC_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		MENUDOWN_set__world_mE9E66138A56C21DB1A5BDBAA442554E6D88FD95A_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MENUDOWN_MoveNext_m870D8992A99A2617851CE39F2F548C9F9B9D655E (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, const RuntimeMethod* method) 
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
		L_1 = MENUDOWN_get__world_m19F1C88DBBB471B7AE25BF745400329CA0B3DE70_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)118534065));
		__this->___MENUITEM_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___MENUITEM_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___MENUITEM_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = MENUDOWN_get__world_m19F1C88DBBB471B7AE25BF745400329CA0B3DE70_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)118534065));
		__this->___MENUITEM_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___MENUITEM_2;
		float L_8 = __this->___MENUITEM_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (1.0f))));
		RuntimeObject* L_9;
		L_9 = MENUDOWN_get__world_m19F1C88DBBB471B7AE25BF745400329CA0B3DE70_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)-1524669481));
		__this->___MAXMENUITEM_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAXMENUITEM_3), (void*)L_10);
		RuntimeObject* L_11 = __this->___MAXMENUITEM_3;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___MAXMENUITEM_3_val = L_12;
		RuntimeObject* L_13;
		L_13 = MENUDOWN_get__world_m19F1C88DBBB471B7AE25BF745400329CA0B3DE70_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)118534065));
		__this->___MENUITEM_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_4), (void*)L_14);
		RuntimeObject* L_15 = __this->___MENUITEM_4;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)231), (bool)1);
		__this->___MENUITEM_4_val = L_16;
		float L_17 = __this->___MENUITEM_4_val;
		float L_18 = __this->___MAXMENUITEM_3_val;
		bool L_19;
		L_19 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_0103;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = MENUDOWN_get__world_m19F1C88DBBB471B7AE25BF745400329CA0B3DE70_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, 5, ((int32_t)118534065));
		__this->___MENUITEM_6 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_6), (void*)L_21);
		RuntimeObject* L_22 = __this->___MENUITEM_6;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)231), (1.0f));
	}

IL_0103:
	{
		RuntimeObject* L_23;
		L_23 = MENUDOWN_get__world_m19F1C88DBBB471B7AE25BF745400329CA0B3DE70_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)371529582), (bool)1, (bool)1);
		__this->___BIP01SND_7 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP01SND_7), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = MENUDOWN_get__world_m19F1C88DBBB471B7AE25BF745400329CA0B3DE70_inline(__this, NULL);
		RuntimeObject* L_27 = __this->___BIP01SND_7;
		NullCheck(L_26);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_26, L_27, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUUP_get_MY_mB3E7791B247614D87E754A35D8E7726228FB456E (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUUP_set_MY_mC22DEC83495D941A87038A6E74644BDE6F1FC9F1 (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUUP_get_THERE_m9032F976BC6240F17D0B2532050340227804712F (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUUP_set_THERE_mB3F4B35030F7448CC9400F8716118EC508D1A027 (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUUP_get__world_m329FE1D0FD979551E86AEEE5464B4398D13BFFE5 (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUUP_set__world_mBDB356FFFE562BF01F9B8C1E3DED566B087E819A (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUUP_get_Current_m56EB3FBC55746176BB4EEDA78A86976DD71EC6AE (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUUP_set_Current_m154CB56CB16A6D213EF01F402A8BEE71E2BBFF54 (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUUP_Reset_m87D5E2B6C703FEDAAA8307031C59728A79442A9A (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUUP__ctor_mFBC6C40CB6A865EA519BBE9193464BC85A362061 (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUUP__ctor_mADEB0DF6DF58713447D3A01B0946999771D6A916 (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SUBMENUUP_set_MY_mC22DEC83495D941A87038A6E74644BDE6F1FC9F1_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SUBMENUUP_set_THERE_mB3F4B35030F7448CC9400F8716118EC508D1A027_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SUBMENUUP_set__world_mBDB356FFFE562BF01F9B8C1E3DED566B087E819A_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SUBMENUUP_MoveNext_m8C6F0EBDEDFE92B67E915630DD7C3091AAD2E99A (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, const RuntimeMethod* method) 
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
		L_1 = SUBMENUUP_get__world_m329FE1D0FD979551E86AEEE5464B4398D13BFFE5_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___SUBMENUITEM_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = SUBMENUUP_get__world_m329FE1D0FD979551E86AEEE5464B4398D13BFFE5_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___SUBMENUITEM_2;
		float L_8 = __this->___SUBMENUITEM_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (-1.0f))));
		RuntimeObject* L_9;
		L_9 = SUBMENUUP_get__world_m329FE1D0FD979551E86AEEE5464B4398D13BFFE5_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_4), (void*)L_10);
		RuntimeObject* L_11 = __this->___SUBMENUITEM_4;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_4_val = L_12;
		float L_13 = __this->___SUBMENUITEM_4_val;
		bool L_14;
		L_14 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_13, (1.0f), NULL);
		if (!L_14)
		{
			goto IL_0103;
		}
	}
	{
		RuntimeObject* L_15;
		L_15 = SUBMENUUP_get__world_m329FE1D0FD979551E86AEEE5464B4398D13BFFE5_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)-1524669481));
		__this->___MAXMENUITEM_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAXMENUITEM_5), (void*)L_16);
		RuntimeObject* L_17 = __this->___MAXMENUITEM_5;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (bool)1);
		__this->___MAXMENUITEM_5_val = L_18;
		RuntimeObject* L_19;
		L_19 = SUBMENUUP_get__world_m329FE1D0FD979551E86AEEE5464B4398D13BFFE5_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_6), (void*)L_20);
		RuntimeObject* L_21 = __this->___SUBMENUITEM_6;
		float L_22 = __this->___MAXMENUITEM_5_val;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), L_22);
	}

IL_0103:
	{
		RuntimeObject* L_23;
		L_23 = SUBMENUUP_get__world_m329FE1D0FD979551E86AEEE5464B4398D13BFFE5_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)371529582), (bool)1, (bool)1);
		__this->___BIP01SND_7 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP01SND_7), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = SUBMENUUP_get__world_m329FE1D0FD979551E86AEEE5464B4398D13BFFE5_inline(__this, NULL);
		RuntimeObject* L_27 = __this->___BIP01SND_7;
		NullCheck(L_26);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_26, L_27, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUDOWN_get_MY_m782622175E55E1E5816925616A15F86C42003AD0 (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUDOWN_set_MY_m03F34FE8A947549338B263FD18722708F2C21D0E (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUDOWN_get_THERE_mCC17A3592A4291BEAFEE99F1E790CCADB19AD66A (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUDOWN_set_THERE_m77BE279DEB0FFF6D10B79DEB6BC003534497F386 (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUDOWN_get__world_m668E4ACA97DBCE650318B64FC01BFAB2F77CDB80 (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUDOWN_set__world_mA22748DCCF2F48E0FE9B9B22446A65F02F110D7B (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUDOWN_get_Current_m5CFB111A35FD9C7867BE396C68EEA3B514C2FBDF (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUDOWN_set_Current_mD2A82B5FFAFBA3780F042B8271A195EE96949060 (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUDOWN_Reset_mB7A171832ADCA9F096FC9384AA56FB6B8718158D (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUDOWN__ctor_mE59CF0A94E6E3D5CB6D5BDFB92E5C8E12104F782 (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SUBMENUDOWN__ctor_m0364B2D252D0FA1A5BF04304EC8464639021C28D (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SUBMENUDOWN_set_MY_m03F34FE8A947549338B263FD18722708F2C21D0E_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SUBMENUDOWN_set_THERE_m77BE279DEB0FFF6D10B79DEB6BC003534497F386_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SUBMENUDOWN_set__world_mA22748DCCF2F48E0FE9B9B22446A65F02F110D7B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SUBMENUDOWN_MoveNext_m53E9CDB2776C3F3F6959687C821CA2A6BB1BF7AF (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, const RuntimeMethod* method) 
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
		L_1 = SUBMENUDOWN_get__world_m668E4ACA97DBCE650318B64FC01BFAB2F77CDB80_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___SUBMENUITEM_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = SUBMENUDOWN_get__world_m668E4ACA97DBCE650318B64FC01BFAB2F77CDB80_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___SUBMENUITEM_2;
		float L_8 = __this->___SUBMENUITEM_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (1.0f))));
		RuntimeObject* L_9;
		L_9 = SUBMENUDOWN_get__world_m668E4ACA97DBCE650318B64FC01BFAB2F77CDB80_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)-1524669481));
		__this->___MAXMENUITEM_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAXMENUITEM_3), (void*)L_10);
		RuntimeObject* L_11 = __this->___MAXMENUITEM_3;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___MAXMENUITEM_3_val = L_12;
		RuntimeObject* L_13;
		L_13 = SUBMENUDOWN_get__world_m668E4ACA97DBCE650318B64FC01BFAB2F77CDB80_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_13, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_4), (void*)L_14);
		RuntimeObject* L_15 = __this->___SUBMENUITEM_4;
		NullCheck(L_15);
		float L_16;
		L_16 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_4_val = L_16;
		float L_17 = __this->___SUBMENUITEM_4_val;
		float L_18 = __this->___MAXMENUITEM_3_val;
		bool L_19;
		L_19 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_0103;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = SUBMENUDOWN_get__world_m668E4ACA97DBCE650318B64FC01BFAB2F77CDB80_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_6 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_6), (void*)L_21);
		RuntimeObject* L_22 = __this->___SUBMENUITEM_6;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)231), (1.0f));
	}

IL_0103:
	{
		RuntimeObject* L_23;
		L_23 = SUBMENUDOWN_get__world_m668E4ACA97DBCE650318B64FC01BFAB2F77CDB80_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)371529582), (bool)1, (bool)1);
		__this->___BIP01SND_7 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP01SND_7), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = SUBMENUDOWN_get__world_m668E4ACA97DBCE650318B64FC01BFAB2F77CDB80_inline(__this, NULL);
		RuntimeObject* L_27 = __this->___BIP01SND_7;
		NullCheck(L_26);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_26, L_27, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEUP_get_MY_m5BA10D6110D9EA479BF92E0711DE9153ED747A9F (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEUP_set_MY_m9ED35C9BFAFAD7601A48861CA3C2BF474B71A53D (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEUP_get_THERE_mC2EF305DB95E484A5A19BF9265AE5CA601ED40E6 (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEUP_set_THERE_mFCED82953CE99725B4F51358AF15F58D912FF112 (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5 (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEUP_set__world_m14F106017196FB08A545A7B907F0587CF3AFEAAB (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEUP_get_Current_m33F8B9F6CEA4D369B750E72D97660B3C636531EB (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEUP_set_Current_m9E2A729396006F66E733D6DA805510790B0D8E3C (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEUP_Reset_m7A4C890AA2F7FB584CE04830597B9285100BC6E8 (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEUP__ctor_mFE70ADF8E5CED39AC087E6D83B7BAD406698B391 (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEUP__ctor_m9C2BF50590DF8F7BE0A38716D0F9AE466DB079E1 (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		VOLUMEUP_set_MY_m9ED35C9BFAFAD7601A48861CA3C2BF474B71A53D_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		VOLUMEUP_set_THERE_mFCED82953CE99725B4F51358AF15F58D912FF112_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		VOLUMEUP_set__world_m14F106017196FB08A545A7B907F0587CF3AFEAAB_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VOLUMEUP_MoveNext_m7A0C8DA4133AC6F68F572370F62A674B346C9C7F (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, const RuntimeMethod* method) 
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
		L_1 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___SUBMENUITEM_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_1_val = L_4;
		float L_5 = __this->___SUBMENUITEM_1_val;
		bool L_6;
		L_6 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_5, (2.0f), NULL);
		if (L_6)
		{
			goto IL_0305;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___SUBMENUITEM_3;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_3_val = L_10;
		float L_11 = __this->___SUBMENUITEM_3_val;
		bool L_12;
		L_12 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_11, (1.0f), NULL);
		if (L_12)
		{
			goto IL_01c9;
		}
	}
	{
		RuntimeObject* L_13;
		L_13 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)371529582), (bool)1, (bool)1);
		__this->___BIP01SND_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP01SND_4), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		RuntimeObject* L_17 = __this->___BIP01SND_4;
		NullCheck(L_16);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, L_17, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_18;
		L_18 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, 5, ((int32_t)405));
		__this->___SOUND_VOL_7 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_7), (void*)L_19);
		RuntimeObject* L_20 = __this->___SOUND_VOL_7;
		NullCheck(L_20);
		float L_21;
		L_21 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)231), (bool)1);
		__this->___SOUND_VOL_7_val = L_21;
		float L_22 = __this->___SOUND_VOL_7_val;
		bool L_23;
		L_23 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_22, (0.959999979f), NULL);
		if (!L_23)
		{
			goto IL_016c;
		}
	}
	{
		RuntimeObject* L_24;
		L_24 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)405));
		__this->___SOUND_VOL_9 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_9), (void*)L_25);
		RuntimeObject* L_26 = __this->___SOUND_VOL_9;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (bool)1);
		__this->___SOUND_VOL_9_val = L_27;
		RuntimeObject* L_28;
		L_28 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, 5, ((int32_t)405));
		__this->___SOUND_VOL_10 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_10), (void*)L_29);
		RuntimeObject* L_30 = __this->___SOUND_VOL_10;
		float L_31 = __this->___SOUND_VOL_9_val;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)231), ((float)il2cpp_codegen_add(L_31, (0.0500000007f))));
	}

IL_016c:
	{
		RuntimeObject* L_32;
		L_32 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, 5, ((int32_t)405));
		__this->___SOUND_VOL_11 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_11), (void*)L_33);
		RuntimeObject* L_34 = __this->___SOUND_VOL_11;
		NullCheck(L_34);
		float L_35;
		L_35 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)231), (bool)1);
		__this->___SOUND_VOL_11_val = L_35;
		RuntimeObject* L_36;
		L_36 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_36, 5, ((int32_t)299848383));
		__this->___SOUND_VOL_BUFFER_12 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_BUFFER_12), (void*)L_37);
		RuntimeObject* L_38 = __this->___SOUND_VOL_BUFFER_12;
		float L_39 = __this->___SOUND_VOL_11_val;
		NullCheck(L_38);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)231), L_39);
		return (bool)0;
	}

IL_01c9:
	{
		RuntimeObject* L_40;
		L_40 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)371529582), (bool)1, (bool)1);
		__this->___BIP01SND_13 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP01SND_13), (void*)L_42);
		RuntimeObject* L_43;
		L_43 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		RuntimeObject* L_44 = __this->___BIP01SND_13;
		NullCheck(L_43);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, L_44, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_45;
		L_45 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, 5, ((int32_t)407));
		__this->___CDAUDIO_VOL_16 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_16), (void*)L_46);
		RuntimeObject* L_47 = __this->___CDAUDIO_VOL_16;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)231), (bool)1);
		__this->___CDAUDIO_VOL_16_val = L_48;
		float L_49 = __this->___CDAUDIO_VOL_16_val;
		bool L_50;
		L_50 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_49, (0.959999979f), NULL);
		if (!L_50)
		{
			goto IL_02a8;
		}
	}
	{
		RuntimeObject* L_51;
		L_51 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_51, 5, ((int32_t)407));
		__this->___CDAUDIO_VOL_18 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_18), (void*)L_52);
		RuntimeObject* L_53 = __this->___CDAUDIO_VOL_18;
		NullCheck(L_53);
		float L_54;
		L_54 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)231), (bool)1);
		__this->___CDAUDIO_VOL_18_val = L_54;
		RuntimeObject* L_55;
		L_55 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, 5, ((int32_t)407));
		__this->___CDAUDIO_VOL_19 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_19), (void*)L_56);
		RuntimeObject* L_57 = __this->___CDAUDIO_VOL_19;
		float L_58 = __this->___CDAUDIO_VOL_18_val;
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)231), ((float)il2cpp_codegen_add(L_58, (0.0500000007f))));
	}

IL_02a8:
	{
		RuntimeObject* L_59;
		L_59 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, 5, ((int32_t)407));
		__this->___CDAUDIO_VOL_20 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_20), (void*)L_60);
		RuntimeObject* L_61 = __this->___CDAUDIO_VOL_20;
		NullCheck(L_61);
		float L_62;
		L_62 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)231), (bool)1);
		__this->___CDAUDIO_VOL_20_val = L_62;
		RuntimeObject* L_63;
		L_63 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, 5, ((int32_t)-1700001905));
		__this->___CDAUDIO_VOL_BUFFER_21 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_BUFFER_21), (void*)L_64);
		RuntimeObject* L_65 = __this->___CDAUDIO_VOL_BUFFER_21;
		float L_66 = __this->___CDAUDIO_VOL_20_val;
		NullCheck(L_65);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)231), L_66);
		return (bool)0;
	}

IL_0305:
	{
		RuntimeObject* L_67;
		L_67 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_67, 5, ((int32_t)1295621997));
		__this->___TOUGHNESS_23 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TOUGHNESS_23), (void*)L_68);
		RuntimeObject* L_69 = __this->___TOUGHNESS_23;
		NullCheck(L_69);
		float L_70;
		L_70 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)231), (bool)1);
		__this->___TOUGHNESS_23_val = L_70;
		RuntimeObject* L_71;
		L_71 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, 5, ((int32_t)1295621997));
		__this->___TOUGHNESS_24 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TOUGHNESS_24), (void*)L_72);
		RuntimeObject* L_73 = __this->___TOUGHNESS_24;
		float L_74 = __this->___TOUGHNESS_23_val;
		NullCheck(L_73);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)231), ((float)il2cpp_codegen_add(L_74, (0.100000001f))));
		RuntimeObject* L_75;
		L_75 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		NullCheck(L_75);
		RuntimeObject* L_76;
		L_76 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_75);
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)371529582), (bool)1, (bool)1);
		__this->___BIP01SND_25 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP01SND_25), (void*)L_77);
		RuntimeObject* L_78;
		L_78 = VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline(__this, NULL);
		RuntimeObject* L_79 = __this->___BIP01SND_25;
		NullCheck(L_78);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_78, L_79, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEDOWN_get_MY_mA980E2DD3CB330FE86AB00288BABE34A670BF9CC (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEDOWN_set_MY_mB11140190F3C37F0C2EFEE8895BBF9FF39EE2544 (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEDOWN_get_THERE_m975EBD0D2369C815D7363A7779E1A1058F73187B (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEDOWN_set_THERE_mBB5C3FFA6C63131F00E4F174CD9E2AE3816E24E4 (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23 (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEDOWN_set__world_m0DE0BCFDF3B1E0A15A7EDEDCD11D4047B0DC644F (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEDOWN_get_Current_mB20ABF0FEE47971B51B2DDD7A7F1BA904E115728 (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEDOWN_set_Current_m67FDD14A17C2C52738856A06D84DECB99F1BAC8C (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEDOWN_Reset_m47FC5D3F52254F7AD37FE2E6120BAF341F7A127C (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEDOWN__ctor_m68FCB451D012478DA5D46A2968AAEB09E5C243BC (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VOLUMEDOWN__ctor_mD44408D0BFC7EC48A65A4D629C12AF9A89C996CF (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		VOLUMEDOWN_set_MY_mB11140190F3C37F0C2EFEE8895BBF9FF39EE2544_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		VOLUMEDOWN_set_THERE_mBB5C3FFA6C63131F00E4F174CD9E2AE3816E24E4_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		VOLUMEDOWN_set__world_m0DE0BCFDF3B1E0A15A7EDEDCD11D4047B0DC644F_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VOLUMEDOWN_MoveNext_m012AB845F26329DCFF245EF7479BC7017828CB91 (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, const RuntimeMethod* method) 
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
		L_1 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___SUBMENUITEM_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_1_val = L_4;
		float L_5 = __this->___SUBMENUITEM_1_val;
		bool L_6;
		L_6 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_5, (2.0f), NULL);
		if (L_6)
		{
			goto IL_0305;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___SUBMENUITEM_3;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_3_val = L_10;
		float L_11 = __this->___SUBMENUITEM_3_val;
		bool L_12;
		L_12 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_11, (1.0f), NULL);
		if (L_12)
		{
			goto IL_01c9;
		}
	}
	{
		RuntimeObject* L_13;
		L_13 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)371529582), (bool)1, (bool)1);
		__this->___BIP01SND_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP01SND_4), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		RuntimeObject* L_17 = __this->___BIP01SND_4;
		NullCheck(L_16);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, L_17, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_18;
		L_18 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, 5, ((int32_t)405));
		__this->___SOUND_VOL_7 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_7), (void*)L_19);
		RuntimeObject* L_20 = __this->___SOUND_VOL_7;
		NullCheck(L_20);
		float L_21;
		L_21 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)231), (bool)1);
		__this->___SOUND_VOL_7_val = L_21;
		float L_22 = __this->___SOUND_VOL_7_val;
		bool L_23;
		L_23 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_22, (0.0500000007f), NULL);
		if (!L_23)
		{
			goto IL_016c;
		}
	}
	{
		RuntimeObject* L_24;
		L_24 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)405));
		__this->___SOUND_VOL_9 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_9), (void*)L_25);
		RuntimeObject* L_26 = __this->___SOUND_VOL_9;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (bool)1);
		__this->___SOUND_VOL_9_val = L_27;
		RuntimeObject* L_28;
		L_28 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, 5, ((int32_t)405));
		__this->___SOUND_VOL_10 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_10), (void*)L_29);
		RuntimeObject* L_30 = __this->___SOUND_VOL_10;
		float L_31 = __this->___SOUND_VOL_9_val;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)231), ((float)il2cpp_codegen_add(L_31, (-0.0500000007f))));
	}

IL_016c:
	{
		RuntimeObject* L_32;
		L_32 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_32, 5, ((int32_t)405));
		__this->___SOUND_VOL_11 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_11), (void*)L_33);
		RuntimeObject* L_34 = __this->___SOUND_VOL_11;
		NullCheck(L_34);
		float L_35;
		L_35 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)231), (bool)1);
		__this->___SOUND_VOL_11_val = L_35;
		RuntimeObject* L_36;
		L_36 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_36, 5, ((int32_t)299848383));
		__this->___SOUND_VOL_BUFFER_12 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SOUND_VOL_BUFFER_12), (void*)L_37);
		RuntimeObject* L_38 = __this->___SOUND_VOL_BUFFER_12;
		float L_39 = __this->___SOUND_VOL_11_val;
		NullCheck(L_38);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)231), L_39);
		return (bool)0;
	}

IL_01c9:
	{
		RuntimeObject* L_40;
		L_40 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)371529582), (bool)1, (bool)1);
		__this->___BIP01SND_13 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP01SND_13), (void*)L_42);
		RuntimeObject* L_43;
		L_43 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		RuntimeObject* L_44 = __this->___BIP01SND_13;
		NullCheck(L_43);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, L_44, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_45;
		L_45 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_45, 5, ((int32_t)407));
		__this->___CDAUDIO_VOL_16 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_16), (void*)L_46);
		RuntimeObject* L_47 = __this->___CDAUDIO_VOL_16;
		NullCheck(L_47);
		float L_48;
		L_48 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_47, ((int32_t)231), (bool)1);
		__this->___CDAUDIO_VOL_16_val = L_48;
		float L_49 = __this->___CDAUDIO_VOL_16_val;
		bool L_50;
		L_50 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_49, (0.0500000007f), NULL);
		if (!L_50)
		{
			goto IL_02a8;
		}
	}
	{
		RuntimeObject* L_51;
		L_51 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_51, 5, ((int32_t)407));
		__this->___CDAUDIO_VOL_18 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_18), (void*)L_52);
		RuntimeObject* L_53 = __this->___CDAUDIO_VOL_18;
		NullCheck(L_53);
		float L_54;
		L_54 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)231), (bool)1);
		__this->___CDAUDIO_VOL_18_val = L_54;
		RuntimeObject* L_55;
		L_55 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, 5, ((int32_t)407));
		__this->___CDAUDIO_VOL_19 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_19), (void*)L_56);
		RuntimeObject* L_57 = __this->___CDAUDIO_VOL_19;
		float L_58 = __this->___CDAUDIO_VOL_18_val;
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)231), ((float)il2cpp_codegen_add(L_58, (-0.0500000007f))));
	}

IL_02a8:
	{
		RuntimeObject* L_59;
		L_59 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, 5, ((int32_t)407));
		__this->___CDAUDIO_VOL_20 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_20), (void*)L_60);
		RuntimeObject* L_61 = __this->___CDAUDIO_VOL_20;
		NullCheck(L_61);
		float L_62;
		L_62 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)231), (bool)1);
		__this->___CDAUDIO_VOL_20_val = L_62;
		RuntimeObject* L_63;
		L_63 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, 5, ((int32_t)-1700001905));
		__this->___CDAUDIO_VOL_BUFFER_21 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CDAUDIO_VOL_BUFFER_21), (void*)L_64);
		RuntimeObject* L_65 = __this->___CDAUDIO_VOL_BUFFER_21;
		float L_66 = __this->___CDAUDIO_VOL_20_val;
		NullCheck(L_65);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)231), L_66);
		return (bool)0;
	}

IL_0305:
	{
		RuntimeObject* L_67;
		L_67 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_67, 5, ((int32_t)1295621997));
		__this->___TOUGHNESS_23 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TOUGHNESS_23), (void*)L_68);
		RuntimeObject* L_69 = __this->___TOUGHNESS_23;
		NullCheck(L_69);
		float L_70;
		L_70 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)231), (bool)1);
		__this->___TOUGHNESS_23_val = L_70;
		RuntimeObject* L_71;
		L_71 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, 5, ((int32_t)1295621997));
		__this->___TOUGHNESS_24 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TOUGHNESS_24), (void*)L_72);
		RuntimeObject* L_73 = __this->___TOUGHNESS_24;
		float L_74 = __this->___TOUGHNESS_23_val;
		NullCheck(L_73);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)231), ((float)il2cpp_codegen_add(L_74, (-0.100000001f))));
		RuntimeObject* L_75;
		L_75 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		NullCheck(L_75);
		RuntimeObject* L_76;
		L_76 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_75);
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)371529582), (bool)1, (bool)1);
		__this->___BIP01SND_25 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP01SND_25), (void*)L_77);
		RuntimeObject* L_78;
		L_78 = VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline(__this, NULL);
		RuntimeObject* L_79 = __this->___BIP01SND_25;
		NullCheck(L_78);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_78, L_79, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HIDEWEAPON_get_MY_m4E1DDA36C328B18F11EDC7D7BFB9E9FB01383DDA (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEWEAPON_set_MY_m782DDF9401BB88C6B13FCDF4ECF6F64405CECF10 (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HIDEWEAPON_get_THERE_mF388D87F9B4CA2DD6C3B80CCFD1DD6BB26170283 (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEWEAPON_set_THERE_mC336C3971A558129857606F5F8044EC10546D9E5 (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452 (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEWEAPON_set__world_m988A107AB864B59B7B7A8F2C23F49380AA127D5F (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HIDEWEAPON_get_Current_mB8C86C22AC165DEAE619AB0F6D75B06824DD9812 (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEWEAPON_set_Current_m2FD9DC7A7C04039B4691AB94C26758D860BE77E6 (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEWEAPON_Reset_m1F5EA0B0878627062A64C979BF91AC81E7E440FA (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEWEAPON__ctor_mE7F3B061F612EE76C318C507736D03D078E8E680 (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HIDEWEAPON__ctor_mD713157F64E24D7DBF0C0F82E4D7FC252E906DD4 (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		HIDEWEAPON_set_MY_m782DDF9401BB88C6B13FCDF4ECF6F64405CECF10_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		HIDEWEAPON_set_THERE_mC336C3971A558129857606F5F8044EC10546D9E5_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		HIDEWEAPON_set__world_m988A107AB864B59B7B7A8F2C23F49380AA127D5F_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HIDEWEAPON_MoveNext_m28792B19474BE3CA7497DBF295F8C3E5489CAD0F (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B1_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B3_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B5_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B4_1 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B6_1 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B8_1 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B7_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B9_1 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B11_1 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B10_1 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B12_1 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B14_1 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B13_1 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B15_1 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B17_1 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B16_1 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B18_1 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B20_1 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B19_1 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B21_1 = NULL;
	RuntimeObject* G_B23_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B23_1 = NULL;
	RuntimeObject* G_B22_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B22_1 = NULL;
	RuntimeObject* G_B24_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B24_1 = NULL;
	RuntimeObject* G_B26_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B26_1 = NULL;
	RuntimeObject* G_B25_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B25_1 = NULL;
	RuntimeObject* G_B27_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B27_1 = NULL;
	RuntimeObject* G_B29_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B29_1 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B28_1 = NULL;
	RuntimeObject* G_B30_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B30_1 = NULL;
	RuntimeObject* G_B32_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B32_1 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B31_1 = NULL;
	RuntimeObject* G_B33_0 = NULL;
	HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* G_B33_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_001a;
		}
		G_B1_0 = L_3;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0023;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B2_0, ((int32_t)97), (bool)1, (bool)1);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		G_B3_1->___temp_1 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___temp_1), (void*)G_B3_0);
		RuntimeObject* L_5;
		L_5 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		RuntimeObject* L_6 = __this->___temp_1;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, ((int32_t)-848574948), L_6);
		RuntimeObject* L_7;
		L_7 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		RuntimeObject* L_9 = L_8;
		if (L_9)
		{
			G_B5_0 = L_9;
			G_B5_1 = __this;
			goto IL_0051;
		}
		G_B4_0 = L_9;
		G_B4_1 = __this;
	}
	{
		G_B6_0 = ((RuntimeObject*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_005d;
	}

IL_0051:
	{
		NullCheck(G_B5_0);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B5_0, ((int32_t)157), (bool)1, (bool)1);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_1;
	}

IL_005d:
	{
		NullCheck(G_B6_1);
		G_B6_1->___temp_5 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___temp_5), (void*)G_B6_0);
		RuntimeObject* L_11;
		L_11 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		RuntimeObject* L_12 = __this->___temp_5;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, ((int32_t)2082126285), L_12);
		RuntimeObject* L_13;
		L_13 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		RuntimeObject* L_15 = L_14;
		if (L_15)
		{
			G_B8_0 = L_15;
			G_B8_1 = __this;
			goto IL_008b;
		}
		G_B7_0 = L_15;
		G_B7_1 = __this;
	}
	{
		G_B9_0 = ((RuntimeObject*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_0097;
	}

IL_008b:
	{
		NullCheck(G_B8_0);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B8_0, ((int32_t)158), (bool)1, (bool)1);
		G_B9_0 = L_16;
		G_B9_1 = G_B8_1;
	}

IL_0097:
	{
		NullCheck(G_B9_1);
		G_B9_1->___temp_9 = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___temp_9), (void*)G_B9_0);
		RuntimeObject* L_17;
		L_17 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		RuntimeObject* L_18 = __this->___temp_9;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_17, ((int32_t)2082126286), L_18);
		RuntimeObject* L_19;
		L_19 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_19);
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B11_0 = L_21;
			G_B11_1 = __this;
			goto IL_00c5;
		}
		G_B10_0 = L_21;
		G_B10_1 = __this;
	}
	{
		G_B12_0 = ((RuntimeObject*)(NULL));
		G_B12_1 = G_B10_1;
		goto IL_00d1;
	}

IL_00c5:
	{
		NullCheck(G_B11_0);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B11_0, ((int32_t)161), (bool)1, (bool)1);
		G_B12_0 = L_22;
		G_B12_1 = G_B11_1;
	}

IL_00d1:
	{
		NullCheck(G_B12_1);
		G_B12_1->___temp_13 = G_B12_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_1->___temp_13), (void*)G_B12_0);
		RuntimeObject* L_23;
		L_23 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		RuntimeObject* L_24 = __this->___temp_13;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, ((int32_t)2082126289), L_24);
		RuntimeObject* L_25;
		L_25 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		RuntimeObject* L_27 = L_26;
		if (L_27)
		{
			G_B14_0 = L_27;
			G_B14_1 = __this;
			goto IL_00ff;
		}
		G_B13_0 = L_27;
		G_B13_1 = __this;
	}
	{
		G_B15_0 = ((RuntimeObject*)(NULL));
		G_B15_1 = G_B13_1;
		goto IL_0108;
	}

IL_00ff:
	{
		NullCheck(G_B14_0);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B14_0, ((int32_t)104), (bool)1, (bool)1);
		G_B15_0 = L_28;
		G_B15_1 = G_B14_1;
	}

IL_0108:
	{
		NullCheck(G_B15_1);
		G_B15_1->___temp_16 = G_B15_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B15_1->___temp_16), (void*)G_B15_0);
		RuntimeObject* L_29;
		L_29 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		RuntimeObject* L_30 = __this->___temp_16;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, ((int32_t)-1934864158), L_30);
		RuntimeObject* L_31;
		L_31 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_31);
		RuntimeObject* L_33 = L_32;
		if (L_33)
		{
			G_B17_0 = L_33;
			G_B17_1 = __this;
			goto IL_0136;
		}
		G_B16_0 = L_33;
		G_B16_1 = __this;
	}
	{
		G_B18_0 = ((RuntimeObject*)(NULL));
		G_B18_1 = G_B16_1;
		goto IL_013f;
	}

IL_0136:
	{
		NullCheck(G_B17_0);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B17_0, ((int32_t)39), (bool)1, (bool)1);
		G_B18_0 = L_34;
		G_B18_1 = G_B17_1;
	}

IL_013f:
	{
		NullCheck(G_B18_1);
		G_B18_1->___temp_19 = G_B18_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B18_1->___temp_19), (void*)G_B18_0);
		RuntimeObject* L_35;
		L_35 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		RuntimeObject* L_36 = __this->___temp_19;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, ((int32_t)-1935082880), L_36);
		RuntimeObject* L_37;
		L_37 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_37);
		RuntimeObject* L_39 = L_38;
		if (L_39)
		{
			G_B20_0 = L_39;
			G_B20_1 = __this;
			goto IL_016d;
		}
		G_B19_0 = L_39;
		G_B19_1 = __this;
	}
	{
		G_B21_0 = ((RuntimeObject*)(NULL));
		G_B21_1 = G_B19_1;
		goto IL_0176;
	}

IL_016d:
	{
		NullCheck(G_B20_0);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B20_0, ((int32_t)40), (bool)1, (bool)1);
		G_B21_0 = L_40;
		G_B21_1 = G_B20_1;
	}

IL_0176:
	{
		NullCheck(G_B21_1);
		G_B21_1->___temp_22 = G_B21_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B21_1->___temp_22), (void*)G_B21_0);
		RuntimeObject* L_41;
		L_41 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		RuntimeObject* L_42 = __this->___temp_22;
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, ((int32_t)-1620445278), L_42);
		RuntimeObject* L_43;
		L_43 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_43);
		RuntimeObject* L_45 = L_44;
		if (L_45)
		{
			G_B23_0 = L_45;
			G_B23_1 = __this;
			goto IL_01a4;
		}
		G_B22_0 = L_45;
		G_B22_1 = __this;
	}
	{
		G_B24_0 = ((RuntimeObject*)(NULL));
		G_B24_1 = G_B22_1;
		goto IL_01ad;
	}

IL_01a4:
	{
		NullCheck(G_B23_0);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B23_0, ((int32_t)41), (bool)1, (bool)1);
		G_B24_0 = L_46;
		G_B24_1 = G_B23_1;
	}

IL_01ad:
	{
		NullCheck(G_B24_1);
		G_B24_1->___temp_25 = G_B24_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B24_1->___temp_25), (void*)G_B24_0);
		RuntimeObject* L_47;
		L_47 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		RuntimeObject* L_48 = __this->___temp_25;
		NullCheck(L_47);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, ((int32_t)552731872), L_48);
		RuntimeObject* L_49;
		L_49 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_49);
		RuntimeObject* L_51 = L_50;
		if (L_51)
		{
			G_B26_0 = L_51;
			G_B26_1 = __this;
			goto IL_01db;
		}
		G_B25_0 = L_51;
		G_B25_1 = __this;
	}
	{
		G_B27_0 = ((RuntimeObject*)(NULL));
		G_B27_1 = G_B25_1;
		goto IL_01e4;
	}

IL_01db:
	{
		NullCheck(G_B26_0);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B26_0, ((int32_t)42), (bool)1, (bool)1);
		G_B27_0 = L_52;
		G_B27_1 = G_B26_1;
	}

IL_01e4:
	{
		NullCheck(G_B27_1);
		G_B27_1->___temp_28 = G_B27_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B27_1->___temp_28), (void*)G_B27_0);
		RuntimeObject* L_53;
		L_53 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		RuntimeObject* L_54 = __this->___temp_28;
		NullCheck(L_53);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, ((int32_t)-1935331592), L_54);
		RuntimeObject* L_55;
		L_55 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_55);
		RuntimeObject* L_57 = L_56;
		if (L_57)
		{
			G_B29_0 = L_57;
			G_B29_1 = __this;
			goto IL_0212;
		}
		G_B28_0 = L_57;
		G_B28_1 = __this;
	}
	{
		G_B30_0 = ((RuntimeObject*)(NULL));
		G_B30_1 = G_B28_1;
		goto IL_021b;
	}

IL_0212:
	{
		NullCheck(G_B29_0);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B29_0, ((int32_t)43), (bool)1, (bool)1);
		G_B30_0 = L_58;
		G_B30_1 = G_B29_1;
	}

IL_021b:
	{
		NullCheck(G_B30_1);
		G_B30_1->___temp_31 = G_B30_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B30_1->___temp_31), (void*)G_B30_0);
		RuntimeObject* L_59;
		L_59 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		RuntimeObject* L_60 = __this->___temp_31;
		NullCheck(L_59);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, ((int32_t)-1934897748), L_60);
		RuntimeObject* L_61;
		L_61 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_61);
		RuntimeObject* L_63 = L_62;
		if (L_63)
		{
			G_B32_0 = L_63;
			G_B32_1 = __this;
			goto IL_0249;
		}
		G_B31_0 = L_63;
		G_B31_1 = __this;
	}
	{
		G_B33_0 = ((RuntimeObject*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0252;
	}

IL_0249:
	{
		NullCheck(G_B32_0);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B32_0, ((int32_t)44), (bool)1, (bool)1);
		G_B33_0 = L_64;
		G_B33_1 = G_B32_1;
	}

IL_0252:
	{
		NullCheck(G_B33_1);
		G_B33_1->___temp_34 = G_B33_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B33_1->___temp_34), (void*)G_B33_0);
		RuntimeObject* L_65;
		L_65 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		RuntimeObject* L_66 = __this->___temp_34;
		NullCheck(L_65);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_65, ((int32_t)-1934983541), L_66);
		RuntimeObject* L_67;
		L_67 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_67, 5, ((int32_t)380));
		__this->___MAP_MODE_36 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_36), (void*)L_68);
		RuntimeObject* L_69 = __this->___MAP_MODE_36;
		NullCheck(L_69);
		float L_70;
		L_70 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)231), (bool)1);
		__this->___MAP_MODE_36_val = L_70;
		RuntimeObject* L_71;
		L_71 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_71, 5, ((int32_t)-931761456));
		__this->___MAPMODE_37 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAPMODE_37), (void*)L_72);
		RuntimeObject* L_73 = __this->___MAPMODE_37;
		float L_74 = __this->___MAP_MODE_36_val;
		NullCheck(L_73);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_73, ((int32_t)231), L_74);
		RuntimeObject* L_75;
		L_75 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_75);
		RuntimeObject* L_76;
		L_76 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_75);
		NullCheck(L_76);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)97), (RuntimeObject*)NULL);
		RuntimeObject* L_77;
		L_77 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_77);
		RuntimeObject* L_78;
		L_78 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_77);
		NullCheck(L_78);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_78, ((int32_t)78), (RuntimeObject*)NULL);
		RuntimeObject* L_79;
		L_79 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_79);
		NullCheck(L_80);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_80, ((int32_t)157), (RuntimeObject*)NULL);
		RuntimeObject* L_81;
		L_81 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_81);
		RuntimeObject* L_82;
		L_82 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_81);
		NullCheck(L_82);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_82, ((int32_t)158), (RuntimeObject*)NULL);
		RuntimeObject* L_83;
		L_83 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_83);
		NullCheck(L_84);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_84, ((int32_t)161), (RuntimeObject*)NULL);
		RuntimeObject* L_85;
		L_85 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_85);
		NullCheck(L_86);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)104), (RuntimeObject*)NULL);
		RuntimeObject* L_87;
		L_87 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_87);
		RuntimeObject* L_88;
		L_88 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_87);
		NullCheck(L_88);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)39), (RuntimeObject*)NULL);
		RuntimeObject* L_89;
		L_89 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_89);
		RuntimeObject* L_90;
		L_90 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_89);
		NullCheck(L_90);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_90, ((int32_t)92), (RuntimeObject*)NULL);
		RuntimeObject* L_91;
		L_91 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_91);
		RuntimeObject* L_92;
		L_92 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_91);
		NullCheck(L_92);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)40), (RuntimeObject*)NULL);
		RuntimeObject* L_93;
		L_93 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_93);
		RuntimeObject* L_94;
		L_94 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_93);
		NullCheck(L_94);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_94, ((int32_t)41), (RuntimeObject*)NULL);
		RuntimeObject* L_95;
		L_95 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_95);
		NullCheck(L_96);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_96, ((int32_t)42), (RuntimeObject*)NULL);
		RuntimeObject* L_97;
		L_97 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_97);
		NullCheck(L_98);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_98, ((int32_t)43), (RuntimeObject*)NULL);
		RuntimeObject* L_99;
		L_99 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_99);
		RuntimeObject* L_100;
		L_100 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_99);
		NullCheck(L_100);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)44), (RuntimeObject*)NULL);
		RuntimeObject* L_101;
		L_101 = HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline(__this, NULL);
		NullCheck(L_101);
		RuntimeObject* L_102;
		L_102 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_101, 5, ((int32_t)380));
		__this->___MAP_MODE_68 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_68), (void*)L_102);
		RuntimeObject* L_103 = __this->___MAP_MODE_68;
		NullCheck(L_103);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_103, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWWEAPON_get_MY_mD06314FD352C9B9251F94C76FA31A52E74AE7E7A (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWWEAPON_set_MY_m725FF656BE336C1AEBBCF57F4D3375004750372C (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWWEAPON_get_THERE_mC63B1C0476F1363BFFC3D1ECAE78A84ABC0BB70B (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWWEAPON_set_THERE_m6B116142203C49CC0CB7FAAE926967F554D04240 (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0 (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWWEAPON_set__world_mF83DB7390B231C456FD62FD21ACA0CC293568FCA (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SHOWWEAPON_get_Current_mB66769DC736AE4A38C1D3ECACEA91C6FFBF88832 (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWWEAPON_set_Current_m7A224D91CDDA59C7BAF1054888A66E52C6C7FDAA (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWWEAPON_Reset_m397779C38392058390188E581700756532D6FDE2 (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWWEAPON__ctor_m10112909615282BE73D82296C8A4E36231C295CD (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHOWWEAPON__ctor_mABB346E12753E60A91B56143D47BB6101FFCC4A0 (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SHOWWEAPON_set_MY_m725FF656BE336C1AEBBCF57F4D3375004750372C_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SHOWWEAPON_set_THERE_m6B116142203C49CC0CB7FAAE926967F554D04240_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SHOWWEAPON_set__world_mF83DB7390B231C456FD62FD21ACA0CC293568FCA_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SHOWWEAPON_MoveNext_m3E377D19B3FFEB6384AFEE6C97B13438886B67F8 (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, const RuntimeMethod* method) 
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
		L_1 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, ((int32_t)-848574948), (bool)0);
		__this->___FIRE_GUN_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FIRE_GUN_0), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_5 = __this->___FIRE_GUN_0;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)97), L_5);
		RuntimeObject* L_6;
		L_6 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_6, ((int32_t)-848574948), (bool)0);
		__this->___FIRE_GUN_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FIRE_GUN_2), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_8);
		RuntimeObject* L_10 = __this->___FIRE_GUN_2;
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)78), L_10);
		RuntimeObject* L_11;
		L_11 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, ((int32_t)2082126285), (bool)0);
		__this->___LAYER12_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAYER12_4), (void*)L_12);
		RuntimeObject* L_13;
		L_13 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		RuntimeObject* L_15 = __this->___LAYER12_4;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)157), L_15);
		RuntimeObject* L_16;
		L_16 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, ((int32_t)2082126286), (bool)0);
		__this->___LAYER13_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAYER13_7), (void*)L_17);
		RuntimeObject* L_18;
		L_18 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20 = __this->___LAYER13_7;
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)158), L_20);
		RuntimeObject* L_21;
		L_21 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, ((int32_t)2082126289), (bool)0);
		__this->___LAYER16_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAYER16_10), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		RuntimeObject* L_25 = __this->___LAYER16_10;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)161), L_25);
		RuntimeObject* L_26;
		L_26 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_26, ((int32_t)-1934864158), (bool)0);
		__this->___SEL_TRIC_13 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_TRIC_13), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_28);
		RuntimeObject* L_30 = __this->___SEL_TRIC_13;
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)104), L_30);
		RuntimeObject* L_31;
		L_31 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, ((int32_t)-1935082880), (bool)0);
		__this->___SEL_NONE_15 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_NONE_15), (void*)L_32);
		RuntimeObject* L_33;
		L_33 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_33);
		RuntimeObject* L_35 = __this->___SEL_NONE_15;
		NullCheck(L_34);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_34, ((int32_t)39), L_35);
		RuntimeObject* L_36;
		L_36 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_36, ((int32_t)-1935082880), (bool)0);
		__this->___SEL_NONE_17 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_NONE_17), (void*)L_37);
		RuntimeObject* L_38;
		L_38 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_38);
		RuntimeObject* L_40 = __this->___SEL_NONE_17;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)92), L_40);
		RuntimeObject* L_41;
		L_41 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, ((int32_t)-1620445278), (bool)0);
		__this->___SEL_MP5_19 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_MP5_19), (void*)L_42);
		RuntimeObject* L_43;
		L_43 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_43);
		RuntimeObject* L_45 = __this->___SEL_MP5_19;
		NullCheck(L_44);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_44, ((int32_t)40), L_45);
		RuntimeObject* L_46;
		L_46 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, ((int32_t)552731872), (bool)0);
		__this->___SEL_BURST_21 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_BURST_21), (void*)L_47);
		RuntimeObject* L_48;
		L_48 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_48);
		RuntimeObject* L_50 = __this->___SEL_BURST_21;
		NullCheck(L_49);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)41), L_50);
		RuntimeObject* L_51;
		L_51 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_51, ((int32_t)-1935331592), (bool)0);
		__this->___SEL_GRAN_23 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_GRAN_23), (void*)L_52);
		RuntimeObject* L_53;
		L_53 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_53);
		RuntimeObject* L_55 = __this->___SEL_GRAN_23;
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)42), L_55);
		RuntimeObject* L_56;
		L_56 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_56, ((int32_t)-1934897748), (bool)0);
		__this->___SEL_STNG_25 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_STNG_25), (void*)L_57);
		RuntimeObject* L_58;
		L_58 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_58);
		RuntimeObject* L_60 = __this->___SEL_STNG_25;
		NullCheck(L_59);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, ((int32_t)43), L_60);
		RuntimeObject* L_61;
		L_61 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_61, ((int32_t)-1934983541), (bool)0);
		__this->___SEL_QGUN_27 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_QGUN_27), (void*)L_62);
		RuntimeObject* L_63;
		L_63 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_63);
		RuntimeObject* L_65 = __this->___SEL_QGUN_27;
		NullCheck(L_64);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)44), L_65);
		RuntimeObject* L_66;
		L_66 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, 5, ((int32_t)-931761456));
		__this->___MAPMODE_29 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAPMODE_29), (void*)L_67);
		RuntimeObject* L_68 = __this->___MAPMODE_29;
		NullCheck(L_68);
		float L_69;
		L_69 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)231), (bool)1);
		__this->___MAPMODE_29_val = L_69;
		RuntimeObject* L_70;
		L_70 = SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline(__this, NULL);
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_70, 5, ((int32_t)380));
		__this->___MAP_MODE_30 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_30), (void*)L_71);
		RuntimeObject* L_72 = __this->___MAP_MODE_30;
		float L_73 = __this->___MAPMODE_29_val;
		NullCheck(L_72);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)231), L_73);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TYPEGAME_get_MY_m17489F8E2846DE825CF644AF6CA9E7D9E11AA511 (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TYPEGAME_set_MY_mBAF7BC89DF9749EF01252E3DE2EB1A635DB0CEF0 (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TYPEGAME_get_THERE_mC02388C0DF9CFAD2BD9A01D97DF54654014B08AD (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TYPEGAME_set_THERE_mFBBE5DED3B83C972EC254C9F3B3DD210CC4F5FB4 (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6 (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TYPEGAME_set__world_mD00FC4301828E478F3929B5A40A59B95E46DA06A (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TYPEGAME_get_Current_m1514AFFDEB51A1F49FB22FB7BCAE5039041A1703 (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TYPEGAME_set_Current_mE6C11CDE53336E818B0765F39BA723F309D70D34 (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TYPEGAME_Reset_mB87C88CE68F04F01CA10B6E50494D31B5888B7AE (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TYPEGAME__ctor_m99298E8483E09F200ABAE8C597D1ABF71A975E0D (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TYPEGAME__ctor_m45741CFE02CCA1F0899C488A0E58B35DA1CA862E (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TYPEGAME_set_MY_mBAF7BC89DF9749EF01252E3DE2EB1A635DB0CEF0_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TYPEGAME_set_THERE_mFBBE5DED3B83C972EC254C9F3B3DD210CC4F5FB4_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TYPEGAME_set__world_mD00FC4301828E478F3929B5A40A59B95E46DA06A_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TYPEGAME_MoveNext_mC0C0DEF8A8CC68595C9B29AF2521FB105D1EC487 (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* V_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* G_B7_1 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* G_B6_1 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* G_B8_1 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* G_B10_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* G_B9_1 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* G_B11_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0465;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___SUBMENUITEM_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_1_val = L_4;
		float L_5 = __this->___SUBMENUITEM_1_val;
		bool L_6;
		L_6 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_5, (1.0f), NULL);
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
		L_7 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___SUBMENUITEM_3;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_3_val = L_10;
		float L_11 = __this->___SUBMENUITEM_3_val;
		bool L_12;
		L_12 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_11, (4.0f), NULL);
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		return (bool)0;
	}

IL_0090:
	{
		RuntimeObject* L_13;
		L_13 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)371565519), (bool)1, (bool)1);
		__this->___BIP02SND_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP02SND_4), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		RuntimeObject* L_17 = __this->___BIP02SND_4;
		NullCheck(L_16);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, L_17, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_18;
		L_18 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)81), (RuntimeObject*)NULL);
		RuntimeObject* L_20;
		L_20 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		RuntimeObject* L_22 = L_21;
		if (L_22)
		{
			G_B7_0 = L_22;
			G_B7_1 = __this;
			goto IL_00f4;
		}
		G_B6_0 = L_22;
		G_B6_1 = __this;
	}
	{
		G_B8_0 = ((RuntimeObject*)(NULL));
		G_B8_1 = G_B6_1;
		goto IL_00fd;
	}

IL_00f4:
	{
		NullCheck(G_B7_0);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B7_0, ((int32_t)82), (bool)1, (bool)1);
		G_B8_0 = L_23;
		G_B8_1 = G_B7_1;
	}

IL_00fd:
	{
		NullCheck(G_B8_1);
		G_B8_1->___temp_9 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___temp_9), (void*)G_B8_0);
		RuntimeObject* L_24;
		L_24 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		RuntimeObject* L_25 = __this->___temp_9;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, ((int32_t)223318999), L_25);
		RuntimeObject* L_26;
		L_26 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)82), (RuntimeObject*)NULL);
		RuntimeObject* L_28;
		L_28 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, ((int32_t)703), (bool)0);
		__this->___HERE_14 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HERE_14), (void*)L_29);
		RuntimeObject* L_30 = __this->___HERE_14;
		RuntimeObject* L_31 = L_30;
		if (L_31)
		{
			G_B10_0 = L_31;
			G_B10_1 = __this;
			goto IL_0150;
		}
		G_B9_0 = L_31;
		G_B9_1 = __this;
	}
	{
		G_B11_0 = ((RuntimeObject*)(NULL));
		G_B11_1 = G_B9_1;
		goto IL_015c;
	}

IL_0150:
	{
		NullCheck(G_B10_0);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B10_0, ((int32_t)236), (bool)1, (bool)1);
		G_B11_0 = L_32;
		G_B11_1 = G_B10_1;
	}

IL_015c:
	{
		NullCheck(G_B11_1);
		G_B11_1->___temp_15 = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->___temp_15), (void*)G_B11_0);
		RuntimeObject* L_33;
		L_33 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		RuntimeObject* L_34 = __this->___temp_15;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, ((int32_t)-1136887739), L_34);
		RuntimeObject* L_35;
		L_35 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, ((int32_t)-1136887739), (bool)0);
		__this->___LIFTSOUND_19 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LIFTSOUND_19), (void*)L_36);
		RuntimeObject* L_37 = __this->___LIFTSOUND_19;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)285), (0.0f));
		RuntimeObject* L_38;
		L_38 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, 5, ((int32_t)362));
		__this->___MOVE_MODE_21 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_MODE_21), (void*)L_39);
		RuntimeObject* L_40 = __this->___MOVE_MODE_21;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)231), (0.0f));
		RuntimeObject* L_41;
		L_41 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_23 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_23), (void*)L_42);
		RuntimeObject* L_43 = __this->___SUBMENUITEM_23;
		NullCheck(L_43);
		float L_44;
		L_44 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_23_val = L_44;
		float L_45 = __this->___SUBMENUITEM_23_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_45, (1.0f), NULL);
		if (!L_46)
		{
			goto IL_023d;
		}
	}
	{
		RuntimeObject* L_47;
		L_47 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_47);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)462276091), (bool)1, (bool)1);
		__this->___SAVEDGAME01_24 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME01_24), (void*)L_49);
		RuntimeObject* L_50;
		L_50 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		RuntimeObject* L_51 = __this->___SAVEDGAME01_24;
		NullCheck(L_50);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(31, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_50, L_51);
	}

IL_023d:
	{
		RuntimeObject* L_52;
		L_52 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_52, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_26 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_26), (void*)L_53);
		RuntimeObject* L_54 = __this->___SUBMENUITEM_26;
		NullCheck(L_54);
		float L_55;
		L_55 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_26_val = L_55;
		float L_56 = __this->___SUBMENUITEM_26_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_56, (2.0f), NULL);
		if (!L_57)
		{
			goto IL_02ab;
		}
	}
	{
		RuntimeObject* L_58;
		L_58 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, ((int32_t)462276092), (bool)1, (bool)1);
		__this->___SAVEDGAME02_27 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME02_27), (void*)L_60);
		RuntimeObject* L_61;
		L_61 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		RuntimeObject* L_62 = __this->___SAVEDGAME02_27;
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(31, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_61, L_62);
	}

IL_02ab:
	{
		RuntimeObject* L_63;
		L_63 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_29 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_29), (void*)L_64);
		RuntimeObject* L_65 = __this->___SUBMENUITEM_29;
		NullCheck(L_65);
		float L_66;
		L_66 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_29_val = L_66;
		float L_67 = __this->___SUBMENUITEM_29_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_67, (3.0f), NULL);
		if (!L_68)
		{
			goto IL_0319;
		}
	}
	{
		RuntimeObject* L_69;
		L_69 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_69);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_69);
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_70, ((int32_t)462276093), (bool)1, (bool)1);
		__this->___SAVEDGAME03_30 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME03_30), (void*)L_71);
		RuntimeObject* L_72;
		L_72 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		RuntimeObject* L_73 = __this->___SAVEDGAME03_30;
		NullCheck(L_72);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(31, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_72, L_73);
	}

IL_0319:
	{
		RuntimeObject* L_74;
		L_74 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_74, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_32 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_32), (void*)L_75);
		RuntimeObject* L_76 = __this->___SUBMENUITEM_32;
		NullCheck(L_76);
		float L_77;
		L_77 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_32_val = L_77;
		float L_78 = __this->___SUBMENUITEM_32_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_78, (4.0f), NULL);
		if (!L_79)
		{
			goto IL_0387;
		}
	}
	{
		RuntimeObject* L_80;
		L_80 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_80);
		NullCheck(L_81);
		RuntimeObject* L_82;
		L_82 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_81, ((int32_t)462276094), (bool)1, (bool)1);
		__this->___SAVEDGAME04_33 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SAVEDGAME04_33), (void*)L_82);
		RuntimeObject* L_83;
		L_83 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		RuntimeObject* L_84 = __this->___SAVEDGAME04_33;
		NullCheck(L_83);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(31, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_83, L_84);
	}

IL_0387:
	{
		RuntimeObject* L_85;
		L_85 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_85, ((int32_t)223318999), (bool)0);
		__this->___IFESC_34 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IFESC_34), (void*)L_86);
		RuntimeObject* L_87;
		L_87 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_87);
		RuntimeObject* L_88;
		L_88 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_87);
		RuntimeObject* L_89 = __this->___IFESC_34;
		NullCheck(L_88);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_88, ((int32_t)82), L_89);
		RuntimeObject* L_90;
		L_90 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_90);
		RuntimeObject* L_91;
		L_91 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_90, 5, ((int32_t)446));
		__this->___RESULT_37 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RESULT_37), (void*)L_91);
		RuntimeObject* L_92 = __this->___RESULT_37;
		NullCheck(L_92);
		float L_93;
		L_93 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_92, ((int32_t)231), (bool)1);
		__this->___RESULT_37_val = L_93;
		float L_94 = __this->___RESULT_37_val;
		bool L_95;
		L_95 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_94, (0.0f), NULL);
		if (!L_95)
		{
			goto IL_0430;
		}
	}
	{
		SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* L_96 = (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B*)il2cpp_codegen_object_new(SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B_il2cpp_TypeInfo_var);
		SAVEERRORMESSAGE__ctor_m4C73C0F25D7EE0EF07CAEE68B9EA4BF18A4F636C(L_96, NULL);
		V_0 = L_96;
		SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* L_97 = V_0;
		SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* L_98 = L_97;
		RuntimeObject* L_99;
		L_99 = TYPEGAME_get_MY_m17489F8E2846DE825CF644AF6CA9E7D9E11AA511_inline(__this, NULL);
		NullCheck(L_98);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_98, L_99);
		SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* L_100 = L_98;
		RuntimeObject* L_101;
		L_101 = TYPEGAME_get_THERE_mC02388C0DF9CFAD2BD9A01D97DF54654014B08AD_inline(__this, NULL);
		NullCheck(L_100);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_100, L_101);
		RuntimeObject* L_102;
		L_102 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_100);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_100, L_102);
		RuntimeObject* L_103;
		L_103 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* L_104 = V_0;
		NullCheck(L_103);
		RuntimeObject* L_105;
		L_105 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_103, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_104);
		return (bool)0;
	}

IL_0430:
	{
		float L_106;
		L_106 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_106;
		float L_107 = __this->___startTime1;
		float L_108;
		L_108 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(((int32_t)16), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_107, L_108));
		__this->____cursor = 1;
		goto IL_0465;
	}

IL_0458:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_109 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		TYPEGAME_set_Current_mE6C11CDE53336E818B0765F39BA723F309D70D34_inline(__this, L_109, NULL);
		return (bool)1;
	}

IL_0465:
	{
		float L_110;
		L_110 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_111 = __this->___endTime1;
		if ((((float)L_110) < ((float)L_111)))
		{
			goto IL_0458;
		}
	}
	{
		TYPEGAME_set_Current_mE6C11CDE53336E818B0765F39BA723F309D70D34_inline(__this, NULL, NULL);
		RuntimeObject* L_112;
		L_112 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_112);
		RuntimeObject* L_113;
		L_113 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_112);
		NullCheck(L_113);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_113, ((int32_t)145), (RuntimeObject*)NULL);
		RuntimeObject* L_114;
		L_114 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_114);
		RuntimeObject* L_115;
		L_115 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_114);
		NullCheck(L_115);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_115, ((int32_t)129), (RuntimeObject*)NULL);
		RuntimeObject* L_116;
		L_116 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_116);
		RuntimeObject* L_117;
		L_117 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_116);
		NullCheck(L_117);
		RuntimeObject* L_118;
		L_118 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_117, ((int32_t)-629660504), (bool)1, (bool)1);
		__this->___SHOWMAINMENU_45 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOWMAINMENU_45), (void*)L_118);
		RuntimeObject* L_119;
		L_119 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_119);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_119);
		RuntimeObject* L_121 = __this->___SHOWMAINMENU_45;
		NullCheck(L_120);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_120, ((int32_t)82), L_121);
		RuntimeObject* L_122;
		L_122 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_122);
		NullCheck(L_123);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)105), (RuntimeObject*)NULL);
		RuntimeObject* L_124;
		L_124 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_124);
		RuntimeObject* L_125;
		L_125 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_124);
		NullCheck(L_125);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_125, ((int32_t)106), (RuntimeObject*)NULL);
		RuntimeObject* L_126;
		L_126 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_126);
		RuntimeObject* L_127;
		L_127 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_126);
		NullCheck(L_127);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_127, ((int32_t)107), (RuntimeObject*)NULL);
		RuntimeObject* L_128;
		L_128 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_128);
		RuntimeObject* L_129;
		L_129 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_128);
		NullCheck(L_129);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_129, ((int32_t)108), (RuntimeObject*)NULL);
		RuntimeObject* L_130;
		L_130 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_130);
		RuntimeObject* L_131;
		L_131 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_130, ((int32_t)-848574948), (bool)0);
		__this->___FIRE_GUN_55 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FIRE_GUN_55), (void*)L_131);
		RuntimeObject* L_132;
		L_132 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_132);
		RuntimeObject* L_133;
		L_133 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_132);
		RuntimeObject* L_134 = __this->___FIRE_GUN_55;
		NullCheck(L_133);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)97), L_134);
		RuntimeObject* L_135;
		L_135 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_135);
		RuntimeObject* L_136;
		L_136 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_135, ((int32_t)-848574948), (bool)0);
		__this->___FIRE_GUN_57 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FIRE_GUN_57), (void*)L_136);
		RuntimeObject* L_137;
		L_137 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_137);
		RuntimeObject* L_138;
		L_138 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_137);
		RuntimeObject* L_139 = __this->___FIRE_GUN_57;
		NullCheck(L_138);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_138, ((int32_t)78), L_139);
		RuntimeObject* L_140;
		L_140 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_140);
		RuntimeObject* L_141;
		L_141 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_140, ((int32_t)2082126285), (bool)0);
		__this->___LAYER12_59 = L_141;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAYER12_59), (void*)L_141);
		RuntimeObject* L_142;
		L_142 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_142);
		RuntimeObject* L_143;
		L_143 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_142);
		RuntimeObject* L_144 = __this->___LAYER12_59;
		NullCheck(L_143);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_143, ((int32_t)157), L_144);
		RuntimeObject* L_145;
		L_145 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_145);
		RuntimeObject* L_146;
		L_146 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_145, ((int32_t)2082126286), (bool)0);
		__this->___LAYER13_62 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAYER13_62), (void*)L_146);
		RuntimeObject* L_147;
		L_147 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_147);
		RuntimeObject* L_148;
		L_148 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_147);
		RuntimeObject* L_149 = __this->___LAYER13_62;
		NullCheck(L_148);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_148, ((int32_t)158), L_149);
		RuntimeObject* L_150;
		L_150 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_150);
		RuntimeObject* L_151;
		L_151 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_150, ((int32_t)2082126289), (bool)0);
		__this->___LAYER16_65 = L_151;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LAYER16_65), (void*)L_151);
		RuntimeObject* L_152;
		L_152 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_152);
		RuntimeObject* L_153;
		L_153 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_152);
		RuntimeObject* L_154 = __this->___LAYER16_65;
		NullCheck(L_153);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_153, ((int32_t)161), L_154);
		RuntimeObject* L_155;
		L_155 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_155);
		RuntimeObject* L_156;
		L_156 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_155, ((int32_t)-1934864158), (bool)0);
		__this->___SEL_TRIC_68 = L_156;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_TRIC_68), (void*)L_156);
		RuntimeObject* L_157;
		L_157 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_157);
		RuntimeObject* L_158;
		L_158 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_157);
		RuntimeObject* L_159 = __this->___SEL_TRIC_68;
		NullCheck(L_158);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_158, ((int32_t)104), L_159);
		RuntimeObject* L_160;
		L_160 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_160);
		RuntimeObject* L_161;
		L_161 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_160, ((int32_t)-1935082880), (bool)0);
		__this->___SEL_NONE_70 = L_161;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_NONE_70), (void*)L_161);
		RuntimeObject* L_162;
		L_162 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_162);
		RuntimeObject* L_163;
		L_163 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_162);
		RuntimeObject* L_164 = __this->___SEL_NONE_70;
		NullCheck(L_163);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_163, ((int32_t)39), L_164);
		RuntimeObject* L_165;
		L_165 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_165);
		RuntimeObject* L_166;
		L_166 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_165, ((int32_t)-1620445278), (bool)0);
		__this->___SEL_MP5_72 = L_166;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_MP5_72), (void*)L_166);
		RuntimeObject* L_167;
		L_167 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_167);
		RuntimeObject* L_168;
		L_168 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_167);
		RuntimeObject* L_169 = __this->___SEL_MP5_72;
		NullCheck(L_168);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_168, ((int32_t)40), L_169);
		RuntimeObject* L_170;
		L_170 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_170);
		RuntimeObject* L_171;
		L_171 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_170, ((int32_t)552731872), (bool)0);
		__this->___SEL_BURST_74 = L_171;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_BURST_74), (void*)L_171);
		RuntimeObject* L_172;
		L_172 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_172);
		RuntimeObject* L_173;
		L_173 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_172);
		RuntimeObject* L_174 = __this->___SEL_BURST_74;
		NullCheck(L_173);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_173, ((int32_t)41), L_174);
		RuntimeObject* L_175;
		L_175 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_175);
		RuntimeObject* L_176;
		L_176 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_175, ((int32_t)-1935331592), (bool)0);
		__this->___SEL_GRAN_76 = L_176;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_GRAN_76), (void*)L_176);
		RuntimeObject* L_177;
		L_177 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_177);
		RuntimeObject* L_178;
		L_178 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_177);
		RuntimeObject* L_179 = __this->___SEL_GRAN_76;
		NullCheck(L_178);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_178, ((int32_t)42), L_179);
		RuntimeObject* L_180;
		L_180 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_180);
		RuntimeObject* L_181;
		L_181 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_180, ((int32_t)-1934897748), (bool)0);
		__this->___SEL_STNG_78 = L_181;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_STNG_78), (void*)L_181);
		RuntimeObject* L_182;
		L_182 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_182);
		RuntimeObject* L_183;
		L_183 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_182);
		RuntimeObject* L_184 = __this->___SEL_STNG_78;
		NullCheck(L_183);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_183, ((int32_t)43), L_184);
		RuntimeObject* L_185;
		L_185 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_185);
		RuntimeObject* L_186;
		L_186 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_185, ((int32_t)-1934983541), (bool)0);
		__this->___SEL_QGUN_80 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SEL_QGUN_80), (void*)L_186);
		RuntimeObject* L_187;
		L_187 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_187);
		RuntimeObject* L_188;
		L_188 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_187);
		RuntimeObject* L_189 = __this->___SEL_QGUN_80;
		NullCheck(L_188);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_188, ((int32_t)44), L_189);
		RuntimeObject* L_190;
		L_190 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_190);
		RuntimeObject* L_191;
		L_191 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_190, 5, ((int32_t)-931761456));
		__this->___MAPMODE_82 = L_191;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAPMODE_82), (void*)L_191);
		RuntimeObject* L_192 = __this->___MAPMODE_82;
		NullCheck(L_192);
		float L_193;
		L_193 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_192, ((int32_t)231), (bool)1);
		__this->___MAPMODE_82_val = L_193;
		RuntimeObject* L_194;
		L_194 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_194);
		RuntimeObject* L_195;
		L_195 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_194, 5, ((int32_t)380));
		__this->___MAP_MODE_83 = L_195;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAP_MODE_83), (void*)L_195);
		RuntimeObject* L_196 = __this->___MAP_MODE_83;
		float L_197 = __this->___MAPMODE_82_val;
		NullCheck(L_196);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_196, ((int32_t)231), L_197);
		RuntimeObject* L_198;
		L_198 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_198);
		RuntimeObject* L_199;
		L_199 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_198, 5, ((int32_t)-1546394584));
		__this->___SECCOUNTER_85 = L_199;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SECCOUNTER_85), (void*)L_199);
		RuntimeObject* L_200 = __this->___SECCOUNTER_85;
		NullCheck(L_200);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_200, ((int32_t)231), (0.0f));
		RuntimeObject* L_201;
		L_201 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_201);
		RuntimeObject* L_202;
		L_202 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_201, 5, ((int32_t)362));
		__this->___MOVE_MODE_87 = L_202;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_MODE_87), (void*)L_202);
		RuntimeObject* L_203 = __this->___MOVE_MODE_87;
		NullCheck(L_203);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_203, ((int32_t)231), (1.0f));
		RuntimeObject* L_204;
		L_204 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		NullCheck(L_204);
		RuntimeObject* L_205;
		L_205 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_204);
		NullCheck(L_205);
		RuntimeObject* L_206;
		L_206 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_205, ((int32_t)215228298), (bool)1, (bool)1);
		__this->___BLACK_88 = L_206;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLACK_88), (void*)L_206);
		RuntimeObject* L_207;
		L_207 = TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline(__this, NULL);
		RuntimeObject* L_208 = __this->___BLACK_88;
		NullCheck(L_207);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_207, L_208, (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGAME_get_MY_m4665B8349BBD4DFA23B685E683DF8893842771B8 (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGAME_set_MY_m0227DBF3679E495D61A6A03BE2C104F19D46F678 (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGAME_get_THERE_m910741DCF98D09CA58B4B1512026AEE91B0DE625 (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGAME_set_THERE_mEF39E75013192C8D1A77982D443E65D460869183 (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGAME_get__world_m9D1E0B4D256C97693510165D725889A4C65282EC (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGAME_set__world_mC664A95E5FD94543C20E0942F85D4DFB23270E0F (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGAME_get_Current_m0C2D87B232077327D3F36294B4D8C3AFD14A99D2 (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGAME_set_Current_mFFD0F5EEC4B21D451D28620D5978A47C05199101 (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGAME_Reset_mBC65D709F7D4CF8F91A8F6C7CF9438885CF6060C (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGAME__ctor_mCC70EA4AC0243A8F4801CDAF62CF7C1831487552 (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSEGAME__ctor_m08FDC1ABE9A844A2C820319486518B67C7654108 (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CHOOSEGAME_set_MY_m0227DBF3679E495D61A6A03BE2C104F19D46F678_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CHOOSEGAME_set_THERE_mEF39E75013192C8D1A77982D443E65D460869183_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CHOOSEGAME_set__world_mC664A95E5FD94543C20E0942F85D4DFB23270E0F_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHOOSEGAME_MoveNext_m8241577B5786CA87EE7EABAA1DD33C9994066D79 (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_017a;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = CHOOSEGAME_get__world_m9D1E0B4D256C97693510165D725889A4C65282EC_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___SUBMENUITEM_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_1_val = L_4;
		float L_5 = __this->___SUBMENUITEM_1_val;
		bool L_6;
		L_6 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_5, (1.0f), NULL);
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
		L_7 = CHOOSEGAME_get__world_m9D1E0B4D256C97693510165D725889A4C65282EC_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)325927899));
		__this->___SUBMENUITEM_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SUBMENUITEM_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___SUBMENUITEM_3;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___SUBMENUITEM_3_val = L_10;
		float L_11 = __this->___SUBMENUITEM_3_val;
		bool L_12;
		L_12 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_11, (4.0f), NULL);
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		return (bool)0;
	}

IL_0090:
	{
		RuntimeObject* L_13;
		L_13 = CHOOSEGAME_get__world_m9D1E0B4D256C97693510165D725889A4C65282EC_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)371565519), (bool)1, (bool)1);
		__this->___BIP02SND_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP02SND_4), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = CHOOSEGAME_get__world_m9D1E0B4D256C97693510165D725889A4C65282EC_inline(__this, NULL);
		RuntimeObject* L_17 = __this->___BIP02SND_4;
		NullCheck(L_16);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, L_17, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_18;
		L_18 = CHOOSEGAME_get__world_m9D1E0B4D256C97693510165D725889A4C65282EC_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)81), (RuntimeObject*)NULL);
		HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* L_20 = (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A*)il2cpp_codegen_object_new(HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A_il2cpp_TypeInfo_var);
		HIDEMENU__ctor_mDD24C5A9C8F592A3C7E4CAF984260858CDF76851(L_20, NULL);
		V_0 = L_20;
		HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* L_21 = V_0;
		HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* L_22 = L_21;
		RuntimeObject* L_23;
		L_23 = CHOOSEGAME_get_MY_m4665B8349BBD4DFA23B685E683DF8893842771B8_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_22, L_23);
		HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* L_24 = L_22;
		RuntimeObject* L_25;
		L_25 = CHOOSEGAME_get_THERE_m910741DCF98D09CA58B4B1512026AEE91B0DE625_inline(__this, NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_24, L_25);
		RuntimeObject* L_26;
		L_26 = CHOOSEGAME_get__world_m9D1E0B4D256C97693510165D725889A4C65282EC_inline(__this, NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_24, L_26);
		RuntimeObject* L_27;
		L_27 = CHOOSEGAME_get__world_m9D1E0B4D256C97693510165D725889A4C65282EC_inline(__this, NULL);
		HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* L_28 = V_0;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_28);
		RuntimeObject* L_30;
		L_30 = CHOOSEGAME_get__world_m9D1E0B4D256C97693510165D725889A4C65282EC_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_30, 5, ((int32_t)362));
		__this->___MOVE_MODE_9 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_MODE_9), (void*)L_31);
		RuntimeObject* L_32 = __this->___MOVE_MODE_9;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)231), (0.0f));
		float L_33;
		L_33 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_33;
		float L_34 = __this->___startTime1;
		float L_35;
		L_35 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(((int32_t)16), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_34, L_35));
		__this->____cursor = 1;
		goto IL_017a;
	}

IL_016d:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_36 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		CHOOSEGAME_set_Current_mFFD0F5EEC4B21D451D28620D5978A47C05199101_inline(__this, L_36, NULL);
		return (bool)1;
	}

IL_017a:
	{
		float L_37;
		L_37 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_38 = __this->___endTime1;
		if ((((float)L_37) < ((float)L_38)))
		{
			goto IL_016d;
		}
	}
	{
		CHOOSEGAME_set_Current_mFFD0F5EEC4B21D451D28620D5978A47C05199101_inline(__this, NULL, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSESUBMENU_get_MY_mFF7455D77CD47DDFCE07302351BA476B7A1F134D (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSESUBMENU_set_MY_mFBECCAB8EBCCAD2C78AB7DE405B807849C21A4F7 (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSESUBMENU_get_THERE_m87F95DD5BA8D5907698CA4B08CC58DC8B9852E43 (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSESUBMENU_set_THERE_m6A299B236930BC100934D9860A4226387880285F (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679 (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSESUBMENU_set__world_m923AD95C5ACB1FB4DBC0C4F1D874D37ED12FA666 (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CHOOSESUBMENU_get_Current_m98B861849EAC3FD78B979DBE091A2B245C7BB1A2 (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSESUBMENU_set_Current_mE99C240F7EC1AC9D7BCB13994020C236609D3ECE (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSESUBMENU_Reset_m95FFE694E6A04BA48D062529E44E6E1F857564CF (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSESUBMENU__ctor_mB6FB53F86A5805873F74C6D19F360B60EE3FD154 (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHOOSESUBMENU__ctor_m7FDF96959B0D234A5237FA80E87AB33353E34DB3 (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		CHOOSESUBMENU_set_MY_mFBECCAB8EBCCAD2C78AB7DE405B807849C21A4F7_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		CHOOSESUBMENU_set_THERE_m6A299B236930BC100934D9860A4226387880285F_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		CHOOSESUBMENU_set__world_m923AD95C5ACB1FB4DBC0C4F1D874D37ED12FA666_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHOOSESUBMENU_MoveNext_m55ED3ABF9901364B93669497282A67DC03DA9BA6 (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* V_0 = NULL;
	SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* V_1 = NULL;
	SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* V_2 = NULL;
	ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* V_3 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)118534065));
		__this->___MENUITEM_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___MENUITEM_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___MENUITEM_1_val = L_4;
		float L_5 = __this->___MENUITEM_1_val;
		bool L_6;
		L_6 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_5, (1.0f), NULL);
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
		L_7 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)118534065));
		__this->___MENUITEM_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_3), (void*)L_8);
		RuntimeObject* L_9 = __this->___MENUITEM_3;
		NullCheck(L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)231), (bool)1);
		__this->___MENUITEM_3_val = L_10;
		float L_11 = __this->___MENUITEM_3_val;
		bool L_12;
		L_12 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_11, (4.0f), NULL);
		if (!L_12)
		{
			goto IL_008b;
		}
	}
	{
		return (bool)0;
	}

IL_008b:
	{
		RuntimeObject* L_13;
		L_13 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)81), (RuntimeObject*)NULL);
		RuntimeObject* L_15;
		L_15 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)118534065));
		__this->___MENUITEM_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_7), (void*)L_16);
		RuntimeObject* L_17 = __this->___MENUITEM_7;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (bool)1);
		__this->___MENUITEM_7_val = L_18;
		float L_19 = __this->___MENUITEM_7_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_19, (1.0f), NULL);
		if (!L_20)
		{
			goto IL_0118;
		}
	}
	{
		SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* L_21 = (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE*)il2cpp_codegen_object_new(SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE_il2cpp_TypeInfo_var);
		SHOWSOUNDVOLUMEMENU__ctor_m8AD2233DAB721CBE9E8A160AE5359BD11B42F982(L_21, NULL);
		V_0 = L_21;
		SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* L_22 = V_0;
		SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* L_23 = L_22;
		RuntimeObject* L_24;
		L_24 = CHOOSESUBMENU_get_MY_mFF7455D77CD47DDFCE07302351BA476B7A1F134D_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_23, L_24);
		SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* L_25 = L_23;
		RuntimeObject* L_26;
		L_26 = CHOOSESUBMENU_get_THERE_m87F95DD5BA8D5907698CA4B08CC58DC8B9852E43_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_26);
		RuntimeObject* L_27;
		L_27 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_25, L_27);
		RuntimeObject* L_28;
		L_28 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* L_29 = V_0;
		NullCheck(L_28);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_29);
		return (bool)0;
	}

IL_0118:
	{
		RuntimeObject* L_31;
		L_31 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, 5, ((int32_t)118534065));
		__this->___MENUITEM_9 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_9), (void*)L_32);
		RuntimeObject* L_33 = __this->___MENUITEM_9;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)231), (bool)1);
		__this->___MENUITEM_9_val = L_34;
		float L_35 = __this->___MENUITEM_9_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_35, (2.0f), NULL);
		if (!L_36)
		{
			goto IL_0192;
		}
	}
	{
		SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* L_37 = (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6*)il2cpp_codegen_object_new(SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6_il2cpp_TypeInfo_var);
		SHOWSAVEMENU__ctor_m730E61A258C5909A7AAD68B2816C3AF7FB34D4BF(L_37, NULL);
		V_1 = L_37;
		SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* L_38 = V_1;
		SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* L_39 = L_38;
		RuntimeObject* L_40;
		L_40 = CHOOSESUBMENU_get_MY_mFF7455D77CD47DDFCE07302351BA476B7A1F134D_inline(__this, NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_39, L_40);
		SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* L_41 = L_39;
		RuntimeObject* L_42;
		L_42 = CHOOSESUBMENU_get_THERE_m87F95DD5BA8D5907698CA4B08CC58DC8B9852E43_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_43;
		L_43 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		NullCheck(L_41);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_41, L_43);
		RuntimeObject* L_44;
		L_44 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* L_45 = V_1;
		NullCheck(L_44);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_45);
		return (bool)0;
	}

IL_0192:
	{
		RuntimeObject* L_47;
		L_47 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, 5, ((int32_t)118534065));
		__this->___MENUITEM_11 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_11), (void*)L_48);
		RuntimeObject* L_49 = __this->___MENUITEM_11;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)231), (bool)1);
		__this->___MENUITEM_11_val = L_50;
		float L_51 = __this->___MENUITEM_11_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_51, (3.0f), NULL);
		if (!L_52)
		{
			goto IL_020c;
		}
	}
	{
		SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* L_53 = (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365*)il2cpp_codegen_object_new(SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365_il2cpp_TypeInfo_var);
		SHOWLOADMENU__ctor_m0DA6BF91E4E8E1C6392C30322F84512D7059DE21(L_53, NULL);
		V_2 = L_53;
		SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* L_54 = V_2;
		SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* L_55 = L_54;
		RuntimeObject* L_56;
		L_56 = CHOOSESUBMENU_get_MY_mFF7455D77CD47DDFCE07302351BA476B7A1F134D_inline(__this, NULL);
		NullCheck(L_55);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_55, L_56);
		SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* L_57 = L_55;
		RuntimeObject* L_58;
		L_58 = CHOOSESUBMENU_get_THERE_m87F95DD5BA8D5907698CA4B08CC58DC8B9852E43_inline(__this, NULL);
		NullCheck(L_57);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_57, L_58);
		RuntimeObject* L_59;
		L_59 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		NullCheck(L_57);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_57, L_59);
		RuntimeObject* L_60;
		L_60 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* L_61 = V_2;
		NullCheck(L_60);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_60, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_61);
		return (bool)0;
	}

IL_020c:
	{
		RuntimeObject* L_63;
		L_63 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, 5, ((int32_t)118534065));
		__this->___MENUITEM_13 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_13), (void*)L_64);
		RuntimeObject* L_65 = __this->___MENUITEM_13;
		NullCheck(L_65);
		float L_66;
		L_66 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)231), (bool)1);
		__this->___MENUITEM_13_val = L_66;
		float L_67 = __this->___MENUITEM_13_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_67, (4.0f), NULL);
		if (!L_68)
		{
			goto IL_0286;
		}
	}
	{
		ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* L_69 = (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A*)il2cpp_codegen_object_new(ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A_il2cpp_TypeInfo_var);
		ASKFOREXIT__ctor_m492C18B4DD6F45959EFB8ABD9DB3084C03196990(L_69, NULL);
		V_3 = L_69;
		ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* L_70 = V_3;
		ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* L_71 = L_70;
		RuntimeObject* L_72;
		L_72 = CHOOSESUBMENU_get_MY_mFF7455D77CD47DDFCE07302351BA476B7A1F134D_inline(__this, NULL);
		NullCheck(L_71);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_71, L_72);
		ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* L_73 = L_71;
		RuntimeObject* L_74;
		L_74 = CHOOSESUBMENU_get_THERE_m87F95DD5BA8D5907698CA4B08CC58DC8B9852E43_inline(__this, NULL);
		NullCheck(L_73);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_73, L_74);
		RuntimeObject* L_75;
		L_75 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		NullCheck(L_73);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_73, L_75);
		RuntimeObject* L_76;
		L_76 = CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline(__this, NULL);
		ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* L_77 = V_3;
		NullCheck(L_76);
		RuntimeObject* L_78;
		L_78 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_76, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_77);
		return (bool)0;
	}

IL_0286:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SAVEERRORMESSAGE_get_MY_m7550F1157BBA7519BEEBB1C7F54E69E82C8A0499 (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set_MY_m1184B941EDAAF921E19A1748158BB8406094D7BF (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SAVEERRORMESSAGE_get_THERE_mCBC11D4B643AD7F098A5583D9E51E4E1494087E2 (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set_THERE_mB092CB296642E4B7699BB695A128BC140AAEE473 (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SAVEERRORMESSAGE_get__world_m44DDADBE89EE45421717CC031D004307A1602591 (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set__world_m18893C72495CA39B621FA360A969EBE808CD06C3 (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SAVEERRORMESSAGE_get_Current_mE2DBFC3CC65CF1798C54817CF2B6CC200CB8D0D9 (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set_Current_m3526C84D707F7675ACD73E83C6B1B930881CF10F (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_Reset_m8304A2F84C4D1C45828B90F5EEA17895AEE12C61 (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE__ctor_m4C73C0F25D7EE0EF07CAEE68B9EA4BF18A4F636C (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE__ctor_m628AA9F541B16CB7E63A14444FCF936655453430 (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		SAVEERRORMESSAGE_set_MY_m1184B941EDAAF921E19A1748158BB8406094D7BF_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		SAVEERRORMESSAGE_set_THERE_mB092CB296642E4B7699BB695A128BC140AAEE473_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		SAVEERRORMESSAGE_set__world_m18893C72495CA39B621FA360A969EBE808CD06C3_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SAVEERRORMESSAGE_MoveNext_m2A526EF3F4243C3CF9D877616D24E8D6BFE165DB (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
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
		L_3 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(2, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_2, L_3));
		__this->____cursor = 1;
		goto IL_003d;
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		SAVEERRORMESSAGE_set_Current_m3526C84D707F7675ACD73E83C6B1B930881CF10F_inline(__this, L_4, NULL);
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
		SAVEERRORMESSAGE_set_Current_m3526C84D707F7675ACD73E83C6B1B930881CF10F_inline(__this, NULL, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXITGAME_get_MY_mF05C1C29AD9D6050CD5EA0B075DD78A1FCDC7421 (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXITGAME_set_MY_mC35AC2A3D2358E7A3CDFED9CCFD8BE8E87ED9146 (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXITGAME_get_THERE_m060BA0F619EEE4B0BBA08AFD2B32B613425A3249 (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXITGAME_set_THERE_m64C5CBFDC25E1BF8D3F8B7F05114D603A0E86093 (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXITGAME_get__world_m377DD7BD4EF224D154473DC40CB056E1ABDBD443 (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXITGAME_set__world_mCA151536C4B47CC5DD09B0710AC895485FECB6FA (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXITGAME_get_Current_mAFF11B16C9FD641674A4CB47F84FD15B81375197 (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXITGAME_set_Current_m2BE9F988A298E4CAB15D610531B91E6CE570C9C6 (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXITGAME_Reset_mB12B2F5B26821C868771E376FF4FCD0380AD704F (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXITGAME__ctor_mC6E4360AC094C1140AE8D446397CEB76EC4711B3 (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXITGAME__ctor_m600CA613338A1F2476410660F3F2CF3A91F32C49 (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		EXITGAME_set_MY_mC35AC2A3D2358E7A3CDFED9CCFD8BE8E87ED9146_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		EXITGAME_set_THERE_m64C5CBFDC25E1BF8D3F8B7F05114D603A0E86093_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		EXITGAME_set__world_mCA151536C4B47CC5DD09B0710AC895485FECB6FA_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EXITGAME_MoveNext_m27E40A5C5D1FBAE2E6FA03AD831A2A736BC8E983 (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = EXITGAME_get__world_m377DD7BD4EF224D154473DC40CB056E1ABDBD443_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)362));
		__this->___MOVE_MODE_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_MODE_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___MOVE_MODE_1;
		NullCheck(L_3);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (1.0f));
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_4;
		float L_5 = __this->___startTime1;
		float L_6;
		L_6 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(((int32_t)16), NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_5, L_6));
		__this->____cursor = 1;
		goto IL_006a;
	}

IL_005d:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_7 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		EXITGAME_set_Current_m2BE9F988A298E4CAB15D610531B91E6CE570C9C6_inline(__this, L_7, NULL);
		return (bool)1;
	}

IL_006a:
	{
		float L_8;
		L_8 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_9 = __this->___endTime1;
		if ((((float)L_8) < ((float)L_9)))
		{
			goto IL_005d;
		}
	}
	{
		EXITGAME_set_Current_m2BE9F988A298E4CAB15D610531B91E6CE570C9C6_inline(__this, NULL, NULL);
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RESETANSWER_get_MY_mA522E634FC9A607BF118F7704683FB9833B4BBBE (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESETANSWER_set_MY_m3CF5D8CA33642338735DA3A839DA19532D382CFD (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RESETANSWER_get_THERE_mF4032FF2552FA2B6BE266A7F1B8C7FAEB5DF0EF2 (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESETANSWER_set_THERE_m03045DBFC2AB06E687C14666AEB83ACAED4D7660 (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RESETANSWER_get__world_mF799DC6155BEADC933B9559C6AD326E6CCA8D4F9 (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESETANSWER_set__world_m9C0C837D76E832479176BECBF8385105D7E38C5F (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RESETANSWER_get_Current_m2DCF138606FB1B842933A6272435A284C1F86856 (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESETANSWER_set_Current_m4F2E6BE39CB08A712230DFAD8E5DD62AB9BD002C (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESETANSWER_Reset_m0CBC687FDF1A63296D24CD2AB12DE867834C378C (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESETANSWER__ctor_m268687A1D337C904514BBC244C3CDD3644490321 (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RESETANSWER__ctor_mC1497D89F7A1AFED6AB8D14C6A220CD3E5AE9AF8 (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		RESETANSWER_set_MY_m3CF5D8CA33642338735DA3A839DA19532D382CFD_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		RESETANSWER_set_THERE_m03045DBFC2AB06E687C14666AEB83ACAED4D7660_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		RESETANSWER_set__world_m9C0C837D76E832479176BECBF8385105D7E38C5F_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RESETANSWER_MoveNext_mE388677B95834C2786CC7D69AACC1A10D80F9E09 (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = RESETANSWER_get__world_mF799DC6155BEADC933B9559C6AD326E6CCA8D4F9_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)371565519), (bool)1, (bool)1);
		__this->___BIP02SND_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP02SND_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = RESETANSWER_get__world_mF799DC6155BEADC933B9559C6AD326E6CCA8D4F9_inline(__this, NULL);
		RuntimeObject* L_5 = __this->___BIP02SND_0;
		NullCheck(L_4);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, L_5, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_6;
		L_6 = RESETANSWER_get__world_mF799DC6155BEADC933B9559C6AD326E6CCA8D4F9_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)37), (RuntimeObject*)NULL);
		RuntimeObject* L_8;
		L_8 = RESETANSWER_get__world_mF799DC6155BEADC933B9559C6AD326E6CCA8D4F9_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)66), (RuntimeObject*)NULL);
		HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* L_10 = (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A*)il2cpp_codegen_object_new(HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A_il2cpp_TypeInfo_var);
		HIDEMENU__ctor_mDD24C5A9C8F592A3C7E4CAF984260858CDF76851(L_10, NULL);
		V_0 = L_10;
		HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* L_11 = V_0;
		HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* L_12 = L_11;
		RuntimeObject* L_13;
		L_13 = RESETANSWER_get_MY_mA522E634FC9A607BF118F7704683FB9833B4BBBE_inline(__this, NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_12, L_13);
		HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* L_14 = L_12;
		RuntimeObject* L_15;
		L_15 = RESETANSWER_get_THERE_mF4032FF2552FA2B6BE266A7F1B8C7FAEB5DF0EF2_inline(__this, NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16;
		L_16 = RESETANSWER_get__world_mF799DC6155BEADC933B9559C6AD326E6CCA8D4F9_inline(__this, NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_14, L_16);
		RuntimeObject* L_17;
		L_17 = RESETANSWER_get__world_mF799DC6155BEADC933B9559C6AD326E6CCA8D4F9_inline(__this, NULL);
		HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* L_18 = V_0;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_17, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_18);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ASKFOREXIT_get_MY_m95ACA3F4FD0092A81AA8C34078D8CCD2BE9107B5 (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASKFOREXIT_set_MY_m2A63FC5A387D9FBC2EB0A1B0DB2DB5F50797F010 (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ASKFOREXIT_get_THERE_mCF79AA89EB968931AFEEBC9664947FFE97C2593E (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASKFOREXIT_set_THERE_m4261B0FFEEE6437E575D185F11CBD7F54664AB29 (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASKFOREXIT_set__world_m12A9C0E2FB16483C27310D89073097AE499F85C0 (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ASKFOREXIT_get_Current_m4E9F68467F3285C910831138C7DE5F68E7A7C114 (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASKFOREXIT_set_Current_m9CFB93223766DF631260D7C3577D0FA9FCAF808E (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASKFOREXIT_Reset_m86635302077F5A1261F3AED54F9EE66760B7283D (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASKFOREXIT__ctor_m492C18B4DD6F45959EFB8ABD9DB3084C03196990 (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASKFOREXIT__ctor_m83DF2F15DCC1E89E26EDFA80F38F180E71602DBD (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		ASKFOREXIT_set_MY_m2A63FC5A387D9FBC2EB0A1B0DB2DB5F50797F010_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		ASKFOREXIT_set_THERE_m4261B0FFEEE6437E575D185F11CBD7F54664AB29_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		ASKFOREXIT_set__world_m12A9C0E2FB16483C27310D89073097AE499F85C0_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ASKFOREXIT_MoveNext_mCE1FC9A38ED422E225D9E8CBFB0B3439FBC5EB4A (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) 
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
		L_1 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)371601456), (bool)1, (bool)1);
		__this->___BIP03SND_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP03SND_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		RuntimeObject* L_5 = __this->___BIP03SND_0;
		NullCheck(L_4);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, L_5, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_6;
		L_6 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)91537234), (bool)1, (bool)1);
		__this->___ASKFOREXITTEXT_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ASKFOREXITTEXT_2), (void*)L_8);
		RuntimeObject* L_9;
		L_9 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_11 = __this->___ASKFOREXITTEXT_2;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)129), L_11);
		RuntimeObject* L_12;
		L_12 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)105), (RuntimeObject*)NULL);
		RuntimeObject* L_14;
		L_14 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)106), (RuntimeObject*)NULL);
		RuntimeObject* L_16;
		L_16 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)107), (RuntimeObject*)NULL);
		RuntimeObject* L_18;
		L_18 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_19);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)108), (RuntimeObject*)NULL);
		RuntimeObject* L_20;
		L_20 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)1339506369), (bool)1, (bool)1);
		__this->___EXITGAME_13 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXITGAME_13), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		RuntimeObject* L_25 = __this->___EXITGAME_13;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)66), L_25);
		RuntimeObject* L_26;
		L_26 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)1339506369), (bool)1, (bool)1);
		__this->___EXITGAME_15 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXITGAME_15), (void*)L_28);
		RuntimeObject* L_29;
		L_29 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_29);
		RuntimeObject* L_31 = __this->___EXITGAME_15;
		NullCheck(L_30);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_30, ((int32_t)71), L_31);
		RuntimeObject* L_32;
		L_32 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)192524992), (bool)1, (bool)1);
		__this->___RESETANSWER_17 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RESETANSWER_17), (void*)L_34);
		RuntimeObject* L_35;
		L_35 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_35);
		RuntimeObject* L_37 = __this->___RESETANSWER_17;
		NullCheck(L_36);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_36, ((int32_t)61), L_37);
		RuntimeObject* L_38;
		L_38 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)-2036377556), (bool)1, (bool)1);
		__this->___HLP02STR_19 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HLP02STR_19), (void*)L_40);
		RuntimeObject* L_41;
		L_41 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		RuntimeObject* L_42 = __this->___HLP02STR_19;
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_41, ((int32_t)361798934), L_42);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_43 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_43, NULL);
		V_0 = L_43;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_44 = V_0;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_45 = L_44;
		RuntimeObject* L_46;
		L_46 = ASKFOREXIT_get_MY_m95ACA3F4FD0092A81AA8C34078D8CCD2BE9107B5_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_46);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_47 = L_45;
		RuntimeObject* L_48;
		L_48 = ASKFOREXIT_get_THERE_mCF79AA89EB968931AFEEBC9664947FFE97C2593E_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		RuntimeObject* L_49;
		L_49 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_49);
		RuntimeObject* L_50;
		L_50 = ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_51 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENDOFLEVEL_get_MY_m12E825EE690DCA3907B10F6DBE1D004A5B565D37 (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDOFLEVEL_set_MY_mEA7689E7F5246E6B71B10D89E90AA5F11E8D4CB9 (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENDOFLEVEL_get_THERE_m8B60CDFD95470C2C6BA4A460F893C469EB922A18 (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDOFLEVEL_set_THERE_mADC9069F76DF25EBE1B03E7CB4A02F272FFD5C90 (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668 (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDOFLEVEL_set__world_m22B431F389865B18D58B48ED0E7F8D67C06C2997 (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ENDOFLEVEL_get_Current_m1C2AED82FF2FC6EBE1BF91B38EA7BCB1DF7DD1BA (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDOFLEVEL_set_Current_m4CC0583F26B094287ADA5E60512375DF83DC8868 (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDOFLEVEL_Reset_mB0B480078A58F6D20121A612FF4298733C0B7CC1 (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDOFLEVEL__ctor_m38A99CE3219D7292F2047E5A82BE6FDF35D76E2A (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENDOFLEVEL__ctor_m4CB5B8DD6BEB9FAB2B6737D2D004B7F4C8176B8C (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		ENDOFLEVEL_set_MY_mEA7689E7F5246E6B71B10D89E90AA5F11E8D4CB9_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		ENDOFLEVEL_set_THERE_mADC9069F76DF25EBE1B03E7CB4A02F272FFD5C90_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		ENDOFLEVEL_set__world_m22B431F389865B18D58B48ED0E7F8D67C06C2997_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ENDOFLEVEL_MoveNext_m1BFEA3A72EE499235EF35FB067D953447AEBB9C8 (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_1 = NULL;
	DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* V_2 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_02ee;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_03f5;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_3, 5, ((int32_t)362));
		__this->___MOVE_MODE_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MOVE_MODE_1), (void*)L_4);
		RuntimeObject* L_5 = __this->___MOVE_MODE_1;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)231), (1.0f));
		RuntimeObject* L_6;
		L_6 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)215228298), (bool)1, (bool)1);
		__this->___BLACK_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BLACK_2), (void*)L_8);
		RuntimeObject* L_9;
		L_9 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		RuntimeObject* L_10 = __this->___BLACK_2;
		NullCheck(L_9);
		InterfaceActionInvoker2< RuntimeObject*, float >::Invoke(25, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, L_10, (0.400000006f));
		RuntimeObject* L_11;
		L_11 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)371601456), (bool)1, (bool)1);
		__this->___BIP03SND_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BIP03SND_4), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		RuntimeObject* L_15 = __this->___BIP03SND_4;
		NullCheck(L_14);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_14, L_15, (0.5f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		RuntimeObject* L_16;
		L_16 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, 5, ((int32_t)118534065));
		__this->___MENUITEM_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUITEM_7), (void*)L_17);
		RuntimeObject* L_18 = __this->___MENUITEM_7;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)231), (3.0f));
		RuntimeObject* L_19;
		L_19 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)-1524669481));
		__this->___MAXMENUITEM_9 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAXMENUITEM_9), (void*)L_20);
		RuntimeObject* L_21 = __this->___MAXMENUITEM_9;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), (3.0f));
		RuntimeObject* L_22;
		L_22 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)-2059579684), (bool)1, (bool)1);
		__this->___HIDEMENU_10 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIDEMENU_10), (void*)L_24);
		RuntimeObject* L_25;
		L_25 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_25);
		RuntimeObject* L_27 = __this->___HIDEMENU_10;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)82), L_27);
		RuntimeObject* L_28;
		L_28 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_29);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)105), (RuntimeObject*)NULL);
		RuntimeObject* L_30;
		L_30 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)106), (RuntimeObject*)NULL);
		RuntimeObject* L_32;
		L_32 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_32);
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)107), (RuntimeObject*)NULL);
		RuntimeObject* L_34;
		L_34 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)108), (RuntimeObject*)NULL);
		RuntimeObject* L_36;
		L_36 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_36);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)-375746894), (bool)1, (bool)1);
		__this->___MENUPANEL_20 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MENUPANEL_20), (void*)L_38);
		RuntimeObject* L_39;
		L_39 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_39);
		RuntimeObject* L_41 = __this->___MENUPANEL_20;
		NullCheck(L_40);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)145), L_41);
		RuntimeObject* L_42;
		L_42 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_43, ((int32_t)1780034721), (bool)1, (bool)1);
		__this->___PLEASEWAITTEXT_23 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLEASEWAITTEXT_23), (void*)L_44);
		RuntimeObject* L_45;
		L_45 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_45);
		RuntimeObject* L_47 = __this->___PLEASEWAITTEXT_23;
		NullCheck(L_46);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_46, ((int32_t)129), L_47);
		RuntimeObject* L_48;
		L_48 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_48, ((int32_t)270057211), (bool)0);
		__this->___LEVEL_STRING_27 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LEVEL_STRING_27), (void*)L_49);
		RuntimeObject* L_50 = __this->___LEVEL_STRING_27;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_50, (RuntimeObject*)NULL, NULL);
		if (!L_51)
		{
			goto IL_035c;
		}
	}
	{
		RuntimeObject* L_52;
		L_52 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)-1660174930), (bool)1, (bool)1);
		__this->___LOAD08STR_28 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOAD08STR_28), (void*)L_54);
		RuntimeObject* L_55;
		L_55 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		RuntimeObject* L_56 = __this->___LOAD08STR_28;
		NullCheck(L_55);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, ((int32_t)361798934), L_56);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_57 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_57, NULL);
		V_1 = L_57;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_58 = V_1;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_59 = L_58;
		RuntimeObject* L_60;
		L_60 = ENDOFLEVEL_get_MY_m12E825EE690DCA3907B10F6DBE1D004A5B565D37_inline(__this, NULL);
		NullCheck(L_59);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_59, L_60);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_61 = L_59;
		RuntimeObject* L_62;
		L_62 = ENDOFLEVEL_get_THERE_m8B60CDFD95470C2C6BA4A460F893C469EB922A18_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_62);
		RuntimeObject* L_63;
		L_63 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_61);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_61, L_63);
		RuntimeObject* L_64;
		L_64 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_65 = V_1;
		NullCheck(L_64);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_64, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_65);
		RuntimeObject* L_67;
		L_67 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_67, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_31 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_31), (void*)L_68);
		RuntimeObject* L_69 = __this->___PLAYER_HEALTH_31;
		NullCheck(L_69);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)231), (100.0f));
		float L_70;
		L_70 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_70;
		float L_71 = __this->___startTime1;
		float L_72;
		L_72 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_71, L_72));
		__this->____cursor = 1;
		goto IL_02ee;
	}

IL_02e1:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_73 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		ENDOFLEVEL_set_Current_m4CC0583F26B094287ADA5E60512375DF83DC8868_inline(__this, L_73, NULL);
		return (bool)1;
	}

IL_02ee:
	{
		float L_74;
		L_74 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_75 = __this->___endTime1;
		if ((((float)L_74) < ((float)L_75)))
		{
			goto IL_02e1;
		}
	}
	{
		ENDOFLEVEL_set_Current_m4CC0583F26B094287ADA5E60512375DF83DC8868_inline(__this, NULL, NULL);
		RuntimeObject* L_76;
		L_76 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_76);
		RuntimeObject* L_77;
		L_77 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_76, 5, ((int32_t)1469755439));
		__this->___PLAYER_HEALTH_34 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_HEALTH_34), (void*)L_77);
		RuntimeObject* L_78 = __this->___PLAYER_HEALTH_34;
		NullCheck(L_78);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_78, ((int32_t)231), (100.0f));
		RuntimeObject* L_79;
		L_79 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_79);
		NullCheck(L_80);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_80, ((int32_t)145), (RuntimeObject*)NULL);
		RuntimeObject* L_81;
		L_81 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_81);
		RuntimeObject* L_82;
		L_82 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_81);
		NullCheck(L_82);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_82, ((int32_t)129), (RuntimeObject*)NULL);
		return (bool)0;
	}

IL_035c:
	{
		RuntimeObject* L_83;
		L_83 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_83, ((int32_t)1876859747), (bool)0);
		__this->___LOAD_STRING_41 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOAD_STRING_41), (void*)L_84);
		RuntimeObject* L_85;
		L_85 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		RuntimeObject* L_86 = __this->___LOAD_STRING_41;
		NullCheck(L_85);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_85, ((int32_t)361798934), L_86);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_87 = (DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04*)il2cpp_codegen_object_new(DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04_il2cpp_TypeInfo_var);
		DISPLAYMESSAGE__ctor_m60BFE60F7146B05513EDF4FAA196B6660245B4A9(L_87, NULL);
		V_2 = L_87;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_88 = V_2;
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_89 = L_88;
		RuntimeObject* L_90;
		L_90 = ENDOFLEVEL_get_MY_m12E825EE690DCA3907B10F6DBE1D004A5B565D37_inline(__this, NULL);
		NullCheck(L_89);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_89, L_90);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_91 = L_89;
		RuntimeObject* L_92;
		L_92 = ENDOFLEVEL_get_THERE_m8B60CDFD95470C2C6BA4A460F893C469EB922A18_inline(__this, NULL);
		NullCheck(L_91);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_91, L_92);
		RuntimeObject* L_93;
		L_93 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		NullCheck(L_91);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_91, L_93);
		RuntimeObject* L_94;
		L_94 = ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline(__this, NULL);
		DISPLAYMESSAGE_tC91A109A214E45E80457B2517FFA411B1CC85F04* L_95 = V_2;
		NullCheck(L_94);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_94, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_95);
		float L_97;
		L_97 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime2 = L_97;
		float L_98 = __this->___startTime2;
		float L_99;
		L_99 = TimeUtils_TicksToTime_m83F4425B60D702BCA805F82CB7BFAE435C4CEB3F(2, NULL);
		__this->___endTime2 = ((float)il2cpp_codegen_add(L_98, L_99));
		__this->____cursor = 2;
		goto IL_03f5;
	}

IL_03e8:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_100 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		ENDOFLEVEL_set_Current_m4CC0583F26B094287ADA5E60512375DF83DC8868_inline(__this, L_100, NULL);
		return (bool)1;
	}

IL_03f5:
	{
		float L_101;
		L_101 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_102 = __this->___endTime2;
		if ((((float)L_101) < ((float)L_102)))
		{
			goto IL_03e8;
		}
	}
	{
		ENDOFLEVEL_set_Current_m4CC0583F26B094287ADA5E60512375DF83DC8868_inline(__this, NULL, NULL);
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSTART_get_MY_m2768FB807EB449405DB98121F0AD9C996F4ABAB8 (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSTART_set_MY_m0C0C4FD5EB3CDA58B36764C0FDE95B0C52B80B1F (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSTART_get_THERE_m33BB782EF7A64CF8AD39A2B1E59DE30CCD0B567E (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSTART_set_THERE_m744F2BA6111DA88171C00B5C787942CC72F6C0B2 (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSTART_get__world_mE18F913F2A207ED83B4CC37B1A29DD982323C719 (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSTART_set__world_m24F2250A093C17BE32CD8D9F9ED8BE3A6EEE69B4 (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSTART_get_Current_m8759B80736EB9DA93D3C77C3A95563D9D506123B (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSTART_set_Current_mCE263A5B7DF75DA1BFC3125829A13C2FC0073FA5 (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSTART_Reset_m7DE50A59626DE9905F4F0DEEEC171216DDC1E256 (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSTART__ctor_m1E6A004B826DFE8DA3DF089EB16AF22DD8CF2A56 (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSTART__ctor_m1D723F7B9C11FF1DE0B8BEC492C15769ECDFA601 (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		EXPLOSIONSTART_set_MY_m0C0C4FD5EB3CDA58B36764C0FDE95B0C52B80B1F_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		EXPLOSIONSTART_set_THERE_m744F2BA6111DA88171C00B5C787942CC72F6C0B2_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		EXPLOSIONSTART_set__world_m24F2250A093C17BE32CD8D9F9ED8BE3A6EEE69B4_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EXPLOSIONSTART_MoveNext_m0552D61014B4DE91918BC9E22120311C3C422626 (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = EXPLOSIONSTART_get_MY_m2768FB807EB449405DB98121F0AD9C996F4ABAB8_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = EXPLOSIONSTART_get__world_mE18F913F2A207ED83B4CC37B1A29DD982323C719_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)277450317), (bool)1, (bool)1);
		__this->___EXPLOSIONSMOKE_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSIONSMOKE_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = EXPLOSIONSTART_get_MY_m2768FB807EB449405DB98121F0AD9C996F4ABAB8_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___EXPLOSIONSMOKE_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)190), L_8);
		FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* L_9 = (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6*)il2cpp_codegen_object_new(FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6_il2cpp_TypeInfo_var);
		FLASHREGION__ctor_m0F7AECCE826CDDBE2B9C873B5123CF3EEE577CCF(L_9, NULL);
		V_0 = L_9;
		FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* L_10 = V_0;
		FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* L_11 = L_10;
		RuntimeObject* L_12;
		L_12 = EXPLOSIONSTART_get_MY_m2768FB807EB449405DB98121F0AD9C996F4ABAB8_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_11, L_12);
		FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* L_13 = L_11;
		RuntimeObject* L_14;
		L_14 = EXPLOSIONSTART_get_THERE_m33BB782EF7A64CF8AD39A2B1E59DE30CCD0B567E_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_14);
		RuntimeObject* L_15;
		L_15 = EXPLOSIONSTART_get__world_mE18F913F2A207ED83B4CC37B1A29DD982323C719_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_13, L_15);
		RuntimeObject* L_16;
		L_16 = EXPLOSIONSTART_get__world_mE18F913F2A207ED83B4CC37B1A29DD982323C719_inline(__this, NULL);
		FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* L_17 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSMOKE_get_MY_mC538E97C93C95D2E42993FEE28FAF1C372D9BC4C (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE_set_MY_m291420F8932BDF7FC7FC07C0BCA82F114F7B2067 (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSMOKE_get_THERE_mD431240CC6097B58B694B7AB52A3E073FD88A0D8 (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE_set_THERE_m9F733AEBB9349B2A711CB100846A236828AD629F (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSMOKE_get__world_mA9374F58A6A106F84AF0CDF85D9C7D20D0C1C9CC (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE_set__world_m9A1FADCCC5558FCA3E89FD66D905DEDD7C17D81F (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSMOKE_get_Current_mC8A016CBA4CE7EE9A720FC5BFB0412C124D76F5F (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE_set_Current_mE9868FDEC56268194941A88391F214797E5E9EA2 (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE_Reset_mA24EF0CB5D85F96AB9573D39E4D8755909AD165B (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE__ctor_m4C9E00395C885EE37E50BB323B8D828628C6BDC4 (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE__ctor_m80A5BAAD821B20AF3C6E21AB79B5AF53788B9CB8 (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		EXPLOSIONSMOKE_set_MY_m291420F8932BDF7FC7FC07C0BCA82F114F7B2067_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		EXPLOSIONSMOKE_set_THERE_m9F733AEBB9349B2A711CB100846A236828AD629F_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		EXPLOSIONSMOKE_set__world_m9A1FADCCC5558FCA3E89FD66D905DEDD7C17D81F_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EXPLOSIONSMOKE_MoveNext_m5C3BD3C2C9645BDC546E944702CCC0849F07F917 (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, const RuntimeMethod* method) 
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
		L_1 = EXPLOSIONSMOKE_get__world_mA9374F58A6A106F84AF0CDF85D9C7D20D0C1C9CC_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)269389709), (bool)1, (bool)1);
		__this->___EXP01ATEX_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXP01ATEX_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = EXPLOSIONSMOKE_get_MY_mC538E97C93C95D2E42993FEE28FAF1C372D9BC4C_inline(__this, NULL);
		__this->___MY_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_4);
		RuntimeObject* L_5 = __this->___MY_2;
		RuntimeObject* L_6 = __this->___EXP01ATEX_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)164), L_6);
		RuntimeObject* L_7;
		L_7 = EXPLOSIONSMOKE_get__world_mA9374F58A6A106F84AF0CDF85D9C7D20D0C1C9CC_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)-942364763), (bool)1, (bool)1);
		__this->___EXPLOSIONEND_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSIONEND_3), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = EXPLOSIONSMOKE_get_MY_mC538E97C93C95D2E42993FEE28FAF1C372D9BC4C_inline(__this, NULL);
		__this->___MY_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_5;
		RuntimeObject* L_12 = __this->___EXPLOSIONEND_3;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)190), L_12);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONEND_get_MY_m14801B9751E55813203AED53A990E3DBC6A64B1D (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONEND_set_MY_m15A6EB7C5298C0306A50A6BD8169EEAC1C4A67F2 (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONEND_get_THERE_m08AB84F170BAC5704C42748525D82614C5E93606 (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONEND_set_THERE_mE1EA0A58BFD6812F5E6E38C05DB0DFAF951EB5D6 (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONEND_get__world_m816275AAE8864544E90D0932A4D3B8CD92A9C77C (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONEND_set__world_mA2B7CC47933CDDAD574A0607577C1571AE2C6515 (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONEND_get_Current_m3CF894E78BD24FB01BF3B546D975BBCFE0232DA9 (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONEND_set_Current_m71E4007E559DBAE0A3C7AC7D62DAC59F528F909B (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONEND_Reset_m8C59D7F2297674BDA56D5B4242808A0460F5BE2A (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONEND__ctor_m295C816AD409477062A47220F82121BEFA16CAB2 (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLOSIONEND__ctor_mBFBC4A9D5CB3DFBD584CF36CA5FEFC6A62173536 (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		EXPLOSIONEND_set_MY_m15A6EB7C5298C0306A50A6BD8169EEAC1C4A67F2_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		EXPLOSIONEND_set_THERE_mE1EA0A58BFD6812F5E6E38C05DB0DFAF951EB5D6_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		EXPLOSIONEND_set__world_mA2B7CC47933CDDAD574A0607577C1571AE2C6515_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EXPLOSIONEND_MoveNext_m5EEE7AD48B0A6579AE523E6BE218EC47482AD2DC (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = EXPLOSIONEND_get_MY_m14801B9751E55813203AED53A990E3DBC6A64B1D_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)190), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = EXPLOSIONEND_get_MY_m14801B9751E55813203AED53A990E3DBC6A64B1D_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)204), (1.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2 (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODETARGET_set_MY_m18625CFB1D3D11D7F22E82BBDE5A5A297B2AD340 (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLODETARGET_get_THERE_m63FA45BCC9DAA2DC34F5FA7C7432E1C9F89B40AE (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODETARGET_set_THERE_m972CA3D7666368A5C2A4EACE25D020A706A3FA0A (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLODETARGET_get__world_m4BDCE32CF9DE3ECC889FD48FC4C6CC6F10671E1B (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODETARGET_set__world_mF51C11DDA7C1F576D27D6B1B17C305B3A6352590 (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLODETARGET_get_Current_mA717FABE0309836F38B13B3084F440EDF84E01E2 (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODETARGET_set_Current_m1723A7BD2B15C83BEA00603F1F766E9765A1F56B (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODETARGET_Reset_m003B0500B50D9FB58378467E1308DEB92BC36B03 (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODETARGET__ctor_mD7A16A62C5912F29F1916E09F5400C8660EDD057 (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODETARGET__ctor_mA8FDE6E317692256E167C5583C715D3DE7421098 (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		EXPLODETARGET_set_MY_m18625CFB1D3D11D7F22E82BBDE5A5A297B2AD340_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		EXPLODETARGET_set_THERE_m972CA3D7666368A5C2A4EACE25D020A706A3FA0A_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		EXPLODETARGET_set__world_mF51C11DDA7C1F576D27D6B1B17C305B3A6352590_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EXPLODETARGET_MoveNext_m67B05516DD76E40A76AEA5CE5A9589F1986D17DA (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* G_B1_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_0021;
		}
		G_B1_0 = L_3;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_002d;
	}

IL_0021:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B2_0, ((int32_t)199), (bool)1, (bool)1);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
	}

IL_002d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___temp_3 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___temp_3), (void*)G_B3_0);
		RuntimeObject* L_5 = __this->___temp_3;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_5, (RuntimeObject*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0042:
	{
		RuntimeObject* L_7;
		L_7 = EXPLODETARGET_get__world_m4BDCE32CF9DE3ECC889FD48FC4C6CC6F10671E1B_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_7, 5, ((int32_t)-233444578));
		__this->___SQRTARGETDIST_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SQRTARGETDIST_4), (void*)L_8);
		RuntimeObject* L_9;
		L_9 = EXPLODETARGET_get__world_m4BDCE32CF9DE3ECC889FD48FC4C6CC6F10671E1B_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)-233444578));
		__this->___SQRTARGETDIST_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SQRTARGETDIST_5), (void*)L_10);
		RuntimeObject* L_11 = __this->___SQRTARGETDIST_5;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___SQRTARGETDIST_5_val = L_12;
		RuntimeObject* L_13;
		L_13 = EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline(__this, NULL);
		__this->___MY_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_9), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_9;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)217), (bool)1);
		__this->___temp_10 = L_15;
		RuntimeObject* L_16;
		L_16 = EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline(__this, NULL);
		__this->___MY_13 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_13), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_13;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)195), (bool)1);
		__this->___temp_14 = L_18;
		RuntimeObject* L_19;
		L_19 = EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline(__this, NULL);
		__this->___MY_19 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_19), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_19;
		NullCheck(L_20);
		float L_21;
		L_21 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)217), (bool)1);
		__this->___temp_20 = L_21;
		RuntimeObject* L_22;
		L_22 = EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline(__this, NULL);
		__this->___MY_23 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_23), (void*)L_22);
		RuntimeObject* L_23 = __this->___MY_23;
		NullCheck(L_23);
		float L_24;
		L_24 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)195), (bool)1);
		__this->___temp_24 = L_24;
		RuntimeObject* L_25;
		L_25 = EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline(__this, NULL);
		__this->___MY_31 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_31;
		NullCheck(L_26);
		float L_27;
		L_27 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)218), (bool)1);
		__this->___temp_32 = L_27;
		RuntimeObject* L_28;
		L_28 = EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline(__this, NULL);
		__this->___MY_35 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_35), (void*)L_28);
		RuntimeObject* L_29 = __this->___MY_35;
		NullCheck(L_29);
		float L_30;
		L_30 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)196), (bool)1);
		__this->___temp_36 = L_30;
		RuntimeObject* L_31;
		L_31 = EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline(__this, NULL);
		__this->___MY_41 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_41), (void*)L_31);
		RuntimeObject* L_32 = __this->___MY_41;
		NullCheck(L_32);
		float L_33;
		L_33 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)218), (bool)1);
		__this->___temp_42 = L_33;
		RuntimeObject* L_34;
		L_34 = EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline(__this, NULL);
		__this->___MY_45 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_45), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_45;
		NullCheck(L_35);
		float L_36;
		L_36 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)196), (bool)1);
		__this->___temp_46 = L_36;
		RuntimeObject* L_37 = __this->___SQRTARGETDIST_4;
		float L_38 = __this->___temp_10;
		float L_39 = __this->___temp_14;
		float L_40 = __this->___temp_20;
		float L_41 = __this->___temp_24;
		float L_42 = __this->___temp_32;
		float L_43 = __this->___temp_36;
		float L_44 = __this->___temp_42;
		float L_45 = __this->___temp_46;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_38, L_39)), ((float)il2cpp_codegen_subtract(L_40, L_41)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_42, L_43)), ((float)il2cpp_codegen_subtract(L_44, L_45)))))));
		RuntimeObject* L_46;
		L_46 = EXPLODETARGET_get__world_m4BDCE32CF9DE3ECC889FD48FC4C6CC6F10671E1B_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, 5, ((int32_t)-233444578));
		__this->___SQRTARGETDIST_50 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SQRTARGETDIST_50), (void*)L_47);
		RuntimeObject* L_48 = __this->___SQRTARGETDIST_50;
		NullCheck(L_48);
		float L_49;
		L_49 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)231), (bool)1);
		__this->___SQRTARGETDIST_50_val = L_49;
		float L_50 = __this->___SQRTARGETDIST_50_val;
		bool L_51;
		L_51 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_50, (64.0f), NULL);
		if (!L_51)
		{
			goto IL_0228;
		}
	}
	{
		return (bool)0;
	}

IL_0228:
	{
		EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* L_52 = (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B*)il2cpp_codegen_object_new(EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B_il2cpp_TypeInfo_var);
		EXPLODEMISSILE__ctor_m8D3480E700813C5D23B32445C9F12E831418C2CD(L_52, NULL);
		V_0 = L_52;
		EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* L_53 = V_0;
		EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* L_54 = L_53;
		RuntimeObject* L_55;
		L_55 = EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline(__this, NULL);
		NullCheck(L_54);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_54, L_55);
		EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* L_56 = L_54;
		RuntimeObject* L_57;
		L_57 = EXPLODETARGET_get_THERE_m63FA45BCC9DAA2DC34F5FA7C7432E1C9F89B40AE_inline(__this, NULL);
		NullCheck(L_56);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_56, L_57);
		RuntimeObject* L_58;
		L_58 = EXPLODETARGET_get__world_m4BDCE32CF9DE3ECC889FD48FC4C6CC6F10671E1B_inline(__this, NULL);
		NullCheck(L_56);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_56, L_58);
		RuntimeObject* L_59;
		L_59 = EXPLODETARGET_get__world_m4BDCE32CF9DE3ECC889FD48FC4C6CC6F10671E1B_inline(__this, NULL);
		EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* L_60 = V_0;
		NullCheck(L_59);
		RuntimeObject* L_61;
		L_61 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_60);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879 (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set_MY_mE5638C5A55A475F5E85B13C8A314B41643AD3F9E (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLODEMISSILE_get_THERE_mF81904D64263EFC0C4687825610AFAC5C3C7674D (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set_THERE_mD71A2141ADA22454FC04909DB9AC2AB7FE09B355 (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set__world_mE29389DDF0E7729CAC53A6CF6A53E73ACAAA9F45 (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EXPLODEMISSILE_get_Current_mAB8D135ED3D453700A24D6BBB62CFD4A71319549 (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set_Current_mC6F43E9C44C1BE2615CE60F8A4AF3DDE9FE7E2CB (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODEMISSILE_Reset_m3783F80799C6C9B479ADC8D0D0B00CA00E35ACA0 (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODEMISSILE__ctor_m8D3480E700813C5D23B32445C9F12E831418C2CD (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EXPLODEMISSILE__ctor_m375F721AAE6CABED10B1E9D5522F4A4882BB78CB (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		EXPLODEMISSILE_set_MY_mE5638C5A55A475F5E85B13C8A314B41643AD3F9E_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		EXPLODEMISSILE_set_THERE_mD71A2141ADA22454FC04909DB9AC2AB7FE09B355_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		EXPLODEMISSILE_set__world_mE29389DDF0E7729CAC53A6CF6A53E73ACAAA9F45_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EXPLODEMISSILE_MoveNext_m2C53EAA54C387571D9B4463BBB12B0760A3B0DD6 (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* V_0 = NULL;
	HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_04c2;
		}
	}
	{
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_1 = (LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45*)il2cpp_codegen_object_new(LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45_il2cpp_TypeInfo_var);
		LOCATEACTOR__ctor_mF09CBD1671A947DFFB70D0D2FA1091E6C147375B(L_1, NULL);
		V_0 = L_1;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_2 = V_0;
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = EXPLODEMISSILE_get_THERE_mF81904D64263EFC0C4687825610AFAC5C3C7674D_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		LOCATEACTOR_t1193F3E822B442C6F7FDB663EC7644D75ACB1A45* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)277686876), (bool)1, (bool)1);
		__this->___EXPLOSIONSTART_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSIONSTART_0), (void*)L_13);
		RuntimeObject* L_14;
		L_14 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_14);
		RuntimeObject* L_15 = __this->___MY_2;
		RuntimeObject* L_16 = __this->___EXPLOSIONSTART_0;
		NullCheck(L_15);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_15, ((int32_t)189), L_16);
		RuntimeObject* L_17;
		L_17 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_17);
		RuntimeObject* L_18 = __this->___MY_5;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)190), (RuntimeObject*)NULL);
		RuntimeObject* L_19;
		L_19 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_8;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)191), (RuntimeObject*)NULL);
		RuntimeObject* L_21;
		L_21 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_11 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_21);
		RuntimeObject* L_22 = __this->___MY_11;
		NullCheck(L_22);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_23;
		L_23 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_14 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_23);
		RuntimeObject* L_24 = __this->___MY_14;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)192), (RuntimeObject*)NULL);
		RuntimeObject* L_25;
		L_25 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_17 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_17), (void*)L_25);
		RuntimeObject* L_26 = __this->___MY_17;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)206), (1.0f));
		RuntimeObject* L_27;
		L_27 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_18 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		RuntimeObject* L_29 = __this->___MY_18;
		NullCheck(L_28);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, ((int32_t)-590743698), L_29);
		RuntimeObject* L_30;
		L_30 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_30, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_21 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_21), (void*)L_31);
		RuntimeObject* L_32 = __this->___EXPLOSION_ON_21;
		NullCheck(L_32);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_32, ((int32_t)231), (1.0f));
		RuntimeObject* L_33;
		L_33 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)440));
		__this->___SHOOT_SECTOR_23 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_SECTOR_23), (void*)L_34);
		RuntimeObject* L_35 = __this->___SHOOT_SECTOR_23;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)231), (6.28299999f));
		RuntimeObject* L_36;
		L_36 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_36, 5, ((int32_t)439));
		__this->___SHOOT_RANGE_25 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_RANGE_25), (void*)L_37);
		RuntimeObject* L_38 = __this->___SHOOT_RANGE_25;
		NullCheck(L_38);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_38, ((int32_t)231), (20.0f));
		RuntimeObject* L_39;
		L_39 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_39, 5, ((int32_t)441));
		__this->___SHOOT_FAC_27 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_27), (void*)L_40);
		RuntimeObject* L_41 = __this->___SHOOT_FAC_27;
		NullCheck(L_41);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)231), (10.0f));
		RuntimeObject* L_42;
		L_42 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_28 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_28), (void*)L_42);
		RuntimeObject* L_43;
		L_43 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		RuntimeObject* L_44 = __this->___MY_28;
		RuntimeObject* L_45;
		L_45 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		RuntimeObject* L_46;
		L_46 = EXPLODEMISSILE_get_THERE_mF81904D64263EFC0C4687825610AFAC5C3C7674D_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(30, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, L_44, L_45, L_46);
		RuntimeObject* L_47;
		L_47 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, 5, ((int32_t)444));
		__this->___HIT_DIST_30 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_30), (void*)L_48);
		RuntimeObject* L_49 = __this->___HIT_DIST_30;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_30_val = L_50;
		float L_51 = __this->___HIT_DIST_30_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_51, (0.0f), NULL);
		if (L_52)
		{
			goto IL_03aa;
		}
	}
	{
		RuntimeObject* L_53;
		L_53 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_53, 5, ((int32_t)446));
		__this->___RESULT_31 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RESULT_31), (void*)L_54);
		RuntimeObject* L_55 = __this->___RESULT_31;
		NullCheck(L_55);
		float L_56;
		L_56 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_55, ((int32_t)231), (bool)1);
		__this->___RESULT_31_val = L_56;
		RuntimeObject* L_57;
		L_57 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_57, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_32 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_32), (void*)L_58);
		RuntimeObject* L_59 = __this->___PLAYER_RESULT_32;
		float L_60 = __this->___RESULT_31_val;
		NullCheck(L_59);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_59, ((int32_t)231), L_60);
		RuntimeObject* L_61;
		L_61 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_61, 5, ((int32_t)441));
		__this->___SHOOT_FAC_34 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_34), (void*)L_62);
		RuntimeObject* L_63 = __this->___SHOOT_FAC_34;
		NullCheck(L_63);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_63, ((int32_t)231), (0.0f));
		RuntimeObject* L_64;
		L_64 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_64, 5, ((int32_t)439));
		__this->___SHOOT_RANGE_36 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_RANGE_36), (void*)L_65);
		RuntimeObject* L_66 = __this->___SHOOT_RANGE_36;
		NullCheck(L_66);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)231), (40.0f));
		RuntimeObject* L_67;
		L_67 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_37 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_37), (void*)L_67);
		RuntimeObject* L_68;
		L_68 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		RuntimeObject* L_69 = __this->___MY_37;
		RuntimeObject* L_70;
		L_70 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		RuntimeObject* L_71;
		L_71 = EXPLODEMISSILE_get_THERE_mF81904D64263EFC0C4687825610AFAC5C3C7674D_inline(__this, NULL);
		NullCheck(L_68);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(29, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_68, L_69, L_70, L_71);
		RuntimeObject* L_72;
		L_72 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_72, 5, ((int32_t)444));
		__this->___HIT_DIST_39 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_DIST_39), (void*)L_73);
		RuntimeObject* L_74 = __this->___HIT_DIST_39;
		NullCheck(L_74);
		float L_75;
		L_75 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_74, ((int32_t)231), (bool)1);
		__this->___HIT_DIST_39_val = L_75;
		float L_76 = __this->___HIT_DIST_39_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_76, (0.0f), NULL);
		if (L_77)
		{
			goto IL_03aa;
		}
	}
	{
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_78 = (HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25*)il2cpp_codegen_object_new(HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25_il2cpp_TypeInfo_var);
		HITPLAYERDELAY__ctor_m0514506CB908F8A27C7CFF9BB10718987C144B25(L_78, NULL);
		V_1 = L_78;
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_79 = V_1;
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_80 = L_79;
		RuntimeObject* L_81;
		L_81 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		NullCheck(L_80);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_80, L_81);
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_82 = L_80;
		RuntimeObject* L_83;
		L_83 = EXPLODEMISSILE_get_THERE_mF81904D64263EFC0C4687825610AFAC5C3C7674D_inline(__this, NULL);
		NullCheck(L_82);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_82, L_83);
		RuntimeObject* L_84;
		L_84 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_82);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_82, L_84);
		RuntimeObject* L_85;
		L_85 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		HITPLAYERDELAY_tA318A91E0B8D6C4E723379E9B7F23B2E9ACAEC25* L_86 = V_1;
		NullCheck(L_85);
		RuntimeObject* L_87;
		L_87 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_85, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_86);
	}

IL_03aa:
	{
		RuntimeObject* L_88;
		L_88 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_42 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_42), (void*)L_88);
		RuntimeObject* L_89 = __this->___MY_42;
		NullCheck(L_89);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)168), (0.0f));
		RuntimeObject* L_90;
		L_90 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_45 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_45), (void*)L_90);
		RuntimeObject* L_91 = __this->___MY_45;
		NullCheck(L_91);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_91, ((int32_t)207), (0.0f));
		RuntimeObject* L_92;
		L_92 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_48 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_48), (void*)L_92);
		RuntimeObject* L_93 = __this->___MY_48;
		NullCheck(L_93);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_93, ((int32_t)213), (0.0f));
		RuntimeObject* L_94;
		L_94 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_51 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_51), (void*)L_94);
		RuntimeObject* L_95 = __this->___MY_51;
		NullCheck(L_95);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_95, ((int32_t)165), (-0.0500000007f));
		RuntimeObject* L_96;
		L_96 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_96);
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_97, ((int32_t)1569990796), (bool)1, (bool)1);
		__this->___EXP01TEX_52 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXP01TEX_52), (void*)L_98);
		RuntimeObject* L_99;
		L_99 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_54 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_54), (void*)L_99);
		RuntimeObject* L_100 = __this->___MY_54;
		RuntimeObject* L_101 = __this->___EXP01TEX_52;
		NullCheck(L_100);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)164), L_101);
		RuntimeObject* L_102;
		L_102 = EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline(__this, NULL);
		__this->___MY_57 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_57), (void*)L_102);
		RuntimeObject* L_103 = __this->___MY_57;
		NullCheck(L_103);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_103, ((int32_t)221), (1.0f));
		float L_104;
		L_104 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_104;
		float L_105 = __this->___startTime1;
		float L_106;
		L_106 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_105, L_106));
		__this->____cursor = 1;
		goto IL_04c2;
	}

IL_04b5:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_107 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		EXPLODEMISSILE_set_Current_mC6F43E9C44C1BE2615CE60F8A4AF3DDE9FE7E2CB_inline(__this, L_107, NULL);
		return (bool)1;
	}

IL_04c2:
	{
		float L_108;
		L_108 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_109 = __this->___endTime1;
		if ((((float)L_108) < ((float)L_109)))
		{
			goto IL_04b5;
		}
	}
	{
		EXPLODEMISSILE_set_Current_mC6F43E9C44C1BE2615CE60F8A4AF3DDE9FE7E2CB_inline(__this, NULL, NULL);
		RuntimeObject* L_110;
		L_110 = EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline(__this, NULL);
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_110, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_60 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_60), (void*)L_111);
		RuntimeObject* L_112 = __this->___EXPLOSION_ON_60;
		NullCheck(L_112);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_112, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AIMMISSILE_get_MY_mD7C9AFE3FE7C983588C034750D85B509DD885381 (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIMMISSILE_set_MY_mA95083A7B27199CA96ABEAF3114E8418C3567A90 (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AIMMISSILE_get_THERE_m4F850BABA8D0E9A54BE935296D0D428560ADEA39 (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIMMISSILE_set_THERE_mE144A71013880F151220AD4C03D0C8DE1B9B3B43 (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1 (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIMMISSILE_set__world_mB14CB1DA5263E88824C047804822213A5D2FDF0B (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AIMMISSILE_get_Current_m1D5955ABBB916815FF08D1E8D29A755F99F22A7B (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIMMISSILE_set_Current_m8A3BF3FCDE42CA646FF6A2978BADF304B9680EDF (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIMMISSILE_Reset_mF2C6076C454CBE270E2C55B1EA7D5B624DFC16E3 (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIMMISSILE__ctor_m418CA2A14406CF5A347AF90C853E69CAA1E2DC3B (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AIMMISSILE__ctor_mC03EE3AC59ADCB8A90E4AD66DBF295298A1BE6C4 (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		AIMMISSILE_set_MY_mA95083A7B27199CA96ABEAF3114E8418C3567A90_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		AIMMISSILE_set_THERE_mE144A71013880F151220AD4C03D0C8DE1B9B3B43_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		AIMMISSILE_set__world_mB14CB1DA5263E88824C047804822213A5D2FDF0B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AIMMISSILE_MoveNext_mD3E0957708F99CD03F6BCF857723AFA7C3CA68CC (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)-361879069));
		__this->___MISSILECOUNTER_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILECOUNTER_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___MISSILECOUNTER_1;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (bool)1);
		__this->___MISSILECOUNTER_1_val = L_4;
		RuntimeObject* L_5;
		L_5 = AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_5, 5, ((int32_t)-361879069));
		__this->___MISSILECOUNTER_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILECOUNTER_2), (void*)L_6);
		RuntimeObject* L_7 = __this->___MISSILECOUNTER_2;
		float L_8 = __this->___MISSILECOUNTER_1_val;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)231), ((float)il2cpp_codegen_add(L_8, (1.0f))));
		RuntimeObject* L_9;
		L_9 = AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_9, 5, ((int32_t)-361879069));
		__this->___MISSILECOUNTER_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILECOUNTER_4), (void*)L_10);
		RuntimeObject* L_11 = __this->___MISSILECOUNTER_4;
		NullCheck(L_11);
		float L_12;
		L_12 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)231), (bool)1);
		__this->___MISSILECOUNTER_4_val = L_12;
		float L_13 = __this->___MISSILECOUNTER_4_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_13, (16.0f), NULL);
		if (!L_14)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeObject* L_15;
		L_15 = AIMMISSILE_get_MY_mD7C9AFE3FE7C983588C034750D85B509DD885381_inline(__this, NULL);
		__this->___MY_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_7), (void*)L_15);
		RuntimeObject* L_16 = __this->___MY_7;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)206), (0.0f));
	}

IL_00c9:
	{
		RuntimeObject* L_17;
		L_17 = AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1_inline(__this, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_17, 5, ((int32_t)-361879069));
		__this->___MISSILECOUNTER_9 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILECOUNTER_9), (void*)L_18);
		RuntimeObject* L_19 = __this->___MISSILECOUNTER_9;
		NullCheck(L_19);
		float L_20;
		L_20 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_19, ((int32_t)231), (bool)1);
		__this->___MISSILECOUNTER_9_val = L_20;
		float L_21 = __this->___MISSILECOUNTER_9_val;
		bool L_22;
		L_22 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_21, (48.0f), NULL);
		if (!L_22)
		{
			goto IL_010b;
		}
	}
	{
		return (bool)0;
	}

IL_010b:
	{
		RuntimeObject* L_23;
		L_23 = AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)-1476354475), (bool)1, (bool)1);
		__this->___BULLET_10 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BULLET_10), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = AIMMISSILE_get_MY_mD7C9AFE3FE7C983588C034750D85B509DD885381_inline(__this, NULL);
		__this->___MY_12 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_12), (void*)L_26);
		RuntimeObject* L_27 = __this->___MY_12;
		RuntimeObject* L_28 = __this->___BULLET_10;
		NullCheck(L_27);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_27, ((int32_t)199), L_28);
		RuntimeObject* L_29;
		L_29 = AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_29, 5, ((int32_t)-361879069));
		__this->___MISSILECOUNTER_14 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILECOUNTER_14), (void*)L_30);
		RuntimeObject* L_31 = __this->___MISSILECOUNTER_14;
		NullCheck(L_31);
		float L_32;
		L_32 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)231), (bool)1);
		__this->___MISSILECOUNTER_14_val = L_32;
		float L_33 = __this->___MISSILECOUNTER_14_val;
		bool L_34;
		L_34 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_33, (80.0f), NULL);
		if (!L_34)
		{
			goto IL_018c;
		}
	}
	{
		return (bool)0;
	}

IL_018c:
	{
		RuntimeObject* L_35;
		L_35 = AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)-361879069));
		__this->___MISSILECOUNTER_16 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MISSILECOUNTER_16), (void*)L_36);
		RuntimeObject* L_37 = __this->___MISSILECOUNTER_16;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (0.0f));
		RuntimeObject* L_38;
		L_38 = AIMMISSILE_get_MY_mD7C9AFE3FE7C983588C034750D85B509DD885381_inline(__this, NULL);
		__this->___MY_19 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_19), (void*)L_38);
		RuntimeObject* L_39 = __this->___MY_19;
		NullCheck(L_39);
		float L_40;
		L_40 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)205), (bool)1);
		__this->___temp_20 = L_40;
		float L_41 = __this->___temp_20;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_41, (1.0f), NULL);
		if (!L_42)
		{
			goto IL_01ef;
		}
	}
	{
		return (bool)0;
	}

IL_01ef:
	{
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_43 = (VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602*)il2cpp_codegen_object_new(VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602_il2cpp_TypeInfo_var);
		VANISHSTOP__ctor_m2608AFB1D24FBDA9CEF6CCE09CD2F1961E3AF94B(L_43, NULL);
		V_0 = L_43;
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_44 = V_0;
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_45 = L_44;
		RuntimeObject* L_46;
		L_46 = AIMMISSILE_get_MY_mD7C9AFE3FE7C983588C034750D85B509DD885381_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_46);
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_47 = L_45;
		RuntimeObject* L_48;
		L_48 = AIMMISSILE_get_THERE_m4F850BABA8D0E9A54BE935296D0D428560ADEA39_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_48);
		RuntimeObject* L_49;
		L_49 = AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1_inline(__this, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_47, L_49);
		RuntimeObject* L_50;
		L_50 = AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1_inline(__this, NULL);
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_51 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONSTART_get_MY_mD17428D6D14CB24E337FD158D8C32A43AAED5928 (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONSTART_set_MY_m57EC2077F79106611238E31ED19E699EE720BAFC (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONSTART_get_THERE_mD2AFBEBB836F957875F2DA0F21ED466D790F3777 (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONSTART_set_THERE_mDE7487F72FF950D8BF92E9B5D07B93762DF4FB5B (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONSTART_get__world_mFB39315AD7C159F61B98FD481A3F4F34D7FE5A6A (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONSTART_set__world_mBB5EE6CDFC345580E2775716A71254364C49D78B (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONSTART_get_Current_mDF5ED2362A7AB90B6996E92D03F6D8F505E27C05 (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONSTART_set_Current_m4D67BFF2FD843D65858CA0BAFC176AAD49113DEC (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONSTART_Reset_m6AC72F53F831D94C79A4FB01BB775AD83B75CAAD (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONSTART__ctor_mAD5819E62849DC84FC5631F555EC052A37F2D2ED (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONSTART__ctor_m41EC82CA468FE8E7655F4E573EEDF90CDA3E0343 (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		IMPLOSIONSTART_set_MY_m57EC2077F79106611238E31ED19E699EE720BAFC_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		IMPLOSIONSTART_set_THERE_mDE7487F72FF950D8BF92E9B5D07B93762DF4FB5B_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		IMPLOSIONSTART_set__world_mBB5EE6CDFC345580E2775716A71254364C49D78B_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMPLOSIONSTART_MoveNext_mF34B5753C1B86B55CAC4DF9F9756F72D34A55BFA (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = IMPLOSIONSTART_get_MY_mD17428D6D14CB24E337FD158D8C32A43AAED5928_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)189), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = IMPLOSIONSTART_get__world_mFB39315AD7C159F61B98FD481A3F4F34D7FE5A6A_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)-1823056724), (bool)1, (bool)1);
		__this->___IMPLOSIONCRUSH_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPLOSIONCRUSH_3), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = IMPLOSIONSTART_get_MY_mD17428D6D14CB24E337FD158D8C32A43AAED5928_inline(__this, NULL);
		__this->___MY_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_6);
		RuntimeObject* L_7 = __this->___MY_5;
		RuntimeObject* L_8 = __this->___IMPLOSIONCRUSH_3;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)190), L_8);
		RuntimeObject* L_9;
		L_9 = IMPLOSIONSTART_get_MY_mD17428D6D14CB24E337FD158D8C32A43AAED5928_inline(__this, NULL);
		__this->___MY_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_8;
		NullCheck(L_10);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)204), (0.0f));
		RuntimeObject* L_11;
		L_11 = IMPLOSIONSTART_get_MY_mD17428D6D14CB24E337FD158D8C32A43AAED5928_inline(__this, NULL);
		__this->___MY_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_11;
		NullCheck(L_12);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_12, ((int32_t)221), (1.0f));
		RuntimeObject* L_13;
		L_13 = IMPLOSIONSTART_get_MY_mD17428D6D14CB24E337FD158D8C32A43AAED5928_inline(__this, NULL);
		__this->___MY_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_14), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_14;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)213), (0.0f));
		FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* L_15 = (FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6*)il2cpp_codegen_object_new(FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6_il2cpp_TypeInfo_var);
		FLASHREGION__ctor_m0F7AECCE826CDDBE2B9C873B5123CF3EEE577CCF(L_15, NULL);
		V_0 = L_15;
		FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* L_16 = V_0;
		FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* L_17 = L_16;
		RuntimeObject* L_18;
		L_18 = IMPLOSIONSTART_get_MY_mD17428D6D14CB24E337FD158D8C32A43AAED5928_inline(__this, NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_17, L_18);
		FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* L_19 = L_17;
		RuntimeObject* L_20;
		L_20 = IMPLOSIONSTART_get_THERE_mD2AFBEBB836F957875F2DA0F21ED466D790F3777_inline(__this, NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_19, L_20);
		RuntimeObject* L_21;
		L_21 = IMPLOSIONSTART_get__world_mFB39315AD7C159F61B98FD481A3F4F34D7FE5A6A_inline(__this, NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_19, L_21);
		RuntimeObject* L_22;
		L_22 = IMPLOSIONSTART_get__world_mFB39315AD7C159F61B98FD481A3F4F34D7FE5A6A_inline(__this, NULL);
		FLASHREGION_t1018982E2C4B03774BEDFD2D3EB2DCB5995A9DC6* L_23 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_22, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_23);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONCRUSH_get_MY_m880A8C55013EC1D3AB95A56BC906EF9D491300C4 (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH_set_MY_m714B8F47D880E6A474388F47DFE662251888DFD6 (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONCRUSH_get_THERE_m18904C76078AA2AB205F2AC49E7D210EFE426826 (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH_set_THERE_m8F2EF4061C48A3EDE3753EBD3E02E7834E560C6E (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONCRUSH_get__world_m7B6AA6D60C06396CF92A614D46EF16D05112B3FB (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH_set__world_mA83B18E7E0D5F310A8DA4E22676ED17FE791E506 (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONCRUSH_get_Current_m94F57E51B36FA4E13F1572AB8183F60299545BA1 (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH_set_Current_m11B544BB41D518E51B86666F595AD23A79E6EED5 (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH_Reset_m6BA68D234699225468F375E856197D5B68934A0C (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH__ctor_mB9CFD1F6B6C98A40E1F98FA7C8BA39150907A0F8 (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH__ctor_m271DAAA9C02CE48D048E7F828C6EE4991F5887BA (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		IMPLOSIONCRUSH_set_MY_m714B8F47D880E6A474388F47DFE662251888DFD6_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		IMPLOSIONCRUSH_set_THERE_m8F2EF4061C48A3EDE3753EBD3E02E7834E560C6E_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		IMPLOSIONCRUSH_set__world_mA83B18E7E0D5F310A8DA4E22676ED17FE791E506_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMPLOSIONCRUSH_MoveNext_m9AB7ABBCCC46A1D92E2C0AADC8BFBCB234F974FB (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, const RuntimeMethod* method) 
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
		L_1 = IMPLOSIONCRUSH_get__world_m7B6AA6D60C06396CF92A614D46EF16D05112B3FB_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-2003880814), (bool)1, (bool)1);
		__this->___IMPL01ATEX_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL01ATEX_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = IMPLOSIONCRUSH_get_MY_m880A8C55013EC1D3AB95A56BC906EF9D491300C4_inline(__this, NULL);
		__this->___MY_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_4);
		RuntimeObject* L_5 = __this->___MY_2;
		RuntimeObject* L_6 = __this->___IMPL01ATEX_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)164), L_6);
		RuntimeObject* L_7;
		L_7 = IMPLOSIONCRUSH_get__world_m7B6AA6D60C06396CF92A614D46EF16D05112B3FB_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)1148133871), (bool)1, (bool)1);
		__this->___IMPLODELIGHT_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPLODELIGHT_3), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = IMPLOSIONCRUSH_get__world_m7B6AA6D60C06396CF92A614D46EF16D05112B3FB_inline(__this, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_10);
		RuntimeObject* L_12 = __this->___IMPLODELIGHT_3;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)12), L_12);
		RuntimeObject* L_13;
		L_13 = IMPLOSIONCRUSH_get__world_m7B6AA6D60C06396CF92A614D46EF16D05112B3FB_inline(__this, NULL);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)-1819736399), (bool)1, (bool)1);
		__this->___IMPLOSIONFLARE_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPLOSIONFLARE_6), (void*)L_15);
		RuntimeObject* L_16;
		L_16 = IMPLOSIONCRUSH_get_MY_m880A8C55013EC1D3AB95A56BC906EF9D491300C4_inline(__this, NULL);
		__this->___MY_8 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_16);
		RuntimeObject* L_17 = __this->___MY_8;
		RuntimeObject* L_18 = __this->___IMPLOSIONFLARE_6;
		NullCheck(L_17);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)190), L_18);
		RuntimeObject* L_19;
		L_19 = IMPLOSIONCRUSH_get_MY_m880A8C55013EC1D3AB95A56BC906EF9D491300C4_inline(__this, NULL);
		__this->___MY_11 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_11), (void*)L_19);
		RuntimeObject* L_20 = __this->___MY_11;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)221), (1.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONFLARE_get_MY_m1FDA72856C155E7007A7F98D95B8F715CF9A6BE6 (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONFLARE_set_MY_m71729FCB4DD61056C8C6DE12F934990ADC8EBF9B (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONFLARE_get_THERE_m861378347ACCC1E030D2351C20B444974FCE59DB (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONFLARE_set_THERE_mA01FCE0E8C5A607D567CC3709F499B80F5E31159 (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONFLARE_get__world_m155D41820B2056D40970871E00E4806DE3ED3185 (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONFLARE_set__world_m8669F37FC9901537CE7B930E6FAF595FFA35084C (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONFLARE_get_Current_m18703B0569771FF2C7AA803ADE1329D2CBAA6557 (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONFLARE_set_Current_m6E302370D90B805DA11592A062F6417EE3F232C1 (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONFLARE_Reset_m03650864710F601827E861F22D93E6027E8730AD (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONFLARE__ctor_m7920BC1EFE739CAC50F8522E40007CFE5FA5C7E3 (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONFLARE__ctor_m8F2E1945A5EE78D1E522D7B00DA65CD888DDB732 (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		IMPLOSIONFLARE_set_MY_m71729FCB4DD61056C8C6DE12F934990ADC8EBF9B_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		IMPLOSIONFLARE_set_THERE_mA01FCE0E8C5A607D567CC3709F499B80F5E31159_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		IMPLOSIONFLARE_set__world_m8669F37FC9901537CE7B930E6FAF595FFA35084C_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMPLOSIONFLARE_MoveNext_m92446D176CA4521E7BDB8F7DEB58A59609C85E72 (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, const RuntimeMethod* method) 
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
		L_1 = IMPLOSIONFLARE_get__world_m155D41820B2056D40970871E00E4806DE3ED3185_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)-2003844877), (bool)1, (bool)1);
		__this->___IMPL01BTEX_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL01BTEX_0), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = IMPLOSIONFLARE_get_MY_m1FDA72856C155E7007A7F98D95B8F715CF9A6BE6_inline(__this, NULL);
		__this->___MY_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_4);
		RuntimeObject* L_5 = __this->___MY_2;
		RuntimeObject* L_6 = __this->___IMPL01BTEX_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)164), L_6);
		RuntimeObject* L_7;
		L_7 = IMPLOSIONFLARE_get__world_m155D41820B2056D40970871E00E4806DE3ED3185_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)-794406050), (bool)1, (bool)1);
		__this->___IMPLOSIONEND_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPLOSIONEND_3), (void*)L_9);
		RuntimeObject* L_10;
		L_10 = IMPLOSIONFLARE_get_MY_m1FDA72856C155E7007A7F98D95B8F715CF9A6BE6_inline(__this, NULL);
		__this->___MY_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_10);
		RuntimeObject* L_11 = __this->___MY_5;
		RuntimeObject* L_12 = __this->___IMPLOSIONEND_3;
		NullCheck(L_11);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_11, ((int32_t)190), L_12);
		RuntimeObject* L_13;
		L_13 = IMPLOSIONFLARE_get_MY_m1FDA72856C155E7007A7F98D95B8F715CF9A6BE6_inline(__this, NULL);
		__this->___MY_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_13);
		RuntimeObject* L_14 = __this->___MY_8;
		NullCheck(L_14);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)221), (1.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONEND_get_MY_mCDE9580BB4AFEA1DE0C145E9DADA4D44421835B5 (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONEND_set_MY_m8D3372ACA4F27919095A3A91CD7042DB4DAFA76C (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONEND_get_THERE_m50640595723D624F3B464ABCE73FE3284C68658A (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONEND_set_THERE_mE04C4D7BD7426ED072A56933D4E2F714EBBB4F80 (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONEND_get__world_m1A89741933843046265F0C52756271A241774D57 (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONEND_set__world_mB7C60A963D01C93641F0F49132DA92E0C3498C72 (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONEND_get_Current_mC21D7F52F019E5B1144F09A396364346E5E3B9A2 (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONEND_set_Current_mFE73FBB9B39CD413C274619604596CC08AA4208A (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONEND_Reset_m8AC2B8BB389A3BD4848A85C07065958006760758 (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONEND__ctor_mACE0BEBBC475A1A135BA74FFA756F82AAD903F1D (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLOSIONEND__ctor_m0BFBB357B10BC6C917BA6590839BD62FBCF7E771 (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		IMPLOSIONEND_set_MY_m8D3372ACA4F27919095A3A91CD7042DB4DAFA76C_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		IMPLOSIONEND_set_THERE_mE04C4D7BD7426ED072A56933D4E2F714EBBB4F80_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		IMPLOSIONEND_set__world_mB7C60A963D01C93641F0F49132DA92E0C3498C72_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMPLOSIONEND_MoveNext_m884BD2A2021D14ADD3F75C135011E777D5D78EA8 (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) 
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
	IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* G_B2_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* G_B4_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0209;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = IMPLOSIONEND_get_MY_mCDE9580BB4AFEA1DE0C145E9DADA4D44421835B5_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)190), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = IMPLOSIONEND_get_MY_mCDE9580BB4AFEA1DE0C145E9DADA4D44421835B5_inline(__this, NULL);
		__this->___MY_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_3), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = IMPLOSIONEND_get__world_m1A89741933843046265F0C52756271A241774D57_inline(__this, NULL);
		RuntimeObject* L_5 = __this->___MY_3;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, ((int32_t)-590743698), L_5);
		RuntimeObject* L_6;
		L_6 = IMPLOSIONEND_get__world_m1A89741933843046265F0C52756271A241774D57_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_7, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_5), (void*)L_8);
		RuntimeObject* L_9;
		L_9 = IMPLOSIONEND_get_MY_mCDE9580BB4AFEA1DE0C145E9DADA4D44421835B5_inline(__this, NULL);
		__this->___MY_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_7), (void*)L_9);
		RuntimeObject* L_10 = __this->___MY_7;
		RuntimeObject* L_11 = L_10;
		if (L_11)
		{
			G_B3_0 = L_11;
			G_B3_1 = __this;
			goto IL_0082;
		}
		G_B2_0 = L_11;
		G_B2_1 = __this;
	}
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_008e;
	}

IL_0082:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B3_0, ((int32_t)199), (bool)1, (bool)1);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_008e:
	{
		NullCheck(G_B4_1);
		G_B4_1->___temp_8 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___temp_8), (void*)G_B4_0);
		RuntimeObject* L_13 = __this->___temp_8;
		RuntimeObject* L_14 = __this->___FOLLOW_5;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_13, L_14, NULL);
		if (L_15)
		{
			goto IL_00d2;
		}
	}
	{
		RuntimeObject* L_16;
		L_16 = IMPLOSIONEND_get__world_m1A89741933843046265F0C52756271A241774D57_inline(__this, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_16, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_10 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_10), (void*)L_17);
		RuntimeObject* L_18 = __this->___EXPLOSION_ON_10;
		NullCheck(L_18);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_18, ((int32_t)231), (2.0f));
	}

IL_00d2:
	{
		RuntimeObject* L_19;
		L_19 = IMPLOSIONEND_get__world_m1A89741933843046265F0C52756271A241774D57_inline(__this, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_19, 5, ((int32_t)439));
		__this->___SHOOT_RANGE_12 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_RANGE_12), (void*)L_20);
		RuntimeObject* L_21 = __this->___SHOOT_RANGE_12;
		NullCheck(L_21);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_21, ((int32_t)231), (80.0f));
		RuntimeObject* L_22;
		L_22 = IMPLOSIONEND_get__world_m1A89741933843046265F0C52756271A241774D57_inline(__this, NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_22, 5, ((int32_t)441));
		__this->___SHOOT_FAC_14 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_14), (void*)L_23);
		RuntimeObject* L_24 = __this->___SHOOT_FAC_14;
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)231), (0.0500000007f));
		RuntimeObject* L_25;
		L_25 = IMPLOSIONEND_get_MY_mCDE9580BB4AFEA1DE0C145E9DADA4D44421835B5_inline(__this, NULL);
		__this->___MY_15 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_15), (void*)L_25);
		RuntimeObject* L_26;
		L_26 = IMPLOSIONEND_get__world_m1A89741933843046265F0C52756271A241774D57_inline(__this, NULL);
		RuntimeObject* L_27 = __this->___MY_15;
		RuntimeObject* L_28;
		L_28 = IMPLOSIONEND_get_MY_mCDE9580BB4AFEA1DE0C145E9DADA4D44421835B5_inline(__this, NULL);
		RuntimeObject* L_29;
		L_29 = IMPLOSIONEND_get_THERE_m50640595723D624F3B464ABCE73FE3284C68658A_inline(__this, NULL);
		NullCheck(L_26);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(30, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_26, L_27, L_28, L_29);
		RuntimeObject* L_30;
		L_30 = IMPLOSIONEND_get_MY_mCDE9580BB4AFEA1DE0C145E9DADA4D44421835B5_inline(__this, NULL);
		__this->___MY_18 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_18;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)204), (1.0f));
		RuntimeObject* L_32;
		L_32 = IMPLOSIONEND_get_MY_mCDE9580BB4AFEA1DE0C145E9DADA4D44421835B5_inline(__this, NULL);
		__this->___MY_21 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_21;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)205), (bool)1);
		__this->___temp_22 = L_34;
		float L_35 = __this->___temp_22;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_35, (1.0f), NULL);
		if (!L_36)
		{
			goto IL_01d5;
		}
	}
	{
		RuntimeObject* L_37;
		L_37 = IMPLOSIONEND_get__world_m1A89741933843046265F0C52756271A241774D57_inline(__this, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_37, 5, ((int32_t)361));
		__this->___RENDER_MODE_24 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RENDER_MODE_24), (void*)L_38);
		RuntimeObject* L_39 = __this->___RENDER_MODE_24;
		NullCheck(L_39);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)231), (1.0f));
	}

IL_01d5:
	{
		float L_40;
		L_40 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_40;
		float L_41 = __this->___startTime1;
		float L_42;
		L_42 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_41, L_42));
		__this->____cursor = 1;
		goto IL_0209;
	}

IL_01fc:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_43 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		IMPLOSIONEND_set_Current_mFE73FBB9B39CD413C274619604596CC08AA4208A_inline(__this, L_43, NULL);
		return (bool)1;
	}

IL_0209:
	{
		float L_44;
		L_44 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_45 = __this->___endTime1;
		if ((((float)L_44) < ((float)L_45)))
		{
			goto IL_01fc;
		}
	}
	{
		IMPLOSIONEND_set_Current_mFE73FBB9B39CD413C274619604596CC08AA4208A_inline(__this, NULL, NULL);
		RuntimeObject* L_46;
		L_46 = IMPLOSIONEND_get__world_m1A89741933843046265F0C52756271A241774D57_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_27 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_27), (void*)L_47);
		RuntimeObject* L_48 = __this->___EXPLOSION_ON_27;
		NullCheck(L_48);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88 (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set_MY_mCA7B1F3F8BEFC1FC12A46B50C1590AF463FAC731 (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLODEPARTICLE_get_THERE_mCA182BE8506C8BE3CEB1554164A4A0A43F751565 (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set_THERE_mC121BA7807BFE3421E3CB59F7130F3B1C42272B7 (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set__world_m0C5295E5E35BBF4093D73B53974472870C9AC6EA (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IMPLODEPARTICLE_get_Current_m01491A51383D8E0AF039581E71973A1C8CE6B707 (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set_Current_m28DD4FAA43AA65473DAB09754B3238725DF7678E (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_Reset_m10D00F3BD680C8139BCC88409085A10499E1EEAC (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODEPARTICLE__ctor_m64AB1890C132CCEBB13F48C9419062F1A56327C4 (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMPLODEPARTICLE__ctor_mF90174EE87BC2442709EAD89FB71FC7207D0EB44 (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		IMPLODEPARTICLE_set_MY_mCA7B1F3F8BEFC1FC12A46B50C1590AF463FAC731_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		IMPLODEPARTICLE_set_THERE_mC121BA7807BFE3421E3CB59F7130F3B1C42272B7_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		IMPLODEPARTICLE_set__world_m0C5295E5E35BBF4093D73B53974472870C9AC6EA_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IMPLODEPARTICLE_MoveNext_mB825959BC8A8747F43EAA21E60164E63403BD5C4 (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) 
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
	IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* G_B2_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* G_B4_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_02f1;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)191), (RuntimeObject*)NULL);
		RuntimeObject* L_3;
		L_3 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_3);
		RuntimeObject* L_4 = __this->___MY_5;
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_4, ((int32_t)209), (RuntimeObject*)NULL);
		RuntimeObject* L_5;
		L_5 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_6), (void*)L_5);
		RuntimeObject* L_6;
		L_6 = IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD_inline(__this, NULL);
		RuntimeObject* L_7 = __this->___MY_6;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(17, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_6, ((int32_t)-590743698), L_7);
		RuntimeObject* L_8;
		L_8 = IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_9, ((int32_t)-1326928096), (bool)1, (bool)1);
		__this->___FOLLOW_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FOLLOW_8), (void*)L_10);
		RuntimeObject* L_11;
		L_11 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_10), (void*)L_11);
		RuntimeObject* L_12 = __this->___MY_10;
		RuntimeObject* L_13 = L_12;
		if (L_13)
		{
			G_B3_0 = L_13;
			G_B3_1 = __this;
			goto IL_009f;
		}
		G_B2_0 = L_13;
		G_B2_1 = __this;
	}
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_00ab;
	}

IL_009f:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, G_B3_0, ((int32_t)199), (bool)1, (bool)1);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_1;
	}

IL_00ab:
	{
		NullCheck(G_B4_1);
		G_B4_1->___temp_11 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___temp_11), (void*)G_B4_0);
		RuntimeObject* L_15 = __this->___temp_11;
		RuntimeObject* L_16 = __this->___FOLLOW_8;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_15, L_16, NULL);
		if (L_17)
		{
			goto IL_00ef;
		}
	}
	{
		RuntimeObject* L_18;
		L_18 = IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_13 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_13), (void*)L_19);
		RuntimeObject* L_20 = __this->___EXPLOSION_ON_13;
		NullCheck(L_20);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)231), (2.0f));
	}

IL_00ef:
	{
		RuntimeObject* L_21;
		L_21 = IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, 5, ((int32_t)439));
		__this->___SHOOT_RANGE_15 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_RANGE_15), (void*)L_22);
		RuntimeObject* L_23 = __this->___SHOOT_RANGE_15;
		NullCheck(L_23);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_23, ((int32_t)231), (10.0f));
		RuntimeObject* L_24;
		L_24 = IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, 5, ((int32_t)441));
		__this->___SHOOT_FAC_17 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_17), (void*)L_25);
		RuntimeObject* L_26 = __this->___SHOOT_FAC_17;
		NullCheck(L_26);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_26, ((int32_t)231), (0.0500000007f));
		RuntimeObject* L_27;
		L_27 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_18 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_18), (void*)L_27);
		RuntimeObject* L_28;
		L_28 = IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD_inline(__this, NULL);
		RuntimeObject* L_29 = __this->___MY_18;
		RuntimeObject* L_30;
		L_30 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		RuntimeObject* L_31;
		L_31 = IMPLODEPARTICLE_get_THERE_mCA182BE8506C8BE3CEB1554164A4A0A43F751565_inline(__this, NULL);
		NullCheck(L_28);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(30, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, L_29, L_30, L_31);
		RuntimeObject* L_32;
		L_32 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_21 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_21), (void*)L_32);
		RuntimeObject* L_33 = __this->___MY_21;
		NullCheck(L_33);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)207), (0.0f));
		RuntimeObject* L_34;
		L_34 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_24 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_24), (void*)L_34);
		RuntimeObject* L_35 = __this->___MY_24;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)206), (1.0f));
		RuntimeObject* L_36;
		L_36 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_27 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_36);
		RuntimeObject* L_37 = __this->___MY_27;
		NullCheck(L_37);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)168), (0.0f));
		RuntimeObject* L_38;
		L_38 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_30 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_30), (void*)L_38);
		RuntimeObject* L_39 = __this->___MY_30;
		NullCheck(L_39);
		float L_40;
		L_40 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_39, ((int32_t)165), (bool)1);
		__this->___temp_31 = L_40;
		RuntimeObject* L_41;
		L_41 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_33 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_33), (void*)L_41);
		RuntimeObject* L_42 = __this->___MY_33;
		float L_43 = __this->___temp_31;
		NullCheck(L_42);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_42, ((int32_t)165), ((float)il2cpp_codegen_add(L_43, (-2.5f))));
		RuntimeObject* L_44;
		L_44 = IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_44);
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)-60702479), (bool)1, (bool)1);
		__this->___IMPL01TEX_34 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPL01TEX_34), (void*)L_46);
		RuntimeObject* L_47;
		L_47 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_36 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_36), (void*)L_47);
		RuntimeObject* L_48 = __this->___MY_36;
		RuntimeObject* L_49 = __this->___IMPL01TEX_34;
		NullCheck(L_48);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)164), L_49);
		RuntimeObject* L_50;
		L_50 = IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_51, ((int32_t)-1804031915), (bool)1, (bool)1);
		__this->___IMPLOSIONSTART_37 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPLOSIONSTART_37), (void*)L_52);
		RuntimeObject* L_53;
		L_53 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_39 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_39), (void*)L_53);
		RuntimeObject* L_54 = __this->___MY_39;
		RuntimeObject* L_55 = __this->___IMPLOSIONSTART_37;
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)189), L_55);
		RuntimeObject* L_56;
		L_56 = IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline(__this, NULL);
		__this->___MY_42 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_42), (void*)L_56);
		RuntimeObject* L_57 = __this->___MY_42;
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)221), (1.0f));
		float L_58;
		L_58 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime1 = L_58;
		float L_59 = __this->___startTime1;
		float L_60;
		L_60 = TimeUtils_FramesToTime_m90059C901C40948FC55A030E9CEF278BB384C8A3(4, NULL);
		__this->___endTime1 = ((float)il2cpp_codegen_add(L_59, L_60));
		__this->____cursor = 1;
		goto IL_02f1;
	}

IL_02e4:
	{
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_61 = ((Game_tECFD6919151788B21AB73A836592F3EE1A13E897_StaticFields*)il2cpp_codegen_static_fields_for(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var))->___WaitForEndOfFrame;
		IMPLODEPARTICLE_set_Current_m28DD4FAA43AA65473DAB09754B3238725DF7678E_inline(__this, L_61, NULL);
		return (bool)1;
	}

IL_02f1:
	{
		float L_62;
		L_62 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_63 = __this->___endTime1;
		if ((((float)L_62) < ((float)L_63)))
		{
			goto IL_02e4;
		}
	}
	{
		IMPLODEPARTICLE_set_Current_m28DD4FAA43AA65473DAB09754B3238725DF7678E_inline(__this, NULL, NULL);
		RuntimeObject* L_64;
		L_64 = IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD_inline(__this, NULL);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_64, 5, ((int32_t)-942336406));
		__this->___EXPLOSION_ON_45 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_ON_45), (void*)L_65);
		RuntimeObject* L_66 = __this->___EXPLOSION_ON_45;
		NullCheck(L_66);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_66, ((int32_t)231), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BEAMREACT_get_MY_mECBC88F4BFB77211DD640C2895419E5CEF84985B (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAMREACT_set_MY_m763A8A1C93ADEEF32C78BF0C46620D64B0DD3FED (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BEAMREACT_get_THERE_m2A471DED10D9E8EC1E6ACD515F047449F5A940E3 (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAMREACT_set_THERE_m11C82C8CF69D6DC2B46B8F399E0CDF8484485E8E (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAMREACT_set__world_m1437C914B9A391726E153E4A61792ED9F1A77670 (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BEAMREACT_get_Current_m8FBF8E525D6522104FB76FF51627B899DEADA435 (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAMREACT_set_Current_m9C4AAF2EEDEC6C5BB13F6C1699F278C0EF665873 (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAMREACT_Reset_m4BC9D9A81B4C62EB4DED8EB73498273EBA817CFB (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAMREACT__ctor_mB0794040DFC34B2C1BE7A9198550A45C59AA4C17 (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BEAMREACT__ctor_m39F894B413FB9D9A1396756D8DCE41801D3DDE11 (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		BEAMREACT_set_MY_m763A8A1C93ADEEF32C78BF0C46620D64B0DD3FED_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		BEAMREACT_set_THERE_m11C82C8CF69D6DC2B46B8F399E0CDF8484485E8E_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		BEAMREACT_set__world_m1437C914B9A391726E153E4A61792ED9F1A77670_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BEAMREACT_MoveNext_mF03F4D384FB074AD933D0573450592778A6DFBAE (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* L_1 = (CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255*)il2cpp_codegen_object_new(CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255_il2cpp_TypeInfo_var);
		CHOOSEPARTICLE__ctor_m7ED1B9A37FC131618164D6259BA23BBC833BA65E(L_1, NULL);
		V_0 = L_1;
		CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* L_2 = V_0;
		CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* L_3 = L_2;
		RuntimeObject* L_4;
		L_4 = BEAMREACT_get_MY_mECBC88F4BFB77211DD640C2895419E5CEF84985B_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_3, L_4);
		CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* L_5 = L_3;
		RuntimeObject* L_6;
		L_6 = BEAMREACT_get_THERE_m2A471DED10D9E8EC1E6ACD515F047449F5A940E3_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7;
		L_7 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8;
		L_8 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		CHOOSEPARTICLE_t1C52A2A6C5705AA1BE50488A50F3FBFFE9AF8255* L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_9);
		RuntimeObject* L_11;
		L_11 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_11, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_1), (void*)L_12);
		RuntimeObject* L_13 = __this->___PARTICLE_1;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_13, (RuntimeObject*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0066:
	{
		RuntimeObject* L_15;
		L_15 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_15, 5, ((int32_t)217512505));
		__this->___DISTX_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_3), (void*)L_16);
		RuntimeObject* L_17 = __this->___DISTX_3;
		NullCheck(L_17);
		float L_18;
		L_18 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_17, ((int32_t)231), (bool)1);
		__this->___DISTX_3_val = L_18;
		float L_19 = __this->___DISTX_3_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_19, (0.0f), NULL);
		if (L_20)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeObject* L_21;
		L_21 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_5 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_5), (void*)L_22);
		RuntimeObject* L_23;
		L_23 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_23, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_7 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_7), (void*)L_24);
		RuntimeObject* L_25 = __this->___PARTICLE_7;
		NullCheck(L_25);
		float L_26;
		L_26 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_25, ((int32_t)169), (bool)1);
		__this->___temp_8 = L_26;
		RuntimeObject* L_27;
		L_27 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_27, 5, ((int32_t)217512507));
		__this->___DISTZ_9 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_9), (void*)L_28);
		RuntimeObject* L_29 = __this->___DISTZ_9;
		NullCheck(L_29);
		float L_30;
		L_30 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_29, ((int32_t)231), (bool)1);
		__this->___DISTZ_9_val = L_30;
		RuntimeObject* L_31;
		L_31 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_31, 5, ((int32_t)217512505));
		__this->___DISTX_11 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_11), (void*)L_32);
		RuntimeObject* L_33 = __this->___DISTX_11;
		NullCheck(L_33);
		float L_34;
		L_34 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_33, ((int32_t)231), (bool)1);
		__this->___DISTX_11_val = L_34;
		RuntimeObject* L_35 = __this->___PARTICLE_5;
		float L_36 = __this->___DISTZ_9_val;
		float L_37 = __this->___DISTX_11_val;
		NullCheck(L_35);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_35, ((int32_t)169), ((float)(L_36/L_37)));
	}

IL_0167:
	{
		RuntimeObject* L_38;
		L_38 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_38, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_14 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_14), (void*)L_39);
		RuntimeObject* L_40 = __this->___PARTICLE_14;
		NullCheck(L_40);
		float L_41;
		L_41 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_40, ((int32_t)169), (bool)1);
		__this->___temp_15 = L_41;
		float L_42 = __this->___temp_15;
		bool L_43;
		L_43 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_42, (0.0f), NULL);
		if (!L_43)
		{
			goto IL_0234;
		}
	}
	{
		RuntimeObject* L_44;
		L_44 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_44, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_17 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_17), (void*)L_45);
		RuntimeObject* L_46;
		L_46 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_46, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_19 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_19), (void*)L_47);
		RuntimeObject* L_48 = __this->___PARTICLE_19;
		NullCheck(L_48);
		float L_49;
		L_49 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_48, ((int32_t)169), (bool)1);
		__this->___temp_20 = L_49;
		RuntimeObject* L_50;
		L_50 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_50, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_23 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_23), (void*)L_51);
		RuntimeObject* L_52 = __this->___PARTICLE_23;
		NullCheck(L_52);
		float L_53;
		L_53 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_52, ((int32_t)169), (bool)1);
		__this->___temp_24 = L_53;
		RuntimeObject* L_54 = __this->___PARTICLE_17;
		float L_55 = __this->___temp_24;
		NullCheck(L_54);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_54, ((int32_t)169), ((-L_55)));
	}

IL_0234:
	{
		RuntimeObject* L_56;
		L_56 = BEAMREACT_get_MY_mECBC88F4BFB77211DD640C2895419E5CEF84985B_inline(__this, NULL);
		__this->___MY_27 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_27), (void*)L_56);
		RuntimeObject* L_57 = __this->___MY_27;
		NullCheck(L_57);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)220), (1.0f));
		RuntimeObject* L_58;
		L_58 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_58, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_30 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_30), (void*)L_59);
		RuntimeObject* L_60 = __this->___PARTICLE_30;
		NullCheck(L_60);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_60, ((int32_t)168), (2.0f));
		RuntimeObject* L_61;
		L_61 = BEAMREACT_get_MY_mECBC88F4BFB77211DD640C2895419E5CEF84985B_inline(__this, NULL);
		__this->___MY_31 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_31), (void*)L_61);
		RuntimeObject* L_62;
		L_62 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_62, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_33 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_33), (void*)L_63);
		RuntimeObject* L_64 = __this->___PARTICLE_33;
		RuntimeObject* L_65 = __this->___MY_31;
		NullCheck(L_64);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_64, ((int32_t)199), L_65);
		RuntimeObject* L_66;
		L_66 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_66, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_35 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_35), (void*)L_67);
		RuntimeObject* L_68 = __this->___EXPLOSION_CENTER_35;
		NullCheck(L_68);
		float L_69;
		L_69 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_68, ((int32_t)195), (bool)1);
		__this->___temp_36 = L_69;
		RuntimeObject* L_70;
		L_70 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_70, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_38 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_38), (void*)L_71);
		RuntimeObject* L_72 = __this->___PARTICLE_38;
		float L_73 = __this->___temp_36;
		NullCheck(L_72);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_72, ((int32_t)195), L_73);
		RuntimeObject* L_74;
		L_74 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_74);
		RuntimeObject* L_75;
		L_75 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_74, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_40 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_40), (void*)L_75);
		RuntimeObject* L_76 = __this->___EXPLOSION_CENTER_40;
		NullCheck(L_76);
		float L_77;
		L_77 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_76, ((int32_t)196), (bool)1);
		__this->___temp_41 = L_77;
		RuntimeObject* L_78;
		L_78 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_78);
		RuntimeObject* L_79;
		L_79 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_78, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_43 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_43), (void*)L_79);
		RuntimeObject* L_80 = __this->___PARTICLE_43;
		float L_81 = __this->___temp_41;
		NullCheck(L_80);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_80, ((int32_t)196), L_81);
		RuntimeObject* L_82;
		L_82 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_82, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_46 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_46), (void*)L_83);
		RuntimeObject* L_84 = __this->___PARTICLE_46;
		NullCheck(L_84);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_84, ((int32_t)165), (2.0f));
		RuntimeObject* L_85;
		L_85 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_85, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_49 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_49), (void*)L_86);
		RuntimeObject* L_87 = __this->___PARTICLE_49;
		NullCheck(L_87);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_87, ((int32_t)213), (0.0f));
		RuntimeObject* L_88;
		L_88 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_88);
		RuntimeObject* L_89;
		L_89 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_88);
		NullCheck(L_89);
		RuntimeObject* L_90;
		L_90 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_89, ((int32_t)-682633353), (bool)1, (bool)1);
		__this->___PRTCTEX_50 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PRTCTEX_50), (void*)L_90);
		RuntimeObject* L_91;
		L_91 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_91);
		RuntimeObject* L_92;
		L_92 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_91, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_52 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_52), (void*)L_92);
		RuntimeObject* L_93 = __this->___PARTICLE_52;
		RuntimeObject* L_94 = __this->___PRTCTEX_50;
		NullCheck(L_93);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_93, ((int32_t)164), L_94);
		RuntimeObject* L_95;
		L_95 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_95);
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_96, ((int32_t)372812267), (bool)1, (bool)1);
		__this->___IMPLODEPARTICLE_53 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IMPLODEPARTICLE_53), (void*)L_97);
		RuntimeObject* L_98;
		L_98 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_98);
		RuntimeObject* L_99;
		L_99 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_98, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_55 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_55), (void*)L_99);
		RuntimeObject* L_100 = __this->___PARTICLE_55;
		RuntimeObject* L_101 = __this->___IMPLODEPARTICLE_53;
		NullCheck(L_100);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)191), L_101);
		RuntimeObject* L_102;
		L_102 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_102);
		RuntimeObject* L_103;
		L_103 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_102);
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_103, ((int32_t)-1400585671), (bool)1, (bool)1);
		__this->___LOCATEPARTICLE_56 = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LOCATEPARTICLE_56), (void*)L_104);
		RuntimeObject* L_105;
		L_105 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_105, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_58 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_58), (void*)L_106);
		RuntimeObject* L_107 = __this->___PARTICLE_58;
		RuntimeObject* L_108 = __this->___LOCATEPARTICLE_56;
		NullCheck(L_107);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)190), L_108);
		RuntimeObject* L_109;
		L_109 = BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline(__this, NULL);
		NullCheck(L_109);
		RuntimeObject* L_110;
		L_110 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_109, ((int32_t)-1590723103), (bool)0);
		__this->___PARTICLE_61 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PARTICLE_61), (void*)L_110);
		RuntimeObject* L_111 = __this->___PARTICLE_61;
		NullCheck(L_111);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_111, ((int32_t)204), (0.0f));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949 (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPARTICLE_set_MY_m2F8C10FE0917FE9BDE2156F2AEB20C12D87F7306 (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPARTICLE_get_THERE_m0C2533241534C5B24054FE74B0669B7299D19C1C (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPARTICLE_set_THERE_m306E15431DF9ECA642F0CBFD7F96A8923F441CA2 (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141 (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPARTICLE_set__world_m08491EBBF20DC951F2346027C4C569E1E436BE75 (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPARTICLE_get_Current_m46DB27882354B8786F0644EBF37FBDE06C26FBBB (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPARTICLE_set_Current_m89D128CB33EE25B48EADC834B6ED20EBCF6CF217 (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPARTICLE_Reset_m7C01A56670DD6EC9383149FACBAB6D4A61E47DEA (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPARTICLE__ctor_m44B107B40C0AE697F2C0D75A6D9FDEEA84243FB9 (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPARTICLE__ctor_mC07A3D0DFA1A72F5E7C18B0DE31701583B6CAD9B (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LOCATEPARTICLE_set_MY_m2F8C10FE0917FE9BDE2156F2AEB20C12D87F7306_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LOCATEPARTICLE_set_THERE_m306E15431DF9ECA642F0CBFD7F96A8923F441CA2_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LOCATEPARTICLE_set__world_m08491EBBF20DC951F2346027C4C569E1E436BE75_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LOCATEPARTICLE_MoveNext_mAC2BAFE494E50B510FF32DCC24813640315B11C5 (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_1, 5, ((int32_t)439));
		__this->___SHOOT_RANGE_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_RANGE_1), (void*)L_2);
		RuntimeObject* L_3 = __this->___SHOOT_RANGE_1;
		NullCheck(L_3);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_3, ((int32_t)231), (100.0f));
		RuntimeObject* L_4;
		L_4 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_4, 5, ((int32_t)441));
		__this->___SHOOT_FAC_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SHOOT_FAC_3), (void*)L_5);
		RuntimeObject* L_6 = __this->___SHOOT_FAC_3;
		NullCheck(L_6);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_6, ((int32_t)231), (0.0f));
		RuntimeObject* L_7;
		L_7 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		__this->___MY_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_4), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		RuntimeObject* L_9 = __this->___MY_4;
		RuntimeObject* L_10;
		L_10 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		RuntimeObject* L_11;
		L_11 = LOCATEPARTICLE_get_THERE_m0C2533241534C5B24054FE74B0669B7299D19C1C_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(30, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11);
		RuntimeObject* L_12;
		L_12 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)445));
		__this->___HIT_MINDIST_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_MINDIST_6), (void*)L_13);
		RuntimeObject* L_14 = __this->___HIT_MINDIST_6;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (bool)1);
		__this->___HIT_MINDIST_6_val = L_15;
		float L_16 = __this->___HIT_MINDIST_6_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_16, (0.0f), NULL);
		if (L_17)
		{
			goto IL_0607;
		}
	}
	{
		RuntimeObject* L_18;
		L_18 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, ((int32_t)704), (bool)0);
		__this->___HIT_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_9), (void*)L_19);
		RuntimeObject* L_20 = __this->___HIT_9;
		NullCheck(L_20);
		float L_21;
		L_21 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_20, ((int32_t)205), (bool)1);
		__this->___temp_10 = L_21;
		float L_22 = __this->___temp_10;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_22, (0.0f), NULL);
		if (!L_23)
		{
			goto IL_010d;
		}
	}
	{
		return (bool)0;
	}

IL_010d:
	{
		RuntimeObject* L_24;
		L_24 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_24, ((int32_t)704), (bool)0);
		__this->___HIT_12 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_12), (void*)L_25);
		RuntimeObject* L_26 = __this->___HIT_12;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Game_CheckEquals_m169F107C38D0D708B509749256D1AFC49C28DB15(L_26, (RuntimeObject*)NULL, NULL);
		if (!L_27)
		{
			goto IL_0134;
		}
	}
	{
		return (bool)0;
	}

IL_0134:
	{
		RuntimeObject* L_28;
		L_28 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_28, ((int32_t)704), (bool)0);
		__this->___HIT_13 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_13), (void*)L_29);
		RuntimeObject* L_30;
		L_30 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		__this->___MY_15 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_15), (void*)L_30);
		RuntimeObject* L_31 = __this->___MY_15;
		RuntimeObject* L_32 = __this->___HIT_13;
		NullCheck(L_31);
		InterfaceActionInvoker2< uint32_t, RuntimeObject* >::Invoke(51, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_31, ((int32_t)199), L_32);
		RuntimeObject* L_33;
		L_33 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, 5, ((int32_t)217512505));
		__this->___DISTX_16 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_16), (void*)L_34);
		RuntimeObject* L_35;
		L_35 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_35, 5, ((int32_t)217512505));
		__this->___DISTX_17 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_17), (void*)L_36);
		RuntimeObject* L_37 = __this->___DISTX_17;
		NullCheck(L_37);
		float L_38;
		L_38 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)231), (bool)1);
		__this->___DISTX_17_val = L_38;
		RuntimeObject* L_39;
		L_39 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_39, 5, ((int32_t)448));
		__this->___HIT_X_19 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_X_19), (void*)L_40);
		RuntimeObject* L_41 = __this->___HIT_X_19;
		NullCheck(L_41);
		float L_42;
		L_42 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_41, ((int32_t)231), (bool)1);
		__this->___HIT_X_19_val = L_42;
		RuntimeObject* L_43;
		L_43 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_43, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_22 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_22), (void*)L_44);
		RuntimeObject* L_45 = __this->___EXPLOSION_CENTER_22;
		NullCheck(L_45);
		float L_46;
		L_46 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_45, ((int32_t)195), (bool)1);
		__this->___temp_23 = L_46;
		RuntimeObject* L_47;
		L_47 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_47, 5, ((int32_t)448));
		__this->___HIT_X_27 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_X_27), (void*)L_48);
		RuntimeObject* L_49 = __this->___HIT_X_27;
		NullCheck(L_49);
		float L_50;
		L_50 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_49, ((int32_t)231), (bool)1);
		__this->___HIT_X_27_val = L_50;
		RuntimeObject* L_51;
		L_51 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_51, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_30 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_30), (void*)L_52);
		RuntimeObject* L_53 = __this->___EXPLOSION_CENTER_30;
		NullCheck(L_53);
		float L_54;
		L_54 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_53, ((int32_t)195), (bool)1);
		__this->___temp_31 = L_54;
		RuntimeObject* L_55;
		L_55 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_55);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_55, 5, ((int32_t)449));
		__this->___HIT_Y_35 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_Y_35), (void*)L_56);
		RuntimeObject* L_57 = __this->___HIT_Y_35;
		NullCheck(L_57);
		float L_58;
		L_58 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_57, ((int32_t)231), (bool)1);
		__this->___HIT_Y_35_val = L_58;
		RuntimeObject* L_59;
		L_59 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_59, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_38 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_38), (void*)L_60);
		RuntimeObject* L_61 = __this->___EXPLOSION_CENTER_38;
		NullCheck(L_61);
		float L_62;
		L_62 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_61, ((int32_t)196), (bool)1);
		__this->___temp_39 = L_62;
		RuntimeObject* L_63;
		L_63 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_63, 5, ((int32_t)449));
		__this->___HIT_Y_43 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_Y_43), (void*)L_64);
		RuntimeObject* L_65 = __this->___HIT_Y_43;
		NullCheck(L_65);
		float L_66;
		L_66 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_65, ((int32_t)231), (bool)1);
		__this->___HIT_Y_43_val = L_66;
		RuntimeObject* L_67;
		L_67 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_67, ((int32_t)-590743698), (bool)0);
		__this->___EXPLOSION_CENTER_46 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXPLOSION_CENTER_46), (void*)L_68);
		RuntimeObject* L_69 = __this->___EXPLOSION_CENTER_46;
		NullCheck(L_69);
		float L_70;
		L_70 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_69, ((int32_t)196), (bool)1);
		__this->___temp_47 = L_70;
		RuntimeObject* L_71 = __this->___DISTX_16;
		float L_72 = __this->___HIT_X_19_val;
		float L_73 = __this->___temp_23;
		float L_74 = __this->___HIT_X_27_val;
		float L_75 = __this->___temp_31;
		float L_76 = __this->___HIT_Y_35_val;
		float L_77 = __this->___temp_39;
		float L_78 = __this->___HIT_Y_43_val;
		float L_79 = __this->___temp_47;
		NullCheck(L_71);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_71, ((int32_t)231), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_72, L_73)), ((float)il2cpp_codegen_subtract(L_74, L_75)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_76, L_77)), ((float)il2cpp_codegen_subtract(L_78, L_79)))))));
		RuntimeObject* L_80;
		L_80 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_80, 5, ((int32_t)217512505));
		__this->___DISTX_49 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_49), (void*)L_81);
		RuntimeObject* L_82 = __this->___DISTX_49;
		NullCheck(L_82);
		float L_83;
		L_83 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_82, ((int32_t)231), (bool)1);
		__this->___DISTX_49_val = L_83;
		RuntimeObject* L_84;
		L_84 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_84);
		RuntimeObject* L_85;
		L_85 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_84, 5, ((int32_t)217512505));
		__this->___DISTX_50 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_50), (void*)L_85);
		RuntimeObject* L_86 = __this->___DISTX_50;
		float L_87 = __this->___DISTX_49_val;
		float L_88;
		L_88 = MathUtils_Sqrt_mC66300CAE9A1433A25EE41C5837D731B05AABD25(L_87, NULL);
		NullCheck(L_86);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_86, ((int32_t)231), L_88);
		RuntimeObject* L_89;
		L_89 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_89);
		RuntimeObject* L_90;
		L_90 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_89, 5, ((int32_t)217512507));
		__this->___DISTZ_51 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_51), (void*)L_90);
		RuntimeObject* L_91;
		L_91 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_91);
		RuntimeObject* L_92;
		L_92 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_91, 5, ((int32_t)217512507));
		__this->___DISTZ_52 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_52), (void*)L_92);
		RuntimeObject* L_93 = __this->___DISTZ_52;
		NullCheck(L_93);
		float L_94;
		L_94 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_93, ((int32_t)231), (bool)1);
		__this->___DISTZ_52_val = L_94;
		RuntimeObject* L_95;
		L_95 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = InterfaceFuncInvoker2< RuntimeObject*, uint32_t, bool >::Invoke(18, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_95, ((int32_t)704), (bool)0);
		__this->___HIT_54 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HIT_54), (void*)L_96);
		RuntimeObject* L_97 = __this->___HIT_54;
		NullCheck(L_97);
		float L_98;
		L_98 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_97, ((int32_t)200), (bool)1);
		__this->___temp_55 = L_98;
		RuntimeObject* L_99;
		L_99 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		__this->___MY_58 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_58), (void*)L_99);
		RuntimeObject* L_100 = __this->___MY_58;
		NullCheck(L_100);
		float L_101;
		L_101 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_100, ((int32_t)200), (bool)1);
		__this->___temp_59 = L_101;
		RuntimeObject* L_102 = __this->___DISTZ_51;
		float L_103 = __this->___temp_55;
		float L_104 = __this->___temp_59;
		NullCheck(L_102);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_102, ((int32_t)231), ((float)il2cpp_codegen_subtract(L_103, L_104)));
		RuntimeObject* L_105;
		L_105 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_105);
		RuntimeObject* L_106;
		L_106 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_105, 5, ((int32_t)217512505));
		__this->___DISTX_61 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_61), (void*)L_106);
		RuntimeObject* L_107 = __this->___DISTX_61;
		NullCheck(L_107);
		float L_108;
		L_108 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_107, ((int32_t)231), (bool)1);
		__this->___DISTX_61_val = L_108;
		float L_109 = __this->___DISTX_61_val;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_110;
		L_110 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_109, (0.0f), NULL);
		if (L_110)
		{
			goto IL_0567;
		}
	}
	{
		RuntimeObject* L_111;
		L_111 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		__this->___MY_63 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_63), (void*)L_111);
		RuntimeObject* L_112;
		L_112 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		__this->___MY_65 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_65), (void*)L_112);
		RuntimeObject* L_113 = __this->___MY_65;
		NullCheck(L_113);
		float L_114;
		L_114 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_113, ((int32_t)169), (bool)1);
		__this->___temp_66 = L_114;
		RuntimeObject* L_115;
		L_115 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_115);
		RuntimeObject* L_116;
		L_116 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_115, 5, ((int32_t)217512507));
		__this->___DISTZ_67 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTZ_67), (void*)L_116);
		RuntimeObject* L_117 = __this->___DISTZ_67;
		NullCheck(L_117);
		float L_118;
		L_118 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_117, ((int32_t)231), (bool)1);
		__this->___DISTZ_67_val = L_118;
		RuntimeObject* L_119;
		L_119 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_119);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_119, 5, ((int32_t)217512505));
		__this->___DISTX_69 = L_120;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DISTX_69), (void*)L_120);
		RuntimeObject* L_121 = __this->___DISTX_69;
		NullCheck(L_121);
		float L_122;
		L_122 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_121, ((int32_t)231), (bool)1);
		__this->___DISTX_69_val = L_122;
		RuntimeObject* L_123 = __this->___MY_63;
		float L_124 = __this->___DISTZ_67_val;
		float L_125 = __this->___DISTX_69_val;
		NullCheck(L_123);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_123, ((int32_t)169), ((float)(L_124/L_125)));
	}

IL_0567:
	{
		RuntimeObject* L_126;
		L_126 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		__this->___MY_72 = L_126;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_72), (void*)L_126);
		RuntimeObject* L_127 = __this->___MY_72;
		NullCheck(L_127);
		float L_128;
		L_128 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_127, ((int32_t)169), (bool)1);
		__this->___temp_73 = L_128;
		float L_129 = __this->___temp_73;
		bool L_130;
		L_130 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_129, (0.0f), NULL);
		if (!L_130)
		{
			goto IL_0605;
		}
	}
	{
		RuntimeObject* L_131;
		L_131 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		__this->___MY_75 = L_131;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_75), (void*)L_131);
		RuntimeObject* L_132;
		L_132 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		__this->___MY_77 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_77), (void*)L_132);
		RuntimeObject* L_133 = __this->___MY_77;
		NullCheck(L_133);
		float L_134;
		L_134 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_133, ((int32_t)169), (bool)1);
		__this->___temp_78 = L_134;
		RuntimeObject* L_135;
		L_135 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		__this->___MY_81 = L_135;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_81), (void*)L_135);
		RuntimeObject* L_136 = __this->___MY_81;
		NullCheck(L_136);
		float L_137;
		L_137 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_136, ((int32_t)169), (bool)1);
		__this->___temp_82 = L_137;
		RuntimeObject* L_138 = __this->___MY_75;
		float L_139 = __this->___temp_82;
		NullCheck(L_138);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_138, ((int32_t)169), ((-L_139)));
	}

IL_0605:
	{
		return (bool)0;
	}

IL_0607:
	{
		RuntimeObject* L_140;
		L_140 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		__this->___MY_85 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_85), (void*)L_140);
		RuntimeObject* L_141 = __this->___MY_85;
		NullCheck(L_141);
		float L_142;
		L_142 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_141, ((int32_t)213), (bool)1);
		__this->___temp_86 = L_142;
		float L_143 = __this->___temp_86;
		il2cpp_codegen_runtime_class_init_inline(Game_tECFD6919151788B21AB73A836592F3EE1A13E897_il2cpp_TypeInfo_var);
		bool L_144;
		L_144 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_143, (0.0f), NULL);
		RuntimeObject* L_145;
		L_145 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		__this->___MY_89 = L_145;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_89), (void*)L_145);
		RuntimeObject* L_146 = __this->___MY_89;
		NullCheck(L_146);
		float L_147;
		L_147 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_146, ((int32_t)205), (bool)1);
		__this->___temp_90 = L_147;
		float L_148 = __this->___temp_90;
		bool L_149;
		L_149 = Game_CheckEquals_mDB9EAF7AD6801D3D2480F9B8B28A0DCEE917D26D(L_148, (0.0f), NULL);
		if (!L_149)
		{
			goto IL_06a8;
		}
	}
	{
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_150 = (VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602*)il2cpp_codegen_object_new(VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602_il2cpp_TypeInfo_var);
		VANISHSTOP__ctor_m2608AFB1D24FBDA9CEF6CCE09CD2F1961E3AF94B(L_150, NULL);
		V_0 = L_150;
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_151 = V_0;
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_152 = L_151;
		RuntimeObject* L_153;
		L_153 = LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline(__this, NULL);
		NullCheck(L_152);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_152, L_153);
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_154 = L_152;
		RuntimeObject* L_155;
		L_155 = LOCATEPARTICLE_get_THERE_m0C2533241534C5B24054FE74B0669B7299D19C1C_inline(__this, NULL);
		NullCheck(L_154);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_154, L_155);
		RuntimeObject* L_156;
		L_156 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		NullCheck(L_154);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_154, L_156);
		RuntimeObject* L_157;
		L_157 = LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline(__this, NULL);
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_158 = V_0;
		NullCheck(L_157);
		RuntimeObject* L_159;
		L_159 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_157, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_158);
	}

IL_06a8:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPLAYERPARTICLE_get_MY_m2FAB34915D943AE5F28A2AB6D429F0C4BB3FB070 (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE_set_MY_mE8CEAA756757A55B9B478ED2AA09A82456DBF1EB (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPLAYERPARTICLE_get_THERE_m2B9C7E72F3B79C521DA6124AF3248D9468A2EEB3 (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE_set_THERE_mED24C9F8AFF89608FE8919D4C70A1EC005A00968 (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94 (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE_set__world_m0CC1151C176DEB582490DADC0472968DEB9F7BF6 (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPLAYERPARTICLE_get_Current_m2B7C52F82BB76EA0A2C707C64579385BF4EC83C2 (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE_set_Current_m6B8FD0FB746C9C6CC38AFBA0FE6EEB895F5174D6 (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE_Reset_m83D3B10E6EE87BB80E2346E859377ED4B27C99DE (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE__ctor_mEA1B4196B8E93A609022DCF64E4EDB82251FEA57 (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE__ctor_m17050048BB92D0A52CE67B0AB80E12567D6FF81A (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		LOCATEPLAYERPARTICLE_set_MY_mE8CEAA756757A55B9B478ED2AA09A82456DBF1EB_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		LOCATEPLAYERPARTICLE_set_THERE_mED24C9F8AFF89608FE8919D4C70A1EC005A00968_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		LOCATEPLAYERPARTICLE_set__world_m0CC1151C176DEB582490DADC0472968DEB9F7BF6_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LOCATEPLAYERPARTICLE_MoveNext_m171B99177A3CFF20F2F41F32B9CE82EFBB07BB56 (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* V_0 = NULL;
	VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* V_1 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = LOCATEPLAYERPARTICLE_get_MY_m2FAB34915D943AE5F28A2AB6D429F0C4BB3FB070_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)202), (bool)1);
		__this->___temp_3 = L_3;
		float L_4 = __this->___temp_3;
		bool L_5;
		L_5 = MathUtils_CheckGreater_m47BCC4E80A583B44E64DFD47C17CD87E95E506A4(L_4, (8.0f), NULL);
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
		L_6 = LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_6, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_4), (void*)L_7);
		RuntimeObject* L_8;
		L_8 = LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_8, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_5), (void*)L_9);
		RuntimeObject* L_10 = __this->___PLAYER_ARMOUR_5;
		NullCheck(L_10);
		float L_11;
		L_11 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_10, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARMOUR_5_val = L_11;
		RuntimeObject* L_12;
		L_12 = LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline(__this, NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_12, 5, ((int32_t)1211659215));
		__this->___PLAYER_ARMOUR_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_ARMOUR_6), (void*)L_13);
		RuntimeObject* L_14 = __this->___PLAYER_ARMOUR_6;
		NullCheck(L_14);
		float L_15;
		L_15 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_14, ((int32_t)231), (bool)1);
		__this->___PLAYER_ARMOUR_6_val = L_15;
		RuntimeObject* L_16 = __this->___PLAYER_ARMOUR_4;
		float L_17 = __this->___PLAYER_ARMOUR_6_val;
		NullCheck(L_16);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_16, ((int32_t)231), ((float)(L_17/(2.0f))));
		RuntimeObject* L_18;
		L_18 = LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_18, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_9), (void*)L_19);
		RuntimeObject* L_20;
		L_20 = LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, uint32_t >::Invoke(3, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_20, 5, ((int32_t)1861765784));
		__this->___PLAYER_RESULT_10 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PLAYER_RESULT_10), (void*)L_21);
		RuntimeObject* L_22 = __this->___PLAYER_RESULT_10;
		NullCheck(L_22);
		float L_23;
		L_23 = InterfaceFuncInvoker2< float, int32_t, bool >::Invoke(29, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_22, ((int32_t)231), (bool)1);
		__this->___PLAYER_RESULT_10_val = L_23;
		RuntimeObject* L_24 = __this->___PLAYER_RESULT_9;
		float L_25;
		L_25 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		NullCheck(L_24);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_24, ((int32_t)231), ((float)il2cpp_codegen_multiply((10.0f), ((float)il2cpp_codegen_add(L_25, (0.5f))))));
		FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* L_26 = (FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB*)il2cpp_codegen_object_new(FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB_il2cpp_TypeInfo_var);
		FLASHPLAYER__ctor_m03EDF2F6FD700301DD3211FC21701356026BA6A9(L_26, NULL);
		V_0 = L_26;
		FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* L_27 = V_0;
		FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* L_28 = L_27;
		RuntimeObject* L_29;
		L_29 = LOCATEPLAYERPARTICLE_get_MY_m2FAB34915D943AE5F28A2AB6D429F0C4BB3FB070_inline(__this, NULL);
		NullCheck(L_28);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_28, L_29);
		FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* L_30 = L_28;
		RuntimeObject* L_31;
		L_31 = LOCATEPLAYERPARTICLE_get_THERE_m2B9C7E72F3B79C521DA6124AF3248D9468A2EEB3_inline(__this, NULL);
		NullCheck(L_30);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_30, L_31);
		RuntimeObject* L_32;
		L_32 = LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline(__this, NULL);
		NullCheck(L_30);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_30, L_32);
		RuntimeObject* L_33;
		L_33 = LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline(__this, NULL);
		FLASHPLAYER_t7B61111D1796BFF17553277EC8715CE22D37CCBB* L_34 = V_0;
		NullCheck(L_33);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_33, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_34);
		RuntimeObject* L_36;
		L_36 = LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline(__this, NULL);
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IAcknexObjectContainer_t98387B21EF44C27F26E43E17DE022FD52F0B6B4D_il2cpp_TypeInfo_var, L_36);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker3< RuntimeObject*, uint32_t, bool, bool >::Invoke(56, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_37, ((int32_t)-1672909135), (bool)1, (bool)1);
		__this->___QGUN04SND_18 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QGUN04SND_18), (void*)L_38);
		RuntimeObject* L_39;
		L_39 = LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline(__this, NULL);
		RuntimeObject* L_40 = __this->___QGUN04SND_18;
		NullCheck(L_39);
		InterfaceActionInvoker5< RuntimeObject*, float, RuntimeObject*, float, float >::Invoke(35, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_39, L_40, (0.699999988f), (RuntimeObject*)NULL, (100.0f), (100.0f));
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_41 = (VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602*)il2cpp_codegen_object_new(VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602_il2cpp_TypeInfo_var);
		VANISHSTOP__ctor_m2608AFB1D24FBDA9CEF6CCE09CD2F1961E3AF94B(L_41, NULL);
		V_1 = L_41;
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_42 = V_1;
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_43 = L_42;
		RuntimeObject* L_44;
		L_44 = LOCATEPLAYERPARTICLE_get_MY_m2FAB34915D943AE5F28A2AB6D429F0C4BB3FB070_inline(__this, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_43, L_44);
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_45 = L_43;
		RuntimeObject* L_46;
		L_46 = LOCATEPLAYERPARTICLE_get_THERE_m2B9C7E72F3B79C521DA6124AF3248D9468A2EEB3_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_46);
		RuntimeObject* L_47;
		L_47 = LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline(__this, NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_45, L_47);
		RuntimeObject* L_48;
		L_48 = LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline(__this, NULL);
		VANISHSTOP_t882B793F8E53984A277C19AAC4D0497384133602* L_49 = V_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TIMEOUTPARTICLE_get_MY_mB522222CFFC6D324849D56BCD82BAE9A2960C5BC (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE_set_MY_mD9BE48D2119858B9D2DE1EDC5E4FC887E990B544 (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TIMEOUTPARTICLE_get_THERE_mA66801E9F617C93290CB26527112819F1615B254 (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE_set_THERE_m12ABFBA6ACD9FFA90C383C07A196FEBE3F1E6630 (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TIMEOUTPARTICLE_get__world_m747B08282C0B673669AB2A08D0693B445A375B5F (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE_set__world_mBD0A229437F7D9971FD924C46DD75F19274466A3 (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TIMEOUTPARTICLE_get_Current_m3858117C5CE9F0A04D8A45590304355B34EA6A31 (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE_set_Current_m78A659470E995A66E0C6FC1B13AFB880A94DE1D9 (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE_Reset_mC2DEED708F0A622E19EF06380BF0B290A0377DEE (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) 
{
	{
		__this->____cursor = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE__ctor_mC8BC4CED723159572160B4E74F577A2ADE0591AD (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE__ctor_m3F6AEB7CE688F385905957B01BC8D6E6F97367E8 (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, RuntimeObject* ___0_MY, RuntimeObject* ___1_THERE, RuntimeObject* ___2_world, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_MY;
		TIMEOUTPARTICLE_set_MY_mD9BE48D2119858B9D2DE1EDC5E4FC887E990B544_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_THERE;
		TIMEOUTPARTICLE_set_THERE_m12ABFBA6ACD9FFA90C383C07A196FEBE3F1E6630_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___2_world;
		TIMEOUTPARTICLE_set__world_mBD0A229437F7D9971FD924C46DD75F19274466A3_inline(__this, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TIMEOUTPARTICLE_MoveNext_m44CC3303C5A7A6571990881AB0C2971F2F95FFA5 (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* V_0 = NULL;
	{
		int32_t L_0 = __this->____cursor;
		RuntimeObject* L_1;
		L_1 = TIMEOUTPARTICLE_get_MY_mB522222CFFC6D324849D56BCD82BAE9A2960C5BC_inline(__this, NULL);
		__this->___MY_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_2), (void*)L_1);
		RuntimeObject* L_2 = __this->___MY_2;
		NullCheck(L_2);
		float L_3;
		L_3 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_2, ((int32_t)173), (bool)1);
		__this->___temp_3 = L_3;
		RuntimeObject* L_4;
		L_4 = TIMEOUTPARTICLE_get_MY_mB522222CFFC6D324849D56BCD82BAE9A2960C5BC_inline(__this, NULL);
		__this->___MY_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_5), (void*)L_4);
		RuntimeObject* L_5 = __this->___MY_5;
		float L_6 = __this->___temp_3;
		NullCheck(L_5);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_5, ((int32_t)173), ((float)il2cpp_codegen_add(L_6, (1.0f))));
		RuntimeObject* L_7;
		L_7 = TIMEOUTPARTICLE_get_MY_mB522222CFFC6D324849D56BCD82BAE9A2960C5BC_inline(__this, NULL);
		__this->___MY_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_8), (void*)L_7);
		RuntimeObject* L_8 = __this->___MY_8;
		NullCheck(L_8);
		float L_9;
		L_9 = InterfaceFuncInvoker2< float, uint32_t, bool >::Invoke(52, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_8, ((int32_t)173), (bool)1);
		__this->___temp_9 = L_9;
		float L_10 = __this->___temp_9;
		bool L_11;
		L_11 = MathUtils_CheckLower_m17CE4BF4225799467801213D6A8BA6A998686830(L_10, (8.0f), NULL);
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		return (bool)0;
	}

IL_0089:
	{
		RuntimeObject* L_12;
		L_12 = TIMEOUTPARTICLE_get_MY_mB522222CFFC6D324849D56BCD82BAE9A2960C5BC_inline(__this, NULL);
		__this->___MY_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MY_12), (void*)L_12);
		RuntimeObject* L_13 = __this->___MY_12;
		NullCheck(L_13);
		InterfaceActionInvoker2< uint32_t, float >::Invoke(47, IAcknexObject_tBA71F538E27020666B9EC9C259FF48708B804535_il2cpp_TypeInfo_var, L_13, ((int32_t)173), (0.0f));
		IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* L_14 = (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0*)il2cpp_codegen_object_new(IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0_il2cpp_TypeInfo_var);
		IMPLODEPARTICLE__ctor_m64AB1890C132CCEBB13F48C9419062F1A56327C4(L_14, NULL);
		V_0 = L_14;
		IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* L_15 = V_0;
		IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* L_16 = L_15;
		RuntimeObject* L_17;
		L_17 = TIMEOUTPARTICLE_get_MY_mB522222CFFC6D324849D56BCD82BAE9A2960C5BC_inline(__this, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_16, L_17);
		IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* L_18 = L_16;
		RuntimeObject* L_19;
		L_19 = TIMEOUTPARTICLE_get_THERE_mA66801E9F617C93290CB26527112819F1615B254_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_18, L_19);
		RuntimeObject* L_20;
		L_20 = TIMEOUTPARTICLE_get__world_m747B08282C0B673669AB2A08D0693B445A375B5F_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5, ICompiledAction_t1CD7E38C70B55892FA3F2FD99B0C39027EEBA278_il2cpp_TypeInfo_var, L_18, L_20);
		RuntimeObject* L_21;
		L_21 = TIMEOUTPARTICLE_get__world_m747B08282C0B673669AB2A08D0693B445A375B5F_inline(__this, NULL);
		IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* L_22 = V_0;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker2< RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, RuntimeObject* >::Invoke(39, IAcknexWorld_tA5C77DC4CBFB032A798D38BE52AD4A3BE4A1EF90_il2cpp_TypeInfo_var, L_21, (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)NULL, L_22);
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSAVEMENU_set_MY_m7173D12D13BC534C0658B5E595C30086B278B3D3_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSAVEMENU_set_THERE_m46ADC615F4B6978E54B98670F62042B3EB804901_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSAVEMENU_set__world_mC62EAD66DA5208341112763152FECCFDBBE9EE2C_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSAVEMENU_get__world_m50E0E3FCFEEA07490E72B37A6B364F7696CBEBE9_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSAVEMENU_get_MY_mDBA2D6017CB6D2EFA26018316C8C500CF2CD922E_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSAVEMENU_get_THERE_m5630B5CDEB30539132A4BE6E22CF09E9EACBFF3A_inline (SHOWSAVEMENU_t15EBA632C06AAC235FB4D83EBD39ED94604568B6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWLOADMENU_set_MY_m5967B56FE6155B2B0E8227CDE01EFA1E5CF52A9E_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWLOADMENU_set_THERE_mB2639C05646DA4023BFAE9F18C7D27CA3AD83DC3_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWLOADMENU_set__world_m43823B5308C410F16409F6915A8DD1EC5EB12BFB_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWLOADMENU_get__world_mFFCCD75ADD75953EF55566887C307484AE1AB00B_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWLOADMENU_get_MY_m8519010AEDC2A494998B553CFF1AE8BFC3BBD32D_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWLOADMENU_get_THERE_mF44729B4EDD642DB902108B5C48A0EEB553928FF_inline (SHOWLOADMENU_t61D5C2CCC52F878D4FA42327313F51B821430365* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU_set_MY_mDBDEF688FAA4DAE07CB88C395F17F92D471459CB_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU_set_THERE_m4E6048A9A518632C4C033B612D66FF73084EA505_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWSOUNDVOLUMEMENU_set__world_m74D96618BFC9397B056BF33B0BC25F4102F37428_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSOUNDVOLUMEMENU_get__world_mE9348CE7C925B60E53105FFBFED4BBB7F1466943_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSOUNDVOLUMEMENU_get_MY_m4B19CF921FE0C61B3A34E3EEFD935321CCC17287_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWSOUNDVOLUMEMENU_get_THERE_mC6776904B2172F2FB5258658CF48F8DCBA1DDC65_inline (SHOWSOUNDVOLUMEMENU_t12459A9BF586463E375737911DB163CC743644DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEMENU_set_MY_m6CA6A0E3BC085AFD01D7BAB34CCC762C99BCEB25_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEMENU_set_THERE_m4D9F2CA17FC2801EDAD960FF359E9C38F1DF0957_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEMENU_set__world_mDD69EFB1C840354FF635781EC16A29FD5D9164C8_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HIDEMENU_get__world_m8422E0243B76A6596510E6D11E2F8ED641859BFC_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HIDEMENU_get_MY_mA809949EB726C158A559D63C0E42CD1D18B24F9C_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HIDEMENU_get_THERE_m140C5A91B7004628B5F8B7D7CA03647EAFDD6907_inline (HIDEMENU_t2E5CCC0879346AEE99F89052715DD93FBC679A3A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUUP_set_MY_mDCFE5C508EE9ADC08BB1B5049AA224F3C5959E0F_inline (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUUP_set_THERE_mECDC89DE95A2983E21AC34255320C6B65BFA1CE9_inline (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUUP_set__world_m0A8A6D82D86F87881F10BC3B4F5ED600589D7A89_inline (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MENUUP_get__world_mE7AEB40C28530C4DF214F2B1B3151DD3A12FBC9A_inline (MENUUP_tAFFC615218C0BA1EC604B87DA544263629A12F91* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUDOWN_set_MY_m4644C5F6942820CB294F56EF042BC803709A07C4_inline (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUDOWN_set_THERE_mFAB776E31CBECC0A705B46219963F21209A5ADEC_inline (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MENUDOWN_set__world_mE9E66138A56C21DB1A5BDBAA442554E6D88FD95A_inline (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MENUDOWN_get__world_m19F1C88DBBB471B7AE25BF745400329CA0B3DE70_inline (MENUDOWN_t1A241418DCD3C53B1FFC468C17587A710182041D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUUP_set_MY_mC22DEC83495D941A87038A6E74644BDE6F1FC9F1_inline (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUUP_set_THERE_mB3F4B35030F7448CC9400F8716118EC508D1A027_inline (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUUP_set__world_mBDB356FFFE562BF01F9B8C1E3DED566B087E819A_inline (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUUP_get__world_m329FE1D0FD979551E86AEEE5464B4398D13BFFE5_inline (SUBMENUUP_tB15FA3EE34C9E64ABEBCB4B009435499ADAD7FB1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUDOWN_set_MY_m03F34FE8A947549338B263FD18722708F2C21D0E_inline (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUDOWN_set_THERE_m77BE279DEB0FFF6D10B79DEB6BC003534497F386_inline (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SUBMENUDOWN_set__world_mA22748DCCF2F48E0FE9B9B22446A65F02F110D7B_inline (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SUBMENUDOWN_get__world_m668E4ACA97DBCE650318B64FC01BFAB2F77CDB80_inline (SUBMENUDOWN_t42B2CB610E349470E9D5EB9D4D51AE05B7F2BE60* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEUP_set_MY_m9ED35C9BFAFAD7601A48861CA3C2BF474B71A53D_inline (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEUP_set_THERE_mFCED82953CE99725B4F51358AF15F58D912FF112_inline (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEUP_set__world_m14F106017196FB08A545A7B907F0587CF3AFEAAB_inline (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEUP_get__world_m7B32996000771E27040C523B30D032621C4AB8C5_inline (VOLUMEUP_t8C5DF8A78909C4175D868615D00F9123D97A5A8C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEDOWN_set_MY_mB11140190F3C37F0C2EFEE8895BBF9FF39EE2544_inline (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEDOWN_set_THERE_mBB5C3FFA6C63131F00E4F174CD9E2AE3816E24E4_inline (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VOLUMEDOWN_set__world_m0DE0BCFDF3B1E0A15A7EDEDCD11D4047B0DC644F_inline (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VOLUMEDOWN_get__world_mD9FF1B157EB940F3DDEE6E9C990C20E8AF24FC23_inline (VOLUMEDOWN_t568860FA7FDDADC0B58917D45FEF1238DCB45CB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEWEAPON_set_MY_m782DDF9401BB88C6B13FCDF4ECF6F64405CECF10_inline (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEWEAPON_set_THERE_mC336C3971A558129857606F5F8044EC10546D9E5_inline (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HIDEWEAPON_set__world_m988A107AB864B59B7B7A8F2C23F49380AA127D5F_inline (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HIDEWEAPON_get__world_m497A4616C6B3905C7ACF5D9A33371FC8B70FA452_inline (HIDEWEAPON_t0769A01EB4E978F15534761FB6D0F23BFC4A92D4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWWEAPON_set_MY_m725FF656BE336C1AEBBCF57F4D3375004750372C_inline (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWWEAPON_set_THERE_m6B116142203C49CC0CB7FAAE926967F554D04240_inline (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SHOWWEAPON_set__world_mF83DB7390B231C456FD62FD21ACA0CC293568FCA_inline (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SHOWWEAPON_get__world_mBD73FA8E49961EE93151F95109961802E57A21E0_inline (SHOWWEAPON_t173F456802A9EBEFB9145C75DE3A87A6A22D55FD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TYPEGAME_set_MY_mBAF7BC89DF9749EF01252E3DE2EB1A635DB0CEF0_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TYPEGAME_set_THERE_mFBBE5DED3B83C972EC254C9F3B3DD210CC4F5FB4_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TYPEGAME_set__world_mD00FC4301828E478F3929B5A40A59B95E46DA06A_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TYPEGAME_get__world_mE2DF7B857BBD6EA92314C552C7A054F8128B0CD6_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TYPEGAME_get_MY_m17489F8E2846DE825CF644AF6CA9E7D9E11AA511_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TYPEGAME_get_THERE_mC02388C0DF9CFAD2BD9A01D97DF54654014B08AD_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TYPEGAME_set_Current_mE6C11CDE53336E818B0765F39BA723F309D70D34_inline (TYPEGAME_tAEA0A1D1994829ADCE0EB80103782B96806FAFAA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGAME_set_MY_m0227DBF3679E495D61A6A03BE2C104F19D46F678_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGAME_set_THERE_mEF39E75013192C8D1A77982D443E65D460869183_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGAME_set__world_mC664A95E5FD94543C20E0942F85D4DFB23270E0F_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGAME_get__world_m9D1E0B4D256C97693510165D725889A4C65282EC_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGAME_get_MY_m4665B8349BBD4DFA23B685E683DF8893842771B8_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSEGAME_get_THERE_m910741DCF98D09CA58B4B1512026AEE91B0DE625_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSEGAME_set_Current_mFFD0F5EEC4B21D451D28620D5978A47C05199101_inline (CHOOSEGAME_t7E61A05E9D1D76AF2B2E2DB2675D9F5650A7C366* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSESUBMENU_set_MY_mFBECCAB8EBCCAD2C78AB7DE405B807849C21A4F7_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSESUBMENU_set_THERE_m6A299B236930BC100934D9860A4226387880285F_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CHOOSESUBMENU_set__world_m923AD95C5ACB1FB4DBC0C4F1D874D37ED12FA666_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSESUBMENU_get__world_m14EE2B6D93F74D537F1FE41854593323C6539679_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSESUBMENU_get_MY_mFF7455D77CD47DDFCE07302351BA476B7A1F134D_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CHOOSESUBMENU_get_THERE_m87F95DD5BA8D5907698CA4B08CC58DC8B9852E43_inline (CHOOSESUBMENU_t32DE611174B6AB81E5EAB1B4A5728E1BA56D5E0A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set_MY_m1184B941EDAAF921E19A1748158BB8406094D7BF_inline (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set_THERE_mB092CB296642E4B7699BB695A128BC140AAEE473_inline (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set__world_m18893C72495CA39B621FA360A969EBE808CD06C3_inline (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SAVEERRORMESSAGE_set_Current_m3526C84D707F7675ACD73E83C6B1B930881CF10F_inline (SAVEERRORMESSAGE_tA8034F6AE009CF4DD3A8F9FB36A7F516AD17286B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXITGAME_set_MY_mC35AC2A3D2358E7A3CDFED9CCFD8BE8E87ED9146_inline (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXITGAME_set_THERE_m64C5CBFDC25E1BF8D3F8B7F05114D603A0E86093_inline (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXITGAME_set__world_mCA151536C4B47CC5DD09B0710AC895485FECB6FA_inline (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXITGAME_get__world_m377DD7BD4EF224D154473DC40CB056E1ABDBD443_inline (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXITGAME_set_Current_m2BE9F988A298E4CAB15D610531B91E6CE570C9C6_inline (EXITGAME_t5D3ED6BC26A81917DF32DD9F6C9833D00E1A16EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESETANSWER_set_MY_m3CF5D8CA33642338735DA3A839DA19532D382CFD_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESETANSWER_set_THERE_m03045DBFC2AB06E687C14666AEB83ACAED4D7660_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RESETANSWER_set__world_m9C0C837D76E832479176BECBF8385105D7E38C5F_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RESETANSWER_get__world_mF799DC6155BEADC933B9559C6AD326E6CCA8D4F9_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RESETANSWER_get_MY_mA522E634FC9A607BF118F7704683FB9833B4BBBE_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RESETANSWER_get_THERE_mF4032FF2552FA2B6BE266A7F1B8C7FAEB5DF0EF2_inline (RESETANSWER_t5C2B31CC04072D86122797AEB2CF13C5C5AAAC63* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ASKFOREXIT_set_MY_m2A63FC5A387D9FBC2EB0A1B0DB2DB5F50797F010_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ASKFOREXIT_set_THERE_m4261B0FFEEE6437E575D185F11CBD7F54664AB29_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ASKFOREXIT_set__world_m12A9C0E2FB16483C27310D89073097AE499F85C0_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ASKFOREXIT_get__world_m6849E46FF15921C6D6E48371DC827DC3B8AF810A_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ASKFOREXIT_get_MY_m95ACA3F4FD0092A81AA8C34078D8CCD2BE9107B5_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ASKFOREXIT_get_THERE_mCF79AA89EB968931AFEEBC9664947FFE97C2593E_inline (ASKFOREXIT_tCA316D36F601E04404D7F5EED181D0AEC877E92A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDOFLEVEL_set_MY_mEA7689E7F5246E6B71B10D89E90AA5F11E8D4CB9_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDOFLEVEL_set_THERE_mADC9069F76DF25EBE1B03E7CB4A02F272FFD5C90_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDOFLEVEL_set__world_m22B431F389865B18D58B48ED0E7F8D67C06C2997_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDOFLEVEL_get__world_m968D4989F0D05A6B1C9FCDDC1162BC32719C4668_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDOFLEVEL_get_MY_m12E825EE690DCA3907B10F6DBE1D004A5B565D37_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ENDOFLEVEL_get_THERE_m8B60CDFD95470C2C6BA4A460F893C469EB922A18_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ENDOFLEVEL_set_Current_m4CC0583F26B094287ADA5E60512375DF83DC8868_inline (ENDOFLEVEL_tA9FD121D90B2B00A2EA4EA18007DF6E293B2710A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSTART_set_MY_m0C0C4FD5EB3CDA58B36764C0FDE95B0C52B80B1F_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSTART_set_THERE_m744F2BA6111DA88171C00B5C787942CC72F6C0B2_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSTART_set__world_m24F2250A093C17BE32CD8D9F9ED8BE3A6EEE69B4_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSTART_get_MY_m2768FB807EB449405DB98121F0AD9C996F4ABAB8_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSTART_get__world_mE18F913F2A207ED83B4CC37B1A29DD982323C719_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSTART_get_THERE_m33BB782EF7A64CF8AD39A2B1E59DE30CCD0B567E_inline (EXPLOSIONSTART_t288EA7E6D25ACC3601C0296290062E6A0D9D59BA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE_set_MY_m291420F8932BDF7FC7FC07C0BCA82F114F7B2067_inline (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE_set_THERE_m9F733AEBB9349B2A711CB100846A236828AD629F_inline (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONSMOKE_set__world_m9A1FADCCC5558FCA3E89FD66D905DEDD7C17D81F_inline (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSMOKE_get__world_mA9374F58A6A106F84AF0CDF85D9C7D20D0C1C9CC_inline (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONSMOKE_get_MY_mC538E97C93C95D2E42993FEE28FAF1C372D9BC4C_inline (EXPLOSIONSMOKE_t318406975E611817D4C95BE6207E902399EE8DC2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONEND_set_MY_m15A6EB7C5298C0306A50A6BD8169EEAC1C4A67F2_inline (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONEND_set_THERE_mE1EA0A58BFD6812F5E6E38C05DB0DFAF951EB5D6_inline (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLOSIONEND_set__world_mA2B7CC47933CDDAD574A0607577C1571AE2C6515_inline (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLOSIONEND_get_MY_m14801B9751E55813203AED53A990E3DBC6A64B1D_inline (EXPLOSIONEND_t4B607E507B641CCE8FC422B54AA4D944DA6AF401* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODETARGET_set_MY_m18625CFB1D3D11D7F22E82BBDE5A5A297B2AD340_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODETARGET_set_THERE_m972CA3D7666368A5C2A4EACE25D020A706A3FA0A_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODETARGET_set__world_mF51C11DDA7C1F576D27D6B1B17C305B3A6352590_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODETARGET_get_MY_m71973BE0C1CC5B54025C848CA7C6B599A9B871C2_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODETARGET_get__world_m4BDCE32CF9DE3ECC889FD48FC4C6CC6F10671E1B_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODETARGET_get_THERE_m63FA45BCC9DAA2DC34F5FA7C7432E1C9F89B40AE_inline (EXPLODETARGET_tAA50F0A581EF5172E477975EDC18EA7B7328DBF5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set_MY_mE5638C5A55A475F5E85B13C8A314B41643AD3F9E_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set_THERE_mD71A2141ADA22454FC04909DB9AC2AB7FE09B355_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set__world_mE29389DDF0E7729CAC53A6CF6A53E73ACAAA9F45_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODEMISSILE_get_MY_m110935306217E317FC1F9EE6515BBE2077268879_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODEMISSILE_get_THERE_mF81904D64263EFC0C4687825610AFAC5C3C7674D_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EXPLODEMISSILE_get__world_m7766A0FBFA70AC5EE4A34497BB9D26484E7E693A_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EXPLODEMISSILE_set_Current_mC6F43E9C44C1BE2615CE60F8A4AF3DDE9FE7E2CB_inline (EXPLODEMISSILE_tF7CF9007525159082FE8693487FF90BCA6CDF86B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AIMMISSILE_set_MY_mA95083A7B27199CA96ABEAF3114E8418C3567A90_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AIMMISSILE_set_THERE_mE144A71013880F151220AD4C03D0C8DE1B9B3B43_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AIMMISSILE_set__world_mB14CB1DA5263E88824C047804822213A5D2FDF0B_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AIMMISSILE_get__world_m2ACF2382B2CD74EFFA58627CC0BEBFD9C8EAD0F1_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AIMMISSILE_get_MY_mD7C9AFE3FE7C983588C034750D85B509DD885381_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AIMMISSILE_get_THERE_m4F850BABA8D0E9A54BE935296D0D428560ADEA39_inline (AIMMISSILE_tBE13E582CF876DCE4DFC5B432FBDA04E1CB6FDFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONSTART_set_MY_m57EC2077F79106611238E31ED19E699EE720BAFC_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONSTART_set_THERE_mDE7487F72FF950D8BF92E9B5D07B93762DF4FB5B_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONSTART_set__world_mBB5EE6CDFC345580E2775716A71254364C49D78B_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONSTART_get_MY_mD17428D6D14CB24E337FD158D8C32A43AAED5928_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONSTART_get__world_mFB39315AD7C159F61B98FD481A3F4F34D7FE5A6A_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONSTART_get_THERE_mD2AFBEBB836F957875F2DA0F21ED466D790F3777_inline (IMPLOSIONSTART_tC4A94B81B6DB114C874F23C525EDFD20803636DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH_set_MY_m714B8F47D880E6A474388F47DFE662251888DFD6_inline (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH_set_THERE_m8F2EF4061C48A3EDE3753EBD3E02E7834E560C6E_inline (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONCRUSH_set__world_mA83B18E7E0D5F310A8DA4E22676ED17FE791E506_inline (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONCRUSH_get__world_m7B6AA6D60C06396CF92A614D46EF16D05112B3FB_inline (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONCRUSH_get_MY_m880A8C55013EC1D3AB95A56BC906EF9D491300C4_inline (IMPLOSIONCRUSH_tD9FA2781FEBBC02800CDFF6B0C1B6565A4F89399* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONFLARE_set_MY_m71729FCB4DD61056C8C6DE12F934990ADC8EBF9B_inline (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONFLARE_set_THERE_mA01FCE0E8C5A607D567CC3709F499B80F5E31159_inline (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONFLARE_set__world_m8669F37FC9901537CE7B930E6FAF595FFA35084C_inline (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONFLARE_get__world_m155D41820B2056D40970871E00E4806DE3ED3185_inline (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONFLARE_get_MY_m1FDA72856C155E7007A7F98D95B8F715CF9A6BE6_inline (IMPLOSIONFLARE_t8D696CFB385DEB3BA671DEFE146BA1581FE8C0A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONEND_set_MY_m8D3372ACA4F27919095A3A91CD7042DB4DAFA76C_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONEND_set_THERE_mE04C4D7BD7426ED072A56933D4E2F714EBBB4F80_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONEND_set__world_mB7C60A963D01C93641F0F49132DA92E0C3498C72_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONEND_get_MY_mCDE9580BB4AFEA1DE0C145E9DADA4D44421835B5_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONEND_get__world_m1A89741933843046265F0C52756271A241774D57_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLOSIONEND_get_THERE_m50640595723D624F3B464ABCE73FE3284C68658A_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLOSIONEND_set_Current_mFE73FBB9B39CD413C274619604596CC08AA4208A_inline (IMPLOSIONEND_t8E7624465FC01E6C7751609A84818F9ADAC817C2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set_MY_mCA7B1F3F8BEFC1FC12A46B50C1590AF463FAC731_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set_THERE_mC121BA7807BFE3421E3CB59F7130F3B1C42272B7_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set__world_m0C5295E5E35BBF4093D73B53974472870C9AC6EA_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLODEPARTICLE_get_MY_m199E7B7C2AE13FBF7F26B0871F6142D0A0DE2B88_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLODEPARTICLE_get__world_m5C60FE85AA015DD09EC7AB96AC959543D6580CFD_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* IMPLODEPARTICLE_get_THERE_mCA182BE8506C8BE3CEB1554164A4A0A43F751565_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IMPLODEPARTICLE_set_Current_m28DD4FAA43AA65473DAB09754B3238725DF7678E_inline (IMPLODEPARTICLE_t0226E3EBB810E19797FAAA4C3EBBFD2F23E7FBA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAMREACT_set_MY_m763A8A1C93ADEEF32C78BF0C46620D64B0DD3FED_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAMREACT_set_THERE_m11C82C8CF69D6DC2B46B8F399E0CDF8484485E8E_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BEAMREACT_set__world_m1437C914B9A391726E153E4A61792ED9F1A77670_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAMREACT_get_MY_mECBC88F4BFB77211DD640C2895419E5CEF84985B_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAMREACT_get_THERE_m2A471DED10D9E8EC1E6ACD515F047449F5A940E3_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BEAMREACT_get__world_m92D8A63A76A2C1F5A9811FA961C1625B1FE3EACD_inline (BEAMREACT_t26BB7330C281C7765F591A7EBDFE2D6F893C2A34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPARTICLE_set_MY_m2F8C10FE0917FE9BDE2156F2AEB20C12D87F7306_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPARTICLE_set_THERE_m306E15431DF9ECA642F0CBFD7F96A8923F441CA2_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPARTICLE_set__world_m08491EBBF20DC951F2346027C4C569E1E436BE75_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPARTICLE_get__world_m172E43B5E2849A21BEBF13A69E70C7A795A0B141_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPARTICLE_get_MY_m64282DF1E1B570E24AE610CD07DCF239203E6949_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPARTICLE_get_THERE_m0C2533241534C5B24054FE74B0669B7299D19C1C_inline (LOCATEPARTICLE_t7889F5D76933B1F9604BA3F027E3843BC5C471CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE_set_MY_mE8CEAA756757A55B9B478ED2AA09A82456DBF1EB_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE_set_THERE_mED24C9F8AFF89608FE8919D4C70A1EC005A00968_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LOCATEPLAYERPARTICLE_set__world_m0CC1151C176DEB582490DADC0472968DEB9F7BF6_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPLAYERPARTICLE_get_MY_m2FAB34915D943AE5F28A2AB6D429F0C4BB3FB070_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPLAYERPARTICLE_get__world_m44BCA289C2AA25ACE91DBE48360C17036C6E4C94_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LOCATEPLAYERPARTICLE_get_THERE_m2B9C7E72F3B79C521DA6124AF3248D9468A2EEB3_inline (LOCATEPLAYERPARTICLE_tBD8D50054D0C3CF8D92218DC7A62C44D18D8D758* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE_set_MY_mD9BE48D2119858B9D2DE1EDC5E4FC887E990B544_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMYU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMYU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE_set_THERE_m12ABFBA6ACD9FFA90C383C07A196FEBE3F1E6630_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTHEREU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTHEREU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TIMEOUTPARTICLE_set__world_mBD0A229437F7D9971FD924C46DD75F19274466A3_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3C_worldU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3C_worldU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TIMEOUTPARTICLE_get_MY_mB522222CFFC6D324849D56BCD82BAE9A2960C5BC_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMYU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TIMEOUTPARTICLE_get_THERE_mA66801E9F617C93290CB26527112819F1615B254_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTHEREU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TIMEOUTPARTICLE_get__world_m747B08282C0B673669AB2A08D0693B445A375B5F_inline (TIMEOUTPARTICLE_t64A266062FAEBBB99C2D1760E78CED4F8A8729F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3C_worldU3Ek__BackingField;
		return L_0;
	}
}

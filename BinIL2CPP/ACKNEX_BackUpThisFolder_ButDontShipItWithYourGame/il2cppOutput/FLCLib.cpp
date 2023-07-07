#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FLCChunkU5BU5D_t8D7E5FC37690DB1ED42B07A6862A6076F0576857;
struct FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5;
struct FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0;
struct FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC;
struct FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9;
struct FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE;
struct FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E;
struct FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6;
struct FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44;
struct FLCChunkUnknown_t77CF552176DB5783CFA7D20078E70A525C1F2886;
struct FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B;
struct FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB;
struct FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0;
struct FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct MethodInfo_t;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8;
struct PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t25059D7CCC266671DF19F9B86D3B61AA2EDF703E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLCChunkUnknown_t77CF552176DB5783CFA7D20078E70A525C1F2886_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBAC3A042A328802918B3118A813841BB0DA1ED2B____03B7718FBE6CB482FA9EBF4E0BABF51146D62687AF7EB971DEAFC1D9B3E2C88E_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBAC3A042A328802918B3118A813841BB0DA1ED2B____91EFAF82F22C9BDA9A975155C58C251B81C7556F3F24C5A53C535007CF2CD48A_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24CF8DB7612305D388383BCEE1F188640A2C2C39;
IL2CPP_EXTERN_C String_t* _stringLiteral466884BA580F8BB574B89E77BBEF55D0E235BDB2;
IL2CPP_EXTERN_C String_t* _stringLiteralABD4F78C90EA0F89ADA6BBAC2E8854EB9D265C03;
IL2CPP_EXTERN_C String_t* _stringLiteralAE9314ECB2693EC81018386FC14CC202DE4C33F6;
IL2CPP_EXTERN_C const RuntimeMethod* FLCChunkFrameType_ReadFromStream_m2A4B6054A2F8428F2F025BD80CC6708DA13A4D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FLCFile_Open_m8609DFAF0FE143FEC9029C204C415DEFE7285A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FLCFile_Play_m3F411E3E0308019E332EA20616EFF003427A5709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FLCFile_U3CPlayU3Eb__40_0_mB2BE312D736AFD0AA8F53439EF985C199033A216_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF4E9F4B7AE8EDB6C98E607157585FEF28F380320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1D97235E89F53639C09FB5124247DB3F15720D05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5EFE7E141EDD861F429B54C267B450401B492D32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m02B4DD41DAF6A26617F539C1884EB316FD082037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m27A8B37A0E3CD1A6D157B73C5479FCA0D8126823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m8E46D7AA872D26E18E4F7C55524ED19AB2390119_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t38FB98E6FBA672068AAD70200AF2AE7C8B3025F3 
{
};
struct List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE  : public RuntimeObject
{
	FLCChunkU5BU5D_t8D7E5FC37690DB1ED42B07A6862A6076F0576857* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_tBAC3A042A328802918B3118A813841BB0DA1ED2B  : public RuntimeObject
{
};
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer;
	int32_t ___m_maxCharsSize;
	bool ___m_2BytesPerChar;
	bool ___m_isMemoryStream;
	bool ___m_leaveOpen;
};
struct FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5  : public RuntimeObject
{
	uint32_t ___U3CSizeU3Ek__BackingField;
	int32_t ___U3CTypeU3Ek__BackingField;
	List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* ___U3CSubChunksU3Ek__BackingField;
	FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___U3COwnerFileU3Ek__BackingField;
};
struct FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44  : public RuntimeObject
{
	int32_t ___size;
	int32_t ___type;
	int16_t ___subchunks;
	int32_t ___reserved1;
	int32_t ___reserved2;
};
struct FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B  : public RuntimeObject
{
	FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* ___OnFrameUpdated;
	PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* ___OnPlaybackStarted;
	PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* ___OnPlaybackFinished;
	bool ___U3CIsPausedU3Ek__BackingField;
	bool ___U3CIsPlayingU3Ek__BackingField;
	bool ___U3CShouldLoopU3Ek__BackingField;
	bool ___U3CPauseAfterFirstFrameU3Ek__BackingField;
	FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* ___header;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader;
	int32_t ___frameCounter;
	FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* ___currentPalette;
	FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB* ___currentFrame;
};
struct FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB  : public RuntimeObject
{
	FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___file;
	FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* ___framebuffer;
};
struct FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0  : public RuntimeObject
{
	int32_t ___size;
	int16_t ___type;
	int16_t ___frames;
	int16_t ___width;
	int16_t ___height;
	int16_t ___depth;
	int16_t ___flags;
	int32_t ___speed;
	int16_t ___reserved1;
	int32_t ___created;
	int32_t ___creator;
	int32_t ___updated;
	int32_t ___updater;
	int16_t ___aspect_dx;
	int16_t ___aspect_dy;
	int16_t ___ext_flags;
	int16_t ___keyframes;
	int16_t ___totalframes;
	int32_t ___req_memory;
	int16_t ___max_regions;
	int16_t ___transp_num;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___reserved2;
	int32_t ___oframe1;
	int32_t ___oframe2;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___reserved3;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t25059D7CCC266671DF19F9B86D3B61AA2EDF703E  : public RuntimeObject
{
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
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 
{
	bool ___hasValue;
	uint16_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0  : public FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PixelData;
};
struct FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC  : public FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5
{
	FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* ___Colors;
};
struct FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9  : public FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Payload;
};
struct FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE  : public FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Payload;
};
struct FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E  : public FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PixelData;
};
struct FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6  : public FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5
{
	uint16_t ___U3CChunksU3Ek__BackingField;
	uint16_t ___U3CDelayU3Ek__BackingField;
	int16_t ___U3CReservedU3Ek__BackingField;
	uint16_t ___U3CWidthU3Ek__BackingField;
	uint16_t ___U3CHeightU3Ek__BackingField;
};
struct FLCChunkUnknown_t77CF552176DB5783CFA7D20078E70A525C1F2886  : public FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5
{
};
struct FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___R;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___R_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___G_OffsetPadding[1];
			uint8_t ___G;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___G_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___G_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___B_OffsetPadding[2];
			uint8_t ___B;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___B_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___B_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___A_OffsetPadding[3];
			uint8_t ___A;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___A_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___A_forAlignmentOnly;
		};
	};
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D375_t87868CBC8627FB16A4EC7801C4ACAB3C5531976E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D375_t87868CBC8627FB16A4EC7801C4ACAB3C5531976E__padding[375];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D661_t4CF7A229FEB7812727CC3C0265369C42C0DB5045 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D661_t4CF7A229FEB7812727CC3C0265369C42C0DB5045__padding[661];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435  : public MulticastDelegate_t
{
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8  : public MulticastDelegate_t
{
};
struct PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754  : public MulticastDelegate_t
{
};
struct List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE_StaticFields
{
	FLCChunkU5BU5D_t8D7E5FC37690DB1ED42B07A6862A6076F0576857* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_tBAC3A042A328802918B3118A813841BB0DA1ED2B_StaticFields
{
	__StaticArrayInitTypeSizeU3D661_t4CF7A229FEB7812727CC3C0265369C42C0DB5045 ___03B7718FBE6CB482FA9EBF4E0BABF51146D62687AF7EB971DEAFC1D9B3E2C88E;
	__StaticArrayInitTypeSizeU3D375_t87868CBC8627FB16A4EC7801C4ACAB3C5531976E ___91EFAF82F22C9BDA9A975155C58C251B81C7556F3F24C5A53C535007CF2CD48A;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80  : public RuntimeArray
{
	ALIGN_FIELD (8) FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC m_Items[1];

	inline FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m27A8B37A0E3CD1A6D157B73C5479FCA0D8126823_gshared (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_gshared_inline (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Nullable_1_GetValueOrDefault_m02B4DD41DAF6A26617F539C1884EB316FD082037_gshared_inline (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Nullable_1_get_Value_m8E46D7AA872D26E18E4F7C55524ED19AB2390119_gshared (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunk_set_OwnerFile_mB2BE9479795C830F115DB32F6F2AD88593F99900_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_value, const RuntimeMethod* method) ;
inline void List_1__ctor_m1D97235E89F53639C09FB5124247DB3F15720D05 (List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunk_set_SubChunks_m6FD2C29D1F6F85599FDCD1119E0A8B6E2F1D74A3_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* FLCChunk_get_OwnerFile_m4EBC0D902157669465C42710B2040BEFD5D78DC6_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* FLCChunk_CreateFromStream_mF01901540B7C285475D82C5C328FDE5665D129B1 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___1_file, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) ;
inline void List_1_Add_mF4E9F4B7AE8EDB6C98E607157585FEF28F380320_inline (List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* __this, FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE*, FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkFrameType__ctor_m683C356DCED6248B195233F3B1337826E89EE08C (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkColor256__ctor_m0EF5572819C6AD71B65423175C46A3C689E059A1 (FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkByteRun__ctor_m0FA900D111412D16F6BF0D849C07314A42FA90BF (FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkFLICopy__ctor_m7809DE9A7E97831C31D6EC2B329411C26AC00F33 (FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkDeltaFLC__ctor_m110BEBA948A180BE9B4CFD22E51C7E0C9C601F8F (FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkDeltaFLI__ctor_m2A0808680C048014348A1DDE8A477DCC6BFDAAD7 (FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkUnknown__ctor_mA76BBF9EA37E28AD27B1842597ED1DE82873DA68 (FLCChunkUnknown_t77CF552176DB5783CFA7D20078E70A525C1F2886* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunk_set_Size_m0CE094B2EA73775BC9E75B0BB5991BAB44A95150_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunk_set_Type_m338766645335D51A5DDC5285E7656E12FF672721_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92 (List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* (*) (List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FLCChunk_get_Type_mAA097A1AF0CE831E630877714B92E3290DB312F4_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m5EFE7E141EDD861F429B54C267B450401B492D32_inline (List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkHeader__ctor_m9EE8DA9B1BF72238A6D88E349B2C1870C752C934 (FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCColor__ctor_m1B250F8BCD53F9D27E1AD9B00F8992A720D9B8C3 (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC* __this, uint8_t ___0_setR, uint8_t ___1_setG, uint8_t ___2_setB, uint8_t ___3_setA, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FLCColor_ToString_m1272AB0B9A4A938231391F4CF6895E3C9E49319B (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCFile_set_ShouldLoop_mE51FCC851AE20B44E011AFCCFF7CE513D8094C04_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCFile_set_IsPlaying_mE7059352827FC8637FDBF2988663BD405EC1C836_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCFile_set_IsPaused_mF5EB68F40E1F3B1D8DE3742593AD20356BEA909F_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCFile_set_PauseAfterFirstFrame_m73EB197C99813DB30120E40393C1866C37138B3C_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* FLCHeader_ReadFromStream_m2C9C6B6CAC042E2F7158CA0102C93B7638F7FB22 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFrameBuffer__ctor_m860D2F9C17EF37F053B73AE28474DF4FECD1D4D4 (FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setFile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* FLCFrameBuffer_GetFramebufferCopy_m9A6B0145F373E65C384AF979C0E7B4588BD3D34C (FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* FLCChunk_GetChunkByType_m05317A780D467EC1084C39E4A73F3C88D9136644 (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, int32_t ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFrameBuffer_UpdateFromFLCChunk_m2B51C00E00F768963B0E3A30CEEFC45B2D7CA912 (FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB* __this, FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* ___0_chunk, FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* ___1_paletteChunk, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_inline (FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_inline (PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FLCFile_get_IsPaused_m2184CE7EB16824212C7E3593ECFCAB83B839206B_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* FLCFile_ReadNextChunk_m89288B8CDF0632400E2E6ADA1E323510CFD308D2 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FLCFile_get_ShouldLoop_m31D89D5D0DCF15BB8B7B4067C3DB00CE99FE8B5B_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_InternalStop_m14D4E5CA04267045F706EE04D6E9B77B75B1E855 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_didFinishNormally, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FLCFile_get_IsPlaying_mDBAEC7AC5DBC6A4E8B80E2C7492DC8DFE3920378_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FLCFile_get_PauseAfterFirstFrame_m4467FB446B3F4CFD4F6D7469BD295FFDA57F1977_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Start_m2DC09C3214A841B5C3A6AD800E4020DE365FA620 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_inline (PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, bool ___1_didFinishNormally, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader_Dispose_mAFF1A9CE9A73D148270FFA1F896992EB52D36078 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_PlayInternal_mC62D6F945BC445F2C9A76B0575AD0114BBB18C87 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FLCFile_get_Height_m85580D1EE77F7EA7DB89E63E50741182FD9126DE (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
inline void Nullable_1__ctor_m27A8B37A0E3CD1A6D157B73C5479FCA0D8126823 (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, uint16_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9*, uint16_t, const RuntimeMethod*))Nullable_1__ctor_m27A8B37A0E3CD1A6D157B73C5479FCA0D8126823_gshared)(__this, ___0_value, method);
}
inline bool Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_inline (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9*, const RuntimeMethod*))Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_gshared_inline)(__this, method);
}
inline uint16_t Nullable_1_GetValueOrDefault_m02B4DD41DAF6A26617F539C1884EB316FD082037_inline (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m02B4DD41DAF6A26617F539C1884EB316FD082037_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
inline uint16_t Nullable_1_get_Value_m8E46D7AA872D26E18E4F7C55524ED19AB2390119 (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9*, const RuntimeMethod*))Nullable_1_get_Value_m8E46D7AA872D26E18E4F7C55524ED19AB2390119_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCHeader__ctor_m126D12E2F48292809457CF6E2B57D7F5CB55ECBE (FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunk__ctor_mF903FDA29055B00FE5A493BC6763ED2C90E77AEF (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunk_ReadFromStream_m0F643F3E13D2A5D0F672D62CEB5B7349D6D6CF7C (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t FLCChunk_get_Size_m3770E981A84B9417A3A16623DBAD3CED2AB21BD6_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Chunks_m6008496BF989F066A2EF58267531B77B0F883DC7_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Delay_m1352FF97F472CEDCA9257260E8543B905C1A06DC_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Reserved_m46447B79D8E139C00B4A6DE6AF67567E656C679E_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, int16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Width_m84E32F5E3817F98664272DBE77F5B223C397D77D_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Height_mB726B82F59EA7D82B691343E5D1A2C8BD1A2959E_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FLCChunkFrameType_get_Width_m83A023D30B28047522FCFDE07B48614DF96237EC_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FLCChunkFrameType_get_Height_mD434F5265FC98917091B66A4E0269CDCFD936B58_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FLCChunkFrameType_get_Chunks_m5E02401D17CF326BAA820AF60C0B83E7CDE92C35_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunk_ReadSubChunks_m45A64400C8124E85EF7B70130F1DA903F62B714E (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, int32_t ___1_count, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mA81B2D6E5B2DC808B471C29B36D1ECA0CAEEF00C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBAC3A042A328802918B3118A813841BB0DA1ED2B____03B7718FBE6CB482FA9EBF4E0BABF51146D62687AF7EB971DEAFC1D9B3E2C88E_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBAC3A042A328802918B3118A813841BB0DA1ED2B____91EFAF82F22C9BDA9A975155C58C251B81C7556F3F24C5A53C535007CF2CD48A_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)661));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBAC3A042A328802918B3118A813841BB0DA1ED2B____03B7718FBE6CB482FA9EBF4E0BABF51146D62687AF7EB971DEAFC1D9B3E2C88E_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)375));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBAC3A042A328802918B3118A813841BB0DA1ED2B____91EFAF82F22C9BDA9A975155C58C251B81C7556F3F24C5A53C535007CF2CD48A_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)13);
		(&V_0)->___TotalTypes = ((int32_t)13);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m5F960A2D41C67D4C950E2B54E8D5A2165E71D9EA (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t25059D7CCC266671DF19F9B86D3B61AA2EDF703E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
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
IL2CPP_EXTERN_C void MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshal_pinvoke(const MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC& unmarshaled, MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshal_pinvoke_back(const MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshaled_pinvoke& marshaled, MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshal_pinvoke_cleanup(MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshal_com(const MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC& unmarshaled, MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshal_com_back(const MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshaled_com& marshaled, MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshal_com_cleanup(MonoScriptData_t54C9268FD25C93AF69DA5157A36F3BDF19D83BAC_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FLCChunk_get_Size_m3770E981A84B9417A3A16623DBAD3CED2AB21BD6 (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CSizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunk_set_Size_m0CE094B2EA73775BC9E75B0BB5991BAB44A95150 (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FLCChunk_get_Type_mAA097A1AF0CE831E630877714B92E3290DB312F4 (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunk_set_Type_m338766645335D51A5DDC5285E7656E12FF672721 (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6 (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_0 = __this->___U3CSubChunksU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunk_set_SubChunks_m6FD2C29D1F6F85599FDCD1119E0A8B6E2F1D74A3 (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_0 = ___0_value;
		__this->___U3CSubChunksU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubChunksU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* FLCChunk_get_OwnerFile_m4EBC0D902157669465C42710B2040BEFD5D78DC6 (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) 
{
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = __this->___U3COwnerFileU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunk_set_OwnerFile_mB2BE9479795C830F115DB32F6F2AD88593F99900 (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_value, const RuntimeMethod* method) 
{
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = ___0_value;
		__this->___U3COwnerFileU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COwnerFileU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunk__ctor_mF903FDA29055B00FE5A493BC6763ED2C90E77AEF (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1D97235E89F53639C09FB5124247DB3F15720D05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = ___0_setOwnerFile;
		FLCChunk_set_OwnerFile_mB2BE9479795C830F115DB32F6F2AD88593F99900_inline(__this, L_0, NULL);
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_1 = (List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE*)il2cpp_codegen_object_new(List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE_il2cpp_TypeInfo_var);
		List_1__ctor_m1D97235E89F53639C09FB5124247DB3F15720D05(L_1, List_1__ctor_m1D97235E89F53639C09FB5124247DB3F15720D05_RuntimeMethod_var);
		FLCChunk_set_SubChunks_m6FD2C29D1F6F85599FDCD1119E0A8B6E2F1D74A3_inline(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunk_ReadFromStream_m0F643F3E13D2A5D0F672D62CEB5B7349D6D6CF7C (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunk_ReadSubChunks_m45A64400C8124E85EF7B70130F1DA903F62B714E (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, int32_t ___1_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF4E9F4B7AE8EDB6C98E607157585FEF28F380320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_1;
		L_1 = FLCChunk_get_OwnerFile_m4EBC0D902157669465C42710B2040BEFD5D78DC6_inline(__this, NULL);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_2;
		L_2 = FLCChunk_CreateFromStream_mF01901540B7C285475D82C5C328FDE5665D129B1(L_0, L_1, NULL);
		V_1 = L_2;
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_3;
		L_3 = FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline(__this, NULL);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_4 = V_1;
		NullCheck(L_3);
		List_1_Add_mF4E9F4B7AE8EDB6C98E607157585FEF28F380320_inline(L_3, L_4, List_1_Add_mF4E9F4B7AE8EDB6C98E607157585FEF28F380320_RuntimeMethod_var);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___1_count;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* FLCChunk_CreateFromStream_mF01901540B7C285475D82C5C328FDE5665D129B1 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___1_file, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkUnknown_t77CF552176DB5783CFA7D20078E70A525C1F2886_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* V_2 = NULL;
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_0);
		V_0 = L_1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___0_reader;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_2);
		V_1 = L_3;
		V_2 = (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5*)NULL;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)7)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)7)))
		{
			goto IL_0067;
		}
	}
	{
		goto IL_0079;
	}

IL_001e:
	{
		int32_t L_7 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)12))))
		{
			case 0:
			{
				goto IL_0070;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_0055;
			}
			case 4:
			{
				goto IL_005e;
			}
		}
	}
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)61946)))))
		{
			goto IL_0079;
		}
	}
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_9 = ___1_file;
		FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* L_10 = (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6*)il2cpp_codegen_object_new(FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6_il2cpp_TypeInfo_var);
		FLCChunkFrameType__ctor_m683C356DCED6248B195233F3B1337826E89EE08C(L_10, L_9, NULL);
		V_2 = L_10;
		goto IL_0091;
	}

IL_004c:
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_11 = ___1_file;
		FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_12 = (FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC*)il2cpp_codegen_object_new(FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC_il2cpp_TypeInfo_var);
		FLCChunkColor256__ctor_m0EF5572819C6AD71B65423175C46A3C689E059A1(L_12, L_11, NULL);
		V_2 = L_12;
		goto IL_0091;
	}

IL_0055:
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_13 = ___1_file;
		FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0* L_14 = (FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0*)il2cpp_codegen_object_new(FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0_il2cpp_TypeInfo_var);
		FLCChunkByteRun__ctor_m0FA900D111412D16F6BF0D849C07314A42FA90BF(L_14, L_13, NULL);
		V_2 = L_14;
		goto IL_0091;
	}

IL_005e:
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_15 = ___1_file;
		FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E* L_16 = (FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E*)il2cpp_codegen_object_new(FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E_il2cpp_TypeInfo_var);
		FLCChunkFLICopy__ctor_m7809DE9A7E97831C31D6EC2B329411C26AC00F33(L_16, L_15, NULL);
		V_2 = L_16;
		goto IL_0091;
	}

IL_0067:
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_17 = ___1_file;
		FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9* L_18 = (FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9*)il2cpp_codegen_object_new(FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9_il2cpp_TypeInfo_var);
		FLCChunkDeltaFLC__ctor_m110BEBA948A180BE9B4CFD22E51C7E0C9C601F8F(L_18, L_17, NULL);
		V_2 = L_18;
		goto IL_0091;
	}

IL_0070:
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_19 = ___1_file;
		FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE* L_20 = (FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE*)il2cpp_codegen_object_new(FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE_il2cpp_TypeInfo_var);
		FLCChunkDeltaFLI__ctor_m2A0808680C048014348A1DDE8A477DCC6BFDAAD7(L_20, L_19, NULL);
		V_2 = L_20;
		goto IL_0091;
	}

IL_0079:
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_21 = ___1_file;
		FLCChunkUnknown_t77CF552176DB5783CFA7D20078E70A525C1F2886* L_22 = (FLCChunkUnknown_t77CF552176DB5783CFA7D20078E70A525C1F2886*)il2cpp_codegen_object_new(FLCChunkUnknown_t77CF552176DB5783CFA7D20078E70A525C1F2886_il2cpp_TypeInfo_var);
		FLCChunkUnknown__ctor_mA76BBF9EA37E28AD27B1842597ED1DE82873DA68(L_22, L_21, NULL);
		V_2 = L_22;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_23 = ___0_reader;
		NullCheck(L_23);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24;
		L_24 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_23);
		uint32_t L_25 = V_0;
		NullCheck(L_24);
		int64_t L_26;
		L_26 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20, L_24, ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, 6)))), 1);
	}

IL_0091:
	{
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_27 = V_2;
		if (!L_27)
		{
			goto IL_00a9;
		}
	}
	{
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_28 = V_2;
		uint32_t L_29 = V_0;
		NullCheck(L_28);
		FLCChunk_set_Size_m0CE094B2EA73775BC9E75B0BB5991BAB44A95150_inline(L_28, L_29, NULL);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_30 = V_2;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		FLCChunk_set_Type_m338766645335D51A5DDC5285E7656E12FF672721_inline(L_30, L_31, NULL);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_32 = V_2;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_33 = ___0_reader;
		NullCheck(L_32);
		VirtualActionInvoker1< BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* >::Invoke(4, L_32, L_33);
	}

IL_00a9:
	{
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_34 = V_2;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* FLCChunk_GetChunkByType_m05317A780D467EC1084C39E4A73F3C88D9136644 (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5EFE7E141EDD861F429B54C267B450401B492D32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_0;
		L_0 = FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_2;
		L_2 = List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92(L_0, L_1, List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FLCChunk_get_Type_mAA097A1AF0CE831E630877714B92E3290DB312F4_inline(L_2, NULL);
		int32_t L_4 = ___0_type;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0025;
		}
	}
	{
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_5;
		L_5 = FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline(__this, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_7;
		L_7 = List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92(L_5, L_6, List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92_RuntimeMethod_var);
		return L_7;
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0029:
	{
		int32_t L_9 = V_0;
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_10;
		L_10 = FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m5EFE7E141EDD861F429B54C267B450401B492D32_inline(L_10, List_1_get_Count_m5EFE7E141EDD861F429B54C267B450401B492D32_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		return (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44* FLCChunkHeader_ReadFromStream_m1A3CA4FF1E6055314D404F10C6CCD9440A5E9178 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44* L_0 = (FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44*)il2cpp_codegen_object_new(FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44_il2cpp_TypeInfo_var);
		FLCChunkHeader__ctor_m9EE8DA9B1BF72238A6D88E349B2C1870C752C934(L_0, NULL);
		FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44* L_1 = L_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___0_reader;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_2);
		NullCheck(L_1);
		L_1->___size = L_3;
		FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44* L_4 = L_1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___0_reader;
		NullCheck(L_5);
		uint16_t L_6;
		L_6 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_5);
		NullCheck(L_4);
		L_4->___type = L_6;
		FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44* L_7 = L_4;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = ___0_reader;
		NullCheck(L_8);
		int16_t L_9;
		L_9 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_8);
		NullCheck(L_7);
		L_7->___subchunks = L_9;
		FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44* L_10 = L_7;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = ___0_reader;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_11);
		NullCheck(L_10);
		L_10->___reserved1 = L_12;
		FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44* L_13 = L_10;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = ___0_reader;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_14);
		NullCheck(L_13);
		L_13->___reserved2 = L_15;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkHeader__ctor_m9EE8DA9B1BF72238A6D88E349B2C1870C752C934 (FLCChunkHeader_t1F310DA137C79F9232E1E8CE1A8E81150C5C6F44* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCColor__ctor_m1B250F8BCD53F9D27E1AD9B00F8992A720D9B8C3 (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC* __this, uint8_t ___0_setR, uint8_t ___1_setG, uint8_t ___2_setB, uint8_t ___3_setA, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_setR;
		__this->___R = L_0;
		uint8_t L_1 = ___1_setG;
		__this->___G = L_1;
		uint8_t L_2 = ___2_setB;
		__this->___B = L_2;
		uint8_t L_3 = ___3_setA;
		__this->___A = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void FLCColor__ctor_m1B250F8BCD53F9D27E1AD9B00F8992A720D9B8C3_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_setR, uint8_t ___1_setG, uint8_t ___2_setB, uint8_t ___3_setA, const RuntimeMethod* method)
{
	FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC*>(__this + _offset);
	FLCColor__ctor_m1B250F8BCD53F9D27E1AD9B00F8992A720D9B8C3(_thisAdjusted, ___0_setR, ___1_setG, ___2_setB, ___3_setA, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FLCColor_ToString_m1272AB0B9A4A938231391F4CF6895E3C9E49319B (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral466884BA580F8BB574B89E77BBEF55D0E235BDB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		uint8_t L_2 = __this->___R;
		uint8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		uint8_t L_6 = __this->___G;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = __this->___B;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14 = __this->___A;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral466884BA580F8BB574B89E77BBEF55D0E235BDB2, L_13, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C  String_t* FLCColor_ToString_m1272AB0B9A4A938231391F4CF6895E3C9E49319B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FLCColor_ToString_m1272AB0B9A4A938231391F4CF6895E3C9E49319B(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_Multicast(FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* currentDelegate = reinterpret_cast<FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_file, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenInst(FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	typedef void (*FunctionPointerType) (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_file, method);
}
void FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenStatic(FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_file, method);
}
void FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenVirtual(FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_file);
}
void FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenInterface(FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_file);
}
void FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenGenericVirtual(FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	GenericVirtualActionInvoker0::Invoke(method, ___0_file);
}
void FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenGenericInterface(FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_file);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameUpdated__ctor_m02F5C6C76FD040E69C48BD0AD9645993E1B6ED52 (FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C (FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_file, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FrameUpdated_BeginInvoke_m35B06AF587BB893EA4D8719E4FD3D25E4740D5E1 (FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_file;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameUpdated_EndInvoke_mF17EF955D8B7FF6DE1C0CE6AB2716C4778B00A0B (FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_Multicast(PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* currentDelegate = reinterpret_cast<PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_file, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenInst(PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	typedef void (*FunctionPointerType) (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_file, method);
}
void PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenStatic(PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_file, method);
}
void PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenVirtual(PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_file);
}
void PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenInterface(PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_file);
}
void PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenGenericVirtual(PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	GenericVirtualActionInvoker0::Invoke(method, ___0_file);
}
void PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenGenericInterface(PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_file);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaybackStarted__ctor_m5FCC70CA9656CBC5A52C2D66A15B4AB33E057F91 (PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3 (PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_file, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlaybackStarted_BeginInvoke_m2349204C535003BB0FE33DEDA4354A2C2CC06BD8 (PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_file;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaybackStarted_EndInvoke_m1680B4E8744AF53C1387A8611323C17D2CB98055 (PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_Multicast(PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, bool ___1_didFinishNormally, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* currentDelegate = reinterpret_cast<PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_file, ___1_didFinishNormally, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenInst(PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, bool ___1_didFinishNormally, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	typedef void (*FunctionPointerType) (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_file, ___1_didFinishNormally, method);
}
void PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenStatic(PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, bool ___1_didFinishNormally, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_file, ___1_didFinishNormally, method);
}
void PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenVirtual(PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, bool ___1_didFinishNormally, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	VirtualActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_file, ___1_didFinishNormally);
}
void PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenInterface(PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, bool ___1_didFinishNormally, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_file, ___1_didFinishNormally);
}
void PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenGenericVirtual(PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, bool ___1_didFinishNormally, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	GenericVirtualActionInvoker1< bool >::Invoke(method, ___0_file, ___1_didFinishNormally);
}
void PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenGenericInterface(PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, bool ___1_didFinishNormally, const RuntimeMethod* method)
{
	NullCheck(___0_file);
	GenericInterfaceActionInvoker1< bool >::Invoke(method, ___0_file, ___1_didFinishNormally);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaybackFinished__ctor_mBCA974CC266A52CB0C8B8EF979E3AFA5AA082092 (PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8 (PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, bool ___1_didFinishNormally, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_file, ___1_didFinishNormally, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlaybackFinished_BeginInvoke_mCF49DF0FAA5D4D8129DC5AF318A9427F7B9255F8 (PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, bool ___1_didFinishNormally, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_file;
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___1_didFinishNormally);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaybackFinished_EndInvoke_mDA4958B98C26DC21C4B8EC845ED8DE3094F7CADD (PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_add_OnFrameUpdated_m220098AA2AD5A2245048A95E53A77D0B9CDC1193 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* V_0 = NULL;
	FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* V_1 = NULL;
	FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* V_2 = NULL;
	{
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_0 = __this->___OnFrameUpdated;
		V_0 = L_0;
	}

IL_0007:
	{
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_1 = V_0;
		V_1 = L_1;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_2 = V_1;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435*)CastclassSealed((RuntimeObject*)L_4, FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435_il2cpp_TypeInfo_var));
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435** L_5 = (FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435**)(&__this->___OnFrameUpdated);
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_6 = V_2;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_7 = V_1;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_8;
		L_8 = InterlockedCompareExchangeImpl<FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435*>(L_5, L_6, L_7);
		V_0 = L_8;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_9 = V_0;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_10 = V_1;
		if ((!(((RuntimeObject*)(FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435*)L_9) == ((RuntimeObject*)(FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_remove_OnFrameUpdated_m185EE63592E35B81F7483B3031B87C0AC30F1ABD (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* V_0 = NULL;
	FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* V_1 = NULL;
	FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* V_2 = NULL;
	{
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_0 = __this->___OnFrameUpdated;
		V_0 = L_0;
	}

IL_0007:
	{
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_1 = V_0;
		V_1 = L_1;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_2 = V_1;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435*)CastclassSealed((RuntimeObject*)L_4, FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435_il2cpp_TypeInfo_var));
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435** L_5 = (FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435**)(&__this->___OnFrameUpdated);
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_6 = V_2;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_7 = V_1;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_8;
		L_8 = InterlockedCompareExchangeImpl<FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435*>(L_5, L_6, L_7);
		V_0 = L_8;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_9 = V_0;
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_10 = V_1;
		if ((!(((RuntimeObject*)(FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435*)L_9) == ((RuntimeObject*)(FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_add_OnPlaybackStarted_mEEF2C54A05202A6F5FD38519E03AC4E13A1D97BC (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* V_0 = NULL;
	PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* V_1 = NULL;
	PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* V_2 = NULL;
	{
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_0 = __this->___OnPlaybackStarted;
		V_0 = L_0;
	}

IL_0007:
	{
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_1 = V_0;
		V_1 = L_1;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_2 = V_1;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754*)CastclassSealed((RuntimeObject*)L_4, PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754_il2cpp_TypeInfo_var));
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754** L_5 = (PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754**)(&__this->___OnPlaybackStarted);
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_6 = V_2;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_7 = V_1;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_8;
		L_8 = InterlockedCompareExchangeImpl<PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754*>(L_5, L_6, L_7);
		V_0 = L_8;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_9 = V_0;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_10 = V_1;
		if ((!(((RuntimeObject*)(PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754*)L_9) == ((RuntimeObject*)(PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_remove_OnPlaybackStarted_mEEEA1E143ED4E060B696ADBCE206ECDAF4EC83E2 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* V_0 = NULL;
	PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* V_1 = NULL;
	PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* V_2 = NULL;
	{
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_0 = __this->___OnPlaybackStarted;
		V_0 = L_0;
	}

IL_0007:
	{
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_1 = V_0;
		V_1 = L_1;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_2 = V_1;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754*)CastclassSealed((RuntimeObject*)L_4, PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754_il2cpp_TypeInfo_var));
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754** L_5 = (PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754**)(&__this->___OnPlaybackStarted);
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_6 = V_2;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_7 = V_1;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_8;
		L_8 = InterlockedCompareExchangeImpl<PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754*>(L_5, L_6, L_7);
		V_0 = L_8;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_9 = V_0;
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_10 = V_1;
		if ((!(((RuntimeObject*)(PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754*)L_9) == ((RuntimeObject*)(PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_add_OnPlaybackFinished_m35F47387F59B6DF6EF3DFD596C597218059C5DDD (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* V_0 = NULL;
	PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* V_1 = NULL;
	PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* V_2 = NULL;
	{
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_0 = __this->___OnPlaybackFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_1 = V_0;
		V_1 = L_1;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_2 = V_1;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8*)CastclassSealed((RuntimeObject*)L_4, PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8_il2cpp_TypeInfo_var));
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8** L_5 = (PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8**)(&__this->___OnPlaybackFinished);
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_6 = V_2;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_7 = V_1;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_8;
		L_8 = InterlockedCompareExchangeImpl<PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8*>(L_5, L_6, L_7);
		V_0 = L_8;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_9 = V_0;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_10 = V_1;
		if ((!(((RuntimeObject*)(PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8*)L_9) == ((RuntimeObject*)(PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_remove_OnPlaybackFinished_mECAD27C0BC6B75D1BA75280371743CAB3801EAFD (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* V_0 = NULL;
	PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* V_1 = NULL;
	PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* V_2 = NULL;
	{
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_0 = __this->___OnPlaybackFinished;
		V_0 = L_0;
	}

IL_0007:
	{
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_1 = V_0;
		V_1 = L_1;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_2 = V_1;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8*)CastclassSealed((RuntimeObject*)L_4, PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8_il2cpp_TypeInfo_var));
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8** L_5 = (PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8**)(&__this->___OnPlaybackFinished);
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_6 = V_2;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_7 = V_1;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_8;
		L_8 = InterlockedCompareExchangeImpl<PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8*>(L_5, L_6, L_7);
		V_0 = L_8;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_9 = V_0;
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_10 = V_1;
		if ((!(((RuntimeObject*)(PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8*)L_9) == ((RuntimeObject*)(PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FLCFile_get_IsPaused_m2184CE7EB16824212C7E3593ECFCAB83B839206B (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsPausedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_set_IsPaused_mF5EB68F40E1F3B1D8DE3742593AD20356BEA909F (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsPausedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FLCFile_get_IsPlaying_mDBAEC7AC5DBC6A4E8B80E2C7492DC8DFE3920378 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsPlayingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_set_IsPlaying_mE7059352827FC8637FDBF2988663BD405EC1C836 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsPlayingU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FLCFile_get_ShouldLoop_m31D89D5D0DCF15BB8B7B4067C3DB00CE99FE8B5B (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CShouldLoopU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_set_ShouldLoop_mE51FCC851AE20B44E011AFCCFF7CE513D8094C04 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CShouldLoopU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FLCFile_get_PauseAfterFirstFrame_m4467FB446B3F4CFD4F6D7469BD295FFDA57F1977 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CPauseAfterFirstFrameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_set_PauseAfterFirstFrame_m73EB197C99813DB30120E40393C1866C37138B3C (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CPauseAfterFirstFrameU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_0 = __this->___header;
		NullCheck(L_0);
		int16_t L_1 = L_0->___width;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FLCFile_get_Height_m85580D1EE77F7EA7DB89E63E50741182FD9126DE (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_0 = __this->___header;
		NullCheck(L_0);
		int16_t L_1 = L_0->___height;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile__ctor_m43F1083D51ACE49F02252421269317F8D5EECBD4 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_setStream, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_setStream;
		__this->___stream = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream), (void*)L_0);
		__this->___header = (FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___header), (void*)(FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0*)NULL);
		FLCFile_set_ShouldLoop_mE51FCC851AE20B44E011AFCCFF7CE513D8094C04_inline(__this, (bool)1, NULL);
		FLCFile_set_IsPlaying_mE7059352827FC8637FDBF2988663BD405EC1C836_inline(__this, (bool)0, NULL);
		FLCFile_set_IsPaused_mF5EB68F40E1F3B1D8DE3742593AD20356BEA909F_inline(__this, (bool)0, NULL);
		FLCFile_set_PauseAfterFirstFrame_m73EB197C99813DB30120E40393C1866C37138B3C_inline(__this, (bool)0, NULL);
		__this->___currentFrame = (FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentFrame), (void*)(FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB*)NULL);
		__this->___currentPalette = (FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPalette), (void*)(FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FLCFile_Open_m8609DFAF0FE143FEC9029C204C415DEFE7285A7B (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_1, L_0, NULL);
		__this->___reader = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader), (void*)L_1);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = __this->___reader;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_3;
		L_3 = FLCHeader_ReadFromStream_m2C9C6B6CAC042E2F7158CA0102C93B7638F7FB22(L_2, NULL);
		__this->___header = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___header), (void*)L_3);
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_4 = __this->___header;
		NullCheck(L_4);
		int16_t L_5 = L_4->___type;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)-20718))))
		{
			goto IL_003f;
		}
	}
	{
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24CF8DB7612305D388383BCEE1F188640A2C2C39)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FLCFile_Open_m8609DFAF0FE143FEC9029C204C415DEFE7285A7B_RuntimeMethod_var)));
	}

IL_003f:
	{
		FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB* L_7 = (FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB*)il2cpp_codegen_object_new(FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB_il2cpp_TypeInfo_var);
		FLCFrameBuffer__ctor_m860D2F9C17EF37F053B73AE28474DF4FECD1D4D4(L_7, __this, NULL);
		__this->___currentFrame = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentFrame), (void*)L_7);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* FLCFile_GetFramebufferCopy_mC02644B7AF40AFD07318FF251CE0F157A4632430 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB* L_0 = __this->___currentFrame;
		NullCheck(L_0);
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_1;
		L_1 = FLCFrameBuffer_GetFramebufferCopy_m9A6B0145F373E65C384AF979C0E7B4588BD3D34C(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* FLCFile_ReadNextChunk_m89288B8CDF0632400E2E6ADA1E323510CFD308D2 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* V_0 = NULL;
	FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* V_1 = NULL;
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->___reader;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5*)NULL;
	}

IL_000a:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = __this->___reader;
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_2;
		L_2 = FLCChunk_CreateFromStream_mF01901540B7C285475D82C5C328FDE5665D129B1(L_1, __this, NULL);
		V_0 = L_2;
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_3 = V_0;
		NullCheck(L_3);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_4;
		L_4 = FLCChunk_GetChunkByType_m05317A780D467EC1084C39E4A73F3C88D9136644(L_3, 4, NULL);
		V_1 = ((FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC*)IsInstClass((RuntimeObject*)L_4, FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC_il2cpp_TypeInfo_var));
		FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_6 = V_1;
		__this->___currentPalette = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPalette), (void*)L_6);
	}

IL_002e:
	{
		FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB* L_7 = __this->___currentFrame;
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_8 = V_0;
		FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_9 = __this->___currentPalette;
		NullCheck(L_7);
		FLCFrameBuffer_UpdateFromFLCChunk_m2B51C00E00F768963B0E3A30CEEFC45B2D7CA912(L_7, L_8, L_9, NULL);
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_10 = __this->___OnFrameUpdated;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* L_11 = __this->___OnFrameUpdated;
		NullCheck(L_11);
		FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_inline(L_11, __this, NULL);
	}

IL_0054:
	{
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_PlayInternal_mC62D6F945BC445F2C9A76B0575AD0114BBB18C87 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_0 = __this->___OnPlaybackStarted;
		if (!L_0)
		{
			goto IL_00b0;
		}
	}
	{
		PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* L_1 = __this->___OnPlaybackStarted;
		NullCheck(L_1);
		PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_inline(L_1, __this, NULL);
		goto IL_00b0;
	}

IL_001c:
	{
		bool L_2;
		L_2 = FLCFile_get_IsPaused_m2184CE7EB16824212C7E3593ECFCAB83B839206B_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(8, NULL);
		goto IL_00b0;
	}

IL_002f:
	{
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_3;
		L_3 = FLCFile_ReadNextChunk_m89288B8CDF0632400E2E6ADA1E323510CFD308D2(__this, NULL);
		int32_t L_4 = __this->___frameCounter;
		__this->___frameCounter = ((int32_t)il2cpp_codegen_add(L_4, 1));
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_5 = __this->___header;
		NullCheck(L_5);
		int32_t L_6 = L_5->___speed;
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(L_6, NULL);
		bool L_7;
		L_7 = FLCFile_get_ShouldLoop_m31D89D5D0DCF15BB8B7B4067C3DB00CE99FE8B5B_inline(__this, NULL);
		if (L_7)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_8 = __this->___frameCounter;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_9 = __this->___header;
		NullCheck(L_9);
		int16_t L_10 = L_9->___frames;
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_00b0;
		}
	}
	{
		FLCFile_InternalStop_m14D4E5CA04267045F706EE04D6E9B77B75B1E855(__this, (bool)1, NULL);
		goto IL_00b0;
	}

IL_0078:
	{
		int32_t L_11 = __this->___frameCounter;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_12 = __this->___header;
		NullCheck(L_12);
		int16_t L_13 = L_12->___frames;
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_00b0;
		}
	}
	{
		__this->___frameCounter = 1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = __this->___reader;
		NullCheck(L_14);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15;
		L_15 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_14);
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_16 = __this->___header;
		NullCheck(L_16);
		int32_t L_17 = L_16->___oframe2;
		NullCheck(L_15);
		int64_t L_18;
		L_18 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20, L_15, ((int64_t)L_17), 0);
	}

IL_00b0:
	{
		bool L_19;
		L_19 = FLCFile_get_IsPlaying_mDBAEC7AC5DBC6A4E8B80E2C7492DC8DFE3920378_inline(__this, NULL);
		if (L_19)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_Play_m3F411E3E0308019E332EA20616EFF003427A5709 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCFile_U3CPlayU3Eb__40_0_mB2BE312D736AFD0AA8F53439EF985C199033A216_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = FLCFile_get_IsPlaying_mDBAEC7AC5DBC6A4E8B80E2C7492DC8DFE3920378_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = FLCFile_get_IsPaused_m2184CE7EB16824212C7E3593ECFCAB83B839206B_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FLCFile_set_IsPaused_mF5EB68F40E1F3B1D8DE3742593AD20356BEA909F_inline(__this, (bool)0, NULL);
		return;
	}

IL_0018:
	{
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_2 = __this->___header;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = __this->___reader;
		if (L_3)
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralABD4F78C90EA0F89ADA6BBAC2E8854EB9D265C03)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FLCFile_Play_m3F411E3E0308019E332EA20616EFF003427A5709_RuntimeMethod_var)));
	}

IL_0033:
	{
		FLCFile_set_IsPlaying_mE7059352827FC8637FDBF2988663BD405EC1C836_inline(__this, (bool)1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = __this->___reader;
		NullCheck(L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6;
		L_6 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_5);
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_7 = __this->___header;
		NullCheck(L_7);
		int32_t L_8 = L_7->___oframe1;
		NullCheck(L_6);
		int64_t L_9;
		L_9 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20, L_6, ((int64_t)L_8), 0);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_10;
		L_10 = FLCFile_ReadNextChunk_m89288B8CDF0632400E2E6ADA1E323510CFD308D2(__this, NULL);
		bool L_11;
		L_11 = FLCFile_get_PauseAfterFirstFrame_m4467FB446B3F4CFD4F6D7469BD295FFDA57F1977_inline(__this, NULL);
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		FLCFile_set_IsPaused_mF5EB68F40E1F3B1D8DE3742593AD20356BEA909F_inline(__this, (bool)1, NULL);
	}

IL_006e:
	{
		__this->___frameCounter = 1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = __this->___reader;
		NullCheck(L_12);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13;
		L_13 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_12);
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_14 = __this->___header;
		NullCheck(L_14);
		int32_t L_15 = L_14->___oframe2;
		NullCheck(L_13);
		int64_t L_16;
		L_16 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20, L_13, ((int64_t)L_15), 0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_17, __this, (intptr_t)((void*)FLCFile_U3CPlayU3Eb__40_0_mB2BE312D736AFD0AA8F53439EF985C199033A216_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)il2cpp_codegen_object_new(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637(L_18, L_17, NULL);
		NullCheck(L_18);
		Task_Start_m2DC09C3214A841B5C3A6AD800E4020DE365FA620(L_18, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_Pause_m869541617C15F8F083D3F2FC400FB899CF35BD94 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = FLCFile_get_IsPaused_m2184CE7EB16824212C7E3593ECFCAB83B839206B_inline(__this, NULL);
		FLCFile_set_IsPaused_mF5EB68F40E1F3B1D8DE3742593AD20356BEA909F_inline(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_Stop_m6CA2C617DAF6241EC716B33DB8C3AB0055DDACFB (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		FLCFile_InternalStop_m14D4E5CA04267045F706EE04D6E9B77B75B1E855(__this, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_InternalStop_m14D4E5CA04267045F706EE04D6E9B77B75B1E855 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_didFinishNormally, const RuntimeMethod* method) 
{
	{
		FLCFile_set_IsPlaying_mE7059352827FC8637FDBF2988663BD405EC1C836_inline(__this, (bool)0, NULL);
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_0 = __this->___OnPlaybackFinished;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* L_1 = __this->___OnPlaybackFinished;
		bool L_2 = ___0_didFinishNormally;
		NullCheck(L_1);
		PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_inline(L_1, __this, L_2, NULL);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_Dispose_m894B79FDB4BA265DA9E67878E1D47637D653F0A9 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->___reader;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = __this->___reader;
		NullCheck(L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2;
		L_2 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_1);
		NullCheck(L_2);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_2, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = __this->___reader;
		NullCheck(L_3);
		BinaryReader_Dispose_mAFF1A9CE9A73D148270FFA1F896992EB52D36078(L_3, NULL);
		__this->___reader = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader), (void*)(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)NULL);
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFile_U3CPlayU3Eb__40_0_mB2BE312D736AFD0AA8F53439EF985C199033A216 (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		FLCFile_PlayInternal_mC62D6F945BC445F2C9A76B0575AD0114BBB18C87(__this, NULL);
		return;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFrameBuffer__ctor_m860D2F9C17EF37F053B73AE28474DF4FECD1D4D4 (FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setFile, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = ___0_setFile;
		__this->___file = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___file), (void*)L_0);
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_1 = ___0_setFile;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C(L_1, NULL);
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_3 = ___0_setFile;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = FLCFile_get_Height_m85580D1EE77F7EA7DB89E63E50741182FD9126DE(L_3, NULL);
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_5 = (FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80*)(FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80*)SZArrayNew(FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, L_4)));
		__this->___framebuffer = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___framebuffer), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* FLCFrameBuffer_GetFramebufferCopy_m9A6B0145F373E65C384AF979C0E7B4588BD3D34C (FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* V_0 = NULL;
	{
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_0 = __this->___framebuffer;
		NullCheck(L_0);
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_1 = (FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80*)(FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80*)SZArrayNew(FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_2 = __this->___framebuffer;
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_3 = V_0;
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_4 = __this->___framebuffer;
		NullCheck(L_4);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_2, (RuntimeArray*)L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCFrameBuffer_UpdateFromFLCChunk_m2B51C00E00F768963B0E3A30CEEFC45B2D7CA912 (FLCFrameBuffer_tCAA6447F2492192A0A22C56A066268289F9585CB* __this, FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* ___0_chunk, FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* ___1_paletteChunk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5EFE7E141EDD861F429B54C267B450401B492D32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m02B4DD41DAF6A26617F539C1884EB316FD082037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m27A8B37A0E3CD1A6D157B73C5479FCA0D8126823_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m8E46D7AA872D26E18E4F7C55524ED19AB2390119_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0* V_2 = NULL;
	int32_t V_3 = 0;
	FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E* V_4 = NULL;
	int32_t V_5 = 0;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_6 = NULL;
	uint16_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	uint8_t V_13 = 0x0;
	int8_t V_14 = 0x0;
	int32_t V_15 = 0;
	uint8_t V_16 = 0x0;
	uint8_t V_17 = 0x0;
	uint8_t V_18 = 0x0;
	int32_t V_19 = 0;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_20 = NULL;
	uint16_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 V_24;
	memset((&V_24), 0, sizeof(V_24));
	Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 V_25;
	memset((&V_25), 0, sizeof(V_25));
	int32_t V_26 = 0;
	int16_t V_27 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_28;
	memset((&V_28), 0, sizeof(V_28));
	int32_t V_29 = 0;
	Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 V_30;
	memset((&V_30), 0, sizeof(V_30));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_31;
	memset((&V_31), 0, sizeof(V_31));
	int32_t V_32 = 0;
	uint8_t V_33 = 0x0;
	int8_t V_34 = 0x0;
	int32_t V_35 = 0;
	uint8_t V_36 = 0x0;
	uint8_t V_37 = 0x0;
	uint8_t V_38 = 0x0;
	uint8_t V_39 = 0x0;
	uint8_t V_40 = 0x0;
	int32_t V_41 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B46_0;
	memset((&G_B46_0), 0, sizeof(G_B46_0));
	int32_t G_B63_0 = 0;
	int32_t G_B62_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B64_0;
	memset((&G_B64_0), 0, sizeof(G_B64_0));
	int32_t G_B64_1 = 0;
	{
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_0 = ___0_chunk;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FLCChunk_get_Type_mAA097A1AF0CE831E630877714B92E3290DB312F4_inline(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)61946))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_04ba;
	}

IL_0015:
	{
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_2 = ___0_chunk;
		NullCheck(L_2);
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_3;
		L_3 = FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline(L_2, NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_5;
		L_5 = List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92(L_3, L_4, List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = FLCChunk_get_Type_mAA097A1AF0CE831E630877714B92E3290DB312F4_inline(L_5, NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)7)))
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)12))))
		{
			case 0:
			{
				goto IL_00eb;
			}
			case 1:
			{
				goto IL_04b6;
			}
			case 2:
			{
				goto IL_04b6;
			}
			case 3:
			{
				goto IL_0050;
			}
			case 4:
			{
				goto IL_0099;
			}
		}
	}
	{
		goto IL_04b6;
	}

IL_0050:
	{
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_9 = ___0_chunk;
		NullCheck(L_9);
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_10;
		L_10 = FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline(L_9, NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_12;
		L_12 = List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92(L_10, L_11, List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92_RuntimeMethod_var);
		V_2 = ((FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0*)CastclassClass((RuntimeObject*)L_12, FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0_il2cpp_TypeInfo_var));
		V_3 = 0;
		goto IL_0089;
	}

IL_0066:
	{
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_13 = __this->___framebuffer;
		int32_t L_14 = V_3;
		FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_15 = ___1_paletteChunk;
		NullCheck(L_15);
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_16 = L_15->___Colors;
		FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0* L_17 = V_2;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17->___PixelData;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		uint8_t L_22 = L_21;
		FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC L_23 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC)L_23);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0089:
	{
		int32_t L_25 = V_3;
		FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0* L_26 = V_2;
		NullCheck(L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = L_26->___PixelData;
		NullCheck(L_27);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_04b6;
	}

IL_0099:
	{
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_28 = ___0_chunk;
		NullCheck(L_28);
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_29;
		L_29 = FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline(L_28, NULL);
		int32_t L_30 = V_0;
		NullCheck(L_29);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_31;
		L_31 = List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92(L_29, L_30, List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92_RuntimeMethod_var);
		V_4 = ((FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E*)CastclassClass((RuntimeObject*)L_31, FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E_il2cpp_TypeInfo_var));
		V_5 = 0;
		goto IL_00d9;
	}

IL_00b1:
	{
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_32 = __this->___framebuffer;
		int32_t L_33 = V_5;
		FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_34 = ___1_paletteChunk;
		NullCheck(L_34);
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_35 = L_34->___Colors;
		FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E* L_36 = V_4;
		NullCheck(L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = L_36->___PixelData;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		uint8_t L_41 = L_40;
		FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC L_42 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC)L_42);
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00d9:
	{
		int32_t L_44 = V_5;
		FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E* L_45 = V_4;
		NullCheck(L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = L_45->___PixelData;
		NullCheck(L_46);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_04b6;
	}

IL_00eb:
	{
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_47 = ___0_chunk;
		NullCheck(L_47);
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_48;
		L_48 = FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline(L_47, NULL);
		int32_t L_49 = V_0;
		NullCheck(L_48);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_50;
		L_50 = List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92(L_48, L_49, List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92_RuntimeMethod_var);
		NullCheck(((FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE*)CastclassClass((RuntimeObject*)L_50, FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ((FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE*)CastclassClass((RuntimeObject*)L_50, FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE_il2cpp_TypeInfo_var))->___Payload;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_52 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_52, L_51, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_53 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_53, L_52, NULL);
		V_6 = L_53;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0221:
			{
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_54 = V_6;
					if (!L_54)
					{
						goto IL_022c;
					}
				}
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_55 = V_6;
					NullCheck(L_55);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_55);
				}

IL_022c:
				{
					return;
				}
			}
		});
		try
		{
			{
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_56 = V_6;
				NullCheck(L_56);
				uint16_t L_57;
				L_57 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_56);
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_58 = V_6;
				NullCheck(L_58);
				uint16_t L_59;
				L_59 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_58);
				V_7 = L_59;
				V_8 = L_57;
				V_9 = 0;
				goto IL_0213_1;
			}

IL_0127_1:
			{
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_60 = V_6;
				NullCheck(L_60);
				uint8_t L_61;
				L_61 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_60);
				V_10 = L_61;
				V_11 = 0;
				V_12 = 0;
				goto IL_01fe_1;
			}

IL_013b_1:
			{
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_62 = V_6;
				NullCheck(L_62);
				uint8_t L_63;
				L_63 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_62);
				V_13 = L_63;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_64 = V_6;
				NullCheck(L_64);
				int8_t L_65;
				L_65 = VirtualFuncInvoker0< int8_t >::Invoke(12, L_64);
				V_14 = L_65;
				int32_t L_66 = V_11;
				uint8_t L_67 = V_13;
				V_11 = ((int32_t)il2cpp_codegen_add(L_66, (int32_t)L_67));
				int8_t L_68 = V_14;
				if ((((int32_t)L_68) <= ((int32_t)0)))
				{
					goto IL_01a4_1;
				}
			}
			{
				V_15 = 0;
				goto IL_019c_1;
			}

IL_015e_1:
			{
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_69 = V_6;
				NullCheck(L_69);
				uint8_t L_70;
				L_70 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_69);
				V_16 = L_70;
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_71 = __this->___framebuffer;
				int32_t L_72 = V_11;
				int32_t L_73 = V_8;
				FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_74 = __this->___file;
				NullCheck(L_74);
				int32_t L_75;
				L_75 = FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C(L_74, NULL);
				FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_76 = ___1_paletteChunk;
				NullCheck(L_76);
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_77 = L_76->___Colors;
				uint8_t L_78 = V_16;
				NullCheck(L_77);
				uint8_t L_79 = L_78;
				FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
				NullCheck(L_71);
				(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_72, ((int32_t)il2cpp_codegen_multiply(L_73, L_75))))), (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC)L_80);
				int32_t L_81 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_81, 1));
				int32_t L_82 = V_15;
				V_15 = ((int32_t)il2cpp_codegen_add(L_82, 1));
			}

IL_019c_1:
			{
				int32_t L_83 = V_15;
				int8_t L_84 = V_14;
				if ((((int32_t)L_83) < ((int32_t)L_84)))
				{
					goto IL_015e_1;
				}
			}
			{
				goto IL_01f8_1;
			}

IL_01a4_1:
			{
				int8_t L_85 = V_14;
				if ((((int32_t)L_85) >= ((int32_t)0)))
				{
					goto IL_01f8_1;
				}
			}
			{
				int8_t L_86 = V_14;
				V_17 = (uint8_t)((int32_t)(uint8_t)((-L_86)));
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_87 = V_6;
				NullCheck(L_87);
				uint8_t L_88;
				L_88 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_87);
				V_18 = L_88;
				V_19 = 0;
				goto IL_01f2_1;
			}

IL_01bd_1:
			{
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_89 = __this->___framebuffer;
				int32_t L_90 = V_11;
				int32_t L_91 = V_8;
				FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_92 = __this->___file;
				NullCheck(L_92);
				int32_t L_93;
				L_93 = FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C(L_92, NULL);
				FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_94 = ___1_paletteChunk;
				NullCheck(L_94);
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_95 = L_94->___Colors;
				uint8_t L_96 = V_18;
				NullCheck(L_95);
				uint8_t L_97 = L_96;
				FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
				NullCheck(L_89);
				(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_90, ((int32_t)il2cpp_codegen_multiply(L_91, L_93))))), (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC)L_98);
				int32_t L_99 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_99, 1));
				int32_t L_100 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_100, 1));
			}

IL_01f2_1:
			{
				int32_t L_101 = V_19;
				uint8_t L_102 = V_17;
				if ((((int32_t)L_101) < ((int32_t)L_102)))
				{
					goto IL_01bd_1;
				}
			}

IL_01f8_1:
			{
				int32_t L_103 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_103, 1));
			}

IL_01fe_1:
			{
				int32_t L_104 = V_12;
				uint8_t L_105 = V_10;
				if ((((int32_t)L_104) < ((int32_t)L_105)))
				{
					goto IL_013b_1;
				}
			}
			{
				int32_t L_106 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_106, 1));
				int32_t L_107 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_107, 1));
			}

IL_0213_1:
			{
				int32_t L_108 = V_9;
				uint16_t L_109 = V_7;
				if ((((int32_t)L_108) < ((int32_t)L_109)))
				{
					goto IL_0127_1;
				}
			}
			{
				goto IL_04b6;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_022d:
	{
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_110 = ___0_chunk;
		NullCheck(L_110);
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_111;
		L_111 = FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline(L_110, NULL);
		int32_t L_112 = V_0;
		NullCheck(L_111);
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_113;
		L_113 = List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92(L_111, L_112, List_1_get_Item_m037F49DE049E13CCB5A367E31CD9D59799E19C92_RuntimeMethod_var);
		NullCheck(((FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9*)CastclassClass((RuntimeObject*)L_113, FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = ((FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9*)CastclassClass((RuntimeObject*)L_113, FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9_il2cpp_TypeInfo_var))->___Payload;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_115 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_115, L_114, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_116 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_116, L_115, NULL);
		V_20 = L_116;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_04aa:
			{
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_117 = V_20;
					if (!L_117)
					{
						goto IL_04b5;
					}
				}
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_118 = V_20;
					NullCheck(L_118);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_118);
				}

IL_04b5:
				{
					return;
				}
			}
		});
		try
		{
			{
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_119 = V_20;
				NullCheck(L_119);
				uint16_t L_120;
				L_120 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_119);
				V_21 = L_120;
				V_22 = 0;
				V_23 = 0;
				goto IL_049f_1;
			}

IL_0263_1:
			{
				il2cpp_codegen_initobj((&V_24), sizeof(Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9));
				il2cpp_codegen_initobj((&V_25), sizeof(Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9));
				goto IL_02b6_1;
			}

IL_0275_1:
			{
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_121 = V_20;
				NullCheck(L_121);
				int16_t L_122;
				L_122 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_121);
				V_27 = L_122;
				int16_t L_123 = V_27;
				if ((((int32_t)((int32_t)((int32_t)L_123&((int32_t)32768)))) <= ((int32_t)0)))
				{
					goto IL_02a1_1;
				}
			}
			{
				int16_t L_124 = V_27;
				if ((((int32_t)((int32_t)((int32_t)L_124&((int32_t)16384)))) <= ((int32_t)0)))
				{
					goto IL_02b6_1;
				}
			}
			{
				int16_t L_125 = V_27;
				Nullable_1__ctor_m27A8B37A0E3CD1A6D157B73C5479FCA0D8126823((&V_24), (uint16_t)((int32_t)(uint16_t)((-L_125))), Nullable_1__ctor_m27A8B37A0E3CD1A6D157B73C5479FCA0D8126823_RuntimeMethod_var);
				goto IL_02b6_1;
			}

IL_02a1_1:
			{
				int16_t L_126 = V_27;
				if ((((int32_t)((int32_t)((int32_t)L_126&((int32_t)16384)))) > ((int32_t)0)))
				{
					goto IL_02b6_1;
				}
			}
			{
				int16_t L_127 = V_27;
				Nullable_1__ctor_m27A8B37A0E3CD1A6D157B73C5479FCA0D8126823((&V_25), (uint16_t)((int32_t)(uint16_t)L_127), Nullable_1__ctor_m27A8B37A0E3CD1A6D157B73C5479FCA0D8126823_RuntimeMethod_var);
			}

IL_02b6_1:
			{
				bool L_128;
				L_128 = Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_inline((&V_25), Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_RuntimeMethod_var);
				if (!L_128)
				{
					goto IL_0275_1;
				}
			}
			{
				Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 L_129 = V_25;
				V_30 = L_129;
				bool L_130;
				L_130 = Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_inline((&V_30), Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_RuntimeMethod_var);
				if (L_130)
				{
					goto IL_02d8_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_31), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_131 = V_31;
				G_B46_0 = L_131;
				goto IL_02e4_1;
			}

IL_02d8_1:
			{
				uint16_t L_132;
				L_132 = Nullable_1_GetValueOrDefault_m02B4DD41DAF6A26617F539C1884EB316FD082037_inline((&V_30), Nullable_1_GetValueOrDefault_m02B4DD41DAF6A26617F539C1884EB316FD082037_RuntimeMethod_var);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_133;
				memset((&L_133), 0, sizeof(L_133));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_133), L_132, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B46_0 = L_133;
			}

IL_02e4_1:
			{
				V_28 = G_B46_0;
				V_29 = ((int32_t)100);
				int32_t L_134;
				L_134 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_28), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_135 = V_29;
				bool L_136;
				L_136 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_28), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (!((int32_t)(((((int32_t)L_134) > ((int32_t)L_135))? 1 : 0)&(int32_t)L_136)))
				{
					goto IL_0304_1;
				}
			}
			{
				goto IL_04cb;
			}

IL_0304_1:
			{
				bool L_137;
				L_137 = Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_inline((&V_24), Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_RuntimeMethod_var);
				if (!L_137)
				{
					goto IL_0319_1;
				}
			}
			{
				int32_t L_138 = V_22;
				uint16_t L_139;
				L_139 = Nullable_1_get_Value_m8E46D7AA872D26E18E4F7C55524ED19AB2390119((&V_24), Nullable_1_get_Value_m8E46D7AA872D26E18E4F7C55524ED19AB2390119_RuntimeMethod_var);
				V_22 = ((int32_t)il2cpp_codegen_add(L_138, (int32_t)L_139));
			}

IL_0319_1:
			{
				V_26 = 0;
				V_32 = 0;
				goto IL_0454_1;
			}

IL_0324_1:
			{
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_140 = V_20;
				NullCheck(L_140);
				uint8_t L_141;
				L_141 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_140);
				V_33 = L_141;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_142 = V_20;
				NullCheck(L_142);
				int8_t L_143;
				L_143 = VirtualFuncInvoker0< int8_t >::Invoke(12, L_142);
				V_34 = L_143;
				int32_t L_144 = V_26;
				uint8_t L_145 = V_33;
				V_26 = ((int32_t)il2cpp_codegen_add(L_144, (int32_t)L_145));
				int8_t L_146 = V_34;
				if ((((int32_t)L_146) <= ((int32_t)0)))
				{
					goto IL_03c5_1;
				}
			}
			{
				V_35 = 0;
				goto IL_03ba_1;
			}

IL_034a_1:
			{
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_147 = V_20;
				NullCheck(L_147);
				uint16_t L_148;
				L_148 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_147);
				uint16_t L_149 = L_148;
				V_36 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_149>>8)));
				V_37 = (uint8_t)((int32_t)(uint8_t)L_149);
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_150 = __this->___framebuffer;
				int32_t L_151 = V_26;
				int32_t L_152 = V_22;
				FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_153 = __this->___file;
				NullCheck(L_153);
				int32_t L_154;
				L_154 = FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C(L_153, NULL);
				FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_155 = ___1_paletteChunk;
				NullCheck(L_155);
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_156 = L_155->___Colors;
				uint8_t L_157 = V_37;
				NullCheck(L_156);
				uint8_t L_158 = L_157;
				FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
				NullCheck(L_150);
				(L_150)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_151, ((int32_t)il2cpp_codegen_multiply(L_152, L_154))))), (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC)L_159);
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_160 = __this->___framebuffer;
				int32_t L_161 = V_26;
				int32_t L_162 = V_22;
				FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_163 = __this->___file;
				NullCheck(L_163);
				int32_t L_164;
				L_164 = FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C(L_163, NULL);
				FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_165 = ___1_paletteChunk;
				NullCheck(L_165);
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_166 = L_165->___Colors;
				uint8_t L_167 = V_36;
				NullCheck(L_166);
				uint8_t L_168 = L_167;
				FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
				NullCheck(L_160);
				(L_160)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, L_164)))), 1))), (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC)L_169);
				int32_t L_170 = V_26;
				V_26 = ((int32_t)il2cpp_codegen_add(L_170, 2));
				int32_t L_171 = V_35;
				V_35 = ((int32_t)il2cpp_codegen_add(L_171, 1));
			}

IL_03ba_1:
			{
				int32_t L_172 = V_35;
				int8_t L_173 = V_34;
				if ((((int32_t)L_172) < ((int32_t)L_173)))
				{
					goto IL_034a_1;
				}
			}
			{
				goto IL_044e_1;
			}

IL_03c5_1:
			{
				int8_t L_174 = V_34;
				if ((((int32_t)L_174) >= ((int32_t)0)))
				{
					goto IL_044e_1;
				}
			}
			{
				int8_t L_175 = V_34;
				V_38 = (uint8_t)((int32_t)(uint8_t)((-L_175)));
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_176 = V_20;
				NullCheck(L_176);
				uint16_t L_177;
				L_177 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_176);
				uint16_t L_178 = L_177;
				V_39 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_178>>8)));
				V_40 = (uint8_t)((int32_t)(uint8_t)L_178);
				V_41 = 0;
				goto IL_0448_1;
			}

IL_03e8_1:
			{
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_179 = __this->___framebuffer;
				int32_t L_180 = V_26;
				int32_t L_181 = V_22;
				FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_182 = __this->___file;
				NullCheck(L_182);
				int32_t L_183;
				L_183 = FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C(L_182, NULL);
				FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_184 = ___1_paletteChunk;
				NullCheck(L_184);
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_185 = L_184->___Colors;
				uint8_t L_186 = V_40;
				NullCheck(L_185);
				uint8_t L_187 = L_186;
				FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC L_188 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
				NullCheck(L_179);
				(L_179)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_180, ((int32_t)il2cpp_codegen_multiply(L_181, L_183))))), (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC)L_188);
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_189 = __this->___framebuffer;
				int32_t L_190 = V_26;
				int32_t L_191 = V_22;
				FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_192 = __this->___file;
				NullCheck(L_192);
				int32_t L_193;
				L_193 = FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C(L_192, NULL);
				FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* L_194 = ___1_paletteChunk;
				NullCheck(L_194);
				FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_195 = L_194->___Colors;
				uint8_t L_196 = V_39;
				NullCheck(L_195);
				uint8_t L_197 = L_196;
				FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
				NullCheck(L_189);
				(L_189)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_190, ((int32_t)il2cpp_codegen_multiply(L_191, L_193)))), 1))), (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC)L_198);
				int32_t L_199 = V_26;
				V_26 = ((int32_t)il2cpp_codegen_add(L_199, 2));
				int32_t L_200 = V_41;
				V_41 = ((int32_t)il2cpp_codegen_add(L_200, 1));
			}

IL_0448_1:
			{
				int32_t L_201 = V_41;
				uint8_t L_202 = V_38;
				if ((((int32_t)L_201) < ((int32_t)L_202)))
				{
					goto IL_03e8_1;
				}
			}

IL_044e_1:
			{
				int32_t L_203 = V_32;
				V_32 = ((int32_t)il2cpp_codegen_add(L_203, 1));
			}

IL_0454_1:
			{
				int32_t L_204 = V_32;
				Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 L_205 = V_25;
				V_30 = L_205;
				bool L_206;
				L_206 = Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_inline((&V_30), Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_RuntimeMethod_var);
				if (L_206)
				{
					G_B63_0 = L_204;
					goto IL_046f_1;
				}
				G_B62_0 = L_204;
			}
			{
				il2cpp_codegen_initobj((&V_31), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_207 = V_31;
				G_B64_0 = L_207;
				G_B64_1 = G_B62_0;
				goto IL_047b_1;
			}

IL_046f_1:
			{
				uint16_t L_208;
				L_208 = Nullable_1_GetValueOrDefault_m02B4DD41DAF6A26617F539C1884EB316FD082037_inline((&V_30), Nullable_1_GetValueOrDefault_m02B4DD41DAF6A26617F539C1884EB316FD082037_RuntimeMethod_var);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_209;
				memset((&L_209), 0, sizeof(L_209));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_209), L_208, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B64_0 = L_209;
				G_B64_1 = G_B63_0;
			}

IL_047b_1:
			{
				V_28 = G_B64_0;
				int32_t L_210;
				L_210 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_28), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				bool L_211;
				L_211 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_28), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (((int32_t)(((((int32_t)G_B64_1) < ((int32_t)L_210))? 1 : 0)&(int32_t)L_211)))
				{
					goto IL_0324_1;
				}
			}
			{
				int32_t L_212 = V_22;
				V_22 = ((int32_t)il2cpp_codegen_add(L_212, 1));
				int32_t L_213 = V_23;
				V_23 = ((int32_t)il2cpp_codegen_add(L_213, 1));
			}

IL_049f_1:
			{
				int32_t L_214 = V_23;
				uint16_t L_215 = V_21;
				if ((((int32_t)L_214) < ((int32_t)L_215)))
				{
					goto IL_0263_1;
				}
			}
			{
				goto IL_04b6;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_04b6:
	{
		int32_t L_216 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_216, 1));
	}

IL_04ba:
	{
		int32_t L_217 = V_0;
		FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* L_218 = ___0_chunk;
		NullCheck(L_218);
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_219;
		L_219 = FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline(L_218, NULL);
		NullCheck(L_219);
		int32_t L_220;
		L_220 = List_1_get_Count_m5EFE7E141EDD861F429B54C267B450401B492D32_inline(L_219, List_1_get_Count_m5EFE7E141EDD861F429B54C267B450401B492D32_RuntimeMethod_var);
		if ((((int32_t)L_217) < ((int32_t)L_220)))
		{
			goto IL_0015;
		}
	}

IL_04cb:
	{
		return;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCHeader__ctor_m126D12E2F48292809457CF6E2B57D7F5CB55ECBE (FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		__this->___reserved2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reserved2), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->___reserved3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reserved3), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* FLCHeader_ReadFromStream_m2C9C6B6CAC042E2F7158CA0102C93B7638F7FB22 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_0 = (FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0*)il2cpp_codegen_object_new(FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0_il2cpp_TypeInfo_var);
		FLCHeader__ctor_m126D12E2F48292809457CF6E2B57D7F5CB55ECBE(L_0, NULL);
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_1 = L_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___0_reader;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_2);
		NullCheck(L_1);
		L_1->___size = L_3;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_4 = L_1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___0_reader;
		NullCheck(L_5);
		int16_t L_6;
		L_6 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_5);
		NullCheck(L_4);
		L_4->___type = L_6;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_7 = L_4;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = ___0_reader;
		NullCheck(L_8);
		int16_t L_9;
		L_9 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_8);
		NullCheck(L_7);
		L_7->___frames = L_9;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_10 = L_7;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = ___0_reader;
		NullCheck(L_11);
		int16_t L_12;
		L_12 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_11);
		NullCheck(L_10);
		L_10->___width = L_12;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_13 = L_10;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = ___0_reader;
		NullCheck(L_14);
		int16_t L_15;
		L_15 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_14);
		NullCheck(L_13);
		L_13->___height = L_15;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_16 = L_13;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = ___0_reader;
		NullCheck(L_17);
		int16_t L_18;
		L_18 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_17);
		NullCheck(L_16);
		L_16->___depth = L_18;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_19 = L_16;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_20 = ___0_reader;
		NullCheck(L_20);
		int16_t L_21;
		L_21 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_20);
		NullCheck(L_19);
		L_19->___flags = L_21;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_22 = L_19;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_23 = ___0_reader;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_23);
		NullCheck(L_22);
		L_22->___speed = L_24;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_25 = L_22;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_26 = ___0_reader;
		NullCheck(L_26);
		int16_t L_27;
		L_27 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_26);
		NullCheck(L_25);
		L_25->___reserved1 = L_27;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_28 = L_25;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_29 = ___0_reader;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_29);
		NullCheck(L_28);
		L_28->___created = L_30;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_31 = L_28;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_32 = ___0_reader;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_32);
		NullCheck(L_31);
		L_31->___creator = L_33;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_34 = L_31;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_35 = ___0_reader;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_35);
		NullCheck(L_34);
		L_34->___updated = L_36;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_37 = L_34;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_38 = ___0_reader;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_38);
		NullCheck(L_37);
		L_37->___updater = L_39;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_40 = L_37;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_41 = ___0_reader;
		NullCheck(L_41);
		int16_t L_42;
		L_42 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_41);
		NullCheck(L_40);
		L_40->___aspect_dx = L_42;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_43 = L_40;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_44 = ___0_reader;
		NullCheck(L_44);
		int16_t L_45;
		L_45 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_44);
		NullCheck(L_43);
		L_43->___aspect_dy = L_45;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_46 = L_43;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_47 = ___0_reader;
		NullCheck(L_47);
		int16_t L_48;
		L_48 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_47);
		NullCheck(L_46);
		L_46->___ext_flags = L_48;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_49 = L_46;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_50 = ___0_reader;
		NullCheck(L_50);
		int16_t L_51;
		L_51 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_50);
		NullCheck(L_49);
		L_49->___keyframes = L_51;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_52 = L_49;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_53 = ___0_reader;
		NullCheck(L_53);
		int16_t L_54;
		L_54 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_53);
		NullCheck(L_52);
		L_52->___totalframes = L_54;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_55 = L_52;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_56 = ___0_reader;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_56);
		NullCheck(L_55);
		L_55->___req_memory = L_57;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_58 = L_55;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_59 = ___0_reader;
		NullCheck(L_59);
		int16_t L_60;
		L_60 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_59);
		NullCheck(L_58);
		L_58->___max_regions = L_60;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_61 = L_58;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_62 = ___0_reader;
		NullCheck(L_62);
		int16_t L_63;
		L_63 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_62);
		NullCheck(L_61);
		L_61->___transp_num = L_63;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_64 = L_61;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_65 = ___0_reader;
		NullCheck(L_65);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66;
		L_66 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_65, ((int32_t)24));
		NullCheck(L_64);
		L_64->___reserved2 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&L_64->___reserved2), (void*)L_66);
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_67 = L_64;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_68 = ___0_reader;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_68);
		NullCheck(L_67);
		L_67->___oframe1 = L_69;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_70 = L_67;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_71 = ___0_reader;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_71);
		NullCheck(L_70);
		L_70->___oframe2 = L_72;
		FLCHeader_t6AA2898BC278428ABEC8336A3AE912F8FEC439A0* L_73 = L_70;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_74 = ___0_reader;
		NullCheck(L_74);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75;
		L_75 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_74, ((int32_t)40));
		NullCheck(L_73);
		L_73->___reserved3 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&L_73->___reserved3), (void*)L_75);
		return L_73;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkByteRun__ctor_m0FA900D111412D16F6BF0D849C07314A42FA90BF (FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) 
{
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = ___0_setOwnerFile;
		FLCChunk__ctor_mF903FDA29055B00FE5A493BC6763ED2C90E77AEF(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkByteRun_ReadFromStream_mDDB143786F4EE76F517A5D223AD60F6196E7B7B6 (FLCChunkByteRun_tBE8E6A65F929E1820CA76FD744C57CAE6DB9ABD0* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		FLCChunk_ReadFromStream_m0F643F3E13D2A5D0F672D62CEB5B7349D6D6CF7C(__this, L_0, NULL);
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_1;
		L_1 = FLCChunk_get_OwnerFile_m4EBC0D902157669465C42710B2040BEFD5D78DC6_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C(L_1, NULL);
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_3;
		L_3 = FLCChunk_get_OwnerFile_m4EBC0D902157669465C42710B2040BEFD5D78DC6_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = FLCFile_get_Height_m85580D1EE77F7EA7DB89E63E50741182FD9126DE(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, L_4)));
		__this->___PixelData = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PixelData), (void*)L_5);
		V_0 = 0;
		V_1 = 0;
		goto IL_00b3;
	}

IL_0032:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = ___0_reader;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_6);
		V_2 = 0;
		goto IL_00a1;
	}

IL_003d:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = ___0_reader;
		NullCheck(L_8);
		int8_t L_9;
		L_9 = VirtualFuncInvoker0< int8_t >::Invoke(12, L_8);
		V_3 = L_9;
		int8_t L_10 = V_3;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int8_t L_11 = V_3;
		V_4 = (uint8_t)((int32_t)(uint8_t)((-L_11)));
		int32_t L_12 = V_2;
		uint8_t L_13 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, (int32_t)L_13));
		V_5 = 0;
		goto IL_006f;
	}

IL_0057:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___PixelData;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = ___0_reader;
		NullCheck(L_17);
		uint8_t L_18;
		L_18 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_17);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)L_18);
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006f:
	{
		int32_t L_20 = V_5;
		uint8_t L_21 = V_4;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0057;
		}
	}
	{
		goto IL_00a1;
	}

IL_0077:
	{
		int32_t L_22 = V_2;
		int8_t L_23 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, (int32_t)L_23));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_24 = ___0_reader;
		NullCheck(L_24);
		uint8_t L_25;
		L_25 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_24);
		V_6 = L_25;
		V_7 = 0;
		goto IL_009c;
	}

IL_0088:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___PixelData;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		uint8_t L_29 = V_6;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint8_t)L_29);
		int32_t L_30 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_7;
		int8_t L_32 = V_3;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0088;
		}
	}

IL_00a1:
	{
		int32_t L_33 = V_2;
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_34;
		L_34 = FLCChunk_get_OwnerFile_m4EBC0D902157669465C42710B2040BEFD5D78DC6_inline(__this, NULL);
		NullCheck(L_34);
		int32_t L_35;
		L_35 = FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C(L_34, NULL);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b3:
	{
		int32_t L_37 = V_1;
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_38;
		L_38 = FLCChunk_get_OwnerFile_m4EBC0D902157669465C42710B2040BEFD5D78DC6_inline(__this, NULL);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = FLCFile_get_Height_m85580D1EE77F7EA7DB89E63E50741182FD9126DE(L_38, NULL);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0032;
		}
	}
	{
		return;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkColor256__ctor_m0EF5572819C6AD71B65423175C46A3C689E059A1 (FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = ___0_setOwnerFile;
		FLCChunk__ctor_mF903FDA29055B00FE5A493BC6763ED2C90E77AEF(__this, L_0, NULL);
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_1 = (FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80*)(FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80*)SZArrayNew(FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___Colors = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Colors), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkColor256_ReadFromStream_mD7AC689B7C844CB2DE0BE27511099C5489EE19B7 (FLCChunkColor256_tB083553E982EC4F216F88AC0853F8198C1C978AC* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		FLCChunk_ReadFromStream_m0F643F3E13D2A5D0F672D62CEB5B7349D6D6CF7C(__this, L_0, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		uint16_t L_2;
		L_2 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_1);
		V_0 = L_2;
		V_1 = 0;
		goto IL_006a;
	}

IL_0012:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = ___0_reader;
		NullCheck(L_3);
		uint8_t L_4;
		L_4 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_3);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___0_reader;
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_5);
		if (L_6)
		{
			goto IL_0066;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_7, ((int32_t)768));
		V_2 = L_8;
		V_3 = 0;
		goto IL_005e;
	}

IL_0031:
	{
		FLCColorU5BU5D_tAD11B107982D35DF4D368EA972A9979042354D80* L_9 = __this->___Colors;
		int32_t L_10 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_multiply(L_12, 3));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_16, 3)), 1));
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_20, 3)), 2));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC L_23;
		memset((&L_23), 0, sizeof(L_23));
		FLCColor__ctor_m1B250F8BCD53F9D27E1AD9B00F8992A720D9B8C3((&L_23), L_14, L_18, L_22, (uint8_t)((int32_t)255), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (FLCColor_tB37FD709514A4BA308E9A032A2BE647BFD8FDFFC)L_23);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_005e:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)256))))
		{
			goto IL_0031;
		}
	}

IL_0066:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006a:
	{
		int32_t L_27 = V_1;
		uint16_t L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0012;
		}
	}
	{
		return;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkDeltaFLC__ctor_m110BEBA948A180BE9B4CFD22E51C7E0C9C601F8F (FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) 
{
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = ___0_setOwnerFile;
		FLCChunk__ctor_mF903FDA29055B00FE5A493BC6763ED2C90E77AEF(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkDeltaFLC_ReadFromStream_m989D07A1D3A09612216A72C56835794B43EFBEED (FLCChunkDeltaFLC_t55785F55333D7DE45A4A94310B8C6F71AECDC6C9* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		FLCChunk_ReadFromStream_m0F643F3E13D2A5D0F672D62CEB5B7349D6D6CF7C(__this, L_0, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		uint32_t L_2;
		L_2 = FLCChunk_get_Size_m3770E981A84B9417A3A16623DBAD3CED2AB21BD6_inline(__this, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 6)));
		__this->___Payload = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Payload), (void*)L_3);
		return;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkDeltaFLI__ctor_m2A0808680C048014348A1DDE8A477DCC6BFDAAD7 (FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) 
{
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = ___0_setOwnerFile;
		FLCChunk__ctor_mF903FDA29055B00FE5A493BC6763ED2C90E77AEF(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkDeltaFLI_ReadFromStream_m5435952078D3A1D4846F71ACA53BF0D32674F927 (FLCChunkDeltaFLI_t5DC6C0075C6F13A3DAA06A17A56D49BCDC1749FE* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		FLCChunk_ReadFromStream_m0F643F3E13D2A5D0F672D62CEB5B7349D6D6CF7C(__this, L_0, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		uint32_t L_2;
		L_2 = FLCChunk_get_Size_m3770E981A84B9417A3A16623DBAD3CED2AB21BD6_inline(__this, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 6)));
		__this->___Payload = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Payload), (void*)L_3);
		return;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkFLICopy__ctor_m7809DE9A7E97831C31D6EC2B329411C26AC00F33 (FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) 
{
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = ___0_setOwnerFile;
		FLCChunk__ctor_mF903FDA29055B00FE5A493BC6763ED2C90E77AEF(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkFLICopy_ReadFromStream_m4942B7C593CE63134B9AA769079B9F2EC91E2C75 (FLCChunkFLICopy_t91396D1C3D1E661C25CBA03FF0E6991E5C0DBF2E* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		FLCChunk_ReadFromStream_m0F643F3E13D2A5D0F672D62CEB5B7349D6D6CF7C(__this, L_0, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_2;
		L_2 = FLCChunk_get_OwnerFile_m4EBC0D902157669465C42710B2040BEFD5D78DC6_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FLCFile_get_Width_m8B5B7B99C22096477EB753491253F7276B21779C(L_2, NULL);
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_4;
		L_4 = FLCChunk_get_OwnerFile_m4EBC0D902157669465C42710B2040BEFD5D78DC6_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = FLCFile_get_Height_m85580D1EE77F7EA7DB89E63E50741182FD9126DE(L_4, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26, L_1, ((int32_t)il2cpp_codegen_multiply(L_3, L_5)));
		__this->___PixelData = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PixelData), (void*)L_6);
		return;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t FLCChunkFrameType_get_Chunks_m5E02401D17CF326BAA820AF60C0B83E7CDE92C35 (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CChunksU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Chunks_m6008496BF989F066A2EF58267531B77B0F883DC7 (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CChunksU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t FLCChunkFrameType_get_Delay_m6A61CD9201FD496FE85DE5AFEE907419E2AA24D2 (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CDelayU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Delay_m1352FF97F472CEDCA9257260E8543B905C1A06DC (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CDelayU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t FLCChunkFrameType_get_Reserved_m1707AC3DE5E2A8BD3858BB4BEF5E9D787458218D (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___U3CReservedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Reserved_m46447B79D8E139C00B4A6DE6AF67567E656C679E (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_value;
		__this->___U3CReservedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t FLCChunkFrameType_get_Width_m83A023D30B28047522FCFDE07B48614DF96237EC (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CWidthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Width_m84E32F5E3817F98664272DBE77F5B223C397D77D (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CWidthU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t FLCChunkFrameType_get_Height_mD434F5265FC98917091B66A4E0269CDCFD936B58 (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CHeightU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Height_mB726B82F59EA7D82B691343E5D1A2C8BD1A2959E (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkFrameType__ctor_m683C356DCED6248B195233F3B1337826E89EE08C (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) 
{
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = ___0_setOwnerFile;
		FLCChunk__ctor_mF903FDA29055B00FE5A493BC6763ED2C90E77AEF(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkFrameType_ReadFromStream_m2A4B6054A2F8428F2F025BD80CC6708DA13A4D36 (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		FLCChunk_ReadFromStream_m0F643F3E13D2A5D0F672D62CEB5B7349D6D6CF7C(__this, L_0, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		uint16_t L_2;
		L_2 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_1);
		FLCChunkFrameType_set_Chunks_m6008496BF989F066A2EF58267531B77B0F883DC7_inline(__this, L_2, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = ___0_reader;
		NullCheck(L_3);
		uint16_t L_4;
		L_4 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_3);
		FLCChunkFrameType_set_Delay_m1352FF97F472CEDCA9257260E8543B905C1A06DC_inline(__this, L_4, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___0_reader;
		NullCheck(L_5);
		int16_t L_6;
		L_6 = VirtualFuncInvoker0< int16_t >::Invoke(14, L_5);
		FLCChunkFrameType_set_Reserved_m46447B79D8E139C00B4A6DE6AF67567E656C679E_inline(__this, L_6, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		NullCheck(L_7);
		uint16_t L_8;
		L_8 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_7);
		FLCChunkFrameType_set_Width_m84E32F5E3817F98664272DBE77F5B223C397D77D_inline(__this, L_8, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_9 = ___0_reader;
		NullCheck(L_9);
		uint16_t L_10;
		L_10 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_9);
		FLCChunkFrameType_set_Height_mB726B82F59EA7D82B691343E5D1A2C8BD1A2959E_inline(__this, L_10, NULL);
		uint16_t L_11;
		L_11 = FLCChunkFrameType_get_Width_m83A023D30B28047522FCFDE07B48614DF96237EC_inline(__this, NULL);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		uint16_t L_12;
		L_12 = FLCChunkFrameType_get_Height_mD434F5265FC98917091B66A4E0269CDCFD936B58_inline(__this, NULL);
		if (!L_12)
		{
			goto IL_005e;
		}
	}

IL_0053:
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_13 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE9314ECB2693EC81018386FC14CC202DE4C33F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FLCChunkFrameType_ReadFromStream_m2A4B6054A2F8428F2F025BD80CC6708DA13A4D36_RuntimeMethod_var)));
	}

IL_005e:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = ___0_reader;
		uint16_t L_15;
		L_15 = FLCChunkFrameType_get_Chunks_m5E02401D17CF326BAA820AF60C0B83E7CDE92C35_inline(__this, NULL);
		FLCChunk_ReadSubChunks_m45A64400C8124E85EF7B70130F1DA903F62B714E(__this, L_14, L_15, NULL);
		return;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkUnknown__ctor_mA76BBF9EA37E28AD27B1842597ED1DE82873DA68 (FLCChunkUnknown_t77CF552176DB5783CFA7D20078E70A525C1F2886* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_setOwnerFile, const RuntimeMethod* method) 
{
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = ___0_setOwnerFile;
		FLCChunk__ctor_mF903FDA29055B00FE5A493BC6763ED2C90E77AEF(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FLCChunkUnknown_ReadFromStream_m84103093930E1E9D1023AE12C0E5A28CF34A6F15 (FLCChunkUnknown_t77CF552176DB5783CFA7D20078E70A525C1F2886* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		FLCChunk_ReadFromStream_m0F643F3E13D2A5D0F672D62CEB5B7349D6D6CF7C(__this, L_0, NULL);
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunk_set_OwnerFile_mB2BE9479795C830F115DB32F6F2AD88593F99900_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_value, const RuntimeMethod* method) 
{
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = ___0_value;
		__this->___U3COwnerFileU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COwnerFileU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunk_set_SubChunks_m6FD2C29D1F6F85599FDCD1119E0A8B6E2F1D74A3_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_0 = ___0_value;
		__this->___U3CSubChunksU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubChunksU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* FLCChunk_get_OwnerFile_m4EBC0D902157669465C42710B2040BEFD5D78DC6_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) 
{
	{
		FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* L_0 = __this->___U3COwnerFileU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* FLCChunk_get_SubChunks_m2F26CEDA6F9CB2850C65696B386E9EFEF78566B6_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2131FF2995962F45D3CEADFD79855AD736CB73FE* L_0 = __this->___U3CSubChunksU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunk_set_Size_m0CE094B2EA73775BC9E75B0BB5991BAB44A95150_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CSizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunk_set_Type_m338766645335D51A5DDC5285E7656E12FF672721_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FLCChunk_get_Type_mAA097A1AF0CE831E630877714B92E3290DB312F4_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCFile_set_ShouldLoop_mE51FCC851AE20B44E011AFCCFF7CE513D8094C04_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CShouldLoopU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCFile_set_IsPlaying_mE7059352827FC8637FDBF2988663BD405EC1C836_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsPlayingU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCFile_set_IsPaused_mF5EB68F40E1F3B1D8DE3742593AD20356BEA909F_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsPausedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCFile_set_PauseAfterFirstFrame_m73EB197C99813DB30120E40393C1866C37138B3C_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CPauseAfterFirstFrameU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FrameUpdated_Invoke_mB2D39D51362DE1FE96AE68412D1439555419263C_inline (FrameUpdated_t38CD5760F183F55F968A1684C86EE8AF0D4FC435* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_file, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaybackStarted_Invoke_m8FD77FBF4EF79F805603D93702EA658B311499D3_inline (PlaybackStarted_t485624A50E3C5E427473B6D7E7A1460D87935754* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_file, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FLCFile_get_IsPaused_m2184CE7EB16824212C7E3593ECFCAB83B839206B_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsPausedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FLCFile_get_ShouldLoop_m31D89D5D0DCF15BB8B7B4067C3DB00CE99FE8B5B_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CShouldLoopU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FLCFile_get_IsPlaying_mDBAEC7AC5DBC6A4E8B80E2C7492DC8DFE3920378_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsPlayingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FLCFile_get_PauseAfterFirstFrame_m4467FB446B3F4CFD4F6D7469BD295FFDA57F1977_inline (FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CPauseAfterFirstFrameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaybackFinished_Invoke_m7B8DA3766790AC64BFF6D10AEBD1C167D3F560E8_inline (PlaybackFinished_tB06C3EA5812E76FBC62FA903D28BDB1ACF491EB8* __this, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B* ___0_file, bool ___1_didFinishNormally, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FLCFile_tFE025460036731A7E797C0FA73F7C75E0DB3768B*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_file, ___1_didFinishNormally, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t FLCChunk_get_Size_m3770E981A84B9417A3A16623DBAD3CED2AB21BD6_inline (FLCChunk_t56451ED0C98E3687FC02FD26D3098625446D6DC5* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CSizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Chunks_m6008496BF989F066A2EF58267531B77B0F883DC7_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CChunksU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Delay_m1352FF97F472CEDCA9257260E8543B905C1A06DC_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CDelayU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Reserved_m46447B79D8E139C00B4A6DE6AF67567E656C679E_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_value;
		__this->___U3CReservedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Width_m84E32F5E3817F98664272DBE77F5B223C397D77D_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CWidthU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FLCChunkFrameType_set_Height_mB726B82F59EA7D82B691343E5D1A2C8BD1A2959E_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CHeightU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FLCChunkFrameType_get_Width_m83A023D30B28047522FCFDE07B48614DF96237EC_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CWidthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FLCChunkFrameType_get_Height_mD434F5265FC98917091B66A4E0269CDCFD936B58_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CHeightU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FLCChunkFrameType_get_Chunks_m5E02401D17CF326BAA820AF60C0B83E7CDE92C35_inline (FLCChunkFrameType_t636D5C3EA9721C8189B42A7A71DB62BF2B04CAF6* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CChunksU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m23F2C5D1E18BCB697AAD7E04F5B213F5DAB67F76_gshared_inline (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Nullable_1_GetValueOrDefault_m02B4DD41DAF6A26617F539C1884EB316FD082037_gshared_inline (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}

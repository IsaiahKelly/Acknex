#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tBA91D6F758507962BF4BCC4D7B761DE096A24765;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t65262967E335E57743F3F3D3E2A0CD1D436C6C1D____1EFFC66ED9824AC18FA38BFB1F5BCFA41739631F81061DFB066ABCD5E82DC746_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t65262967E335E57743F3F3D3E2A0CD1D436C6C1D____385653F7D9EAD7B1653E0DE0DA701BDBA1AF5D1AA94077EB552100A890120071_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t65262967E335E57743F3F3D3E2A0CD1D436C6C1D____E86F6D5A328343758CA07D11387304462060D1F687FD2EE5BE8A5F7CAF4C4438_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B3751A1FF094FF6ADB37F46AE010D5B4177671C;
IL2CPP_EXTERN_C String_t* _stringLiteral25BD77D9C8EE2AE14C1EE2CADD4A0965D545E61E;
IL2CPP_EXTERN_C String_t* _stringLiteral26AAC6B889FEC46285F85C8F37F749A0066EA6E1;
IL2CPP_EXTERN_C String_t* _stringLiteral8119B141F84D73AB524E50CE5900965A8F32DF8F;
IL2CPP_EXTERN_C String_t* _stringLiteralA44EAA4338261C9A90B85B64C5ED933BE749B450;
IL2CPP_EXTERN_C String_t* _stringLiteralA96CA8F83FC4EF8A242919221BB3A1726A6C198E;
IL2CPP_EXTERN_C const RuntimeMethod* PcxReader_Load_m55CFCF80784838152502C900CC5E9659582CC127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8F7BB702A47AD6D81A8C7944D02211C417691BB5_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t57265F561B929DD0F3192AF070927065A5FAEF23 
{
};
struct U3CPrivateImplementationDetailsU3E_t65262967E335E57743F3F3D3E2A0CD1D436C6C1D  : public RuntimeObject
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
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};
struct ImageUtils_tC0BDDC26F3EDB90005B17208FB89F2552C6A34D8  : public RuntimeObject
{
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
struct PcxReader_t2EABF944DB8F2ACD2C8C91A602A7CEE5775295A8  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B  : public RuntimeObject
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Texture;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Palette;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tBA91D6F758507962BF4BCC4D7B761DE096A24765  : public RuntimeObject
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
struct RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8  : public RuntimeObject
{
	int32_t ___currentByte;
	int32_t ___runLength;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
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
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
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
struct __StaticArrayInitTypeSizeU3D128_t5BAA9FAC9881702293C636C04AC3D2C2F5258B0A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t5BAA9FAC9881702293C636C04AC3D2C2F5258B0A__padding[128];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t0E1A34E1F9B03EBF44AC4E761FF35C555CBAC1C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t0E1A34E1F9B03EBF44AC4E761FF35C555CBAC1C2__padding[64];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D97_tC7A907579B1CE8B259C18D4E85629497307BE67F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D97_tC7A907579B1CE8B259C18D4E85629497307BE67F__padding[97];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
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
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf;
	String_t* ___name;
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle;
	bool ___isExposed;
	int64_t ___append_startpos;
	int32_t ___access;
	bool ___owner;
	bool ___async;
	bool ___canseek;
	bool ___anonymous;
	bool ___buf_dirty;
	int32_t ___buf_size;
	int32_t ___buf_length;
	int32_t ___buf_offset;
	int64_t ___buf_start;
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
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct U3CPrivateImplementationDetailsU3E_t65262967E335E57743F3F3D3E2A0CD1D436C6C1D_StaticFields
{
	__StaticArrayInitTypeSizeU3D64_t0E1A34E1F9B03EBF44AC4E761FF35C555CBAC1C2 ___1EFFC66ED9824AC18FA38BFB1F5BCFA41739631F81061DFB066ABCD5E82DC746;
	__StaticArrayInitTypeSizeU3D128_t5BAA9FAC9881702293C636C04AC3D2C2F5258B0A ___385653F7D9EAD7B1653E0DE0DA701BDBA1AF5D1AA94077EB552100A890120071;
	__StaticArrayInitTypeSizeU3D97_tC7A907579B1CE8B259C18D4E85629497307BE67F ___E86F6D5A328343758CA07D11387304462060D1F687FD2EE5BE8A5F7CAF4C4438;
};
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	bool ___IsLittleEndian;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle;
	RuntimeObject* ___buf_recycle_lock;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
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
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8F7BB702A47AD6D81A8C7944D02211C417691BB5_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_mipLevel, int32_t ___2_sourceDataStartIndex, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ImageUtils_ConvEndian_m06C21F8C9326F736D857F888A53C8EA4F562400E (uint16_t ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___0_path, int32_t ___1_mode, int32_t ___2_access, int32_t ___3_share, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B* PcxReader_Load_m55CFCF80784838152502C900CC5E9659582CC127 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_useCgaPalette, bool ___2_paletteOnly, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ImageUtils_LittleEndian_m3164B8C8CE93C685B376D207098FA01CB5707C64 (uint16_t ___0_val, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RleReader__ctor_mEE7EA97C0DF08016FD33487412EDFEE4C154304B (RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RleReader_ReadByte_m0820ADAA96E2380D8DA6A5F9BB947A10249674EB (RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m2E76254260C768B5D64D1664EE3929D198766CEF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_format, int32_t ___3_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___0_updateMipmaps, bool ___1_makeNoLongerReadable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureAndPalette__ctor_m54AFB287FD2BBB41FAB9F6ED3632C5DAB9A169BB (TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___1_palette, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageUtils_ColorToTransparent_mFE74FD2A62D55BB402AC20835009BA258B260CDC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bmpData, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_transparentColor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageUtils_FlipPixelsVertically_m24CAFB9ECFF2DD01EFCE08B4F78067E5A11494F5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_frameData, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) ;
inline void Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8F7BB702A47AD6D81A8C7944D02211C417691BB5 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_mipLevel, int32_t ___2_sourceDataStartIndex, const RuntimeMethod* method)
{
	((  void (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8F7BB702A47AD6D81A8C7944D02211C417691BB5_gshared)(__this, ___0_data, ___1_mipLevel, ___2_sourceDataStartIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageUtils_FlipPalettePixelsVertically_mE0689456BD0871BE597EB13D8942D3D71519F377 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_frameData, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mF53D9DE8228E51EB1930B3E339A95DCCE8441178 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t65262967E335E57743F3F3D3E2A0CD1D436C6C1D____385653F7D9EAD7B1653E0DE0DA701BDBA1AF5D1AA94077EB552100A890120071_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t65262967E335E57743F3F3D3E2A0CD1D436C6C1D____E86F6D5A328343758CA07D11387304462060D1F687FD2EE5BE8A5F7CAF4C4438_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)97));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t65262967E335E57743F3F3D3E2A0CD1D436C6C1D____E86F6D5A328343758CA07D11387304462060D1F687FD2EE5BE8A5F7CAF4C4438_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t65262967E335E57743F3F3D3E2A0CD1D436C6C1D____385653F7D9EAD7B1653E0DE0DA701BDBA1AF5D1AA94077EB552100A890120071_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 2;
		(&V_0)->___TotalTypes = 3;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m360DB7908221137C61FC3AE468BEFEB02557DAAE (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tBA91D6F758507962BF4BCC4D7B761DE096A24765* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshal_pinvoke(const MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295& unmarshaled, MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshal_pinvoke_back(const MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshaled_pinvoke& marshaled, MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295& unmarshaled)
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
IL2CPP_EXTERN_C void MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshal_pinvoke_cleanup(MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshal_com(const MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295& unmarshaled, MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshal_com_back(const MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshaled_com& marshaled, MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295& unmarshaled)
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
IL2CPP_EXTERN_C void MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshal_com_cleanup(MonoScriptData_t1285FB702F86209AC32E4401299C02EB44EAB295_marshaled_com& marshaled)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ImageUtils_LittleEndian_m3164B8C8CE93C685B376D207098FA01CB5707C64 (uint16_t ___0_val, const RuntimeMethod* method) 
{
	{
		if (il2cpp_codegen_is_little_endian())
		{
			goto IL_000e;
		}
	}
	{
		uint16_t L_0 = ___0_val;
		uint16_t L_1;
		L_1 = ImageUtils_ConvEndian_m06C21F8C9326F736D857F888A53C8EA4F562400E(L_0, NULL);
		return L_1;
	}

IL_000e:
	{
		uint16_t L_2 = ___0_val;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ImageUtils_ConvEndian_m06C21F8C9326F736D857F888A53C8EA4F562400E (uint16_t ___0_val, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_val;
		uint16_t L_1 = ___0_val;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(uint16_t)((int32_t)(((int32_t)(uint16_t)((int32_t)((int32_t)L_0<<8)))&((int32_t)65280))))|((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_1>>8))&((int32_t)255)))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageUtils_FlipPalettePixelsVertically_mE0689456BD0871BE597EB13D8942D3D71519F377 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_frameData, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_frameData;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0025;
	}

IL_000d:
	{
		int32_t L_2 = ___2_height;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_2, L_3)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_frameData;
		int32_t L_5 = V_1;
		int32_t L_6 = ___1_width;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_width;
		int32_t L_10 = ___1_width;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_4, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_multiply(L_8, L_9)), L_10, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0025:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___2_height;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageUtils_FlipPixelsVertically_m24CAFB9ECFF2DD01EFCE08B4F78067E5A11494F5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_frameData, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_frameData;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_002b;
	}

IL_000d:
	{
		int32_t L_2 = ___2_height;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_2, L_3)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_frameData;
		int32_t L_5 = V_1;
		int32_t L_6 = ___1_width;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_width;
		int32_t L_10 = ___1_width;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_4, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), 4)), (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), 4)), ((int32_t)il2cpp_codegen_multiply(L_10, 4)), NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002b:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___2_height;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageUtils_ColorToTransparent_mFE74FD2A62D55BB402AC20835009BA258B260CDC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bmpData, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_transparentColor, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	{
		V_0 = 0;
		goto IL_0043;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bmpData;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bmpData;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_bmpData;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12 = ___1_transparentColor;
		uint8_t L_13 = L_12.___r;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0035;
		}
	}
	{
		uint8_t L_14 = V_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15 = ___1_transparentColor;
		uint8_t L_16 = L_15.___g;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0035;
		}
	}
	{
		uint8_t L_17 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18 = ___1_transparentColor;
		uint8_t L_19 = L_18.___b;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_19))))
		{
			goto IL_0035;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_bmpData;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_21, 3))), (uint8_t)0);
		goto IL_003f;
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_bmpData;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 3))), (uint8_t)((int32_t)255));
	}

IL_003f:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 4));
	}

IL_0043:
	{
		int32_t L_25 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___0_bmpData;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___0_bmpData;
		return L_27;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B* PcxReader_Load_m90018EB40427ACE2A7D9F910985BB7C4AF4528AF (String_t* ___0_fileName, bool ___1_useCgaPalette, bool ___2_paletteOnly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B* V_1 = NULL;
	{
		String_t* L_0 = ___0_fileName;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_1, L_0, 3, 1, 1, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001e;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_001e:
				{
					return;
				}
			}
		});
		try
		{
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
			bool L_5 = ___1_useCgaPalette;
			bool L_6 = ___2_paletteOnly;
			TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B* L_7;
			L_7 = PcxReader_Load_m55CFCF80784838152502C900CC5E9659582CC127(L_4, L_5, L_6, NULL);
			V_1 = L_7;
			goto IL_001f;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B* L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B* PcxReader_Load_m55CFCF80784838152502C900CC5E9659582CC127 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, bool ___1_useCgaPalette, bool ___2_paletteOnly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8F7BB702A47AD6D81A8C7944D02211C417691BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t65262967E335E57743F3F3D3E2A0CD1D436C6C1D____1EFFC66ED9824AC18FA38BFB1F5BCFA41739631F81061DFB066ABCD5E82DC746_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_0 = NULL;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint16_t V_4 = 0;
	uint16_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_14;
	memset((&V_14), 0, sizeof(V_14));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_15 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_16 = NULL;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* V_20 = NULL;
	bool V_21 = false;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	uint8_t V_24 = 0x0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_28 = NULL;
	bool V_29 = false;
	bool V_30 = false;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	uint8_t V_34 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_35 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_36 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_37 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_38 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_39 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_40 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_41 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_42 = NULL;
	int32_t V_43 = 0;
	int32_t V_44 = 0;
	Exception_t* V_45 = NULL;
	int32_t V_46 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_47 = NULL;
	int32_t V_48 = 0;
	uint8_t V_49 = 0x0;
	uint8_t V_50 = 0x0;
	uint8_t V_51 = 0x0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_52 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B7_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B67_0 = 0;
	int32_t G_B101_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_1, L_0, NULL);
		V_0 = L_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(24, L_2);
		if ((((int32_t)((int32_t)(uint8_t)L_3)) == ((int32_t)((int32_t)10))))
		{
			goto IL_001d;
		}
	}
	{
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_4 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B3751A1FF094FF6ADB37F46AE010D5B4177671C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PcxReader_Load_m55CFCF80784838152502C900CC5E9659582CC127_RuntimeMethod_var)));
	}

IL_001d:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___0_stream;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(24, L_5);
		V_1 = (uint8_t)((int32_t)(uint8_t)L_6);
		uint8_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)5)))
		{
			goto IL_0034;
		}
	}
	{
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_8 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25BD77D9C8EE2AE14C1EE2CADD4A0965D545E61E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PcxReader_Load_m55CFCF80784838152502C900CC5E9659582CC127_RuntimeMethod_var)));
	}

IL_0034:
	{
		uint8_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_0041;
		}
	}
	{
		uint8_t L_10 = V_1;
		G_B7_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 0;
	}

IL_0042:
	{
		V_2 = (bool)G_B7_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = ___0_stream;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(24, L_11);
		if ((((int32_t)((int32_t)(uint8_t)L_12)) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_13 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26AAC6B889FEC46285F85C8F37F749A0066EA6E1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PcxReader_Load_m55CFCF80784838152502C900CC5E9659582CC127_RuntimeMethod_var)));
	}

IL_0058:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = ___0_stream;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(24, L_14);
		V_3 = L_15;
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)8)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)4)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)2)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			goto IL_007a;
		}
	}
	{
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_20 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA96CA8F83FC4EF8A242919221BB3A1726A6C198E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PcxReader_Load_m55CFCF80784838152502C900CC5E9659582CC127_RuntimeMethod_var)));
	}

IL_007a:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_21 = V_0;
		NullCheck(L_21);
		uint16_t L_22;
		L_22 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_21);
		uint16_t L_23;
		L_23 = ImageUtils_LittleEndian_m3164B8C8CE93C685B376D207098FA01CB5707C64(L_22, NULL);
		V_4 = L_23;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_24 = V_0;
		NullCheck(L_24);
		uint16_t L_25;
		L_25 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_24);
		uint16_t L_26;
		L_26 = ImageUtils_LittleEndian_m3164B8C8CE93C685B376D207098FA01CB5707C64(L_25, NULL);
		V_5 = L_26;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = V_0;
		NullCheck(L_27);
		uint16_t L_28;
		L_28 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_27);
		uint16_t L_29;
		L_29 = ImageUtils_LittleEndian_m3164B8C8CE93C685B376D207098FA01CB5707C64(L_28, NULL);
		V_6 = L_29;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_30 = V_0;
		NullCheck(L_30);
		uint16_t L_31;
		L_31 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_30);
		uint16_t L_32;
		L_32 = ImageUtils_LittleEndian_m3164B8C8CE93C685B376D207098FA01CB5707C64(L_31, NULL);
		uint16_t L_33 = V_6;
		uint16_t L_34 = V_4;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_34)), 1));
		uint16_t L_35 = V_5;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_35)), 1));
		int32_t L_36 = V_7;
		if ((((int32_t)L_36) < ((int32_t)1)))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_37 = V_8;
		if ((((int32_t)L_37) < ((int32_t)1)))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_38 = V_7;
		if ((((int32_t)L_38) > ((int32_t)((int32_t)32767))))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_39 = V_8;
		if ((((int32_t)L_39) <= ((int32_t)((int32_t)32767))))
		{
			goto IL_00e3;
		}
	}

IL_00d8:
	{
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_40 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44EAA4338261C9A90B85B64C5ED933BE749B450)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PcxReader_Load_m55CFCF80784838152502C900CC5E9659582CC127_RuntimeMethod_var)));
	}

IL_00e3:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_41 = V_0;
		NullCheck(L_41);
		uint16_t L_42;
		L_42 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_41);
		uint16_t L_43;
		L_43 = ImageUtils_LittleEndian_m3164B8C8CE93C685B376D207098FA01CB5707C64(L_42, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_44 = V_0;
		NullCheck(L_44);
		uint16_t L_45;
		L_45 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_44);
		uint16_t L_46;
		L_46 = ImageUtils_LittleEndian_m3164B8C8CE93C685B376D207098FA01CB5707C64(L_45, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = L_47;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_49 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t65262967E335E57743F3F3D3E2A0CD1D436C6C1D____1EFFC66ED9824AC18FA38BFB1F5BCFA41739631F81061DFB066ABCD5E82DC746_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_48, L_49, NULL);
		V_9 = L_48;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		V_10 = L_50;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_51 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_10;
		NullCheck(L_51);
		int32_t L_53;
		L_53 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(22, L_51, L_52, 0, ((int32_t)48));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_54 = ___0_stream;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = VirtualFuncInvoker0< int32_t >::Invoke(24, L_54);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_56 = ___0_stream;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = VirtualFuncInvoker0< int32_t >::Invoke(24, L_56);
		V_11 = L_57;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_58 = V_0;
		NullCheck(L_58);
		uint16_t L_59;
		L_59 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_58);
		uint16_t L_60;
		L_60 = ImageUtils_LittleEndian_m3164B8C8CE93C685B376D207098FA01CB5707C64(L_59, NULL);
		V_12 = L_60;
		int32_t L_61 = V_12;
		if (L_61)
		{
			goto IL_014d;
		}
	}
	{
		uint16_t L_62 = V_6;
		uint16_t L_63 = V_4;
		V_12 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)L_63)), 1));
	}

IL_014d:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_64 = V_0;
		NullCheck(L_64);
		uint16_t L_65;
		L_65 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_64);
		uint16_t L_66;
		L_66 = ImageUtils_LittleEndian_m3164B8C8CE93C685B376D207098FA01CB5707C64(L_65, NULL);
		V_13 = L_66;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67;
		L_67 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		V_14 = L_67;
		int32_t L_68 = V_3;
		if ((!(((uint32_t)L_68) == ((uint32_t)8))))
		{
			goto IL_01b0;
		}
	}
	{
		int32_t L_69 = V_11;
		if ((!(((uint32_t)L_69) == ((uint32_t)1))))
		{
			goto IL_01b0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)768));
		V_10 = L_70;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_71 = ___0_stream;
		NullCheck(L_71);
		int64_t L_72;
		L_72 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20, L_71, ((int64_t)((int32_t)-768)), 2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_73 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_10;
		NullCheck(L_73);
		int32_t L_75;
		L_75 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(22, L_73, L_74, 0, ((int32_t)768));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = V_10;
		NullCheck(L_76);
		int32_t L_77 = 0;
		uint8_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_10;
		NullCheck(L_79);
		int32_t L_80 = 1;
		uint8_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_10;
		NullCheck(L_82);
		int32_t L_83 = 2;
		uint8_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_85;
		memset((&L_85), 0, sizeof(L_85));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_85), L_78, L_81, L_84, (uint8_t)((int32_t)255), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_86;
		L_86 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_85, NULL);
		V_14 = L_86;
	}

IL_01b0:
	{
		int32_t L_87 = V_3;
		if ((!(((uint32_t)L_87) == ((uint32_t)1))))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_88 = V_11;
		G_B27_0 = ((((int32_t)L_88) == ((int32_t)1))? 1 : 0);
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B27_0 = 0;
	}

IL_01bc:
	{
		bool L_89 = V_2;
		if (!((int32_t)(G_B27_0&(int32_t)L_89)))
		{
			goto IL_020e;
		}
	}
	{
		V_2 = (bool)0;
		V_21 = (bool)1;
		V_22 = 6;
		goto IL_01dc;
	}

IL_01ca:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = V_10;
		int32_t L_91 = V_22;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint8_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		if (!L_93)
		{
			goto IL_01d6;
		}
	}
	{
		V_21 = (bool)0;
		goto IL_01e4;
	}

IL_01d6:
	{
		int32_t L_94 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_01dc:
	{
		int32_t L_95 = V_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_10;
		NullCheck(L_96);
		if ((((int32_t)L_95) < ((int32_t)((int32_t)(((RuntimeArray*)L_96)->max_length)))))
		{
			goto IL_01ca;
		}
	}

IL_01e4:
	{
		bool L_97 = V_21;
		if (!L_97)
		{
			goto IL_020e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = V_10;
		NullCheck(L_98);
		int32_t L_99 = 0;
		uint8_t L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		if (L_100)
		{
			goto IL_020c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = V_10;
		NullCheck(L_101);
		int32_t L_102 = 1;
		uint8_t L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		if (L_103)
		{
			goto IL_020c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = V_10;
		NullCheck(L_104);
		int32_t L_105 = 2;
		uint8_t L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		if (L_106)
		{
			goto IL_020c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_10;
		NullCheck(L_107);
		int32_t L_108 = 3;
		uint8_t L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		if (L_109)
		{
			goto IL_020c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = V_10;
		NullCheck(L_110);
		int32_t L_111 = 4;
		uint8_t L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		if (L_112)
		{
			goto IL_020c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = V_10;
		NullCheck(L_113);
		int32_t L_114 = 5;
		uint8_t L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		if (!L_115)
		{
			goto IL_020e;
		}
	}

IL_020c:
	{
		V_2 = (bool)1;
	}

IL_020e:
	{
		bool L_116 = V_2;
		if (L_116)
		{
			goto IL_035e;
		}
	}
	{
		int32_t L_117 = V_3;
		if ((!(((uint32_t)L_117) == ((uint32_t)1))))
		{
			goto IL_035e;
		}
	}
	{
		int32_t L_118 = V_11;
		if ((((int32_t)L_118) == ((int32_t)3)))
		{
			goto IL_0228;
		}
	}
	{
		int32_t L_119 = V_11;
		if ((!(((uint32_t)L_119) == ((uint32_t)4))))
		{
			goto IL_035e;
		}
	}

IL_0228:
	{
		int32_t L_120 = V_11;
		if ((!(((uint32_t)L_120) == ((uint32_t)3))))
		{
			goto IL_02d5;
		}
	}
	{
		V_23 = 0;
		goto IL_02b1;
	}

IL_0235:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121 = V_10;
		int32_t L_122 = V_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = V_9;
		int32_t L_124 = V_23;
		NullCheck(L_123);
		int32_t L_125 = ((int32_t)il2cpp_codegen_add(L_124, 8));
		int32_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_122, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_126>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_127 = V_10;
		int32_t L_128 = V_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = V_9;
		int32_t L_130 = V_23;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(L_130, 8));
		int32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_128, 3)), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_132>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = V_10;
		int32_t L_134 = V_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = V_9;
		int32_t L_136 = V_23;
		NullCheck(L_135);
		int32_t L_137 = ((int32_t)il2cpp_codegen_add(L_136, 8));
		int32_t L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_133);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_134, 3)), 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_138&((int32_t)255)))));
		int32_t L_139 = V_23;
		if (L_139)
		{
			goto IL_02ab;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_140 = V_10;
		int32_t L_141 = V_23;
		NullCheck(L_140);
		int32_t L_142 = ((int32_t)il2cpp_codegen_multiply(L_141, 3));
		uint8_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_144 = V_10;
		int32_t L_145 = V_23;
		NullCheck(L_144);
		int32_t L_146 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_145, 3)), 1));
		uint8_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_148 = V_10;
		int32_t L_149 = V_23;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_149, 3)), 2));
		uint8_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_152;
		memset((&L_152), 0, sizeof(L_152));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_152), L_143, L_147, L_151, (uint8_t)((int32_t)255), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_153;
		L_153 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_152, NULL);
		V_14 = L_153;
	}

IL_02ab:
	{
		int32_t L_154 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_154, 1));
	}

IL_02b1:
	{
		int32_t L_155 = V_23;
		if ((((int32_t)L_155) < ((int32_t)8)))
		{
			goto IL_0235;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_156 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_157 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_158 = V_10;
		int32_t L_159 = 0;
		V_24 = (uint8_t)L_159;
		NullCheck(L_158);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_159);
		uint8_t L_160 = V_24;
		uint8_t L_161 = L_160;
		V_24 = L_161;
		NullCheck(L_157);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_161);
		uint8_t L_162 = V_24;
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_162);
		goto IL_035e;
	}

IL_02d5:
	{
		int32_t L_163 = V_11;
		if ((!(((uint32_t)L_163) == ((uint32_t)4))))
		{
			goto IL_035e;
		}
	}
	{
		V_25 = 0;
		goto IL_0358;
	}

IL_02e2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_164 = V_10;
		int32_t L_165 = V_25;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_166 = V_9;
		int32_t L_167 = V_25;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		int32_t L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_165, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_169>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_170 = V_10;
		int32_t L_171 = V_25;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = V_9;
		int32_t L_173 = V_25;
		NullCheck(L_172);
		int32_t L_174 = L_173;
		int32_t L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_171, 3)), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_175>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_176 = V_10;
		int32_t L_177 = V_25;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = V_9;
		int32_t L_179 = V_25;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		int32_t L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		NullCheck(L_176);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_177, 3)), 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_181&((int32_t)255)))));
		int32_t L_182 = V_25;
		if (L_182)
		{
			goto IL_0352;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183 = V_10;
		int32_t L_184 = V_25;
		NullCheck(L_183);
		int32_t L_185 = ((int32_t)il2cpp_codegen_multiply(L_184, 3));
		uint8_t L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_187 = V_10;
		int32_t L_188 = V_25;
		NullCheck(L_187);
		int32_t L_189 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_188, 3)), 1));
		uint8_t L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_191 = V_10;
		int32_t L_192 = V_25;
		NullCheck(L_191);
		int32_t L_193 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_192, 3)), 2));
		uint8_t L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_195;
		memset((&L_195), 0, sizeof(L_195));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_195), L_186, L_190, L_194, (uint8_t)((int32_t)255), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_196;
		L_196 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_195, NULL);
		V_14 = L_196;
	}

IL_0352:
	{
		int32_t L_197 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_197, 1));
	}

IL_0358:
	{
		int32_t L_198 = V_25;
		if ((((int32_t)L_198) < ((int32_t)((int32_t)16))))
		{
			goto IL_02e2;
		}
	}

IL_035e:
	{
		bool L_199 = ___1_useCgaPalette;
		bool L_200 = V_2;
		if (!((int32_t)((int32_t)L_199&(int32_t)L_200)))
		{
			goto IL_04e5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_201 = V_10;
		NullCheck(L_201);
		int32_t L_202 = 0;
		uint8_t L_203 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		V_26 = ((int32_t)((int32_t)L_203>>4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_204 = V_10;
		NullCheck(L_204);
		int32_t L_205 = 3;
		uint8_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		V_27 = ((int32_t)((int32_t)L_206>>5));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_28 = L_207;
		int32_t L_208 = V_3;
		if ((!(((uint32_t)L_208) == ((uint32_t)1))))
		{
			goto IL_0395;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = V_28;
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = V_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_211 = V_9;
		int32_t L_212 = V_26;
		NullCheck(L_211);
		int32_t L_213 = L_212;
		int32_t L_214 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_214);
		goto IL_0465;
	}

IL_0395:
	{
		int32_t L_215 = V_3;
		if ((!(((uint32_t)L_215) == ((uint32_t)2))))
		{
			goto IL_0465;
		}
	}
	{
		int32_t L_216 = V_13;
		if (L_216)
		{
			goto IL_03b4;
		}
	}
	{
		int32_t L_217 = V_27;
		V_30 = (bool)((!(((uint32_t)((int32_t)(L_217&2))) <= ((uint32_t)0)))? 1 : 0);
		int32_t L_218 = V_27;
		V_29 = (bool)((!(((uint32_t)((int32_t)(L_218&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_03de;
	}

IL_03b4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219 = V_10;
		NullCheck(L_219);
		int32_t L_220 = 4;
		uint8_t L_221 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_222 = V_10;
		NullCheck(L_222);
		int32_t L_223 = 5;
		uint8_t L_224 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		V_30 = (bool)((((int32_t)((((int32_t)L_221) > ((int32_t)L_224))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_225 = V_10;
		NullCheck(L_225);
		int32_t L_226 = 4;
		uint8_t L_227 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		if ((((int32_t)L_227) > ((int32_t)((int32_t)200))))
		{
			goto IL_03db;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = V_10;
		NullCheck(L_228);
		int32_t L_229 = 5;
		uint8_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		G_B67_0 = ((((int32_t)L_230) > ((int32_t)((int32_t)200)))? 1 : 0);
		goto IL_03dc;
	}

IL_03db:
	{
		G_B67_0 = 1;
	}

IL_03dc:
	{
		V_29 = (bool)G_B67_0;
	}

IL_03de:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_231 = V_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = V_9;
		int32_t L_233 = V_26;
		NullCheck(L_232);
		int32_t L_234 = L_233;
		int32_t L_235 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		NullCheck(L_231);
		(L_231)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_235);
		bool L_236 = V_30;
		if (L_236)
		{
			goto IL_0429;
		}
	}
	{
		bool L_237 = V_29;
		if (L_237)
		{
			goto IL_040c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_238 = V_28;
		NullCheck(L_238);
		(L_238)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)43520));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_239 = V_28;
		NullCheck(L_239);
		(L_239)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)11141120));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = V_28;
		NullCheck(L_240);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)11162880));
		goto IL_0465;
	}

IL_040c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = V_28;
		NullCheck(L_241);
		(L_241)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)5635925));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_242 = V_28;
		NullCheck(L_242);
		(L_242)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)16733525));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_243 = V_28;
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)16777045));
		goto IL_0465;
	}

IL_0429:
	{
		bool L_244 = V_29;
		if (L_244)
		{
			goto IL_044a;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_245 = V_28;
		NullCheck(L_245);
		(L_245)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)43690));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_246 = V_28;
		NullCheck(L_246);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)11141290));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = V_28;
		NullCheck(L_247);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)11184810));
		goto IL_0465;
	}

IL_044a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_248 = V_28;
		NullCheck(L_248);
		(L_248)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)5636095));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = V_28;
		NullCheck(L_249);
		(L_249)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)16733695));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_250 = V_28;
		NullCheck(L_250);
		(L_250)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)16777215));
	}

IL_0465:
	{
		V_31 = 0;
		goto IL_04e0;
	}

IL_046a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_251 = V_10;
		int32_t L_252 = V_31;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = V_28;
		int32_t L_254 = V_31;
		NullCheck(L_253);
		int32_t L_255 = L_254;
		int32_t L_256 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		NullCheck(L_251);
		(L_251)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_252, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_256>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_257 = V_10;
		int32_t L_258 = V_31;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_259 = V_28;
		int32_t L_260 = V_31;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		int32_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		NullCheck(L_257);
		(L_257)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_258, 3)), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_262>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_263 = V_10;
		int32_t L_264 = V_31;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_265 = V_28;
		int32_t L_266 = V_31;
		NullCheck(L_265);
		int32_t L_267 = L_266;
		int32_t L_268 = (L_265)->GetAt(static_cast<il2cpp_array_size_t>(L_267));
		NullCheck(L_263);
		(L_263)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_264, 3)), 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_268&((int32_t)255)))));
		int32_t L_269 = V_31;
		if (L_269)
		{
			goto IL_04da;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_270 = V_10;
		int32_t L_271 = V_31;
		NullCheck(L_270);
		int32_t L_272 = ((int32_t)il2cpp_codegen_multiply(L_271, 3));
		uint8_t L_273 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_274 = V_10;
		int32_t L_275 = V_31;
		NullCheck(L_274);
		int32_t L_276 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_275, 3)), 1));
		uint8_t L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_278 = V_10;
		int32_t L_279 = V_31;
		NullCheck(L_278);
		int32_t L_280 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_279, 3)), 2));
		uint8_t L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_282;
		memset((&L_282), 0, sizeof(L_282));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_282), L_273, L_277, L_281, (uint8_t)((int32_t)255), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_283;
		L_283 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_282, NULL);
		V_14 = L_283;
	}

IL_04da:
	{
		int32_t L_284 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_284, 1));
	}

IL_04e0:
	{
		int32_t L_285 = V_31;
		if ((((int32_t)L_285) < ((int32_t)4)))
		{
			goto IL_046a;
		}
	}

IL_04e5:
	{
		int32_t L_286 = V_7;
		int32_t L_287 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_288 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_286, 1)), 4)), L_287)));
		V_15 = L_288;
		int32_t L_289 = V_7;
		int32_t L_290 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_291 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_289, 1)), 4)), L_290)));
		V_16 = L_291;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_292 = ___0_stream;
		NullCheck(L_292);
		int64_t L_293;
		L_293 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20, L_292, ((int64_t)((int32_t)128)), 0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_294 = ___0_stream;
		RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* L_295 = (RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8*)il2cpp_codegen_object_new(RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8_il2cpp_TypeInfo_var);
		RleReader__ctor_mEE7EA97C0DF08016FD33487412EDFEE4C154304B(L_295, L_294, NULL);
		V_20 = L_295;
	}
	try
	{
		{
			int32_t L_296 = V_3;
			if ((!(((uint32_t)L_296) == ((uint32_t)1))))
			{
				goto IL_06fa_1;
			}
		}
		{
			int32_t L_297 = V_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_298 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_297);
			V_35 = L_298;
			int32_t L_299 = V_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_300 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_299, 8)));
			V_36 = L_300;
			V_18 = 0;
			goto IL_06ec_1;
		}

IL_053e_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_301 = V_36;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_302 = V_36;
			NullCheck(L_302);
			Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_301, 0, ((int32_t)(((RuntimeArray*)L_302)->max_length)), NULL);
			V_33 = 0;
			goto IL_05ba_1;
		}

IL_054f_1:
		{
			V_17 = 0;
			V_19 = 0;
			goto IL_05ae_1;
		}

IL_0557_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_303 = V_35;
			int32_t L_304 = V_19;
			RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* L_305 = V_20;
			NullCheck(L_305);
			int32_t L_306;
			L_306 = RleReader_ReadByte_m0820ADAA96E2380D8DA6A5F9BB947A10249674EB(L_305, NULL);
			NullCheck(L_303);
			(L_303)->SetAt(static_cast<il2cpp_array_size_t>(L_304), (uint8_t)((int32_t)(uint8_t)L_306));
			V_32 = 7;
			goto IL_05a3_1;
		}

IL_0569_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_307 = V_35;
			int32_t L_308 = V_19;
			NullCheck(L_307);
			int32_t L_309 = L_308;
			uint8_t L_310 = (L_307)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
			int32_t L_311 = V_32;
			if (!((int32_t)((int32_t)L_310&((int32_t)(1<<((int32_t)(L_311&((int32_t)31))))))))
			{
				goto IL_057d_1;
			}
		}
		{
			V_34 = (uint8_t)1;
			goto IL_0580_1;
		}

IL_057d_1:
		{
			V_34 = (uint8_t)0;
		}

IL_0580_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_312 = V_36;
			int32_t L_313 = V_17;
			NullCheck(L_312);
			uint8_t* L_314 = ((L_312)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_313)));
			int32_t L_315 = *((uint8_t*)L_314);
			uint8_t L_316 = V_34;
			int32_t L_317 = V_33;
			*((int8_t*)L_314) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_315|((int32_t)(uint8_t)((int32_t)((int32_t)L_316<<((int32_t)(L_317&((int32_t)31)))))))));
			int32_t L_318 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add(L_318, 1));
			int32_t L_319 = V_32;
			V_32 = ((int32_t)il2cpp_codegen_subtract(L_319, 1));
		}

IL_05a3_1:
		{
			int32_t L_320 = V_32;
			if ((((int32_t)L_320) >= ((int32_t)0)))
			{
				goto IL_0569_1;
			}
		}
		{
			int32_t L_321 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add(L_321, 1));
		}

IL_05ae_1:
		{
			int32_t L_322 = V_19;
			int32_t L_323 = V_12;
			if ((((int32_t)L_322) < ((int32_t)L_323)))
			{
				goto IL_0557_1;
			}
		}
		{
			int32_t L_324 = V_33;
			V_33 = ((int32_t)il2cpp_codegen_add(L_324, 1));
		}

IL_05ba_1:
		{
			int32_t L_325 = V_33;
			int32_t L_326 = V_11;
			if ((((int32_t)L_325) < ((int32_t)L_326)))
			{
				goto IL_054f_1;
			}
		}
		{
			V_17 = 0;
			goto IL_06dd_1;
		}

IL_05c8_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_327 = V_36;
			int32_t L_328 = V_17;
			NullCheck(L_327);
			int32_t L_329 = L_328;
			uint8_t L_330 = (L_327)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
			V_19 = L_330;
			bool L_331 = V_2;
			if (L_331)
			{
				goto IL_0655_1;
			}
		}
		{
			int32_t L_332 = V_11;
			if ((!(((uint32_t)L_332) == ((uint32_t)1))))
			{
				goto IL_0655_1;
			}
		}
		{
			int32_t L_333 = V_19;
			if (L_333)
			{
				goto IL_05e1_1;
			}
		}
		{
			G_B101_0 = 0;
			goto IL_05e6_1;
		}

IL_05e1_1:
		{
			G_B101_0 = ((int32_t)255);
		}

IL_05e6_1:
		{
			V_32 = G_B101_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_334 = V_16;
			int32_t L_335 = V_18;
			int32_t L_336 = V_7;
			int32_t L_337 = V_17;
			int32_t L_338 = V_32;
			NullCheck(L_334);
			(L_334)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_335, L_336)), L_337))))), (uint8_t)((int32_t)(uint8_t)L_338));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_339 = V_16;
			int32_t L_340 = V_18;
			int32_t L_341 = V_7;
			int32_t L_342 = V_17;
			int32_t L_343 = V_32;
			NullCheck(L_339);
			(L_339)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_340, L_341)), L_342)))), 1))), (uint8_t)((int32_t)(uint8_t)L_343));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_344 = V_16;
			int32_t L_345 = V_18;
			int32_t L_346 = V_7;
			int32_t L_347 = V_17;
			int32_t L_348 = V_32;
			NullCheck(L_344);
			(L_344)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_345, L_346)), L_347)))), 2))), (uint8_t)((int32_t)(uint8_t)L_348));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_349 = V_15;
			int32_t L_350 = V_18;
			int32_t L_351 = V_7;
			int32_t L_352 = V_17;
			int32_t L_353 = V_19;
			NullCheck(L_349);
			(L_349)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_350, L_351)), L_352))))), (uint8_t)((int32_t)(uint8_t)L_353));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_354 = V_15;
			int32_t L_355 = V_18;
			int32_t L_356 = V_7;
			int32_t L_357 = V_17;
			int32_t L_358 = V_19;
			NullCheck(L_354);
			(L_354)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_355, L_356)), L_357)))), 1))), (uint8_t)((int32_t)(uint8_t)L_358));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_359 = V_15;
			int32_t L_360 = V_18;
			int32_t L_361 = V_7;
			int32_t L_362 = V_17;
			int32_t L_363 = V_19;
			NullCheck(L_359);
			(L_359)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_360, L_361)), L_362)))), 2))), (uint8_t)((int32_t)(uint8_t)L_363));
			goto IL_06d7_1;
		}

IL_0655_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_364 = V_16;
			int32_t L_365 = V_18;
			int32_t L_366 = V_7;
			int32_t L_367 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_368 = V_10;
			int32_t L_369 = V_19;
			NullCheck(L_368);
			int32_t L_370 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_369, 3)), 2));
			uint8_t L_371 = (L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
			NullCheck(L_364);
			(L_364)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_365, L_366)), L_367))))), (uint8_t)L_371);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_372 = V_16;
			int32_t L_373 = V_18;
			int32_t L_374 = V_7;
			int32_t L_375 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_376 = V_10;
			int32_t L_377 = V_19;
			NullCheck(L_376);
			int32_t L_378 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_377, 3)), 1));
			uint8_t L_379 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
			NullCheck(L_372);
			(L_372)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_373, L_374)), L_375)))), 1))), (uint8_t)L_379);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_380 = V_16;
			int32_t L_381 = V_18;
			int32_t L_382 = V_7;
			int32_t L_383 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_384 = V_10;
			int32_t L_385 = V_19;
			NullCheck(L_384);
			int32_t L_386 = ((int32_t)il2cpp_codegen_multiply(L_385, 3));
			uint8_t L_387 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_386));
			NullCheck(L_380);
			(L_380)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_381, L_382)), L_383)))), 2))), (uint8_t)L_387);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_388 = V_15;
			int32_t L_389 = V_18;
			int32_t L_390 = V_7;
			int32_t L_391 = V_17;
			int32_t L_392 = V_19;
			NullCheck(L_388);
			(L_388)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_389, L_390)), L_391))))), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_392, 3)), 2))));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_393 = V_15;
			int32_t L_394 = V_18;
			int32_t L_395 = V_7;
			int32_t L_396 = V_17;
			int32_t L_397 = V_19;
			NullCheck(L_393);
			(L_393)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_394, L_395)), L_396)))), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_397, 3)), 1))));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_398 = V_15;
			int32_t L_399 = V_18;
			int32_t L_400 = V_7;
			int32_t L_401 = V_17;
			int32_t L_402 = V_19;
			NullCheck(L_398);
			(L_398)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_399, L_400)), L_401)))), 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_multiply(L_402, 3))));
		}

IL_06d7_1:
		{
			int32_t L_403 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add(L_403, 1));
		}

IL_06dd_1:
		{
			int32_t L_404 = V_17;
			int32_t L_405 = V_7;
			if ((((int32_t)L_404) < ((int32_t)L_405)))
			{
				goto IL_05c8_1;
			}
		}
		{
			int32_t L_406 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_406, 1));
		}

IL_06ec_1:
		{
			int32_t L_407 = V_18;
			int32_t L_408 = V_8;
			if ((((int32_t)L_407) < ((int32_t)L_408)))
			{
				goto IL_053e_1;
			}
		}
		{
			goto IL_0b57_1;
		}

IL_06fa_1:
		{
			int32_t L_409 = V_11;
			if ((!(((uint32_t)L_409) == ((uint32_t)1))))
			{
				goto IL_0a7c_1;
			}
		}
		{
			int32_t L_410 = V_3;
			if ((!(((uint32_t)L_410) == ((uint32_t)8))))
			{
				goto IL_07b6_1;
			}
		}
		{
			int32_t L_411 = V_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_412 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_411);
			V_37 = L_412;
			V_18 = 0;
			goto IL_07a8_1;
		}

IL_071a_1:
		{
			V_19 = 0;
			goto IL_0732_1;
		}

IL_071f_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_413 = V_37;
			int32_t L_414 = V_19;
			RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* L_415 = V_20;
			NullCheck(L_415);
			int32_t L_416;
			L_416 = RleReader_ReadByte_m0820ADAA96E2380D8DA6A5F9BB947A10249674EB(L_415, NULL);
			NullCheck(L_413);
			(L_413)->SetAt(static_cast<il2cpp_array_size_t>(L_414), (uint8_t)((int32_t)(uint8_t)L_416));
			int32_t L_417 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add(L_417, 1));
		}

IL_0732_1:
		{
			int32_t L_418 = V_19;
			int32_t L_419 = V_12;
			if ((((int32_t)L_418) < ((int32_t)L_419)))
			{
				goto IL_071f_1;
			}
		}
		{
			V_17 = 0;
			goto IL_079c_1;
		}

IL_073d_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_420 = V_37;
			int32_t L_421 = V_17;
			NullCheck(L_420);
			int32_t L_422 = L_421;
			uint8_t L_423 = (L_420)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
			V_19 = L_423;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_424 = V_16;
			int32_t L_425 = V_18;
			int32_t L_426 = V_7;
			int32_t L_427 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_428 = V_10;
			int32_t L_429 = V_19;
			NullCheck(L_428);
			int32_t L_430 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_429, 3)), 2));
			uint8_t L_431 = (L_428)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
			NullCheck(L_424);
			(L_424)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_425, L_426)), L_427))))), (uint8_t)L_431);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_432 = V_16;
			int32_t L_433 = V_18;
			int32_t L_434 = V_7;
			int32_t L_435 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_436 = V_10;
			int32_t L_437 = V_19;
			NullCheck(L_436);
			int32_t L_438 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_437, 3)), 1));
			uint8_t L_439 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
			NullCheck(L_432);
			(L_432)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_433, L_434)), L_435)))), 1))), (uint8_t)L_439);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_440 = V_16;
			int32_t L_441 = V_18;
			int32_t L_442 = V_7;
			int32_t L_443 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_444 = V_10;
			int32_t L_445 = V_19;
			NullCheck(L_444);
			int32_t L_446 = ((int32_t)il2cpp_codegen_multiply(L_445, 3));
			uint8_t L_447 = (L_444)->GetAt(static_cast<il2cpp_array_size_t>(L_446));
			NullCheck(L_440);
			(L_440)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_441, L_442)), L_443)))), 2))), (uint8_t)L_447);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_448 = V_15;
			int32_t L_449 = V_18;
			int32_t L_450 = V_7;
			int32_t L_451 = V_17;
			int32_t L_452 = V_19;
			NullCheck(L_448);
			(L_448)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_449, L_450)), L_451))), (uint8_t)((int32_t)(uint8_t)L_452));
			int32_t L_453 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add(L_453, 1));
		}

IL_079c_1:
		{
			int32_t L_454 = V_17;
			int32_t L_455 = V_7;
			if ((((int32_t)L_454) < ((int32_t)L_455)))
			{
				goto IL_073d_1;
			}
		}
		{
			int32_t L_456 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_456, 1));
		}

IL_07a8_1:
		{
			int32_t L_457 = V_18;
			int32_t L_458 = V_8;
			if ((((int32_t)L_457) < ((int32_t)L_458)))
			{
				goto IL_071a_1;
			}
		}
		{
			goto IL_0b57_1;
		}

IL_07b6_1:
		{
			int32_t L_459 = V_3;
			if ((!(((uint32_t)L_459) == ((uint32_t)4))))
			{
				goto IL_08c6_1;
			}
		}
		{
			int32_t L_460 = V_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_461 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_460);
			V_38 = L_461;
			V_18 = 0;
			goto IL_08b8_1;
		}

IL_07ce_1:
		{
			V_19 = 0;
			goto IL_07e6_1;
		}

IL_07d3_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_462 = V_38;
			int32_t L_463 = V_19;
			RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* L_464 = V_20;
			NullCheck(L_464);
			int32_t L_465;
			L_465 = RleReader_ReadByte_m0820ADAA96E2380D8DA6A5F9BB947A10249674EB(L_464, NULL);
			NullCheck(L_462);
			(L_462)->SetAt(static_cast<il2cpp_array_size_t>(L_463), (uint8_t)((int32_t)(uint8_t)L_465));
			int32_t L_466 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add(L_466, 1));
		}

IL_07e6_1:
		{
			int32_t L_467 = V_19;
			int32_t L_468 = V_12;
			if ((((int32_t)L_467) < ((int32_t)L_468)))
			{
				goto IL_07d3_1;
			}
		}
		{
			V_17 = 0;
			goto IL_08a9_1;
		}

IL_07f4_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_469 = V_38;
			int32_t L_470 = V_17;
			NullCheck(L_469);
			int32_t L_471 = ((int32_t)(L_470/2));
			uint8_t L_472 = (L_469)->GetAt(static_cast<il2cpp_array_size_t>(L_471));
			V_19 = L_472;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_473 = V_16;
			int32_t L_474 = V_18;
			int32_t L_475 = V_7;
			int32_t L_476 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_477 = V_10;
			int32_t L_478 = V_19;
			NullCheck(L_477);
			int32_t L_479 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_478>>4))&((int32_t)15))), 3)), 2));
			uint8_t L_480 = (L_477)->GetAt(static_cast<il2cpp_array_size_t>(L_479));
			NullCheck(L_473);
			(L_473)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_474, L_475)), L_476))))), (uint8_t)L_480);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_481 = V_16;
			int32_t L_482 = V_18;
			int32_t L_483 = V_7;
			int32_t L_484 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_485 = V_10;
			int32_t L_486 = V_19;
			NullCheck(L_485);
			int32_t L_487 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_486>>4))&((int32_t)15))), 3)), 1));
			uint8_t L_488 = (L_485)->GetAt(static_cast<il2cpp_array_size_t>(L_487));
			NullCheck(L_481);
			(L_481)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_482, L_483)), L_484)))), 1))), (uint8_t)L_488);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_489 = V_16;
			int32_t L_490 = V_18;
			int32_t L_491 = V_7;
			int32_t L_492 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_493 = V_10;
			int32_t L_494 = V_19;
			NullCheck(L_493);
			int32_t L_495 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_494>>4))&((int32_t)15))), 3));
			uint8_t L_496 = (L_493)->GetAt(static_cast<il2cpp_array_size_t>(L_495));
			NullCheck(L_489);
			(L_489)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_490, L_491)), L_492)))), 2))), (uint8_t)L_496);
			int32_t L_497 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add(L_497, 1));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_498 = V_16;
			int32_t L_499 = V_18;
			int32_t L_500 = V_7;
			int32_t L_501 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_502 = V_10;
			int32_t L_503 = V_19;
			NullCheck(L_502);
			int32_t L_504 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(L_503&((int32_t)15))), 3)), 2));
			uint8_t L_505 = (L_502)->GetAt(static_cast<il2cpp_array_size_t>(L_504));
			NullCheck(L_498);
			(L_498)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_499, L_500)), L_501))))), (uint8_t)L_505);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_506 = V_16;
			int32_t L_507 = V_18;
			int32_t L_508 = V_7;
			int32_t L_509 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_510 = V_10;
			int32_t L_511 = V_19;
			NullCheck(L_510);
			int32_t L_512 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(L_511&((int32_t)15))), 3)), 1));
			uint8_t L_513 = (L_510)->GetAt(static_cast<il2cpp_array_size_t>(L_512));
			NullCheck(L_506);
			(L_506)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_507, L_508)), L_509)))), 1))), (uint8_t)L_513);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_514 = V_16;
			int32_t L_515 = V_18;
			int32_t L_516 = V_7;
			int32_t L_517 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_518 = V_10;
			int32_t L_519 = V_19;
			NullCheck(L_518);
			int32_t L_520 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_519&((int32_t)15))), 3));
			uint8_t L_521 = (L_518)->GetAt(static_cast<il2cpp_array_size_t>(L_520));
			NullCheck(L_514);
			(L_514)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_515, L_516)), L_517)))), 2))), (uint8_t)L_521);
			int32_t L_522 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add(L_522, 1));
		}

IL_08a9_1:
		{
			int32_t L_523 = V_17;
			int32_t L_524 = V_7;
			if ((((int32_t)L_523) < ((int32_t)L_524)))
			{
				goto IL_07f4_1;
			}
		}
		{
			int32_t L_525 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_525, 1));
		}

IL_08b8_1:
		{
			int32_t L_526 = V_18;
			int32_t L_527 = V_8;
			if ((((int32_t)L_526) < ((int32_t)L_527)))
			{
				goto IL_07ce_1;
			}
		}
		{
			goto IL_0b57_1;
		}

IL_08c6_1:
		{
			int32_t L_528 = V_3;
			if ((!(((uint32_t)L_528) == ((uint32_t)2))))
			{
				goto IL_0b57_1;
			}
		}
		{
			int32_t L_529 = V_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_530 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_529);
			V_39 = L_530;
			V_18 = 0;
			goto IL_0a6e_1;
		}

IL_08de_1:
		{
			V_19 = 0;
			goto IL_08f6_1;
		}

IL_08e3_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_531 = V_39;
			int32_t L_532 = V_19;
			RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* L_533 = V_20;
			NullCheck(L_533);
			int32_t L_534;
			L_534 = RleReader_ReadByte_m0820ADAA96E2380D8DA6A5F9BB947A10249674EB(L_533, NULL);
			NullCheck(L_531);
			(L_531)->SetAt(static_cast<il2cpp_array_size_t>(L_532), (uint8_t)((int32_t)(uint8_t)L_534));
			int32_t L_535 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add(L_535, 1));
		}

IL_08f6_1:
		{
			int32_t L_536 = V_19;
			int32_t L_537 = V_12;
			if ((((int32_t)L_536) < ((int32_t)L_537)))
			{
				goto IL_08e3_1;
			}
		}
		{
			V_17 = 0;
			goto IL_0a5f_1;
		}

IL_0904_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_538 = V_39;
			int32_t L_539 = V_17;
			NullCheck(L_538);
			int32_t L_540 = ((int32_t)(L_539/4));
			uint8_t L_541 = (L_538)->GetAt(static_cast<il2cpp_array_size_t>(L_540));
			V_19 = L_541;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_542 = V_16;
			int32_t L_543 = V_18;
			int32_t L_544 = V_7;
			int32_t L_545 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_546 = V_10;
			int32_t L_547 = V_19;
			NullCheck(L_546);
			int32_t L_548 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_547>>6))&3)), 3)), 2));
			uint8_t L_549 = (L_546)->GetAt(static_cast<il2cpp_array_size_t>(L_548));
			NullCheck(L_542);
			(L_542)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_543, L_544)), L_545))))), (uint8_t)L_549);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_550 = V_16;
			int32_t L_551 = V_18;
			int32_t L_552 = V_7;
			int32_t L_553 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_554 = V_10;
			int32_t L_555 = V_19;
			NullCheck(L_554);
			int32_t L_556 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_555>>6))&3)), 3)), 1));
			uint8_t L_557 = (L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
			NullCheck(L_550);
			(L_550)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_551, L_552)), L_553)))), 1))), (uint8_t)L_557);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_558 = V_16;
			int32_t L_559 = V_18;
			int32_t L_560 = V_7;
			int32_t L_561 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_562 = V_10;
			int32_t L_563 = V_19;
			NullCheck(L_562);
			int32_t L_564 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_563>>6))&3)), 3));
			uint8_t L_565 = (L_562)->GetAt(static_cast<il2cpp_array_size_t>(L_564));
			NullCheck(L_558);
			(L_558)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_559, L_560)), L_561)))), 2))), (uint8_t)L_565);
			int32_t L_566 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add(L_566, 1));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_567 = V_16;
			int32_t L_568 = V_18;
			int32_t L_569 = V_7;
			int32_t L_570 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_571 = V_10;
			int32_t L_572 = V_19;
			NullCheck(L_571);
			int32_t L_573 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_572>>4))&3)), 3)), 2));
			uint8_t L_574 = (L_571)->GetAt(static_cast<il2cpp_array_size_t>(L_573));
			NullCheck(L_567);
			(L_567)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_568, L_569)), L_570))))), (uint8_t)L_574);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_575 = V_16;
			int32_t L_576 = V_18;
			int32_t L_577 = V_7;
			int32_t L_578 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_579 = V_10;
			int32_t L_580 = V_19;
			NullCheck(L_579);
			int32_t L_581 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_580>>4))&3)), 3)), 1));
			uint8_t L_582 = (L_579)->GetAt(static_cast<il2cpp_array_size_t>(L_581));
			NullCheck(L_575);
			(L_575)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_576, L_577)), L_578)))), 1))), (uint8_t)L_582);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_583 = V_16;
			int32_t L_584 = V_18;
			int32_t L_585 = V_7;
			int32_t L_586 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_587 = V_10;
			int32_t L_588 = V_19;
			NullCheck(L_587);
			int32_t L_589 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_588>>4))&3)), 3));
			uint8_t L_590 = (L_587)->GetAt(static_cast<il2cpp_array_size_t>(L_589));
			NullCheck(L_583);
			(L_583)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_584, L_585)), L_586)))), 2))), (uint8_t)L_590);
			int32_t L_591 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add(L_591, 1));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_592 = V_16;
			int32_t L_593 = V_18;
			int32_t L_594 = V_7;
			int32_t L_595 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_596 = V_10;
			int32_t L_597 = V_19;
			NullCheck(L_596);
			int32_t L_598 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_597>>2))&3)), 3)), 2));
			uint8_t L_599 = (L_596)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
			NullCheck(L_592);
			(L_592)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_593, L_594)), L_595))))), (uint8_t)L_599);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_600 = V_16;
			int32_t L_601 = V_18;
			int32_t L_602 = V_7;
			int32_t L_603 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_604 = V_10;
			int32_t L_605 = V_19;
			NullCheck(L_604);
			int32_t L_606 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_605>>2))&3)), 3)), 1));
			uint8_t L_607 = (L_604)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
			NullCheck(L_600);
			(L_600)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_601, L_602)), L_603)))), 1))), (uint8_t)L_607);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_608 = V_16;
			int32_t L_609 = V_18;
			int32_t L_610 = V_7;
			int32_t L_611 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_612 = V_10;
			int32_t L_613 = V_19;
			NullCheck(L_612);
			int32_t L_614 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)(L_613>>2))&3)), 3));
			uint8_t L_615 = (L_612)->GetAt(static_cast<il2cpp_array_size_t>(L_614));
			NullCheck(L_608);
			(L_608)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_609, L_610)), L_611)))), 2))), (uint8_t)L_615);
			int32_t L_616 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add(L_616, 1));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_617 = V_16;
			int32_t L_618 = V_18;
			int32_t L_619 = V_7;
			int32_t L_620 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_621 = V_10;
			int32_t L_622 = V_19;
			NullCheck(L_621);
			int32_t L_623 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(L_622&3)), 3)), 2));
			uint8_t L_624 = (L_621)->GetAt(static_cast<il2cpp_array_size_t>(L_623));
			NullCheck(L_617);
			(L_617)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_618, L_619)), L_620))))), (uint8_t)L_624);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_625 = V_16;
			int32_t L_626 = V_18;
			int32_t L_627 = V_7;
			int32_t L_628 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_629 = V_10;
			int32_t L_630 = V_19;
			NullCheck(L_629);
			int32_t L_631 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(L_630&3)), 3)), 1));
			uint8_t L_632 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_631));
			NullCheck(L_625);
			(L_625)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_626, L_627)), L_628)))), 1))), (uint8_t)L_632);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_633 = V_16;
			int32_t L_634 = V_18;
			int32_t L_635 = V_7;
			int32_t L_636 = V_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_637 = V_10;
			int32_t L_638 = V_19;
			NullCheck(L_637);
			int32_t L_639 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_638&3)), 3));
			uint8_t L_640 = (L_637)->GetAt(static_cast<il2cpp_array_size_t>(L_639));
			NullCheck(L_633);
			(L_633)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_634, L_635)), L_636)))), 2))), (uint8_t)L_640);
			int32_t L_641 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add(L_641, 1));
		}

IL_0a5f_1:
		{
			int32_t L_642 = V_17;
			int32_t L_643 = V_7;
			if ((((int32_t)L_642) < ((int32_t)L_643)))
			{
				goto IL_0904_1;
			}
		}
		{
			int32_t L_644 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_644, 1));
		}

IL_0a6e_1:
		{
			int32_t L_645 = V_18;
			int32_t L_646 = V_8;
			if ((((int32_t)L_645) < ((int32_t)L_646)))
			{
				goto IL_08de_1;
			}
		}
		{
			goto IL_0b57_1;
		}

IL_0a7c_1:
		{
			int32_t L_647 = V_11;
			if ((!(((uint32_t)L_647) == ((uint32_t)3))))
			{
				goto IL_0b57_1;
			}
		}
		{
			int32_t L_648 = V_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_649 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_648);
			V_40 = L_649;
			int32_t L_650 = V_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_651 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_650);
			V_41 = L_651;
			int32_t L_652 = V_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_653 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_652);
			V_42 = L_653;
			V_43 = 0;
			V_18 = 0;
			goto IL_0b4e_1;
		}

IL_0aaa_1:
		{
			V_19 = 0;
			goto IL_0ac2_1;
		}

IL_0aaf_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_654 = V_40;
			int32_t L_655 = V_19;
			RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* L_656 = V_20;
			NullCheck(L_656);
			int32_t L_657;
			L_657 = RleReader_ReadByte_m0820ADAA96E2380D8DA6A5F9BB947A10249674EB(L_656, NULL);
			NullCheck(L_654);
			(L_654)->SetAt(static_cast<il2cpp_array_size_t>(L_655), (uint8_t)((int32_t)(uint8_t)L_657));
			int32_t L_658 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add(L_658, 1));
		}

IL_0ac2_1:
		{
			int32_t L_659 = V_19;
			int32_t L_660 = V_12;
			if ((((int32_t)L_659) < ((int32_t)L_660)))
			{
				goto IL_0aaf_1;
			}
		}
		{
			V_19 = 0;
			goto IL_0ae0_1;
		}

IL_0acd_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_661 = V_41;
			int32_t L_662 = V_19;
			RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* L_663 = V_20;
			NullCheck(L_663);
			int32_t L_664;
			L_664 = RleReader_ReadByte_m0820ADAA96E2380D8DA6A5F9BB947A10249674EB(L_663, NULL);
			NullCheck(L_661);
			(L_661)->SetAt(static_cast<il2cpp_array_size_t>(L_662), (uint8_t)((int32_t)(uint8_t)L_664));
			int32_t L_665 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add(L_665, 1));
		}

IL_0ae0_1:
		{
			int32_t L_666 = V_19;
			int32_t L_667 = V_12;
			if ((((int32_t)L_666) < ((int32_t)L_667)))
			{
				goto IL_0acd_1;
			}
		}
		{
			V_19 = 0;
			goto IL_0afe_1;
		}

IL_0aeb_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_668 = V_42;
			int32_t L_669 = V_19;
			RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* L_670 = V_20;
			NullCheck(L_670);
			int32_t L_671;
			L_671 = RleReader_ReadByte_m0820ADAA96E2380D8DA6A5F9BB947A10249674EB(L_670, NULL);
			NullCheck(L_668);
			(L_668)->SetAt(static_cast<il2cpp_array_size_t>(L_669), (uint8_t)((int32_t)(uint8_t)L_671));
			int32_t L_672 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add(L_672, 1));
		}

IL_0afe_1:
		{
			int32_t L_673 = V_19;
			int32_t L_674 = V_12;
			if ((((int32_t)L_673) < ((int32_t)L_674)))
			{
				goto IL_0aeb_1;
			}
		}
		{
			V_44 = 0;
			goto IL_0b42_1;
		}

IL_0b09_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_675 = V_16;
			int32_t L_676 = V_43;
			int32_t L_677 = L_676;
			V_43 = ((int32_t)il2cpp_codegen_add(L_677, 1));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_678 = V_42;
			int32_t L_679 = V_44;
			NullCheck(L_678);
			int32_t L_680 = L_679;
			uint8_t L_681 = (L_678)->GetAt(static_cast<il2cpp_array_size_t>(L_680));
			NullCheck(L_675);
			(L_675)->SetAt(static_cast<il2cpp_array_size_t>(L_677), (uint8_t)L_681);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_682 = V_16;
			int32_t L_683 = V_43;
			int32_t L_684 = L_683;
			V_43 = ((int32_t)il2cpp_codegen_add(L_684, 1));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_685 = V_41;
			int32_t L_686 = V_44;
			NullCheck(L_685);
			int32_t L_687 = L_686;
			uint8_t L_688 = (L_685)->GetAt(static_cast<il2cpp_array_size_t>(L_687));
			NullCheck(L_682);
			(L_682)->SetAt(static_cast<il2cpp_array_size_t>(L_684), (uint8_t)L_688);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_689 = V_16;
			int32_t L_690 = V_43;
			int32_t L_691 = L_690;
			V_43 = ((int32_t)il2cpp_codegen_add(L_691, 1));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_692 = V_40;
			int32_t L_693 = V_44;
			NullCheck(L_692);
			int32_t L_694 = L_693;
			uint8_t L_695 = (L_692)->GetAt(static_cast<il2cpp_array_size_t>(L_694));
			NullCheck(L_689);
			(L_689)->SetAt(static_cast<il2cpp_array_size_t>(L_691), (uint8_t)L_695);
			int32_t L_696 = V_43;
			V_43 = ((int32_t)il2cpp_codegen_add(L_696, 1));
			int32_t L_697 = V_44;
			V_44 = ((int32_t)il2cpp_codegen_add(L_697, 1));
		}

IL_0b42_1:
		{
			int32_t L_698 = V_44;
			int32_t L_699 = V_7;
			if ((((int32_t)L_698) < ((int32_t)L_699)))
			{
				goto IL_0b09_1;
			}
		}
		{
			int32_t L_700 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_700, 1));
		}

IL_0b4e_1:
		{
			int32_t L_701 = V_18;
			int32_t L_702 = V_8;
			if ((((int32_t)L_701) < ((int32_t)L_702)))
			{
				goto IL_0aaa_1;
			}
		}

IL_0b57_1:
		{
			goto IL_0b73;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0b59;
		}
		throw e;
	}

CATCH_0b59:
	{
		V_45 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_703 = V_45;
		NullCheck(L_703);
		String_t* L_704;
		L_704 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_703);
		String_t* L_705;
		L_705 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8119B141F84D73AB524E50CE5900965A8F32DF8F)), L_704, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_705, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0b73;
	}

IL_0b73:
	{
		bool L_706 = ___2_paletteOnly;
		if (!L_706)
		{
			goto IL_0bef;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_707 = V_10;
		NullCheck(L_707);
		V_46 = ((int32_t)(((int32_t)(((RuntimeArray*)L_707)->max_length))/3));
		int32_t L_708 = V_46;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_709 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2E76254260C768B5D64D1664EE3929D198766CEF(L_709, L_708, 1, 8, 0, NULL);
		V_47 = L_709;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_710 = V_47;
		NullCheck(L_710);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_710, 0, NULL);
		V_48 = 0;
		goto IL_0bd7;
	}

IL_0b97:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_711 = V_10;
		int32_t L_712 = V_48;
		NullCheck(L_711);
		int32_t L_713 = ((int32_t)il2cpp_codegen_multiply(L_712, 3));
		uint8_t L_714 = (L_711)->GetAt(static_cast<il2cpp_array_size_t>(L_713));
		V_49 = L_714;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_715 = V_10;
		int32_t L_716 = V_48;
		NullCheck(L_715);
		int32_t L_717 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_716, 3)), 1));
		uint8_t L_718 = (L_715)->GetAt(static_cast<il2cpp_array_size_t>(L_717));
		V_50 = L_718;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_719 = V_10;
		int32_t L_720 = V_48;
		NullCheck(L_719);
		int32_t L_721 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_720, 3)), 2));
		uint8_t L_722 = (L_719)->GetAt(static_cast<il2cpp_array_size_t>(L_721));
		V_51 = L_722;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_723 = V_47;
		int32_t L_724 = V_48;
		uint8_t L_725 = V_49;
		uint8_t L_726 = V_50;
		uint8_t L_727 = V_51;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_728;
		memset((&L_728), 0, sizeof(L_728));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_728), L_725, L_726, L_727, (uint8_t)1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_729;
		L_729 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_728, NULL);
		NullCheck(L_723);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_723, L_724, 0, L_729, NULL);
		int32_t L_730 = V_48;
		V_48 = ((int32_t)il2cpp_codegen_add(L_730, 1));
	}

IL_0bd7:
	{
		int32_t L_731 = V_48;
		int32_t L_732 = V_46;
		if ((((int32_t)L_731) < ((int32_t)L_732)))
		{
			goto IL_0b97;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_733 = V_47;
		NullCheck(L_733);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_733, (bool)0, (bool)0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_734 = V_47;
		TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B* L_735 = (TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B*)il2cpp_codegen_object_new(TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B_il2cpp_TypeInfo_var);
		TextureAndPalette__ctor_m54AFB287FD2BBB41FAB9F6ED3632C5DAB9A169BB(L_735, (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL, L_734, NULL);
		return L_735;
	}

IL_0bef:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_736 = V_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_737 = V_14;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_738;
		L_738 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_737, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_739;
		L_739 = ImageUtils_ColorToTransparent_mFE74FD2A62D55BB402AC20835009BA258B260CDC(L_736, L_738, NULL);
		V_16 = L_739;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_740 = V_16;
		int32_t L_741 = V_7;
		int32_t L_742 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_743;
		L_743 = ImageUtils_FlipPixelsVertically_m24CAFB9ECFF2DD01EFCE08B4F78067E5A11494F5(L_740, L_741, L_742, NULL);
		V_16 = L_743;
		int32_t L_744 = V_7;
		int32_t L_745 = V_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_746 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2E76254260C768B5D64D1664EE3929D198766CEF(L_746, L_744, L_745, ((int32_t)59), 1, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_747 = L_746;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_748 = V_16;
		NullCheck(L_747);
		Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8F7BB702A47AD6D81A8C7944D02211C417691BB5(L_747, L_748, 0, 0, Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8F7BB702A47AD6D81A8C7944D02211C417691BB5_RuntimeMethod_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_749 = L_747;
		NullCheck(L_749);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_749, (bool)0, (bool)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_750 = V_15;
		int32_t L_751 = V_7;
		int32_t L_752 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_753;
		L_753 = ImageUtils_FlipPalettePixelsVertically_mE0689456BD0871BE597EB13D8942D3D71519F377(L_750, L_751, L_752, NULL);
		V_15 = L_753;
		int32_t L_754 = V_7;
		int32_t L_755 = V_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_756 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2E76254260C768B5D64D1664EE3929D198766CEF(L_756, L_754, L_755, 5, 0, NULL);
		V_52 = L_756;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_757 = V_52;
		NullCheck(L_757);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_757, 0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_758 = V_52;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_759 = V_15;
		NullCheck(L_758);
		Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8F7BB702A47AD6D81A8C7944D02211C417691BB5(L_758, L_759, 0, 0, Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8F7BB702A47AD6D81A8C7944D02211C417691BB5_RuntimeMethod_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_760 = V_52;
		NullCheck(L_760);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_760, (bool)0, (bool)0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_761 = V_52;
		TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B* L_762 = (TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B*)il2cpp_codegen_object_new(TextureAndPalette_tC2EF183C8859D092B1A2F2D499DFEAB226DF609B_il2cpp_TypeInfo_var);
		TextureAndPalette__ctor_m54AFB287FD2BBB41FAB9F6ED3632C5DAB9A169BB(L_762, L_749, L_761, NULL);
		return L_762;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RleReader__ctor_mEE7EA97C0DF08016FD33487412EDFEE4C154304B (RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___stream = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RleReader_ReadByte_m0820ADAA96E2380D8DA6A5F9BB947A10249674EB (RleReader_t69A5AA1FCE956C0B25CAE49832E8FD36117D27C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___runLength;
		__this->___runLength = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = __this->___runLength;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___stream;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(24, L_2);
		__this->___currentByte = L_3;
		int32_t L_4 = __this->___currentByte;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)191))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_5 = __this->___currentByte;
		__this->___runLength = ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)192)));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___stream;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(24, L_6);
		__this->___currentByte = L_7;
	}

IL_0058:
	{
		int32_t L_8 = __this->___currentByte;
		return L_8;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba = 0;
		uint8_t L_0 = ___0_r;
		__this->___r = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___g;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_c;
		float L_9 = L_8.___b;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_c;
		float L_13 = L_12.___a;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}

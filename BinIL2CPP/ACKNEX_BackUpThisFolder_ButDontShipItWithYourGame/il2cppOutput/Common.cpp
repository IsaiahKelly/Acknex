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

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36;
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
struct FilenameConverter_t8C613B9B92178554A40EF496DA15828E520A984D;
struct LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC51AAD602C87C7E6CABC4DFBC6D234451B4DDA2B;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileManager_t8D2B062259D48553D33CB082958AD87AFF706ABC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t51C6A12085B2849B08B0A4120A45E37D91F7B0F9____69DBA36EE7F45D026C876D44E8C284C152DEE5DF688B6D11D1D4997CED1AA367_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t51C6A12085B2849B08B0A4120A45E37D91F7B0F9____E715616FC610B8F7F4907B39EDDC7DCBE5F747F5C6F7315AA0427863F36E880B_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8C4148E7AEEC21C982D4BB52A586DED04CC1EBB6;
IL2CPP_EXTERN_C String_t* _stringLiteralA8698A991ADE320C027EFE57F37894495581DBA9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF_RuntimeMethod_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t44D04921A65B5EE849831E65607019EE98409DE8 
{
};
struct U3CPrivateImplementationDetailsU3E_t51C6A12085B2849B08B0A4120A45E37D91F7B0F9  : public RuntimeObject
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
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct FileManager_t8D2B062259D48553D33CB082958AD87AFF706ABC  : public RuntimeObject
{
};
struct FilenameConverter_t8C613B9B92178554A40EF496DA15828E520A984D  : public RuntimeObject
{
};
struct LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E  : public RuntimeObject
{
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___m_input;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_output;
	int32_t ___m_size;
	int32_t ___U3CFrameSizeU3Ek__BackingField;
	uint8_t ___U3CFrameFillU3Ek__BackingField;
	int32_t ___U3CFrameInitPosU3Ek__BackingField;
	bool ___disposed;
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
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};
struct PathUtils_t626F29A64395034FED618825D5ED13059B1F1142  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC51AAD602C87C7E6CABC4DFBC6D234451B4DDA2B  : public RuntimeObject
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
struct BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36  : public BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data2;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data4;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data8;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
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
struct __StaticArrayInitTypeSizeU3D106_t303032C94667CEBBC232B8EA4C3FC64A7DF1841E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D106_t303032C94667CEBBC232B8EA4C3FC64A7DF1841E__padding[106];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D194_tA89F3AEBD188FEA9DF76FB2B5C00E8AA93285375 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D194_tA89F3AEBD188FEA9DF76FB2B5C00E8AA93285375__padding[194];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
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
struct U3CPrivateImplementationDetailsU3E_t51C6A12085B2849B08B0A4120A45E37D91F7B0F9_StaticFields
{
	__StaticArrayInitTypeSizeU3D194_tA89F3AEBD188FEA9DF76FB2B5C00E8AA93285375 ___69DBA36EE7F45D026C876D44E8C284C152DEE5DF688B6D11D1D4997CED1AA367;
	__StaticArrayInitTypeSizeU3D106_t303032C94667CEBBC232B8EA4C3FC64A7DF1841E ___E715616FC610B8F7F4907B39EDDC7DCBE5F747F5C6F7315AA0427863F36E880B;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct FileManager_t8D2B062259D48553D33CB082958AD87AFF706ABC_StaticFields
{
	String_t* ___WRSFilename;
};
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars;
	Il2CppChar ___AltDirectorySeparatorChar;
	Il2CppChar ___DirectorySeparatorChar;
	Il2CppChar ___PathSeparator;
	String_t* ___DirectorySeparatorStr;
	Il2CppChar ___VolumeSeparatorChar;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars;
	bool ___dirEqualsVolume;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix;
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle;
	RuntimeObject* ___buf_recycle_lock;
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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** ___0_arr, Il2CppChar ___1_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m5B206ED513B0AECC14E4AF5A7B42AE5C4885334E (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, bool ___2_leaveOpen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryReader_Read_mFCF0310B9037B3AC7180F02769E890635513020F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
inline void Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_gshared)(___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_m13F278223B819C82CC647398B22C125B02FA2E61 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BitConverter_ToInt64_mA375995608A3E81761CCA7776461290AC5B262F0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BitConverter_ToDouble_m2F701E24FFE424C6EBDA6CD76CCA029947A535A8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* FileManager_ReadFile_m4908F515F2830909C4DC0DD3B006BBBF8825397A (String_t* ___0_filename, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilenameConverter_ConvertToShortPath_mEE1084D426E6DED9497AD4140D9A7A011EA7E4D7 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigEndianBinaryReader__ctor_mEE87F2623DA820DCDD60595CF873C068467F9555 (BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009 (String_t* ___0_strA, String_t* ___1_strB, int32_t ___2_comparisonType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LzssReader__ctor_mF06FFBB7F71C52760463DFCD3B7955E69BDF6BE2 (LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, int32_t ___1_input_length, int32_t ___2_output_length, uint8_t ___3_frameFill, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LzssReader_Unpack_m518EAF940D6CFC54368D3E827F371219B058F7EF (LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LzssReader_get_Data_mDB1F92A7808B77BC7DCEBD5D5DBBDE427FAC5800_inline (LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_m2D14CCBAB9C60DC8D32C2443CCE3D34644822FAF (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilenameConverter_GetValidShortName_m2A2C17DE4D727521E9DEFF4C5C4822C8515B9E8A (String_t* ___0_fileName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilenameConverter_GetValidShortExtension_mB0FF7B69018FB3D01BA44C4AB795321CFE287516 (String_t* ___0_extension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mC67F1B9E92187E2BB125A560160DA30A5BA703F2 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Path_GetInvalidFileNameChars_m398C2B0D1FF5A9CC06287509C1CFF5D7552D08CB (const RuntimeMethod* method) ;
inline void PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** ___0_arr, Il2CppChar ___1_item, const RuntimeMethod* method)
{
	((  void (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB**, Il2CppChar, const RuntimeMethod*))PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF_gshared)(___0_arr, ___1_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m6811F7CF4DE7C68019D76E9DC6D17B2293BA8B12 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtils_SanitizePath_mE8306285C35A141DDF9E90097C83ACE75981618E (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m29D8A5F36789CF8A37C6B96D331F5B812D00CA73 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t51C6A12085B2849B08B0A4120A45E37D91F7B0F9____69DBA36EE7F45D026C876D44E8C284C152DEE5DF688B6D11D1D4997CED1AA367_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t51C6A12085B2849B08B0A4120A45E37D91F7B0F9____E715616FC610B8F7F4907B39EDDC7DCBE5F747F5C6F7315AA0427863F36E880B_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)194));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t51C6A12085B2849B08B0A4120A45E37D91F7B0F9____69DBA36EE7F45D026C876D44E8C284C152DEE5DF688B6D11D1D4997CED1AA367_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)106));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t51C6A12085B2849B08B0A4120A45E37D91F7B0F9____E715616FC610B8F7F4907B39EDDC7DCBE5F747F5C6F7315AA0427863F36E880B_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 4;
		(&V_0)->___TotalTypes = 4;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mFD57CE3357E166E4E5528B4CD46EFB48C7EAF661 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC51AAD602C87C7E6CABC4DFBC6D234451B4DDA2B* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshal_pinvoke(const MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131& unmarshaled, MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshal_pinvoke_back(const MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshaled_pinvoke& marshaled, MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131& unmarshaled)
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
IL2CPP_EXTERN_C void MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshal_pinvoke_cleanup(MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshal_com(const MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131& unmarshaled, MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshal_com_back(const MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshaled_com& marshaled, MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131& unmarshaled)
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
IL2CPP_EXTERN_C void MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshal_com_cleanup(MonoScriptData_t63A923BE26EEF83BFF0A6E50FD57F80DE24D4131_marshaled_com& marshaled)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigEndianBinaryReader__ctor_mEE87F2623DA820DCDD60595CF873C068467F9555 (BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____data2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data2), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____data4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data4), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____data8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data8), (void*)L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_stream;
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigEndianBinaryReader__ctor_mCBC2C4CF8A0C1A6B2038D29615666F00A7F78EDE (BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, bool ___2_leaveOpen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____data2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data2), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____data4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data4), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____data8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data8), (void*)L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_stream;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4 = ___1_encoding;
		bool L_5 = ___2_leaveOpen;
		BinaryReader__ctor_m5B206ED513B0AECC14E4AF5A7B42AE5C4885334E(__this, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigEndianBinaryReader_ReadInt32_m489217AC450806F4945B4765B56C6C803F708EE5 (BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data4;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____data4;
		int32_t L_2;
		L_2 = BinaryReader_Read_mFCF0310B9037B3AC7180F02769E890635513020F(__this, L_1, 0, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data4;
		Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2(L_3, Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____data4;
		int32_t L_5;
		L_5 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_4, 0, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BigEndianBinaryReader_ReadInt16_mE0D439CE39C7D7DADCDE7B1EC007236CD13D5932 (BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data2;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, 2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____data2;
		int32_t L_2;
		L_2 = BinaryReader_Read_mFCF0310B9037B3AC7180F02769E890635513020F(__this, L_1, 0, 2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data2;
		Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2(L_3, Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____data2;
		int16_t L_5;
		L_5 = BitConverter_ToInt16_m13F278223B819C82CC647398B22C125B02FA2E61(L_4, 0, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BigEndianBinaryReader_ReadInt64_m1CFCD0E9AA4FD3F6311C810352E77D701D40F19F (BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data8;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____data8;
		int32_t L_2;
		L_2 = BinaryReader_Read_mFCF0310B9037B3AC7180F02769E890635513020F(__this, L_1, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data8;
		Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2(L_3, Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____data8;
		int64_t L_5;
		L_5 = BitConverter_ToInt64_mA375995608A3E81761CCA7776461290AC5B262F0(L_4, 0, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigEndianBinaryReader_ReadUInt32_mEADE32F9EEFEAA3B37F517BC429AA1CFEED7B4AC (BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data4;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____data4;
		int32_t L_2;
		L_2 = BinaryReader_Read_mFCF0310B9037B3AC7180F02769E890635513020F(__this, L_1, 0, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data4;
		Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2(L_3, Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____data4;
		uint32_t L_5;
		L_5 = BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177(L_4, 0, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BigEndianBinaryReader_ReadSingle_m74727CC28E8776A0FCFEDE6261A54F90E63196F4 (BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data4;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____data4;
		int32_t L_2;
		L_2 = BinaryReader_Read_mFCF0310B9037B3AC7180F02769E890635513020F(__this, L_1, 0, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data4;
		Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2(L_3, Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____data4;
		float L_5;
		L_5 = BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD(L_4, 0, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BigEndianBinaryReader_ReadDouble_mC7175A165C48163E680AB84FBC2CE02B70052D1E (BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data8;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____data8;
		int32_t L_2;
		L_2 = BinaryReader_Read_mFCF0310B9037B3AC7180F02769E890635513020F(__this, L_1, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data8;
		Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2(L_3, Array_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4298AF0CA764FA936F9C5ED3606D1B4E2EC9EBA2_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____data8;
		double L_5;
		L_5 = BitConverter_ToDouble_m2F701E24FFE424C6EBDA6CD76CCA029947A535A8(L_4, 0, NULL);
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* FileManager_OpenRead_m354AE27D6971E7F9FCF7940092FCA31B35352C7E (String_t* ___0_filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileManager_t8D2B062259D48553D33CB082958AD87AFF706ABC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((FileManager_t8D2B062259D48553D33CB082958AD87AFF706ABC_StaticFields*)il2cpp_codegen_static_fields_for(FileManager_t8D2B062259D48553D33CB082958AD87AFF706ABC_il2cpp_TypeInfo_var))->___WRSFilename;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ___0_filename;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3;
		L_3 = FileManager_ReadFile_m4908F515F2830909C4DC0DD3B006BBBF8825397A(L_2, NULL);
		return L_3;
	}

IL_0013:
	{
		String_t* L_4 = ___0_filename;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5;
		L_5 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* FileManager_ReadFile_m4908F515F2830909C4DC0DD3B006BBBF8825397A (String_t* ___0_filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileManager_t8D2B062259D48553D33CB082958AD87AFF706ABC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E* V_9 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_10 = NULL;
	String_t* G_B5_0 = NULL;
	{
		String_t* L_0 = ___0_filename;
		String_t* L_1;
		L_1 = FilenameConverter_ConvertToShortPath_mEE1084D426E6DED9497AD4140D9A7A011EA7E4D7(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ((FileManager_t8D2B062259D48553D33CB082958AD87AFF706ABC_StaticFields*)il2cpp_codegen_static_fields_for(FileManager_t8D2B062259D48553D33CB082958AD87AFF706ABC_il2cpp_TypeInfo_var))->___WRSFilename;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3;
		L_3 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_2, NULL);
		BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* L_4 = (BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36*)il2cpp_codegen_object_new(BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36_il2cpp_TypeInfo_var);
		BigEndianBinaryReader__ctor_mEE87F2623DA820DCDD60595CF873C068467F9555(L_4, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e1:
			{
				{
					BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* L_5 = V_1;
					if (!L_5)
					{
						goto IL_00ea;
					}
				}
				{
					BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_00ea:
				{
					return;
				}
			}
		});
		try
		{
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
				V_2 = L_7;
				BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* L_8 = V_1;
				NullCheck(L_8);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9;
				L_9 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_8);
				NullCheck(L_9);
				int64_t L_10;
				L_10 = VirtualFuncInvoker0< int64_t >::Invoke(10, L_9);
				V_3 = L_10;
			}

IL_002b_1:
			{
				BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* L_11 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
				NullCheck(L_11);
				int32_t L_13;
				L_13 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(25, L_11, L_12, 0, ((int32_t)13));
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
				L_14 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(32, L_14, L_15);
				V_5 = L_16;
				String_t* L_17 = V_5;
				NullCheck(L_17);
				int32_t L_18;
				L_18 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_17, 0, NULL);
				V_6 = L_18;
				int32_t L_19 = V_6;
				if ((((int32_t)L_19) < ((int32_t)0)))
				{
					goto IL_005e_1;
				}
			}
			{
				String_t* L_20 = V_5;
				int32_t L_21 = V_6;
				NullCheck(L_20);
				String_t* L_22;
				L_22 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_20, 0, L_21, NULL);
				G_B5_0 = L_22;
				goto IL_0060_1;
			}

IL_005e_1:
			{
				String_t* L_23 = V_5;
				G_B5_0 = L_23;
			}

IL_0060_1:
			{
				V_5 = G_B5_0;
				BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* L_24 = V_1;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_24);
				V_7 = L_25;
				BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* L_26 = V_1;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_26);
				V_8 = L_27;
				BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* L_28 = V_1;
				NullCheck(L_28);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_29;
				L_29 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_28);
				NullCheck(L_29);
				int64_t L_30;
				L_30 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_29);
				V_4 = L_30;
				String_t* L_31 = V_5;
				String_t* L_32 = V_0;
				int32_t L_33;
				L_33 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_31, L_32, 3, NULL);
				if (L_33)
				{
					goto IL_00c0_1;
				}
			}
			{
				BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* L_34 = V_1;
				NullCheck(L_34);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_35;
				L_35 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_34);
				int32_t L_36 = V_7;
				int32_t L_37 = V_8;
				LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E* L_38 = (LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E*)il2cpp_codegen_object_new(LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E_il2cpp_TypeInfo_var);
				LzssReader__ctor_mF06FFBB7F71C52760463DFCD3B7955E69BDF6BE2(L_38, L_35, L_36, L_37, (uint8_t)((int32_t)32), NULL);
				V_9 = L_38;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00b4_1:
					{
						{
							LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E* L_39 = V_9;
							if (!L_39)
							{
								goto IL_00bf_1;
							}
						}
						{
							LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E* L_40 = V_9;
							NullCheck(L_40);
							InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_40);
						}

IL_00bf_1:
						{
							return;
						}
					}
				});
				try
				{
					LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E* L_41 = V_9;
					NullCheck(L_41);
					LzssReader_Unpack_m518EAF940D6CFC54368D3E827F371219B058F7EF(L_41, NULL);
					LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E* L_42 = V_9;
					NullCheck(L_42);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43;
					L_43 = LzssReader_get_Data_mDB1F92A7808B77BC7DCEBD5D5DBBDE427FAC5800_inline(L_42, NULL);
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_44 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
					MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_44, L_43, NULL);
					V_10 = L_44;
					goto IL_00ed;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00c0_1:
			{
				int64_t L_45 = V_4;
				int32_t L_46 = V_7;
				V_4 = ((int64_t)il2cpp_codegen_add(L_45, ((int64_t)L_46)));
				BigEndianBinaryReader_tE7D52CFBA0505944F28135581192912A00046E36* L_47 = V_1;
				NullCheck(L_47);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_48;
				L_48 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_47);
				int64_t L_49 = V_4;
				NullCheck(L_48);
				int64_t L_50;
				L_50 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20, L_48, L_49, 0);
				int64_t L_51 = V_4;
				int64_t L_52 = V_3;
				if ((((int64_t)L_51) < ((int64_t)L_52)))
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_00eb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00eb:
	{
		return (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL;
	}

IL_00ed:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_53 = V_10;
		return L_53;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilenameConverter_ConvertToShortPath_mEE1084D426E6DED9497AD4140D9A7A011EA7E4D7 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_0, NULL);
		String_t* L_2 = ___0_path;
		String_t* L_3;
		L_3 = Path_GetFileNameWithoutExtension_m2D14CCBAB9C60DC8D32C2443CCE3D34644822FAF(L_2, NULL);
		String_t* L_4 = ___0_path;
		String_t* L_5;
		L_5 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = FilenameConverter_GetValidShortName_m2A2C17DE4D727521E9DEFF4C5C4822C8515B9E8A(L_3, NULL);
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = FilenameConverter_GetValidShortExtension_mB0FF7B69018FB3D01BA44C4AB795321CFE287516(L_7, NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilenameConverter_GetValidShortName_m2A2C17DE4D727521E9DEFF4C5C4822C8515B9E8A (String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8698A991ADE320C027EFE57F37894495581DBA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		String_t* L_0 = ___0_fileName;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0045;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_3 = L_3;
		Il2CppChar L_4 = V_3;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0041;
		}
	}
	{
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_0041;
		}
	}
	{
		Il2CppChar L_6 = V_3;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)46))))
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar L_7 = V_3;
		NullCheck(_stringLiteralA8698A991ADE320C027EFE57F37894495581DBA9);
		bool L_8;
		L_8 = String_Contains_mC67F1B9E92187E2BB125A560160DA30A5BA703F2(_stringLiteralA8698A991ADE320C027EFE57F37894495581DBA9, L_7, NULL);
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, L_10, NULL);
		V_0 = L_11;
	}

IL_0041:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0045:
	{
		int32_t L_13 = V_2;
		String_t* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000c;
		}
	}

IL_004e:
	{
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		if ((((int32_t)L_17) <= ((int32_t)8)))
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_18, 0, 8, NULL);
		return L_19;
	}

IL_0060:
	{
		String_t* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilenameConverter_GetValidShortExtension_mB0FF7B69018FB3D01BA44C4AB795321CFE287516 (String_t* ___0_extension, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C4148E7AEEC21C982D4BB52A586DED04CC1EBB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		String_t* L_0 = ___0_extension;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0040;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_3 = L_3;
		Il2CppChar L_4 = V_3;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)128))))
		{
			goto IL_003c;
		}
	}
	{
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_003c;
		}
	}
	{
		Il2CppChar L_6 = V_3;
		NullCheck(_stringLiteral8C4148E7AEEC21C982D4BB52A586DED04CC1EBB6);
		bool L_7;
		L_7 = String_Contains_mC67F1B9E92187E2BB125A560160DA30A5BA703F2(_stringLiteral8C4148E7AEEC21C982D4BB52A586DED04CC1EBB6, L_6, NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, L_9, NULL);
		V_0 = L_10;
	}

IL_003c:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		int32_t L_12 = V_2;
		String_t* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000c;
		}
	}
	{
		String_t* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		if ((((int32_t)L_16) <= ((int32_t)4)))
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_17, 0, 4, NULL);
		return L_18;
	}

IL_005b:
	{
		String_t* L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilenameConverter__ctor_mFD40A9E98A3D706C15B7E115507FC07B82ECF0EB (FilenameConverter_t8C613B9B92178554A40EF496DA15828E520A984D* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtils_SanitizePath_mE8306285C35A141DDF9E90097C83ACE75981618E (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	{
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2;
		L_2 = Path_GetInvalidFileNameChars_m398C2B0D1FF5A9CC06287509C1CFF5D7552D08CB(NULL);
		V_0 = L_2;
		Il2CppChar L_3 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar;
		PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF((&V_0), L_3, PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF_RuntimeMethod_var);
		Il2CppChar L_4 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar;
		PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF((&V_0), L_4, PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF_RuntimeMethod_var);
		Il2CppChar L_5 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___PathSeparator;
		PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF((&V_0), L_5, PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF_RuntimeMethod_var);
		Il2CppChar L_6 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___VolumeSeparatorChar;
		PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF((&V_0), L_6, PathUtils_Remove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDD679187891D16F3A7FBABFBAF560B97606EC2DF_RuntimeMethod_var);
		String_t* L_7 = ___0_path;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = V_0;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = String_Split_m6811F7CF4DE7C68019D76E9DC6D17B2293BA8B12(L_7, L_8, 1, NULL);
		V_1 = L_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
		String_t* L_11;
		L_11 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_10, NULL);
		___0_path = L_11;
		String_t* L_12 = ___0_path;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_12, ((int32_t)92), ((int32_t)47), NULL);
		___0_path = L_13;
		String_t* L_14 = ___0_path;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtils_GetFileExtension_mD0D83CA575CC53BE815E286972E9237A891BB590 (String_t* ___0_path, bool ___1_includeDot, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	{
		String_t* L_0 = ___0_path;
		String_t* L_1;
		L_1 = PathUtils_SanitizePath_mE8306285C35A141DDF9E90097C83ACE75981618E(L_0, NULL);
		___0_path = L_1;
		String_t* L_2 = ___0_path;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_2, ((int32_t)46), NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0017:
	{
		String_t* L_5 = ___0_path;
		bool L_6 = ___1_includeDot;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_0020;
		}
		G_B3_0 = L_5;
	}
	{
		int32_t L_7 = V_0;
		G_B5_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		G_B5_1 = G_B3_0;
		goto IL_0021;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		G_B5_0 = L_8;
		G_B5_1 = G_B4_0;
	}

IL_0021:
	{
		NullCheck(G_B5_1);
		String_t* L_9;
		L_9 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(G_B5_1, G_B5_0, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtils_GetFileDirectory_mFA5477A901B3C956AF2DFE634915867243BF3684 (String_t* ___0_filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_filename;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		String_t* L_2 = ___0_filename;
		String_t* L_3;
		L_3 = PathUtils_SanitizePath_mE8306285C35A141DDF9E90097C83ACE75981618E(L_2, NULL);
		___0_filename = L_3;
		String_t* L_4 = ___0_filename;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_7 = ___0_filename;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, L_8, NULL);
		return L_9;
	}

IL_002b:
	{
		return (String_t*)NULL;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LzssReader_get_Data_mDB1F92A7808B77BC7DCEBD5D5DBBDE427FAC5800_inline (LzssReader_t17F1BC7B997DD3E03427C23979F8CF8D70F0DE8E* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_output;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}

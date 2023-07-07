#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct DefaultTypePool_1_t21660DBAD98411D7DAB65F258E9433630904C28C;
struct DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC;
struct DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2;
struct DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797;
struct DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4;
struct Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971;
struct Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3;
struct IDictionary_2_t378E428EFD0077FCE9C551DB1EA9EA35B21079DD;
struct IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D;
struct LessOrEqual_tD5C2576F19D2F54AAE5769D424704F1378625EF0;
struct LessOrEqual_tACCF8A4A6BCA3EF8A2CF760C7F6FF7EFDF874918;
struct LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00;
struct LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6;
struct Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62;
struct Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C;
struct PriorityHeap_1_t398DFD3BBC195F75DD5945E4AEC8492BE85E9112;
struct PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F;
struct PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29;
struct Queue_1_tD16569FEC985028AAF7AD07E944FCFFBE7567730;
struct Queue_1_t0EF83785A32509AFAD1DECBB79B203F1F8428FFC;
struct Queue_1_tFF89653FA4C031D1CC2D18DF7EE31A9F2DAD19FE;
struct Queue_1_t8C81B5CA8ECFD8367AB4A971F48B5EFEE7966102;
struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300;
struct DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3;
struct MethodInfo_t;
struct NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966;
struct Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF;
struct Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE;
struct ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47;

IL2CPP_EXTERN_C RuntimeClass* ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C;
IL2CPP_EXTERN_C String_t* _stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8;
IL2CPP_EXTERN_C String_t* _stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64;
IL2CPP_EXTERN_C String_t* _stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m004092468BAD1B30CA23F97F4F00ED69D37E7C01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t72340EDEA801D6F0C644242E26AA4B29BD6E99CC 
{
};
struct DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC  : public RuntimeObject
{
	Queue_1_tD16569FEC985028AAF7AD07E944FCFFBE7567730* ____pool;
};
struct DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2  : public RuntimeObject
{
	Queue_1_t0EF83785A32509AFAD1DECBB79B203F1F8428FFC* ____pool;
};
struct DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797  : public RuntimeObject
{
	Queue_1_tFF89653FA4C031D1CC2D18DF7EE31A9F2DAD19FE* ____pool;
};
struct DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4  : public RuntimeObject
{
	Queue_1_t8C81B5CA8ECFD8367AB4A971F48B5EFEE7966102* ____pool;
};
struct Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3  : public RuntimeObject
{
	LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* ____leq;
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____head;
};
struct Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C  : public RuntimeObject
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ____key;
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____prev;
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____next;
};
struct PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29  : public RuntimeObject
{
	LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* ____leq;
	PriorityHeap_1_t398DFD3BBC195F75DD5945E4AEC8492BE85E9112* ____heap;
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* ____keys;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____order;
	int32_t ____size;
	int32_t ____max;
	bool ____initialized;
};
struct Geom_t2AECC4CF177AE64EA77403838222CB0163C19CA7  : public RuntimeObject
{
};
struct IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90  : public RuntimeObject
{
};
struct Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3  : public RuntimeObject
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____vHead;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____fHead;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eHead;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eHeadSym;
};
struct MeshUtils_t1C2AEE8E7D579C135509E319DA5D1651345F049A  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF  : public RuntimeObject
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____prev;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____next;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____anEdge;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____trail;
	int32_t ____n;
	bool ____marked;
	bool ____inside;
};
struct ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47  : public RuntimeObject
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eUp;
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____nodeUp;
	int32_t ____windingNumber;
	bool ____inside;
	bool ____sentinel;
	bool ____dirty;
	bool ____fixUpperEdge;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04  : public IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90
{
	RuntimeObject* ____register;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D  : public IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90
{
};
struct PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 
{
	int32_t ____handle;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 
{
	float ___X;
	float ___Y;
	float ___Z;
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
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym;
};
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym;
};
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym;
};
struct ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F 
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Position;
	RuntimeObject* ___Data;
};
struct ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_pinvoke
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Position;
	Il2CppIUnknown* ___Data;
};
struct ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_com
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Position;
	Il2CppIUnknown* ___Data;
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
struct Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8  : public RuntimeObject
{
	IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ____pool;
	Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* ____mesh;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____normal;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____sUnit;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____tUnit;
	float ____bminX;
	float ____bminY;
	float ____bmaxX;
	float ____bmaxY;
	int32_t ____windingRule;
	Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* ____dict;
	PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* ____pq;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____event;
	CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* ____combineCallback;
	ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* ____vertices;
	int32_t ____vertexCount;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____elements;
	int32_t ____elementCount;
	float ___SUnitX;
	float ___SUnitY;
	float ___SentinelCoord;
	bool ___NoEmptyPolygons;
	bool ___UsePooling;
};
struct Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966  : public RuntimeObject
{
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E ____pair;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____next;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Sym;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Onext;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Lnext;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____Org;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____Lface;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ____activeRegion;
	int32_t ____winding;
};
struct Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE  : public RuntimeObject
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____prev;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____next;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____anEdge;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____coords;
	float ____s;
	float ____t;
	PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ____pqHandle;
	int32_t ____n;
	RuntimeObject* ____data;
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
struct LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00  : public MulticastDelegate_t
{
};
struct LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6  : public MulticastDelegate_t
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300  : public MulticastDelegate_t
{
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields
{
	int32_t ___Invalid;
};
struct Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Zero;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF  : public RuntimeArray
{
	ALIGN_FIELD (8) ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F m_Items[1];

	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data), (void*)NULL);
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data), (void*)NULL);
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
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362  : public RuntimeArray
{
	ALIGN_FIELD (8) Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* m_Items[1];

	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* value)
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared (DefaultTypePool_1_t21660DBAD98411D7DAB65F258E9433630904C28C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1_Remove_m1ECF60568C517A776F7601E3FC80096503B38B24_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_InsertBefore_mC0A504DA48ED4EDE834676C75F5B374B8F871E72_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* ___0_node, RuntimeObject* ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Remove_m200379F3FF5FAA8F71A8883350DB734E1B79877D_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 PriorityQueue_1_Insert_mE16B478F9ECD296053127A29F40B879A7C319D7B_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_Find_m20EA586631ADA2B67D42BAC427E0362364B6FCC8_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Node_get_Key_m7C2669092F4A0E59D5F38ADC148ADC476A3B15EE_gshared (Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_Insert_m8B82DB58FA4552C4915EF5A9A98DFD1DBE942FD8_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_m8C2D651B99415D1A29A1DF26A61FDC854060FE62_gshared (LessOrEqual_tD5C2576F19D2F54AAE5769D424704F1378625EF0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1__ctor_m5A633CA25D0F151B8F3D2B1A1B1D6B646D331639_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, LessOrEqual_tD5C2576F19D2F54AAE5769D424704F1378625EF0* ___0_leq, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_Min_m9C4C6411D4A1EAE059F73DF889310FE968EE6536_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_mD0C7C7B0CAA7E57BE551C37CD673590934FD7462_gshared (LessOrEqual_tACCF8A4A6BCA3EF8A2CF760C7F6FF7EFDF874918* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1__ctor_mE971438DA807EB747612C28B18E91E2C3997FFDA_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, int32_t ___0_initialSize, LessOrEqual_tACCF8A4A6BCA3EF8A2CF760C7F6FF7EFDF874918* ___1_leq, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Init_mD3AB01D87573BC810FF540F1FD7D0D7890C21D2D_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_Minimum_mC5489757AE11BE9308F890B98F117EB2E894ED35_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_ExtractMin_m89E64C99B02E621CD929E60183C36C0E8866E75E_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F (bool ___0_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___0_a, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF (float ___0_a, float ___1_x, float ___2_b, float ___3_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eNext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrig, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_vNext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrig, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___2_fNext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_vDel, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_newOrg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___1_fDel, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___2_newLFace, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_a, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_mE2132C4410E6FCC3090942C9E37A525B7873F0F1 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eDel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eDel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, const RuntimeMethod* method) ;
inline void DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4 (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
inline void DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5 (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
inline void DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
inline void DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482 (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
inline void Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ___0_node, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, const RuntimeMethod*))Dict_1_Remove_m1ECF60568C517A776F7601E3FC80096503B38B24_gshared)(__this, ___0_node, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eDst, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_newEdge, const RuntimeMethod* method) ;
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ___0_node, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___1_key, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_InsertBefore_mC0A504DA48ED4EDE834676C75F5B374B8F871E72_gshared)(__this, ___0_node, ___1_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793 (int32_t ___0_rule, int32_t ___1_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eDst, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regAbove, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eNewUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_eDst, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eSrc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_isect, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_org, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_dst, float* ___3_w0, float* ___4_w1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_inline (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, const RuntimeMethod* method) ;
inline void PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ___0_handle, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043, const RuntimeMethod*))PriorityQueue_1_Remove_m200379F3FF5FAA8F71A8883350DB734E1B79877D_gshared)(__this, ___0_handle, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_e2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_mEC7935EED47854721B3A81E27749CA3A7F4736D3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_o1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_d1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_o2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___3_d2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___4_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regFirst, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___1_regLast, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eFirst, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eLast, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___3_eTopLeft, bool ___4_cleanUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
inline PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_value, const RuntimeMethod* method)
{
	return ((  PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*, const RuntimeMethod*))PriorityQueue_1_Insert_mE16B478F9ECD296053127A29F40B879A7C319D7B_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_isect, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_orgUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_dstUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___3_orgLo, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___4_dstLo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_vEvent, const RuntimeMethod* method) ;
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_key, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_Find_m20EA586631ADA2B67D42BAC427E0362364B6FCC8_gshared)(__this, ___0_key, method);
}
inline ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* __this, const RuntimeMethod* method)
{
	return ((  ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* (*) (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, const RuntimeMethod*))Node_get_Key_m7C2669092F4A0E59D5F38ADC148ADC476A3B15EE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_vEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_vEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eBottomLeft, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) ;
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_key, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_Insert_m8B82DB58FA4552C4915EF5A9A98DFD1DBE942FD8_gshared)(__this, ___0_key, method);
}
inline void LessOrEqual__ctor_m6556B77F3E07A00B7AFD15AD07B0EF86306BFF0C (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_m8C2D651B99415D1A29A1DF26A61FDC854060FE62_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* ___0_leq, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*, const RuntimeMethod*))Dict_1__ctor_m5A633CA25D0F151B8F3D2B1A1B1D6B646D331639_gshared)(__this, ___0_leq, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, float ___0_smin, float ___1_smax, float ___2_t, const RuntimeMethod* method) ;
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, const RuntimeMethod*))Dict_1_Min_m9C4C6411D4A1EAE059F73DF889310FE968EE6536_gshared)(__this, method);
}
inline void LessOrEqual__ctor_m354C7C326099DA31A5715796F9CCA76DE5067731 (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_mD0C7C7B0CAA7E57BE551C37CD673590934FD7462_gshared)(__this, ___0_object, ___1_method, method);
}
inline void PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, int32_t ___0_initialSize, LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* ___1_leq, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, int32_t, LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*, const RuntimeMethod*))PriorityQueue_1__ctor_mE971438DA807EB747612C28B18E91E2C3997FFDA_gshared)(__this, ___0_initialSize, ___1_leq, method);
}
inline void PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_Init_mD3AB01D87573BC810FF540F1FD7D0D7890C21D2D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86 (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_Minimum_mC5489757AE11BE9308F890B98F117EB2E894ED35_gshared)(__this, method);
}
inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330 (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_ExtractMin_m89E64C99B02E621CD929E60183C36C0E8866E75E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Check_m60A4227D366A3F601EC5B8D95D672862D9BC8146 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_mA9794AE1C4917832E71637ADA7B763D44F1AADCA (NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_lhs, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___1_rhs, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___2_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m615687EA76621EE708A5F7836B33DF54DC67E58C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_norm, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_u, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___1_v, float* ___2_dot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_mB470DCF8C4FD679BB83397B8DE58638B3896DC9B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m5B4F1EB6223DBC3AD38DC58AE036CA922E1319CE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_face, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_ZapFace_m40CB995646CB70A3A752001902CF3A1289CC54E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___1_fZap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, int32_t ___1_maxVertsPerFace, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_edge, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___0_vertices, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___0_value, bool ___1_keepOnlyBoundary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___0_elementType, int32_t ___1_polySize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mB49AE90A9B85CA37EC7EE928BC9EE585D35C8C03 (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, RuntimeObject* ___1_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793 (int32_t ___0_rule, int32_t ___1_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = ___0_rule;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0036;
			}
			case 4:
			{
				goto IL_003d;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_001f:
	{
		int32_t L_2 = ___1_n;
		V_1 = (bool)((((int32_t)((int32_t)(L_2&1))) == ((int32_t)1))? 1 : 0);
		goto IL_005a;
	}

IL_0028:
	{
		int32_t L_3 = ___1_n;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		goto IL_005a;
	}

IL_002f:
	{
		int32_t L_4 = ___1_n;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_0036:
	{
		int32_t L_5 = ___1_n;
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_003d:
	{
		int32_t L_6 = ___1_n;
		if ((((int32_t)L_6) >= ((int32_t)2)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_7 = ___1_n;
		G_B9_0 = ((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B9_0 = 1;
	}

IL_004c:
	{
		V_1 = (bool)G_B9_0;
		goto IL_005a;
	}

IL_004f:
	{
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793_RuntimeMethod_var)));
	}

IL_005a:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_u;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___1_v;
		NullCheck(L_2);
		float L_3 = L_2->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_w;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___2_w;
		NullCheck(L_8);
		float L_9 = L_8->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___0_u;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___2_w;
		NullCheck(L_12);
		float L_13 = L_12->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___0_u;
		NullCheck(L_14);
		float L_15 = L_14->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___1_v;
		NullCheck(L_16);
		float L_17 = L_16->____t;
		V_0 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, ((float)il2cpp_codegen_subtract(L_3, L_5)))), ((float)il2cpp_codegen_multiply(L_7, ((float)il2cpp_codegen_subtract(L_9, L_11)))))), ((float)il2cpp_codegen_multiply(L_13, ((float)il2cpp_codegen_subtract(L_15, L_17))))))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004c:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_lhs;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___1_rhs;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___0_lhs;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_rhs;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		G_B3_0 = ((((float)L_5) == ((float)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_lhs;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___1_rhs;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0033;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___0_lhs;
		NullCheck(L_4);
		float L_5 = L_4->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_rhs;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___0_lhs;
		NullCheck(L_8);
		float L_9 = L_8->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___1_rhs;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		G_B4_0 = ((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		G_B6_0 = G_B4_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B6_0 = 1;
	}

IL_0034:
	{
		V_0 = (bool)G_B6_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_u;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___1_v;
		bool L_2;
		L_2 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___1_v;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_w;
		bool L_5;
		L_5 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___0_u;
		NullCheck(L_8);
		float L_9 = L_8->____s;
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___2_w;
		NullCheck(L_10);
		float L_11 = L_10->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___1_v;
		NullCheck(L_12);
		float L_13 = L_12->____s;
		V_1 = ((float)il2cpp_codegen_subtract(L_11, L_13));
		float L_14 = V_0;
		float L_15 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(L_14, L_15))) > ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		float L_17 = V_0;
		float L_18 = V_1;
		V_3 = (bool)((((float)L_17) < ((float)L_18))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = ___1_v;
		NullCheck(L_20);
		float L_21 = L_20->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___0_u;
		NullCheck(L_22);
		float L_23 = L_22->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___0_u;
		NullCheck(L_24);
		float L_25 = L_24->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___2_w;
		NullCheck(L_26);
		float L_27 = L_26->____t;
		float L_28 = V_0;
		float L_29 = V_0;
		float L_30 = V_1;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_21, L_23)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_25, L_27)), ((float)(L_28/((float)il2cpp_codegen_add(L_29, L_30))))))));
		goto IL_00a2;
	}

IL_0073:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = ___1_v;
		NullCheck(L_31);
		float L_32 = L_31->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = ___2_w;
		NullCheck(L_33);
		float L_34 = L_33->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = ___2_w;
		NullCheck(L_35);
		float L_36 = L_35->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = ___0_u;
		NullCheck(L_37);
		float L_38 = L_37->____t;
		float L_39 = V_1;
		float L_40 = V_0;
		float L_41 = V_1;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_32, L_34)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_36, L_38)), ((float)(L_39/((float)il2cpp_codegen_add(L_40, L_41))))))));
		goto IL_00a2;
	}

IL_0099:
	{
		V_4 = (0.0f);
		goto IL_00a2;
	}

IL_00a2:
	{
		float L_42 = V_4;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_u;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___1_v;
		bool L_2;
		L_2 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___1_v;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_w;
		bool L_5;
		L_5 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___0_u;
		NullCheck(L_8);
		float L_9 = L_8->____s;
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___2_w;
		NullCheck(L_10);
		float L_11 = L_10->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___1_v;
		NullCheck(L_12);
		float L_13 = L_12->____s;
		V_1 = ((float)il2cpp_codegen_subtract(L_11, L_13));
		float L_14 = V_0;
		float L_15 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(L_14, L_15))) > ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0067;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___1_v;
		NullCheck(L_17);
		float L_18 = L_17->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = ___2_w;
		NullCheck(L_19);
		float L_20 = L_19->____t;
		float L_21 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___1_v;
		NullCheck(L_22);
		float L_23 = L_22->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___0_u;
		NullCheck(L_24);
		float L_25 = L_24->____t;
		float L_26 = V_1;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_18, L_20)), L_21)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_23, L_25)), L_26))));
		goto IL_006f;
	}

IL_0067:
	{
		V_3 = (0.0f);
		goto IL_006f;
	}

IL_006f:
	{
		float L_27 = V_3;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_lhs;
		NullCheck(L_0);
		float L_1 = L_0->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___1_rhs;
		NullCheck(L_2);
		float L_3 = L_2->____t;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0033;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___0_lhs;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_rhs;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___0_lhs;
		NullCheck(L_8);
		float L_9 = L_8->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___1_rhs;
		NullCheck(L_10);
		float L_11 = L_10->____s;
		G_B4_0 = ((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		G_B6_0 = G_B4_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B6_0 = 1;
	}

IL_0034:
	{
		V_0 = (bool)G_B6_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_u;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___1_v;
		bool L_2;
		L_2 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___1_v;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_w;
		bool L_5;
		L_5 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___0_u;
		NullCheck(L_8);
		float L_9 = L_8->____t;
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___2_w;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___1_v;
		NullCheck(L_12);
		float L_13 = L_12->____t;
		V_1 = ((float)il2cpp_codegen_subtract(L_11, L_13));
		float L_14 = V_0;
		float L_15 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(L_14, L_15))) > ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		float L_17 = V_0;
		float L_18 = V_1;
		V_3 = (bool)((((float)L_17) < ((float)L_18))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = ___1_v;
		NullCheck(L_20);
		float L_21 = L_20->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___0_u;
		NullCheck(L_22);
		float L_23 = L_22->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___0_u;
		NullCheck(L_24);
		float L_25 = L_24->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___2_w;
		NullCheck(L_26);
		float L_27 = L_26->____s;
		float L_28 = V_0;
		float L_29 = V_0;
		float L_30 = V_1;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_21, L_23)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_25, L_27)), ((float)(L_28/((float)il2cpp_codegen_add(L_29, L_30))))))));
		goto IL_00a2;
	}

IL_0073:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = ___1_v;
		NullCheck(L_31);
		float L_32 = L_31->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = ___2_w;
		NullCheck(L_33);
		float L_34 = L_33->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = ___2_w;
		NullCheck(L_35);
		float L_36 = L_35->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = ___0_u;
		NullCheck(L_37);
		float L_38 = L_37->____s;
		float L_39 = V_1;
		float L_40 = V_0;
		float L_41 = V_1;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_32, L_34)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_36, L_38)), ((float)(L_39/((float)il2cpp_codegen_add(L_40, L_41))))))));
		goto IL_00a2;
	}

IL_0099:
	{
		V_4 = (0.0f);
		goto IL_00a2;
	}

IL_00a2:
	{
		float L_42 = V_4;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_u;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___1_v;
		bool L_2;
		L_2 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___1_v;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_w;
		bool L_5;
		L_5 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___0_u;
		NullCheck(L_8);
		float L_9 = L_8->____t;
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___2_w;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___1_v;
		NullCheck(L_12);
		float L_13 = L_12->____t;
		V_1 = ((float)il2cpp_codegen_subtract(L_11, L_13));
		float L_14 = V_0;
		float L_15 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(L_14, L_15))) > ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0067;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___1_v;
		NullCheck(L_17);
		float L_18 = L_17->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = ___2_w;
		NullCheck(L_19);
		float L_20 = L_19->____s;
		float L_21 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___1_v;
		NullCheck(L_22);
		float L_23 = L_22->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___0_u;
		NullCheck(L_24);
		float L_25 = L_24->____s;
		float L_26 = V_1;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_18, L_20)), L_21)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_23, L_25)), L_26))));
		goto IL_006f;
	}

IL_0067:
	{
		V_3 = (0.0f);
		goto IL_006f;
	}

IL_006f:
	{
		float L_27 = V_3;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_mB470DCF8C4FD679BB83397B8DE58638B3896DC9B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___0_e;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_0, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___0_e;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____Org;
		bool L_4;
		L_4 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m5B4F1EB6223DBC3AD38DC58AE036CA922E1319CE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___0_e;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___0_e;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3;
		L_3 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_2, NULL);
		bool L_4;
		L_4 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_u;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___1_v;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = ___0_u;
		NullCheck(L_5);
		float L_6 = L_5->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = ___1_v;
		NullCheck(L_7);
		float L_8 = L_7->____t;
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_6, L_8)));
		V_0 = ((float)il2cpp_codegen_add(L_4, L_9));
		goto IL_0029;
	}

IL_0029:
	{
		float L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_eDst, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eSrc, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___0_eDst;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____winding;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___1_eSrc;
		NullCheck(L_3);
		int32_t L_4 = L_3->____winding;
		NullCheck(L_1);
		L_1->____winding = ((int32_t)il2cpp_codegen_add(L_2, L_4));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___0_eDst;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____winding;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___1_eSrc;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Sym;
		NullCheck(L_10);
		int32_t L_11 = L_10->____winding;
		NullCheck(L_7);
		L_7->____winding = ((int32_t)il2cpp_codegen_add(L_8, L_11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF (float ___0_a, float ___1_x, float ___2_b, float ___3_y, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	float G_B9_0 = 0.0f;
	{
		float L_0 = ___0_a;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		___0_a = (0.0f);
	}

IL_0016:
	{
		float L_2 = ___2_b;
		V_1 = (bool)((((float)L_2) < ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		___2_b = (0.0f);
	}

IL_002b:
	{
		float L_4 = ___0_a;
		float L_5 = ___2_b;
		if ((((float)L_4) <= ((float)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		float L_6 = ___3_y;
		float L_7 = ___1_x;
		float L_8 = ___3_y;
		float L_9 = ___2_b;
		float L_10 = ___0_a;
		float L_11 = ___2_b;
		G_B9_0 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_7, L_8)), ((float)(L_9/((float)il2cpp_codegen_add(L_10, L_11))))))));
		goto IL_005a;
	}

IL_003c:
	{
		float L_12 = ___2_b;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0051;
		}
	}
	{
		float L_13 = ___1_x;
		float L_14 = ___3_y;
		float L_15 = ___1_x;
		float L_16 = ___0_a;
		float L_17 = ___0_a;
		float L_18 = ___2_b;
		G_B9_0 = ((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_14, L_15)), ((float)(L_16/((float)il2cpp_codegen_add(L_17, L_18))))))));
		goto IL_005a;
	}

IL_0051:
	{
		float L_19 = ___1_x;
		float L_20 = ___3_y;
		G_B9_0 = ((float)(((float)il2cpp_codegen_add(L_19, L_20))/(2.0f)));
	}

IL_005a:
	{
		V_2 = G_B9_0;
		goto IL_005d;
	}

IL_005d:
	{
		float L_21 = V_2;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___0_a, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___1_b, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_0 = ___0_a;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = *((Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE**)L_0);
		V_0 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_2 = ___0_a;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_3 = ___1_b;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = *((Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE**)L_3);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_5 = ___1_b;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = V_0;
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_mEC7935EED47854721B3A81E27749CA3A7F4736D3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_o1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_d1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_o2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___3_d2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___4_v, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	bool V_7 = false;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	bool V_18 = false;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	bool V_21 = false;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___1_d1;
		bool L_2;
		L_2 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___0_o1), (&___1_d1), NULL);
	}

IL_001b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = ___3_d2;
		bool L_6;
		L_6 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_4, L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___2_o2), (&___3_d2), NULL);
	}

IL_0035:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___2_o2;
		bool L_10;
		L_10 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_8, L_9, NULL);
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___0_o1), (&___2_o2), NULL);
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___1_d1), (&___3_d2), NULL);
	}

IL_0059:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = ___1_d1;
		bool L_14;
		L_14 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_12, L_13, NULL);
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0088;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___4_v;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___2_o2;
		NullCheck(L_17);
		float L_18 = L_17->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = ___1_d1;
		NullCheck(L_19);
		float L_20 = L_19->____s;
		NullCheck(L_16);
		L_16->____s = ((float)(((float)il2cpp_codegen_add(L_18, L_20))/(2.0f)));
		goto IL_0138;
	}

IL_0088:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___1_d1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___3_d2;
		bool L_23;
		L_23 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_21, L_22, NULL);
		V_4 = L_23;
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00e7;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = ___1_d1;
		float L_28;
		L_28 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_25, L_26, L_27, NULL);
		V_5 = L_28;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = ___1_d1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = ___3_d2;
		float L_32;
		L_32 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_29, L_30, L_31, NULL);
		V_6 = L_32;
		float L_33 = V_5;
		float L_34 = V_6;
		V_7 = (bool)((((float)((float)il2cpp_codegen_add(L_33, L_34))) < ((float)(0.0f)))? 1 : 0);
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00c8;
		}
	}
	{
		float L_36 = V_5;
		V_5 = ((-L_36));
		float L_37 = V_6;
		V_6 = ((-L_37));
	}

IL_00c8:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = ___4_v;
		float L_39 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = ___2_o2;
		NullCheck(L_40);
		float L_41 = L_40->____s;
		float L_42 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = ___1_d1;
		NullCheck(L_43);
		float L_44 = L_43->____s;
		float L_45;
		L_45 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_39, L_41, L_42, L_44, NULL);
		NullCheck(L_38);
		L_38->____s = L_45;
		goto IL_0138;
	}

IL_00e7:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_48 = ___1_d1;
		float L_49;
		L_49 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_46, L_47, L_48, NULL);
		V_8 = L_49;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_50 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = ___3_d2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = ___1_d1;
		float L_53;
		L_53 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_50, L_51, L_52, NULL);
		V_9 = ((-L_53));
		float L_54 = V_8;
		float L_55 = V_9;
		V_10 = (bool)((((float)((float)il2cpp_codegen_add(L_54, L_55))) < ((float)(0.0f)))? 1 : 0);
		bool L_56 = V_10;
		if (!L_56)
		{
			goto IL_011b;
		}
	}
	{
		float L_57 = V_8;
		V_8 = ((-L_57));
		float L_58 = V_9;
		V_9 = ((-L_58));
	}

IL_011b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59 = ___4_v;
		float L_60 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_61 = ___2_o2;
		NullCheck(L_61);
		float L_62 = L_61->____s;
		float L_63 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_64 = ___3_d2;
		NullCheck(L_64);
		float L_65 = L_64->____s;
		float L_66;
		L_66 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_60, L_62, L_63, L_65, NULL);
		NullCheck(L_59);
		L_59->____s = L_66;
	}

IL_0138:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_68 = ___1_d1;
		bool L_69;
		L_69 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_67, L_68, NULL);
		V_11 = (bool)((((int32_t)L_69) == ((int32_t)0))? 1 : 0);
		bool L_70 = V_11;
		if (!L_70)
		{
			goto IL_0154;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___0_o1), (&___1_d1), NULL);
	}

IL_0154:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = ___3_d2;
		bool L_73;
		L_73 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_71, L_72, NULL);
		V_12 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_12;
		if (!L_74)
		{
			goto IL_0170;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___2_o2), (&___3_d2), NULL);
	}

IL_0170:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_76 = ___2_o2;
		bool L_77;
		L_77 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_75, L_76, NULL);
		V_13 = (bool)((((int32_t)L_77) == ((int32_t)0))? 1 : 0);
		bool L_78 = V_13;
		if (!L_78)
		{
			goto IL_0196;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___0_o1), (&___2_o2), NULL);
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___1_d1), (&___3_d2), NULL);
	}

IL_0196:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_79 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_80 = ___1_d1;
		bool L_81;
		L_81 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_79, L_80, NULL);
		V_14 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_14;
		if (!L_82)
		{
			goto IL_01c7;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83 = ___4_v;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_84 = ___2_o2;
		NullCheck(L_84);
		float L_85 = L_84->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = ___1_d1;
		NullCheck(L_86);
		float L_87 = L_86->____t;
		NullCheck(L_83);
		L_83->____t = ((float)(((float)il2cpp_codegen_add(L_85, L_87))/(2.0f)));
		goto IL_0277;
	}

IL_01c7:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_88 = ___1_d1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_89 = ___3_d2;
		bool L_90;
		L_90 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_88, L_89, NULL);
		V_15 = L_90;
		bool L_91 = V_15;
		if (!L_91)
		{
			goto IL_0226;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_92 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_93 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_94 = ___1_d1;
		float L_95;
		L_95 = Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B(L_92, L_93, L_94, NULL);
		V_16 = L_95;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_96 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_97 = ___1_d1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_98 = ___3_d2;
		float L_99;
		L_99 = Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B(L_96, L_97, L_98, NULL);
		V_17 = L_99;
		float L_100 = V_16;
		float L_101 = V_17;
		V_18 = (bool)((((float)((float)il2cpp_codegen_add(L_100, L_101))) < ((float)(0.0f)))? 1 : 0);
		bool L_102 = V_18;
		if (!L_102)
		{
			goto IL_0207;
		}
	}
	{
		float L_103 = V_16;
		V_16 = ((-L_103));
		float L_104 = V_17;
		V_17 = ((-L_104));
	}

IL_0207:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_105 = ___4_v;
		float L_106 = V_16;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_107 = ___2_o2;
		NullCheck(L_107);
		float L_108 = L_107->____t;
		float L_109 = V_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_110 = ___1_d1;
		NullCheck(L_110);
		float L_111 = L_110->____t;
		float L_112;
		L_112 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_106, L_108, L_109, L_111, NULL);
		NullCheck(L_105);
		L_105->____t = L_112;
		goto IL_0277;
	}

IL_0226:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_113 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_114 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_115 = ___1_d1;
		float L_116;
		L_116 = Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA(L_113, L_114, L_115, NULL);
		V_19 = L_116;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_117 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_118 = ___3_d2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_119 = ___1_d1;
		float L_120;
		L_120 = Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA(L_117, L_118, L_119, NULL);
		V_20 = ((-L_120));
		float L_121 = V_19;
		float L_122 = V_20;
		V_21 = (bool)((((float)((float)il2cpp_codegen_add(L_121, L_122))) < ((float)(0.0f)))? 1 : 0);
		bool L_123 = V_21;
		if (!L_123)
		{
			goto IL_025a;
		}
	}
	{
		float L_124 = V_19;
		V_19 = ((-L_124));
		float L_125 = V_20;
		V_20 = ((-L_125));
	}

IL_025a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_126 = ___4_v;
		float L_127 = V_19;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_128 = ___2_o2;
		NullCheck(L_128);
		float L_129 = L_128->____t;
		float L_130 = V_20;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_131 = ___3_d2;
		NullCheck(L_131);
		float L_132 = L_131->____t;
		float L_133;
		L_133 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_127, L_129, L_130, L_132, NULL);
		NullCheck(L_126);
		L_126->____t = L_133;
	}

IL_0277:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Init_mD8243AFF3EE5E3F72571310BD8BB14459F946B80 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E V_2;
	memset((&V_2), 0, sizeof(V_2));
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_6 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_7 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1;
		V_5 = L_2;
		__this->____vHead = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead), (void*)L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = V_5;
		V_0 = L_3;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_4 = ___0_pool;
		NullCheck(L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5;
		L_5 = GenericVirtualFuncInvoker0< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var, L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = L_5;
		V_6 = L_6;
		__this->____fHead = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead), (void*)L_6);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_6;
		V_1 = L_7;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_8 = ___0_pool;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_9;
		L_9 = EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F(L_8, NULL);
		V_2 = L_9;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_10 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10.____e;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11;
		V_7 = L_12;
		__this->____eHead = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead), (void*)L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_7;
		V_3 = L_13;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_14 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = L_14.____eSym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15;
		V_7 = L_16;
		__this->____eHeadSym = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym), (void*)L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_7;
		V_4 = L_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20;
		V_5 = L_21;
		NullCheck(L_19);
		L_19->____prev = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____prev), (void*)L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_5;
		NullCheck(L_18);
		L_18->____next = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____next), (void*)L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = V_0;
		NullCheck(L_23);
		L_23->____anEdge = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->____anEdge), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_24 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_25 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_26 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_27 = L_26;
		V_6 = L_27;
		NullCheck(L_25);
		L_25->____prev = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->____prev), (void*)L_27);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_28 = V_6;
		NullCheck(L_24);
		L_24->____next = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____next), (void*)L_28);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_29 = V_1;
		NullCheck(L_29);
		L_29->____anEdge = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->____anEdge), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_30 = V_1;
		NullCheck(L_30);
		L_30->____trail = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->____trail), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_31 = V_1;
		NullCheck(L_31);
		L_31->____marked = (bool)0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_32 = V_1;
		NullCheck(L_32);
		L_32->____inside = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_3;
		NullCheck(L_33);
		L_33->____next = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->____next), (void*)L_34);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_4;
		NullCheck(L_35);
		L_35->____Sym = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->____Sym), (void*)L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_3;
		NullCheck(L_37);
		L_37->____Onext = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____Onext), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_3;
		NullCheck(L_38);
		L_38->____Lnext = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->____Lnext), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_3;
		NullCheck(L_39);
		L_39->____Org = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->____Org), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_3;
		NullCheck(L_40);
		L_40->____Lface = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->____Lface), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_3;
		NullCheck(L_41);
		L_41->____winding = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_3;
		NullCheck(L_42);
		L_42->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_4;
		NullCheck(L_43);
		L_43->____next = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_43->____next), (void*)L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_3;
		NullCheck(L_45);
		L_45->____Sym = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->____Sym), (void*)L_46);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_4;
		NullCheck(L_47);
		L_47->____Onext = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____Onext), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_4;
		NullCheck(L_48);
		L_48->____Lnext = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->____Lnext), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_4;
		NullCheck(L_49);
		L_49->____Org = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->____Org), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_4;
		NullCheck(L_50);
		L_50->____Lface = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_50->____Lface), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_4;
		NullCheck(L_51);
		L_51->____winding = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_4;
		NullCheck(L_52);
		L_52->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_52->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Reset_m7D0904C1C1CFE59B8C52DBD2144FB4090E9187D3 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	bool V_2 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	bool V_5 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_6 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_7 = NULL;
	bool V_8 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_9 = NULL;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = __this->____fHead;
		V_0 = L_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = __this->____fHead;
		V_1 = L_1;
		goto IL_0024;
	}

IL_0011:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_0;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____next;
		V_1 = L_3;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_4 = ___0_pool;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_4);
		GenericVirtualActionInvoker1< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var, L_4, L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = V_1;
		V_0 = L_6;
	}

IL_0024:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_0;
		NullCheck(L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = L_7->____next;
		V_2 = (bool)((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0011;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = __this->____vHead;
		V_3 = L_10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = __this->____vHead;
		V_4 = L_11;
		goto IL_0057;
	}

IL_0042:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = V_3;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = L_12->____next;
		V_4 = L_13;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_14 = ___0_pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_3;
		NullCheck(L_14);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_14, L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_4;
		V_3 = L_16;
	}

IL_0057:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = V_3;
		NullCheck(L_17);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = L_17->____next;
		V_5 = (bool)((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_0042;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = __this->____eHead;
		V_6 = L_20;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = __this->____eHead;
		V_7 = L_21;
		goto IL_009e;
	}

IL_0078:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_6;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = L_22->____next;
		V_7 = L_23;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_24 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_6;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Sym;
		NullCheck(L_24);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_24, L_26);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_27 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_6;
		NullCheck(L_27);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_27, L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_7;
		V_6 = L_29;
	}

IL_009e:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_6;
		NullCheck(L_30);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = L_30->____next;
		V_8 = (bool)((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_32 = V_8;
		if (L_32)
		{
			goto IL_0078;
		}
	}
	{
		__this->____vHead = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		__this->____fHead = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		V_9 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____eHeadSym = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_9;
		__this->____eHead = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead), (void*)L_33);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = __this->____eHead;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB(L_0, L_1, NULL);
		V_0 = L_2;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_3 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = __this->____vHead;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_3, L_4, L_5, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_6 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = __this->____vHead;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_6, L_8, L_9, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_10 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = __this->____fHead;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_10, L_11, L_12, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		V_1 = L_13;
		goto IL_0041;
	}

IL_0041:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eDst, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___1_eOrg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___2_eDst;
		V_2 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_0) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_1))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_00c1;
	}

IL_000f:
	{
		V_0 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___2_eDst;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = L_3->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___1_eOrg;
		NullCheck(L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = L_5->____Org;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_4) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		V_0 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_8 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___2_eDst;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = ___1_eOrg;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = L_11->____Org;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_8, L_10, L_12, NULL);
	}

IL_003d:
	{
		V_1 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___2_eDst;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___1_eOrg;
		NullCheck(L_15);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = L_15->____Lface;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_14) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_006d;
		}
	}
	{
		V_1 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_18 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___2_eDst;
		NullCheck(L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = L_19->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___1_eOrg;
		NullCheck(L_21);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_22 = L_21->____Lface;
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_18, L_20, L_22, NULL);
	}

IL_006d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = ___2_eDst;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = ___1_eOrg;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_23, L_24, NULL);
		bool L_25 = V_0;
		V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_009b;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_27 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = ___2_eDst;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = ___1_eOrg;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = L_29->____Org;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_27, L_28, L_30, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = ___1_eOrg;
		NullCheck(L_31);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_32 = L_31->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = ___1_eOrg;
		NullCheck(L_32);
		L_32->____anEdge = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____anEdge), (void*)L_33);
	}

IL_009b:
	{
		bool L_34 = V_1;
		V_6 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_00c1;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_36 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = ___2_eDst;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = ___1_eOrg;
		NullCheck(L_38);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_39 = L_38->____Lface;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_36, L_37, L_39, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = ___1_eOrg;
		NullCheck(L_40);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_41 = L_40->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = ___1_eOrg;
		NullCheck(L_41);
		L_41->____anEdge = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&L_41->____anEdge), (void*)L_42);
	}

IL_00c1:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eDel, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___1_eDel;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym;
		V_0 = L_1;
		V_1 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___1_eDel;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = ___1_eDel;
		NullCheck(L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5;
		L_5 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_4, NULL);
		V_2 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_3) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		V_1 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_7 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = ___1_eDel;
		NullCheck(L_8);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = L_8->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = ___1_eDel;
		NullCheck(L_10);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11;
		L_11 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_10, NULL);
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_7, L_9, L_11, NULL);
	}

IL_0036:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___1_eDel;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = L_12->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = ___1_eDel;
		V_3 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0055;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_16 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = ___1_eDel;
		NullCheck(L_17);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = L_17->____Org;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_16, L_18, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		goto IL_00a0;
	}

IL_0055:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___1_eDel;
		NullCheck(L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20;
		L_20 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_19, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___1_eDel;
		NullCheck(L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22;
		L_22 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_21, NULL);
		NullCheck(L_20);
		L_20->____anEdge = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____anEdge), (void*)L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = ___1_eDel;
		NullCheck(L_23);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = L_23->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = ___1_eDel;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Onext;
		NullCheck(L_24);
		L_24->____anEdge = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____anEdge), (void*)L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = ___1_eDel;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = ___1_eDel;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29;
		L_29 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_28, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_27, L_29, NULL);
		bool L_30 = V_1;
		V_4 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_009f;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_32 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = ___1_eDel;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = ___1_eDel;
		NullCheck(L_34);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_35 = L_34->____Lface;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_32, L_33, L_35, NULL);
	}

IL_009f:
	{
	}

IL_00a0:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_0;
		NullCheck(L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = L_36->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_0;
		V_5 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_37) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_38))? 1 : 0);
		bool L_39 = V_5;
		if (!L_39)
		{
			goto IL_00cf;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_40 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_0;
		NullCheck(L_41);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = L_41->____Org;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_40, L_42, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_43 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_0;
		NullCheck(L_44);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_45 = L_44->____Lface;
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_43, L_45, (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL, NULL);
		goto IL_0100;
	}

IL_00cf:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = ___1_eDel;
		NullCheck(L_46);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_47 = L_46->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		NullCheck(L_48);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49;
		L_49 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_48, NULL);
		NullCheck(L_47);
		L_47->____anEdge = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____anEdge), (void*)L_49);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_0;
		NullCheck(L_50);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = L_50->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_0;
		NullCheck(L_52);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = L_52->____Onext;
		NullCheck(L_51);
		L_51->____anEdge = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&L_51->____anEdge), (void*)L_53);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_0;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56;
		L_56 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_55, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_54, L_56, NULL);
	}

IL_0100:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_57 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58 = ___1_eDel;
		MeshUtils_KillEdge_mE2132C4410E6FCC3090942C9E37A525B7873F0F1(L_57, L_58, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___1_eOrg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Sym;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___1_eOrg;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Lnext;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_5, L_7, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___1_eOrg;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10;
		L_10 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_9, NULL);
		NullCheck(L_8);
		L_8->____Org = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Org), (void*)L_10);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_11 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____Org;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_11, L_12, L_14, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = ___1_eOrg;
		NullCheck(L_17);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = L_17->____Lface;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_19 = L_18;
		V_2 = L_19;
		NullCheck(L_16);
		L_16->____Lface = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____Lface), (void*)L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = V_2;
		NullCheck(L_15);
		L_15->____Lface = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Lface), (void*)L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		V_3 = L_21;
		goto IL_0050;
	}

IL_0050:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_3;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___1_eOrg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054(__this, L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Sym;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___1_eOrg;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___1_eOrg;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9;
		L_9 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_8, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_6, L_9, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = ___1_eOrg;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_11, L_12, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___1_eOrg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_1;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____Org;
		NullCheck(L_13);
		Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E(L_13, L_15, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17;
		L_17 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_16, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_1;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____Sym;
		NullCheck(L_17);
		L_17->____anEdge = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->____anEdge), (void*)L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___1_eOrg;
		NullCheck(L_21);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_22;
		L_22 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_21, NULL);
		NullCheck(L_20);
		Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF(L_20, L_22, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = ___1_eOrg;
		NullCheck(L_24);
		int32_t L_25 = L_24->____winding;
		NullCheck(L_23);
		L_23->____winding = L_25;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_1;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = ___1_eOrg;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____Sym;
		NullCheck(L_29);
		int32_t L_30 = L_29->____winding;
		NullCheck(L_27);
		L_27->____winding = L_30;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_1;
		V_2 = L_31;
		goto IL_0086;
	}

IL_0086:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_2;
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eDst, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_4 = NULL;
	bool V_5 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_6 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___1_eOrg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Sym;
		V_1 = L_4;
		V_2 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___2_eDst;
		NullCheck(L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = L_5->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___1_eOrg;
		NullCheck(L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = L_7->____Lface;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_6) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		V_2 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_10 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = ___2_eDst;
		NullCheck(L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = L_11->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___1_eOrg;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____Lface;
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_10, L_12, L_14, NULL);
	}

IL_003e:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = ___1_eOrg;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____Lnext;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_15, L_17, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___2_eDst;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_18, L_19, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___1_eOrg;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22;
		L_22 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_21, NULL);
		NullCheck(L_20);
		L_20->____Org = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Org), (void*)L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = ___2_eDst;
		NullCheck(L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = L_24->____Org;
		NullCheck(L_23);
		L_23->____Org = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->____Org), (void*)L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = ___1_eOrg;
		NullCheck(L_28);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_29 = L_28->____Lface;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_30 = L_29;
		V_4 = L_30;
		NullCheck(L_27);
		L_27->____Lface = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->____Lface), (void*)L_30);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_31 = V_4;
		NullCheck(L_26);
		L_26->____Lface = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____Lface), (void*)L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = ___1_eOrg;
		NullCheck(L_32);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_33 = L_32->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_1;
		NullCheck(L_33);
		L_33->____anEdge = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->____anEdge), (void*)L_34);
		bool L_35 = V_2;
		V_5 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_5;
		if (!L_36)
		{
			goto IL_00a8;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_37 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = ___1_eOrg;
		NullCheck(L_39);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_40 = L_39->____Lface;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_37, L_38, L_40, NULL);
	}

IL_00a8:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_0;
		V_6 = L_41;
		goto IL_00ad;
	}

IL_00ad:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_6;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_ZapFace_m40CB995646CB70A3A752001902CF3A1289CC54E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___1_fZap, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_4 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___1_fZap;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Lnext;
		V_1 = L_3;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_1;
		V_2 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_2;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Lnext;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_2;
		NullCheck(L_7);
		L_7->____Lface = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____Lface), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9;
		L_9 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_8, NULL);
		V_6 = (bool)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_00c5;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_2;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		V_7 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_0054;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_15 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_2;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = L_16->____Org;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_15, L_17, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		goto IL_0074;
	}

IL_0054:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_2;
		NullCheck(L_18);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = L_18->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_2;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____Onext;
		NullCheck(L_19);
		L_19->____anEdge = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____anEdge), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_2;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24;
		L_24 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_23, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_22, L_24, NULL);
	}

IL_0074:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_2;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Sym;
		V_3 = L_26;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_3;
		NullCheck(L_27);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = L_27->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_3;
		V_8 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_28) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_009c;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_31 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_3;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____Org;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_31, L_33, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		goto IL_00bc;
	}

IL_009c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_3;
		NullCheck(L_34);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = L_34->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_3;
		NullCheck(L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = L_36->____Onext;
		NullCheck(L_35);
		L_35->____anEdge = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->____anEdge), (void*)L_37);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_3;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40;
		L_40 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_39, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_38, L_40, NULL);
	}

IL_00bc:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_41 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_2;
		MeshUtils_KillEdge_mE2132C4410E6FCC3090942C9E37A525B7873F0F1(L_41, L_42, NULL);
	}

IL_00c5:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_0;
		V_9 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_43) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_44))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_9;
		if (L_45)
		{
			goto IL_000f;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_46 = ___1_fZap;
		NullCheck(L_46);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_47 = L_46->____prev;
		V_4 = L_47;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_48 = ___1_fZap;
		NullCheck(L_48);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_49 = L_48->____next;
		V_5 = L_49;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_50 = V_5;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_51 = V_4;
		NullCheck(L_50);
		L_50->____prev = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&L_50->____prev), (void*)L_51);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_52 = V_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_53 = V_5;
		NullCheck(L_52);
		L_52->____next = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&L_52->____next), (void*)L_53);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_54 = ___0_pool;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_55 = ___1_fZap;
		NullCheck(L_54);
		GenericVirtualActionInvoker1< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var, L_54, L_55);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, int32_t ___1_maxVertsPerFace, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	bool V_3 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B20_0 = 0;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = __this->____fHead;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____next;
		V_0 = L_1;
		goto IL_013d;
	}

IL_0012:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->____inside;
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0136;
	}

IL_0026:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____anEdge;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = L_7->____Org;
		V_2 = L_8;
		goto IL_012d;
	}

IL_0039:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Lnext;
		V_4 = L_10;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Sym;
		V_5 = L_12;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_5;
		NullCheck(L_14);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = L_14->____Lface;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_5;
		NullCheck(L_16);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = L_16->____Lface;
		NullCheck(L_17);
		bool L_18 = L_17->____inside;
		G_B8_0 = ((int32_t)(L_18));
		goto IL_0066;
	}

IL_0065:
	{
		G_B8_0 = 0;
	}

IL_0066:
	{
		V_6 = (bool)G_B8_0;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_010d;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0(L_20, NULL);
		V_7 = L_21;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_5;
		NullCheck(L_22);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_23 = L_22->____Lface;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0(L_23, NULL);
		V_8 = L_24;
		int32_t L_25 = V_7;
		int32_t L_26 = V_8;
		int32_t L_27 = ___1_maxVertsPerFace;
		V_9 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_25, L_26)), 2))) > ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_010c;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_1;
		NullCheck(L_29);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30;
		L_30 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_29, NULL);
		NullCheck(L_30);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = L_30->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_5;
		NullCheck(L_34);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = L_34->____Lnext;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = L_35->____Lnext;
		NullCheck(L_36);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = L_36->____Org;
		bool L_38;
		L_38 = Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3(L_31, L_33, L_37, NULL);
		if (!L_38)
		{
			goto IL_00ed;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_5;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40;
		L_40 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_39, NULL);
		NullCheck(L_40);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = L_40->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_5;
		NullCheck(L_42);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = L_42->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_1;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = L_44->____Lnext;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____Lnext;
		NullCheck(L_46);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = L_46->____Org;
		bool L_48;
		L_48 = Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3(L_41, L_43, L_47, NULL);
		G_B13_0 = ((int32_t)(L_48));
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B13_0 = 0;
	}

IL_00ee:
	{
		V_10 = (bool)G_B13_0;
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_010b;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_5;
		NullCheck(L_50);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = L_50->____Lnext;
		V_4 = L_51;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_52 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_5;
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(__this, L_52, L_53, NULL);
		V_1 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
	}

IL_010b:
	{
	}

IL_010c:
	{
	}

IL_010d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_1;
		if (!L_54)
		{
			goto IL_0120;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_1;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = L_55->____Lnext;
		NullCheck(L_56);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_57 = L_56->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = V_2;
		G_B20_0 = ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_57) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_58))? 1 : 0);
		goto IL_0121;
	}

IL_0120:
	{
		G_B20_0 = 0;
	}

IL_0121:
	{
		V_11 = (bool)G_B20_0;
		bool L_59 = V_11;
		if (!L_59)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_0135;
	}

IL_0129:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60 = V_4;
		V_1 = L_60;
	}

IL_012d:
	{
		V_12 = (bool)1;
		goto IL_0039;
	}

IL_0135:
	{
	}

IL_0136:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_61 = V_0;
		NullCheck(L_61);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_62 = L_61->____next;
		V_0 = L_62;
	}

IL_013d:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_63 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_64 = __this->____fHead;
		V_13 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_63) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_64))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_65 = V_13;
		if (L_65)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Check_m60A4227D366A3F601EC5B8D95D672862D9BC8146 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B27_0 = 0;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = __this->____fHead;
		V_1 = L_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = __this->____fHead;
		V_1 = L_1;
		goto IL_00a4;
	}

IL_0014:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_2;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____anEdge;
		V_0 = L_3;
	}

IL_001c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_9) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_10))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Lnext;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = L_12->____Onext;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = L_13->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_14) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_15))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_0;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____Onext;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Sym;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_19) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_20))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		NullCheck(L_21);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_22 = L_21->____Lface;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_23 = V_2;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_22) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_23))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_0;
		NullCheck(L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = L_24->____Lnext;
		V_0 = L_25;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_27 = V_2;
		NullCheck(L_27);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = L_27->____anEdge;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_26) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_001c;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_30 = V_2;
		V_1 = L_30;
	}

IL_00a4:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_31 = V_1;
		NullCheck(L_31);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_32 = L_31->____next;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_33 = L_32;
		V_2 = L_33;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_34 = __this->____fHead;
		V_7 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_33) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_34))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_7;
		if (L_35)
		{
			goto IL_0014;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_36 = V_2;
		NullCheck(L_36);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_37 = L_36->____prev;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_38 = V_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_37) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_38))))
		{
			goto IL_00d4;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_39 = V_2;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = L_39->____anEdge;
		G_B8_0 = ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_40) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_00d5;
	}

IL_00d4:
	{
		G_B8_0 = 0;
	}

IL_00d5:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B8_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = __this->____vHead;
		V_3 = L_41;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = __this->____vHead;
		V_3 = L_42;
		goto IL_0192;
	}

IL_00ee:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_4;
		NullCheck(L_43);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = L_43->____prev;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45 = V_3;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_44) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_45))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = V_4;
		NullCheck(L_46);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = L_46->____anEdge;
		V_0 = L_47;
	}

IL_0107:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		NullCheck(L_48);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = L_48->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_49) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_0;
		NullCheck(L_51);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = L_51->____Sym;
		NullCheck(L_52);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = L_52->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_53) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_54))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_0;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = L_55->____Lnext;
		NullCheck(L_56);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57 = L_56->____Onext;
		NullCheck(L_57);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58 = L_57->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_58) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_59))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60 = V_0;
		NullCheck(L_60);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = L_60->____Onext;
		NullCheck(L_61);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62 = L_61->____Sym;
		NullCheck(L_62);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = L_62->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_63) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_64))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65 = V_0;
		NullCheck(L_65);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = L_65->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = V_4;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_66) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_67))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = V_0;
		NullCheck(L_68);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = L_68->____Onext;
		V_0 = L_69;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = V_4;
		NullCheck(L_71);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_72 = L_71->____anEdge;
		V_8 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_70) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_72))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_73 = V_8;
		if (L_73)
		{
			goto IL_0107;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_74 = V_4;
		V_3 = L_74;
	}

IL_0192:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = V_3;
		NullCheck(L_75);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_76 = L_75->____next;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = L_76;
		V_4 = L_77;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = __this->____vHead;
		V_9 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_77) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_78))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_79 = V_9;
		if (L_79)
		{
			goto IL_00ee;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_80 = V_4;
		NullCheck(L_80);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = L_80->____prev;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = V_3;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_81) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_82))))
		{
			goto IL_01c5;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83 = V_4;
		NullCheck(L_83);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_84 = L_83->____anEdge;
		G_B16_0 = ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_84) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_01c6;
	}

IL_01c5:
	{
		G_B16_0 = 0;
	}

IL_01c6:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B16_0, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_85 = __this->____eHead;
		V_5 = L_85;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_86 = __this->____eHead;
		V_5 = L_86;
		goto IL_0276;
	}

IL_01e1:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_87 = V_0;
		NullCheck(L_87);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_88 = L_87->____Sym;
		NullCheck(L_88);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_89 = L_88->____next;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_90 = V_5;
		NullCheck(L_90);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_91 = L_90->____Sym;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_89) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_91))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_92 = V_0;
		NullCheck(L_92);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_93 = L_92->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_94 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_93) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_94))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_95 = V_0;
		NullCheck(L_95);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_96 = L_95->____Sym;
		NullCheck(L_96);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_97 = L_96->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_98 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_97) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_98))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_99 = V_0;
		NullCheck(L_99);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_100 = L_99->____Org;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_100) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_101 = V_0;
		NullCheck(L_101);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_102;
		L_102 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_101, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_102) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_103 = V_0;
		NullCheck(L_103);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_104 = L_103->____Lnext;
		NullCheck(L_104);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_105 = L_104->____Onext;
		NullCheck(L_105);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_106 = L_105->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_107 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_106) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_107))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_108 = V_0;
		NullCheck(L_108);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_109 = L_108->____Onext;
		NullCheck(L_109);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_110 = L_109->____Sym;
		NullCheck(L_110);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_111 = L_110->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_112 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_111) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_112))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_113 = V_0;
		V_5 = L_113;
	}

IL_0276:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_114 = V_5;
		NullCheck(L_114);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_115 = L_114->____next;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_116 = L_115;
		V_0 = L_116;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_117 = __this->____eHead;
		V_10 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_116) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_117))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_118 = V_10;
		if (L_118)
		{
			goto IL_01e1;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_119 = V_0;
		NullCheck(L_119);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_120 = L_119->____Sym;
		NullCheck(L_120);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_121 = L_120->____next;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_122 = V_5;
		NullCheck(L_122);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_123 = L_122->____Sym;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_121) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_123))))
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_124 = V_0;
		NullCheck(L_124);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_125 = L_124->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_126 = __this->____eHeadSym;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_125) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_126))))
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_127 = V_0;
		NullCheck(L_127);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_128 = L_127->____Sym;
		NullCheck(L_128);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_129 = L_128->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_130 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_129) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_130))))
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_131 = V_0;
		NullCheck(L_131);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_132 = L_131->____Org;
		if (L_132)
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_133 = V_0;
		NullCheck(L_133);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_134;
		L_134 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_133, NULL);
		if (L_134)
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_135 = V_0;
		NullCheck(L_135);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_136 = L_135->____Lface;
		if (L_136)
		{
			goto IL_02e6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_137 = V_0;
		NullCheck(L_137);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_138;
		L_138 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_137, NULL);
		G_B27_0 = ((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_138) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_02e7;
	}

IL_02e6:
	{
		G_B27_0 = 0;
	}

IL_02e7:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B27_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m8BF4E325A856B4818EBD72204EC256BF74D7D6EF (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = ___0_index;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		float L_2 = __this->___X;
		V_1 = L_2;
		goto IL_003a;
	}

IL_0012:
	{
		int32_t L_3 = ___0_index;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = __this->___Y;
		V_1 = L_5;
		goto IL_003a;
	}

IL_0023:
	{
		int32_t L_6 = ___0_index;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		float L_8 = __this->___Z;
		V_1 = L_8;
		goto IL_003a;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318_RuntimeMethod_var)));
	}

IL_003a:
	{
		float L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  float Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	float _returnValue;
	_returnValue = Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_index;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		float L_2 = ___1_value;
		__this->___X = L_2;
		goto IL_003a;
	}

IL_0012:
	{
		int32_t L_3 = ___0_index;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = ___1_value;
		__this->___Y = L_5;
		goto IL_003a;
	}

IL_0023:
	{
		int32_t L_6 = ___0_index;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		float L_8 = ___1_value;
		__this->___Z = L_8;
		goto IL_003a;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857_RuntimeMethod_var)));
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(_thisAdjusted, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___X = L_0;
		float L_1 = ___1_y;
		__this->___Y = L_1;
		float L_2 = ___2_z;
		__this->___Z = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C_AdjustorThunk (RuntimeObject* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C(_thisAdjusted, ___0_x, ___1_y, ___2_z, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_lhs, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___1_rhs, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___2_result, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___2_result;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___0_lhs;
		float L_2 = L_1->___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___1_rhs;
		float L_4 = L_3->___X;
		L_0->___X = ((float)il2cpp_codegen_subtract(L_2, L_4));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_5 = ___2_result;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___0_lhs;
		float L_7 = L_6->___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_8 = ___1_rhs;
		float L_9 = L_8->___Y;
		L_5->___Y = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = ___2_result;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = ___0_lhs;
		float L_12 = L_11->___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_13 = ___1_rhs;
		float L_14 = L_13->___Z;
		L_10->___Z = ((float)il2cpp_codegen_subtract(L_12, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m615687EA76621EE708A5F7836B33DF54DC67E58C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_v, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___0_v;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___0_v;
		float L_2 = L_1->___X;
		L_0->___X = ((-L_2));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___0_v;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_4 = ___0_v;
		float L_5 = L_4->___Y;
		L_3->___Y = ((-L_5));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___0_v;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_7 = ___0_v;
		float L_8 = L_7->___Z;
		L_6->___Z = ((-L_8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_u, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___1_v, float* ___2_dot, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___2_dot;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___0_u;
		float L_2 = L_1->___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___1_v;
		float L_4 = L_3->___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_5 = ___0_u;
		float L_6 = L_5->___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_7 = ___1_v;
		float L_8 = L_7->___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_9 = ___0_u;
		float L_10 = L_9->___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = ___1_v;
		float L_12 = L_11->___Z;
		*((float*)L_0) = (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_4)), ((float)il2cpp_codegen_multiply(L_6, L_8)))), ((float)il2cpp_codegen_multiply(L_10, L_12))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Normalize_m5C2A23AF12F5D6FF4025D08DBBD39199F98F69AB (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___0_v;
		float L_1 = L_0->___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_2 = ___0_v;
		float L_3 = L_2->___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_4 = ___0_v;
		float L_5 = L_4->___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___0_v;
		float L_7 = L_6->___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_8 = ___0_v;
		float L_9 = L_8->___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = ___0_v;
		float L_11 = L_10->___Z;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		float L_12 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_12) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		float L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = sqrt(((double)L_13));
		V_0 = ((float)((1.0f)/((float)L_14)));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_15 = ___0_v;
		float* L_16 = (float*)(&L_15->___X);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		float L_19 = V_0;
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, L_19));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_20 = ___0_v;
		float* L_21 = (float*)(&L_20->___Y);
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		float L_24 = V_0;
		*((float*)L_22) = (float)((float)il2cpp_codegen_multiply(L_23, L_24));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_25 = ___0_v;
		float* L_26 = (float*)(&L_25->___Z);
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		float L_29 = V_0;
		*((float*)L_27) = (float)((float)il2cpp_codegen_multiply(L_28, L_29));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	float G_B4_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	{
		V_0 = 0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___0_v;
		float L_1 = L_0->___Y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = fabsf(L_1);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___0_v;
		float L_4 = L_3->___X;
		float L_5;
		L_5 = fabsf(L_4);
		V_1 = (bool)((((float)L_2) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		V_0 = 1;
	}

IL_0021:
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_7 = ___0_v;
		float L_8 = L_7->___Z;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = fabsf(L_8);
		int32_t L_10 = V_0;
		if (!L_10)
		{
			G_B4_0 = L_9;
			goto IL_0037;
		}
		G_B3_0 = L_9;
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = ___0_v;
		float L_12 = L_11->___Y;
		G_B5_0 = L_12;
		G_B5_1 = G_B3_0;
		goto IL_003d;
	}

IL_0037:
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_13 = ___0_v;
		float L_14 = L_13->___X;
		G_B5_0 = L_14;
		G_B5_1 = G_B4_0;
	}

IL_003d:
	{
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = fabsf(G_B5_0);
		V_2 = (bool)((((float)G_B5_1) > ((float)L_15))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_004a;
		}
	}
	{
		V_0 = 2;
	}

IL_004a:
	{
		int32_t L_17 = V_0;
		V_3 = L_17;
		goto IL_004e;
	}

IL_004e:
	{
		int32_t L_18 = V_3;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		float L_0 = __this->___X;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		float L_3 = __this->___Y;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		float L_6 = __this->___Z;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8, L_2, L_5, L_8, NULL);
		V_0 = L_9;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__cctor_mEC878F17CD8277FE62C5523AFB7470B3F69F4CEE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero), sizeof(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797* L_0 = (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797*)il2cpp_codegen_object_new(DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4(L_0, DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var, __this, L_0);
		DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2* L_1 = (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2*)il2cpp_codegen_object_new(DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5(L_1, DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var, __this, L_1);
		DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC* L_2 = (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC*)il2cpp_codegen_object_new(DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F(L_2, DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var, __this, L_2);
		DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4* L_3 = (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4*)il2cpp_codegen_object_new(DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F(L_3, DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var, __this, L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_mA9794AE1C4917832E71637ADA7B763D44F1AADCA (NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_a, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_b, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___0_a;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___1_b;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Onext;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___1_b;
		NullCheck(L_5);
		L_5->____Lnext = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____Lnext), (void*)L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___0_a;
		NullCheck(L_8);
		L_8->____Lnext = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Lnext), (void*)L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = ___0_a;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		NullCheck(L_10);
		L_10->____Onext = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____Onext), (void*)L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___1_b;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_12);
		L_12->____Onext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____Onext), (void*)L_13);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrig, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_vNext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_0);
		V_0 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___2_vNext;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____prev;
		V_1 = L_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev), (void*)L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next), (void*)L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___2_vNext;
		NullCheck(L_8);
		L_8->____next = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next), (void*)L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___2_vNext;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev), (void*)L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___1_eOrig;
		NullCheck(L_12);
		L_12->____anEdge = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge), (void*)L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = ___1_eOrig;
		V_2 = L_14;
	}

IL_0034:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_0;
		NullCheck(L_15);
		L_15->____Org = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Org), (void*)L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_2;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Onext;
		V_2 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = ___1_eOrig;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_19) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrig, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___2_fNext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1;
		L_1 = GenericVirtualFuncInvoker0< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var, L_0);
		V_0 = L_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = ___2_fNext;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____prev;
		V_1 = L_3;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev), (void*)L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next), (void*)L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = ___2_fNext;
		NullCheck(L_8);
		L_8->____next = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next), (void*)L_9);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = ___2_fNext;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev), (void*)L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___1_eOrig;
		NullCheck(L_12);
		L_12->____anEdge = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge), (void*)L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = V_0;
		NullCheck(L_14);
		L_14->____trail = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->____trail), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = V_0;
		NullCheck(L_15);
		L_15->____marked = (bool)0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = ___2_fNext;
		NullCheck(L_17);
		bool L_18 = L_17->____inside;
		NullCheck(L_16);
		L_16->____inside = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___1_eOrig;
		V_2 = L_19;
	}

IL_004e:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = V_0;
		NullCheck(L_20);
		L_20->____Lface = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Lface), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = L_22->____Lnext;
		V_2 = L_23;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = ___1_eOrig;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_24) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_25))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_3;
		if (L_26)
		{
			goto IL_004e;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eNext, const RuntimeMethod* method) 
{
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E V_0;
	memset((&V_0), 0, sizeof(V_0));
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___1_eNext;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = ___0_pool;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_2;
		L_2 = EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F(L_1, NULL);
		V_0 = L_2;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_3 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3.____e;
		V_1 = L_4;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_5 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5.____eSym;
		V_2 = L_6;
		Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788((&___1_eNext), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___1_eNext;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____next;
		V_3 = L_9;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_3;
		NullCheck(L_10);
		L_10->____next = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____next), (void*)L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_3;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = L_12->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_1;
		NullCheck(L_13);
		L_13->____next = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____next), (void*)L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = ___1_eNext;
		NullCheck(L_15);
		L_15->____next = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____next), (void*)L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = ___1_eNext;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_2;
		NullCheck(L_18);
		L_18->____next = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____next), (void*)L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_2;
		NullCheck(L_20);
		L_20->____Sym = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Sym), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		NullCheck(L_22);
		L_22->____Onext = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____Onext), (void*)L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_2;
		NullCheck(L_24);
		L_24->____Lnext = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____Lnext), (void*)L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_1;
		NullCheck(L_26);
		L_26->____Org = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____Org), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_1;
		NullCheck(L_27);
		L_27->____Lface = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->____Lface), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_1;
		NullCheck(L_28);
		L_28->____winding = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_1;
		NullCheck(L_29);
		L_29->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_1;
		NullCheck(L_30);
		L_30->____Sym = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->____Sym), (void*)L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_2;
		NullCheck(L_32);
		L_32->____Onext = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____Onext), (void*)L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_1;
		NullCheck(L_34);
		L_34->____Lnext = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->____Lnext), (void*)L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_2;
		NullCheck(L_36);
		L_36->____Org = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____Org), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_2;
		NullCheck(L_37);
		L_37->____Lface = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____Lface), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_2;
		NullCheck(L_38);
		L_38->____winding = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_2;
		NullCheck(L_39);
		L_39->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		V_4 = L_40;
		goto IL_00c1;
	}

IL_00c1:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_4;
		return L_41;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_mE2132C4410E6FCC3090942C9E37A525B7873F0F1 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eDel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788((&___1_eDel), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___1_eDel;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____next;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___1_eDel;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Sym;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____next;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_6);
		L_6->____next = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next), (void*)L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_0;
		NullCheck(L_9);
		L_9->____next = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____next), (void*)L_10);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_11 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___1_eDel;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = L_12->____Sym;
		NullCheck(L_11);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_11, L_13);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_14 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___1_eDel;
		NullCheck(L_14);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_14, L_15);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_vDel, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_newOrg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	bool V_4 = false;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___1_vDel;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		V_1 = L_2;
	}

IL_000a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_newOrg;
		NullCheck(L_3);
		L_3->____Org = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Org), (void*)L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Onext;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___1_vDel;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = L_10->____prev;
		V_2 = L_11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___1_vDel;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = L_12->____next;
		V_3 = L_13;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_2;
		NullCheck(L_14);
		L_14->____prev = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->____prev), (void*)L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = V_3;
		NullCheck(L_16);
		L_16->____next = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____next), (void*)L_17);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_18 = ___0_pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = ___1_vDel;
		NullCheck(L_18);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_18, L_19);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___1_fDel, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___2_newLFace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_2 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_3 = NULL;
	bool V_4 = false;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___1_fDel;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		V_1 = L_2;
	}

IL_000a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = ___2_newLFace;
		NullCheck(L_3);
		L_3->____Lface = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Lface), (void*)L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Lnext;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_000a;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = ___1_fDel;
		NullCheck(L_10);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = L_10->____prev;
		V_2 = L_11;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = ___1_fDel;
		NullCheck(L_12);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = L_12->____next;
		V_3 = L_13;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = V_3;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = V_2;
		NullCheck(L_14);
		L_14->____prev = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->____prev), (void*)L_15);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = V_3;
		NullCheck(L_16);
		L_16->____next = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____next), (void*)L_17);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_18 = ___0_pool;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_19 = ___1_fDel;
		NullCheck(L_18);
		GenericVirtualActionInvoker1< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var, L_18, L_19);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		V_0 = (0.0f);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___0_f;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge;
		V_1 = L_1;
	}

IL_000e:
	{
		float L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = L_3->____Org;
		NullCheck(L_4);
		float L_5 = L_4->____s;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		NullCheck(L_7);
		float L_8 = L_7->____s;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____Org;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		NullCheck(L_13);
		float L_14 = L_13->____t;
		V_0 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_8)), ((float)il2cpp_codegen_add(L_11, L_14))))));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_1;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Lnext;
		V_1 = L_16;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = ___0_f;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____anEdge;
		V_2 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_17) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_000e;
		}
	}
	{
		float L_21 = V_0;
		V_3 = L_21;
		goto IL_005d;
	}

IL_005d:
	{
		float L_22 = V_3;
		return L_22;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Init_m3BBE75E5B051EE36FEC84AB7A343878D8A31125E (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Reset_mA465348BA96A189842668A660718EA65A96F3F79 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		V_0 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		__this->____next = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = V_0;
		__this->____prev = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev), (void*)L_0);
		__this->____anEdge = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero;
		__this->____coords = L_1;
		__this->____s = (0.0f);
		__this->____t = (0.0f);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_2 = (PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043*)(&__this->____pqHandle);
		il2cpp_codegen_initobj(L_2, sizeof(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043));
		__this->____n = 0;
		__this->____data = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mF0524539C2A7708D255C415B73D6253EAF2CBF3C (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____anEdge;
		V_1 = L_0;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_1;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Lnext;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = __this->____anEdge;
		V_2 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_4) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_7 = V_0;
		V_3 = L_7;
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_8 = V_3;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Init_m03F7722EFAFCD37C885A8C161DD89CDFD2245847 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Reset_mCE1993AB18C22B85935F5CF6E60AD07A63D97B02 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	{
		V_0 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		__this->____next = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = V_0;
		__this->____prev = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev), (void*)L_0);
		__this->____anEdge = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		__this->____trail = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trail), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		__this->____n = 0;
		__this->____marked = (bool)0;
		__this->____inside = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face__ctor_mC2E2FBE2A1C7557E01D2324B38344BE5C0825E57 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled)
{
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke_back(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled)
{
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke_cleanup(EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled)
{
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com_back(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled)
{
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com_cleanup(EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1;
		L_1 = GenericVirtualFuncInvoker0< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var, L_0);
		V_0 = L_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_2 = ___0_pool;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3;
		L_3 = GenericVirtualFuncInvoker0< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var, L_2);
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_5 = (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E*)(&L_4->____pair);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		L_5->____e = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____e), (void*)L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_8 = (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E*)(&L_7->____pair);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		L_8->____eSym = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____eSym), (void*)L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_12 = L_11->____pair;
		NullCheck(L_10);
		L_10->____pair = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair))->____e), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair))->____eSym), (void*)NULL);
		#endif
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_14 = L_13->____pair;
		V_2 = L_14;
		goto IL_003c;
	}

IL_003c:
	{
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482 (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		V_0 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____eSym = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eSym), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = V_0;
		__this->____e = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____e), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482_AdjustorThunk (RuntimeObject* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method)
{
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E*>(__this + _offset);
	EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482(_thisAdjusted, ___0_pool, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____Lface;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_value, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Lface = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Lface), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____Org;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_value, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Org = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Org), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Lnext;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Oprev_m8546D649B9C09D86BCC5409860FF7C1B52B654DE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_value, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Lnext = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Lnext), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Onext;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Lprev_mD73100E86177F935996719708235E5EC89E68CBB (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_value, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Sym = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Dprev_mD7DD853008B25880C3033A655BD3E24587330CBE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Lnext;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dprev_m910CB7AD7C0830726F21D6B5A23DEAFDB8854067 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_value, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Sym = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rprev_m1210B35EEBF501A907DDEBFCE242289816D2C394 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_value, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Onext = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Onext), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(__this, NULL);
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dnext_mBCF18FEE0F52593B49287BE89CCF4046B267E048 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_value, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(__this, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Sym = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Rnext_mC55A8695BDDE88F2AE4DD7701208A4C3AF207698 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(__this, NULL);
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rnext_m5FDD1F90616E9DFF623FBDA9CDD7538DBEFB8253 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_value, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(__this, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Sym = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** ___0_e, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_0 = ___0_e;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = *((Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966**)L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_2 = ___0_e;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = *((Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966**)L_2);
		NullCheck(L_3);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_4 = (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E*)(&L_3->____pair);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eSym;
		V_0 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_1) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_7 = ___0_e;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_8 = ___0_e;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = *((Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966**)L_8);
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Sym;
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_10);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Init_mAA9EFDE3C5AC0F238629D2134D72F372337BA0B7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Reset_m5660C4D534CBBF59F2E32F423E56517E41042542 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_0 = (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E*)(&__this->____pair);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = ___0_pool;
		EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482(L_0, L_1, NULL);
		V_0 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____Lnext = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lnext), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2;
		V_0 = L_3;
		__this->____Onext = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Onext), (void*)L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4;
		V_0 = L_5;
		__this->____Sym = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Sym), (void*)L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		__this->____next = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next), (void*)L_6);
		__this->____Org = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Org), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		__this->____Lface = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lface), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		__this->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		__this->____winding = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m349424407337EC75E8156A48AFE20702CFF727DE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PQHandle__cctor_mD8C4AC80F990EA1FFB03A124B5370D10E39F9763 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid = ((int32_t)268435455);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_1 = L_0->____nodeUp;
		NullCheck(L_1);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_2 = L_1->____prev;
		NullCheck(L_2);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = L_2->____key;
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_1 = L_0->____nodeUp;
		NullCheck(L_1);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_2 = L_1->____next;
		NullCheck(L_2);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = L_2->____key;
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg1, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___1_reg2, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp;
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___1_reg2;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5;
		L_5 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_4, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = __this->____event;
		V_4 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_5) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_6))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_00c9;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = __this->____event;
		V_5 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_00a4;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = L_12->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_1;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____Org;
		bool L_16;
		L_16 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_13, L_15, NULL);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_1;
		NullCheck(L_18);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19;
		L_19 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_18, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		NullCheck(L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = L_22->____Org;
		float L_24;
		L_24 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_19, L_21, L_23, NULL);
		V_7 = (bool)((((int32_t)((!(((float)L_24) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013e;
	}

IL_007c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		NullCheck(L_25);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26;
		L_26 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_25, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_1;
		NullCheck(L_27);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = L_27->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_0;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = L_29->____Org;
		float L_31;
		L_31 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_26, L_28, L_30, NULL);
		V_7 = (bool)((((int32_t)((!(((float)L_31) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013e;
	}

IL_00a4:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33;
		L_33 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_32, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = __this->____event;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_1;
		NullCheck(L_35);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = L_35->____Org;
		float L_37;
		L_37 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_33, L_34, L_36, NULL);
		V_7 = (bool)((((int32_t)((!(((float)L_37) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013e;
	}

IL_00c9:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39;
		L_39 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_38, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = __this->____event;
		V_8 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_39) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_40))? 1 : 0);
		bool L_41 = V_8;
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_0;
		NullCheck(L_42);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43;
		L_43 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_42, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = __this->____event;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_0;
		NullCheck(L_45);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = L_45->____Org;
		float L_47;
		L_47 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_43, L_44, L_46, NULL);
		V_7 = (bool)((((int32_t)((!(((float)L_47) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013e;
	}

IL_0103:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		NullCheck(L_48);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49;
		L_49 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_48, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_50 = __this->____event;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_0;
		NullCheck(L_51);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = L_51->____Org;
		float L_53;
		L_53 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_49, L_50, L_52, NULL);
		V_2 = L_53;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_1;
		NullCheck(L_54);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55;
		L_55 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_54, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = __this->____event;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57 = V_1;
		NullCheck(L_57);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = L_57->____Org;
		float L_59;
		L_59 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_55, L_56, L_58, NULL);
		V_3 = L_59;
		float L_60 = V_2;
		float L_61 = V_3;
		V_7 = (bool)((((int32_t)((!(((float)L_60) >= ((float)L_61)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_013e;
	}

IL_013e:
	{
		bool L_62 = V_7;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		bool L_1 = L_0->____fixUpperEdge;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = ___0_reg;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____eUp;
		NullCheck(L_4);
		int32_t L_5 = L_4->____winding;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0021:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = ___0_reg;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____eUp;
		NullCheck(L_7);
		L_7->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_8 = __this->____dict;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___0_reg;
		NullCheck(L_9);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_10 = L_9->____nodeUp;
		NullCheck(L_8);
		Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9(L_8, L_10, Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9_RuntimeMethod_var);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_11 = __this->____pool;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = ___0_reg;
		NullCheck(L_11);
		GenericVirtualActionInvoker1< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var, L_11, L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_newEdge, const RuntimeMethod* method) 
{
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		bool L_1 = L_0->____fixUpperEdge;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F(L_1, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_2 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_3 = __this->____pool;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___0_reg;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp;
		NullCheck(L_2);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_2, L_3, L_5, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = ___0_reg;
		NullCheck(L_6);
		L_6->____fixUpperEdge = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = ___0_reg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = ___1_newEdge;
		NullCheck(L_7);
		L_7->____eUp = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____eUp), (void*)L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___1_newEdge;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = ___0_reg;
		NullCheck(L_9);
		L_9->____activeRegion = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____activeRegion), (void*)L_10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_4 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1->____Org;
		V_0 = L_2;
	}

IL_000d:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_3, NULL);
		___0_reg = L_4;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___0_reg;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____eUp;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		V_1 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_000d;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = ___0_reg;
		NullCheck(L_10);
		bool L_11 = L_10->____fixUpperEdge;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_13 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_14 = __this->____pool;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16;
		L_16 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_15, NULL);
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____eUp;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Sym;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_19 = ___0_reg;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = L_19->____eUp;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____Lnext;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22;
		L_22 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_13, L_14, L_18, L_21, NULL);
		V_3 = L_22;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = ___0_reg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_3;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_23, L_24, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26;
		L_26 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_25, NULL);
		___0_reg = L_26;
	}

IL_0076:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_27 = ___0_reg;
		V_4 = L_27;
		goto IL_007b;
	}

IL_007b:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = V_4;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	bool V_1 = false;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2;
		L_2 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_1, NULL);
		V_0 = L_2;
	}

IL_000d:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_3, NULL);
		___0_reg = L_4;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___0_reg;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____eUp;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		V_1 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_000d;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = ___0_reg;
		V_2 = L_10;
		goto IL_002e;
	}

IL_002e:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regAbove, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eNewUp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = __this->____pool;
		NullCheck(L_0);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___1_eNewUp;
		NullCheck(L_2);
		L_2->____eUp = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp), (void*)L_3);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_5 = __this->____dict;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = ___0_regAbove;
		NullCheck(L_6);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_7 = L_6->____nodeUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = V_0;
		NullCheck(L_5);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_9;
		L_9 = Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390(L_5, L_7, L_8, Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->____nodeUp = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____nodeUp), (void*)L_9);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = V_0;
		NullCheck(L_10);
		L_10->____fixUpperEdge = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = V_0;
		NullCheck(L_11);
		L_11->____sentinel = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = V_0;
		NullCheck(L_12);
		L_12->____dirty = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___1_eNewUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = V_0;
		NullCheck(L_13);
		L_13->____activeRegion = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____activeRegion), (void*)L_14);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = V_0;
		V_1 = L_15;
		goto IL_004c;
	}

IL_004c:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2;
		L_2 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->____windingNumber;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___0_reg;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp;
		NullCheck(L_5);
		int32_t L_6 = L_5->____winding;
		NullCheck(L_0);
		L_0->____windingNumber = ((int32_t)il2cpp_codegen_add(L_3, L_6));
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = ___0_reg;
		int32_t L_8 = __this->____windingRule;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___0_reg;
		NullCheck(L_9);
		int32_t L_10 = L_9->____windingNumber;
		bool L_11;
		L_11 = Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793(L_8, L_10, NULL);
		NullCheck(L_7);
		L_7->____inside = L_11;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____Lface;
		V_1 = L_3;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = V_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___0_reg;
		NullCheck(L_5);
		bool L_6 = L_5->____inside;
		NullCheck(L_4);
		L_4->____inside = L_6;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		NullCheck(L_7);
		L_7->____anEdge = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____anEdge), (void*)L_8);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___0_reg;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regFirst, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___1_regLast, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_8 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regFirst;
		V_0 = L_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1 = ___0_regFirst;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____eUp;
		V_1 = L_2;
		goto IL_00d6;
	}

IL_000f:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = V_0;
		NullCheck(L_3);
		L_3->____fixUpperEdge = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5;
		L_5 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_4, NULL);
		V_2 = L_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = V_2;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____eUp;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_3;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = L_10->____Org;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13 = V_2;
		NullCheck(L_13);
		bool L_14 = L_13->____fixUpperEdge;
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = V_0;
		Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787(__this, L_16, NULL);
		goto IL_00e6;
	}

IL_005b:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_17 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_18 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_1;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20;
		L_20 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_19, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_3;
		NullCheck(L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = L_21->____Sym;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23;
		L_23 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_17, L_18, L_20, L_22, NULL);
		V_3 = L_23;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_3;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_24, L_25, NULL);
	}

IL_0083:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_1;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_3;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_27) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_30 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_31 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_3;
		NullCheck(L_32);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33;
		L_33 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_32, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_3;
		NullCheck(L_30);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_30, L_31, L_33, L_34, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_35 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_36 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_3;
		NullCheck(L_35);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_35, L_36, L_37, L_38, NULL);
	}

IL_00c4:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_39 = V_0;
		Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787(__this, L_39, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_40 = V_2;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = L_40->____eUp;
		V_1 = L_41;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_42 = V_2;
		V_0 = L_42;
	}

IL_00d6:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_43 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_44 = ___1_regLast;
		V_7 = (bool)((((int32_t)((((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_43) == ((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_44))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_7;
		if (L_45)
		{
			goto IL_000f;
		}
	}

IL_00e6:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		V_8 = L_46;
		goto IL_00eb;
	}

IL_00eb:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_8;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eFirst, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eLast, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___3_eTopLeft, bool ___4_cleanUp, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B12_0 = 0;
	{
		V_0 = (bool)1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___1_eFirst;
		V_1 = L_0;
	}

IL_0005:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = V_1;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4;
		L_4 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_3, NULL);
		bool L_5;
		L_5 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_2, L_4, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F(L_5, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = ___0_regUp;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9;
		L_9 = Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D(__this, L_6, L_8, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Onext;
		V_1 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___2_eLast;
		V_5 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (L_14)
		{
			goto IL_0005;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___3_eTopLeft;
		V_6 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_15) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_17 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18;
		L_18 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_17, NULL);
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____eUp;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20;
		L_20 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_19, NULL);
		___3_eTopLeft = L_20;
	}

IL_0060:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_21 = ___0_regUp;
		V_2 = L_21;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = ___3_eTopLeft;
		V_4 = L_22;
		goto IL_0158;
	}

IL_006b:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = V_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24;
		L_24 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_23, NULL);
		V_3 = L_24;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = V_3;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____eUp;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Sym;
		V_1 = L_27;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_1;
		NullCheck(L_28);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = L_28->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_4;
		NullCheck(L_30);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = L_30->____Org;
		V_7 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_29) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_009d;
		}
	}
	{
		goto IL_0160;
	}

IL_009d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		NullCheck(L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = L_33->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_4;
		V_8 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_34) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_00e5;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_37 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_38 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_1;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40;
		L_40 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_39, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_1;
		NullCheck(L_37);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_37, L_38, L_40, L_41, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_42 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_43 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_4;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45;
		L_45 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_44, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		NullCheck(L_42);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_42, L_43, L_45, L_46, NULL);
	}

IL_00e5:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_47 = V_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = L_48->____windingNumber;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_1;
		NullCheck(L_50);
		int32_t L_51 = L_50->____winding;
		NullCheck(L_47);
		L_47->____windingNumber = ((int32_t)il2cpp_codegen_subtract(L_49, L_51));
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_52 = V_3;
		int32_t L_53 = __this->____windingRule;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_54 = V_3;
		NullCheck(L_54);
		int32_t L_55 = L_54->____windingNumber;
		bool L_56;
		L_56 = Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793(L_53, L_55, NULL);
		NullCheck(L_52);
		L_52->____inside = L_56;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_57 = V_2;
		NullCheck(L_57);
		L_57->____dirty = (bool)1;
		bool L_58 = V_0;
		if (L_58)
		{
			goto IL_0122;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_59 = V_2;
		bool L_60;
		L_60 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_59, NULL);
		G_B12_0 = ((int32_t)(L_60));
		goto IL_0123;
	}

IL_0122:
	{
		G_B12_0 = 0;
	}

IL_0123:
	{
		V_9 = (bool)G_B12_0;
		bool L_61 = V_9;
		if (!L_61)
		{
			goto IL_0150;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = V_4;
		Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B(L_62, L_63, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_64 = V_2;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_64, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_65 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_66 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_4;
		NullCheck(L_65);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_65, L_66, L_67, NULL);
	}

IL_0150:
	{
		V_0 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_68 = V_3;
		V_2 = L_68;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = V_1;
		V_4 = L_69;
	}

IL_0158:
	{
		V_10 = (bool)1;
		goto IL_006b;
	}

IL_0160:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_70 = V_2;
		NullCheck(L_70);
		L_70->____dirty = (bool)1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_71 = V_2;
		NullCheck(L_71);
		int32_t L_72 = L_71->____windingNumber;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_73 = V_1;
		NullCheck(L_73);
		int32_t L_74 = L_73->____winding;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = L_75->____windingNumber;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_72, L_74))) == ((int32_t)L_76))? 1 : 0), NULL);
		bool L_77 = ___4_cleanUp;
		V_11 = L_77;
		bool L_78 = V_11;
		if (!L_78)
		{
			goto IL_0194;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_79 = V_2;
		Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025(__this, L_79, NULL);
	}

IL_0194:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_e2, const RuntimeMethod* method) 
{
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___0_e1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___1_e2;
		NullCheck(L_0);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_isect, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_org, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_dst, float* ___3_w0, float* ___4_w1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___1_org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___0_isect;
		float L_2;
		L_2 = Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B(L_0, L_1, NULL);
		V_0 = L_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___2_dst;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___0_isect;
		float L_5;
		L_5 = Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B(L_3, L_4, NULL);
		V_1 = L_5;
		float* L_6 = ___3_w0;
		float L_7 = V_1;
		float L_8 = V_0;
		float L_9 = V_1;
		*((float*)L_6) = (float)((float)(((float)(L_7/((float)il2cpp_codegen_add(L_8, L_9))))/(2.0f)));
		float* L_10 = ___4_w1;
		float L_11 = V_0;
		float L_12 = V_0;
		float L_13 = V_1;
		*((float*)L_10) = (float)((float)(((float)(L_11/((float)il2cpp_codegen_add(L_12, L_13))))/(2.0f)));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___0_isect;
		NullCheck(L_14);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_15 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_14->____coords);
		float* L_16 = (float*)(&L_15->___X);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		float* L_19 = ___3_w0;
		float L_20 = *((float*)L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___1_org;
		NullCheck(L_21);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_22 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_21->____coords);
		float L_23 = L_22->___X;
		float* L_24 = ___4_w1;
		float L_25 = *((float*)L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___2_dst;
		NullCheck(L_26);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_27 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_26->____coords);
		float L_28 = L_27->___X;
		*((float*)L_17) = (float)((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_20, L_23)), ((float)il2cpp_codegen_multiply(L_25, L_28))))));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = ___0_isect;
		NullCheck(L_29);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_30 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_29->____coords);
		float* L_31 = (float*)(&L_30->___Y);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		float* L_34 = ___3_w0;
		float L_35 = *((float*)L_34);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = ___1_org;
		NullCheck(L_36);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_37 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_36->____coords);
		float L_38 = L_37->___Y;
		float* L_39 = ___4_w1;
		float L_40 = *((float*)L_39);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = ___2_dst;
		NullCheck(L_41);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_42 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_41->____coords);
		float L_43 = L_42->___Y;
		*((float*)L_32) = (float)((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_35, L_38)), ((float)il2cpp_codegen_multiply(L_40, L_43))))));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = ___0_isect;
		NullCheck(L_44);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_45 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_44->____coords);
		float* L_46 = (float*)(&L_45->___Z);
		float* L_47 = L_46;
		float L_48 = *((float*)L_47);
		float* L_49 = ___3_w0;
		float L_50 = *((float*)L_49);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = ___1_org;
		NullCheck(L_51);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_52 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_51->____coords);
		float L_53 = L_52->___Z;
		float* L_54 = ___4_w1;
		float L_55 = *((float*)L_54);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = ___2_dst;
		NullCheck(L_56);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_57 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_56->____coords);
		float L_58 = L_57->___Z;
		*((float*)L_47) = (float)((float)il2cpp_codegen_add(L_48, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_50, L_53)), ((float)il2cpp_codegen_multiply(L_55, L_58))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_isect, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_orgUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_dstUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___3_orgLo, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___4_dstLo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_isect;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero;
		NullCheck(L_0);
		L_0->____coords = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___0_isect;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___1_orgUp;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_dstUp;
		Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E(__this, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = ___0_isect;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___3_orgLo;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = ___4_dstLo;
		Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E(__this, L_5, L_6, L_7, (&V_2), (&V_3), NULL);
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_8 = __this->____combineCallback;
		V_4 = (bool)((!(((RuntimeObject*)(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0094;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___0_isect;
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_11 = __this->____combineCallback;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___0_isect;
		NullCheck(L_12);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_13 = L_12->____coords;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___1_orgUp;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->____data;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_15;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = ___2_dstUp;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->____data;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_18;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___3_orgLo;
		NullCheck(L_22);
		RuntimeObject* L_23 = L_22->____data;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_21;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___4_dstLo;
		NullCheck(L_25);
		RuntimeObject* L_26 = L_25->____data;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_26);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_27;
		float L_29 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_29);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = L_28;
		float L_31 = V_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_31);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_30;
		float L_33 = V_2;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_33);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = L_32;
		float L_35 = V_3;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_35);
		NullCheck(L_11);
		RuntimeObject* L_36;
		L_36 = CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_inline(L_11, L_13, L_24, L_34, NULL);
		NullCheck(L_10);
		L_10->____data = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____data), (void*)L_36);
	}

IL_0094:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___0_regUp;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org;
		bool L_10;
		L_10 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_7, L_9, NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_00ff;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_2;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_1;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_2;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = L_16->____Org;
		float L_18;
		L_18 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_13, L_15, L_17, NULL);
		V_4 = (bool)((((float)L_18) > ((float)(0.0f)))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_005d;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0179;
	}

IL_005d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		NullCheck(L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = L_22->____Org;
		bool L_24;
		L_24 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_21, L_23, NULL);
		V_6 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00be;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_26 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_27 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_2;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____Sym;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30;
		L_30 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_26, L_27, L_29, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_31 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_32 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_2;
		NullCheck(L_34);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35;
		L_35 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_34, NULL);
		NullCheck(L_31);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_31, L_32, L_33, L_35, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_36 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_37 = V_0;
		int32_t L_38 = 1;
		V_7 = (bool)L_38;
		NullCheck(L_37);
		L_37->____dirty = (bool)L_38;
		bool L_39 = V_7;
		NullCheck(L_36);
		L_36->____dirty = L_39;
		goto IL_00fc;
	}

IL_00be:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		NullCheck(L_40);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = L_40->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_2;
		NullCheck(L_42);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = L_42->____Org;
		V_8 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_41) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_43))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_00fc;
		}
	}
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_45 = __this->____pq;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		NullCheck(L_46);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = L_46->____Org;
		NullCheck(L_47);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_48 = L_47->____pqHandle;
		NullCheck(L_45);
		PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA(L_45, L_48, PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA_RuntimeMethod_var);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_2;
		NullCheck(L_49);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50;
		L_50 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_49, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_1;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_50, L_51, NULL);
	}

IL_00fc:
	{
		goto IL_0174;
	}

IL_00ff:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_1;
		NullCheck(L_52);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_53;
		L_53 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_52, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_2;
		NullCheck(L_54);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = L_54->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = V_1;
		NullCheck(L_56);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_57 = L_56->____Org;
		float L_58;
		L_58 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_53, L_55, L_57, NULL);
		V_9 = (bool)((((float)L_58) < ((float)(0.0f)))? 1 : 0);
		bool L_59 = V_9;
		if (!L_59)
		{
			goto IL_012a;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0179;
	}

IL_012a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_60 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_61;
		L_61 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_60, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_62 = ___0_regUp;
		int32_t L_63 = 1;
		V_7 = (bool)L_63;
		NullCheck(L_62);
		L_62->____dirty = (bool)L_63;
		bool L_64 = V_7;
		NullCheck(L_61);
		L_61->____dirty = L_64;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_65 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_66 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_1;
		NullCheck(L_67);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = L_67->____Sym;
		NullCheck(L_65);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69;
		L_69 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_65, L_66, L_68, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_70 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_71 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_72 = V_2;
		NullCheck(L_72);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_73;
		L_73 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_72, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_74 = V_1;
		NullCheck(L_70);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_70, L_71, L_73, L_74, NULL);
	}

IL_0174:
	{
		V_5 = (bool)1;
		goto IL_0179;
	}

IL_0179:
	{
		bool L_75 = V_5;
		return L_75;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_8 = NULL;
	bool V_9 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___0_regUp;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		bool L_10;
		L_10 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_7, L_9, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12;
		L_12 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_11, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14;
		L_14 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_13, NULL);
		bool L_15;
		L_15 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_12, L_14, NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00d5;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		NullCheck(L_17);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18;
		L_18 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_17, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_2;
		NullCheck(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20;
		L_20 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_19, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_1;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = L_21->____Org;
		float L_23;
		L_23 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_18, L_20, L_22, NULL);
		V_5 = (bool)((((float)L_23) < ((float)(0.0f)))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_0077;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_015c;
	}

IL_0077:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26;
		L_26 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_25, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_27 = ___0_regUp;
		int32_t L_28 = 1;
		V_7 = (bool)L_28;
		NullCheck(L_27);
		L_27->____dirty = (bool)L_28;
		bool L_29 = V_7;
		NullCheck(L_26);
		L_26->____dirty = L_29;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_30 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_31 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		NullCheck(L_30);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33;
		L_33 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_30, L_31, L_32, NULL);
		V_4 = L_33;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_34 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_35 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_2;
		NullCheck(L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = L_36->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_4;
		NullCheck(L_34);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_34, L_35, L_37, L_38, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_4;
		NullCheck(L_39);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_40 = L_39->____Lface;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_41 = ___0_regUp;
		NullCheck(L_41);
		bool L_42 = L_41->____inside;
		NullCheck(L_40);
		L_40->____inside = L_42;
		goto IL_0157;
	}

IL_00d5:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_2;
		NullCheck(L_43);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44;
		L_44 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_43, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_1;
		NullCheck(L_45);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46;
		L_46 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_45, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_2;
		NullCheck(L_47);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_48 = L_47->____Org;
		float L_49;
		L_49 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_44, L_46, L_48, NULL);
		V_9 = (bool)((((float)L_49) > ((float)(0.0f)))? 1 : 0);
		bool L_50 = V_9;
		if (!L_50)
		{
			goto IL_0100;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_015c;
	}

IL_0100:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_51 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_52 = V_0;
		int32_t L_53 = 1;
		V_7 = (bool)L_53;
		NullCheck(L_52);
		L_52->____dirty = (bool)L_53;
		bool L_54 = V_7;
		NullCheck(L_51);
		L_51->____dirty = L_54;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_55 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_56 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57 = V_2;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58;
		L_58 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_55, L_56, L_57, NULL);
		V_8 = L_58;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_59 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_60 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_1;
		NullCheck(L_61);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62 = L_61->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = V_2;
		NullCheck(L_63);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64 = L_63->____Sym;
		NullCheck(L_59);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_59, L_60, L_62, L_64, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65 = V_8;
		NullCheck(L_65);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_66;
		L_66 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_65, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_67 = ___0_regUp;
		NullCheck(L_67);
		bool L_68 = L_67->____inside;
		NullCheck(L_66);
		L_66->____inside = L_68;
	}

IL_0157:
	{
		V_6 = (bool)1;
		goto IL_015c;
	}

IL_015c:
	{
		bool L_69 = V_6;
		return L_69;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_6 = NULL;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_9 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* G_B22_0 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B36_0 = 0;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___0_regUp;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org;
		V_4 = L_9;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		V_5 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_2;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		V_6 = L_13;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_5;
		bool L_16;
		L_16 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_14, L_15, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = __this->____event;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = V_3;
		float L_20;
		L_20 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_17, L_18, L_19, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_20) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = __this->____event;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = V_4;
		float L_24;
		L_24 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_21, L_22, L_23, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_24) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = __this->____event;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_25) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_26)))
		{
			goto IL_009d;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = __this->____event;
		G_B3_0 = ((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_27) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B3_0 = 0;
	}

IL_009e:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_29 = ___0_regUp;
		NullCheck(L_29);
		bool L_30 = L_29->____fixUpperEdge;
		if (L_30)
		{
			goto IL_00b7;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_31 = V_0;
		NullCheck(L_31);
		bool L_32 = L_31->____fixUpperEdge;
		G_B6_0 = ((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		goto IL_00b8;
	}

IL_00b7:
	{
		G_B6_0 = 0;
	}

IL_00b8:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B6_0, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = V_4;
		V_11 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_33) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_34))? 1 : 0);
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_00d2;
		}
	}
	{
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_00d2:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = V_3;
		NullCheck(L_36);
		float L_37 = L_36->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = V_5;
		NullCheck(L_38);
		float L_39 = L_38->____t;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_40;
		L_40 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_37, L_39, NULL);
		V_7 = L_40;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = V_4;
		NullCheck(L_41);
		float L_42 = L_41->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_6;
		NullCheck(L_43);
		float L_44 = L_43->____t;
		float L_45;
		L_45 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_42, L_44, NULL);
		V_8 = L_45;
		float L_46 = V_7;
		float L_47 = V_8;
		V_13 = (bool)((((float)L_46) > ((float)L_47))? 1 : 0);
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0110;
		}
	}
	{
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_0110:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_50 = V_4;
		bool L_51;
		L_51 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_49, L_50, NULL);
		V_14 = L_51;
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_0142;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_53 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = V_4;
		float L_56;
		L_56 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_53, L_54, L_55, NULL);
		V_15 = (bool)((((float)L_56) > ((float)(0.0f)))? 1 : 0);
		bool L_57 = V_15;
		if (!L_57)
		{
			goto IL_013f;
		}
	}
	{
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_013f:
	{
		goto IL_0164;
	}

IL_0142:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_60 = V_3;
		float L_61;
		L_61 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_58, L_59, L_60, NULL);
		V_16 = (bool)((((float)L_61) < ((float)(0.0f)))? 1 : 0);
		bool L_62 = V_16;
		if (!L_62)
		{
			goto IL_0163;
		}
	}
	{
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_0163:
	{
	}

IL_0164:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_63 = __this->____pool;
		NullCheck(L_63);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_64;
		L_64 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_63);
		V_9 = L_64;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_65 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_68 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = V_9;
		Geom_EdgeIntersect_mEC7935EED47854721B3A81E27749CA3A7F4736D3(L_65, L_66, L_67, L_68, L_69, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70 = V_3;
		NullCheck(L_70);
		float L_71 = L_70->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = V_5;
		NullCheck(L_72);
		float L_73 = L_72->____t;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_74;
		L_74 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_71, L_73, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = V_9;
		NullCheck(L_75);
		float L_76 = L_75->____t;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_74) <= ((float)L_76)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = V_9;
		NullCheck(L_77);
		float L_78 = L_77->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_79 = V_4;
		NullCheck(L_79);
		float L_80 = L_79->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = V_6;
		NullCheck(L_81);
		float L_82 = L_81->____t;
		float L_83;
		L_83 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_80, L_82, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_78) <= ((float)L_83)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_84 = V_6;
		NullCheck(L_84);
		float L_85 = L_84->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = V_5;
		NullCheck(L_86);
		float L_87 = L_86->____s;
		float L_88;
		L_88 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_85, L_87, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_89 = V_9;
		NullCheck(L_89);
		float L_90 = L_89->____s;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_88) <= ((float)L_90)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_91 = V_9;
		NullCheck(L_91);
		float L_92 = L_91->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_93 = V_4;
		NullCheck(L_93);
		float L_94 = L_93->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_95 = V_3;
		NullCheck(L_95);
		float L_96 = L_95->____s;
		float L_97;
		L_97 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_94, L_96, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((!(((float)L_92) <= ((float)L_97)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_98 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_99 = __this->____event;
		bool L_100;
		L_100 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_98, L_99, NULL);
		V_17 = L_100;
		bool L_101 = V_17;
		if (!L_101)
		{
			goto IL_024b;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_102 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_103 = __this->____event;
		NullCheck(L_103);
		float L_104 = L_103->____s;
		NullCheck(L_102);
		L_102->____s = L_104;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_105 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_106 = __this->____event;
		NullCheck(L_106);
		float L_107 = L_106->____t;
		NullCheck(L_105);
		L_105->____t = L_107;
	}

IL_024b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_108 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_109 = V_4;
		bool L_110;
		L_110 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_108, L_109, NULL);
		if (L_110)
		{
			goto IL_0259;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_111 = V_4;
		G_B22_0 = L_111;
		goto IL_025a;
	}

IL_0259:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_112 = V_3;
		G_B22_0 = L_112;
	}

IL_025a:
	{
		V_10 = G_B22_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_113 = V_10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_114 = V_9;
		bool L_115;
		L_115 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_113, L_114, NULL);
		V_18 = L_115;
		bool L_116 = V_18;
		if (!L_116)
		{
			goto IL_0289;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_117 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_118 = V_10;
		NullCheck(L_118);
		float L_119 = L_118->____s;
		NullCheck(L_117);
		L_117->____s = L_119;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_120 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_121 = V_10;
		NullCheck(L_121);
		float L_122 = L_121->____t;
		NullCheck(L_120);
		L_120->____t = L_122;
	}

IL_0289:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_123 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_124 = V_3;
		bool L_125;
		L_125 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_123, L_124, NULL);
		if (L_125)
		{
			goto IL_029e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_126 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_127 = V_4;
		bool L_128;
		L_128 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_126, L_127, NULL);
		G_B27_0 = ((int32_t)(L_128));
		goto IL_029f;
	}

IL_029e:
	{
		G_B27_0 = 1;
	}

IL_029f:
	{
		V_19 = (bool)G_B27_0;
		bool L_129 = V_19;
		if (!L_129)
		{
			goto IL_02c4;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_130 = ___0_regUp;
		bool L_131;
		L_131 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_130, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_132 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_133 = V_9;
		NullCheck(L_132);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_132, L_133);
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_02c4:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_134 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_135 = __this->____event;
		bool L_136;
		L_136 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_134, L_135, NULL);
		if (L_136)
		{
			goto IL_02e9;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_137 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_138 = __this->____event;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_139 = V_9;
		float L_140;
		L_140 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_137, L_138, L_139, NULL);
		if ((((float)L_140) >= ((float)(0.0f))))
		{
			goto IL_0316;
		}
	}

IL_02e9:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_141 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_142 = __this->____event;
		bool L_143;
		L_143 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_141, L_142, NULL);
		if (L_143)
		{
			goto IL_0313;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_144 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_145 = __this->____event;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_146 = V_9;
		float L_147;
		L_147 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_144, L_145, L_146, NULL);
		G_B34_0 = ((((int32_t)((!(((float)L_147) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0314;
	}

IL_0313:
	{
		G_B34_0 = 0;
	}

IL_0314:
	{
		G_B36_0 = G_B34_0;
		goto IL_0317;
	}

IL_0316:
	{
		G_B36_0 = 1;
	}

IL_0317:
	{
		V_20 = (bool)G_B36_0;
		bool L_148 = V_20;
		if (!L_148)
		{
			goto IL_0563;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_149 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_150 = __this->____event;
		V_21 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_149) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_150))? 1 : 0);
		bool L_151 = V_21;
		if (!L_151)
		{
			goto IL_03af;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_152 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_153 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_154 = V_1;
		NullCheck(L_154);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_155 = L_154->____Sym;
		NullCheck(L_152);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_156;
		L_156 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_152, L_153, L_155, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_157 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_158 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_159 = V_2;
		NullCheck(L_159);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_160 = L_159->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_161 = V_1;
		NullCheck(L_157);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_157, L_158, L_160, L_161, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_162 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_163;
		L_163 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_162, NULL);
		___0_regUp = L_163;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_164 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_165;
		L_165 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_164, NULL);
		NullCheck(L_165);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_166 = L_165->____eUp;
		V_1 = L_166;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_167 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_168;
		L_168 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_167, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_169 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_170;
		L_170 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_168, L_169, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_171 = ___0_regUp;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_172 = V_1;
		NullCheck(L_172);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_173;
		L_173 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_172, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_174 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_175 = V_1;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_171, L_173, L_174, L_175, (bool)1, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_176 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_177 = V_9;
		NullCheck(L_176);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_176, L_177);
		V_12 = (bool)1;
		goto IL_0662;
	}

IL_03af:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_178 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_179 = __this->____event;
		V_22 = (bool)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_178) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_179))? 1 : 0);
		bool L_180 = V_22;
		if (!L_180)
		{
			goto IL_0459;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_181 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_182 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_183 = V_2;
		NullCheck(L_183);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_184 = L_183->____Sym;
		NullCheck(L_181);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_185;
		L_185 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_181, L_182, L_184, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_186 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_187 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_188 = V_1;
		NullCheck(L_188);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_189 = L_188->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_190 = V_2;
		NullCheck(L_190);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_191;
		L_191 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_190, NULL);
		NullCheck(L_186);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_186, L_187, L_189, L_191, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_192 = ___0_regUp;
		V_0 = L_192;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_193 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_194;
		L_194 = Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7(__this, L_193, NULL);
		___0_regUp = L_194;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_195 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_196;
		L_196 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_195, NULL);
		NullCheck(L_196);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_197 = L_196->____eUp;
		NullCheck(L_197);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_198;
		L_198 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_197, NULL);
		V_23 = L_198;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_199 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_200 = V_2;
		NullCheck(L_200);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_201;
		L_201 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_200, NULL);
		NullCheck(L_199);
		L_199->____eUp = L_201;
		Il2CppCodeGenWriteBarrier((void**)(&L_199->____eUp), (void*)L_201);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_202 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_203;
		L_203 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_202, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		V_2 = L_203;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_204 = ___0_regUp;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_205 = V_2;
		NullCheck(L_205);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_206 = L_205->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_207 = V_1;
		NullCheck(L_207);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_208;
		L_208 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_207, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_209 = V_23;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_204, L_206, L_208, L_209, (bool)1, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_210 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_211 = V_9;
		NullCheck(L_210);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_210, L_211);
		V_12 = (bool)1;
		goto IL_0662;
	}

IL_0459:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_212 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_213 = __this->____event;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_214 = V_9;
		float L_215;
		L_215 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_212, L_213, L_214, NULL);
		V_24 = (bool)((((int32_t)((!(((float)L_215) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_216 = V_24;
		if (!L_216)
		{
			goto IL_04d6;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_217 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_218;
		L_218 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_217, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_219 = ___0_regUp;
		int32_t L_220 = 1;
		V_25 = (bool)L_220;
		NullCheck(L_219);
		L_219->____dirty = (bool)L_220;
		bool L_221 = V_25;
		NullCheck(L_218);
		L_218->____dirty = L_221;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_222 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_223 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_224 = V_1;
		NullCheck(L_224);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_225 = L_224->____Sym;
		NullCheck(L_222);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_226;
		L_226 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_222, L_223, L_225, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_227 = V_1;
		NullCheck(L_227);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_228 = L_227->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_229 = __this->____event;
		NullCheck(L_229);
		float L_230 = L_229->____s;
		NullCheck(L_228);
		L_228->____s = L_230;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_231 = V_1;
		NullCheck(L_231);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_232 = L_231->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_233 = __this->____event;
		NullCheck(L_233);
		float L_234 = L_233->____t;
		NullCheck(L_232);
		L_232->____t = L_234;
	}

IL_04d6:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_235 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_236 = __this->____event;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_237 = V_9;
		float L_238;
		L_238 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_235, L_236, L_237, NULL);
		V_26 = (bool)((((int32_t)((!(((float)L_238) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_239 = V_26;
		if (!L_239)
		{
			goto IL_054d;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_240 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_241 = V_0;
		int32_t L_242 = 1;
		V_25 = (bool)L_242;
		NullCheck(L_241);
		L_241->____dirty = (bool)L_242;
		bool L_243 = V_25;
		NullCheck(L_240);
		L_240->____dirty = L_243;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_244 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_245 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_246 = V_2;
		NullCheck(L_246);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_247 = L_246->____Sym;
		NullCheck(L_244);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_248;
		L_248 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_244, L_245, L_247, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_249 = V_2;
		NullCheck(L_249);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_250 = L_249->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_251 = __this->____event;
		NullCheck(L_251);
		float L_252 = L_251->____s;
		NullCheck(L_250);
		L_250->____s = L_252;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_253 = V_2;
		NullCheck(L_253);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_254 = L_253->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_255 = __this->____event;
		NullCheck(L_255);
		float L_256 = L_255->____t;
		NullCheck(L_254);
		L_254->____t = L_256;
	}

IL_054d:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_257 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_258 = V_9;
		NullCheck(L_257);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_257, L_258);
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_0563:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_259 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_260 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_261 = V_1;
		NullCheck(L_261);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_262 = L_261->____Sym;
		NullCheck(L_259);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_263;
		L_263 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_259, L_260, L_262, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_264 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_265 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_266 = V_2;
		NullCheck(L_266);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_267 = L_266->____Sym;
		NullCheck(L_264);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_268;
		L_268 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_264, L_265, L_267, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_269 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_270 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_271 = V_2;
		NullCheck(L_271);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_272;
		L_272 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_271, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_273 = V_1;
		NullCheck(L_269);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_269, L_270, L_272, L_273, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_274 = V_1;
		NullCheck(L_274);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_275 = L_274->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_276 = V_9;
		NullCheck(L_276);
		float L_277 = L_276->____s;
		NullCheck(L_275);
		L_275->____s = L_277;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_278 = V_1;
		NullCheck(L_278);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_279 = L_278->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_280 = V_9;
		NullCheck(L_280);
		float L_281 = L_280->____t;
		NullCheck(L_279);
		L_279->____t = L_281;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_282 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_283 = V_9;
		NullCheck(L_282);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_282, L_283);
		V_9 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_284 = V_1;
		NullCheck(L_284);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_285 = L_284->____Org;
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_286 = __this->____pq;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_287 = V_1;
		NullCheck(L_287);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_288 = L_287->____Org;
		NullCheck(L_286);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_289;
		L_289 = PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA(L_286, L_288, PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		NullCheck(L_285);
		L_285->____pqHandle = L_289;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_290 = V_1;
		NullCheck(L_290);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_291 = L_290->____Org;
		NullCheck(L_291);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_292 = (PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043*)(&L_291->____pqHandle);
		int32_t L_293 = L_292->____handle;
		il2cpp_codegen_runtime_class_init_inline(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		int32_t L_294 = ((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid;
		V_27 = (bool)((((int32_t)L_293) == ((int32_t)L_294))? 1 : 0);
		bool L_295 = V_27;
		if (!L_295)
		{
			goto IL_0626;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_296 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_296, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_296, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299_RuntimeMethod_var)));
	}

IL_0626:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_297 = V_1;
		NullCheck(L_297);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_298 = L_297->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_299 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_300 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_301 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_302 = V_6;
		Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE(__this, L_298, L_299, L_300, L_301, L_302, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_303 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_304;
		L_304 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_303, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_305 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_306 = V_0;
		int32_t L_307 = 1;
		V_25 = (bool)L_307;
		NullCheck(L_306);
		L_306->____dirty = (bool)L_307;
		bool L_308 = V_25;
		bool L_309 = L_308;
		V_25 = L_309;
		NullCheck(L_305);
		L_305->____dirty = L_309;
		bool L_310 = V_25;
		NullCheck(L_304);
		L_304->____dirty = L_310;
		V_12 = (bool)0;
		goto IL_0662;
	}

IL_0662:
	{
		bool L_311 = V_12;
		return L_311;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B37_0 = 0;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_01e3;
	}

IL_000e:
	{
		goto IL_001e;
	}

IL_0011:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		___0_regUp = L_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_3, NULL);
		V_0 = L_4;
	}

IL_001e:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____dirty;
		V_3 = L_6;
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_0011;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = ___0_regUp;
		NullCheck(L_8);
		bool L_9 = L_8->____dirty;
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = ___0_regUp;
		V_0 = L_11;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13;
		L_13 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_12, NULL);
		___0_regUp = L_13;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = ___0_regUp;
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = ___0_regUp;
		NullCheck(L_15);
		bool L_16 = L_15->____dirty;
		G_B8_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B8_0 = 1;
	}

IL_0052:
	{
		V_5 = (bool)G_B8_0;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_005e;
		}
	}
	{
		goto IL_01eb;
	}

IL_005e:
	{
	}

IL_005f:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = ___0_regUp;
		NullCheck(L_18);
		L_18->____dirty = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_19 = ___0_regUp;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = L_19->____eUp;
		V_1 = L_20;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_21 = V_0;
		NullCheck(L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = L_21->____eUp;
		V_2 = L_22;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		NullCheck(L_23);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24;
		L_24 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_23, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_2;
		NullCheck(L_25);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26;
		L_26 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_25, NULL);
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_24) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_26))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_0112;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = ___0_regUp;
		bool L_29;
		L_29 = Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2(__this, L_28, NULL);
		V_7 = L_29;
		bool L_30 = V_7;
		if (!L_30)
		{
			goto IL_0111;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_31 = V_0;
		NullCheck(L_31);
		bool L_32 = L_31->____fixUpperEdge;
		V_8 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00d7;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_34 = V_0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_34, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_35 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_36 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_2;
		NullCheck(L_35);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_35, L_36, L_37, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_38 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_39;
		L_39 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_38, NULL);
		V_0 = L_39;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_40 = V_0;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = L_40->____eUp;
		V_2 = L_41;
		goto IL_0110;
	}

IL_00d7:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_42 = ___0_regUp;
		NullCheck(L_42);
		bool L_43 = L_42->____fixUpperEdge;
		V_9 = L_43;
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_0110;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_45 = ___0_regUp;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_45, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_46 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_47 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_1;
		NullCheck(L_46);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_46, L_47, L_48, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_49 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_50;
		L_50 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_49, NULL);
		___0_regUp = L_50;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_51 = ___0_regUp;
		NullCheck(L_51);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = L_51->____eUp;
		V_1 = L_52;
	}

IL_0110:
	{
	}

IL_0111:
	{
	}

IL_0112:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_1;
		NullCheck(L_53);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = L_53->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_2;
		NullCheck(L_55);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = L_55->____Org;
		V_10 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_54) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_56))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_57 = V_10;
		if (!L_57)
		{
			goto IL_018f;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58 = V_1;
		NullCheck(L_58);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59;
		L_59 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_58, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60 = V_2;
		NullCheck(L_60);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_61;
		L_61 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_60, NULL);
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_59) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_61)))
		{
			goto IL_0169;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_62 = ___0_regUp;
		NullCheck(L_62);
		bool L_63 = L_62->____fixUpperEdge;
		if (L_63)
		{
			goto IL_0169;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_64 = V_0;
		NullCheck(L_64);
		bool L_65 = L_64->____fixUpperEdge;
		if (L_65)
		{
			goto IL_0169;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66 = V_1;
		NullCheck(L_66);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67;
		L_67 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_66, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_68 = __this->____event;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_67) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_68)))
		{
			goto IL_0166;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = V_2;
		NullCheck(L_69);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70;
		L_70 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_69, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = __this->____event;
		G_B26_0 = ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_70) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_71))? 1 : 0);
		goto IL_0167;
	}

IL_0166:
	{
		G_B26_0 = 1;
	}

IL_0167:
	{
		G_B28_0 = G_B26_0;
		goto IL_016a;
	}

IL_0169:
	{
		G_B28_0 = 0;
	}

IL_016a:
	{
		V_11 = (bool)G_B28_0;
		bool L_72 = V_11;
		if (!L_72)
		{
			goto IL_0184;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_73 = ___0_regUp;
		bool L_74;
		L_74 = Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299(__this, L_73, NULL);
		V_12 = L_74;
		bool L_75 = V_12;
		if (!L_75)
		{
			goto IL_0181;
		}
	}
	{
		goto IL_01eb;
	}

IL_0181:
	{
		goto IL_018e;
	}

IL_0184:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_76 = ___0_regUp;
		bool L_77;
		L_77 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_76, NULL);
	}

IL_018e:
	{
	}

IL_018f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_78 = V_1;
		NullCheck(L_78);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_79 = L_78->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_80 = V_2;
		NullCheck(L_80);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = L_80->____Org;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_79) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_81))))
		{
			goto IL_01ad;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_82 = V_1;
		NullCheck(L_82);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83;
		L_83 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_82, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_84 = V_2;
		NullCheck(L_84);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_85;
		L_85 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_84, NULL);
		G_B37_0 = ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_83) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_85))? 1 : 0);
		goto IL_01ae;
	}

IL_01ad:
	{
		G_B37_0 = 0;
	}

IL_01ae:
	{
		V_13 = (bool)G_B37_0;
		bool L_86 = V_13;
		if (!L_86)
		{
			goto IL_01e2;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_87 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_88 = V_1;
		Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B(L_87, L_88, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_89 = ___0_regUp;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_89, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_90 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_91 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_92 = V_1;
		NullCheck(L_90);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_90, L_91, L_92, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_93 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_94;
		L_94 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_93, NULL);
		___0_regUp = L_94;
	}

IL_01e2:
	{
	}

IL_01e3:
	{
		V_14 = (bool)1;
		goto IL_000e;
	}

IL_01eb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eBottomLeft, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	bool V_4 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___1_eBottomLeft;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext;
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3;
		L_3 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_2, NULL);
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___0_regUp;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp;
		V_2 = L_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = V_1;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____eUp;
		V_3 = L_7;
		V_4 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_3;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13 = ___0_regUp;
		bool L_14;
		L_14 = Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299(__this, L_13, NULL);
	}

IL_0042:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_2;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = __this->____event;
		bool L_18;
		L_18 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_16, L_17, NULL);
		V_7 = L_18;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_009c;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_20 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_21 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_0;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23;
		L_23 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_22, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_2;
		NullCheck(L_20);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_20, L_21, L_23, L_24, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26;
		L_26 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_25, NULL);
		___0_regUp = L_26;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_27 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28;
		L_28 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_27, NULL);
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____eUp;
		V_0 = L_29;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_30 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_31;
		L_31 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_30, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_32 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33;
		L_33 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_31, L_32, NULL);
		V_4 = (bool)1;
	}

IL_009c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_3;
		NullCheck(L_34);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = L_34->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = __this->____event;
		bool L_37;
		L_37 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_35, L_36, NULL);
		V_8 = L_37;
		bool L_38 = V_8;
		if (!L_38)
		{
			goto IL_00db;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_39 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_40 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = ___1_eBottomLeft;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_3;
		NullCheck(L_42);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43;
		L_43 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_42, NULL);
		NullCheck(L_39);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_39, L_40, L_41, L_43, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_44 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45;
		L_45 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_44, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		___1_eBottomLeft = L_45;
		V_4 = (bool)1;
	}

IL_00db:
	{
		bool L_46 = V_4;
		V_9 = L_46;
		bool L_47 = V_9;
		if (!L_47)
		{
			goto IL_00f7;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_48 = ___0_regUp;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = ___1_eBottomLeft;
		NullCheck(L_49);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = L_49->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_0;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_48, L_50, L_51, L_52, (bool)1, NULL);
		goto IL_016d;
	}

IL_00f7:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_3;
		NullCheck(L_53);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = L_53->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_2;
		NullCheck(L_55);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = L_55->____Org;
		bool L_57;
		L_57 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_54, L_56, NULL);
		V_10 = L_57;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_011a;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_3;
		NullCheck(L_59);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60;
		L_60 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_59, NULL);
		V_5 = L_60;
		goto IL_011f;
	}

IL_011a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_2;
		V_5 = L_61;
	}

IL_011f:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_62 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_63 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64 = ___1_eBottomLeft;
		NullCheck(L_64);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65;
		L_65 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_64, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66 = V_5;
		NullCheck(L_62);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67;
		L_67 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_62, L_63, L_65, L_66, NULL);
		V_5 = L_67;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_68 = ___0_regUp;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = V_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = V_5;
		NullCheck(L_70);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_71 = L_70->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_72 = V_5;
		NullCheck(L_72);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_73 = L_72->____Onext;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_68, L_69, L_71, L_73, (bool)0, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_74 = V_5;
		NullCheck(L_74);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_75 = L_74->____Sym;
		NullCheck(L_75);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_76 = L_75->____activeRegion;
		NullCheck(L_76);
		L_76->____fixUpperEdge = (bool)1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_77 = ___0_regUp;
		Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025(__this, L_77, NULL);
	}

IL_016d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_vEvent, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regUp;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___1_vEvent;
		bool L_5;
		L_5 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_3, L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var)));
	}

IL_0024:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___1_vEvent;
		bool L_11;
		L_11 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_9, L_10, NULL);
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_009e;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_13 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_14 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Sym;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17;
		L_17 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_13, L_14, L_16, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = ___0_regUp;
		NullCheck(L_18);
		bool L_19 = L_18->____fixUpperEdge;
		V_3 = L_19;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_007b;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_21 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_22 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_0;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = L_23->____Onext;
		NullCheck(L_21);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_21, L_22, L_24, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___0_regUp;
		NullCheck(L_25);
		L_25->____fixUpperEdge = (bool)0;
	}

IL_007b:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_26 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_27 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = ___1_vEvent;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____anEdge;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_0;
		NullCheck(L_26);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_26, L_27, L_29, L_30, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = ___1_vEvent;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_31, NULL);
		goto IL_00a9;
	}

IL_009e:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_32 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var)));
	}

IL_00a9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_vEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* G_B7_0 = NULL;
	int32_t G_B10_0 = 0;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = __this->____pool;
		NullCheck(L_0);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___0_vEvent;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____anEdge;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym;
		NullCheck(L_2);
		L_2->____eUp = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp), (void*)L_5);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_6 = __this->____dict;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = V_0;
		NullCheck(L_6);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_8;
		L_8 = Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4(L_6, L_7, Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4_RuntimeMethod_var);
		NullCheck(L_8);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9;
		L_9 = Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D(L_8, Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		V_1 = L_9;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_10 = __this->____pool;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = V_0;
		NullCheck(L_10);
		GenericVirtualActionInvoker1< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var, L_10, L_11);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = V_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13;
		L_13 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_12, NULL);
		V_2 = L_13;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = V_2;
		V_6 = (bool)((((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0055;
		}
	}
	{
		goto IL_0173;
	}

IL_0055:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = V_1;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____eUp;
		V_3 = L_17;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = V_2;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____eUp;
		V_4 = L_19;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_3;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21;
		L_21 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_20, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___0_vEvent;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_3;
		NullCheck(L_23);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = L_23->____Org;
		float L_25;
		L_25 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_21, L_22, L_24, NULL);
		V_7 = (bool)((((float)L_25) == ((float)(0.0f)))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_0092;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_27 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = ___0_vEvent;
		Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44(__this, L_27, L_28, NULL);
		goto IL_0173;
	}

IL_0092:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_4;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30;
		L_30 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_29, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_3;
		NullCheck(L_31);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_32;
		L_32 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_31, NULL);
		bool L_33;
		L_33 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_30, L_32, NULL);
		if (L_33)
		{
			goto IL_00a9;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_34 = V_2;
		G_B7_0 = L_34;
		goto IL_00aa;
	}

IL_00a9:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_35 = V_1;
		G_B7_0 = L_35;
	}

IL_00aa:
	{
		V_5 = G_B7_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_36 = V_1;
		NullCheck(L_36);
		bool L_37 = L_36->____inside;
		if (L_37)
		{
			goto IL_00bd;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_38 = V_5;
		NullCheck(L_38);
		bool L_39 = L_38->____fixUpperEdge;
		G_B10_0 = ((int32_t)(L_39));
		goto IL_00be;
	}

IL_00bd:
	{
		G_B10_0 = 1;
	}

IL_00be:
	{
		V_8 = (bool)G_B10_0;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_015b;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_41 = V_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_42 = V_1;
		V_10 = (bool)((((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_41) == ((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_42))? 1 : 0);
		bool L_43 = V_10;
		if (!L_43)
		{
			goto IL_00fb;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_44 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_45 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = ___0_vEvent;
		NullCheck(L_46);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = L_46->____anEdge;
		NullCheck(L_47);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = L_47->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_3;
		NullCheck(L_49);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = L_49->____Lnext;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51;
		L_51 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_44, L_45, L_48, L_50, NULL);
		V_9 = L_51;
		goto IL_0122;
	}

IL_00fb:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_52 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_53 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_4;
		NullCheck(L_54);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55;
		L_55 = Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7(L_54, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = ___0_vEvent;
		NullCheck(L_56);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57 = L_56->____anEdge;
		NullCheck(L_52);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58;
		L_58 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_52, L_53, L_55, L_57, NULL);
		NullCheck(L_58);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = L_58->____Sym;
		V_9 = L_59;
	}

IL_0122:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_60 = V_5;
		NullCheck(L_60);
		bool L_61 = L_60->____fixUpperEdge;
		V_11 = L_61;
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_013e;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_63 = V_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64 = V_9;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_63, L_64, NULL);
		goto IL_0150;
	}

IL_013e:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_65 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66 = V_9;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_67;
		L_67 = Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D(__this, L_65, L_66, NULL);
		Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50(__this, L_67, NULL);
	}

IL_0150:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_68 = ___0_vEvent;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_68, NULL);
		goto IL_0173;
	}

IL_015b:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_69 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70 = ___0_vEvent;
		NullCheck(L_70);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_71 = L_70->____anEdge;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = ___0_vEvent;
		NullCheck(L_72);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_73 = L_72->____anEdge;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_69, L_71, L_73, (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL, (bool)1, NULL);
	}

IL_0173:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_vEvent, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_vEvent;
		__this->____event = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event), (void*)L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___0_vEvent;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____anEdge;
		V_0 = L_2;
		goto IL_0034;
	}

IL_0011:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Onext;
		V_0 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___0_vEvent;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____anEdge;
		V_5 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___0_vEvent;
		Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B(__this, L_9, NULL);
		goto IL_009b;
	}

IL_0033:
	{
	}

IL_0034:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_0;
		NullCheck(L_10);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = L_10->____activeRegion;
		V_6 = (bool)((((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_6;
		if (L_12)
		{
			goto IL_0011;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = L_13->____activeRegion;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15;
		L_15 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_14, NULL);
		V_1 = L_15;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = V_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_17;
		L_17 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_16, NULL);
		V_2 = L_17;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = V_2;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____eUp;
		V_3 = L_19;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_20 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21;
		L_21 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_20, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		V_4 = L_21;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_4;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = L_22->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_3;
		V_7 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_23) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_0087;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_4;
		Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6(__this, L_26, L_27, NULL);
		goto IL_009b;
	}

IL_0087:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_4;
		NullCheck(L_29);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = L_29->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_3;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_28, L_30, L_31, L_32, (bool)1, NULL);
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, float ___0_smin, float ___1_smax, float ___2_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = L_3->____Org;
		float L_5 = ___1_smax;
		NullCheck(L_4);
		L_4->____s = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org;
		float L_8 = ___2_t;
		NullCheck(L_7);
		L_7->____t = L_8;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_0;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10;
		L_10 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_9, NULL);
		float L_11 = ___0_smin;
		NullCheck(L_10);
		L_10->____s = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		float L_14 = ___2_t;
		NullCheck(L_13);
		L_13->____t = L_14;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16;
		L_16 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_15, NULL);
		__this->____event = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event), (void*)L_16);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_17 = __this->____pool;
		NullCheck(L_17);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18;
		L_18 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_17);
		V_1 = L_18;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_19 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_19);
		L_19->____eUp = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____eUp), (void*)L_20);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_21 = V_1;
		NullCheck(L_21);
		L_21->____windingNumber = 0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_22 = V_1;
		NullCheck(L_22);
		L_22->____inside = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = V_1;
		NullCheck(L_23);
		L_23->____fixUpperEdge = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24 = V_1;
		NullCheck(L_24);
		L_24->____sentinel = (bool)1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = V_1;
		NullCheck(L_25);
		L_25->____dirty = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26 = V_1;
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_27 = __this->____dict;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = V_1;
		NullCheck(L_27);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_29;
		L_29 = Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615(L_27, L_28, Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var);
		NullCheck(L_26);
		L_26->____nodeUp = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____nodeUp), (void*)L_29);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* L_0 = (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*)il2cpp_codegen_object_new(LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var);
		LessOrEqual__ctor_m6556B77F3E07A00B7AFD15AD07B0EF86306BFF0C(L_0, __this, (intptr_t)((void*)Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var), NULL);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_1 = (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*)il2cpp_codegen_object_new(Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var);
		Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7(L_1, L_0, Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7_RuntimeMethod_var);
		__this->____dict = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict), (void*)L_1);
		float L_2 = __this->___SentinelCoord;
		float L_3 = __this->___SentinelCoord;
		float L_4 = __this->___SentinelCoord;
		Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3(__this, ((-L_2)), L_3, ((-L_4)), NULL);
		float L_5 = __this->___SentinelCoord;
		float L_6 = __this->___SentinelCoord;
		float L_7 = __this->___SentinelCoord;
		Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3(__this, ((-L_5)), L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0005:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = V_1;
		NullCheck(L_0);
		bool L_1 = L_0->____sentinel;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = L_3->____fixUpperEdge;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F(L_4, NULL);
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		V_0 = L_6;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0), NULL);
	}

IL_002f:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->____windingNumber;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = V_1;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_9, NULL);
	}

IL_0047:
	{
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_10 = __this->____dict;
		NullCheck(L_10);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_11;
		L_11 = Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84(L_10, Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84_RuntimeMethod_var);
		NullCheck(L_11);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12;
		L_12 = Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D(L_11, Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13 = L_12;
		V_1 = L_13;
		V_3 = (bool)((!(((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0005;
		}
	}
	{
		__this->____dict = (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict), (void*)(Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eHead;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____next;
		V_1 = L_3;
		goto IL_0103;
	}

IL_0019:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_1;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____next;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Lnext;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		bool L_12;
		L_12 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_004e;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_1;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = L_13->____Lnext;
		NullCheck(L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = L_14->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		G_B4_0 = ((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_15) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004f;
	}

IL_004e:
	{
		G_B4_0 = 0;
	}

IL_004f:
	{
		V_4 = (bool)G_B4_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_1;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_18, L_19, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_20 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_21 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		NullCheck(L_20);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_20, L_21, L_22, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_3;
		V_1 = L_23;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		NullCheck(L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = L_24->____Lnext;
		V_3 = L_25;
	}

IL_007c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_3;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_1;
		V_5 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_27) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_28))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_0100;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_1;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_30) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00cd;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_2;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_33) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_34)))
		{
			goto IL_00a9;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_2;
		NullCheck(L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = L_36->____Sym;
		G_B11_0 = ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_35) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_37))? 1 : 0);
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B11_0 = 1;
	}

IL_00aa:
	{
		V_7 = (bool)G_B11_0;
		bool L_38 = V_7;
		if (!L_38)
		{
			goto IL_00b9;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_2;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = L_39->____next;
		V_2 = L_40;
	}

IL_00b9:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_41 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_42 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_3;
		NullCheck(L_41);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_41, L_42, L_43, NULL);
	}

IL_00cd:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_2;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_44) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_45)))
		{
			goto IL_00dc;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_2;
		NullCheck(L_47);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = L_47->____Sym;
		G_B17_0 = ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_46) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_48))? 1 : 0);
		goto IL_00dd;
	}

IL_00dc:
	{
		G_B17_0 = 1;
	}

IL_00dd:
	{
		V_8 = (bool)G_B17_0;
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_00ec;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_2;
		NullCheck(L_50);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = L_50->____next;
		V_2 = L_51;
	}

IL_00ec:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_52 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_53 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_1;
		NullCheck(L_52);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_52, L_53, L_54, NULL);
	}

IL_0100:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_2;
		V_1 = L_55;
	}

IL_0103:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57 = V_0;
		V_9 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_56) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_57))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_9;
		if (L_58)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____vHead;
		V_0 = L_1;
		V_2 = 0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____next;
		V_1 = L_3;
		goto IL_0025;
	}

IL_0018:
	{
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_1;
		NullCheck(L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = L_5->____next;
		V_1 = L_6;
	}

IL_0025:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 8));
		int32_t L_11 = V_2;
		LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* L_12 = (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*)il2cpp_codegen_object_new(LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var);
		LessOrEqual__ctor_m354C7C326099DA31A5715796F9CCA76DE5067731(L_12, NULL, (intptr_t)((void*)Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819_RuntimeMethod_var), NULL);
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_13 = (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*)il2cpp_codegen_object_new(PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var);
		PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF(L_13, L_11, L_12, PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var);
		__this->____pq = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pq), (void*)L_13);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_14 = __this->____mesh;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____vHead;
		V_0 = L_15;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_0;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = L_16->____next;
		V_1 = L_17;
		goto IL_00a0;
	}

IL_0061:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_1;
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_19 = __this->____pq;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = V_1;
		NullCheck(L_19);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_21;
		L_21 = PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA(L_19, L_20, PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		NullCheck(L_18);
		L_18->____pqHandle = L_21;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_1;
		NullCheck(L_22);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_23 = (PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043*)(&L_22->____pqHandle);
		int32_t L_24 = L_23->____handle;
		il2cpp_codegen_runtime_class_init_inline(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		int32_t L_25 = ((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid;
		V_4 = (bool)((((int32_t)L_24) == ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_4;
		if (!L_26)
		{
			goto IL_0098;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_27 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA_RuntimeMethod_var)));
	}

IL_0098:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = V_1;
		NullCheck(L_28);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = L_28->____next;
		V_1 = L_29;
	}

IL_00a0:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = V_0;
		V_5 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_30) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_5;
		if (L_32)
		{
			goto IL_0061;
		}
	}
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_33 = __this->____pq;
		NullCheck(L_33);
		PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF(L_33, PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	{
		__this->____pq = (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pq), (void*)(PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_006c;
	}

IL_0014:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3->____next;
		V_1 = L_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____anEdge;
		V_2 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_2;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_2;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_2;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Lnext;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		V_3 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_2;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_2;
		Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B(L_16, L_17, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_18 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_19 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_2;
		NullCheck(L_18);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_18, L_19, L_20, NULL);
	}

IL_0069:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = V_1;
		V_0 = L_21;
	}

IL_006c:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_22 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_23 = __this->____mesh;
		NullCheck(L_23);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_24 = L_23->____fHead;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_22) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_4;
		if (L_25)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC(__this, NULL);
		Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA(__this, NULL);
		Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4(__this, NULL);
		Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8(__this, NULL);
		goto IL_0073;
	}

IL_001f:
	{
		goto IL_0066;
	}

IL_0022:
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_0 = __this->____pq;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86(L_0, PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86_RuntimeMethod_var);
		V_1 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = V_1;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = V_0;
		bool L_5;
		L_5 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_3, L_4, NULL);
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B5_0 = 1;
	}

IL_003f:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_006a;
	}

IL_0046:
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_7 = __this->____pq;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8;
		L_8 = PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330(L_7, PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var);
		V_1 = L_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = V_0;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____anEdge;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_1;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____anEdge;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_10, L_12, NULL);
	}

IL_0066:
	{
		V_3 = (bool)1;
		goto IL_0022;
	}

IL_006a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = V_0;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_13, NULL);
	}

IL_0073:
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_14 = __this->____pq;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15;
		L_15 = PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330(L_14, PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15;
		V_0 = L_16;
		V_4 = (bool)((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_001f;
		}
	}
	{
		Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E(__this, NULL);
		Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784(__this, NULL);
		Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4(__this, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_18 = __this->____mesh;
		NullCheck(L_18);
		Mesh_Check_m60A4227D366A3F601EC5B8D95D672862D9BC8146(L_18, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 Tess_get_Normal_mCDA91ACB90DDB93FB587F1DDCD639F0D46AA0405 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = __this->____normal;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* Tess_get_Vertices_mDBE386129B4DF1C7D1F16A937D2D47FFF3567E45 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* V_0 = NULL;
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_0 = __this->____vertices;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_VertexCount_m243B19BDF8F6767DA70606FA5D8C26C590A9D210 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____vertexCount;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Tess_get_Elements_mED221BAB8BAAAC0EA4160C2C5DA5E38803883D7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____elements;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_ElementCount_m1D5AF4E9A9295BA0D57AA883D2C226D32C154E3F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____elementCount;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_m9C50EAA56E0DBFFB1B779D0A921ECA9C7984E7A2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* L_0 = (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04*)il2cpp_codegen_object_new(DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var);
		DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD(L_0, NULL);
		Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		__this->___SUnitX = (1.0f);
		__this->___SUnitY = (0.0f);
		__this->___SentinelCoord = (4.00000006E+30f);
		__this->___NoEmptyPolygons = (bool)0;
		__this->___UsePooling = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero;
		__this->____normal = L_0;
		float L_1 = (0.0f);
		V_0 = L_1;
		__this->____bmaxY = L_1;
		float L_2 = V_0;
		float L_3 = L_2;
		V_0 = L_3;
		__this->____bmaxX = L_3;
		float L_4 = V_0;
		float L_5 = L_4;
		V_0 = L_5;
		__this->____bminY = L_5;
		float L_6 = V_0;
		__this->____bminX = L_6;
		__this->____windingRule = 0;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_7 = ___0_pool;
		__this->____pool = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool), (void*)L_7);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_8 = __this->____pool;
		V_1 = (bool)((((RuntimeObject*)(IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0090;
		}
	}
	{
		NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D* L_10 = (NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D*)il2cpp_codegen_object_new(NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D_il2cpp_TypeInfo_var);
		NullPool__ctor_mA9794AE1C4917832E71637ADA7B763D44F1AADCA(L_10, NULL);
		__this->____pool = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool), (void*)L_10);
	}

IL_0090:
	{
		__this->____mesh = (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh), (void*)(Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL);
		__this->____vertices = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL);
		__this->____vertexCount = 0;
		__this->____elements = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____elementCount = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_norm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_8 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_9 = NULL;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____vHead;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1->____next;
		V_0 = L_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_0;
		NullCheck(L_5);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_5->____coords);
		float L_7 = L_6->___X;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_7);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = V_0;
		NullCheck(L_9);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_9->____coords);
		float L_11 = L_10->___Y;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_11);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = L_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = V_0;
		NullCheck(L_13);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_14 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_13->____coords);
		float L_15 = L_14->___Z;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_15);
		V_1 = L_12;
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_16 = (VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)SZArrayNew(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_17 = L_16;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_18);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_19 = L_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = V_0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_20);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_21 = L_19;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_22);
		V_2 = L_21;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_23;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = V_0;
		NullCheck(L_25);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_26 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_25->____coords);
		float L_27 = L_26->___X;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_27);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_24;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = V_0;
		NullCheck(L_29);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_30 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_29->____coords);
		float L_31 = L_30->___Y;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_31);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_28;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = V_0;
		NullCheck(L_33);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_34 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_33->____coords);
		float L_35 = L_34->___Z;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_35);
		V_3 = L_32;
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_36 = (VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)SZArrayNew(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_37 = L_36;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_38);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_39 = L_37;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = V_0;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_40);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_41 = L_39;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = V_0;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_42);
		V_4 = L_41;
		goto IL_01a8;
	}

IL_00a0:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_0;
		NullCheck(L_43);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_44 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_43->____coords);
		float L_45 = L_44->___X;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = 0;
		float L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_13 = (bool)((((float)L_45) < ((float)L_48))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_00cb;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = V_0;
		NullCheck(L_51);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_52 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_51->____coords);
		float L_53 = L_52->___X;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_53);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_54 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = V_0;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_55);
	}

IL_00cb:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = V_0;
		NullCheck(L_56);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_57 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_56->____coords);
		float L_58 = L_57->___Y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60 = 1;
		float L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_14 = (bool)((((float)L_58) < ((float)L_61))? 1 : 0);
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_00f5;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_63 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_64 = V_0;
		NullCheck(L_64);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_65 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_64->____coords);
		float L_66 = L_65->___Y;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_66);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_67 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_68 = V_0;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_68);
	}

IL_00f5:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = V_0;
		NullCheck(L_69);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_70 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_69->____coords);
		float L_71 = L_70->___Z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_72 = V_1;
		NullCheck(L_72);
		int32_t L_73 = 2;
		float L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_15 = (bool)((((float)L_71) < ((float)L_74))? 1 : 0);
		bool L_75 = V_15;
		if (!L_75)
		{
			goto IL_011f;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_76 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = V_0;
		NullCheck(L_77);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_78 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_77->____coords);
		float L_79 = L_78->___Z;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_79);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_80 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = V_0;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_81);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_81);
	}

IL_011f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = V_0;
		NullCheck(L_82);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_83 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_82->____coords);
		float L_84 = L_83->___X;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = V_3;
		NullCheck(L_85);
		int32_t L_86 = 0;
		float L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_16 = (bool)((((float)L_84) > ((float)L_87))? 1 : 0);
		bool L_88 = V_16;
		if (!L_88)
		{
			goto IL_014a;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_89 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_90 = V_0;
		NullCheck(L_90);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_91 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_90->____coords);
		float L_92 = L_91->___X;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_92);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_93 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_94 = V_0;
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_94);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_94);
	}

IL_014a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_95 = V_0;
		NullCheck(L_95);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_96 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_95->____coords);
		float L_97 = L_96->___Y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_98 = V_3;
		NullCheck(L_98);
		int32_t L_99 = 1;
		float L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_17 = (bool)((((float)L_97) > ((float)L_100))? 1 : 0);
		bool L_101 = V_17;
		if (!L_101)
		{
			goto IL_0175;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_102 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_103 = V_0;
		NullCheck(L_103);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_104 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_103->____coords);
		float L_105 = L_104->___Y;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_105);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_106 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_107 = V_0;
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, L_107);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_107);
	}

IL_0175:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_108 = V_0;
		NullCheck(L_108);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_109 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_108->____coords);
		float L_110 = L_109->___Z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_111 = V_3;
		NullCheck(L_111);
		int32_t L_112 = 2;
		float L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_18 = (bool)((((float)L_110) > ((float)L_113))? 1 : 0);
		bool L_114 = V_18;
		if (!L_114)
		{
			goto IL_01a0;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_115 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_116 = V_0;
		NullCheck(L_116);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_117 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_116->____coords);
		float L_118 = L_117->___Z;
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_118);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_119 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_120 = V_0;
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_120);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_120);
	}

IL_01a0:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_121 = V_0;
		NullCheck(L_121);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_122 = L_121->____next;
		V_0 = L_122;
	}

IL_01a8:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_123 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_124 = __this->____mesh;
		NullCheck(L_124);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_125 = L_124->____vHead;
		V_19 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_123) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_125))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_126 = V_19;
		if (L_126)
		{
			goto IL_00a0;
		}
	}
	{
		V_5 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_127 = V_3;
		NullCheck(L_127);
		int32_t L_128 = 1;
		float L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_130 = V_1;
		NullCheck(L_130);
		int32_t L_131 = 1;
		float L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_133 = V_3;
		NullCheck(L_133);
		int32_t L_134 = 0;
		float L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_136 = V_1;
		NullCheck(L_136);
		int32_t L_137 = 0;
		float L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		V_20 = (bool)((((float)((float)il2cpp_codegen_subtract(L_129, L_132))) > ((float)((float)il2cpp_codegen_subtract(L_135, L_138))))? 1 : 0);
		bool L_139 = V_20;
		if (!L_139)
		{
			goto IL_01e0;
		}
	}
	{
		V_5 = 1;
	}

IL_01e0:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_140 = V_3;
		NullCheck(L_140);
		int32_t L_141 = 2;
		float L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_143 = V_1;
		NullCheck(L_143);
		int32_t L_144 = 2;
		float L_145 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_146 = V_3;
		int32_t L_147 = V_5;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		float L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_150 = V_1;
		int32_t L_151 = V_5;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		float L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_21 = (bool)((((float)((float)il2cpp_codegen_subtract(L_142, L_145))) > ((float)((float)il2cpp_codegen_subtract(L_149, L_153))))? 1 : 0);
		bool L_154 = V_21;
		if (!L_154)
		{
			goto IL_01fd;
		}
	}
	{
		V_5 = 2;
	}

IL_01fd:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_155 = V_1;
		int32_t L_156 = V_5;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		float L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_159 = V_3;
		int32_t L_160 = V_5;
		NullCheck(L_159);
		int32_t L_161 = L_160;
		float L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		V_22 = (bool)((((int32_t)((!(((float)L_158) >= ((float)L_162)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_163 = V_22;
		if (!L_163)
		{
			goto IL_0230;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_164 = ___0_norm;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_165;
		memset((&L_165), 0, sizeof(L_165));
		Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C((&L_165), (0.0f), (0.0f), (1.0f), NULL);
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_164 = L_165;
		goto IL_039b;
	}

IL_0230:
	{
		V_6 = (0.0f);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_166 = V_2;
		int32_t L_167 = V_5;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		V_8 = L_169;
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_170 = V_4;
		int32_t L_171 = V_5;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_9 = L_173;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_174 = V_8;
		NullCheck(L_174);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_175 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_174->____coords);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_176 = V_9;
		NullCheck(L_176);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_177 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_176->____coords);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008(L_175, L_177, (&V_10), NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_178 = __this->____mesh;
		NullCheck(L_178);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_179 = L_178->____vHead;
		NullCheck(L_179);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_180 = L_179->____next;
		V_0 = L_180;
		goto IL_034b;
	}

IL_0270:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_181 = V_0;
		NullCheck(L_181);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_182 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_181->____coords);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_183 = V_9;
		NullCheck(L_183);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_184 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_183->____coords);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008(L_182, L_184, (&V_11), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_185 = V_10;
		float L_186 = L_185.___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_187 = V_11;
		float L_188 = L_187.___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_189 = V_10;
		float L_190 = L_189.___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_191 = V_11;
		float L_192 = L_191.___Y;
		(&V_12)->___X = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_186, L_188)), ((float)il2cpp_codegen_multiply(L_190, L_192))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_193 = V_10;
		float L_194 = L_193.___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_195 = V_11;
		float L_196 = L_195.___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_197 = V_10;
		float L_198 = L_197.___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_199 = V_11;
		float L_200 = L_199.___Z;
		(&V_12)->___Y = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_194, L_196)), ((float)il2cpp_codegen_multiply(L_198, L_200))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_201 = V_10;
		float L_202 = L_201.___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_203 = V_11;
		float L_204 = L_203.___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_205 = V_10;
		float L_206 = L_205.___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_207 = V_11;
		float L_208 = L_207.___X;
		(&V_12)->___Z = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_202, L_204)), ((float)il2cpp_codegen_multiply(L_206, L_208))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_209 = V_12;
		float L_210 = L_209.___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_211 = V_12;
		float L_212 = L_211.___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_213 = V_12;
		float L_214 = L_213.___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_215 = V_12;
		float L_216 = L_215.___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_217 = V_12;
		float L_218 = L_217.___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_219 = V_12;
		float L_220 = L_219.___Z;
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_210, L_212)), ((float)il2cpp_codegen_multiply(L_214, L_216)))), ((float)il2cpp_codegen_multiply(L_218, L_220))));
		float L_221 = V_7;
		float L_222 = V_6;
		V_23 = (bool)((((float)L_221) > ((float)L_222))? 1 : 0);
		bool L_223 = V_23;
		if (!L_223)
		{
			goto IL_0343;
		}
	}
	{
		float L_224 = V_7;
		V_6 = L_224;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_225 = ___0_norm;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_226 = V_12;
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_225 = L_226;
	}

IL_0343:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_227 = V_0;
		NullCheck(L_227);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_228 = L_227->____next;
		V_0 = L_228;
	}

IL_034b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_229 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_230 = __this->____mesh;
		NullCheck(L_230);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_231 = L_230->____vHead;
		V_24 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_229) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_231))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_232 = V_24;
		if (L_232)
		{
			goto IL_0270;
		}
	}
	{
		float L_233 = V_6;
		V_25 = (bool)((((int32_t)((!(((float)L_233) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_234 = V_25;
		if (!L_234)
		{
			goto IL_039b;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_235 = ___0_norm;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_236 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero;
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_235 = L_236;
		int32_t L_237;
		L_237 = Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F((&V_10), NULL);
		V_5 = L_237;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_238 = ___0_norm;
		int32_t L_239 = V_5;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_238, L_239, (1.0f), NULL);
	}

IL_039b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	bool V_6 = false;
	{
		V_0 = (0.0f);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next;
		V_1 = L_2;
		goto IL_0044;
	}

IL_001a:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_1;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____anEdge;
		NullCheck(L_4);
		int32_t L_5 = L_4->____winding;
		V_2 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_003d;
	}

IL_0033:
	{
		float L_7 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = V_1;
		float L_9;
		L_9 = MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859(L_8, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_7, L_9));
	}

IL_003d:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = V_1;
		NullCheck(L_10);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = L_10->____next;
		V_1 = L_11;
	}

IL_0044:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_13 = __this->____mesh;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____fHead;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_12) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_001a;
		}
	}
	{
		float L_16 = V_0;
		V_4 = (bool)((((float)L_16) < ((float)(0.0f)))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00bb;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_18 = __this->____mesh;
		NullCheck(L_18);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = L_18->____vHead;
		NullCheck(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = L_19->____next;
		V_5 = L_20;
		goto IL_0096;
	}

IL_007c:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_5;
		NullCheck(L_22);
		float L_23 = L_22->____t;
		NullCheck(L_21);
		L_21->____t = ((-L_23));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = V_5;
		NullCheck(L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = L_24->____next;
		V_5 = L_25;
	}

IL_0096:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = V_5;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_27 = __this->____mesh;
		NullCheck(L_27);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = L_27->____vHead;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_26) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_007c;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_30 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____tUnit);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Neg_m615687EA76621EE708A5F7836B33DF54DC67E58C(L_30, NULL);
	}

IL_00bb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_8 = NULL;
	bool V_9 = false;
	float V_10 = 0.0f;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B8_1 = NULL;
	int32_t G_B7_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	int32_t G_B9_1 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B9_2 = NULL;
	int32_t G_B11_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B11_1 = NULL;
	int32_t G_B10_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B10_1 = NULL;
	float G_B12_0 = 0.0f;
	int32_t G_B12_1 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B12_2 = NULL;
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = __this->____normal;
		V_0 = L_0;
		V_1 = (bool)0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = V_0;
		float L_2 = L_1.___X;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_3 = V_0;
		float L_4 = L_3.___Y;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_5 = V_0;
		float L_6 = L_5.___Z;
		G_B4_0 = ((((float)L_6) == ((float)(0.0f)))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_4 = (bool)G_B4_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907(__this, (&V_0), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_8 = V_0;
		__this->____normal = L_8;
		V_1 = (bool)1;
	}

IL_004e:
	{
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F((&V_0), NULL);
		V_2 = L_9;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____sUnit);
		int32_t L_11 = V_2;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_10, L_11, (0.0f), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_12 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____sUnit);
		int32_t L_13 = V_2;
		float L_14 = __this->___SUnitX;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_12, ((int32_t)(((int32_t)il2cpp_codegen_add(L_13, 1))%3)), L_14, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_15 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____sUnit);
		int32_t L_16 = V_2;
		float L_17 = __this->___SUnitY;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_15, ((int32_t)(((int32_t)il2cpp_codegen_add(L_16, 2))%3)), L_17, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_18 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____tUnit);
		int32_t L_19 = V_2;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_18, L_19, (0.0f), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_20 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____tUnit);
		int32_t L_21 = V_2;
		int32_t L_22 = V_2;
		float L_23;
		L_23 = Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318((&V_0), L_22, NULL);
		if ((((float)L_23) > ((float)(0.0f))))
		{
			G_B8_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_21, 1))%3));
			G_B8_1 = L_20;
			goto IL_00ca;
		}
		G_B7_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_21, 1))%3));
		G_B7_1 = L_20;
	}
	{
		float L_24 = __this->___SUnitY;
		G_B9_0 = L_24;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00d1;
	}

IL_00ca:
	{
		float L_25 = __this->___SUnitY;
		G_B9_0 = ((-L_25));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00d1:
	{
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(G_B9_2, G_B9_1, G_B9_0, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_26 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____tUnit);
		int32_t L_27 = V_2;
		int32_t L_28 = V_2;
		float L_29;
		L_29 = Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318((&V_0), L_28, NULL);
		if ((((float)L_29) > ((float)(0.0f))))
		{
			G_B11_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_27, 2))%3));
			G_B11_1 = L_26;
			goto IL_00fa;
		}
		G_B10_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_27, 2))%3));
		G_B10_1 = L_26;
	}
	{
		float L_30 = __this->___SUnitX;
		G_B12_0 = ((-L_30));
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_0100;
	}

IL_00fa:
	{
		float L_31 = __this->___SUnitX;
		G_B12_0 = L_31;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_0100:
	{
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(G_B12_2, G_B12_1, G_B12_0, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_32 = __this->____mesh;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____vHead;
		NullCheck(L_33);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = L_33->____next;
		V_5 = L_34;
		goto IL_0159;
	}

IL_011a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = V_5;
		NullCheck(L_35);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_36 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_35->____coords);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_37 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____sUnit);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = V_5;
		NullCheck(L_38);
		float* L_39 = (float*)(&L_38->____s);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65(L_36, L_37, L_39, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = V_5;
		NullCheck(L_40);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_41 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_40->____coords);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_42 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____tUnit);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_5;
		NullCheck(L_43);
		float* L_44 = (float*)(&L_43->____t);
		Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65(L_41, L_42, L_44, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45 = V_5;
		NullCheck(L_45);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = L_45->____next;
		V_5 = L_46;
	}

IL_0159:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = V_5;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_48 = __this->____mesh;
		NullCheck(L_48);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49 = L_48->____vHead;
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_47) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_49))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_50 = V_6;
		if (L_50)
		{
			goto IL_011a;
		}
	}
	{
		bool L_51 = V_1;
		V_7 = L_51;
		bool L_52 = V_7;
		if (!L_52)
		{
			goto IL_0181;
		}
	}
	{
		Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469(__this, NULL);
	}

IL_0181:
	{
		V_3 = (bool)1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_53 = __this->____mesh;
		NullCheck(L_53);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = L_53->____vHead;
		NullCheck(L_54);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = L_54->____next;
		V_8 = L_55;
		goto IL_026f;
	}

IL_019a:
	{
		bool L_56 = V_3;
		V_9 = L_56;
		bool L_57 = V_9;
		if (!L_57)
		{
			goto IL_01db;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = V_8;
		NullCheck(L_58);
		float L_59 = L_58->____s;
		float L_60 = L_59;
		V_10 = L_60;
		__this->____bmaxX = L_60;
		float L_61 = V_10;
		__this->____bminX = L_61;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = V_8;
		NullCheck(L_62);
		float L_63 = L_62->____t;
		float L_64 = L_63;
		V_10 = L_64;
		__this->____bmaxY = L_64;
		float L_65 = V_10;
		__this->____bminY = L_65;
		V_3 = (bool)0;
		goto IL_0265;
	}

IL_01db:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = V_8;
		NullCheck(L_66);
		float L_67 = L_66->____s;
		float L_68 = __this->____bminX;
		V_11 = (bool)((((float)L_67) < ((float)L_68))? 1 : 0);
		bool L_69 = V_11;
		if (!L_69)
		{
			goto IL_01fe;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70 = V_8;
		NullCheck(L_70);
		float L_71 = L_70->____s;
		__this->____bminX = L_71;
	}

IL_01fe:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = V_8;
		NullCheck(L_72);
		float L_73 = L_72->____s;
		float L_74 = __this->____bmaxX;
		V_12 = (bool)((((float)L_73) > ((float)L_74))? 1 : 0);
		bool L_75 = V_12;
		if (!L_75)
		{
			goto IL_0220;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_76 = V_8;
		NullCheck(L_76);
		float L_77 = L_76->____s;
		__this->____bmaxX = L_77;
	}

IL_0220:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = V_8;
		NullCheck(L_78);
		float L_79 = L_78->____t;
		float L_80 = __this->____bminY;
		V_13 = (bool)((((float)L_79) < ((float)L_80))? 1 : 0);
		bool L_81 = V_13;
		if (!L_81)
		{
			goto IL_0242;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = V_8;
		NullCheck(L_82);
		float L_83 = L_82->____t;
		__this->____bminY = L_83;
	}

IL_0242:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_84 = V_8;
		NullCheck(L_84);
		float L_85 = L_84->____t;
		float L_86 = __this->____bmaxY;
		V_14 = (bool)((((float)L_85) > ((float)L_86))? 1 : 0);
		bool L_87 = V_14;
		if (!L_87)
		{
			goto IL_0264;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_88 = V_8;
		NullCheck(L_88);
		float L_89 = L_88->____t;
		__this->____bmaxY = L_89;
	}

IL_0264:
	{
	}

IL_0265:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_90 = V_8;
		NullCheck(L_90);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_91 = L_90->____next;
		V_8 = L_91;
	}

IL_026f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_92 = V_8;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_93 = __this->____mesh;
		NullCheck(L_93);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_94 = L_93->____vHead;
		V_15 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_92) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_94))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_95 = V_15;
		if (L_95)
		{
			goto IL_019a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_face, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B29_0 = 0;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___0_face;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_3) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Lnext;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		G_B3_0 = ((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)G_B3_0, NULL);
		goto IL_0034;
	}

IL_002d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_0;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10;
		L_10 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_9, NULL);
		V_0 = L_10;
	}

IL_0034:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12;
		L_12 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_11, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____Org;
		bool L_15;
		L_15 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_12, L_14, NULL);
		V_2 = L_15;
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0052;
	}

IL_004b:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_0;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Lnext;
		V_0 = L_18;
	}

IL_0052:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_0;
		NullCheck(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = L_19->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22;
		L_22 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_21, NULL);
		bool L_23;
		L_23 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_20, L_22, NULL);
		V_3 = L_23;
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_004b;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26;
		L_26 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_25, NULL);
		V_1 = L_26;
		goto IL_0174;
	}

IL_0073:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_0;
		NullCheck(L_27);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28;
		L_28 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_27, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_1;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = L_29->____Org;
		bool L_31;
		L_31 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_28, L_30, NULL);
		V_4 = L_31;
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_00ae;
	}

IL_008e:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_33 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_34 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_1;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = L_35->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		NullCheck(L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38;
		L_38 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_33, L_34, L_36, L_37, NULL);
		NullCheck(L_38);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = L_38->____Sym;
		V_1 = L_39;
	}

IL_00ae:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = L_40->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_0;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_41) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_42)))
		{
			goto IL_00ef;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_1;
		NullCheck(L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = L_43->____Lnext;
		bool L_45;
		L_45 = Geom_EdgeGoesLeft_mB470DCF8C4FD679BB83397B8DE58638B3896DC9B(L_44, NULL);
		if (L_45)
		{
			goto IL_00ec;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		NullCheck(L_46);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = L_46->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_1;
		NullCheck(L_48);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49;
		L_49 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_48, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_1;
		NullCheck(L_50);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = L_50->____Lnext;
		NullCheck(L_51);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52;
		L_52 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_51, NULL);
		float L_53;
		L_53 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_47, L_49, L_52, NULL);
		G_B17_0 = ((((int32_t)((!(((float)L_53) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B17_0 = 1;
	}

IL_00ed:
	{
		G_B19_0 = G_B17_0;
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B19_0 = 0;
	}

IL_00f0:
	{
		V_5 = (bool)G_B19_0;
		bool L_54 = V_5;
		if (L_54)
		{
			goto IL_008e;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_1;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56;
		L_56 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_55, NULL);
		V_1 = L_56;
		goto IL_0173;
	}

IL_0100:
	{
		goto IL_0123;
	}

IL_0103:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_57 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_58 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60 = V_0;
		NullCheck(L_60);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61;
		L_61 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_60, NULL);
		NullCheck(L_57);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62;
		L_62 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_57, L_58, L_59, L_61, NULL);
		NullCheck(L_62);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = L_62->____Sym;
		V_0 = L_63;
	}

IL_0123:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64 = V_1;
		NullCheck(L_64);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65 = L_64->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66 = V_0;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_65) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_66)))
		{
			goto IL_0164;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_0;
		NullCheck(L_67);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68;
		L_68 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_67, NULL);
		bool L_69;
		L_69 = Geom_EdgeGoesRight_m5B4F1EB6223DBC3AD38DC58AE036CA922E1319CE(L_68, NULL);
		if (L_69)
		{
			goto IL_0161;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = V_0;
		NullCheck(L_70);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71;
		L_71 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_70, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_72 = V_0;
		NullCheck(L_72);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_73 = L_72->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_74 = V_0;
		NullCheck(L_74);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_75;
		L_75 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_74, NULL);
		NullCheck(L_75);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_76 = L_75->____Org;
		float L_77;
		L_77 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_71, L_73, L_76, NULL);
		G_B27_0 = ((((int32_t)((!(((float)L_77) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0162;
	}

IL_0161:
	{
		G_B27_0 = 1;
	}

IL_0162:
	{
		G_B29_0 = G_B27_0;
		goto IL_0165;
	}

IL_0164:
	{
		G_B29_0 = 0;
	}

IL_0165:
	{
		V_6 = (bool)G_B29_0;
		bool L_78 = V_6;
		if (L_78)
		{
			goto IL_0103;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_79 = V_0;
		NullCheck(L_79);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_80 = L_79->____Lnext;
		V_0 = L_80;
	}

IL_0173:
	{
	}

IL_0174:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_81 = V_0;
		NullCheck(L_81);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_82 = L_81->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_83 = V_1;
		V_7 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_82) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_83))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_7;
		if (L_84)
		{
			goto IL_0073;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_85 = V_1;
		NullCheck(L_85);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_86 = L_85->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_87 = V_0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_86) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_87))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		goto IL_01bd;
	}

IL_019d:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_88 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_89 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_90 = V_1;
		NullCheck(L_90);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_91 = L_90->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_92 = V_1;
		NullCheck(L_88);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_93;
		L_93 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_88, L_89, L_91, L_92, NULL);
		NullCheck(L_93);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_94 = L_93->____Sym;
		V_1 = L_94;
	}

IL_01bd:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_95 = V_1;
		NullCheck(L_95);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_96 = L_95->____Lnext;
		NullCheck(L_96);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_97 = L_96->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_98 = V_0;
		V_8 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_97) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_8;
		if (L_99)
		{
			goto IL_019d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_0033;
	}

IL_0014:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3->____next;
		V_1 = L_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = V_0;
		Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894(__this, L_8, NULL);
	}

IL_0030:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = V_1;
		V_0 = L_9;
	}

IL_0033:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_11 = __this->____mesh;
		NullCheck(L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = L_11->____fHead;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_10) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DiscardExterior_m4AAC0C1966660472AC09B4A209FD519837598ECD (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_0041;
	}

IL_0014:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3->____next;
		V_1 = L_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_8 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_9 = __this->____pool;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = V_0;
		NullCheck(L_8);
		Mesh_ZapFace_m40CB995646CB70A3A752001902CF3A1289CC54E7(L_8, L_9, L_10, NULL);
	}

IL_003e:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = V_1;
		V_0 = L_11;
	}

IL_0041:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_13 = __this->____mesh;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____fHead;
		V_3 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_12) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___0_value, bool ___1_keepOnlyBoundary, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B4_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B5_1 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eHead;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_0084;
	}

IL_0014:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____next;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		NullCheck(L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6;
		L_6 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_5, NULL);
		NullCheck(L_6);
		bool L_7 = L_6->____inside;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		NullCheck(L_8);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = L_8->____Lface;
		NullCheck(L_9);
		bool L_10 = L_9->____inside;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____Lface;
		NullCheck(L_14);
		bool L_15 = L_14->____inside;
		if (L_15)
		{
			G_B4_0 = L_12;
			goto IL_004e;
		}
		G_B3_0 = L_12;
	}
	{
		int32_t L_16 = ___0_value;
		G_B5_0 = ((-L_16));
		G_B5_1 = G_B3_0;
		goto IL_004f;
	}

IL_004e:
	{
		int32_t L_17 = ___0_value;
		G_B5_0 = L_17;
		G_B5_1 = G_B4_0;
	}

IL_004f:
	{
		NullCheck(G_B5_1);
		G_B5_1->____winding = G_B5_0;
		goto IL_0081;
	}

IL_0057:
	{
		bool L_18 = ___1_keepOnlyBoundary;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_006b;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_20);
		L_20->____winding = 0;
		goto IL_0080;
	}

IL_006b:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_21 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_22 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_0;
		NullCheck(L_21);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_21, L_22, L_23, NULL);
	}

IL_0080:
	{
	}

IL_0081:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		V_0 = L_24;
	}

IL_0084:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_26 = __this->____mesh;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____eHead;
		V_4 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_25) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_4;
		if (L_28)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_edge, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___0_edge;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1;
		L_1 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = (-1);
		goto IL_0036;
	}

IL_0012:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___0_edge;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4;
		L_4 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_3, NULL);
		NullCheck(L_4);
		bool L_5 = L_4->____inside;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		V_1 = (-1);
		goto IL_0036;
	}

IL_0028:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___0_edge;
		NullCheck(L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8;
		L_8 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9 = L_8->____n;
		V_1 = L_9;
		goto IL_0036;
	}

IL_0036:
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___0_elementType, int32_t ___1_polySize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	float V_13 = 0.0f;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	float V_23 = 0.0f;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	{
		V_3 = 0;
		V_4 = 0;
		int32_t L_0 = ___1_polySize;
		V_8 = (bool)((((int32_t)L_0) < ((int32_t)3))? 1 : 0);
		bool L_1 = V_8;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		___1_polySize = 3;
	}

IL_0015:
	{
		int32_t L_2 = ___1_polySize;
		V_9 = (bool)((((int32_t)L_2) > ((int32_t)3))? 1 : 0);
		bool L_3 = V_9;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_4 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_5 = __this->____pool;
		int32_t L_6 = ___1_polySize;
		NullCheck(L_4);
		Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C(L_4, L_5, L_6, NULL);
	}

IL_0034:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_7 = __this->____mesh;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = L_7->____vHead;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____next;
		V_0 = L_9;
		goto IL_0055;
	}

IL_0047:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = V_0;
		NullCheck(L_10);
		L_10->____n = (-1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_0;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = L_11->____next;
		V_0 = L_12;
	}

IL_0055:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_14 = __this->____mesh;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____vHead;
		V_10 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_13) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_10;
		if (L_16)
		{
			goto IL_0047;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_17 = __this->____mesh;
		NullCheck(L_17);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = L_17->____fHead;
		NullCheck(L_18);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_19 = L_18->____next;
		V_1 = L_19;
		goto IL_013d;
	}

IL_0082:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = V_1;
		NullCheck(L_20);
		L_20->____n = (-1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = V_1;
		NullCheck(L_21);
		bool L_22 = L_21->____inside;
		V_11 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_11;
		if (!L_23)
		{
			goto IL_009e;
		}
	}
	{
		goto IL_0136;
	}

IL_009e:
	{
		bool L_24 = __this->___NoEmptyPolygons;
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00cb;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_26 = V_1;
		float L_27;
		L_27 = MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859(L_26, NULL);
		V_13 = L_27;
		float L_28 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_29;
		L_29 = fabsf(L_28);
		V_14 = (bool)((((float)L_29) < ((float)(1.40129846E-45f)))? 1 : 0);
		bool L_30 = V_14;
		if (!L_30)
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0136;
	}

IL_00ca:
	{
	}

IL_00cb:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_31 = V_1;
		NullCheck(L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = L_31->____anEdge;
		V_2 = L_32;
		V_5 = 0;
	}

IL_00d5:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_2;
		NullCheck(L_33);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = L_33->____Org;
		V_0 = L_34;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = L_35->____n;
		V_15 = (bool)((((int32_t)L_36) == ((int32_t)(-1)))? 1 : 0);
		bool L_37 = V_15;
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = V_0;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		L_38->____n = L_39;
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00fc:
	{
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_2;
		NullCheck(L_42);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = L_42->____Lnext;
		V_2 = L_43;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_45 = V_1;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____anEdge;
		V_16 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_44) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_46))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_16;
		if (L_47)
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_48 = V_5;
		int32_t L_49 = ___1_polySize;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((int32_t)L_48) > ((int32_t)L_49))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_50 = V_1;
		int32_t L_51 = V_3;
		NullCheck(L_50);
		L_50->____n = L_51;
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0136:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_53 = V_1;
		NullCheck(L_53);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_54 = L_53->____next;
		V_1 = L_54;
	}

IL_013d:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_55 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_56 = __this->____mesh;
		NullCheck(L_56);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_57 = L_56->____fHead;
		V_17 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_55) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_57))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_17;
		if (L_58)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_59 = V_3;
		__this->____elementCount = L_59;
		int32_t L_60 = ___0_elementType;
		V_18 = (bool)((((int32_t)L_60) == ((int32_t)1))? 1 : 0);
		bool L_61 = V_18;
		if (!L_61)
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_62, 2));
	}

IL_016c:
	{
		int32_t L_63 = V_3;
		int32_t L_64 = ___1_polySize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_63, L_64)));
		__this->____elements = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)L_65);
		int32_t L_66 = V_4;
		__this->____vertexCount = L_66;
		int32_t L_67 = __this->____vertexCount;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_68 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)SZArrayNew(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var, (uint32_t)L_67);
		__this->____vertices = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)L_68);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_69 = __this->____mesh;
		NullCheck(L_69);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70 = L_69->____vHead;
		NullCheck(L_70);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = L_70->____next;
		V_0 = L_71;
		goto IL_01fb;
	}

IL_01a6:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = L_72->____n;
		V_19 = (bool)((((int32_t)((((int32_t)L_73) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_19;
		if (!L_74)
		{
			goto IL_01f3;
		}
	}
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_75 = __this->____vertices;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_76 = V_0;
		NullCheck(L_76);
		int32_t L_77 = L_76->____n;
		NullCheck(L_75);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = V_0;
		NullCheck(L_78);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_79 = L_78->____coords;
		((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77)))->___Position = L_79;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_80 = __this->____vertices;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = L_81->____n;
		NullCheck(L_80);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83 = V_0;
		NullCheck(L_83);
		RuntimeObject* L_84 = L_83->____data;
		((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_82)))->___Data = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_82)))->___Data), (void*)L_84);
	}

IL_01f3:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_85 = V_0;
		NullCheck(L_85);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = L_85->____next;
		V_0 = L_86;
	}

IL_01fb:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_87 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_88 = __this->____mesh;
		NullCheck(L_88);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_89 = L_88->____vHead;
		V_20 = (bool)((((int32_t)((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_87) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_89))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_90 = V_20;
		if (L_90)
		{
			goto IL_01a6;
		}
	}
	{
		V_7 = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_91 = __this->____mesh;
		NullCheck(L_91);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_92 = L_91->____fHead;
		NullCheck(L_92);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_93 = L_92->____next;
		V_1 = L_93;
		goto IL_0351;
	}

IL_022b:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_94 = V_1;
		NullCheck(L_94);
		bool L_95 = L_94->____inside;
		V_21 = (bool)((((int32_t)L_95) == ((int32_t)0))? 1 : 0);
		bool L_96 = V_21;
		if (!L_96)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_034a;
	}

IL_0240:
	{
		bool L_97 = __this->___NoEmptyPolygons;
		V_22 = L_97;
		bool L_98 = V_22;
		if (!L_98)
		{
			goto IL_0270;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_99 = V_1;
		float L_100;
		L_100 = MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859(L_99, NULL);
		V_23 = L_100;
		float L_101 = V_23;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_102;
		L_102 = fabsf(L_101);
		V_24 = (bool)((((float)L_102) < ((float)(1.40129846E-45f)))? 1 : 0);
		bool L_103 = V_24;
		if (!L_103)
		{
			goto IL_026f;
		}
	}
	{
		goto IL_034a;
	}

IL_026f:
	{
	}

IL_0270:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_104 = V_1;
		NullCheck(L_104);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_105 = L_104->____anEdge;
		V_2 = L_105;
		V_5 = 0;
	}

IL_027a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_106 = V_2;
		NullCheck(L_106);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_107 = L_106->____Org;
		V_0 = L_107;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____elements;
		int32_t L_109 = V_7;
		int32_t L_110 = L_109;
		V_7 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_111 = V_0;
		NullCheck(L_111);
		int32_t L_112 = L_111->____n;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_110), (int32_t)L_112);
		int32_t L_113 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_113, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_114 = V_2;
		NullCheck(L_114);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_115 = L_114->____Lnext;
		V_2 = L_115;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_116 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_117 = V_1;
		NullCheck(L_117);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_118 = L_117->____anEdge;
		V_25 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_116) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_118))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_119 = V_25;
		if (L_119)
		{
			goto IL_027a;
		}
	}
	{
		int32_t L_120 = V_5;
		V_6 = L_120;
		goto IL_02d3;
	}

IL_02bc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = __this->____elements;
		int32_t L_122 = V_7;
		int32_t L_123 = L_122;
		V_7 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (int32_t)(-1));
		int32_t L_124 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_02d3:
	{
		int32_t L_125 = V_6;
		int32_t L_126 = ___1_polySize;
		V_26 = (bool)((((int32_t)L_125) < ((int32_t)L_126))? 1 : 0);
		bool L_127 = V_26;
		if (L_127)
		{
			goto IL_02bc;
		}
	}
	{
		int32_t L_128 = ___0_elementType;
		V_27 = (bool)((((int32_t)L_128) == ((int32_t)1))? 1 : 0);
		bool L_129 = V_27;
		if (!L_129)
		{
			goto IL_0349;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_130 = V_1;
		NullCheck(L_130);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_131 = L_130->____anEdge;
		V_2 = L_131;
	}

IL_02f0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = __this->____elements;
		int32_t L_133 = V_7;
		int32_t L_134 = L_133;
		V_7 = ((int32_t)il2cpp_codegen_add(L_134, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_135 = V_2;
		int32_t L_136;
		L_136 = Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8(__this, L_135, NULL);
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(L_134), (int32_t)L_136);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_137 = V_2;
		NullCheck(L_137);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_138 = L_137->____Lnext;
		V_2 = L_138;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_139 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_140 = V_1;
		NullCheck(L_140);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_141 = L_140->____anEdge;
		V_28 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_139) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_141))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_142 = V_28;
		if (L_142)
		{
			goto IL_02f0;
		}
	}
	{
		int32_t L_143 = V_5;
		V_6 = L_143;
		goto IL_033d;
	}

IL_0326:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = __this->____elements;
		int32_t L_145 = V_7;
		int32_t L_146 = L_145;
		V_7 = ((int32_t)il2cpp_codegen_add(L_146, 1));
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(L_146), (int32_t)(-1));
		int32_t L_147 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_147, 1));
	}

IL_033d:
	{
		int32_t L_148 = V_6;
		int32_t L_149 = ___1_polySize;
		V_29 = (bool)((((int32_t)L_148) < ((int32_t)L_149))? 1 : 0);
		bool L_150 = V_29;
		if (L_150)
		{
			goto IL_0326;
		}
	}
	{
	}

IL_0349:
	{
	}

IL_034a:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_151 = V_1;
		NullCheck(L_151);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_152 = L_151->____next;
		V_1 = L_152;
	}

IL_0351:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_153 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_154 = __this->____mesh;
		NullCheck(L_154);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_155 = L_154->____fHead;
		V_30 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_153) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_155))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_156 = V_30;
		if (L_156)
		{
			goto IL_022b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		V_3 = 0;
		V_4 = 0;
		__this->____vertexCount = 0;
		__this->____elementCount = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_007c;
	}

IL_0027:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->____inside;
		V_7 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_7;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0075;
	}

IL_0039:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = V_0;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____anEdge;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7;
		V_1 = L_8;
		V_2 = L_8;
	}

IL_0042:
	{
		int32_t L_9 = __this->____vertexCount;
		__this->____vertexCount = ((int32_t)il2cpp_codegen_add(L_9, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Lnext;
		V_1 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		V_8 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_8;
		if (L_14)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_15 = __this->____elementCount;
		__this->____elementCount = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0075:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_0;
		NullCheck(L_16);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = L_16->____next;
		V_0 = L_17;
	}

IL_007c:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_19 = __this->____mesh;
		NullCheck(L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = L_19->____fHead;
		V_9 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_18) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_9;
		if (L_21)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_22 = __this->____elementCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_22, 2)));
		__this->____elements = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)L_23);
		int32_t L_24 = __this->____vertexCount;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_25 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)SZArrayNew(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var, (uint32_t)L_24);
		__this->____vertices = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)L_25);
		V_5 = 0;
		V_6 = 0;
		V_3 = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_26 = __this->____mesh;
		NullCheck(L_26);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_27 = L_26->____fHead;
		NullCheck(L_27);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_28 = L_27->____next;
		V_0 = L_28;
		goto IL_017e;
	}

IL_00d5:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_29 = V_0;
		NullCheck(L_29);
		bool L_30 = L_29->____inside;
		V_10 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		goto IL_0177;
	}

IL_00ea:
	{
		V_4 = 0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_32 = V_0;
		NullCheck(L_32);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = L_32->____anEdge;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = L_33;
		V_1 = L_34;
		V_2 = L_34;
	}

IL_00f6:
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_35 = __this->____vertices;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		NullCheck(L_37);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = L_37->____Org;
		NullCheck(L_38);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_39 = L_38->____coords;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___Position = L_39;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_40 = __this->____vertices;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_1;
		NullCheck(L_42);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = L_42->____Org;
		NullCheck(L_43);
		RuntimeObject* L_44 = L_43->____data;
		((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___Data = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___Data), (void*)L_44);
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_1;
		NullCheck(L_47);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = L_47->____Lnext;
		V_1 = L_48;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_2;
		V_11 = (bool)((((int32_t)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_49) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_11;
		if (L_51)
		{
			goto IL_00f6;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = __this->____elements;
		int32_t L_53 = V_6;
		int32_t L_54 = L_53;
		V_6 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		int32_t L_55 = V_3;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)L_55);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = __this->____elements;
		int32_t L_57 = V_6;
		int32_t L_58 = L_57;
		V_6 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		int32_t L_59 = V_4;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)L_59);
		int32_t L_60 = V_3;
		int32_t L_61 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, L_61));
	}

IL_0177:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_62 = V_0;
		NullCheck(L_62);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_63 = L_62->____next;
		V_0 = L_63;
	}

IL_017e:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_64 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_65 = __this->____mesh;
		NullCheck(L_65);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_66 = L_65->____fHead;
		V_12 = (bool)((((int32_t)((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_64) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_66))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_67 = V_12;
		if (L_67)
		{
			goto IL_00d5;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___0_vertices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	float V_5 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_005e;
	}

IL_000b:
	{
		RuntimeObject* L_0 = ___0_vertices;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_2;
		L_2 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		RuntimeObject* L_3 = ___0_vertices;
		int32_t L_4 = V_1;
		RuntimeObject* L_5 = ___0_vertices;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_7;
		L_7 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_3, ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))%L_6)));
		V_3 = L_7;
		float L_8 = V_0;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_9 = V_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_10 = L_9.___Position;
		float L_11 = L_10.___X;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_12 = V_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_13 = L_12.___Position;
		float L_14 = L_13.___Y;
		V_0 = ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_11, L_14))));
		float L_15 = V_0;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_16 = V_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_17 = L_16.___Position;
		float L_18 = L_17.___Y;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_19 = V_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_20 = L_19.___Position;
		float L_21 = L_20.___X;
		V_0 = ((float)il2cpp_codegen_subtract(L_15, ((float)il2cpp_codegen_multiply(L_18, L_21))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005e:
	{
		int32_t L_23 = V_1;
		RuntimeObject* L_24 = ___0_vertices;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_24);
		V_4 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_000b;
		}
	}
	{
		float L_27 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply((0.5f), L_27));
		goto IL_0078;
	}

IL_0078:
	{
		float L_28 = V_5;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_mF667311A04886C578E9808D715A4D6470D0AD5A5 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) 
{
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_0 = ___0_vertices;
		int32_t L_1 = ___1_forceOrientation;
		Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887(__this, (RuntimeObject*)L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_m8EDE4A726EAE9475970B07B9ABA4D7F0F8D1674E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_vertices;
		int32_t L_1 = ___1_forceOrientation;
		Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		V_2 = (bool)((((RuntimeObject*)(Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_2 = __this->____pool;
		NullCheck(L_2);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_3;
		L_3 = GenericVirtualFuncInvoker0< Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* >::Invoke(IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var, L_2);
		__this->____mesh = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh), (void*)L_3);
	}

IL_0021:
	{
		V_0 = (bool)0;
		int32_t L_4 = ___1_forceOrientation;
		V_3 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_6 = ___0_vertices;
		float L_7;
		L_7 = Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841(__this, L_6, NULL);
		V_4 = L_7;
		int32_t L_8 = ___1_forceOrientation;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		float L_9 = V_4;
		if ((((float)L_9) < ((float)(0.0f))))
		{
			goto IL_0054;
		}
	}

IL_0042:
	{
		int32_t L_10 = ___1_forceOrientation;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0051;
		}
	}
	{
		float L_11 = V_4;
		G_B8_0 = ((((float)L_11) > ((float)(0.0f)))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B8_0 = 0;
	}

IL_0052:
	{
		G_B10_0 = G_B8_0;
		goto IL_0055;
	}

IL_0054:
	{
		G_B10_0 = 1;
	}

IL_0055:
	{
		V_0 = (bool)G_B10_0;
	}

IL_0057:
	{
		V_1 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		V_5 = 0;
		goto IL_0115;
	}

IL_0061:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		V_7 = (bool)((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_009b;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_14 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_15 = __this->____pool;
		NullCheck(L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16;
		L_16 = Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7(L_14, L_15, NULL);
		V_1 = L_16;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_17 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_18 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____Sym;
		NullCheck(L_17);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_17, L_18, L_19, L_21, NULL);
		goto IL_00b7;
	}

IL_009b:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_22 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_23 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25;
		L_25 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_22, L_23, L_24, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_1;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Lnext;
		V_1 = L_27;
	}

IL_00b7:
	{
		bool L_28 = V_0;
		if (L_28)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_29 = V_5;
		G_B18_0 = L_29;
		goto IL_00c9;
	}

IL_00be:
	{
		RuntimeObject* L_30 = ___0_vertices;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_30);
		int32_t L_32 = V_5;
		G_B18_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_31, 1)), L_32));
	}

IL_00c9:
	{
		V_6 = G_B18_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		NullCheck(L_33);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = L_33->____Org;
		RuntimeObject* L_35 = ___0_vertices;
		int32_t L_36 = V_6;
		NullCheck(L_35);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_37;
		L_37 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_35, L_36);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_38 = L_37.___Position;
		NullCheck(L_34);
		L_34->____coords = L_38;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_1;
		NullCheck(L_39);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = L_39->____Org;
		RuntimeObject* L_41 = ___0_vertices;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_43;
		L_43 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_41, L_42);
		RuntimeObject* L_44 = L_43.___Data;
		NullCheck(L_40);
		L_40->____data = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->____data), (void*)L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_1;
		NullCheck(L_45);
		L_45->____winding = 1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		NullCheck(L_46);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = L_46->____Sym;
		NullCheck(L_47);
		L_47->____winding = (-1);
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0115:
	{
		int32_t L_49 = V_5;
		RuntimeObject* L_50 = ___0_vertices;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_50);
		V_8 = (bool)((((int32_t)L_49) < ((int32_t)L_51))? 1 : 0);
		bool L_52 = V_8;
		if (L_52)
		{
			goto IL_0061;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_Tessellate_m1A288974947B0D69A8FC26556C151259C8C8418E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___0_windingRule, int32_t ___1_elementType, int32_t ___2_polySize, CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* ___3_combineCallback, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___4_normal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m004092468BAD1B30CA23F97F4F00ED69D37E7C01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = ___4_normal;
		__this->____normal = L_0;
		__this->____vertices = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL);
		__this->____elements = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		int32_t L_1 = ___0_windingRule;
		__this->____windingRule = L_1;
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_2 = ___3_combineCallback;
		__this->____combineCallback = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____combineCallback), (void*)L_2);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_3 = __this->____mesh;
		V_0 = (bool)((((RuntimeObject*)(Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_00a5;
	}

IL_0036:
	{
		Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2(__this, NULL);
		Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD(__this, NULL);
		int32_t L_5 = ___1_elementType;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0059;
		}
	}
	{
		Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A(__this, 1, (bool)1, NULL);
		goto IL_0062;
	}

IL_0059:
	{
		Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91(__this, NULL);
	}

IL_0062:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_7 = __this->____mesh;
		NullCheck(L_7);
		Mesh_Check_m60A4227D366A3F601EC5B8D95D672862D9BC8146(L_7, NULL);
		int32_t L_8 = ___1_elementType;
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0081;
		}
	}
	{
		Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83(__this, NULL);
		goto IL_008c;
	}

IL_0081:
	{
		int32_t L_10 = ___1_elementType;
		int32_t L_11 = ___2_polySize;
		Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B(__this, L_10, L_11, NULL);
	}

IL_008c:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_12 = __this->____pool;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_13 = __this->____mesh;
		NullCheck(L_12);
		GenericVirtualActionInvoker1< Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* >::Invoke(IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m004092468BAD1B30CA23F97F4F00ED69D37E7C01_RuntimeMethod_var, L_12, L_13);
		__this->____mesh = (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh), (void*)(Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL);
	}

IL_00a5:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Init_m80C01AA8B6EF1AF955B6E6D038266AC164C7C7B8 (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Reset_m48644BA3A77C7E987752B537061AB5CE6ADD78DD (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	{
		__this->____eUp = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eUp), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		__this->____nodeUp = (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodeUp), (void*)(Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*)NULL);
		__this->____windingNumber = 0;
		__this->____inside = (bool)0;
		__this->____sentinel = (bool)0;
		__this->____dirty = (bool)0;
		__this->____fixUpperEdge = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion__ctor_m30F0FDCDC7ACA4654AE05183BB52C250FFD904C2 (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_pinvoke(const ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F& unmarshaled, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_pinvoke& marshaled)
{
	marshaled.___Position = unmarshaled.___Position;
	if (unmarshaled.___Data != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data))
		{
			marshaled.___Data = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Data));
			(marshaled.___Data)->AddRef();
		}
		else
		{
			marshaled.___Data = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Data);
		}
	}
	else
	{
		marshaled.___Data = NULL;
	}
}
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_pinvoke_back(const ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_pinvoke& marshaled, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 unmarshaledPosition_temp_0;
	memset((&unmarshaledPosition_temp_0), 0, sizeof(unmarshaledPosition_temp_0));
	unmarshaledPosition_temp_0 = marshaled.___Position;
	unmarshaled.___Position = unmarshaledPosition_temp_0;
	if (marshaled.___Data != NULL)
	{
		unmarshaled.___Data = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Data), Il2CppIUnknown::IID, marshaled.___Data);
		}
	}
	else
	{
		unmarshaled.___Data = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data), (void*)NULL);
	}
}
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_pinvoke_cleanup(ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_pinvoke& marshaled)
{
	if (marshaled.___Data != NULL)
	{
		(marshaled.___Data)->Release();
		marshaled.___Data = NULL;
	}
}
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_com(const ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F& unmarshaled, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_com& marshaled)
{
	marshaled.___Position = unmarshaled.___Position;
	if (unmarshaled.___Data != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data))
		{
			marshaled.___Data = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Data));
			(marshaled.___Data)->AddRef();
		}
		else
		{
			marshaled.___Data = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Data);
		}
	}
	else
	{
		marshaled.___Data = NULL;
	}
}
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_com_back(const ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_com& marshaled, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 unmarshaledPosition_temp_0;
	memset((&unmarshaledPosition_temp_0), 0, sizeof(unmarshaledPosition_temp_0));
	unmarshaledPosition_temp_0 = marshaled.___Position;
	unmarshaled.___Position = unmarshaledPosition_temp_0;
	if (marshaled.___Data != NULL)
	{
		unmarshaled.___Data = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Data), Il2CppIUnknown::IID, marshaled.___Data);
		}
	}
	else
	{
		unmarshaled.___Data = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data), (void*)NULL);
	}
}
IL2CPP_EXTERN_C void ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshal_com_cleanup(ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F_marshaled_com& marshaled)
{
	if (marshaled.___Data != NULL)
	{
		(marshaled.___Data)->Release();
		marshaled.___Data = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mB49AE90A9B85CA37EC7EE928BC9EE585D35C8C03 (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, RuntimeObject* ___1_data, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = ___0_position;
		__this->___Position = L_0;
		RuntimeObject* L_1 = ___1_data;
		__this->___Data = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ContourVertex__ctor_mB49AE90A9B85CA37EC7EE928BC9EE585D35C8C03_AdjustorThunk (RuntimeObject* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, RuntimeObject* ___1_data, const RuntimeMethod* method)
{
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F*>(__this + _offset);
	ContourVertex__ctor_mB49AE90A9B85CA37EC7EE928BC9EE585D35C8C03(_thisAdjusted, ___0_position, ___1_data, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = __this->___Position;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = __this->___Data;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A(_thisAdjusted, method);
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
RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_Multicast(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* currentDelegate = reinterpret_cast<CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_position, ___1_data, ___2_weights, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_OpenInst(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_position, ___1_data, ___2_weights, method);
}
RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_OpenStatic(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_position, ___1_data, ___2_weights, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineCallback__ctor_m4C08DD9F36BCA4F132C1AE0D7A6FAA7540EC1C47 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, ___1_data, ___2_weights, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_BeginInvoke_m09E8A0532AEF980A61621340B2771D1C82EAAF55 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var, &___0_position);
	__d_args[1] = ___1_data;
	__d_args[2] = ___2_weights;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_EndInvoke_mC4E88FBD080C9434FB5F0E99038239BF43DB8173 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_m567FA415136EB70CAA4B9E3B8D1F5A133EBAD5B3_inline (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, ___1_data, ___2_weights, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
